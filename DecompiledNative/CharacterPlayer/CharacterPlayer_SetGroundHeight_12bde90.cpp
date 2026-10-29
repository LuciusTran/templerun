// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetGroundHeight(float groundHeight) { }
// Ghidra address: 013c1e90; ELF VA: 0x12c1e90; file offset: 0x12bde90
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_SetGroundHeight_12bde90
               (CharacterPlayer *self,float groundHeight,void *runtimeMethod)

{
  if (self->GroundHeight < groundHeight) {
    self->IsGroundHeightChangeHigher = true;
  }
  self->GroundHeight = groundHeight;
  return;
}

