// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void EndGame(float delayTime, bool autoRestart) { }
// Ghidra address: 0139a758; ELF VA: 0x129a758; file offset: 0x1296758
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_EndGame_1296758
               (GameController *self,float delayTime,bool autoRestart,void *runtimeMethod)

{
  int iVar1;
  CharacterPlayer *pCVar2;
  
  if ((bRam0000000002b94cfa & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be140);
    bRam0000000002b94cfa = 1;
  }
  if (self->IsGameOver == false) {
    self->IsGameOver = true;
    self->TimeSinceGameEnd = 0.0;
    self->EndGameDelayTime = delayTime;
    self->AutoRestart = autoRestart;
    if ((self->IsTutorialMode == false) && (self->SaveMeUsedCount == 0)) {
      DebugEx_Log_13222f4(*(void **)PTR_DAT_029be140,(void *)0x0);
      pCVar2 = self->GamePlayer;
      if (pCVar2 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      self->MaxScoreBeforeFirstSaveMe = pCVar2->Score;
      iVar1 = -0x80000000;
      if (self->DistanceTraveled != INFINITY) {
        iVar1 = (int)self->DistanceTraveled;
      }
      self->MaxCoinsBeforeFirstSaveMe = pCVar2->CoinCountTotal;
      self->MaxDistBeforeFirstSaveMe = iVar1;
    }
  }
  return;
}

