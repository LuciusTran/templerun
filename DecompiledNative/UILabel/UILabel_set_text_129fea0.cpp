// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_text(string value) { }
// Ghidra address: 013a3ea0; ELF VA: 0x12a3ea0; file offset: 0x129fea0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UILabel_set_text_129fea0(UILabel *self,void *value,void *runtimeMethod)

{
  ulong uVar1;
  
  if ((value != (void *)0x0) &&
     (uVar1 = NativeHelper_01e9b7a0(self->mText,value,0), (uVar1 & 1) != 0)) {
    self->mText = value;
    self->field_0x58 = 1;
    self->mShouldBeProcessed = true;
  }
  return;
}

