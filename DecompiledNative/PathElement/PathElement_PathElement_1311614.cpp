// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement() { }
// Ghidra address: 01415614; ELF VA: 0x1315614; file offset: 0x1311614
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_PathElement_1311614(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029c0358;
  if ((bRam0000000002b9510b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0358);
    bRam0000000002b9510b = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

