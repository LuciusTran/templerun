// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 013ebbb4; ELF VA: 0x12ebbb4; file offset: 0x12e7bb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_Update_12e7bb4(GameGUI *self,void *runtimeMethod)

{
  int score;
  void *value;
  void *in_x2;
  CharacterPlayer *pCVar1;
  UILabel *self_00;
  int iStack_14;
  
  pCVar1 = self->GamePlayer;
  if (pCVar1 != (CharacterPlayer *)0x0) {
    score = pCVar1->Score;
    if (score != self->LastScore) {
      self->LastScore = score;
      GameGUI_SetScore_12e7748(self,score,in_x2);
      pCVar1 = self->GamePlayer;
      if (pCVar1 == (CharacterPlayer *)0x0) goto LAB_013ebc10;
    }
    iStack_14 = pCVar1->CoinCountTotal;
    if (iStack_14 == self->LastCoins) {
      return;
    }
    self->LastCoins = iStack_14;
    self_00 = self->CoinsLabel;
    value = (void *)NativeHelper_01ffa318(&iStack_14,0);
    if (self_00 != (UILabel *)0x0) {
      UILabel_set_text_129fea0(self_00,value,(void *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_013ebc10:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

