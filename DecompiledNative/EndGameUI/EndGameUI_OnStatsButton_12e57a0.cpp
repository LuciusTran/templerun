// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnStatsButton() { }
// Ghidra address: 013e97a0; ELF VA: 0x12e97a0; file offset: 0x12e57a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_OnStatsButton_12e57a0(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  void *runtimeMethod_00;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *description;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  AlertView *self_00;
  undefined1 auVar12 [16];
  undefined4 auStack_44 [3];
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94fcf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde40);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029bdb88);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fcf = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029bdb88;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  pvVar8 = GameController_CheckFeatureState_128798c(*(void **)puVar1,(void *)0x0);
  puVar2 = PTR_DAT_029b8618;
  if ((int)pvVar8 == 1) {
    if (*(int *)(*(long *)PTR_DAT_029bde40 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar1 = PTR_DAT_029bffc8;
    puVar2 = PTR_DAT_029bde40;
    pvVar8 = (void *)0x0;
    if ((bRam0000000002b951d6 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029bffc8,0,0);
      NativeHelper_011df0b4(PTR_DAT_029bde40);
      NativeHelper_011df0b4(PTR_DAT_029b8bc0);
      NativeHelper_011df0b4(PTR_DAT_029b8e18);
      NativeHelper_011df0b4(PTR_DAT_029b98a8);
      bRam0000000002b951d6 = 1;
      pvVar8 = extraout_x1_00;
    }
    puVar4 = PTR_DAT_029b98a8;
    puVar3 = PTR_DAT_029b8bc0;
    self_00 = (AlertView *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar8 = extraout_x1_01;
    }
    pvVar8 = ErrorHandler_GetTitleString_13240d4(0xce6,pvVar8);
    uVar10 = ErrorHandler_GetErrorString_13241e4(0xce6,0);
    auStack_44[0] = 0xce6;
    uVar11 = NativeHelper_011df1c4(*(undefined8 *)puVar3,auStack_44);
    description = (void *)NativeHelper_01e9c258(*(undefined8 *)puVar4,uVar10,uVar11,0);
    if (self_00 != (AlertView *)0x0) {
      AlertView_ShowAlert_12cd2ec
                (self_00,pvVar8,description,*(void **)PTR_DAT_029b8e18,(void *)0x0,true,(void *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar1 = PTR_DAT_029b8078;
  lVar9 = *(long *)puVar2;
  pvVar8 = (void *)0x0;
  if ((bRam0000000002b94a0b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029bc580);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bc588);
    bRam0000000002b94a0b = 1;
  }
  plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,2);
  if (plVar6 == (long *)0x0) {
code_r0x0135c7ec:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((lVar9 != 0) &&
     (lVar7 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
code_r0x0135c7f0:
    uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar10,0);
  }
  puVar2 = PTR_DAT_029bc580;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar9;
    auVar12 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&stack0xffffffffffffffdc);
    uVar10 = auVar12._8_8_;
    lVar7 = auVar12._0_8_;
    if ((lVar7 != 0) &&
       (auVar12 = NativeHelper_011df1c0(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
       uVar10 = auVar12._8_8_, auVar12._0_8_ == 0)) goto code_r0x0135c7f0;
    puVar2 = PTR_DAT_029bc558;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      puVar1 = PTR_DAT_029b7f98;
      auVar12._8_8_ = uVar10;
      auVar12._0_8_ = *(long *)puVar2;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        auVar12 = NativeHelper_011df1bc();
      }
      Imangi_GameServices_ImangiGameServicesManager_ImangiGameServices_LogMessage_1257d90
                (auVar12._0_8_,auVar12._8_8_,pvVar8);
      plVar6 = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84(runtimeMethod_00);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(plVar6,(void *)0x0,(void *)0x0);
      if (bVar5) {
        if (plVar6 == (long *)0x0) goto code_r0x0135c7ec;
        (**(code **)(*plVar6 + 0x1e8))(plVar6,lVar9,2,*(undefined8 *)(*plVar6 + 0x1f0));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

