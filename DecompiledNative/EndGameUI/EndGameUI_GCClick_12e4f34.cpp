// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GCClick() { }
// Ghidra address: 013e8f34; ELF VA: 0x12e8f34; file offset: 0x12e4f34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_GCClick_12e4f34(EndGameUI *self,void *runtimeMethod)

{
  GCGUI *pGVar1;
  
  if (self->_ShowingInterstitial != false) {
    return;
  }
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  pGVar1 = self->GCInterface;
  if (pGVar1 != (GCGUI *)0x0) {
    pGVar1->_OpenedFromEndGame = true;
                    /* WARNING: Could not recover jumptable at 0x013e8f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pGVar1 + 0x1a8))(pGVar1,self,*(undefined8 *)(*(long *)pGVar1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

