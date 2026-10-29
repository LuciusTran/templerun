// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Reset() { }
// Ghidra address: 013c1f40; ELF VA: 0x12c1f40; file offset: 0x12bdf40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_Reset_12bdf40(CharacterPlayer *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  GameGUITotem *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  RecordManager *self_01;
  float fVar5;
  Recovered_Vector3 RVar6;
  
  puVar1 = PTR_DAT_029bdbe8;
  if ((bRam0000000002b94e54 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    bRam0000000002b94e54 = 1;
    runtimeMethod = extraout_x1;
  }
  CharacterPlayer_SetupCharacter_12be0d4(self,runtimeMethod);
  self->PlayerXOffset = 0.0;
  self->IsDead = false;
  *(undefined8 *)&self->TimeSinceDeath = 0;
  self->IsFalling = false;
  self->IsJumping = false;
  self->JumpAfterDelay = false;
  self->IsSliding = false;
  self->TimeSinceSlideStart = 0.0;
  self->IsOnGround = false;
  self->IsOverGround = false;
  self->IsStumbling = false;
  self->StumbleAfterDelay = false;
  self->DidStumble = false;
  self->IsStrafing = false;
  self->Hold = true;
  self->StrafeDuration = 0.4;
  self->Score = 0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)puVar1;
  }
  self_01 = (RecordManager *)**(undefined8 **)(lVar3 + 0xb8);
  pvVar4 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if ((pvVar4 != (void *)0x0) &&
     (iVar2 = PlayerManager_GetActivePlayer_12ccc8c(pvVar4,(void *)0x0),
     self_01 != (RecordManager *)0x0)) {
    iVar2 = RecordManager_GetScoreMulitplier_12b1164(self_01,iVar2,(void *)0x0);
    self->BonusLevel = 1;
    self->ScoreMultiplier = iVar2;
    self->CoinCountTotal = 0;
    self->CoinCountForBonus = 0;
    self->IsGroundHeightChangeHigher = false;
    self->GroundHeight = 0.0;
    self->HasInvincibility = false;
    self->VacuumTimeLeft = 0.0;
    self->HasBoost = false;
    self->BoostDistanceLeft = 0.0;
    self->VelocityBeforeBoost = 0.0;
    self->TimeSinceLastPowerup = 0.0;
    self->InvincibilityTimeLeft = 0.0;
    self->AngelWingsCount = 0;
    self->AreWingsPermanent = false;
    self->HasAngelWings = false;
    self->AngelWingsTimeLeft = 0.0;
    self->AngelWingsRechargeTimeLeft = 0.0;
    self->HasVacuum = false;
    self->StumbleKillTimer = 7.0;
    self->DeathRunVelocity = 0.0;
    pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar4 != (void *)0x0) {
      RVar6 = UnityEngine_Transform_get_forward_2516be0(pvVar4,(void *)0x0);
      fVar5 = self->StartRunVelocity;
      *(float *)&self->field_0x34 = RVar6.component0 * fVar5;
      *(float *)&self->field_0x38 = RVar6.component1 * fVar5;
      *(float *)&self->field_0x3c = RVar6.component2 * fVar5;
      CharacterPlayer_ApplyPlayerTexture_12bd84c(self,runtimeMethod_00);
      if ((self->GameInterface != (GameGUI *)0x0) &&
         (self_00 = self->GameInterface->TotemUI, self_00 != (GameGUITotem *)0x0)) {
        GameGUITotem_SetBonusLevel_12e89f8(self_00,1,false,(void *)0x0);
        pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar4 != (void *)0x0) {
          RVar6 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          *(float *)&self->field_0x7c = RVar6.component0;
          *(float *)&self->field_0x80 = RVar6.component1;
          *(float *)&self->field_0x84 = RVar6.component2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

