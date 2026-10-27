// Diagnostico: decompila una lista de direcciones e informa el motivo del fallo.
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.List;

public class ReportFailures extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File listFile = (args.length > 0)
                ? new File(args[0])
                : askFile("Fichero con direcciones", "Aceptar");
        if (listFile == null) {
            return;
        }
        int timeout = args.length > 1 ? Integer.parseInt(args[1]) : 600;
        int maxBadData = args.length > 2 ? Integer.parseInt(args[2]) : 1000;

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        if (maxBadData > 0) {
            DecompileOptions opts = new DecompileOptions();
            opts.setMaxBadData(maxBadData);
            decomp.setOptions(opts);
        }
        decomp.openProgram(currentProgram);

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
                println(hex + "\tNO_ENCONTRADA");
                continue;
            }
            DecompileResults res = decomp.decompileFunction(f, timeout, monitor);
            String err = res == null ? "null" : res.getErrorMessage();
            boolean completed = res != null && res.decompileCompleted();
            int len = (res != null && res.getDecompiledFunction() != null)
                    ? res.getDecompiledFunction().getC().length() : 0;
            println(hex + "\t" + f.getName() + "\tcompleted=" + completed
                    + "\tlen=" + len + "\terror=" + err);
        }
        decomp.dispose();
    }
}
