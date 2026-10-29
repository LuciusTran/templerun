// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SnapToFirstPathElemeent() { }
// Ghidra address: 01422288; ELF VA: 0x1322288; file offset: 0x131e288
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PsuedoRunner_SnapToFirstPathElemeent_131e288(PsuedoRunner *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b95192 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b95192 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
    runtimeMethod = extraout_x1_00;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    self->OnPath = *(PathElement **)(lVar2 + 0x38);
    self->Direction = *(int *)(lVar2 + 0x40);
    PsuedoRunner_PicknNextPathElement_131e308(self,runtimeMethod);
    self->TimeSinceLastNode = 0.0;
    self->DesiredCameraY = 0.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

