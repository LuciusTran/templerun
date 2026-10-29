// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsStraightVert() { }
// Ghidra address: 0140f59c; ELF VA: 0x130f59c; file offset: 0x130b59c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsStraightVert_130b59c(PathElement *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  void *extraout_x1;
  
  puVar3 = PTR_DAT_029bde80;
  if ((bRam0000000002b950e9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950e9 = 1;
    runtimeMethod = extraout_x1;
  }
  iVar1 = self->Type;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  uVar2 = iVar1 - 1;
  if (uVar2 < 0x25) {
    bVar4 = (bool)((byte)(0x1c80fd1c01 >> ((ulong)uVar2 & 0x3f)) & 1);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

