// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 01404904; ELF VA: 0x1304904; file offset: 0x1300904
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIGrowByAspectRatio_Awake_1300904(UIGrowByAspectRatio *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool inCondition;
  int iVar2;
  int iVar3;
  void *self_00;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_029b9a48;
  if ((bRam0000000002b9508e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9a48);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    NativeHelper_011df0b4(PTR_DAT_029c17a8);
    bRam0000000002b9508e = 1;
  }
  self_00 = UnityEngine_Component_GetComponent_13ccba8(self,*(void **)puVar1);
  self->_LocalCam = self_00;
  puVar1 = PTR_DAT_029c17a8;
  if (self_00 != (void *)0x0) {
    inCondition = UnityEngine_Camera_get_orthographic_24e847c(self_00,(void *)0x0);
    Imangi_Utilities_ImangiAssert_Code_1223b44(inCondition,*(void **)puVar1,(void *)0x1,(void *)0x0)
    ;
    puVar1 = PTR_DAT_029ba1d0;
    if (self->_LocalCam != (void *)0x0) {
      fVar6 = UnityEngine_Camera_get_orthographicSize_24e83f4(self->_LocalCam,(void *)0x0);
      *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = fVar6;
      iVar2 = NativeHelper_025f527c(0);
      iVar3 = NativeHelper_025f52a4(0);
      fVar10 = self->BaseAspectRatio;
      fVar6 = (float)iVar2 / (float)iVar3;
      if (cRam0000000002b945c1 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9a68);
        cRam0000000002b945c1 = '\x01';
      }
      fVar9 = ABS(fVar10);
      fVar7 = ABS(fVar6);
      if (ABS(fVar6) <= fVar9) {
        fVar7 = fVar9;
      }
      fVar8 = **(float **)(*(long *)PTR_DAT_029b9a68 + 0xb8) * 8.0;
      fVar9 = fVar7 * _UNK_007a3ca4;
      if (fVar7 * _UNK_007a3ca4 <= fVar8) {
        fVar9 = fVar8;
      }
      if ((fVar9 <= ABS(fVar10 - fVar6)) && (fVar6 < self->BaseAspectRatio)) {
        if (self->_LocalCam == (void *)0x0) goto LAB_01404acc;
        UnityEngine_Camera_set_orthographicSize_24e8430
                  (self->_LocalCam,
                   (self->BaseAspectRatio * *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc)) /
                   fVar6,(void *)0x0);
      }
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar10 = *(float *)(lVar4 + 0xc) + *(float *)(lVar4 + 0xc);
      *(float *)(lVar4 + 0xc) = fVar10;
      *(float *)(lVar4 + 8) = fVar10 * self->BaseAspectRatio;
      if (self->_LocalCam != (void *)0x0) {
        fVar10 = UnityEngine_Camera_get_orthographicSize_24e83f4(self->_LocalCam,(void *)0x0);
        pfVar5 = *(float **)(*(long *)puVar1 + 0xb8);
        *pfVar5 = fVar6 * (fVar10 + fVar10);
        pfVar5[1] = fVar10 + fVar10;
        return;
      }
    }
  }
LAB_01404acc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

