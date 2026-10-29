// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void EndGame_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 013ea10c; ELF VA: 0x12ea10c; file offset: 0x12e610c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013e7a14) */
/* WARNING: Removing unreachable block (ram,0x013e7a3c) */
/* WARNING: Removing unreachable block (ram,0x013e7a4c) */
/* WARNING: Removing unreachable block (ram,0x013e7a54) */
/* WARNING: Removing unreachable block (ram,0x013e7a78) */
/* WARNING: Removing unreachable block (ram,0x013e7a84) */

void EndGameUI_EndGame_OnAdWillLeaveApplication_12e610c
               (EndGameUI *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  long lVar1;
  void *pvVar2;
  undefined8 uStack_30;
  float fStack_28;
  
  UIInputBlocking_EnableInput_1300bfc((void *)0x0);
  if ((int)inAdType != 0) {
    return;
  }
  if ((self->DoubleCoinsButton != (UISprite *)0x0) &&
     (lVar1 = NativeHelper_0260e1e4(self->DoubleCoinsButton,0), lVar1 != 0)) {
    NativeHelper_02610c54(lVar1,0,0);
    pvVar2 = self->CoinsHeaderTransform;
    if (pvVar2 != (void *)0x0) {
      fStack_28 = (self->CoinsHeaderDefaultPos).component2;
      uStack_30._0_4_ = (self->CoinsHeaderDefaultPos).component0;
      uStack_30._4_4_ = (self->CoinsHeaderDefaultPos).component1;
      if (pcRam0000000002b9d2c0 == (code *)0x0) {
        pcRam0000000002b9d2c0 = (code *)NativeHelper_011df070(&UNK_007b1453,0);
      }
      (*pcRam0000000002b9d2c0)(pvVar2,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

