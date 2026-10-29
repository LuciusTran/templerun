// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddCoins(int count) { }
// Ghidra address: 013c267c; ELF VA: 0x12c267c; file offset: 0x12be67c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_AddCoins_12be67c(CharacterPlayer *self,int count,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  
  if (0 < count) {
    iVar2 = self->CoinCountForBonus + count;
    self->CoinCountTotal = self->CoinCountTotal + count;
    self->CoinCountForBonus = iVar2;
    if (self->CoinCountForBonusThreshold <= iVar2) {
      iVar1 = self->BonusLevel + 1;
      self->Score = self->Score + self->ScoreMultiplier * 500;
      self->BonusLevel = iVar1;
      if (self->BonusLevelMax < iVar1) {
        self->BonusLevelMax = iVar1;
      }
      self->CoinCountForBonus = iVar2 - self->CoinCountForBonusThreshold;
    }
  }
  return;
}

