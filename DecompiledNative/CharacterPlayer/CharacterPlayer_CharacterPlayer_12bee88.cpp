// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public CharacterPlayer() { }
// Ghidra address: 013c2e88; ELF VA: 0x12c2e88; file offset: 0x12bee88
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_CharacterPlayer_12bee88(CharacterPlayer *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  void *extraout_x1;
  undefined1 auVar7 [16];
  
  puVar5 = PTR_DAT_029bf848;
  puVar4 = PTR_DAT_029bf840;
  puVar3 = PTR_DAT_029b97d8;
  puVar2 = PTR_DAT_029b97d0;
  if ((bRam0000000002b94e5f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b97d8);
    NativeHelper_011df0b4(PTR_DAT_029bf848);
    NativeHelper_011df0b4(PTR_DAT_029bf840);
    NativeHelper_011df0b4(PTR_DAT_029b97d0);
    bRam0000000002b94e5f = 1;
    runtimeMethod = extraout_x1;
  }
  self->BoostSlowdownDistance = 50.0;
  self->ActiveCharacterId = 1;
  pvVar6 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2,runtimeMethod);
  NativeHelper_01a2f248(pvVar6,*(undefined8 *)puVar3);
  self->Characters = pvVar6;
  pvVar6 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
  NativeHelper_01a2f248(pvVar6,*(undefined8 *)puVar5);
  auVar7 = NEON_fmov(0x3f800000,4);
  self->Textures = pvVar6;
  (self->debugColor).component2 = (float)(int)auVar7._8_8_;
  (self->debugColor).component3 = (float)(int)((ulong)auVar7._8_8_ >> 0x20);
  (self->debugColor).component0 = (float)(int)auVar7._0_8_;
  uVar1 = _UNK_007a38a8;
  (self->debugColor).component1 = (float)(int)((ulong)auVar7._0_8_ >> 0x20);
  auVar7 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)&self->field_0x48 = 0;
  *(undefined4 *)&self->field_0x20 = 0x3f800000;
  *(undefined8 *)&self->field_0x40 = uVar1;
  *(long *)&self->field_0x5c = auVar7._8_8_;
  *(long *)&self->field_0x54 = auVar7._0_8_;
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

