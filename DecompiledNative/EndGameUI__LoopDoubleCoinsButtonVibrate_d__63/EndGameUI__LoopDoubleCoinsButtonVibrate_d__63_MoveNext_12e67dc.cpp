// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013ea7dc; ELF VA: 0x12ea7dc; file offset: 0x12e67dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool EndGameUI__LoopDoubleCoinsButtonVibrate_d__63_MoveNext_12e67dc
               (EndGameUI__LoopDoubleCoinsButtonVibrate_d__63 *self,void *runtimeMethod)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *self_00;
  EndGameUI *pEVar3;
  UISprite *inWidget;
  Recovered_Vector3 RVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5._8_8_ = runtimeMethod;
  auVar5._0_8_ = self;
  if ((bRam0000000002b94fda & 1) == 0) {
    auVar5 = NativeHelper_011df0b4(PTR_DAT_029bb638);
    bRam0000000002b94fda = 1;
  }
  if ((uint)self->__1__state < 2) {
    pEVar3 = self->__4__this;
    self->__1__state = -1;
    if (pEVar3 != (EndGameUI *)0x0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar5._8_8_;
      auVar5 = auVar6 << 0x40;
      if (pEVar3->DoubleCoinsButton != (UISprite *)0x0) {
        auVar6 = NativeHelper_0260e1e4(pEVar3->DoubleCoinsButton,0);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar6._8_8_;
        auVar5 = auVar1 << 0x40;
        if (auVar6._0_8_ != 0) {
          auVar5 = NativeHelper_02610cd4(auVar6._0_8_,0);
          if ((auVar5._0_8_ & 1) == 0) {
            return false;
          }
          inWidget = pEVar3->DoubleCoinsButton;
          if (inWidget != (UISprite *)0x0) {
            auVar6 = NativeHelper_0260e1a8(inWidget,0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = auVar6._8_8_;
            auVar5 = auVar2 << 0x40;
            if (auVar6._0_8_ != (void *)0x0) {
              RVar4 = UnityEngine_Transform_get_localScale_2516d6c(auVar6._0_8_,(void *)0x0);
              UIUtilities_VibrateWidget_132667c
                        ((UIWidget *)inWidget,RVar4.component1 * 0.5,_UNK_007a3bec,(void *)0x0);
              self_00 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb638);
              UnityEngine_WaitForSeconds_WaitForSeconds_2512710(self_00,1.0,(void *)0x0);
              self->__2__current = self_00;
              self->__1__state = 1;
              return true;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc(auVar5._0_8_,auVar5._8_8_);
  }
  return false;
}

