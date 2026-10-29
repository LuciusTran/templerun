// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartBoost(float distance, bool isMega) { }
// Ghidra address: 013c289c; ELF VA: 0x12c289c; file offset: 0x12be89c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StartBoost_12be89c
               (CharacterPlayer *self,float distance,bool isMega,void *runtimeMethod)

{
  bool bVar1;
  void *runtimeMethod_00;
  void *extraout_x1;
  float fVar2;
  
  runtimeMethod_00 = (void *)(ulong)isMega;
  bVar1 = self->HasBoost;
  self->HasBoost = true;
  self->IsMegaBoost = isMega;
  if (bVar1 == false) {
    if (isMega) {
      fVar2 = self->MaxRunVelocity;
    }
    else {
      fVar2 = CharacterPlayer_GetRunVelocity_12bdeac(self,runtimeMethod_00);
      runtimeMethod_00 = extraout_x1;
    }
    self->VelocityBeforeBoost = fVar2;
    CharacterPlayer_StartInvcibility_12be7f8(self,4.0,runtimeMethod_00);
  }
  self->BoostDistanceLeft = distance + 50.0;
  self->TimeSinceLastPowerup = 0.0;
  self->StumbleKillTimer = self->StumbleKillTimer + 10.0;
  return;
}

