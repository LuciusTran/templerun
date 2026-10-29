// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PauseSprite() { }
// Ghidra address: 013eb9d0; ELF VA: 0x12eb9d0; file offset: 0x12e79d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_PauseSprite_12e79d0(GameGUI *self,void *runtimeMethod)

{
  ulong uVar1;
  UISprite *pUVar2;
  void *extraout_x1;
  void *pvVar3;
  
  if ((bRam0000000002b94fdf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0980);
    bRam0000000002b94fdf = 1;
    runtimeMethod = extraout_x1;
  }
  pUVar2 = self->_PauseSprite;
  if (pUVar2 != (UISprite *)0x0) {
    pvVar3 = *(void **)PTR_DAT_029c0980;
    if ((bRam0000000002b94d93 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b8618,pvVar3,0);
      bRam0000000002b94d93 = 1;
    }
    uVar1 = NativeHelper_01e9be28(pvVar3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = NativeHelper_01e9b7a0(pUVar2->mSpriteName,pvVar3,0);
      if ((uVar1 & 1) != 0) {
        pUVar2->mSpriteName = pvVar3;
        pUVar2->mSprite = (UIAtlas_Sprite *)0x0;
        pUVar2->field_0x58 = 1;
      }
    }
    else {
      uVar1 = NativeHelper_01e9be28(pUVar2->mSpriteName,0);
      if ((uVar1 & 1) == 0) {
        pvVar3 = *(void **)PTR_DAT_029b8618;
        pUVar2->field_0x58 = 1;
        pUVar2->mSpriteName = pvVar3;
        pUVar2->mSprite = (UIAtlas_Sprite *)0x0;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(0,runtimeMethod);
}

