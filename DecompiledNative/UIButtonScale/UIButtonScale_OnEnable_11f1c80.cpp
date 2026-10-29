// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 012f5c80; ELF VA: 0x11f5c80; file offset: 0x11f1c80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIButtonScale_OnEnable_11f1c80(UIButtonScale *self,void *runtimeMethod)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  TweenScale *pTVar4;
  void *runtimeMethod_00;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  Recovered_Vector3 scale;
  
  if ((bRam0000000002b94557 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b99a8);
    bRam0000000002b94557 = 1;
  }
  if ((self->mStarted == false) || (self->mHighlighted == false)) {
    return;
  }
  pvVar3 = (void *)NativeHelper_0260e1e4(self,0);
  if (*(int *)(*(long *)PTR_DAT_029b99a8 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b99a8);
  }
  bVar1 = UICamera_IsHighlighted_120ea10(pvVar3,(void *)0x0);
  bVar2 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if (self->mInitDone == false) {
    UIButtonScale_Init_11f1e8c(self,runtimeMethod_00);
  }
  if (self->tweenTarget != (void *)0x0) {
    pvVar3 = (void *)NativeHelper_0260e1e4(self->tweenTarget,0);
    uVar5._0_4_ = (self->mScale).component0;
    uVar5._4_4_ = (self->mScale).component1;
    fVar8 = (self->mScale).component2;
    if (bVar1) {
      uVar6 = (self->hover).component0;
      uVar7 = (self->hover).component1;
      uVar5 = CONCAT44((float)uVar5._4_4_ * (float)uVar7,(float)(undefined4)uVar5 * (float)uVar6);
      fVar8 = fVar8 * (self->hover).component2;
    }
    scale.component2 = fVar8;
    scale.component0 = (float)(int)uVar5;
    scale.component1 = (float)(int)((ulong)uVar5 >> 0x20);
    pTVar4 = TweenScale_Begin_120a3e4(pvVar3,self->duration,scale,(void *)0x0);
    if (pTVar4 != (TweenScale *)0x0) {
      *(undefined4 *)&pTVar4->field_0x2c = 3;
      self->mHighlighted = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

