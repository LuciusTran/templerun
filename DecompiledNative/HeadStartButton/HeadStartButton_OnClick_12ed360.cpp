// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnClick() { }
// Ghidra address: 013f1360; ELF VA: 0x12f1360; file offset: 0x12ed360
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HeadStartButton_OnClick_12ed360(HeadStartButton *self,void *runtimeMethod)

{
  GameController *self_00;
  void *pvVar1;
  long lVar2;
  
  if (self->TweenStarted == false) {
    return;
  }
  self_00 = self->Controller;
  if (self_00 != (GameController *)0x0) {
    if (self->MegaHeadStart == false) {
      GameController_UseHeadStart_129bfc4(self_00,(void *)0x0);
    }
    else {
      GameController_UseHeadStartMega_129c134(self_00,(void *)0x0);
    }
    pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
    if (((pvVar1 != (void *)0x0) &&
        (pvVar1 = UnityEngine_Transform_get_parent_2516614(pvVar1,(void *)0x0),
        pvVar1 != (void *)0x0)) && (lVar2 = NativeHelper_0260e1e4(pvVar1,0), lVar2 != 0)) {
      if (pcRam0000000002b9cda0 == (code *)0x0) {
        pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
      }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9cda0)(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

