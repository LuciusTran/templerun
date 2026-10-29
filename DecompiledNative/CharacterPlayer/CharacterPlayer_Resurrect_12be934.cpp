// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Resurrect() { }
// Ghidra address: 013c2934; ELF VA: 0x12c2934; file offset: 0x12be934
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_Resurrect_12be934(CharacterPlayer *self,void *runtimeMethod)

{
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  
  if ((bRam0000000002b94e5a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf7f0);
    bRam0000000002b94e5a = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->AnimateObject != (void *)0x0) {
    NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf7f0,0);
    MovingObject_SetY_130939c((MovingObject *)self,self->GroundHeight,(void *)0x0);
    CharacterPlayer_SetAlpha_12bcab8(self,1.0,runtimeMethod_00);
    CharacterPlayer_ApplyPlayerTexture_12bd84c(self,runtimeMethod_01);
    self->IsDead = false;
    *(undefined8 *)&self->TimeSinceDeath = 0;
    self->IsFalling = false;
    self->IsJumping = false;
    self->JumpAfterDelay = false;
    self->IsSliding = false;
    self->TimeSinceSlideStart = 0.0;
    self->IsStumbling = false;
    self->StumbleAfterDelay = false;
    self->DidStumble = false;
    self->IsStrafing = false;
    self->IsGroundHeightChangeHigher = false;
    self->HasInvincibility = false;
    self->InvincibilityTimeLeft = 0.0;
    self->AreWingsPermanent = false;
    self->HasAngelWings = false;
    self->HasVacuum = false;
    self->VacuumTimeLeft = 0.0;
    self->HasBoost = false;
    self->BoostDistanceLeft = 0.0;
    self->VelocityBeforeBoost = 0.0;
    self->IsOnGround = true;
    self->StumbleKillTimer = 10.0;
    self->BonusLevel = 1;
    self->CoinCountForBonus = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(0,runtimeMethod);
}

