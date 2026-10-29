// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddScore(int score) { }
// Ghidra address: 013c2660; ELF VA: 0x12c2660; file offset: 0x12be660
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_AddScore_12be660(CharacterPlayer *self,int score,void *runtimeMethod)

{
  if (0 < score) {
    self->Score = self->Score + self->ScoreMultiplier * score;
  }
  return;
}

