// Exporta SOLO las funciones que faltan respecto a index.tsv:
//   - funciones del programa que no aparecen en el indice
//   - filas del indice cuyo .c ya no existe en disco
// No toca las que ya estan. Escribe _missing_report.txt
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Namespace;

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class ExportMissing extends GhidraScript {

    private static final int MAX_COMPONENT = 90;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        File indexFile = (args.length > 1)
                ? new File(args[1])
                : askFile("index.tsv", "Aceptar");
        if (outDir == null || indexFile == null) {
            return;
        }

        Path out = outDir.toPath().toAbsolutePath();
        Path functionsDir = out.resolve("Functions");
        Path importsDir = out.resolve("Imports");

        // ---- leer indice: direccion -> ruta relativa
        Map<Long, String> index = new HashMap<>();
        List<String> lines = Files.readAllLines(indexFile.toPath(),
                StandardCharsets.UTF_8);
        for (String line : lines) {
            String[] c = line.split("\t", -1);
            if (c.length < 5 || c[0].equals("address")) {
                continue;
            }
            try {
                index.put(Long.parseUnsignedLong(c[0].replaceFirst("^0[xX]", ""), 16), c[4]);
            } catch (NumberFormatException e) {
                // cabecera o linea rara
            }
        }

        // ---- filas del indice cuyo fichero ya no existe
        List<Long> missing = new ArrayList<>();
        for (Map.Entry<Long, String> e : index.entrySet()) {
            if (!Files.exists(out.resolve(e.getValue()))) {
                missing.add(e.getKey());
            }
        }
        int loseFiles = missing.size();

        // ---- funciones del programa que no estan en el indice
        FunctionManager fm = currentProgram.getFunctionManager();
        List<Long> nuevas = new ArrayList<>();
        int totalFuncs = 0, externas = 0;
        for (Function f : fm.getFunctions(true)) {
            totalFuncs++;
            if (f.isExternal() || f.getEntryPoint().isExternalAddress()) {
                externas++;
                continue;
            }
            long off = f.getEntryPoint().getOffset();
            if (!index.containsKey(off)) {
                nuevas.add(off);
                if (!missing.contains(off)) {
                    missing.add(off);
                }
            }
        }

        println("indice=" + index.size() + " | programa=" + totalFuncs
                + " | externas=" + externas + " | ficheros perdidos=" + loseFiles
                + " | funciones nuevas=" + nuevas.size()
                + " | a exportar=" + missing.size());

        if (missing.isEmpty()) {
            println("No falta nada. No se ha modificado ningun fichero.");
            return;
        }

        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 600;
        int maxBadData = args.length > 3 ? Integer.parseInt(args[3]) : 1000;
        if (maxBadData > 0) {
            DecompileOptions opts = new DecompileOptions();
            opts.setMaxBadData(maxBadData);
            decomp.setOptions(opts);
        }
        if (!decomp.openProgram(currentProgram)) {
            printerr("No se pudo abrir el decompilador");
            return;
        }

        Set<Long> done = new HashSet<>();
        int ok = 0, fail = 0, notFound = 0;
        List<String> report = new ArrayList<>();
        for (Long off : missing) {
            if (monitor.isCancelled()) {
                break;
            }
            if (!done.add(off)) {
                continue;
            }
            Address addr = currentProgram.getAddressFactory()
                    .getDefaultAddressSpace().getAddress(off);
            Function f = fm.getFunctionAt(addr);
            if (f == null) {
                f = fm.getFunctionContaining(addr);
            }
            if (f == null) {
                report.add(hex(off) + "\tNO_ENCONTRADA");
                notFound++;
                continue;
            }
            try {
                String nsPath = namespacePath(f);
                boolean isImport = nsPath.equals("_EXTERNAL_")
                        || nsPath.startsWith("_EXTERNAL_/");
                Path baseDir = isImport ? importsDir : functionsDir;
                Path dir = nsPath.isEmpty() ? baseDir : baseDir.resolve(nsPath);
                Files.createDirectories(dir);
                Path target = dir.resolve(safe(f.getName()) + "_"
                        + String.format("%08x", f.getEntryPoint().getOffset()) + ".c");

                String proto;
                try {
                    proto = f.getPrototypeString(false, false);
                } catch (Exception e) {
                    proto = "?";
                }

                StringBuilder sb = new StringBuilder();
                sb.append("// Function : ").append(f.getName()).append('\n');
                sb.append("// Namespace: ").append(nsPath.replace('/', ':')).append('\n');
                sb.append("// Entry    : ").append(f.getEntryPoint()).append('\n');
                sb.append("// Prototype: ").append(proto).append('\n');
                sb.append("// Body     : ").append(f.getBody().getMinAddress())
                  .append(" - ").append(f.getBody().getMaxAddress()).append("\n\n");

                DecompileResults res = decomp.decompileFunction(f, timeout, monitor);
                if (res != null && res.decompileCompleted()
                        && res.getDecompiledFunction() != null) {
                    sb.append(res.getDecompiledFunction().getC()).append('\n');
                    ok++;
                    report.add(hex(off) + "\tOK\t" + out.relativize(target));
                } else {
                    sb.append("// ERROR: la decompilacion fallo\n");
                    fail++;
                    report.add(hex(off) + "\tERROR_C\t" + out.relativize(target));
                }
                Files.write(target, sb.toString().getBytes(StandardCharsets.UTF_8),
                        StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING,
                        StandardOpenOption.WRITE);
            } catch (Exception e) {
                fail++;
                report.add(hex(off) + "\tEXCEPCION\t" + e);
            }
        }
        decomp.dispose();

        Files.write(out.resolve("_missing_report.txt"), report,
                StandardCharsets.UTF_8);
        println("Exportadas: " + ok + " | errores C: " + fail
                + " | no encontradas: " + notFound
                + " | informe: _missing_report.txt");
    }

    private static String hex(long off) {
        return String.format("%08x", off);
    }

    private String namespacePath(Function f) throws Exception {
        LinkedList<String> parts = new LinkedList<>();
        Namespace ns = f.getParentNamespace();
        int depth = 0;
        while (ns != null && !ns.isGlobal() && depth++ < 16) {
            parts.addFirst(safe(ns.getName()));
            ns = ns.getParentNamespace();
        }
        StringBuilder sb = new StringBuilder();
        for (String p : parts) {
            if (sb.length() > 0) {
                sb.append('/');
            }
            sb.append(p);
        }
        return sb.toString();
    }

    private String safe(String s) throws Exception {
        StringBuilder b = new StringBuilder();
        for (char c : s.toCharArray()) {
            if (Character.isLetterOrDigit(c) || c == '_' || c == '-' || c == '.'
                    || c == '+' || c == '~') {
                b.append(c);
            } else {
                b.append('_');
            }
        }
        String r = b.toString();
        if (r.isEmpty()) {
            r = "_";
        }
        if (r.length() > MAX_COMPONENT) {
            r = r.substring(0, MAX_COMPONENT) + "~" + shortHash(s);
        }
        if (r.equals(".") || r.equals("..")) {
            r = "_" + r;
        }
        return r;
    }

    private static String shortHash(String s) throws Exception {
        MessageDigest md = MessageDigest.getInstance("SHA-1");
        byte[] d = md.digest(s.getBytes(StandardCharsets.UTF_8));
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 4; i++) {
            sb.append(String.format("%02x", d[i]));
        }
        return sb.toString();
    }
}
