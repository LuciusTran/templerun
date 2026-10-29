// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void ShowAll(bool inShowBannerAds = true) { }
// Ghidra address: 013e4b38; ELF VA: 0x12e4b38; file offset: 0x12e0b38
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterSelectGUI_ShowAll_12e0b38
               (CharacterSelectGUI *self,bool inShowBannerAds,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int playerId;
  long lVar3;
  void *pvVar4;
  void *runtimeMethod_00;
  UILabel *self_00;
  RecordManager *self_01;
  int iStack_24;
  
  puVar1 = PTR_DAT_029bf000;
  if ((bRam0000000002b94fa8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf000);
    bRam0000000002b94fa8 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    self->DisplayOrder = *(void **)(**(long **)(lVar3 + 0xb8) + 0x30);
    BasePanel_ShowAll_12df6a4((BasePanel *)self,inShowBannerAds,runtimeMethod);
    CharacterSelectGUI_ReconfigureStoreItems_12e0bc8(self,runtimeMethod_00);
    if ((bRam0000000002b94fac & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b9758);
      NativeHelper_011df0b4(PTR_DAT_029c0668);
      bRam0000000002b94fac = 1;
    }
    if (self->PlayerManager != (void *)0x0) {
      self_01 = self->RecordManager;
      playerId = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      puVar2 = PTR_DAT_029c0668;
      puVar1 = PTR_DAT_029b9758;
      if (self_01 != (RecordManager *)0x0) {
        iStack_24 = RecordManager_GetCoinCount_12b4150(self_01,playerId,(void *)0x0);
        self_00 = self->CoinLabel;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar1);
        }
        pvVar4 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
        pvVar4 = (void *)NativeHelper_01ffa4f4(&iStack_24,*(undefined8 *)puVar2,pvVar4,0);
        if (self_00 != (UILabel *)0x0) {
          UILabel_set_text_129fea0(self_00,pvVar4,(void *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

