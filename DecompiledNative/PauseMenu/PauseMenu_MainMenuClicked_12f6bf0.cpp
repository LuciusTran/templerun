// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void MainMenuClicked() { }
// Ghidra address: 013fabf0; ELF VA: 0x12fabf0; file offset: 0x12f6bf0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PauseMenu_MainMenuClicked_12f6bf0(PauseMenu *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *title;
  void *description;
  void *leftButton;
  void *rightButton;
  void *leftButtonAction;
  void *rightButtonAction;
  AlertView *self_00;
  
  puVar7 = PTR_DAT_029c0f28;
  puVar6 = PTR_DAT_029c0f20;
  puVar5 = PTR_DAT_029c0f18;
  puVar4 = PTR_DAT_029c0f10;
  puVar3 = PTR_DAT_029c0900;
  puVar2 = PTR_DAT_029c08f8;
  puVar1 = PTR_DAT_029b8c90;
  if ((bRam0000000002b95046 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029c0f20);
    NativeHelper_011df0b4(PTR_DAT_029c0f28);
    NativeHelper_011df0b4(PTR_DAT_029c0f10);
    NativeHelper_011df0b4(PTR_DAT_029c08f8);
    NativeHelper_011df0b4(PTR_DAT_029c0f18);
    NativeHelper_011df0b4(PTR_DAT_029c0900);
    bRam0000000002b95046 = 1;
  }
  BasePanel_UnhookBannerAdEvents_12dfc20((BasePanel *)self,(void *)0x0);
  self_00 = self->AlertView;
  title = Strings_Txt_131380c(*(void **)puVar4,false,(void *)0x0);
  description = Strings_Txt_131380c(*(void **)puVar5,false,(void *)0x0);
  leftButton = Strings_Txt_131380c(*(void **)puVar3,false,(void *)0x0);
  rightButton = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
  leftButtonAction = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
  NativeHelper_01f80268(leftButtonAction,self,*(undefined8 *)puVar6,0);
  rightButtonAction = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
  NativeHelper_01f80268(rightButtonAction,self,*(undefined8 *)puVar7,0);
  if (self_00 != (AlertView *)0x0) {
    AlertView_ShowAlert_12ce598
              (self_00,title,description,leftButton,rightButton,leftButtonAction,rightButtonAction,
               true,(void *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

