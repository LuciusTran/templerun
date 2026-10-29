// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Vector2 CalculatePrintedSize(string text, bool encoding, SymbolStyle symbolStyle) { }
// Ghidra address: 013a2838; ELF VA: 0x12a2838; file offset: 0x129e838
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Vector2
UIFont_CalculatePrintedSize_129e838
          (UIFont *self,void *text,bool encoding,void *symbolStyle,void *runtimeMethod)

{
  int iVar1;
  int textLength;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  BMSymbol *self_00;
  BMGlyph *self_01;
  BMFont *pBVar9;
  UIFont *x;
  int offset;
  uint previousChar;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  Recovered_Vector2 RVar15;
  
  puVar3 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94d51 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d51 = 1;
  }
  x = self->mReplacement;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (self->mReplacement == (UIFont *)0x0) goto LAB_013a2aec;
    RVar15 = UIFont_CalculatePrintedSize_129e838
                       (self->mReplacement,text,encoding,(void *)((ulong)symbolStyle & 0xffffffff),
                        runtimeMethod);
    fVar14 = RVar15.component1;
    fVar13 = RVar15.component0;
  }
  else {
    if (cRam0000000002b945be == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9a40);
      cRam0000000002b945be = '\x01';
    }
    fVar13 = **(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8);
    fVar14 = (*(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8))[1];
    if (((self->mFont != (BMFont *)0x0) &&
        (bVar4 = BMFont_get_isValid_11fdd34(self->mFont,(void *)0x0), bVar4)) &&
       (uVar8 = NativeHelper_01e9be28(text,0), (uVar8 & 1) == 0)) {
      if (encoding) {
        text = NGUITools_StripSymbols_1203010(text,(void *)0x0);
      }
      if ((text == (void *)0x0) || (pBVar9 = self->mFont, pBVar9 == (BMFont *)0x0)) {
LAB_013a2aec:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      textLength = *(int *)((long)text + 0x10);
      iVar10 = 0;
      iVar12 = 0;
      iVar1 = self->mSpacingY + pBVar9->mSize;
      iVar11 = 0;
      if (0 < textLength) {
        previousChar = 0;
        offset = 0;
        do {
          uVar5 = NativeHelper_01e973c4(text,offset,0);
          uVar5 = uVar5 & 0xffff;
          if (uVar5 == 10) {
            iVar6 = iVar12;
            if (iVar12 <= iVar10) {
              iVar6 = iVar10;
            }
            iVar11 = iVar11 + iVar1;
            iVar12 = 0;
            iVar10 = iVar6;
            previousChar = 0;
          }
          else if (uVar5 < 0x20) {
            previousChar = 0;
          }
          else {
            if ((int)symbolStyle != 0 && encoding) {
              if (self->mFont == (BMFont *)0x0) goto LAB_013a2aec;
              self_00 = BMFont_MatchSymbol_11fe350(self->mFont,text,offset,textLength,(void *)0x0);
              if (self_00 != (BMSymbol *)0x0) {
                iVar12 = self->mSpacingX + iVar12 + self_00->width;
                iVar6 = BMSymbol_get_length_11fe4a0(self_00,(void *)0x0);
                offset = offset + iVar6 + -1;
                previousChar = 0;
                goto LAB_013a2a6c;
              }
            }
            if (self->mFont == (BMFont *)0x0) goto LAB_013a2aec;
            self_01 = BMFont_GetGlyph_11fe1d4(self->mFont,uVar5,(void *)0x0);
            if (self_01 != (BMGlyph *)0x0) {
              iVar2 = self->mSpacingX;
              iVar6 = self_01->advance;
              if (previousChar != 0) {
                iVar7 = BMGlyph_GetKerning_11fe7d0(self_01,previousChar,(void *)0x0);
                iVar6 = iVar7 + iVar6;
              }
              iVar12 = iVar2 + iVar12 + iVar6;
              previousChar = uVar5;
            }
          }
LAB_013a2a6c:
          offset = offset + 1;
        } while (offset < textLength);
        pBVar9 = self->mFont;
        if (pBVar9 == (BMFont *)0x0) goto LAB_013a2aec;
      }
      if (pBVar9->mSize < 1) {
        fVar14 = 1.0;
      }
      else {
        fVar14 = 1.0 / (float)pBVar9->mSize;
      }
      if (iVar12 <= iVar10) {
        iVar12 = iVar10;
      }
      fVar13 = fVar14 * (float)iVar12;
      fVar14 = fVar14 * (float)(iVar11 + iVar1);
    }
  }
  RVar15.component1 = fVar14;
  RVar15.component0 = fVar13;
  return RVar15;
}

