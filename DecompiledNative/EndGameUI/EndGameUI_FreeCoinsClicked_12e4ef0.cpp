// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void FreeCoinsClicked() { }
// Ghidra address: 013e8ef0; ELF VA: 0x12e8ef0; file offset: 0x12e4ef0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_FreeCoinsClicked_12e4ef0(EndGameUI *self,void *runtimeMethod)

{
  VCGUI *pVVar1;
  
  if (self->_ShowingInterstitial != false) {
    return;
  }
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  pVVar1 = self->CoinsInterface;
  if (pVVar1 != (VCGUI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013e8f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pVVar1 + 0x1a8))(pVVar1,self,*(undefined8 *)(*(long *)pVVar1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

