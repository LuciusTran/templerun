// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnPress(bool pressed) { }
// Ghidra address: 012ffa34; ELF VA: 0x11ffa34; file offset: 0x11fba34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UISlider_OnPress_11fba34(UISlider *self,bool pressed,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  long lVar7;
  void *runtimeMethod_00;
  long lVar8;
  float *pfVar9;
  long lVar10;
  void *pvVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Recovered_Vector3 RVar20;
  Recovered_Vector3 RVar21;
  Recovered_Vector3 RVar22;
  Recovered_Vector3 RVar23;
  Recovered_Vector3 RVar24;
  Recovered_Vector3 RVar25;
  Recovered_Quaternion rotation;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar2 = PTR_DAT_029b7f98;
  if (!pressed) {
    return;
  }
  if ((bRam0000000002b945b2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b99a8);
    bRam0000000002b945b2 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  pvVar11 = self->mCol;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar6 = UnityEngine_object_op_Equality_250d534(pvVar11,(void *)0x0,(void *)0x0);
  puVar3 = PTR_DAT_029b99a8;
  if (bVar6) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_029b99a8;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar3;
  }
  lVar8 = *(long *)puVar2;
  pvVar11 = *(void **)(*(long *)(lVar7 + 0xb8) + 0x38);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar8);
  }
  runtimeMethod_00 = (void *)0x0;
  bVar6 = UnityEngine_object_op_Equality_250d534(pvVar11,(void *)0x0,(void *)0x0);
  if (bVar6) {
    return;
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar3;
  }
  lVar10 = *(long *)(lVar7 + 0xb8);
  lVar8 = *(long *)(lVar10 + 0x48);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    lVar8 = *(long *)(lVar10 + 0x48);
    if (lVar8 == 0) goto code_r0x012ffe90;
  }
  *(undefined4 *)(lVar8 + 0x44) = 0;
  if (*(void **)(lVar10 + 0x38) != (void *)0x0) {
    RVar20.component2 = 0.0;
    RVar20._0_8_ = *(ulong *)(lVar8 + 0x10);
    UnityEngine_Camera_ScreenPointToRay_24e8f24(*(void **)(lVar10 + 0x38),RVar20,(void *)0x0);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_80 = uStack_98;
    if (self->mTrans != (void *)0x0) {
      rotation = UnityEngine_Transform_get_rotation_2516900(self->mTrans,(void *)0x0);
      if (cRam0000000002b945c2 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368);
        cRam0000000002b945c2 = '\x01';
      }
      puVar2 = PTR_DAT_029b9368;
      RVar20 = UnityEngine_Quaternion_op_Multiply_25038ac
                         (rotation,*(Recovered_Vector3 *)
                                    (*(long *)(*(long *)PTR_DAT_029b9368 + 0xb8) + 0x54),(void *)0x0
                         );
      fVar17 = RVar20.component2;
      fVar18 = RVar20.component1;
      fVar19 = RVar20.component0;
      if (self->mTrans != (void *)0x0) {
        RVar20 = UnityEngine_Transform_get_position_2516710(self->mTrans,(void *)0x0);
        if (cRam0000000002b945c3 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945c3 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        fVar12 = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18);
        if (fVar12 <= _UNK_007a3c5c) {
          if (cRam0000000002b94510 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b9368);
            cRam0000000002b94510 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar19 = *pfVar9;
          fVar18 = pfVar9[1];
          fVar17 = pfVar9[2];
        }
        else {
          fVar19 = fVar19 / fVar12;
          fVar18 = fVar18 / fVar12;
          fVar17 = fVar17 / fVar12;
        }
        fVar5 = (float)uStack_88;
        fVar12 = (float)uStack_90;
        fVar4 = uStack_90._4_4_;
        fVar16 = fVar17 * uStack_80._4_4_ + fVar19 * uStack_88._4_4_ + fVar18 * (float)uStack_80;
        if (cRam0000000002b945c1 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b9a68);
          cRam0000000002b945c1 = '\x01';
        }
        fVar14 = ABS(fVar16);
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        fVar15 = **(float **)(*(long *)PTR_DAT_029b9a68 + 0xb8) * 8.0;
        fVar13 = fVar14 * _UNK_007a3ca4;
        if (fVar14 * _UNK_007a3ca4 <= fVar15) {
          fVar13 = fVar15;
        }
        if (ABS(0.0 - fVar16) < fVar13) {
          return;
        }
        fVar16 = ((RVar20.component2 * fVar17 +
                  RVar20.component0 * fVar19 + RVar20.component1 * fVar18) -
                 (fVar17 * fVar5 + fVar19 * fVar12 + fVar18 * fVar4)) / fVar16;
        if (fVar16 <= 0.0) {
          return;
        }
        if (self->mTrans != (void *)0x0) {
          RVar20 = UnityEngine_Transform_get_localPosition_2515e38(self->mTrans,(void *)0x0);
          if (self->mCol != (void *)0x0) {
            RVar21 = UnityEngine_BoxCollider_get_center_25490e4(self->mCol,(void *)0x0);
            if (self->mCol != (void *)0x0) {
              RVar22 = UnityEngine_BoxCollider_get_size_254921c(self->mCol,(void *)0x0);
              if (self->mTrans != (void *)0x0) {
                RVar23 = UnityEngine_Transform_get_localPosition_2515e38(self->mTrans,(void *)0x0);
                pvVar11 = self->mTrans;
                RVar24 = UnityEngine_Ray_GetPoint_24eec40(&uStack_90,fVar16,(void *)0x0);
                if (pvVar11 != (void *)0x0) {
                  RVar24 = UnityEngine_Transform_InverseTransformPoint_25179c4
                                     (pvVar11,RVar24,(void *)0x0);
                  if (self->mCol != (void *)0x0) {
                    iVar1 = *(int *)&self->field_0x40;
                    RVar25 = UnityEngine_BoxCollider_get_size_254921c(self->mCol,(void *)0x0);
                    if (iVar1 == 0) {
                      fVar19 = ((RVar23.component0 -
                                ((RVar20.component0 + RVar21.component0) - RVar22.component0 * 0.5))
                               + RVar24.component0) / RVar25.component0;
                    }
                    else {
                      fVar19 = ((RVar23.component1 -
                                ((RVar20.component1 + RVar21.component1) - RVar22.component1 * 0.5))
                               + RVar24.component1) / RVar25.component1;
                    }
                    UISlider_Set_11fb0c0(self,fVar19,false,runtimeMethod_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x012ffe90:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

