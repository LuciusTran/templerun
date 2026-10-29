// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 013ec900; ELF VA: 0x12ec900; file offset: 0x12e8900
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUITotem_Update_12e8900(GameGUITotem *self,void *runtimeMethod)

{
  void *in_x3;
  CharacterPlayer *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  pCVar1 = self->GamePlayer;
  if (pCVar1 != (CharacterPlayer *)0x0) {
    fVar3 = (float)pCVar1->CoinCountForBonus / (float)pCVar1->CoinCountForBonusThreshold;
    if (fVar3 == self->lastCoinPercent) {
LAB_013ec958:
      if (self->BonusLevel != pCVar1->BonusLevel) {
        GameGUITotem_SetBonusLevel_12e89f8(self,pCVar1->BonusLevel,true,in_x3);
      }
      if (self->TestAnimation != false) {
        fVar4 = self->testTime;
        fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar4 = fVar4 - fVar3;
        self->testTime = fVar4;
        if (fVar4 < 0.0) {
          self->testTime = 3.0;
          GameGUITotem_SetBonusLevel_12e89f8(self,self->bl,true,in_x3);
          iVar2 = 1;
          if (self->bl + 1 < 6) {
            iVar2 = self->bl + 1;
          }
          self->bl = iVar2;
        }
      }
      return;
    }
    if (self->ProgressBarSprite != (UIFilledSprite *)0x0) {
      UIFilledSprite_set_fillAmount_12112cc(self->ProgressBarSprite,fVar3,(void *)0x0);
      pCVar1 = self->GamePlayer;
      self->lastCoinPercent = fVar3;
      if (pCVar1 != (CharacterPlayer *)0x0) goto LAB_013ec958;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

