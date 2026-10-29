// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013b0b4c; ELF VA: 0x12b0b4c; file offset: 0x12acb4c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController__LogAdInitOutcome_d__55_MoveNext_12acb4c
               (GameController__LogAdInitOutcome_d__55 *self,void *runtimeMethod)

{
  bool bVar1;
  GameController__LogAdInitOutcome_d__55 *runtimeMethod_00;
  void *self_00;
  GameController *self_01;
  float fVar2;
  
  runtimeMethod_00 = self;
  if ((bRam0000000002b94dbe & 1) == 0) {
    runtimeMethod_00 =
         (GameController__LogAdInitOutcome_d__55 *)NativeHelper_011df0b4(PTR_DAT_029bb638);
    bRam0000000002b94dbe = 1;
  }
  self_01 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    fVar2 = self->_elapsed_5__2 + 1.0;
    self->_elapsed_5__2 = fVar2;
    if (20.0 <= fVar2) goto LAB_013b0bc8;
  }
  else {
    if (self->__1__state != 0) {
      return false;
    }
    self->__1__state = -1;
    self->_elapsed_5__2 = 0.0;
  }
  bVar1 = AdInitStatus_IsAdServiceReady_12abc64(runtimeMethod_00);
  if (!bVar1) {
    self_00 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb638);
    UnityEngine_WaitForSeconds_WaitForSeconds_2512710(self_00,1.0,(void *)0x0);
    self->__2__current = self_00;
    self->__1__state = 1;
    return true;
  }
LAB_013b0bc8:
  if (self_01 == (GameController *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  GameController_EmitAdInitRetryResult_128b9b0
            (self_01,self->secondsSinceLaunch,self->trigger,(void *)0x0);
  if (self->releaseRetryGuard == false) {
    return false;
  }
  self_01->_adServiceRetryInFlight = false;
  return false;
}

