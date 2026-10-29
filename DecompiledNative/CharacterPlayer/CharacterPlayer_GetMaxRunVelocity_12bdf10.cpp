// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float GetMaxRunVelocity() { }
// Ghidra address: 013c1f10; ELF VA: 0x12c1f10; file offset: 0x12bdf10
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float CharacterPlayer_GetMaxRunVelocity_12bdf10(CharacterPlayer *self,void *runtimeMethod)

{
  float fVar1;
  
  if (self->HasBoost == false) {
    return self->MaxRunVelocity;
  }
  fVar1 = self->MaxRunVelocity;
  if (self->IsMegaBoost != false) {
    return fVar1 * 2.5;
  }
  return fVar1 + fVar1;
}

