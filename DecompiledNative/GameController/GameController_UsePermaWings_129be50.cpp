// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UsePermaWings() { }
// Ghidra address: 0139fe50; ELF VA: 0x129fe50; file offset: 0x129be50
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_UsePermaWings_129be50(GameController *self,void *runtimeMethod)

{
  int playerId;
  CharacterPlayer *self_00;
  RecordManager *self_01;
  
  if ((bRam0000000002b94d10 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be378);
    NativeHelper_011df0b4(PTR_DAT_029be380);
    bRam0000000002b94d10 = 1;
  }
  if ((((self->IsPaused != false) || (self->IsInCountdown != false)) || (self->IsGameOver != false))
     || ((self->IsTutorialMode != false || (self->IsIntroScene != false)))) {
    return;
  }
  self_00 = self->GamePlayer;
  if (self_00 != (CharacterPlayer *)0x0) {
    if (self_00->IsDead != false) {
      return;
    }
    if (self->DistanceTraveled <= self->HeadStartStartDistance) {
      return;
    }
    if (self->HeadStartEndDistance <= self->DistanceTraveled) {
      return;
    }
    CharacterPlayer_StartAngelWings_12be840(self_00,30.0,true,(void *)0x0);
    if (self->Audio != (AudioManager *)0x0) {
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
      if (self->Audio != (AudioManager *)0x0) {
        AudioManager_PlayFX_12bb190(self->Audio,(void *)0x0,0.75,(void *)0x0);
        if (self->PlayerManager != (void *)0x0) {
          self_01 = self->RecordManager;
          playerId = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
          if (self_01 != (RecordManager *)0x0) {
            RecordManager_AdjustPlayerLevelForUpgradeType_12b34b8
                      (self_01,playerId,(void *)0x3,-1,(void *)0x0);
            if (self->RecordManager != (RecordManager *)0x0) {
              RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
              self->UsedAngelWingsPermaCount = self->UsedAngelWingsPermaCount + 1;
              if (self->RecordManager != (RecordManager *)0x0) {
                RecordManager_SendSpendVirtualCurrencyEvent_12adf80
                          (self->RecordManager,1,*(void **)PTR_DAT_029be378,
                           *(void **)PTR_DAT_029be380,(void *)0x0);
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

