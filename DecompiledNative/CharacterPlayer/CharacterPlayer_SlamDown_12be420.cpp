// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool SlamDown() { }
// Ghidra address: 013c2420; ELF VA: 0x12c2420; file offset: 0x12be420
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool CharacterPlayer_SlamDown_12be420(CharacterPlayer *self,void *runtimeMethod)

{
  if ((self->IsJumping != false) && (self->IsFalling == false)) {
    *(undefined4 *)&self->field_0x38 = 0xc2700000;
    return true;
  }
  return false;
}

