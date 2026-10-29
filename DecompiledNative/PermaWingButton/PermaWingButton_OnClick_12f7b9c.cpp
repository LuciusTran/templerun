// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnClick() { }
// Ghidra address: 013fbb9c; ELF VA: 0x12fbb9c; file offset: 0x12f7b9c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PermaWingButton_OnClick_12f7b9c(PermaWingButton *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  if (self->TweenStarted == false) {
    return;
  }
  if (self->Controller != (GameController *)0x0) {
    GameController_UsePermaWings_129be50(self->Controller,(void *)0x0);
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

