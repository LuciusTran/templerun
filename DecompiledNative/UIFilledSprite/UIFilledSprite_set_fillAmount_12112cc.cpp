// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_fillAmount(float value) { }
// Ghidra address: 013152cc; ELF VA: 0x12152cc; file offset: 0x12112cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013152d4) */

void UIFilledSprite_set_fillAmount_12112cc(UIFilledSprite *self,float value,void *runtimeMethod)

{
  if (value < 0.0) {
    value = 0.0;
  }
  if (self->mFillAmount != value) {
    self->mFillAmount = value;
    self->field_0x58 = 1;
  }
  return;
}

