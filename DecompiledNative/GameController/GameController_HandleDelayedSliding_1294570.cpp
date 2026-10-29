// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleDelayedSliding() { }
// Ghidra address: 01398570; ELF VA: 0x1298570; file offset: 0x1294570
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleDelayedSliding_1294570(GameController *self,void *runtimeMethod)

{
  bool bVar1;
  CharacterPlayer *self_00;
  GameInput *pGVar2;
  
  if (self->GameInput != (GameInput *)0x0) {
    if (self->GameInput->ShouldSlide != false) {
      self_00 = self->GamePlayer;
      if (self_00 == (CharacterPlayer *)0x0) goto LAB_013985bc;
      if (self_00->IsDead == false) {
        bVar1 = CharacterPlayer_Slide_12be33c(self_00,(void *)0x0);
        if (bVar1) {
          pGVar2 = self->GameInput;
          if (pGVar2 == (GameInput *)0x0) goto LAB_013985bc;
          pGVar2->ShouldSlide = false;
          pGVar2->TimeSinceShouldSlide = 0.0;
        }
      }
    }
    return;
  }
LAB_013985bc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

