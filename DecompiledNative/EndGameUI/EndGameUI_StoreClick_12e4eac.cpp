// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StoreClick() { }
// Ghidra address: 013e8eac; ELF VA: 0x12e8eac; file offset: 0x12e4eac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_StoreClick_12e4eac(EndGameUI *self,void *runtimeMethod)

{
  StoreGUI *pSVar1;
  
  if (self->_ShowingInterstitial != false) {
    return;
  }
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  pSVar1 = self->StoreInterface;
  if (pSVar1 != (StoreGUI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013e8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x1a8))(pSVar1,self,*(undefined8 *)(*(long *)pSVar1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

