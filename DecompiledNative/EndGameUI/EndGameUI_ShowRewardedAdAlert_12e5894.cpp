// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowRewardedAdAlert() { }
// Ghidra address: 013e9894; ELF VA: 0x12e9894; file offset: 0x12e5894
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_ShowRewardedAdAlert_12e5894(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *title;
  void *description;
  void *leftButton;
  void *rightButton;
  void *rightButtonAction;
  long lVar2;
  AlertView *self_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = runtimeMethod;
  auVar3._0_8_ = self;
  if ((bRam0000000002b94fd1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bffc8);
    NativeHelper_011df0b4(PTR_DAT_029c08e0);
    NativeHelper_011df0b4(PTR_DAT_029c08e8);
    NativeHelper_011df0b4(PTR_DAT_029c08f0);
    NativeHelper_011df0b4(PTR_DAT_029c08f8);
    auVar3 = NativeHelper_011df0b4(PTR_DAT_029c0900);
    bRam0000000002b94fd1 = 1;
  }
  puVar1 = PTR_DAT_029bffc8;
  if (self->_ShowingInterstitial != false) {
    return;
  }
  if ((*(long *)&self->field_0x20 != 0) &&
     (lVar2 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar2 != 0)) {
    self->_RewardAmount = *(int *)(lVar2 + 0x148);
    self_00 = (AlertView *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    title = Strings_Txt_131380c(*(void **)PTR_DAT_029c08f0,false,(void *)0x0);
    description = Strings_Txt_131380c(*(void **)PTR_DAT_029c08e8,false,(void *)0x0);
    leftButton = Strings_Txt_131380c(*(void **)PTR_DAT_029c0900,false,(void *)0x0);
    rightButton = Strings_Txt_131380c(*(void **)PTR_DAT_029c08f8,false,(void *)0x0);
    rightButtonAction = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    auVar3 = NativeHelper_01f80268(rightButtonAction,self,*(undefined8 *)PTR_DAT_029c08e0,0);
    if (self_00 != (AlertView *)0x0) {
      AlertView_ShowAlert_12ce598
                (self_00,title,description,leftButton,rightButton,(void *)0x0,rightButtonAction,true
                 ,(void *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(auVar3._0_8_,auVar3._8_8_);
}

