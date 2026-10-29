// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 013101dc; ELF VA: 0x12101dc; file offset: 0x120c1dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIAnchor_OnEnable_120c1dc(UIAnchor *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  void *runtimeMethod_00;
  long lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  Recovered_Vector3 RVar18;
  Recovered_Vector3 RVar19;
  Recovered_Rect RVar20;
  undefined8 uStack_30;
  float fStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_029b7f80;
  if ((bRam0000000002b94651 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94651 = 1;
  }
  pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
  self->mTrans = pvVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029b7f98;
  iVar4 = NativeHelper_025ea11c(0);
  if (iVar4 == 2) {
    bVar3 = true;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    iVar4 = NativeHelper_025ea11c(0);
    bVar3 = iVar4 == 7;
  }
  self->mIsWindows = bVar3;
  pvVar5 = self->uiCamera;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar3) {
    pvVar5 = (void *)NativeHelper_0260e1e4(self,0);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    iVar4 = UnityEngine_GameObject_get_layer_250cbd4(pvVar5,(void *)0x0);
    pvVar5 = NGUITools_FindCameraForLayer_1203104(iVar4,runtimeMethod_00);
    self->uiCamera = pvVar5;
  }
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94652 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b94652 = 1;
  }
  pvVar5 = self->uiCamera;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return;
  }
  if (self->uiCamera == (void *)0x0) goto LAB_013106a0;
  RVar20 = UnityEngine_Camera_get_pixelRect_24e8720(self->uiCamera,(void *)0x0);
  fVar16 = self->depthOffset;
  lVar6 = *(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8);
  fVar12 = RVar20.component0 + *(float *)(lVar6 + 0x10);
  fVar13 = RVar20.component1 + *(float *)(lVar6 + 0x14);
  fVar7 = RVar20.component2 - *(float *)(lVar6 + 0x18);
  fVar9 = RVar20.component3 - *(float *)(lVar6 + 0x1c);
  fVar10 = fVar12;
  if (7 < *(int *)&self->field_0x28 - 1U) goto LAB_01310400;
  fVar14 = fVar12 + fVar7;
  fVar15 = fVar13 + fVar9;
  fVar10 = (fVar12 + fVar14) * 0.5;
  fVar11 = (fVar13 + fVar15) * 0.5;
  switch(*(int *)&self->field_0x28) {
  case 1:
    fVar10 = fVar12;
    break;
  case 2:
    fVar10 = fVar12;
  case 3:
code_r0x013103ec:
    fVar11 = fVar15;
    break;
  case 4:
    fVar10 = fVar14;
    goto code_r0x013103ec;
  case 5:
    fVar10 = fVar14;
    break;
  case 6:
    fVar10 = fVar14;
  case 7:
LAB_01310400:
    fVar11 = fVar13;
  }
  if (self->uiCamera == (void *)0x0) goto LAB_013106a0;
  fVar10 = fVar10 + fVar7 * (self->relativeOffset).component0;
  fVar11 = fVar11 + fVar9 * (self->relativeOffset).component1;
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
    dVar17 = (double)fVar10;
    dVar8 = (double)NativeHelper_028614b0(dVar17,&fStack_28);
    if (0.0 <= fVar10) {
      if (dVar8 == 0.5) {
        dVar8 = 1.0;
        goto LAB_013104a8;
      }
      dVar17 = (double)(long)(dVar17 + 0.5);
    }
    else if (dVar8 == -0.5) {
      dVar8 = -1.0;
LAB_013104a8:
      dVar17 = (double)CONCAT44(uStack_24,fStack_28);
      if (((long)dVar17 & 1U) != 0) {
        dVar17 = dVar17 + dVar8;
      }
    }
    else {
      dVar17 = (double)(long)(dVar17 + -0.5);
    }
    fVar10 = -2.1474836e+09;
    if (dVar17 != INFINITY) {
      fVar10 = (float)(int)dVar17;
    }
    if (cRam0000000002b94681 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b97c8);
      cRam0000000002b94681 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    dVar17 = (double)fVar11;
    dVar8 = (double)NativeHelper_028614b0(dVar17,&fStack_28);
    if (0.0 <= fVar11) {
      if (dVar8 == 0.5) {
        dVar8 = 1.0;
        goto LAB_01310560;
      }
      dVar17 = (double)(long)(dVar17 + 0.5);
    }
    else if (dVar8 == -0.5) {
      dVar8 = -1.0;
LAB_01310560:
      dVar17 = (double)CONCAT44(uStack_24,fStack_28);
      if (((long)dVar17 & 1U) != 0) {
        dVar17 = dVar17 + dVar8;
      }
    }
    else {
      dVar17 = (double)(long)(dVar17 + -0.5);
    }
    fVar11 = -2.1474836e+09;
    if (dVar17 != INFINITY) {
      fVar11 = (float)(int)dVar17;
    }
    if ((self->halfPixelOffset != false) && (self->mIsWindows != false)) {
      fVar10 = fVar10 + -0.5;
      fVar11 = fVar11 + 0.5;
    }
  }
  if (self->uiCamera != (void *)0x0) {
    RVar18.component1 = fVar11;
    RVar18.component0 = fVar10;
    RVar18.component2 = fVar16;
    RVar18 = UnityEngine_Camera_ScreenToWorldPoint_24e8d54(self->uiCamera,RVar18,(void *)0x0);
    fVar10 = RVar18.component2;
    pvVar5 = self->mTrans;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      return;
    }
    if (self->mTrans != (void *)0x0) {
      RVar19 = UnityEngine_Transform_get_position_2516710(self->mTrans,(void *)0x0);
      fVar7 = RVar19.component0 - RVar18.component0;
      fVar9 = RVar19.component1 - RVar18.component1;
      fVar12 = RVar19.component2 - fVar10;
      if (fVar12 * fVar12 + fVar7 * fVar7 + fVar9 * fVar9 < _UNK_007a3b60) {
        return;
      }
      pvVar5 = self->mTrans;
      if (pvVar5 != (void *)0x0) {
        uStack_30 = RVar18._0_8_;
        fStack_28 = fVar10;
        if (pcRam0000000002b9d2b0 == (code *)0x0) {
          pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
        }
        (*pcRam0000000002b9d2b0)(pvVar5,&uStack_30);
        return;
      }
    }
  }
LAB_013106a0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

