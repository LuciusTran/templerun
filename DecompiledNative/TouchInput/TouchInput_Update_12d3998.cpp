// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013d7998; ELF VA: 0x12d7998; file offset: 0x12d3998
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TouchInput_Update_12d3998(TouchInput *self,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  
  GameInput_Update_12d2a94((GameInput *)self,runtimeMethod);
  fVar2 = self->doubleTapTimeout;
  if (0.0 < fVar2) {
    fVar1 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar2 = fVar2 - fVar1;
    self->doubleTapTimeout = fVar2;
  }
  if (fVar2 <= 0.0) {
    self->tapCount = 0;
    self->doubleTapTimeout = 0.0;
  }
  fVar2 = self->ignoreTapTimeout;
  if (0.0 < fVar2) {
    fVar1 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    self->ignoreTapTimeout = fVar2 - fVar1;
  }
  return;
}

