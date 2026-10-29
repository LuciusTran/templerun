// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected virtual void UpdateString(string value) { }
// Ghidra address: 0140a66c; ELF VA: 0x130a66c; file offset: 0x130666c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeString_UpdateString_130666c(TR1LocalizeString *self,void *value,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  void *extraout_x1;
  int *piVar11;
  UILabel *pUVar12;
  undefined8 in_d1;
  undefined4 uVar13;
  Recovered_Vector3 RVar14;
  Recovered_Vector3 value_00;
  
  puVar3 = PTR_DAT_029b7f98;
  uVar13 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((bRam0000000002b950cd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c0e00);
    bRam0000000002b950cd = 1;
    value = extraout_x1;
  }
  pUVar12 = self->m_originalFont;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,value);
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pUVar12,(void *)0x0,(void *)0x0);
  if (bVar4) {
    return;
  }
  pUVar12 = self->m_originalFont;
  pvVar5 = Strings_Txt_131380c(self->EntryText,false,(void *)0x0);
  if (pUVar12 == (UILabel *)0x0) goto LAB_0140a9a4;
  UILabel_set_text_129fea0(pUVar12,pvVar5,(void *)0x0);
  if (self->m_originalFont == (UILabel *)0x0) goto LAB_0140a9a4;
  NativeHelper_0255c100(self,self->m_originalFont->mText,0);
  if ((self->m_originalFont == (UILabel *)0x0) ||
     (pvVar5 = (void *)NativeHelper_0260e1a8(self->m_originalFont,0), pvVar5 == (void *)0x0))
  goto LAB_0140a9a4;
  UnityEngine_Transform_get_localPosition_2515e38(pvVar5,(void *)0x0);
  RVar14 = UnityEngine_Transform_get_localScale_2516d6c(pvVar5,(void *)0x0);
  if (self->ConvertToUpperCase != false) {
    pUVar12 = self->m_originalFont;
    if ((pUVar12 == (UILabel *)0x0) || (pUVar12->mText == (void *)0x0)) goto LAB_0140a9a4;
    pvVar5 = (void *)NativeHelper_01e9f920
                               (RVar14.component0,CONCAT44(uVar13,RVar14.component1),
                                RVar14.component2,pUVar12->mText,0);
    UILabel_set_text_129fea0(pUVar12,pvVar5,(void *)0x0);
  }
  if (self->SpecialTreatJapaneseAndRussian == false) {
LAB_0140a7dc:
    pvVar5 = self->OrignalString;
    if (pvVar5 == (void *)0x0) goto LAB_0140a9a4;
    piVar11 = (int *)((long)pvVar5 + 0x10);
  }
  else {
    plVar6 = (long *)NativeHelper_0255188c(0);
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0)),
       plVar6 == (long *)0x0)) goto LAB_0140a9a4;
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar8 = NativeHelper_01e9b79c(uVar7,*(undefined8 *)PTR_DAT_029c0e00,0);
    if ((uVar8 & 1) == 0) goto LAB_0140a7dc;
    pvVar5 = self->OrignalString;
    piVar11 = &self->SpecialTreatJapaneseAndRussianFactor;
  }
  iVar1 = *piVar11;
  if (self->AutoSizeOnlyXLabel == false) {
    if (pvVar5 == (void *)0x0) {
      return;
    }
    if (self->AutoSizeLabel == false) {
      return;
    }
    pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
    iVar2 = self->OrignalSize;
    pvVar9 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar9 == (void *)0x0) goto LAB_0140a9a4;
    RVar14 = UnityEngine_Transform_get_localScale_2516d6c(pvVar9,(void *)0x0);
    if (pvVar5 == (void *)0x0) goto LAB_0140a9a4;
    RVar14.component0 = (float)iVar2;
    RVar14.component1 = RVar14.component0;
    UnityEngine_Transform_set_localScale_2516e0c(pvVar5,RVar14,(void *)0x0);
    pUVar12 = self->m_originalFont;
    if (pUVar12 == (UILabel *)0x0) goto LAB_0140a9a4;
    (**(code **)(*(long *)pUVar12 + 0x1c8))(pUVar12,*(undefined8 *)(*(long *)pUVar12 + 0x1d0));
    if ((self->m_originalFont == (UILabel *)0x0) ||
       (pvVar5 = self->m_originalFont->mText, pvVar5 == (void *)0x0)) goto LAB_0140a9a4;
    if (*(int *)((long)pvVar5 + 0x10) <= iVar1) {
      return;
    }
    lVar10 = NativeHelper_0260e1a8(self,0);
    pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar5 == (void *)0x0) goto LAB_0140a9a4;
    UnityEngine_Transform_get_localScale_2516d6c(pvVar5,(void *)0x0);
  }
  else {
    if ((pvVar5 == (void *)0x0) || (self->AutoSizeLabel == false)) {
      return;
    }
    pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
    iVar2 = self->OrignalSize;
    pvVar9 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar9 == (void *)0x0) goto LAB_0140a9a4;
    RVar14 = UnityEngine_Transform_get_localScale_2516d6c(pvVar9,(void *)0x0);
    value_00.component2 = RVar14.component2;
    if (pvVar5 == (void *)0x0) goto LAB_0140a9a4;
    value_00.component0 = (float)iVar2;
    value_00.component1 = value_00.component0;
    UnityEngine_Transform_set_localScale_2516e0c(pvVar5,value_00,(void *)0x0);
    pUVar12 = self->m_originalFont;
    if (pUVar12 == (UILabel *)0x0) goto LAB_0140a9a4;
    (**(code **)(*(long *)pUVar12 + 0x1c8))(pUVar12,*(undefined8 *)(*(long *)pUVar12 + 0x1d0));
    if ((self->m_originalFont == (UILabel *)0x0) ||
       (pvVar5 = self->m_originalFont->mText, pvVar5 == (void *)0x0)) goto LAB_0140a9a4;
    if (*(int *)((long)pvVar5 + 0x10) <= iVar1) {
      return;
    }
    lVar10 = NativeHelper_0260e1a8(self,0);
    pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar5 == (void *)0x0) goto LAB_0140a9a4;
    UnityEngine_Transform_get_localScale_2516d6c(pvVar5,(void *)0x0);
  }
  if (lVar10 != 0) {
    if (pcRam0000000002b9d2f0 == (code *)0x0) {
      pcRam0000000002b9d2f0 = (code *)NativeHelper_011df070(&UNK_007bef4d,0);
    }
    (*pcRam0000000002b9d2f0)(lVar10,&stack0xffffffffffffffd0);
    return;
  }
LAB_0140a9a4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

