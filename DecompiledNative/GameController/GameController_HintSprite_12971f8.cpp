// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private GUIParticle HintSprite(string name, Vector3 start, Vector3 motion, bool startAnimation = true, bool ContainsText = false, string text = null) { }
// Ghidra address: 0139b1f8; ELF VA: 0x129b1f8; file offset: 0x12971f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

GUIParticle *
GameController_HintSprite_12971f8
          (GameController *self,void *name,Recovered_Vector3 start,Recovered_Vector3 motion,
          bool startAnimation,bool ContainsText,void *text,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  GUIParticle *self_00;
  void *pvVar4;
  void *value;
  ulong uVar5;
  UILabel *self_01;
  
  if ((self->GameInterface != (GameGUI *)0x0) &&
     (self_00 = GameGUI_NextFreeParticle_12e7f50(self->GameInterface,name,(void *)0x0),
     self_00 != (GUIParticle *)0x0)) {
    pvVar4 = (void *)NativeHelper_0260e1a8(self_00,0);
    if ((self->GameInterface != (GameGUI *)0x0) &&
       (value = (void *)NativeHelper_0260e1a8(self->GameInterface,0), pvVar4 != (void *)0x0)) {
      UnityEngine_Transform_set_parent_2516ee0(pvVar4,value,(void *)0x0);
      pvVar4 = (void *)NativeHelper_0260e1a8(self_00,0);
      if (pvVar4 != (void *)0x0) {
        UnityEngine_Transform_set_localPosition_2515ec4(pvVar4,start,(void *)0x0);
        uVar1 = _UNK_007a3770;
        (self_00->Motion).component0 = motion.component0;
        (self_00->Motion).component1 = motion.component1;
        (self_00->Motion).component2 = motion.component2;
        *(undefined4 *)&self_00->field_0x54 = 2;
        uVar3 = _UNK_007a3770;
        _UNK_007a3770 = (undefined4)uVar1;
        _UNK_007a3774 = SUB84(uVar1,4);
        uVar2 = _UNK_007a3774;
        self_00->LifeSpan = (float)_UNK_007a3770;
        _UNK_007a3770 = uVar3;
        self_00->RotationRate = (float)uVar2;
        self_00->containsText = ContainsText;
        if ((ContainsText) && (uVar5 = NativeHelper_01e9be28(text,0), (uVar5 & 1) == 0)) {
          pvVar4 = Strings_Txt_131380c(text,false,(void *)0x0);
          if (self_00->Label == (UILabel *)0x0) goto LAB_0139b358;
          UILabel_set_text_129fea0(self_00->Label,pvVar4,(void *)0x0);
          self_01 = (UILabel *)self_00->Sprite;
        }
        else {
          self_01 = self_00->Label;
        }
        if (self_01 != (UILabel *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c(self_01,false,(void *)0x0);
          if (startAnimation) {
            GUIParticle_BeginAnimation_12e857c(self_00,(void *)0x0);
          }
          return self_00;
        }
      }
    }
  }
LAB_0139b358:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

