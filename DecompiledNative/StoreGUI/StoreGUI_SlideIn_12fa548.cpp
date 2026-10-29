// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void SlideIn(BasePanel returnTo) { }
// Ghidra address: 013fe548; ELF VA: 0x12fe548; file offset: 0x12fa548
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreGUI_SlideIn_12fa548(StoreGUI *self,BasePanel *returnTo,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  UIPanel *self_00;
  UIStack *self_01;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  float fVar10;
  float fVar11;
  Recovered_Vector3 RVar12;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Vector4 value_01;
  
  if ((bRam0000000002b95065 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0670);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b95065 = 1;
  }
  *(BasePanel **)&self->field_0x38 = returnTo;
  runtimeMethod_00 = *(void **)(*(long *)self + 400);
  (**(code **)(*(long *)self + 0x188))(self,1);
  pvVar5 = extraout_x1;
  if (self->_FirstSlide != false) {
    if (self->Header == (void *)0x0) goto LAB_013fe760;
    fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
    fVar11 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
    pvVar5 = (void *)NativeHelper_02610b98(self->Header,0);
    if (pvVar5 == (void *)0x0) goto LAB_013fe760;
    RVar12 = UnityEngine_Transform_get_localPosition_2515e38(pvVar5,(void *)0x0);
    if ((self->Header == (void *)0x0) ||
       (pvVar5 = (void *)NativeHelper_02610b98(self->Header,0), pvVar5 == (void *)0x0))
    goto LAB_013fe760;
    fVar10 = fVar10 - fVar11;
    RVar12.component1 = fVar10 + RVar12.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar5,RVar12,(void *)0x0);
    if ((self->ScrollViewPanel == (UIPanel *)0x0) ||
       (pvVar5 = (void *)NativeHelper_0260e1a8(self->ScrollViewPanel,0), pvVar5 == (void *)0x0))
    goto LAB_013fe760;
    RVar12 = UnityEngine_Transform_get_localPosition_2515e38(pvVar5,(void *)0x0);
    value.component2 = RVar12.component2;
    value.component0 = RVar12.component0;
    if ((self->ScrollViewPanel == (UIPanel *)0x0) ||
       (pvVar5 = (void *)NativeHelper_0260e1a8(self->ScrollViewPanel,0), pvVar5 == (void *)0x0))
    goto LAB_013fe760;
    value.component1 = fVar10 * 0.5 + RVar12.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar5,value,(void *)0x0);
    if (self->ScrollContent == (void *)0x0) goto LAB_013fe760;
    RVar12 = UnityEngine_Transform_get_localPosition_2515e38(self->ScrollContent,(void *)0x0);
    value_00.component2 = RVar12.component2;
    value_00.component0 = RVar12.component0;
    if (self->ScrollContent == (void *)0x0) goto LAB_013fe760;
    value_00.component1 = fVar10 * 0.5 + RVar12.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(self->ScrollContent,value_00,(void *)0x0);
    self_00 = self->ScrollViewPanel;
    if (self_00 == (UIPanel *)0x0) goto LAB_013fe760;
    value_01.component2 = (self_00->mClipRange).component2;
    uVar1 = (self_00->mClipRange).component0;
    uVar2 = (self_00->mClipRange).component1;
    value_01.component1 = (float)uVar2;
    value_01.component0 = (float)uVar1;
    value_01.component3 = fVar10 + (self_00->mClipRange).component3;
    UIPanel_set_clipRange_12a360c(self_00,value_01,(void *)0x0);
    self->_FirstSlide = false;
    pvVar5 = extraout_x1_00;
  }
  StoreGUI_SetupRewardedAdItems_12fa220(self,pvVar5);
  StoreGUI_UpdateRewardedAdItems_12f9490(self,false,runtimeMethod_00);
  puVar3 = PTR_DAT_029b7f98;
  if (self->ScrollContent != (void *)0x0) {
    self_01 = UnityEngine_Component_GetComponent_13ccba8
                        (self->ScrollContent,*(void **)PTR_DAT_029c0670);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar3);
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(self_01,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (self_01 == (UIStack *)0x0) goto LAB_013fe760;
      UIStack_Reposition_13042d4(self_01,(void *)0x0);
    }
    lVar6 = NativeHelper_013fe764(self);
    if (lVar6 == 0) {
      NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
      uVar8 = NativeHelper_011df2d0();
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5930);
      NativeHelper_01ffed14(uVar8,uVar9,0);
    }
    else {
      if (pcRam0000000002b9ce48 == (code *)0x0) {
        pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
      }
      uVar7 = (*pcRam0000000002b9ce48)(self);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000002b9ce58 == (code *)0x0) {
          pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
        }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9ce58)(self,lVar6);
        return;
      }
      NativeHelper_011df0c8(PTR_DAT_029baea0);
      uVar8 = NativeHelper_011df2d0();
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5920);
      NativeHelper_01f80968(uVar8,uVar9,0);
    }
    uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar8,uVar9);
  }
LAB_013fe760:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

