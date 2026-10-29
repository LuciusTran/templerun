// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }
// Ghidra address: 013a650c; ELF VA: 0x12a650c; file offset: 0x12a250c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UILabel_OnFill_12a250c(UILabel *param_1,long param_2,void *param_3,BetterList *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  void *pvVar11;
  void *runtimeMethod;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  UIFont *pUVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  Recovered_Vector3 RVar33;
  ulong in_stack_ffffffffffffff60;
  undefined4 uVar34;
  double dStack_58;
  
  puVar5 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94d67 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d67 = 1;
  }
  pUVar17 = param_1->mFont;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar9 = UnityEngine_object_op_Equality_250d534(pUVar17,(void *)0x0,(void *)0x0);
  if (bVar9) {
    return;
  }
  UILabel_MakePositionPerfect_12a161c(param_1,runtimeMethod);
  uVar34 = (undefined4)(in_stack_ffffffffffffff60 >> 0x20);
  if (param_2 == 0) goto LAB_013a69b4;
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  if (*(uint *)&param_1->field_0x38 < 9) {
    uVar15 = 1 << (ulong)(*(uint *)&param_1->field_0x38 & 0x1f);
    if ((uVar15 & 0x49) == 0) {
      if ((uVar15 & 0x124) == 0) goto LAB_013a66e8;
      pUVar17 = param_1->mFont;
      pvVar11 = UILabel_get_processedText_12a0f88(param_1,runtimeMethod_00);
      uVar26 = *(undefined4 *)&param_1->field_0x28;
      uVar28 = *(undefined4 *)&param_1->field_0x2c;
      uVar31 = *(undefined4 *)&param_1->field_0x30;
      uVar30 = *(undefined4 *)&param_1->field_0x34;
      cVar4 = param_1->mEncoding;
      uVar18 = *(undefined4 *)&param_1->field_0xbc;
      fVar23 = (float)(**(code **)(*(long *)param_1 + 0x1c8))
                                (param_1,*(undefined8 *)(*(long *)param_1 + 0x1d0));
      if (param_1->mFont == (UIFont *)0x0) goto LAB_013a69b4;
      iVar10 = UIFont_get_size_129e3a8(param_1->mFont,runtimeMethod_01);
      if (cRam0000000002b94681 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b97c8);
        cRam0000000002b94681 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      dVar32 = (double)(fVar23 * (float)iVar10);
      dVar24 = (double)NativeHelper_028614b0(dVar32,&dStack_58);
      if (0.0 <= fVar23 * (float)iVar10) {
        if (dVar24 == 0.5) {
          dVar24 = 1.0;
          goto LAB_013a66d4;
        }
        dStack_58 = (double)(long)(dVar32 + 0.5);
      }
      else if (dVar24 == -0.5) {
        dVar24 = -1.0;
LAB_013a66d4:
        if (((long)dStack_58 & 1U) != 0) {
          dStack_58 = dStack_58 + dVar24;
        }
      }
      else {
        dStack_58 = (double)(long)(dVar32 + -0.5);
      }
      if (pUVar17 == (UIFont *)0x0) goto LAB_013a69b4;
      iVar10 = -0x80000000;
      if (dStack_58 != INFINITY) {
        iVar10 = (int)dStack_58;
      }
      uVar13 = 2;
      goto LAB_013a683c;
    }
    pUVar17 = param_1->mFont;
    pvVar11 = UILabel_get_processedText_12a0f88(param_1,runtimeMethod_00);
    if (pUVar17 == (UIFont *)0x0) goto LAB_013a69b4;
    uVar18 = *(undefined4 *)&param_1->field_0xbc;
    uVar8 = param_1->mEncoding;
    uVar31 = *(undefined4 *)&param_1->field_0x30;
    uVar30 = *(undefined4 *)&param_1->field_0x34;
    uVar26 = *(undefined4 *)&param_1->field_0x28;
    uVar28 = *(undefined4 *)&param_1->field_0x2c;
    in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffff00000000;
    uVar13 = 0;
  }
  else {
LAB_013a66e8:
    pUVar17 = param_1->mFont;
    pvVar11 = UILabel_get_processedText_12a0f88(param_1,runtimeMethod_00);
    uVar26 = *(undefined4 *)&param_1->field_0x28;
    uVar28 = *(undefined4 *)&param_1->field_0x2c;
    uVar31 = *(undefined4 *)&param_1->field_0x30;
    uVar30 = *(undefined4 *)&param_1->field_0x34;
    cVar4 = param_1->mEncoding;
    uVar18 = *(undefined4 *)&param_1->field_0xbc;
    fVar23 = (float)(**(code **)(*(long *)param_1 + 0x1c8))
                              (param_1,*(undefined8 *)(*(long *)param_1 + 0x1d0));
    if (param_1->mFont == (UIFont *)0x0) goto LAB_013a69b4;
    iVar10 = UIFont_get_size_129e3a8(param_1->mFont,runtimeMethod_02);
    if (cRam0000000002b94681 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b97c8);
      cRam0000000002b94681 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    dVar32 = (double)(fVar23 * (float)iVar10);
    dVar24 = (double)NativeHelper_028614b0(dVar32,&dStack_58);
    if (0.0 <= fVar23 * (float)iVar10) {
      if (dVar24 == 0.5) {
        dVar24 = 1.0;
        goto LAB_013a67ec;
      }
      dStack_58 = (double)(long)(dVar32 + 0.5);
    }
    else if (dVar24 == -0.5) {
      dVar24 = -1.0;
LAB_013a67ec:
      if (((long)dStack_58 & 1U) != 0) {
        dStack_58 = dStack_58 + dVar24;
      }
    }
    else {
      dStack_58 = (double)(long)(dVar32 + -0.5);
    }
    if (pUVar17 == (UIFont *)0x0) goto LAB_013a69b4;
    iVar10 = -0x80000000;
    if (dStack_58 != INFINITY) {
      iVar10 = (int)dStack_58;
    }
    uVar13 = 1;
LAB_013a683c:
    uVar8 = cVar4 != '\0';
    in_stack_ffffffffffffff60 = CONCAT44(uVar34,iVar10);
  }
  UIFont_Print_129f2a4
            (uVar26,uVar28,uVar31,uVar30,pUVar17,pvVar11,param_2,param_3,param_4,uVar8,uVar18,uVar13
             ,in_stack_ffffffffffffff60);
  if (*(int *)&param_1->field_0xa8 != 0) {
    pvVar11 = UIWidget_get_cachedTransform_12015ac((UIWidget *)param_1,(void *)0x0);
    if (pvVar11 == (void *)0x0) {
LAB_013a69b4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    RVar33 = UnityEngine_Transform_get_localScale_2516d6c(pvVar11,(void *)0x0);
    if ((RVar33.component0 != 0.0) && (RVar33.component1 != 0.0)) {
      if (param_1->mFont == (UIFont *)0x0) goto LAB_013a69b4;
      uVar34 = *(undefined4 *)(param_2 + 0x18);
      iVar10 = UIFont_get_size_129e3a8(param_1->mFont,runtimeMethod_03);
      fVar29 = 1.0 / (float)iVar10;
      fVar23 = -fVar29;
      UILabel_ApplyShadow_12a2318(fVar29,fVar23,param_1,param_2,param_3,param_4,uVar3,uVar34);
      if (*(int *)&param_1->field_0xa8 == 2) {
        uVar3 = *(undefined4 *)(param_2 + 0x18);
        UILabel_ApplyShadow_12a2318(fVar23,fVar29,param_1,param_2,param_3,param_4,uVar34,uVar3);
        uVar15 = *(uint *)(param_2 + 0x18);
        UILabel_ApplyShadow_12a2318(fVar29,fVar29,param_1,param_2,param_3,param_4,uVar3,uVar15);
        iVar10 = *(int *)(param_2 + 0x18);
        uVar12 = (ulong)uVar15;
        pvVar11 = param_3;
        fVar29 = fVar23;
        if ((bRam0000000002b94d66 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b9fe8);
          NativeHelper_011df0b4(PTR_DAT_029b9ff8);
          NativeHelper_011df0b4(PTR_DAT_029b9fd8);
          bRam0000000002b94d66 = 1;
        }
        puVar7 = PTR_DAT_029b9ff8;
        puVar6 = PTR_DAT_029b9fe8;
        puVar5 = PTR_DAT_029b9fd8;
        if ((int)uVar15 < iVar10) {
          if (param_2 == 0) {
code_r0x013a6504:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          uVar13 = *(undefined8 *)&param_1->mEffectColor;
          fVar27 = (param_1->mEffectColor).component2;
          fVar22 = (param_1->mEffectColor).component3;
          fVar25 = *(float *)&param_1->field_0x34;
          lVar19 = (-(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4) + 0x20;
          uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
          lVar20 = (long)iVar10 - (long)(int)uVar15;
          lVar21 = (long)(int)uVar15 * 0xc + 0x20;
          do {
            lVar14 = *(long *)(param_2 + 0x10);
            if (lVar14 == 0) goto code_r0x013a6504;
            uVar15 = (uint)uVar12;
            if (*(uint *)(lVar14 + 0x18) <= uVar15) {
code_r0x013a6508:
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2e4();
            }
            puVar1 = (undefined4 *)(lVar14 + lVar21);
            NativeHelper_016a5480(*puVar1,puVar1[1],puVar1[2],param_2,*(undefined8 *)puVar5);
            if ((param_3 == (void *)0x0) || (lVar14 = *(long *)((long)param_3 + 0x10), lVar14 == 0))
            goto code_r0x013a6504;
            if (*(uint *)(lVar14 + 0x18) <= uVar15) goto code_r0x013a6508;
            NativeHelper_016a4fb0
                      (*(undefined4 *)(lVar14 + uVar16 + 0x20),
                       *(undefined4 *)(lVar14 + uVar16 + 0x24),param_3,*(undefined8 *)puVar7);
            if ((param_4 == (BetterList *)0x0) || (*(long *)(param_4 + 1) == 0))
            goto code_r0x013a6504;
            if (*(uint *)(*(long *)(param_4 + 1) + 0x18) <= uVar15) goto code_r0x013a6508;
            BetterList_Add_15a0654(param_4,*(void **)puVar6,pvVar11);
            lVar14 = *(long *)(param_2 + 0x10);
            if (lVar14 == 0) goto code_r0x013a6504;
            if (*(uint *)(lVar14 + 0x18) <= uVar15) goto code_r0x013a6508;
            *(ulong *)(lVar14 + lVar21) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar14 + lVar21) >> 0x20) + fVar29,
                          (float)*(undefined8 *)(lVar14 + lVar21) + fVar23);
            lVar14 = *(long *)(param_4 + 1);
            if (lVar14 == 0) goto code_r0x013a6504;
            if (*(uint *)(lVar14 + 0x18) <= uVar15) goto code_r0x013a6508;
            puVar2 = (undefined8 *)(lVar14 + lVar19);
            lVar19 = lVar19 + 0x10;
            lVar21 = lVar21 + 0xc;
            uVar16 = uVar16 + 8;
            lVar20 = lVar20 + -1;
            uVar12 = (ulong)(uVar15 + 1);
            *puVar2 = uVar13;
            *(float *)(puVar2 + 1) = fVar27;
            *(float *)((long)puVar2 + 0xc) = fVar22 * fVar25;
          } while (lVar20 != 0);
        }
        return;
      }
    }
  }
  return;
}

