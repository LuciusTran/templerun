// Task-local Ghidra post-script. Output bodies come directly from the native decompiler.
// @category TempleRun.Recovery
import java.io.*;
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolType;

public class DecompileGameplay extends GhidraScript {
    private final Map<String, StructureDataType> types = new HashMap<>();
    private JsonArray annotations = new JsonArray();

    private Address sourceAddress(JsonObject method) throws Exception {
        long offset = method.get("fileOffset").getAsLong();
        Set<Address> matches = new HashSet<>();
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            for (MemoryBlockSourceInfo source : block.getSourceInfos()) {
                if (source.getFileBytes().isPresent() && source.containsFileOffset(offset)) {
                    Address address = source.locateAddressForFileOffset(offset);
                    if (address != null) matches.add(address);
                }
            }
        }
        if (matches.size() != 1) throw new IOException("File offset has " + matches.size() + " loader source mappings: " + offset);
        return matches.iterator().next();
    }

    private String clean(String value) { return value.replaceAll("[^A-Za-z0-9_]", "_"); }

    private void nameFunction(Function function, String name) throws Exception {
        if (function.getName().equals(name)) return;
        for (Symbol symbol : currentProgram.getSymbolTable().getSymbols(function.getEntryPoint())) {
            if (symbol.getName().equals(name) && symbol.getSymbolType() == SymbolType.LABEL) symbol.delete();
        }
        function.setName(name, SourceType.USER_DEFINED);
    }

    private DataType dataType(String name) {
        name = name.trim();
        if (name.equals("void")) return VoidDataType.dataType;
        if (name.equals("bool")) return BooleanDataType.dataType;
        if (name.equals("float")) return FloatDataType.dataType;
        if (name.equals("double")) return DoubleDataType.dataType;
        if (name.equals("byte")) return ByteDataType.dataType;
        if (name.equals("short")) return ShortDataType.dataType;
        if (name.equals("int") || name.equals("GameState") || name.equals("PathDirection") || name.equals("PathType") || name.equals("PathLevel") || name.equals("ObstacleType") || name.equals("CoinRunLocation") || name.equals("BonusType") || name.equals("PlayerState")) return IntegerDataType.dataType;
        if (name.equals("uint")) return UnsignedIntegerDataType.dataType;
        if (name.equals("long")) return LongLongDataType.dataType;
        if (name.equals("ulong")) return UnsignedLongLongDataType.dataType;
        if (name.equals("Vector2") || name.equals("Vector3") || name.equals("Vector4") || name.equals("Quaternion") || name.equals("Color") || name.equals("Rect")) {
            int n = name.equals("Vector2") ? 2 : name.equals("Vector3") ? 3 : 4;
            StructureDataType value = new StructureDataType("Recovered_" + name, 0);
            for (int i = 0; i < n; i++) value.add(FloatDataType.dataType, "component" + i, null);
            return value;
        }
        final String lookupName = name;
        String key = name.contains(".") ? name : types.keySet().stream().filter(k -> k.equals(lookupName) || k.endsWith("." + lookupName)).findFirst().orElse(name);
        if (types.containsKey(key)) return new PointerDataType(types.get(key), 8);
        return new PointerDataType(VoidDataType.dataType, 8);
    }

    private void annotate(Function function, JsonObject method) {
        String signature = method.get("signature").getAsString();
        String cls = method.get("className").getAsString();
        try {
            int opening = signature.indexOf('('), closing = signature.lastIndexOf(')');
            if (opening < 0 || closing < opening || signature.contains("<")) return;
            String prefix = signature.substring(0, opening).trim();
            String[] parts = prefix.split("\\s+");
            String methodName = parts[parts.length - 1];
            String returnName = methodName.equals(cls.substring(cls.lastIndexOf('.') + 1)) ? "void" : parts[parts.length - 2];
            boolean isStatic = Arrays.asList(parts).contains("static");
            List<Parameter> parameters = new ArrayList<>();
            if (!isStatic) parameters.add(new ParameterImpl("self", dataType(cls), currentProgram));
            String arguments = signature.substring(opening + 1, closing).trim();
            if (!arguments.isEmpty()) {
                for (String argument : arguments.split(",")) {
                    String normalized = argument.trim().replaceFirst("\\s*=.*$", "");
                    String[] tokens = normalized.split("\\s+");
                    if (tokens.length < 2) throw new IllegalArgumentException("Unknown argument " + argument);
                    DataType type = dataType(tokens[tokens.length - 2]);
                    if (normalized.startsWith("ref ") || normalized.startsWith("out ")) type = new PointerDataType(type, 8);
                    parameters.add(new ParameterImpl(clean(tokens[tokens.length - 1]), type, currentProgram));
                }
            }
            parameters.add(new ParameterImpl("runtimeMethod", new PointerDataType(VoidDataType.dataType, 8), currentProgram));
            function.updateFunction(currentProgram.getCompilerSpec().getDefaultCallingConvention().getName(), new ReturnParameterImpl(dataType(returnName), currentProgram), parameters,
                Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
        } catch (Exception ex) {
            JsonObject failure = new JsonObject();
            failure.addProperty("label", method.get("label").getAsString());
            failure.addProperty("signatureAnnotationError", ex.toString());
            annotations.add(failure);
        }
    }

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) throw new IllegalArgumentException("Expected metadata-map JSON and output directory");
        JsonObject map = JsonParser.parseString(Files.readString(Path.of(args[0]))).getAsJsonObject();
        Path output = Path.of(args[1]);
        Files.createDirectories(output);
        JsonArray methods = map.getAsJsonArray("methods");
        byte[] sourceBytes = Files.readAllBytes(Path.of(map.get("binary").getAsString()));
        String actualDigest = HexFormat.of().formatHex(java.security.MessageDigest.getInstance("SHA-256").digest(sourceBytes));
        if (!actualDigest.equals(map.get("binarySha256").getAsString())) throw new IOException("Native binary digest changed after mapping");
        for (JsonElement item : map.getAsJsonArray("classes")) {
            JsonObject cls = item.getAsJsonObject();
            types.put(cls.get("name").getAsString(), new StructureDataType(clean(cls.get("name").getAsString()), 16));
        }
        for (JsonElement item : map.getAsJsonArray("classes")) {
            JsonObject cls = item.getAsJsonObject();
            StructureDataType type = types.get(cls.get("name").getAsString());
            for (JsonElement fieldItem : cls.getAsJsonArray("fields")) {
                JsonObject field = fieldItem.getAsJsonObject();
                try {
                    int offset = field.get("offset").getAsInt();
                    if (offset < 16 || offset > 1048576) continue;
                    DataType valueType = dataType(field.get("type").getAsString());
                    if (type.getLength() < offset + valueType.getLength()) type.growStructure(offset + valueType.getLength() - type.getLength());
                    type.replaceAtOffset(offset, valueType, valueType.getLength(), clean(field.get("name").getAsString()), field.get("declaration").getAsString());
                } catch (Exception ex) { /* Unsupported field layouts stay unnamed/unknown. */ }
            }
            currentProgram.getDataTypeManager().addDataType(type, DataTypeConflictHandler.REPLACE_HANDLER);
        }
        int labels = 0;
        for (JsonElement item : methods) {
            monitor.checkCancelled();
            JsonObject method = item.getAsJsonObject();
            Address address = sourceAddress(method);
            if (!currentProgram.getMemory().contains(address)) continue;
            try { createLabel(address, method.get("label").getAsString(), true); labels++; }
            catch (Exception ex) { println("Label unknown: " + ex); }
        }
        println("Applied metadata labels: " + labels);
        // Give the decompiler real call boundaries before decompiling a caller.
        // Otherwise an unanalyzed BL target can be interpreted as local PIC flow.
        for (JsonElement item : methods) {
            JsonObject method = item.getAsJsonObject();
            Address start = sourceAddress(method);
            try {
                Function function = getFunctionAt(start);
                AddressSet body = new AddressSet(start, start.add(method.get("length").getAsLong() - 1));
                if (function == null) function = currentProgram.getFunctionManager().createFunction(method.get("label").getAsString(), start, body, SourceType.USER_DEFINED);
                else { nameFunction(function, method.get("label").getAsString()); function.setBody(body); }
                if (function != null) annotate(function, method);
            } catch (Exception ex) { println("Metadata function boundary unknown: " + start + " " + ex); }
        }
        JsonArray inferredNoReturn = new JsonArray();
        for (JsonElement item : map.getAsJsonArray("directCallTargets")) {
            JsonObject target = item.getAsJsonObject();
            try {
                Address start = sourceAddress(target);
                Function function = getFunctionAt(start);
                if (function == null) function = currentProgram.getFunctionManager().createFunction("NativeHelper_" + start,
                    start, new AddressSet(start, start.add(3)), SourceType.ANALYSIS);
                if (function != null && target.getAsJsonArray("terminalCallSites").size() != 0) {
                    function.setNoReturn(true);
                    inferredNoReturn.add(target.deepCopy());
                }
            } catch (Exception ex) { println("Native call boundary unknown: " + ex); }
        }
        Files.writeString(output.resolve("inferred-noreturn-targets.json"), new GsonBuilder().setPrettyPrinting().create().toJson(inferredNoReturn));
        JsonArray results = new JsonArray();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) throw new IOException(decompiler.getLastMessage());
        int done = 0;
        for (JsonElement item : methods) {
            JsonObject method = item.getAsJsonObject();
            if (!method.get("coreGameplay").getAsBoolean()) continue;
            monitor.checkCancelled();
            JsonObject result = method.deepCopy();
            int length = method.get("length").getAsInt();
            try {
                Address start = sourceAddress(method);
                result.addProperty("ghidraAddress", start.toString());
                byte[] loaded = new byte[length];
                currentProgram.getMemory().getBytes(start, loaded);
                byte[] original = Arrays.copyOfRange(sourceBytes, method.get("fileOffset").getAsInt(), method.get("fileOffset").getAsInt() + loaded.length);
                if (!Arrays.equals(loaded, original)) throw new IOException("Loader instruction bytes differ from the mapped APK bytes");
                result.addProperty("instructionPrefixVerified", true);
                result.addProperty("allMethodBytesVerified", true);
                AddressSet body = new AddressSet(start, start.add(length - 1));
                new DisassembleCommand(start, body, true).applyTo(currentProgram, monitor);
                Function function = getFunctionAt(start);
                if (function == null) function = currentProgram.getFunctionManager().createFunction(method.get("label").getAsString(), start, body, SourceType.USER_DEFINED);
                if (function == null) throw new IOException("Could not create function at " + start);
                nameFunction(function, method.get("label").getAsString());
                annotate(function, method);
                decompiler.flushCache();
                DecompileResults decompiled = decompiler.decompileFunction(function, 45, monitor);
                if (!decompiled.decompileCompleted() || decompiled.getDecompiledFunction() == null) throw new IOException(decompiled.getErrorMessage());
                Path cls = output.resolve(clean(method.get("className").getAsString()));
                Files.createDirectories(cls);
                String file = method.get("label").getAsString() + ".cpp";
                String header = "// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.\n// Declared C# signature: " + method.get("signature").getAsString() +
                    "\n// Ghidra address: " + start + "; ELF VA: 0x" + Long.toHexString(method.get("virtualAddress").getAsLong()) + "; file offset: 0x" + Long.toHexString(method.get("fileOffset").getAsLong()) + "\n// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.\n// Native runtime helpers and unsupported type information may remain unresolved.\n\n";
                Files.writeString(cls.resolve(file), header + decompiled.getDecompiledFunction().getC());
                result.addProperty("decompiled", true);
                result.addProperty("output", output.relativize(cls.resolve(file)).toString());
            } catch (Exception ex) { result.addProperty("decompiled", false); result.addProperty("error", ex.toString()); }
            results.add(result);
            done++;
            if (done % 20 == 0) {
                println("Gameplay methods processed: " + done);
                Files.writeString(output.resolve("decompilation-results.json"), new GsonBuilder().setPrettyPrinting().create().toJson(results));
            }
        }
        decompiler.dispose();
        Files.writeString(output.resolve("decompilation-results.json"), new GsonBuilder().setPrettyPrinting().create().toJson(results));
        Files.writeString(output.resolve("annotation-unknowns.json"), new GsonBuilder().setPrettyPrinting().create().toJson(annotations));
        println("GAMEPLAY_DECOMPILATION_FINISHED methods=" + done);
    }
}
