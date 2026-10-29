// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UseHeadStart() { }
// Ghidra address: 0139ffc4; ELF VA: 0x129ffc4; file offset: 0x129bfc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_UseHeadStart_129bfc4(GameController *self,void *runtimeMethod)

{
  int playerId;
  CharacterPlayer *pCVar1;
  RecordManager *self_00;
  
  if ((bRam0000000002b94d11 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be388);
    NativeHelper_011df0b4(PTR_DAT_029be390);
    bRam0000000002b94d11 = 1;
  }
  if ((((self->IsPaused != false) || (self->IsInCountdown != false)) || (self->IsGameOver != false))
     || ((self->IsTutorialMode != false || (self->IsIntroScene != false)))) {
    return;
  }
  pCVar1 = self->GamePlayer;
  if (pCVar1 != (CharacterPlayer *)0x0) {
    if (pCVar1->IsDead != false) {
      return;
    }
    if (pCVar1->IsFalling != false) {
      return;
    }
    if (self->DistanceTraveled <= self->HeadStartStartDistance) {
      return;
    }
    if (self->HeadStartEndDistance <= self->DistanceTraveled) {
      return;
    }
    if (self->Audio != (AudioManager *)0x0) {
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
      if (self->PlayerManager != (void *)0x0) {
        self_00 = self->RecordManager;
        playerId = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
        if (self_00 != (RecordManager *)0x0) {
          RecordManager_AdjustPlayerLevelForUpgradeType_12b34b8
                    (self_00,playerId,(void *)0x1,-1,(void *)0x0);
          if (self->RecordManager != (RecordManager *)0x0) {
            RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
            if (self->RecordManager != (RecordManager *)0x0) {
              RecordManager_SendSpendVirtualCurrencyEvent_12adf80
                        (self->RecordManager,1,*(void **)PTR_DAT_029be388,*(void **)PTR_DAT_029be390
                         ,(void *)0x0);
              if (self->GamePlayer != (CharacterPlayer *)0x0) {
                CharacterPlayer_StartBoost_12be89c
                          (self->GamePlayer,self->HeadStartBoostDistance - self->DistanceTraveled,
                           false,(void *)0x0);
                self->UsedHeadStart = true;
                if (self->UsedPowers != false) {
                  return;
                }
                self->UsedPowers = true;
                if (self->GamePlayer != (CharacterPlayer *)0x0) {
                  self->ScoreWhenFirstUsedPowers = self->GamePlayer->Score;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

