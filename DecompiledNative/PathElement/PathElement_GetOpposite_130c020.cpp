// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static PathDirection GetOpposite(PathDirection direction) { }
// Ghidra address: 01410020; ELF VA: 0x1310020; file offset: 0x130c020
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int PathElement_GetOpposite_130c020(int direction,void *runtimeMethod)

{
  if (direction - 1U < 4) {
    return *(int *)(&UNK_007a47d0 + (long)(int)(direction - 1U) * 4);
  }
  return 0;
}

