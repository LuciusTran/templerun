// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PCInput() { }
// Ghidra address: 013d77b4; ELF VA: 0x12d77b4; file offset: 0x12d37b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PCInput_PCInput_12d37b4(PCInput *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  self->SimulatedTiltRecovery = (float)(int)uVar2;
  self->SimulatedTileSpeed = (float)(int)((ulong)uVar2 >> 0x20);
  self->JoystickMode = true;
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

