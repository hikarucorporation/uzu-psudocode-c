// Exporta tipos (ANSI-C) y prototipos de funciones a <out>/_types/
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DataTypeWriter;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.File;
import java.io.PrintWriter;
import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

public class ExportTypes extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = (args.length > 0)
                ? new File(args[0])
                : askDirectory("Directorio de salida", "Aceptar");
        if (outDir == null) {
            return;
        }
        Path dir = outDir.toPath().toAbsolutePath().resolve("_types");
        Files.createDirectories(dir);

        // ---------------- types.h ----------------
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        List<DataType> all = new ArrayList<>();
        Iterator<DataType> it = dtm.getAllDataTypes();
        while (it.hasNext()) {
            all.add(it.next());
        }

        Path typesFile = dir.resolve("types.h");
        try (Writer w = Files.newBufferedWriter(typesFile, StandardCharsets.UTF_8)) {
            w.write("/* Tipos ANSI-C exportados de Ghidra para UZU.so */\n");
            w.write("#ifndef UZU_TYPES_H\n#define UZU_TYPES_H\n\n");
            w.write("#include <stdint.h>\n#include <stddef.h>\n\n");
            DataTypeWriter dw = new DataTypeWriter(dtm, w, true);
            dw.write(all, monitor, false);
            w.write("\n#endif /* UZU_TYPES_H */\n");
        }
        println("types.h: " + all.size() + " tipos");

        // ---------------- functions.h ----------------
        FunctionManager fm = currentProgram.getFunctionManager();
        Set<String> protos = new LinkedHashSet<>();
        for (Function f : fm.getFunctions(true)) {
            if (f.isExternal()) {
                continue;
            }
            try {
                String p = f.getPrototypeString(false, false);
                if (p != null && !p.isBlank()) {
                    protos.add(p.trim() + ";");
                }
            } catch (Exception e) {
                // prototipo no representable
            }
        }
        Path funcsFile = dir.resolve("functions.h");
        try (PrintWriter pw = new PrintWriter(Files.newBufferedWriter(funcsFile,
                StandardCharsets.UTF_8))) {
            pw.println("/* Prototipos exportados de Ghidra para UZU.so */");
            pw.println("#ifndef UZU_FUNCTIONS_H");
            pw.println("#define UZU_FUNCTIONS_H");
            pw.println("#include \"types.h\"");
            pw.println();
            for (String p : protos) {
                pw.println(p);
            }
            pw.println();
            pw.println("#endif /* UZU_FUNCTIONS_H */");
        }
        println("functions.h: " + protos.size() + " prototipos");
    }
}
