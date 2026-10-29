// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Reset() { }
// Ghidra address: 013d6be0; ELF VA: 0x12d6be0; file offset: 0x12d2be0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameInput_Reset_12d2be0(GameInput *self,void *runtimeMethod)

{
  self->JustTurned = false;
  self->ShouldTurnLeft = false;
  self->ShouldTurnRight = false;
  self->TimeSinceShouldJump = 0.0;
  self->ShouldSlide = false;
  self->TimeSinceShouldSlide = 0.0;
  self->TimeSinceShouldTurn = 0.0;
  self->TimeSinceLastTurn = 0.0;
  self->ShouldJump = false;
  return;
}

