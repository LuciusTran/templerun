// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 012ee2f8; ELF VA: 0x11ee2f8; file offset: 0x11ea2f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AdjustCameraFOV_Start_11ea2f8(AdjustCameraFOV *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  float fVar4;
  
  NativeHelper_025f527c(0);
  NativeHelper_025f52a4(0);
  iVar1 = NativeHelper_025f52a4(0);
  iVar2 = NativeHelper_025f527c(0);
  fVar4 = (float)iVar1 / (float)iVar2;
  if ((1.5 < fVar4) && ((double)fVar4 < _UNK_007a3b10)) {
    if (self->mainCamera == (void *)0x0) goto code_r0x012ee3ec;
    UnityEngine_Camera_set_fieldOfView_24e83a8(self->mainCamera,110.0,(void *)0x0);
  }
  if ((fVar4 <= 2.0) && (_UNK_007a3b10 < (double)fVar4)) {
    if (self->mainCamera == (void *)0x0) goto code_r0x012ee3ec;
    UnityEngine_Camera_set_fieldOfView_24e83a8(self->mainCamera,115.0,(void *)0x0);
  }
  if (fVar4 <= 2.0) {
    return;
  }
  pvVar3 = self->mainCamera;
  if (pvVar3 != (void *)0x0) {
    if (pcRam0000000002b9c1d8 == (code *)0x0) {
      pcRam0000000002b9c1d8 = (code *)NativeHelper_011df070(&UNK_007b1026);
    }
                    /* WARNING: Could not recover jumptable at 0x025ec3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9c1d8)(0x42f00000,pvVar3);
    return;
  }
code_r0x012ee3ec:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

