// Exporta SOLO las funciones cuyas direcciones aparecen en un fichero de texto
// (una direccion hex por linea, p.ej. "0015b000" o "0x0015b000").
// Respeta la misma jerarquia que ExportAllDecompiled y sobrescribe el .c si existe.
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
import java.util.LinkedList;
import java.util.List;

public class ExportTheseFunctions extends GhidraScript {

    private static final int MAX_COMPONENT = 90;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        File listFile = (args.length > 1)
                ? new File(args[1])
                : askFile("Fichero con las direcciones (una por linea)", "Aceptar");
        if (outDir == null || listFile == null) {
            return;
        }

        Path out = outDir.toPath().toAbsolutePath();
        Path functionsDir = out.resolve("Functions");
        Path importsDir = out.resolve("Imports");

        // args opcionales: [2]=timeout segundos, [3]=maximo de "bad data"
        int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 600;
        int maxBadData = args.length > 3 ? Integer.parseInt(args[3]) : 1000;

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        if (maxBadData > 0) {
            DecompileOptions opts = new DecompileOptions();
            opts.setMaxBadData(maxBadData);
            decomp.setOptions(opts);
        }
        if (!decomp.openProgram(currentProgram)) {
            printerr("No se pudo abrir el decompilador");
            return;
        }

        List<String> lines = Files.readAllLines(listFile.toPath(),
                StandardCharsets.UTF_8);
        int total = 0, ok = 0, fail = 0, notFound = 0;

        for (String raw : lines) {
            String line = raw.trim();
            if (line.isEmpty() || line.startsWith("#")) {
                continue;
            }
            if (monitor.isCancelled()) {
                break;
            }
            total++;
            try {
                String hex = line.split("\\s+")[0].replaceFirst("^0[xX]", "");
                Address addr = currentProgram.getAddressFactory()
                        .getDefaultAddressSpace().getAddress(hex);

                Function f = fm.getFunctionAt(addr);
                if (f == null) {
                    f = fm.getFunctionContaining(addr);
                }
                if (f == null) {
                    println("Sin funcion en " + hex);
                    notFound++;
                    continue;
                }

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
                } else {
                    sb.append("// ERROR: la decompilacion fallo\n");
                    fail++;
                }
                Files.write(target, sb.toString().getBytes(StandardCharsets.UTF_8),
                        StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING,
                        StandardOpenOption.WRITE);
                println("OK " + f.getEntryPoint() + " -> " + out.relativize(target));
            } catch (Exception e) {
                fail++;
                printerr("Fallo con '" + line + "': " + e);
            }
        }
        decomp.dispose();
        println("Pedidas: " + total + " | ok: " + ok + " | fallos C: " + fail
                + " | no encontradas: " + notFound);
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
