// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void SetDoubleButtonState(bool inEnabled) { }
// Ghidra address: 013e79e0; ELF VA: 0x12e79e0; file offset: 0x12e39e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_SetDoubleButtonState_12e39e0(EndGameUI *self,bool inEnabled,void *runtimeMethod)

{
  long lVar1;
  void *self_00;
  void *pvVar2;
  
  if ((self->DoubleCoinsButton != (UISprite *)0x0) &&
     (lVar1 = NativeHelper_0260e1e4(self->DoubleCoinsButton,0), lVar1 != 0)) {
    if (inEnabled) {
      NativeHelper_02610c54(lVar1,1,0);
      pvVar2 = self->CoinsHeaderTransform;
      if (cRam0000000002b94682 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368);
        cRam0000000002b94682 = '\x01';
      }
      if ((self->DoubleCoinsButton == (UISprite *)0x0) ||
         (self_00 = UIWidget_get_cachedTransform_12015ac
                              ((UIWidget *)self->DoubleCoinsButton,(void *)0x0),
         self_00 == (void *)0x0)) goto LAB_013e7ad8;
      UnityEngine_Transform_get_localScale_2516d6c(self_00,(void *)0x0);
    }
    else {
      NativeHelper_02610c54(lVar1,0,0);
      pvVar2 = self->CoinsHeaderTransform;
    }
    if (pvVar2 != (void *)0x0) {
      if (pcRam0000000002b9d2c0 == (code *)0x0) {
        pcRam0000000002b9d2c0 = (code *)NativeHelper_011df070(&UNK_007b1453,0);
      }
      (*pcRam0000000002b9d2c0)(pvVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
LAB_013e7ad8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

