// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AdjustLabelSize() { }
// Ghidra address: 0140abc8; ELF VA: 0x130abc8; file offset: 0x1306bc8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_AdjustLabelSize_1306bc8
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  UILabel *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Recovered_Vector3 RVar9;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  
  if (self->AutoSizeOnlyXLabel == false) {
    if ((self->OrignalString != (void *)0x0) && (self->AutoSizeLabel != false)) {
      pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
      iVar1 = self->OrignalSize;
      pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar4 == (void *)0x0) goto LAB_0140adb4;
      RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar4,(void *)0x0);
      if (pvVar3 == (void *)0x0) goto LAB_0140adb4;
      RVar9.component0 = (float)iVar1;
      RVar9.component1 = RVar9.component0;
      UnityEngine_Transform_set_localScale_2516e0c(pvVar3,RVar9,(void *)0x0);
      pUVar5 = self->m_originalFont;
      if (pUVar5 == (UILabel *)0x0) goto LAB_0140adb4;
      (**(code **)(*(long *)pUVar5 + 0x1c8))(pUVar5,*(undefined8 *)(*(long *)pUVar5 + 0x1d0));
      if ((self->m_originalFont == (UILabel *)0x0) ||
         (pvVar3 = self->m_originalFont->mText, pvVar3 == (void *)0x0)) goto LAB_0140adb4;
      iVar1 = *(int *)((long)pvVar3 + 0x10);
      iVar2 = iVar1 - self->OriganlStringLength;
      if (iVar2 != 0 && self->OriganlStringLength <= iVar1) {
        pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
        iVar1 = self->OrignalSize;
        fVar8 = self->TextMultiplier;
        pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar3 == (void *)0x0) goto LAB_0140adb4;
        RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar3,(void *)0x0);
        fVar7 = RVar9.component2;
        if (pvVar4 == (void *)0x0) goto LAB_0140adb4;
        fVar6 = (float)iVar1 - fVar8 * (float)iVar2;
        fVar8 = fVar6;
        goto LAB_0140ad88;
      }
    }
  }
  else if ((self->OrignalString != (void *)0x0) && (self->AutoSizeLabel != false)) {
    pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
    iVar1 = self->OrignalSize;
    pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar4 == (void *)0x0) goto LAB_0140adb4;
    RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar4,(void *)0x0);
    value.component2 = RVar9.component2;
    if (pvVar3 == (void *)0x0) goto LAB_0140adb4;
    value.component0 = (float)iVar1;
    value.component1 = value.component0;
    UnityEngine_Transform_set_localScale_2516e0c(pvVar3,value,(void *)0x0);
    pUVar5 = self->m_originalFont;
    if (pUVar5 == (UILabel *)0x0) goto LAB_0140adb4;
    (**(code **)(*(long *)pUVar5 + 0x1c8))(pUVar5,*(undefined8 *)(*(long *)pUVar5 + 0x1d0));
    if ((self->m_originalFont == (UILabel *)0x0) ||
       (pvVar3 = self->m_originalFont->mText, pvVar3 == (void *)0x0)) goto LAB_0140adb4;
    iVar1 = *(int *)((long)pvVar3 + 0x10);
    iVar2 = iVar1 - self->OriganlStringLength;
    if (iVar2 != 0 && self->OriganlStringLength <= iVar1) {
      pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
      iVar1 = self->OrignalSize;
      fVar8 = self->TextMultiplier;
      pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar3 == (void *)0x0) goto LAB_0140adb4;
      RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar3,(void *)0x0);
      fVar7 = RVar9.component2;
      if (pvVar4 == (void *)0x0) goto LAB_0140adb4;
      fVar6 = (float)iVar1 - fVar8 * (float)iVar2;
      fVar8 = (float)iVar1;
LAB_0140ad88:
      value_00.component1 = fVar8;
      value_00.component0 = fVar6;
      value_00.component2 = fVar7;
      UnityEngine_Transform_set_localScale_2516e0c(pvVar4,value_00,(void *)0x0);
    }
  }
  pUVar5 = self->m_originalFont;
  if (pUVar5 != (UILabel *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0140adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pUVar5 + 0x1a8))(pUVar5,*(undefined8 *)(*(long *)pUVar5 + 0x1b0));
    return;
  }
LAB_0140adb4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

