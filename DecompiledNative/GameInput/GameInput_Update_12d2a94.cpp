// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override void Update() { }
// Ghidra address: 013d6a94; ELF VA: 0x12d6a94; file offset: 0x12d2a94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameInput_Update_12d2a94(GameInput *self,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  
  GameInput_HandleAccelerometerForce_12d2b48(self,runtimeMethod);
  if ((self->ShouldTurnRight != false) || (self->ShouldTurnLeft != false)) {
    fVar2 = self->TimeSinceShouldTurn;
    fVar1 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar2 = fVar2 + fVar1;
    self->TimeSinceShouldTurn = fVar2;
    if (1.0 < fVar2) {
      self->ShouldTurnLeft = false;
      self->ShouldTurnRight = false;
      self->TimeSinceShouldTurn = 0.0;
    }
  }
  if (self->ShouldJump != false) {
    fVar2 = self->TimeSinceShouldJump;
    fVar1 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar2 = fVar2 + fVar1;
    self->TimeSinceShouldJump = fVar2;
    if (0.5 < fVar2) {
      self->ShouldJump = false;
      self->TimeSinceShouldJump = 0.0;
    }
  }
  if (self->ShouldSlide != false) {
    fVar2 = self->TimeSinceShouldSlide;
    fVar1 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar2 = fVar2 + fVar1;
    self->TimeSinceShouldSlide = fVar2;
    if (0.5 < fVar2) {
      self->ShouldSlide = false;
      self->TimeSinceShouldSlide = 0.0;
    }
  }
  return;
}

