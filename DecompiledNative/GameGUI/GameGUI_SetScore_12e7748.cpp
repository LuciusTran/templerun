// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetScore(int score) { }
// Ghidra address: 013eb748; ELF VA: 0x12eb748; file offset: 0x12e7748
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_SetScore_12e7748(GameGUI *self,int score,void *runtimeMethod)

{
  void *value;
  UILabel *self_00;
  int iStack_14;
  
  self_00 = self->ScoreLabel;
  iStack_14 = score;
  value = (void *)NativeHelper_01ffa318(&iStack_14,0);
  if (self_00 != (UILabel *)0x0) {
    UILabel_set_text_129fea0(self_00,value,(void *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

