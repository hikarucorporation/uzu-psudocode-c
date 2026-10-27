// Exporta el pseudocodigo C de TODAS las funciones organizado como el Symbol Tree.
//   <out>/Functions/<namespace>/<class>/<funcion>_<addr>.c
//   <out>/Exports/<namespace>/...  (enlaces simbolicos a las funciones exportadas)
//   <out>/Imports/_imports.txt
//   <out>/Labels/_labels.txt
//   <out>/Classes/_classes.txt
//   <out>/Namespaces/_namespaces.txt
//   <out>/index.tsv
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolType;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class ExportAllDecompiled extends GhidraScript {

    private static final int MAX_COMPONENT = 90;
    private Path functionsDir, exportsDir, importsDir;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        if (outDir == null) {
            return;
        }
        Path out = outDir.toPath().toAbsolutePath();
        Files.createDirectories(out);

        // args opcionales: [1]=timeout segundos, [2]=maximo de "bad data"
        int timeout = args.length > 1 ? Integer.parseInt(args[1]) : 600;
        int maxBadData = args.length > 2 ? Integer.parseInt(args[2]) : 1000;

        functionsDir = out.resolve("Functions");
        exportsDir   = out.resolve("Exports");
        importsDir = out.resolve("Imports");
        Path labelsDir  = out.resolve("Labels");
        Path classesDir = out.resolve("Classes");
        Path namespacesDir = out.resolve("Namespaces");
        for (Path p : new Path[] { functionsDir, exportsDir, importsDir,
                                   labelsDir, classesDir, namespacesDir }) {
            Files.createDirectories(p);
        }

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

        FunctionManager fm = currentProgram.getFunctionManager();
        StringBuilder index = new StringBuilder(
                "address\tkind\tnamespace\tname\tfile\n");
        int total = 0, ok = 0, fail = 0, exported = 0;

        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) {
                break;
            }
            if (f.isExternal()) {
                continue;
            }
            total++;
            try {
                String nsPath = namespacePath(f);          // "" o "juce/AudioProcessor"
                String addr = String.format("%08x", f.getEntryPoint().getOffset());
                String fileName = safe(f.getName()) + "_" + addr + ".c";

                boolean isImport = nsPath.equals("_EXTERNAL_")
                        || nsPath.startsWith("_EXTERNAL_/");
                Path baseDir = isImport ? importsDir : functionsDir;
                Path dir = nsPath.isEmpty() ? baseDir : baseDir.resolve(nsPath);
                Files.createDirectories(dir);
                Path target = dir.resolve(fileName);

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

                index.append(f.getEntryPoint()).append('\t')
                     .append(isImport ? "Import" : "Function").append('\t')
                     .append(nsPath.replace('/', ':')).append('\t')
                     .append(f.getName()).append('\t')
                     .append(out.relativize(target)).append('\n');

                if (!isImport && f.getSymbol() != null
                        && f.getSymbol().isExternalEntryPoint()) {
                    Path link = nsPath.isEmpty()
                            ? exportsDir.resolve(fileName)
                            : exportsDir.resolve(nsPath).resolve(fileName);
                    Files.createDirectories(link.getParent());
                    Files.deleteIfExists(link);
                    Files.createSymbolicLink(link, link.getParent().relativize(target));
                    exported++;
                }

                if (total % 100 == 0) {
                    monitor.setMessage("Exportando " + total + " funciones...");
                }
            } catch (Exception e) {
                fail++;
                printerr("Fallo en " + f.getEntryPoint() + " " + f.getName()
                        + ": " + e);
            }
        }
        decomp.dispose();

        writeSymbolLists(out);
        Files.write(out.resolve("index.tsv"),
                index.toString().getBytes(StandardCharsets.UTF_8));

        println("Funciones: " + total + " | C ok: " + ok + " | fallos: " + fail
                + " | exports (enlaces): " + exported);
        println("Salida: " + out);
    }

    // ---------------------------------------------------------------- helpers

    /** Devuelve la ruta de namespaces/classes de la funcion, p.ej. "juce/AudioProcessor". */
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

    /** Nombre de fichero/carpeta seguro y corto (evita ENAMETOOLONG). */
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

    /** Listados de las otras ramas del Symbol Tree. */
    private void writeSymbolLists(Path out) throws Exception {
        List<String> imports = new ArrayList<>();
        List<String> labels = new ArrayList<>();
        List<String> classes = new ArrayList<>();
        List<String> namespaces = new ArrayList<>();

        SymbolIterator it = currentProgram.getSymbolTable().getSymbolIterator();
        while (it.hasNext()) {
            Symbol s = it.next();
            SymbolType t = s.getSymbolType();
            String line = s.getName(true) + "\t" + s.getAddress();
            if (s.isExternal()) {
                imports.add(line);
            } else if (t == SymbolType.LABEL) {
                labels.add(line);
            } else if (t == SymbolType.CLASS) {
                classes.add(line);
            } else if (t == SymbolType.NAMESPACE || t == SymbolType.LIBRARY) {
                namespaces.add(line);
            }
        }
        Collections.sort(imports);
        Collections.sort(labels);
        Collections.sort(classes);
        Collections.sort(namespaces);

        writeList(out.resolve("Imports").resolve("_imports.txt"), imports);
        writeList(out.resolve("Labels").resolve("_labels.txt"), labels);
        writeList(out.resolve("Classes").resolve("_classes.txt"), classes);
        writeList(out.resolve("Namespaces").resolve("_namespaces.txt"), namespaces);
    }

    private void writeList(Path p, List<String> lines) throws Exception {
        Files.createDirectories(p.getParent());
        try (PrintWriter pw = new PrintWriter(Files.newBufferedWriter(p,
                StandardCharsets.UTF_8))) {
            for (String l : lines) {
                pw.println(l);
            }
        }
    }
}
