// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeStraightHorz(PathType type) { }
// Ghidra address: 0140f6c0; ELF VA: 0x130f6c0; file offset: 0x130b6c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeStraightHorz_130b6c0(int type,void *runtimeMethod)

{
  if (type - 2U < 0x21) {
    return (bool)((byte)(0x1bf817001 >> ((ulong)(type - 2U) & 0x3f)) & 1);
  }
  return false;
}

