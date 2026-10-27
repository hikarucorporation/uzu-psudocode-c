// Fallback: exporta el listado ASM + bytes de funciones concretas (para las que
// el decompilador no puede generar C). Un .asm por funcion.
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Namespace;

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.security.MessageDigest;
import java.util.LinkedList;
import java.util.List;

public class ExportAsm extends GhidraScript {

    private static final int MAX_COMPONENT = 90;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        File listFile = (args.length > 1)
                ? new File(args[1])
                : askFile("Fichero con direcciones", "Aceptar");
        if (outDir == null || listFile == null) {
            return;
        }
        Path out = outDir.toPath().toAbsolutePath();
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();

        List<String> lines = Files.readAllLines(listFile.toPath(),
                StandardCharsets.UTF_8);
        for (String raw : lines) {
            String line = raw.trim();
            if (line.isEmpty() || line.startsWith("#")) {
                continue;
            }
            String hex = line.split("\\s+")[0].replaceFirst("^0[xX]", "");
            Address addr = currentProgram.getAddressFactory()
                    .getDefaultAddressSpace().getAddress(hex);
            Function f = fm.getFunctionAt(addr);
            if (f == null) {
                f = fm.getFunctionContaining(addr);
            }
            if (f == null) {
                println("Sin funcion en " + hex);
                continue;
            }

            String nsPath = namespacePath(f);
            boolean isImport = nsPath.equals("_EXTERNAL_")
                    || nsPath.startsWith("_EXTERNAL_/");
            Path baseDir = out.resolve(isImport ? "Imports" : "Functions");
            Path dir = nsPath.isEmpty() ? baseDir : baseDir.resolve(nsPath);
            Files.createDirectories(dir);
            Path target = dir.resolve(safe(f.getName()) + "_"
                    + String.format("%08x", f.getEntryPoint().getOffset()) + ".asm");

            StringBuilder sb = new StringBuilder();
            sb.append("; Function : ").append(f.getName()).append('\n');
            sb.append("; Namespace: ").append(nsPath.replace('/', ':')).append('\n');
            sb.append("; Entry    : ").append(f.getEntryPoint()).append('\n');
            sb.append("; Body     : ").append(f.getBody().getMinAddress())
              .append(" - ").append(f.getBody().getMaxAddress()).append("\n\n");

            InstructionIterator it = listing.getInstructions(f.getBody(), true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                sb.append(ins.getAddress()).append("  ");
                for (byte b : ins.getBytes()) {
                    sb.append(String.format("%02x ", b));
                }
                sb.append("  ").append(ins).append('\n');
            }
            Files.write(target, sb.toString().getBytes(StandardCharsets.UTF_8),
                    StandardOpenOption.CREATE, StandardOpenOption.TRUNCATE_EXISTING,
                    StandardOpenOption.WRITE);
            println("ASM " + f.getEntryPoint() + " -> " + out.relativize(target));
        }
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
