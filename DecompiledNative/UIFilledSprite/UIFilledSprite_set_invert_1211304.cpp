// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_invert(bool value) { }
// Ghidra address: 01315304; ELF VA: 0x1215304; file offset: 0x1211304
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIFilledSprite_set_invert_1211304(UIFilledSprite *self,bool value,void *runtimeMethod)

{
  if (self->mInvert != value) {
    self->mInvert = value;
    self->field_0x58 = 1;
  }
  return;
}

