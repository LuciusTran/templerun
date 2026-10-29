// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Print(string text, Color color, BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols, bool encoding, SymbolStyle symbolStyle, Alignment alignment, int lineWidth) { }
// Ghidra address: 013a32a4; ELF VA: 0x12a32a4; file offset: 0x129f2a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIFont_Print_129f2a4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               UIFont *param_5,void *param_6,long param_7,long param_8,BetterList *param_9,
               uint param_10,int param_11,int param_12,int param_13)

{
  int iVar1;
  int textLength;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  undefined8 uVar14;
  BMSymbol *self;
  BMGlyph *self_00;
  undefined8 *puVar15;
  void *extraout_x1;
  undefined8 uVar16;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar17;
  BMFont *pBVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  int iVar22;
  long *plVar23;
  uint uVar24;
  double unaff_x23;
  uint uVar25;
  uint uVar26;
  UIFont *x;
  int iVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  Recovered_Rect RVar37;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int iStack_a4;
  
  puVar9 = PTR_DAT_029be4a8;
  puVar8 = PTR_DAT_029be4a0;
  puVar7 = PTR_DAT_029b9fe8;
  puVar6 = PTR_DAT_029b9e90;
  puVar5 = PTR_DAT_029b9e80;
  puVar4 = PTR_DAT_029b7fb8;
  puVar3 = PTR_DAT_029b7f98;
  do {
    if ((bRam0000000002b94d53 & 1) == 0) {
      NativeHelper_011df0b4(puVar7);
      NativeHelper_011df0b4(PTR_DAT_029b9ff8);
      NativeHelper_011df0b4(PTR_DAT_029b9fd8);
      NativeHelper_011df0b4(puVar4);
      NativeHelper_011df0b4(puVar5);
      NativeHelper_011df0b4(puVar8);
      NativeHelper_011df0b4(puVar6);
      NativeHelper_011df0b4(PTR_DAT_029b9e98);
      NativeHelper_011df0b4(puVar3);
      NativeHelper_011df0b4(puVar9);
      bRam0000000002b94d53 = 1;
    }
    x = param_5->mReplacement;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar10 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    if (!bVar10) {
      if (param_6 == (void *)0x0) {
        return;
      }
      if (param_5->mFont == (BMFont *)0x0) {
        return;
      }
      bVar10 = BMFont_get_isValid_11fdd34(param_5->mFont,(void *)0x0);
      if (!bVar10) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar3 = PTR_DAT_029b7fb8;
        uVar14 = *(undefined8 *)puVar9;
        uVar16 = 0;
        if ((bRam0000000002b9c2fc & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
          NativeHelper_011df0b4(PTR_DAT_029f2e60);
          bRam0000000002b9c2fc = 1;
          uVar16 = extraout_x1_04;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          uVar16 = extraout_x1_05;
        }
        if (cRam0000000002b9b5c7 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar16);
          cRam0000000002b9b5c7 = '\x01';
        }
        lVar17 = *(long *)puVar3;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar17 = *(long *)puVar3;
        }
        plVar23 = *(long **)(*(long *)(lVar17 + 0xb8) + 8);
        if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        lVar17 = *plVar23;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar20 == 0) goto code_r0x025ee2f8;
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto code_r0x025ee2e0;
      }
      pvVar13 = param_5->mColors;
      if (pvVar13 != (void *)0x0) {
        lVar17 = *(long *)((long)pvVar13 + 0x10);
        lVar19 = *(long *)puVar5;
        *(undefined4 *)((long)pvVar13 + 0x18) = 0;
        *(int *)((long)pvVar13 + 0x1c) = *(int *)((long)pvVar13 + 0x1c) + 2;
        if (lVar17 != 0) {
          if (*(int *)(lVar17 + 0x18) == 0) {
            NativeHelper_019eec24
                      (param_1,param_2,param_3,param_4,pvVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            pvVar13 = extraout_x1_00;
          }
          else {
            *(undefined4 *)((long)pvVar13 + 0x18) = 1;
            *(int *)(lVar17 + 0x20) = (int)param_1;
            *(int *)(lVar17 + 0x24) = (int)param_2;
            *(int *)(lVar17 + 0x28) = (int)param_3;
            *(int *)(lVar17 + 0x2c) = (int)param_4;
            pvVar13 = extraout_x1;
          }
          if (param_5->mFont != (BMFont *)0x0) {
            iVar27 = param_5->mFont->mSize;
            if (iVar27 < 1) {
              if (cRam0000000002b945c0 == '\0') {
                NativeHelper_011df0b4(PTR_DAT_029b9a40);
                cRam0000000002b945c0 = '\x01';
                pvVar13 = extraout_x1_01;
              }
              fVar33 = *(float *)(*(long *)(*(long *)PTR_DAT_029b9a40 + 0xb8) + 8);
              fVar2 = *(float *)(*(long *)(*(long *)PTR_DAT_029b9a40 + 0xb8) + 0xc);
            }
            else {
              fVar33 = 1.0 / (float)iVar27;
              fVar2 = fVar33;
            }
            if ((param_7 != 0) && (param_5->mFont != (BMFont *)0x0)) {
              uVar26 = *(uint *)(param_7 + 0x18);
              iVar27 = param_5->mFont->mSize;
              iVar1 = param_5->mSpacingY;
              if (cRam0000000002b94510 == '\0') {
                NativeHelper_011df0b4(PTR_DAT_029b9368);
                cRam0000000002b94510 = '\x01';
                pvVar13 = extraout_x1_02;
              }
              if (cRam0000000002b945be == '\0') {
                NativeHelper_011df0b4(PTR_DAT_029b9a40);
                cRam0000000002b945be = '\x01';
                pvVar13 = extraout_x1_03;
              }
              RVar37 = UIFont_get_uvRect_129d4bc(param_5,pvVar13);
              pBVar18 = param_5->mFont;
              if (pBVar18 != (BMFont *)0x0) {
                textLength = *(int *)((long)param_6 + 0x10);
                if (0 < textLength) {
                  fVar31 = RVar37.component2 / (float)pBVar18->mWidth;
                  iVar22 = 0;
                  uVar25 = 0;
                  uVar24 = 0;
                  fVar28 = (param_5->mUVRect).component3 / (float)pBVar18->mHeight;
                  iStack_a4 = 0;
                  goto LAB_013a35dc;
                }
                iVar22 = 0;
                goto joined_r0x013a3aa8;
              }
            }
          }
        }
      }
      break;
    }
    param_5 = param_5->mReplacement;
  } while (param_5 != (UIFont *)0x0);
LAB_013a33d8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
code_r0x025ee2e0:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_029f2e60) {
      puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 3) * 0x10 + 0x138);
      goto code_r0x025ee318;
    }
  }
code_r0x025ee2f8:
  puVar15 = (undefined8 *)NativeHelper_011b5528(plVar23,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee318:
                    /* WARNING: Could not recover jumptable at 0x025ee330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar15)(plVar23,0,uVar14,puVar15[1]);
  return;
LAB_013a35dc:
  do {
    uVar11 = NativeHelper_01e973c4(param_6,uVar24,0);
    uVar11 = uVar11 & 0xffff;
    if (uVar11 == 10) {
      if (param_12 != 0) {
        UIFont_Align_129f114(param_5,param_7,uVar26,param_12,iVar22,param_13);
        uVar26 = *(uint *)(param_7 + 0x18);
      }
      uVar25 = 0;
      iVar22 = 0;
      iStack_a4 = iVar1 + iVar27 + iStack_a4;
      goto LAB_013a3a9c;
    }
    if (uVar11 < 0x20) {
      uVar25 = 0;
      goto LAB_013a3a9c;
    }
    if (((uVar11 == 0x5b) && ((param_10 & 1) != 0)) &&
       (iVar12 = NGUITools_ParseSymbol_1202e38(param_6,uVar24,param_5->mColors,0), 0 < iVar12)) {
      pvVar13 = param_5->mColors;
      if (pvVar13 != (void *)0x0) {
        NativeHelper_019ee8fc
                  (pvVar13,*(int *)((long)pvVar13 + 0x18) + -1,*(undefined8 *)PTR_DAT_029b9e98);
        uVar24 = (uVar24 + iVar12) - 1;
        goto LAB_013a3a9c;
      }
      goto LAB_013a33d8;
    }
    if (param_11 != 0 && ((param_10 ^ 1) & 1) == 0) {
      if (param_5->mFont == (BMFont *)0x0) goto LAB_013a33d8;
      pvVar13 = (void *)(ulong)uVar24;
      self = BMFont_MatchSymbol_11fe350(param_5->mFont,param_6,uVar24,textLength,(void *)0x0);
      if (self == (BMSymbol *)0x0) goto LAB_013a37c0;
      fVar35 = fVar33 * (float)iVar22;
      fVar36 = -fVar2 * (float)iStack_a4;
      fVar29 = (float)self->width;
      fStack_ec = (param_5->mUVRect).component0 + fVar31 * (float)self->x;
      fVar34 = ((param_5->mUVRect).component3 + (param_5->mUVRect).component1) -
               fVar28 * (float)self->y;
      fStack_f4 = fVar31 * fVar29 + fStack_ec;
      fStack_e8 = fVar35 + fVar33 * fVar29;
      fStack_e4 = fVar36 - fVar2 * (float)self->height;
      fStack_f0 = fVar34 - fVar28 * (float)self->height;
      iVar22 = self->width + iVar22 + param_5->mSpacingX;
      iVar12 = BMSymbol_get_length_11fe4a0(self,(void *)0x0);
      uVar24 = (uVar24 + iVar12) - 1;
      if (param_11 == 2) {
        if (param_9 == (BetterList *)0x0) goto LAB_013a33d8;
        iVar12 = 4;
        do {
          BetterList_Add_15a0654(param_9,*(void **)puVar7,pvVar13);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      else {
        if (param_9 == (BetterList *)0x0) goto LAB_013a33d8;
        iVar12 = 4;
        do {
          BetterList_Add_15a0654(param_9,*(void **)puVar7,pvVar13);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      uVar25 = 0;
      goto LAB_013a39b0;
    }
LAB_013a37c0:
    if (param_5->mFont == (BMFont *)0x0) goto LAB_013a33d8;
    pvVar13 = (void *)0x0;
    self_00 = BMFont_GetGlyph_11fe1d4(param_5->mFont,uVar11,(void *)0x0);
    if (self_00 == (BMGlyph *)0x0) goto LAB_013a3a9c;
    if (uVar25 != 0) {
      pvVar13 = (void *)0x0;
      iVar12 = BMGlyph_GetKerning_11fe7d0(self_00,uVar25,(void *)0x0);
      iVar22 = iVar12 + iVar22;
    }
    if (uVar11 == 0x20) {
      uVar25 = 0x20;
      iVar22 = param_5->mSpacingX + iVar22 + self_00->advance;
      goto LAB_013a3a9c;
    }
    fStack_ec = (param_5->mUVRect).component0 + fVar31 * (float)self_00->x;
    fVar35 = fVar33 * (float)(self_00->offsetX + iVar22);
    fVar36 = -fVar2 * (float)(self_00->offsetY + iStack_a4);
    fVar34 = ((param_5->mUVRect).component3 + (param_5->mUVRect).component1) -
             fVar28 * (float)self_00->y;
    fStack_e8 = fVar35 + fVar33 * (float)self_00->width;
    fStack_e4 = fVar36 - fVar2 * (float)self_00->height;
    fStack_f4 = fVar31 * (float)self_00->width + fStack_ec;
    fStack_f0 = fVar34 - fVar28 * (float)self_00->height;
    iVar22 = param_5->mSpacingX + iVar22 + self_00->advance;
    uVar25 = uVar11;
    switch(self_00->channel) {
    case 0:
      goto code_r0x013a3930;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      if (self_00->channel != 0xf) break;
code_r0x013a3930:
      if (param_9 != (BetterList *)0x0) {
        iVar12 = 4;
        do {
          BetterList_Add_15a0654(param_9,*(void **)puVar7,pvVar13);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        goto LAB_013a39b0;
      }
      goto LAB_013a33d8;
    }
    if (param_9 == (BetterList *)0x0) goto LAB_013a33d8;
    iVar12 = 4;
    do {
      BetterList_Add_15a0654(param_9,*(void **)puVar7,pvVar13);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
LAB_013a39b0:
    puVar3 = PTR_DAT_029b9fd8;
    NativeHelper_016a5480(fStack_e8,fVar36,0,param_7,*(undefined8 *)PTR_DAT_029b9fd8);
    NativeHelper_016a5480(fStack_e8,fStack_e4,0,param_7,*(undefined8 *)puVar3);
    NativeHelper_016a5480(fVar35,fStack_e4,0,param_7,*(undefined8 *)puVar3);
    NativeHelper_016a5480(fVar35,fVar36,0,param_7,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_029b9ff8;
    if (param_8 == 0) goto LAB_013a33d8;
    NativeHelper_016a4fb0(fStack_f4,fVar34,param_8,*(undefined8 *)PTR_DAT_029b9ff8);
    NativeHelper_016a4fb0(fStack_f4,fStack_f0,param_8,*(undefined8 *)puVar3);
    NativeHelper_016a4fb0(fStack_ec,fStack_f0,param_8,*(undefined8 *)puVar3);
    NativeHelper_016a4fb0(fStack_ec,fVar34,param_8,*(undefined8 *)puVar3);
LAB_013a3a9c:
    uVar24 = uVar24 + 1;
  } while ((int)uVar24 < textLength);
joined_r0x013a3aa8:
  if ((param_12 == 0) || (*(int *)(param_7 + 0x18) <= (int)uVar26)) {
    return;
  }
  if (param_12 == 0) {
    return;
  }
  if (param_5->mFont == (BMFont *)0x0) goto code_r0x013a329c;
  if (param_5->mFont->mSize < 1) {
    return;
  }
  fVar33 = (float)(param_13 - iVar22);
  if (param_12 != 2) {
    fVar33 = (float)(param_13 - iVar22) * 0.5;
  }
  if (cRam0000000002b94681 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b94681 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  dVar32 = (double)fVar33;
  dVar30 = (double)NativeHelper_028614b0(dVar32,&stack0xffffffffffffffd8);
  if (0.0 <= fVar33) {
    if (dVar30 == 0.5) {
      dVar30 = 1.0;
      goto code_r0x013a31dc;
    }
    unaff_x23 = (double)(long)(dVar32 + 0.5);
  }
  else if (dVar30 == -0.5) {
    dVar30 = -1.0;
code_r0x013a31dc:
    if (((long)unaff_x23 & 1U) != 0) {
      unaff_x23 = unaff_x23 + dVar30;
    }
  }
  else {
    unaff_x23 = (double)(long)(dVar32 + -0.5);
  }
  uVar24 = 0x80000000;
  if (unaff_x23 != INFINITY) {
    uVar24 = (int)unaff_x23;
  }
  if ((param_5->mFont != (BMFont *)0x0) && (param_7 != 0)) {
    if ((int)uVar26 < *(int *)(param_7 + 0x18)) {
      iVar27 = param_5->mFont->mSize;
      lVar17 = (long)(int)uVar26 * 0xc + 0x20;
      do {
        lVar19 = *(long *)(param_7 + 0x10);
        if (lVar19 == 0) goto code_r0x013a329c;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        uVar26 = uVar26 + 1;
        *(float *)(lVar19 + lVar17) =
             (float)(int)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU)) / (float)iVar27 +
             *(float *)(lVar19 + lVar17);
        lVar17 = lVar17 + 0xc;
      } while ((int)uVar26 < *(int *)(param_7 + 0x18));
    }
    return;
  }
code_r0x013a329c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

