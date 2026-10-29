// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnPress(bool isPressed) { }
// Ghidra address: 012f5f2c; ELF VA: 0x11f5f2c; file offset: 0x11f1f2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIButtonScale_OnPress_11f1f2c(UIButtonScale *self,bool isPressed,void *runtimeMethod)

{
  bool bVar1;
  void *go;
  void *go_00;
  TweenScale *pTVar2;
  void *runtimeMethod_00;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar8;
  float duration;
  Recovered_Vector3 scale;
  
  if ((bRam0000000002b9455a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b99a8);
    bRam0000000002b9455a = 1;
  }
  bVar1 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if (!bVar1) {
    return;
  }
  if (self->mInitDone == false) {
    UIButtonScale_Init_11f1e8c(self,runtimeMethod_00);
  }
  if (self->tweenTarget != (void *)0x0) {
    go = (void *)NativeHelper_0260e1e4(self->tweenTarget,0);
    duration = self->duration;
    if (isPressed) {
      uVar4 = (self->mScale).component1;
      uVar5 = (self->mScale).component2;
      uVar6 = (self->pressed).component1;
      uVar9 = (self->pressed).component2;
      fVar3 = (self->mScale).component0 * (self->pressed).component0;
      uVar8 = CONCAT44((float)uVar5 * (float)uVar9,(float)uVar4 * (float)uVar6);
    }
    else {
      go_00 = (void *)NativeHelper_0260e1e4(self,0);
      if (*(int *)(*(long *)PTR_DAT_029b99a8 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)PTR_DAT_029b99a8);
      }
      bVar1 = UICamera_IsHighlighted_120ea10(go_00,(void *)0x0);
      fVar3 = (self->mScale).component0;
      uVar8._0_4_ = (self->mScale).component1;
      uVar8._4_4_ = (self->mScale).component2;
      if (bVar1) {
        uVar7 = (self->hover).component1;
        uVar10 = (self->hover).component2;
        fVar3 = fVar3 * (self->hover).component0;
        uVar8 = CONCAT44((float)uVar8._4_4_ * (float)uVar10,(float)(undefined4)uVar8 * (float)uVar7)
        ;
      }
    }
    uVar8 = NEON_rev64(uVar8,4);
    scale.component1 = (float)(int)((ulong)uVar8 >> 0x20);
    scale.component0 = fVar3;
    scale.component2 = (float)uVar8;
    pTVar2 = TweenScale_Begin_120a3e4(go,duration,scale,(void *)0x0);
    if (pTVar2 != (TweenScale *)0x0) {
      *(undefined4 *)&pTVar2->field_0x2c = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

