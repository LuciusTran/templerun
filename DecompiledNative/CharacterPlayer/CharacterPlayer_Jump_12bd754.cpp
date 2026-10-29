// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool Jump(float delay = 0) { }
// Ghidra address: 013c1754; ELF VA: 0x12c1754; file offset: 0x12bd754
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool CharacterPlayer_Jump_12bd754(CharacterPlayer *self,float delay,void *runtimeMethod)

{
  bool bVar1;
  void *extraout_x1;
  void *in_x2;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000002b94e56 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf800);
    bRam0000000002b94e56 = 1;
    runtimeMethod = extraout_x1;
  }
  if (((self->IsJumping == false) && (self->IsStumbling == false)) && (self->IsFalling == false)) {
    if (delay <= 0.0) {
      fVar2 = CharacterPlayer_GetRunVelocity_12bdeac(self,runtimeMethod);
      fVar3 = 80.0;
      if ((80.0 <= fVar2) && (fVar3 = fVar2, 100.0 < fVar2)) {
        fVar3 = 100.0;
      }
      if (self->Audio != (AudioManager *)0x0) {
        AudioManager_PlayFX_12bb190(self->Audio,(void *)0xc,1.0,in_x2);
        self->IsJumping = true;
        self->JumpAfterDelay = false;
        self->IsSliding = false;
        *(float *)&self->field_0x38 = fVar3;
        if (self->AnimateObject != (void *)0x0) {
          NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf800,0);
          return true;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar1 = true;
    self->JumpAfterDelay = true;
    self->JumpDelay = delay;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

