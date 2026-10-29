// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateProgress(float coinPercent) { }
// Ghidra address: 013ec9dc; ELF VA: 0x12ec9dc; file offset: 0x12e89dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013152d4) */

void GameGUITotem_UpdateProgress_12e89dc(GameGUITotem *self,float coinPercent,void *runtimeMethod)

{
  UIFilledSprite *pUVar1;
  
  pUVar1 = self->ProgressBarSprite;
  if (pUVar1 == (UIFilledSprite *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (coinPercent < 0.0) {
    coinPercent = 0.0;
  }
  if (pUVar1->mFillAmount != coinPercent) {
    pUVar1->mFillAmount = coinPercent;
    pUVar1->field_0x58 = 1;
  }
  return;
}

