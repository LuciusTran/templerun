// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TouchBegan(Vector2 touchPoint) { }
// Ghidra address: 013d79fc; ELF VA: 0x12d79fc; file offset: 0x12d39fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TouchInput_TouchBegan_12d39fc
               (TouchInput *self,Recovered_Vector2 touchPoint,void *runtimeMethod)

{
  bool bVar1;
  GameController *self_00;
  int iVar2;
  float fVar3;
  
  bVar1 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if (!bVar1) {
    return;
  }
  self_00 = *(GameController **)&self->field_0x40;
  if (self_00 == (GameController *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (self_00->IsPaused != false) {
    return;
  }
  if (self_00->IsIntroScene != false) {
    return;
  }
  fVar3 = self->ignoreTapTimeout;
  self->IsSwiping = true;
  (self->LastSwipePoint).component0 = touchPoint.component0;
  (self->LastSwipePoint).component1 = touchPoint.component1;
  if (0.0 < fVar3) {
    return;
  }
  if (self->tapCount == 0) {
    self->doubleTapTimeout = 0.25;
    iVar2 = 1;
  }
  else {
    iVar2 = self->tapCount + 1;
    self->tapCount = iVar2;
    if (iVar2 != 2) goto LAB_013d7a84;
    GameController_UseAngelWings_129bcd8(self_00,(void *)0x0);
    iVar2 = 0;
  }
  self->tapCount = iVar2;
LAB_013d7a84:
  self->ignoreTapTimeout = 0.1;
  return;
}

