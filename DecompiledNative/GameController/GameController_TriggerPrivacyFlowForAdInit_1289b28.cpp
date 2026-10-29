// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void TriggerPrivacyFlowForAdInit() { }
// Ghidra address: 0138db28; ELF VA: 0x128db28; file offset: 0x1289b28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_TriggerPrivacyFlowForAdInit_1289b28(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  long *plVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined1 auVar14 [16];
  int iStack_34;
  
  puVar2 = PTR_DAT_029b8bc0;
  puVar1 = PTR_DAT_029b8078;
  if ((bRam0000000002b94cd8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba718);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bdce8);
    NativeHelper_011df0b4(PTR_DAT_029bdcf0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdcf8);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    bRam0000000002b94cd8 = 1;
  }
  plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,1);
  iStack_34 = self->_AdInitRetryCount;
  lVar8 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_34);
  if (plVar7 != (long *)0x0) {
    if ((lVar8 != 0) &&
       (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
      uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar10,0);
    }
    puVar1 = PTR_DAT_029b9638;
    if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    plVar7[4] = lVar8;
    puVar5 = PTR_DAT_029bdcf8;
    puVar3 = PTR_DAT_029bdc20;
    puVar2 = PTR_DAT_029bbd80;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar4 = PTR_DAT_029bdce8;
    puVar1 = PTR_DAT_029b8c90;
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)puVar3,*(void **)puVar5,plVar7,(void *)0x0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar2;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    uVar10 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01f80268(uVar10,self,*(undefined8 *)puVar4,0);
    plVar7 = (long *)NativeHelper_0204170c(uVar12,uVar10,0);
    lVar8 = *(long *)puVar1;
    if (plVar7 == (long *)0x0) {
      plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar11 = 0;
    }
    else {
      if (*plVar7 != lVar8) goto LAB_0138dd74;
      plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
      *plVar11 = (long)plVar7;
      if (*plVar7 != lVar8) goto LAB_0138dd74;
    }
    lVar9 = *plVar11;
    uVar10 = NativeHelper_011df2d0(lVar8);
    NativeHelper_01f80268(uVar10,self,*(undefined8 *)puVar4,0);
    plVar7 = (long *)NativeHelper_02041514(lVar9,uVar10,0);
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = 0;
    }
    else {
      lVar8 = *(long *)puVar1;
      if ((*plVar7 != lVar8) ||
         (*(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = plVar7, *plVar7 != lVar8)) {
LAB_0138dd74:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678();
      }
    }
    puVar2 = PTR_DAT_029b9758;
    puVar1 = PTR_DAT_029b7f98;
    lVar8 = *(long *)PTR_DAT_029b9758;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar2;
    }
    pvVar13 = *(void **)(*(long *)(lVar8 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar6 = UnityEngine_object_op_Inequality_250c8e4(pvVar13,(void *)0x0,(void *)0x0);
    pvVar13 = extraout_x1;
    if (bVar6) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar13 = extraout_x1_00;
      }
      if (cRam0000000002b94d36 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9758);
        cRam0000000002b94d36 = '\x01';
        pvVar13 = extraout_x1_01;
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar8 = *(long *)puVar2;
        pvVar13 = extraout_x1_02;
      }
      lVar9 = *(long *)(lVar8 + 0xb8);
      if (*(char *)(lVar9 + 0x10) != '\0') {
        if (*(int *)(lVar8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        lVar8 = *(long *)(lVar9 + 8);
        uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029ba718);
        NativeHelper_01693bd4(uVar10,self,*(undefined8 *)PTR_DAT_029bdcf0,0);
        if (lVar8 == 0) goto LAB_0138dea4;
        auVar14 = RemoteConfigManager_RefetchAndActivate_131dd20(lVar8,uVar10,1,0);
        pvVar13 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) != 0) {
          return;
        }
      }
    }
    GameController_ExecutePrivacyFlowForAdInit_128d40c(self,pvVar13);
    return;
  }
LAB_0138dea4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

