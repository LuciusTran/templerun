// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsTurn() { }
// Ghidra address: 0140f174; ELF VA: 0x130f174; file offset: 0x130b174
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsTurn_130b174(PathElement *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029bde80;
  if ((bRam0000000002b950e8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950e8 = 1;
    runtimeMethod = extraout_x1;
  }
  iVar1 = self->Type;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  return iVar1 - 3U < 8;
}

