// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeLevelChange(PathType type) { }
// Ghidra address: 0140f164; ELF VA: 0x130f164; file offset: 0x130b164
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeLevelChange_130b164(int type,void *runtimeMethod)

{
  return type - 0x21U < 4;
}

