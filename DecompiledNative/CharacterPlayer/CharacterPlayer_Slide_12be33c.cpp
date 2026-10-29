// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool Slide() { }
// Ghidra address: 013c233c; ELF VA: 0x12c233c; file offset: 0x12be33c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CharacterPlayer_Slide_12be33c(CharacterPlayer *self,void *runtimeMethod)

{
  void *extraout_x1;
  void *in_x2;
  float fVar1;
  
  if ((bRam0000000002b94e57 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf830);
    NativeHelper_011df0b4(PTR_DAT_029bf838);
    bRam0000000002b94e57 = 1;
    runtimeMethod = extraout_x1;
  }
  if (((self->IsSliding == false) && (self->IsJumping == false)) && (self->IsFalling == false)) {
    self->IsSliding = true;
    self->TimeSinceSlideStart = 0.0;
    fVar1 = CharacterPlayer_GetRunVelocity_12bdeac(self,runtimeMethod);
    fVar1 = fVar1 * _UNK_007a3bb4;
    if (0.75 < fVar1) {
      fVar1 = 0.75;
    }
    self->SlideDuration = fVar1;
    if (self->Audio != (AudioManager *)0x0) {
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x1b,1.0,in_x2);
      if (self->AnimateObject != (void *)0x0) {
        NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf838,0);
        if (self->AnimateObject != (void *)0x0) {
          NativeHelper_025e505c(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf830,0);
          return true;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  return false;
}

