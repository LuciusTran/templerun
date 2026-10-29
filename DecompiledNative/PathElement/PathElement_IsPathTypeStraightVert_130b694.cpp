// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeStraightVert(PathType type) { }
// Ghidra address: 0140f694; ELF VA: 0x130f694; file offset: 0x130b694
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeStraightVert_130b694(int type,void *runtimeMethod)

{
  if (type - 1U < 0x25) {
    return (bool)((byte)(0x1c80fd1c01 >> ((ulong)(type - 1U) & 0x3f)) & 1);
  }
  return false;
}

