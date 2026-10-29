// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ProcessText() { }
// Ghidra address: 013a5038; ELF VA: 0x12a5038; file offset: 0x12a1038
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UILabel_ProcessText_12a1038(UILabel *self,void *runtimeMethod)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  bool bVar11;
  void *in_x4;
  void *in_x5;
  UIFont *pUVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  Recovered_Vector3 RVar18;
  Recovered_Vector2 RVar19;
  undefined2 auStack_24 [2];
  
  if ((bRam0000000002b94d63 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b88e0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8950);
    NativeHelper_011df0b4(PTR_DAT_029b88f0);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029be4e0);
    bRam0000000002b94d63 = 1;
  }
  auStack_24[0] = 0;
  fVar17 = (self->mEffectColor).component2;
  fVar15 = (self->mEffectColor).component3;
  fVar16 = (self->mEffectColor).component0;
  fVar2 = (self->mEffectColor).component1;
  pvVar7 = self->mText;
  iVar14 = self->mMaxLineWidth;
  bVar6 = self->mEncoding;
  bVar11 = self->mMultiline;
  bVar3 = self->mPassword;
  bVar4 = self->mShowLastChar;
  self->mShouldBeProcessed = false;
  self->field_0x58 = 1;
  *(undefined4 *)&self->field_0xf0 = *(undefined4 *)&self->field_0xa8;
  (self->mLastColor).component2 = fVar17;
  (self->mLastColor).component3 = fVar15;
  (self->mLastColor).component0 = fVar16;
  (self->mLastColor).component1 = fVar2;
  self->mLastText = pvVar7;
  self->mLastWidth = iVar14;
  self->mLastEncoding = bVar6;
  self->mLastMulti = bVar11;
  self->mLastPass = bVar3;
  self->mLastShow = bVar4;
  if (pvVar7 == (void *)0x0) goto LAB_013a538c;
  pvVar7 = (void *)NativeHelper_01e9d6d8
                             (pvVar7,*(undefined8 *)PTR_DAT_029b88f0,*(undefined8 *)PTR_DAT_029b8950
                              ,0);
  self->mProcessedText = pvVar7;
  if (self->mPassword == false) {
    iVar14 = self->mMaxLineWidth;
    if (0 < iVar14) {
      pUVar12 = self->mFont;
      pvVar8 = UIWidget_get_cachedTransform_12015ac((UIWidget *)self,(void *)0x0);
      if (pvVar8 == (void *)0x0) goto LAB_013a538c;
      RVar18 = UnityEngine_Transform_get_localScale_2516d6c(pvVar8,(void *)0x0);
      if (pUVar12 == (UIFont *)0x0) goto LAB_013a538c;
      uVar1 = *(uint *)&self->field_0xbc;
      bVar6 = self->mEncoding;
      bVar11 = self->mMultiline;
      fVar17 = (float)iVar14 / RVar18.component0;
LAB_013a5218:
      in_x4 = (void *)(ulong)uVar1;
      pvVar7 = UIFont_WrapText_129eb78(pUVar12,pvVar7,fVar17,bVar11,bVar6,in_x4,in_x5);
      goto LAB_013a5250;
    }
    if (self->mMultiline == false) {
      pUVar12 = self->mFont;
      if (pUVar12 == (UIFont *)0x0) goto LAB_013a538c;
      uVar1 = *(uint *)&self->field_0xbc;
      bVar6 = self->mEncoding;
      bVar11 = false;
      fVar17 = _UNK_007a3b6c;
      goto LAB_013a5218;
    }
  }
  else {
    if (self->mFont == (UIFont *)0x0) goto LAB_013a538c;
    in_x4 = (void *)0x0;
    pvVar8 = UIFont_WrapText_129eb78(self->mFont,pvVar7,_UNK_007a3b6c,false,false,(void *)0x0,in_x5)
    ;
    self->mProcessedText = pvVar8;
    puVar5 = PTR_DAT_029be4e0;
    if (pvVar8 == (void *)0x0) goto LAB_013a538c;
    iVar14 = *(int *)((long)pvVar8 + 0x10);
    pvVar7 = *(void **)PTR_DAT_029b8618;
    if (self->mShowLastChar == false) {
      if (0 < iVar14) {
        do {
          pvVar7 = (void *)NativeHelper_01e92d00(pvVar7,*(undefined8 *)puVar5,0);
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      iVar13 = iVar14 + -1;
      if (iVar13 != 0 && 0 < iVar14) {
        do {
          pvVar7 = (void *)NativeHelper_01e92d00(pvVar7,*(undefined8 *)puVar5,0);
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        pvVar8 = self->mProcessedText;
        if (pvVar8 == (void *)0x0) goto LAB_013a538c;
      }
      if (0 < *(int *)((long)pvVar8 + 0x10)) {
        auStack_24[0] = NativeHelper_01e973c4(pvVar8,*(int *)((long)pvVar8 + 0x10) + -1,0);
        if (*(int *)(*(long *)PTR_DAT_029b88e0 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b88e0);
        }
        uVar9 = NativeHelper_01f7658c(auStack_24,0);
        pvVar7 = (void *)NativeHelper_01e92d00(pvVar7,uVar9,0);
      }
    }
LAB_013a5250:
    self->mProcessedText = pvVar7;
  }
  uVar10 = NativeHelper_01e9be28(pvVar7,0);
  if ((uVar10 & 1) == 0) {
    if (self->mFont == (UIFont *)0x0) goto LAB_013a538c;
    RVar19 = UIFont_CalculatePrintedSize_129e838
                       (self->mFont,self->mProcessedText,self->mEncoding,
                        (void *)(ulong)*(uint *)&self->field_0xbc,in_x4);
  }
  else {
    if (cRam0000000002b945c0 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9a40);
      cRam0000000002b945c0 = '\x01';
    }
    RVar19 = *(Recovered_Vector2 *)(*(long *)(*(long *)PTR_DAT_029b9a40 + 0xb8) + 8);
  }
  (self->mSize).component0 = RVar19.component0;
  (self->mSize).component1 = RVar19.component1;
  (self->mSize).component2 = 0.0;
  pvVar7 = UIWidget_get_cachedTransform_12015ac((UIWidget *)self,(void *)0x0);
  puVar5 = PTR_DAT_029b7f98;
  if (pvVar7 != (void *)0x0) {
    RVar18 = UnityEngine_Transform_get_localScale_2516d6c(pvVar7,(void *)0x0);
    fVar15 = RVar18.component0;
    fVar17 = (self->mSize).component0;
    pUVar12 = self->mFont;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc(fVar15,RVar18.component1,RVar18.component2);
    }
    bVar6 = UnityEngine_object_op_Inequality_250c8e4(pUVar12,(void *)0x0,(void *)0x0);
    fVar16 = 1.0;
    if ((bVar6) && (fVar16 = 1.0, 1.0 < fVar15)) {
      fVar16 = (float)self->mMaxLineWidth / fVar15;
    }
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
    }
    (self->mSize).component0 = fVar17;
    (self->mSize).component1 = (self->mSize).component1;
    return;
  }
LAB_013a538c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

