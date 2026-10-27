// Exporta globales (declaraciones + mapa) y strings a <out>/_data/
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;

public class ExportGlobals extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        if (outDir == null) {
            return;
        }
        Path dir = outDir.toPath().toAbsolutePath().resolve("_data");
        Files.createDirectories(dir);

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        int globals = 0, strings = 0;
        try (PrintWriter gh = new PrintWriter(Files.newBufferedWriter(
                    dir.resolve("globals.h"), StandardCharsets.UTF_8));
             PrintWriter gt = new PrintWriter(Files.newBufferedWriter(
                    dir.resolve("globals.tsv"), StandardCharsets.UTF_8));
             PrintWriter st = new PrintWriter(Files.newBufferedWriter(
                    dir.resolve("strings.txt"), StandardCharsets.UTF_8))) {

            gh.println("/* Globales exportadas de Ghidra para UZU.so (declaraciones) */");
            gh.println("#ifndef UZU_GLOBALS_H");
            gh.println("#define UZU_GLOBALS_H");
            gh.println("#include \"../_types/types.h\"");
            gh.println();

            gt.println("address\tname\ttype\tsize\tvalue");

            st.println("# address\tlength\tstring");
            DataIterator it = listing.getDefinedData(true);
            while (it.hasNext()) {
                if (monitor.isCancelled()) {
                    break;
                }
                Data d = it.next();
                Address addr = d.getAddress();
                if (fm.getFunctionContaining(addr) != null) {
                    continue; // datos dentro de funciones
                }
                Symbol s = d.getPrimarySymbol();
                if (s == null) {
                    continue;
                }
                Namespace ns = s.getParentNamespace();
                if (ns != null && !ns.isGlobal()) {
                    continue; // no es global
                }
                String name = s.getName();
                DataType dt = d.getDataType();

                Object value = null;
                try {
                    value = d.getValue();
                } catch (Exception e) {
                    // valor no representable
                }

                if (value instanceof String) {
                    String str = (String) value;
                    gh.println("extern char " + name + "[];");
                    st.println(addr + "\t" + str.length() + "\t" + quote(str));
                    gt.println(addr + "\t" + name + "\tchar[]\t" + str.length()
                            + "\t" + quote(str));
                    strings++;
                } else {
                    gh.println("extern " + decl(dt, name) + ";");
                    gt.println(addr + "\t" + name + "\t" + dt.getDisplayName()
                            + "\t" + d.getLength() + "\t" + preview(value));
                    globals++;
                }
            }

            gh.println();
            gh.println("#endif /* UZU_GLOBALS_H */");
        }
        println("globales: " + globals + " | strings: " + strings);
    }

    /** Declaracion C para una variable de tipo dt llamada name. */
    private String decl(DataType dt, String name) {
        if (dt instanceof Array) {
            Array a = (Array) dt;
            return decl(a.getDataType(), name + "[" + a.getNumElements() + "]");
        }
        if (dt instanceof Pointer) {
            Pointer p = (Pointer) dt;
            DataType base = p.getDataType();
            if (base == null) {
                return "void *" + name;
            }
            String baseName = (base instanceof Array)
                    ? base.getDisplayName()
                    : base.getDisplayName();
            return baseName + " *" + name;
        }
        return dt.getDisplayName() + " " + name;
    }

    private String quote(String s) {
        StringBuilder b = new StringBuilder("\"");
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '\\': b.append("\\\\"); break;
                case '"':  b.append("\\\""); break;
                case '\n': b.append("\\n"); break;
                case '\r': b.append("\\r"); break;
                case '\t': b.append("\\t"); break;
                default:
                    if (c >= 0x20 && c < 0x7f) {
                        b.append(c);
                    } else {
                        b.append(String.format("\\x%02x", (int) c & 0xff));
                    }
            }
        }
        return b.append('"').toString();
    }

    private String preview(Object v) {
        if (v == null) {
            return "";
        }
        String s = String.valueOf(v).replace('\n', ' ').replace('\t', ' ');
        return s.length() > 200 ? s.substring(0, 200) + "..." : s;
    }
}
