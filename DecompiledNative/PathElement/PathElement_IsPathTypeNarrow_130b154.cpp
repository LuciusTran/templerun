// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeNarrow(PathType type) { }
// Ghidra address: 0140f154; ELF VA: 0x130f154; file offset: 0x130b154
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeNarrow_130b154(int type,void *runtimeMethod)

{
  return type - 0x11U < 0xe;
}

