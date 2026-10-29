// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetCoins(int coins) { }
// Ghidra address: 013eb788; ELF VA: 0x12eb788; file offset: 0x12e7788
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_SetCoins_12e7788(GameGUI *self,int coins,void *runtimeMethod)

{
  void *value;
  UILabel *self_00;
  int iStack_14;
  
  self_00 = self->CoinsLabel;
  iStack_14 = coins;
  value = (void *)NativeHelper_01ffa318(&iStack_14,0);
  if (self_00 != (UILabel *)0x0) {
    UILabel_set_text_129fea0(self_00,value,(void *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

