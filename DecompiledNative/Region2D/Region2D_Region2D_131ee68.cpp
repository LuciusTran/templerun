// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Region2D() { }
// Ghidra address: 01422e68; ELF VA: 0x1322e68; file offset: 0x131ee68
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Region2D_Region2D_131ee68(Region2D *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029c2448;
  puVar1 = PTR_DAT_029c2440;
  if ((bRam0000000002b95199 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2448);
    NativeHelper_011df0b4(PTR_DAT_029c2440);
    bRam0000000002b95199 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_01a74ad0(pvVar3,*(undefined8 *)puVar2);
  self->Points = pvVar3;
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

