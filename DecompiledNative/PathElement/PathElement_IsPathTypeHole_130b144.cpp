// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeHole(PathType type) { }
// Ghidra address: 0140f144; ELF VA: 0x130f144; file offset: 0x130b144
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeHole_130b144(int type,void *runtimeMethod)

{
  return type - 0xbU < 6;
}

