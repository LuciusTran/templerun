// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsStraight() { }
// Ghidra address: 0140f574; ELF VA: 0x130f574; file offset: 0x130b574
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsStraight_130b574(PathElement *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  
  bVar4 = PathElement_IsStraightVert_130b59c(self,runtimeMethod);
  puVar3 = PTR_DAT_029bde80;
  if (bVar4) {
    return true;
  }
  if ((bRam0000000002b950ea & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950ea = 1;
  }
  iVar1 = self->Type;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
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

