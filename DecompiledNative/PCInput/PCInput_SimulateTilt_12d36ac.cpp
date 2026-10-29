// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SimulateTilt() { }
// Ghidra address: 013d76ac; ELF VA: 0x12d76ac; file offset: 0x12d36ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PCInput_SimulateTilt_12d36ac(PCInput *self,void *runtimeMethod)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = UnityEngine_Input_GetKey_2543ce8((void *)0x7a,(void *)0x0);
  if (bVar1) {
    fVar3 = self->SimulatedTiltAmount;
    fVar4 = self->SimulatedTileSpeed;
    fVar2 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar3 = fVar3 - fVar4 * fVar2;
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    self->SimulatedTiltAmount = fVar3;
    bVar1 = UnityEngine_Input_GetKey_2543ce8((void *)0x78,(void *)0x0);
    if (!bVar1) {
      return;
    }
  }
  else {
    bVar1 = UnityEngine_Input_GetKey_2543ce8((void *)0x78,(void *)0x0);
    if (!bVar1) {
      fVar2 = self->SimulatedTiltAmount;
      if (fVar2 < 0.0) {
        fVar4 = self->SimulatedTiltRecovery;
        fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar2 = fVar2 + fVar4 * fVar3;
        self->SimulatedTiltAmount = fVar2;
        if (0.0 < fVar2) {
          self->SimulatedTiltAmount = 0.0;
          return;
        }
      }
      if (fVar2 <= 0.0) {
        return;
      }
      fVar4 = self->SimulatedTiltRecovery;
      fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar2 = fVar2 - fVar4 * fVar3;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      self->SimulatedTiltAmount = fVar2;
      return;
    }
  }
  fVar3 = self->SimulatedTiltAmount;
  fVar4 = self->SimulatedTileSpeed;
  fVar2 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  fVar3 = fVar3 + fVar4 * fVar2;
  self->SimulatedTiltAmount = fVar3;
  if (1.0 < fVar3) {
    self->SimulatedTiltAmount = 1.0;
  }
  return;
}

