// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public MovingObject() { }
// Ghidra address: 0140d7b4; ELF VA: 0x130d7b4; file offset: 0x13097b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovingObject_MovingObject_13097b4(MovingObject *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = _UNK_007a38a8;
  auVar5 = NEON_fmov(0xbf800000,4);
  (self->RotationAxis).component2 = 0.0;
  self->Mass = 1.0;
  uVar4 = _UNK_007a38a8;
  _UNK_007a38a8 = (undefined4)uVar1;
  _UNK_007a38ac = SUB84(uVar1,4);
  uVar2 = _UNK_007a38ac;
  (self->RotationAxis).component0 = (float)_UNK_007a38a8;
  _UNK_007a38a8 = uVar4;
  (self->RotationAxis).component1 = (float)uVar2;
  self->MaxVelocityMagnitudeY = (float)(int)auVar5._8_8_;
  self->MaxVelocityMagnitudeZ = (float)(int)((ulong)auVar5._8_8_ >> 0x20);
  self->MaxVelocityMagnitudeTotal = (float)(int)auVar5._0_8_;
  puVar3 = PTR_DAT_029b7f98;
  self->MaxVelocityMagnitudeX = (float)(int)((ulong)auVar5._0_8_ >> 0x20);
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

