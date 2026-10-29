// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void MainMenuClicked() { }
// Ghidra address: 013e8e60; ELF VA: 0x12e8e60; file offset: 0x12e4e60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EndGameUI_MainMenuClicked_12e4e60(EndGameUI *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (self->_ShowingInterstitial == false) {
    (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
    if (*(GameController **)&self->field_0x20 == (GameController *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    GameController_SnapMainMenu_128fb68(*(GameController **)&self->field_0x20,(void *)0x0);
    uVar1 = _UNK_007a3400;
    self->_FirstSlideAdDelayAnimDone = false;
    uVar3 = _UNK_007a3400;
    _UNK_007a3400 = (undefined4)uVar1;
    _UNK_007a3404 = SUB84(uVar1,4);
    uVar2 = _UNK_007a3404;
    self->scoreAnimationIndex = _UNK_007a3400;
    _UNK_007a3400 = uVar3;
    self->scoreAnimationAdditionAmount = uVar2;
  }
  return;
}

