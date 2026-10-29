// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartCoinBonus(int value) { }
// Ghidra address: 013c2884; ELF VA: 0x12c2884; file offset: 0x12be884
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StartCoinBonus_12be884(CharacterPlayer *self,int value,void *runtimeMethod)

{
  CharacterPlayer_AddCoins_12be67c(self,value,runtimeMethod);
  self->TimeSinceLastPowerup = 0.0;
  return;
}

