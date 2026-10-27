// Escribe las listas de Classes y Namespaces del Symbol Tree.
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolType;

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

public class DumpSymbolLists extends GhidraScript {

    @Override
    public void run() throws Exception {
        File outDir = new File(getScriptArgs()[0]);
        List<String> classes = new ArrayList<>();
        List<String> namespaces = new ArrayList<>();

        SymbolIterator it = currentProgram.getSymbolTable().getSymbolIterator();
        while (it.hasNext()) {
            Symbol s = it.next();
            SymbolType t = s.getSymbolType();
            if (t == SymbolType.CLASS) {
                classes.add(s.getName(true));
            } else if (t == SymbolType.NAMESPACE || t == SymbolType.LIBRARY) {
                namespaces.add(s.getName(true));
            }
        }

        Iterator<GhidraClass> ci = currentProgram.getSymbolTable().getClassNamespaces();
        while (ci.hasNext()) {
            classes.add(ci.next().getName(true));
        }

        Collections.sort(classes);
        Collections.sort(namespaces);

        Files.write(new File(outDir, "Classes/_classes.txt").toPath(),
                classes, StandardCharsets.UTF_8);
        Files.write(new File(outDir, "Namespaces/_namespaces.txt").toPath(),
                namespaces, StandardCharsets.UTF_8);

        println("classes=" + classes.size() + " namespaces=" + namespaces.size());
    }
}
