// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameCamera() { }
// Ghidra address: 013dc24c; ELF VA: 0x12dc24c; file offset: 0x12d824c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameCamera_GameCamera_12d824c(GameCamera *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = _UNK_007a42a0;
  uVar1 = _UNK_007a38f0;
  uVar2 = _UNK_007a42ac;
  (self->StartLocation).component1 = (float)_UNK_007a42a8;
  uVar5 = _UNK_007a42a0;
  (self->StartLocation).component2 = (float)uVar2;
  _UNK_007a42a0 = (undefined4)uVar4;
  _UNK_007a42a4 = SUB84(uVar4,4);
  uVar2 = _UNK_007a42a4;
  self->IntroDuration = (float)_UNK_007a42a0;
  _UNK_007a42a0 = uVar5;
  uVar4 = _UNK_007a38f0;
  (self->StartLocation).component0 = (float)uVar2;
  _UNK_007a38f0 = (undefined4)uVar1;
  _UNK_007a38f4 = SUB84(uVar1,4);
  uVar2 = _UNK_007a38f4;
  (self->EndLocation).component0 = (float)_UNK_007a38f0;
  _UNK_007a38f0 = uVar4;
  (self->EndLocation).component1 = (float)uVar2;
  (self->EndLocation).component2 = 86.0;
  uVar1 = _UNK_007a38a8;
  auVar6 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)&self->field_0x48 = 0;
  *(undefined4 *)&self->field_0x20 = 0x3f800000;
  *(undefined8 *)&self->field_0x40 = uVar1;
  *(long *)&self->field_0x5c = auVar6._8_8_;
  *(long *)&self->field_0x54 = auVar6._0_8_;
  puVar3 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

