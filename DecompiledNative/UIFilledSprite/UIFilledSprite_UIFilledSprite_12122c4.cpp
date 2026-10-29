// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public UIFilledSprite() { }
// Ghidra address: 013162c4; ELF VA: 0x12162c4; file offset: 0x12122c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIFilledSprite_UIFilledSprite_12122c4(UIFilledSprite *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)&self->field_0xd8 = 0x3f80000000000004;
  puVar1 = PTR_DAT_029b8618;
  if ((bRam0000000002b94d9b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8618,0);
    bRam0000000002b94d9b = 1;
  }
  *(undefined8 *)&self->field_0xd0 = *(undefined8 *)puVar1;
  puVar1 = PTR_DAT_029ba038;
  if ((bRam0000000002b9461f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba038,0);
    bRam0000000002b9461f = 1;
  }
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)&self->field_0x30 = auVar2._8_8_;
  *(long *)&self->field_0x28 = auVar2._0_8_;
  *(undefined4 *)&self->field_0x38 = 4;
  *(undefined2 *)&self->field_0x58 = 0x101;
  *(undefined4 *)&self->field_0x84 = 0xffffffff;
  auVar2 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  UIGeometry_UIGeometry_1206974(auVar2._0_8_,auVar2._8_8_);
  *(UIGeometry **)&self->field_0x88 = auVar2._0_8_;
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

