// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StrafeRight() { }
// Ghidra address: 013c24dc; ELF VA: 0x12c24dc; file offset: 0x12be4dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StrafeRight_12be4dc(CharacterPlayer *self,void *runtimeMethod)

{
  bool bVar1;
  void *extraout_x1;
  float fVar2;
  
  if ((bRam0000000002b94e59 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94e59 = 1;
    runtimeMethod = extraout_x1;
  }
  self->IsStrafing = true;
  self->TimeSinceStrafeStart = 0.0;
  if ((-7.5 < self->GroundHeight) && (7.5 <= self->GroundHeight)) {
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    bVar1 = GameController_get_AllowFallOnCliffs_1297450((void *)0x0);
    if (!bVar1) {
      fVar2 = -6.0;
      goto LAB_013c2558;
    }
  }
  fVar2 = -7.0;
LAB_013c2558:
  self->PlayerXOffset = fVar2;
  return;
}

