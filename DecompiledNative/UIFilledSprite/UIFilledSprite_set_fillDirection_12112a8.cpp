// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_fillDirection(FillDirection value) { }
// Ghidra address: 013152a8; ELF VA: 0x12152a8; file offset: 0x12112a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIFilledSprite_set_fillDirection_12112a8(UIFilledSprite *self,void *value,void *runtimeMethod)

{
  if (*(int *)&self->field_0xd8 != (int)value) {
    *(int *)&self->field_0xd8 = (int)value;
    self->field_0x58 = 1;
  }
  return;
}

