// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartVacuum(float duration) { }
// Ghidra address: 013c2870; ELF VA: 0x12c2870; file offset: 0x12be870
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StartVacuum_12be870(CharacterPlayer *self,float duration,void *runtimeMethod)

{
  self->VacuumTimeLeft = duration;
  self->HasVacuum = true;
  self->TimeSinceLastPowerup = 0.0;
  return;
}

