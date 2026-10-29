// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ConvertTextToUpperCase() { }
// Ghidra address: 0140ab84; ELF VA: 0x130ab84; file offset: 0x1306b84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_ConvertTextToUpperCase_1306b84
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  ulong uVar1;
  void *pvVar2;
  UILabel *pUVar3;
  
  if (self->ConvertToUpperCase == false) {
    return;
  }
  pUVar3 = self->m_originalFont;
  if ((pUVar3 != (UILabel *)0x0) && (pUVar3->mText != (void *)0x0)) {
    pvVar2 = (void *)NativeHelper_01e9f920(pUVar3->mText,0);
    if ((pvVar2 != (void *)0x0) &&
       (uVar1 = NativeHelper_01e9b7a0(pUVar3->mText,pvVar2,0), (uVar1 & 1) != 0)) {
      pUVar3->mText = pvVar2;
      pUVar3->field_0x58 = 1;
      pUVar3->mShouldBeProcessed = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

