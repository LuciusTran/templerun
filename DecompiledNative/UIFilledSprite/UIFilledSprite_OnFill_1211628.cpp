// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }
// Ghidra address: 01315628; ELF VA: 0x1215628; file offset: 0x1211628
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIFilledSprite_OnFill_1211628
               (long param_1,long param_2,UIFilledSprite *param_3,BetterList *param_4,void *param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  void *xy;
  UIFilledSprite *self;
  long lVar9;
  UIFilledSprite *extraout_x0;
  UIFilledSprite *extraout_x0_00;
  UIFilledSprite *pUVar10;
  UIFilledSprite *extraout_x0_01;
  UIFilledSprite *extraout_x0_02;
  void *pvVar11;
  UIFilledSprite *pUVar12;
  UIFilledSprite *self_00;
  UIFilledSprite *extraout_x0_03;
  UIFilledSprite *self_01;
  UIFilledSprite *extraout_x0_04;
  UIFilledSprite *extraout_x0_05;
  UIFilledSprite *extraout_x0_06;
  float *pfVar13;
  UIFilledSprite *pUVar14;
  char cVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  float *pfVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  BetterList *runtimeMethod;
  uint uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  pUVar12 = param_3;
  runtimeMethod = param_4;
  if ((bRam0000000002b94680 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9fe8);
    NativeHelper_011df0b4(PTR_DAT_029b9ff8);
    NativeHelper_011df0b4(PTR_DAT_029b9fd8);
    NativeHelper_011df0b4(PTR_DAT_029b8fa8);
    NativeHelper_011df0b4(PTR_DAT_029ba320);
    NativeHelper_011df0b4(PTR_DAT_029ba328);
    bRam0000000002b94680 = 1;
  }
  puVar5 = PTR_DAT_029ba328;
  fVar28 = *(float *)(param_1 + 0xb8);
  fVar29 = *(float *)(param_1 + 0xbc);
  fVar24 = 0.0;
  fVar33 = 1.0;
  fVar31 = fVar28 + *(float *)(param_1 + 0xc0);
  fVar30 = fVar29 + *(float *)(param_1 + 0xc4);
  fVar27 = -1.0;
  if (*(int *)(param_1 + 0xd8) == 1) {
    fVar32 = *(float *)(param_1 + 0xdc);
    fVar26 = (fVar30 - fVar29) * fVar32;
    if (*(char *)(param_1 + 0xe0) != '\0') {
      fVar27 = -fVar32;
      fVar29 = fVar30 - fVar26;
      fVar24 = 0.0;
      goto LAB_01315740;
    }
    fVar33 = 1.0;
    fVar32 = -(1.0 - fVar32);
    fVar30 = fVar29 + fVar26;
  }
  else {
    fVar33 = 1.0;
    if (*(int *)(param_1 + 0xd8) == 0) {
      fVar33 = *(float *)(param_1 + 0xdc);
      fVar24 = (fVar31 - fVar28) * fVar33;
      fVar27 = -1.0;
      if (*(char *)(param_1 + 0xe0) == '\0') {
        fVar31 = fVar28 + fVar24;
        fVar24 = 0.0;
      }
      else {
        fVar28 = fVar31 - fVar24;
        fVar24 = 1.0 - fVar33;
        fVar33 = 1.0;
      }
    }
LAB_01315740:
    fVar32 = 0.0;
  }
  xy = (void *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029ba328,4);
  self = (UIFilledSprite *)NativeHelper_011df12c(*(undefined8 *)puVar5,4);
  if (xy == (void *)0x0) goto LAB_013162c0;
  uVar17 = *(uint *)((long)xy + 0x18);
  if (uVar17 != 0) {
    *(float *)((long)xy + 0x20) = fVar33;
    *(float *)((long)xy + 0x24) = fVar32;
    if (uVar17 != 1) {
      *(float *)((long)xy + 0x28) = fVar33;
      *(float *)((long)xy + 0x2c) = fVar27;
      if (2 < uVar17) {
        *(float *)((long)xy + 0x30) = fVar24;
        *(float *)((long)xy + 0x34) = fVar27;
        if (uVar17 != 3) {
          *(float *)((long)xy + 0x38) = fVar24;
          *(float *)((long)xy + 0x3c) = fVar32;
          if (self == (UIFilledSprite *)0x0) goto LAB_013162c0;
          uVar17 = *(uint *)&self->field_0x18;
          if (uVar17 != 0) {
            *(float *)&self->field_0x20 = fVar31;
            *(float *)&self->field_0x24 = fVar30;
            if (uVar17 != 1) {
              *(float *)&self->field_0x28 = fVar31;
              *(float *)&self->field_0x2c = fVar29;
              if (2 < uVar17) {
                *(float *)&self->field_0x30 = fVar28;
                *(float *)&self->field_0x34 = fVar29;
                if (uVar17 != 3) {
                  *(float *)&self->field_0x38 = fVar28;
                  *(float *)&self->field_0x3c = fVar30;
                  iVar21 = *(int *)(param_1 + 0xd8);
                  if (iVar21 == 4) {
                    lVar9 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8fa8,0x10);
                    NativeHelper_01f3db6c(lVar9,*(undefined8 *)PTR_DAT_029ba320,0);
                    pvVar11 = (void *)NativeHelper_011df12c(*(undefined8 *)puVar5,4);
                    pUVar12 = (UIFilledSprite *)NativeHelper_011df12c(*(undefined8 *)puVar5,4);
                    uVar4 = _UNK_007a38a8;
                    uVar3 = _UNK_007a33f8;
                    if (pvVar11 == (void *)0x0) {
LAB_013162c0:
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df2dc();
                    }
                    uVar25 = NEON_fmov(0x3f800000,4);
                    uVar17 = 0;
                    pUVar10 = pUVar12;
                    do {
                      uVar23 = *(uint *)((long)pvVar11 + 0x18);
                      if ((((uVar23 == 0) ||
                           (*(undefined8 *)((long)pvVar11 + 0x20) = 0, uVar23 == 1)) ||
                          (*(undefined8 *)((long)pvVar11 + 0x28) = uVar4, uVar23 < 3)) ||
                         (*(undefined8 *)((long)pvVar11 + 0x30) = uVar25, uVar23 == 3))
                      goto LAB_013162bc;
                      *(undefined8 *)((long)pvVar11 + 0x38) = uVar3;
                      if (pUVar12 == (UIFilledSprite *)0x0) goto LAB_013162c0;
                      uVar23 = *(uint *)&pUVar12->field_0x18;
                      if (((uVar23 == 0) || (*(undefined8 *)&pUVar12->field_0x20 = 0, uVar23 == 1))
                         || ((*(undefined8 *)&pUVar12->field_0x28 = uVar4, uVar23 < 3 ||
                             (*(undefined8 *)&pUVar12->field_0x30 = uVar25, uVar23 == 3))))
                      goto LAB_013162bc;
                      *(undefined8 *)&pUVar12->field_0x38 = uVar3;
                      if (*(char *)(param_1 + 0xe0) == '\0') {
                        if (uVar17 < 3) {
                          uVar23 = 3 - uVar17;
                          UIFilledSprite_Rotate_12115d4(pUVar10,pvVar11,uVar23,runtimeMethod);
                          pUVar10 = extraout_x0_00;
                          goto LAB_013159fc;
                        }
                      }
                      else if (uVar17 != 0) {
                        UIFilledSprite_Rotate_12115d4(pUVar10,pvVar11,uVar17,runtimeMethod);
                        pUVar10 = extraout_x0;
                        uVar23 = uVar17;
LAB_013159fc:
                        UIFilledSprite_Rotate_12115d4(pUVar10,pUVar12,uVar23,runtimeMethod);
                      }
                      uVar23 = uVar17 << 2;
                      if (*(char *)(param_1 + 0xe0) != '\0') {
                        uVar23 = uVar17 * -4 + 0xc;
                      }
                      if (lVar9 == 0) goto LAB_013162c0;
                      uVar2 = *(uint *)(lVar9 + 0x18);
                      uVar16 = (ulong)(int)uVar23;
                      lVar1 = lVar9 + 0x20;
                      uVar18 = 0;
                      pUVar10 = (UIFilledSprite *)&pUVar12->field_0x24;
                      pfVar13 = (float *)((long)pvVar11 + 0x24);
                      do {
                        if (((uVar2 <= uVar23) || (uVar2 <= (uint)(uVar16 | 1))) ||
                           ((uVar2 <= (uint)(uVar16 | 2) ||
                            ((uVar2 <= (uint)(uVar16 | 3) ||
                             (*(uint *)((long)pvVar11 + 0x18) <= uVar18)))))) goto LAB_013162bc;
                        fVar27 = pfVar13[-1];
                        fVar28 = *pfVar13;
                        fVar24 = *(float *)(lVar1 + (long)(int)uVar23 * 4);
                        fVar33 = *(float *)(lVar1 + (uVar16 | 2) * 4);
                        bVar7 = fVar27 < 0.0;
                        if (1.0 < fVar27) {
                          fVar27 = 1.0;
                        }
                        if (bVar7) {
                          fVar27 = 0.0;
                        }
                        bVar7 = fVar28 < 0.0;
                        if (1.0 < fVar28) {
                          fVar28 = 1.0;
                        }
                        fVar30 = *(float *)(lVar1 + (uVar16 | 1) * 4) - fVar24;
                        fVar29 = *(float *)(lVar1 + (uVar16 | 3) * 4) - fVar33;
                        if (bVar7) {
                          fVar28 = 0.0;
                        }
                        pfVar13[-1] = fVar24 + fVar30 * fVar27;
                        *pfVar13 = fVar33 + fVar29 * fVar28;
                        if (*(uint *)&pUVar12->field_0x18 <= uVar18) goto LAB_013162bc;
                        fVar27 = *(float *)((long)(pUVar10 + 0xffffffffffffffff) + 0xdd);
                        fVar28 = *(float *)pUVar10;
                        uVar18 = uVar18 + 1;
                        pfVar13 = pfVar13 + 2;
                        bVar7 = fVar27 < 0.0;
                        if (1.0 < fVar27) {
                          fVar27 = 1.0;
                        }
                        if (bVar7) {
                          fVar27 = 0.0;
                        }
                        bVar7 = fVar28 < 0.0;
                        if (1.0 < fVar28) {
                          fVar28 = 1.0;
                        }
                        if (bVar7) {
                          fVar28 = 0.0;
                        }
                        *(float *)((long)(pUVar10 + 0xffffffffffffffff) + 0xdd) =
                             fVar24 + fVar30 * fVar27;
                        *(float *)pUVar10 = fVar33 + fVar29 * fVar28;
                        pUVar10 = (UIFilledSprite *)&pUVar10->field_0x8;
                      } while (uVar18 != 4);
                      bVar7 = (uVar17 & 1) == 0;
                      runtimeMethod = (BetterList *)(ulong)bVar7;
                      pUVar14 = pUVar12;
                      bVar8 = UIFilledSprite_AdjustRadial_1211324
                                        (pUVar10,pvVar11,pUVar12,
                                         *(float *)(param_1 + 0xdc) * 4.0 - (float)(int)uVar17,bVar7
                                         ,param_5);
                      pUVar10 = (UIFilledSprite *)(ulong)bVar8;
                      if (bVar8) {
                        uVar23 = uVar17 & 1;
                        if (*(char *)(param_1 + 0xe0) != '\0') {
                          uVar23 = (uint)bVar7;
                        }
                        if (uVar23 == 0) {
                          uVar18 = 3;
                          pfVar13 = (float *)((long)pvVar11 + 0x3c);
                          pfVar19 = (float *)&pUVar12->field_0x3c;
                          do {
                            if (((*(uint *)((long)xy + 0x18) == 0) ||
                                (*(uint *)((long)xy + 0x18) < 3)) ||
                               (*(uint *)((long)pvVar11 + 0x18) <= uVar18)) goto LAB_013162bc;
                            fVar33 = pfVar13[-1];
                            fVar27 = *pfVar13;
                            fVar24 = fVar33;
                            if (1.0 < fVar33) {
                              fVar24 = 1.0;
                            }
                            fVar28 = fVar27;
                            if (1.0 < fVar27) {
                              fVar28 = 1.0;
                            }
                            if (fVar33 < 0.0) {
                              fVar24 = 0.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar28 = 0.0;
                            }
                            if (((*(uint *)&self->field_0x18 == 0) ||
                                (*(uint *)&self->field_0x18 < 3)) ||
                               (*(uint *)&pUVar12->field_0x18 <= uVar18)) goto LAB_013162bc;
                            fVar27 = pfVar19[-1];
                            fVar29 = *pfVar19;
                            fVar33 = fVar27;
                            if (1.0 < fVar27) {
                              fVar33 = 1.0;
                            }
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar33 = 0.0;
                            }
                            if (fVar29 < 0.0) {
                              fVar30 = 0.0;
                            }
                            if (param_2 == 0) goto LAB_013162c0;
                            fVar32 = *(float *)&self->field_0x20;
                            fVar27 = *(float *)&self->field_0x24;
                            fVar31 = *(float *)&self->field_0x30;
                            fVar29 = *(float *)&self->field_0x34;
                            NativeHelper_016a5480
                                      (*(float *)((long)xy + 0x20) +
                                       (*(float *)((long)xy + 0x30) - *(float *)((long)xy + 0x20)) *
                                       fVar24,*(float *)((long)xy + 0x24) +
                                              (*(float *)((long)xy + 0x34) -
                                              *(float *)((long)xy + 0x24)) * fVar28,0,param_2,
                                       *(undefined8 *)PTR_DAT_029b9fd8);
                            if ((param_3 == (UIFilledSprite *)0x0) ||
                               (NativeHelper_016a4fb0
                                          (fVar32 + (fVar31 - fVar32) * fVar33,
                                           fVar27 + (fVar29 - fVar27) * fVar30,param_3,
                                           *(undefined8 *)PTR_DAT_029b9ff8),
                               param_4 == (BetterList *)0x0)) goto LAB_013162c0;
                            BetterList_Add_15a0654(param_4,*(void **)PTR_DAT_029b9fe8,pUVar14);
                            uVar18 = uVar18 - 1;
                            pfVar13 = pfVar13 + -2;
                            pfVar19 = pfVar19 + -2;
                            pUVar10 = extraout_x0_02;
                          } while (uVar18 != 0xffffffffffffffff);
                        }
                        else {
                          uVar18 = 0;
                          pfVar19 = (float *)&pUVar12->field_0x24;
                          pfVar13 = (float *)((long)pvVar11 + 0x24);
                          do {
                            if (((*(uint *)((long)xy + 0x18) == 0) ||
                                (*(uint *)((long)xy + 0x18) < 3)) ||
                               (*(uint *)((long)pvVar11 + 0x18) <= uVar18)) goto LAB_013162bc;
                            fVar33 = pfVar13[-1];
                            fVar27 = *pfVar13;
                            fVar24 = fVar33;
                            if (1.0 < fVar33) {
                              fVar24 = 1.0;
                            }
                            fVar28 = fVar27;
                            if (1.0 < fVar27) {
                              fVar28 = 1.0;
                            }
                            if (fVar33 < 0.0) {
                              fVar24 = 0.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar28 = 0.0;
                            }
                            if (((*(uint *)&self->field_0x18 == 0) ||
                                (*(uint *)&self->field_0x18 < 3)) ||
                               (*(uint *)&pUVar12->field_0x18 <= uVar18)) goto LAB_013162bc;
                            fVar27 = pfVar19[-1];
                            fVar29 = *pfVar19;
                            fVar33 = fVar27;
                            if (1.0 < fVar27) {
                              fVar33 = 1.0;
                            }
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar33 = 0.0;
                            }
                            if (fVar29 < 0.0) {
                              fVar30 = 0.0;
                            }
                            if (param_2 == 0) goto LAB_013162c0;
                            fVar32 = *(float *)&self->field_0x20;
                            fVar27 = *(float *)&self->field_0x24;
                            fVar31 = *(float *)&self->field_0x30;
                            fVar29 = *(float *)&self->field_0x34;
                            NativeHelper_016a5480
                                      (*(float *)((long)xy + 0x20) +
                                       (*(float *)((long)xy + 0x30) - *(float *)((long)xy + 0x20)) *
                                       fVar24,*(float *)((long)xy + 0x24) +
                                              (*(float *)((long)xy + 0x34) -
                                              *(float *)((long)xy + 0x24)) * fVar28,0,param_2,
                                       *(undefined8 *)PTR_DAT_029b9fd8);
                            if ((param_3 == (UIFilledSprite *)0x0) ||
                               (NativeHelper_016a4fb0
                                          (fVar32 + (fVar31 - fVar32) * fVar33,
                                           fVar27 + (fVar29 - fVar27) * fVar30,param_3,
                                           *(undefined8 *)PTR_DAT_029b9ff8),
                               param_4 == (BetterList *)0x0)) goto LAB_013162c0;
                            BetterList_Add_15a0654(param_4,*(void **)PTR_DAT_029b9fe8,pUVar14);
                            uVar18 = uVar18 + 1;
                            pfVar13 = pfVar13 + 2;
                            pfVar19 = pfVar19 + 2;
                            pUVar10 = extraout_x0_01;
                          } while (uVar18 != 4);
                        }
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 != 4);
                  }
                  else if (iVar21 == 3) {
                    pvVar11 = (void *)NativeHelper_011df12c(*(undefined8 *)puVar5,4);
                    pUVar12 = (UIFilledSprite *)NativeHelper_011df12c(*(undefined8 *)puVar5,4);
                    uVar4 = _UNK_007a38a8;
                    uVar3 = _UNK_007a33f8;
                    if (pvVar11 == (void *)0x0) goto LAB_013162c0;
                    uVar25 = NEON_fmov(0x3f800000,4);
                    iVar21 = 0;
                    pUVar10 = pUVar12;
                    do {
                      uVar17 = *(uint *)((long)pvVar11 + 0x18);
                      if ((((uVar17 == 0) ||
                           (*(undefined8 *)((long)pvVar11 + 0x20) = 0, uVar17 == 1)) ||
                          (*(undefined8 *)((long)pvVar11 + 0x28) = uVar4, uVar17 < 3)) ||
                         (*(undefined8 *)((long)pvVar11 + 0x30) = uVar25, uVar17 == 3))
                      goto LAB_013162bc;
                      *(undefined8 *)((long)pvVar11 + 0x38) = uVar3;
                      if (pUVar12 == (UIFilledSprite *)0x0) goto LAB_013162c0;
                      uVar17 = *(uint *)&pUVar12->field_0x18;
                      if (((uVar17 == 0) || (*(undefined8 *)&pUVar12->field_0x20 = 0, uVar17 == 1))
                         || ((*(undefined8 *)&pUVar12->field_0x28 = uVar4, uVar17 < 3 ||
                             (*(undefined8 *)&pUVar12->field_0x30 = uVar25, uVar17 == 3))))
                      goto LAB_013162bc;
                      *(undefined8 *)&pUVar12->field_0x38 = uVar3;
                      if (*(char *)(param_1 + 0xe0) == '\0') {
                        if (iVar21 != 0) {
                          cVar15 = '\0';
                          goto LAB_01315ed4;
                        }
                        UIFilledSprite_Rotate_12115d4(pUVar10,pvVar11,1,runtimeMethod);
                        UIFilledSprite_Rotate_12115d4(self_01,pUVar12,1,runtimeMethod);
                        cVar15 = *(char *)(param_1 + 0xe0);
                        pUVar10 = extraout_x0_04;
LAB_01315f2c:
                        fVar33 = 1.0;
                        fVar24 = 0.5;
                        if (cVar15 != '\0') {
                          fVar33 = 0.5;
                          fVar24 = 1.0;
                        }
                      }
                      else {
                        if (iVar21 == 0) {
                          cVar15 = '\x01';
                          goto LAB_01315f2c;
                        }
                        UIFilledSprite_Rotate_12115d4(pUVar10,pvVar11,iVar21,runtimeMethod);
                        UIFilledSprite_Rotate_12115d4(self_00,pUVar12,iVar21,runtimeMethod);
                        cVar15 = *(char *)(param_1 + 0xe0);
                        pUVar10 = extraout_x0_03;
LAB_01315ed4:
                        if (iVar21 != 1) goto LAB_01315f2c;
                        fVar24 = 1.0;
                        if (cVar15 != '\0') {
                          fVar24 = 0.5;
                        }
                        fVar33 = 0.5;
                        if (cVar15 != '\0') {
                          fVar33 = 1.0;
                        }
                      }
                      if (*(uint *)((long)pvVar11 + 0x18) < 2) goto LAB_013162bc;
                      fVar28 = *(float *)((long)pvVar11 + 0x2c);
                      fVar33 = fVar33 - fVar24;
                      fVar27 = fVar28;
                      if (1.0 < fVar28) {
                        fVar27 = 1.0;
                      }
                      if (fVar28 < 0.0) {
                        fVar27 = 0.0;
                      }
                      *(float *)((long)pvVar11 + 0x2c) = fVar24 + fVar33 * fVar27;
                      if (*(uint *)((long)pvVar11 + 0x18) == 2) goto LAB_013162bc;
                      fVar28 = *(float *)((long)pvVar11 + 0x34);
                      fVar27 = fVar28;
                      if (1.0 < fVar28) {
                        fVar27 = 1.0;
                      }
                      if (fVar28 < 0.0) {
                        fVar27 = 0.0;
                      }
                      *(float *)((long)pvVar11 + 0x34) = fVar24 + fVar33 * fVar27;
                      if (*(uint *)&pUVar12->field_0x18 < 2) goto LAB_013162bc;
                      fVar28 = *(float *)&pUVar12->field_0x2c;
                      fVar27 = fVar28;
                      if (1.0 < fVar28) {
                        fVar27 = 1.0;
                      }
                      if (fVar28 < 0.0) {
                        fVar27 = 0.0;
                      }
                      *(float *)&pUVar12->field_0x2c = fVar24 + fVar33 * fVar27;
                      if (*(uint *)&pUVar12->field_0x18 == 2) goto LAB_013162bc;
                      fVar28 = *(float *)&pUVar12->field_0x34;
                      fVar27 = fVar28;
                      if (1.0 < fVar28) {
                        fVar27 = 1.0;
                      }
                      if (fVar28 < 0.0) {
                        fVar27 = 0.0;
                      }
                      *(float *)&pUVar12->field_0x34 = fVar24 + fVar33 * fVar27;
                      bVar7 = iVar21 != 1;
                      runtimeMethod = (BetterList *)(ulong)bVar7;
                      pUVar14 = pUVar12;
                      bVar8 = UIFilledSprite_AdjustRadial_1211324
                                        (pUVar10,pvVar11,pUVar12,
                                         (*(float *)(param_1 + 0xdc) + *(float *)(param_1 + 0xdc)) -
                                         (float)iVar21,bVar7,param_5);
                      pUVar10 = (UIFilledSprite *)(ulong)bVar8;
                      if (bVar8) {
                        bVar8 = iVar21 == 1;
                        if (*(char *)(param_1 + 0xe0) != '\0') {
                          bVar8 = bVar7;
                        }
                        if (bVar8) {
                          uVar18 = 0;
                          pfVar13 = (float *)((long)pvVar11 + 0x24);
                          pfVar19 = (float *)&pUVar12->field_0x24;
                          do {
                            if (((*(uint *)((long)xy + 0x18) == 0) ||
                                (*(uint *)((long)xy + 0x18) < 3)) ||
                               (*(uint *)((long)pvVar11 + 0x18) <= uVar18)) goto LAB_013162bc;
                            fVar33 = pfVar13[-1];
                            fVar27 = *pfVar13;
                            fVar24 = fVar33;
                            if (1.0 < fVar33) {
                              fVar24 = 1.0;
                            }
                            fVar28 = fVar27;
                            if (1.0 < fVar27) {
                              fVar28 = 1.0;
                            }
                            if (fVar33 < 0.0) {
                              fVar24 = 0.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar28 = 0.0;
                            }
                            if (((*(uint *)&self->field_0x18 == 0) ||
                                (*(uint *)&self->field_0x18 < 3)) ||
                               (*(uint *)&pUVar12->field_0x18 <= uVar18)) goto LAB_013162bc;
                            fVar27 = pfVar19[-1];
                            fVar29 = *pfVar19;
                            fVar33 = fVar27;
                            if (1.0 < fVar27) {
                              fVar33 = 1.0;
                            }
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar33 = 0.0;
                            }
                            if (fVar29 < 0.0) {
                              fVar30 = 0.0;
                            }
                            if (param_2 == 0) goto LAB_013162c0;
                            fVar29 = *(float *)&self->field_0x20;
                            fVar27 = *(float *)&self->field_0x24;
                            fVar32 = *(float *)&self->field_0x30;
                            fVar31 = *(float *)&self->field_0x34;
                            NativeHelper_016a5480
                                      (*(float *)((long)xy + 0x20) +
                                       (*(float *)((long)xy + 0x30) - *(float *)((long)xy + 0x20)) *
                                       fVar24,*(float *)((long)xy + 0x24) +
                                              (*(float *)((long)xy + 0x34) -
                                              *(float *)((long)xy + 0x24)) * fVar28,0,param_2,
                                       *(undefined8 *)PTR_DAT_029b9fd8);
                            if ((param_3 == (UIFilledSprite *)0x0) ||
                               (NativeHelper_016a4fb0
                                          (fVar29 + (fVar32 - fVar29) * fVar33,
                                           fVar27 + (fVar31 - fVar27) * fVar30,param_3,
                                           *(undefined8 *)PTR_DAT_029b9ff8),
                               param_4 == (BetterList *)0x0)) goto LAB_013162c0;
                            BetterList_Add_15a0654(param_4,*(void **)PTR_DAT_029b9fe8,pUVar14);
                            uVar18 = uVar18 + 1;
                            pfVar13 = pfVar13 + 2;
                            pfVar19 = pfVar19 + 2;
                            pUVar10 = extraout_x0_05;
                          } while (uVar18 != 4);
                        }
                        else {
                          uVar18 = 3;
                          pfVar13 = (float *)&pUVar12->field_0x3c;
                          pfVar19 = (float *)((long)pvVar11 + 0x3c);
                          do {
                            if (((*(uint *)((long)xy + 0x18) == 0) ||
                                (*(uint *)((long)xy + 0x18) < 3)) ||
                               (*(uint *)((long)pvVar11 + 0x18) <= uVar18)) goto LAB_013162bc;
                            fVar33 = pfVar19[-1];
                            fVar27 = *pfVar19;
                            fVar24 = fVar33;
                            if (1.0 < fVar33) {
                              fVar24 = 1.0;
                            }
                            fVar28 = fVar27;
                            if (1.0 < fVar27) {
                              fVar28 = 1.0;
                            }
                            if (fVar33 < 0.0) {
                              fVar24 = 0.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar28 = 0.0;
                            }
                            if (((*(uint *)&self->field_0x18 == 0) ||
                                (*(uint *)&self->field_0x18 < 3)) ||
                               (*(uint *)&pUVar12->field_0x18 <= uVar18)) goto LAB_013162bc;
                            fVar27 = pfVar13[-1];
                            fVar29 = *pfVar13;
                            fVar33 = fVar27;
                            if (1.0 < fVar27) {
                              fVar33 = 1.0;
                            }
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            if (fVar27 < 0.0) {
                              fVar33 = 0.0;
                            }
                            if (fVar29 < 0.0) {
                              fVar30 = 0.0;
                            }
                            if (param_2 == 0) goto LAB_013162c0;
                            fVar29 = *(float *)&self->field_0x20;
                            fVar27 = *(float *)&self->field_0x24;
                            fVar32 = *(float *)&self->field_0x30;
                            fVar31 = *(float *)&self->field_0x34;
                            NativeHelper_016a5480
                                      (*(float *)((long)xy + 0x20) +
                                       (*(float *)((long)xy + 0x30) - *(float *)((long)xy + 0x20)) *
                                       fVar24,*(float *)((long)xy + 0x24) +
                                              (*(float *)((long)xy + 0x34) -
                                              *(float *)((long)xy + 0x24)) * fVar28,0,param_2,
                                       *(undefined8 *)PTR_DAT_029b9fd8);
                            if ((param_3 == (UIFilledSprite *)0x0) ||
                               (NativeHelper_016a4fb0
                                          (fVar29 + (fVar32 - fVar29) * fVar33,
                                           fVar27 + (fVar31 - fVar27) * fVar30,param_3,
                                           *(undefined8 *)PTR_DAT_029b9ff8),
                               param_4 == (BetterList *)0x0)) goto LAB_013162c0;
                            BetterList_Add_15a0654(param_4,*(void **)PTR_DAT_029b9fe8,pUVar14);
                            uVar18 = uVar18 - 1;
                            pfVar19 = pfVar19 + -2;
                            pfVar13 = pfVar13 + -2;
                            pUVar10 = extraout_x0_06;
                          } while (uVar18 != 0xffffffffffffffff);
                        }
                      }
                      iVar21 = iVar21 + 1;
                    } while (iVar21 != 2);
                  }
                  else if ((iVar21 != 2) ||
                          (pUVar12 = self,
                          bVar7 = UIFilledSprite_AdjustRadial_1211324
                                            (self,xy,self,*(float *)(param_1 + 0xdc),
                                             *(bool *)(param_1 + 0xe0),param_5), bVar7)) {
                    puVar6 = PTR_DAT_029b9ff8;
                    puVar5 = PTR_DAT_029b9fe8;
                    uVar18 = 0;
                    puVar20 = (undefined4 *)((long)xy + 0x24);
                    puVar22 = (undefined4 *)&self->field_0x24;
                    do {
                      if (*(uint *)((long)xy + 0x18) <= uVar18) goto LAB_013162bc;
                      if (param_2 == 0) goto LAB_013162c0;
                      NativeHelper_016a5480
                                (puVar20[-1],*puVar20,0,param_2,*(undefined8 *)PTR_DAT_029b9fd8);
                      if (*(uint *)&self->field_0x18 <= uVar18) goto LAB_013162bc;
                      if ((param_3 == (UIFilledSprite *)0x0) ||
                         (NativeHelper_016a4fb0(puVar22[-1],*puVar22,param_3,*(undefined8 *)puVar6),
                         param_4 == (BetterList *)0x0)) goto LAB_013162c0;
                      BetterList_Add_15a0654(param_4,*(void **)puVar5,pUVar12);
                      uVar18 = uVar18 + 1;
                      puVar20 = puVar20 + 2;
                      puVar22 = puVar22 + 2;
                    } while (uVar18 != 4);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013162bc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

