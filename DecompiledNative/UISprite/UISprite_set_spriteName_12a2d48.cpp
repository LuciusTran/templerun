// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_spriteName(string value) { }
// Ghidra address: 013a6d48; ELF VA: 0x12a6d48; file offset: 0x12a2d48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UISprite_set_spriteName_12a2d48(UISprite *self,void *value,void *runtimeMethod)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((bRam0000000002b94d93 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94d93 = 1;
  }
  uVar1 = NativeHelper_01e9be28(value,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = NativeHelper_01e9b7a0(self->mSpriteName,value,0);
    if ((uVar1 & 1) != 0) {
      self->mSpriteName = value;
      self->mSprite = (UIAtlas_Sprite *)0x0;
      self->field_0x58 = 1;
    }
  }
  else {
    uVar1 = NativeHelper_01e9be28(self->mSpriteName,0);
    if ((uVar1 & 1) == 0) {
      pvVar2 = *(void **)PTR_DAT_029b8618;
      self->field_0x58 = 1;
      self->mSpriteName = pvVar2;
      self->mSprite = (UIAtlas_Sprite *)0x0;
    }
  }
  return;
}

