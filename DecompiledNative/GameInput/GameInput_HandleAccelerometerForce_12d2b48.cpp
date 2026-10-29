// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleAccelerometerForce() { }
// Ghidra address: 013d6b48; ELF VA: 0x12d6b48; file offset: 0x12d2b48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameInput_HandleAccelerometerForce_12d2b48(GameInput *self,void *runtimeMethod)

{
  CharacterPlayer *pCVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(**(code **)(*(long *)self + 0x188))(self,*(undefined8 *)(*(long *)self + 400));
  if (self->GameController != (GameController *)0x0) {
    if (self->GameController->IsIntroScene == false) {
      fVar3 = -1.0;
      if ((0.0 <= fVar2) && (fVar3 = 0.0, 0.0 < fVar2)) {
        fVar3 = 1.0;
      }
      pCVar1 = self->GamePlayer;
      if (pCVar1 == (CharacterPlayer *)0x0) goto LAB_013d6bd4;
      if (((pCVar1->IsStumbling == false) && (pCVar1->StumbleAfterDelay == false)) &&
         (pCVar1->IsStrafing == false)) {
        fVar2 = ABS(fVar2) * 10.125;
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        pCVar1->PlayerXOffset = fVar2 * -7.0 * fVar3;
      }
    }
    return;
  }
LAB_013d6bd4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

