// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartAngelWings(float duration, bool isPermanent = false) { }
// Ghidra address: 013c2840; ELF VA: 0x12c2840; file offset: 0x12be840
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StartAngelWings_12be840
               (CharacterPlayer *self,float duration,bool isPermanent,void *runtimeMethod)

{
  self->HasAngelWings = true;
  self->AreWingsPermanent = isPermanent;
  self->AngelWingsTimeLeft = duration;
  if (!isPermanent) {
    self->AngelWingsRechargeTimeLeft = 45.0;
    self->AngelWingsCount = self->AngelWingsCount + -1;
  }
  return;
}

