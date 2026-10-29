// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float GetRunVelocity() { }
// Ghidra address: 013c1eac; ELF VA: 0x12c1eac; file offset: 0x12bdeac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float CharacterPlayer_GetRunVelocity_12bdeac(CharacterPlayer *self,void *runtimeMethod)

{
  void *extraout_x1;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&self->field_0x34;
  fVar2 = *(float *)&self->field_0x3c;
  if (cRam0000000002b945bf == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b945bf = '\x01';
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b97c8,runtimeMethod);
  }
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2);
}

