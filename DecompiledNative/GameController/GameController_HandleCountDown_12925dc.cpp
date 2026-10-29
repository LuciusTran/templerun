// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleCountDown() { }
// Ghidra address: 013965dc; ELF VA: 0x12965dc; file offset: 0x12925dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleCountDown_12925dc(GameController *self,void *runtimeMethod)

{
  void *pvVar1;
  CharacterPlayer *pCVar2;
  UISprite *self_00;
  float fVar3;
  float fVar4;
  int iStack_14;
  
  if (self->IsStartOfCountDown == false) {
    fVar4 = self->TimeSinceCountdownStarted;
    fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar4 = fVar4 + fVar3;
    self->TimeSinceCountdownStarted = fVar4;
  }
  else {
    if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
    AudioManager_PlayCoin_12bb3ac(self->Audio,(void *)0x0);
    self->IsStartOfCountDown = false;
    self->Has3SoundPlayed = true;
    self->Has2SoundPlayed = false;
    self->Has1SoundPlayed = false;
    if (self->Countdown == (UISprite *)0x0) goto LAB_01396880;
    UnityEngine_Behaviour_set_enabled_250972c(self->Countdown,true,(void *)0x0);
    if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01396880;
    CharacterPlayer_StopAllAnimation_12be918(self->GamePlayer,(void *)0x0);
    fVar4 = self->TimeSinceCountdownStarted;
  }
  if (cRam0000000002b945c5 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b945c5 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  iStack_14 = -0x80000000;
  if ((float)(int)(4.0 - fVar4) != INFINITY) {
    iStack_14 = (int)(4.0 - fVar4);
  }
  self_00 = self->Countdown;
  pvVar1 = (void *)NativeHelper_01ffa318(&iStack_14,0);
  if (self_00 == (UISprite *)0x0) goto LAB_01396880;
  UISprite_set_spriteName_12a2d48(self_00,pvVar1,(void *)0x0);
  if ((self->TimeSinceCountdownStarted <= 1.0) || (self->Has2SoundPlayed != false)) {
    if ((2.0 < self->TimeSinceCountdownStarted) && (self->Has1SoundPlayed == false)) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
      AudioManager_PlayCoin_12bb3ac(self->Audio,(void *)0x0);
      self->Has1SoundPlayed = true;
    }
  }
  else {
    if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
    AudioManager_PlayCoin_12bb3ac(self->Audio,(void *)0x0);
    self->Has2SoundPlayed = true;
  }
  if (3.0 < self->TimeSinceCountdownStarted) {
    if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
       (pvVar1 = self->GamePlayer->AnimateObject, pvVar1 == (void *)0x0)) goto LAB_01396880;
    NativeHelper_025e4ef8(pvVar1,0);
    if (self->Countdown == (UISprite *)0x0) goto LAB_01396880;
    UnityEngine_Behaviour_set_enabled_250972c(self->Countdown,false,(void *)0x0);
    pCVar2 = self->GamePlayer;
    self->IsInCountdown = false;
    if (pCVar2 == (CharacterPlayer *)0x0) goto LAB_01396880;
    if (pCVar2->IsSliding != false) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x1b,1.0,(void *)0x0);
      pCVar2 = self->GamePlayer;
      if (pCVar2 == (CharacterPlayer *)0x0) goto LAB_01396880;
    }
    if (pCVar2->HasVacuum != false) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x12,1.0,(void *)0x0);
      pCVar2 = self->GamePlayer;
      if (pCVar2 == (CharacterPlayer *)0x0) goto LAB_01396880;
    }
    if ((pCVar2->HasInvincibility != false) && (pCVar2->HasBoost == false)) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x19,1.0,(void *)0x0);
      pCVar2 = self->GamePlayer;
      if (pCVar2 == (CharacterPlayer *)0x0) goto LAB_01396880;
    }
    if (pCVar2->HasBoost != false) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_01396880;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x3,1.0,(void *)0x0);
    }
  }
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    fVar3 = CharacterPlayer_GetAlpha_12bcc6c(self->GamePlayer,(void *)0x0);
    if (0.5 < fVar3) {
      return;
    }
    if (self->GamePlayer != (CharacterPlayer *)0x0) {
      fVar4 = CharacterPlayer_GetAlpha_12bcc6c(self->GamePlayer,(void *)0x0);
      fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      if (self->GamePlayer != (CharacterPlayer *)0x0) {
        fVar4 = fVar4 + fVar3 * 0.5;
        if (0.5 < fVar4) {
          fVar4 = 0.5;
        }
        CharacterPlayer_SetAlpha_12bcab8(self->GamePlayer,fVar4,(void *)0x0);
        return;
      }
    }
  }
LAB_01396880:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

