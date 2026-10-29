// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AnchorItem() { }
// Ghidra address: 013102dc; ELF VA: 0x12102dc; file offset: 0x120c2dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIAnchor_AnchorItem_120c2dc(UIAnchor *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *extraout_x1;
  void *pvVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 RVar18;
  Recovered_Rect RVar19;
  float fStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94652 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b94652 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  pvVar5 = self->uiCamera;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar4,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return;
  }
  if (self->uiCamera == (void *)0x0) goto LAB_013106a0;
  RVar19 = UnityEngine_Camera_get_pixelRect_24e8720(self->uiCamera,(void *)0x0);
  fVar15 = self->depthOffset;
  lVar4 = *(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8);
  fVar11 = RVar19.component0 + *(float *)(lVar4 + 0x10);
  fVar12 = RVar19.component1 + *(float *)(lVar4 + 0x14);
  fVar6 = RVar19.component2 - *(float *)(lVar4 + 0x18);
  fVar8 = RVar19.component3 - *(float *)(lVar4 + 0x1c);
  fVar9 = fVar11;
  if (7 < *(int *)&self->field_0x28 - 1U) goto LAB_01310400;
  fVar13 = fVar11 + fVar6;
  fVar14 = fVar12 + fVar8;
  fVar9 = (fVar11 + fVar13) * 0.5;
  fVar10 = (fVar12 + fVar14) * 0.5;
  switch(*(int *)&self->field_0x28) {
  case 1:
    fVar9 = fVar11;
    break;
  case 2:
    fVar9 = fVar11;
  case 3:
code_r0x013103ec:
    fVar10 = fVar14;
    break;
  case 4:
    fVar9 = fVar13;
    goto code_r0x013103ec;
  case 5:
    fVar9 = fVar13;
    break;
  case 6:
    fVar9 = fVar13;
  case 7:
LAB_01310400:
    fVar10 = fVar12;
  }
  if (self->uiCamera == (void *)0x0) goto LAB_013106a0;
  fVar9 = fVar9 + fVar6 * (self->relativeOffset).component0;
  fVar10 = fVar10 + fVar8 * (self->relativeOffset).component1;
  bVar3 = UnityEngine_Camera_get_orthographic_24e847c(self->uiCamera,(void *)0x0);
  if (bVar3) {
    if (cRam0000000002b94681 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b97c8);
      cRam0000000002b94681 = '\x01';
    }
    puVar2 = PTR_DAT_029b97c8;
    if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    dVar16 = (double)fVar9;
    dVar7 = (double)NativeHelper_028614b0(dVar16,&fStack_28);
    if (0.0 <= fVar9) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_013104a8;
      }
      dVar16 = (double)(long)(dVar16 + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_013104a8:
      dVar16 = (double)CONCAT44(uStack_24,fStack_28);
      if (((long)dVar16 & 1U) != 0) {
        dVar16 = dVar16 + dVar7;
      }
    }
    else {
      dVar16 = (double)(long)(dVar16 + -0.5);
    }
    fVar9 = -2.1474836e+09;
    if (dVar16 != INFINITY) {
      fVar9 = (float)(int)dVar16;
    }
    if (cRam0000000002b94681 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b97c8);
      cRam0000000002b94681 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    dVar16 = (double)fVar10;
    dVar7 = (double)NativeHelper_028614b0(dVar16,&fStack_28);
    if (0.0 <= fVar10) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_01310560;
      }
      dVar16 = (double)(long)(dVar16 + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_01310560:
      dVar16 = (double)CONCAT44(uStack_24,fStack_28);
      if (((long)dVar16 & 1U) != 0) {
        dVar16 = dVar16 + dVar7;
      }
    }
    else {
      dVar16 = (double)(long)(dVar16 + -0.5);
    }
    fVar10 = -2.1474836e+09;
    if (dVar16 != INFINITY) {
      fVar10 = (float)(int)dVar16;
    }
    if ((self->halfPixelOffset != false) && (self->mIsWindows != false)) {
      fVar9 = fVar9 + -0.5;
      fVar10 = fVar10 + 0.5;
    }
  }
  if (self->uiCamera != (void *)0x0) {
    RVar17.component1 = fVar10;
    RVar17.component0 = fVar9;
    RVar17.component2 = fVar15;
    RVar17 = UnityEngine_Camera_ScreenToWorldPoint_24e8d54(self->uiCamera,RVar17,(void *)0x0);
    fVar9 = RVar17.component2;
    pvVar5 = self->mTrans;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      return;
    }
    if (self->mTrans != (void *)0x0) {
      RVar18 = UnityEngine_Transform_get_position_2516710(self->mTrans,(void *)0x0);
      fVar6 = RVar18.component0 - RVar17.component0;
      fVar8 = RVar18.component1 - RVar17.component1;
      fVar11 = RVar18.component2 - fVar9;
      if (fVar11 * fVar11 + fVar6 * fVar6 + fVar8 * fVar8 < _UNK_007a3b60) {
        return;
      }
      pvVar5 = self->mTrans;
      if (pvVar5 != (void *)0x0) {
        fStack_28 = fVar9;
        if (pcRam0000000002b9d2b0 == (code *)0x0) {
          pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
        }
        (*pcRam0000000002b9d2b0)(pvVar5,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_013106a0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

