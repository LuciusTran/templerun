// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Vector2 GetPreviousPosition2D() { }
// Ghidra address: 013c2330; ELF VA: 0x12c2330; file offset: 0x12be330
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Vector2
CharacterPlayer_GetPreviousPosition2D_12be330(CharacterPlayer *self,void *runtimeMethod)

{
  Recovered_Vector2 RVar1;
  
  RVar1.component0 = *(float *)&self->field_0x7c;
  RVar1.component1 = *(float *)&self->field_0x84;
  return RVar1;
}

