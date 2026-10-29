// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsStraightHorz() { }
// Ghidra address: 0140f618; ELF VA: 0x130f618; file offset: 0x130b618
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsStraightHorz_130b618(PathElement *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  void *extraout_x1;
  
  puVar3 = PTR_DAT_029bde80;
  if ((bRam0000000002b950ea & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950ea = 1;
    runtimeMethod = extraout_x1;
  }
  iVar1 = self->Type;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  uVar2 = iVar1 - 2;
  if (uVar2 < 0x21) {
    bVar4 = (bool)((byte)(0x1bf817001 >> ((ulong)uVar2 & 0x3f)) & 1);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

