// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnApplicationPause(bool paused) { }
// Ghidra address: 0139316c; ELF VA: 0x129316c; file offset: 0x128f16c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_OnApplicationPause_128f16c(GameController *self,bool paused,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  PauseMenu *pPVar5;
  AppInstallStatus *inAppInstallStatus;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  void *pvVar13;
  RecordManager *self_00;
  ulong uVar14;
  undefined8 uStack_28;
  
  if ((bRam0000000002b94ce6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029bdf00);
    bRam0000000002b94ce6 = 1;
  }
  puVar2 = PTR_DAT_029bdbe8;
  puVar1 = PTR_DAT_029b7f98;
  if (paused) {
    if ((self->IsGameStarted == false) || (self->IsGameOver != false)) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    SavedGame_SaveGame_13200a0(false,*(void **)PTR_DAT_029bdf00,0x347,(void *)0x0);
    puVar1 = PTR_DAT_029b7f98;
    pPVar5 = self->PauseGameGUI;
    if (pPVar5 != (PauseMenu *)0x0) {
      if ((bRam0000000002b94f9a & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
        bRam0000000002b94f9a = 1;
      }
      (**(code **)(*(long *)pPVar5 + 0x1a8))(pPVar5,0,*(undefined8 *)(*(long *)pPVar5 + 0x1b0));
      pvVar13 = *(void **)&pPVar5->field_0x30;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar13,(void *)0x0,(void *)0x0);
      puVar1 = PTR_DAT_029bdbe8;
      if (!bVar3) {
        return;
      }
      lVar6 = *(long *)&pPVar5->field_0x30;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((bRam0000000002b95097 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
        bRam0000000002b95097 = 1;
      }
      lVar6 = NativeHelper_0260e1e4(lVar6,0);
      lVar12 = *(long *)puVar1;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar12);
        lVar12 = *(long *)puVar1;
      }
      self_00 = (RecordManager *)**(undefined8 **)(lVar12 + 0xb8);
      pvVar13 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if (((pvVar13 != (void *)0x0) &&
          (iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar13,(void *)0x0),
          self_00 != (RecordManager *)0x0)) &&
         (bVar3 = RecordManager_GetNoAds_12b479c(self_00,iVar4,(void *)0x0), lVar6 != 0)) {
        if (pcRam0000000002b9cda0 == (code *)0x0) {
          pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
        }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9cda0)(lVar6,~bVar3 & 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
LAB_013932e8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  lVar6 = *(long *)PTR_DAT_029bdbe8;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
  }
  pvVar13 = (void *)**(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar13,(void *)0x0,(void *)0x0);
  if (bVar3) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    if ((RecordManager *)**(undefined8 **)(lVar6 + 0xb8) == (RecordManager *)0x0) goto LAB_013932e8;
    inAppInstallStatus =
         RecordManager_UpdateAppInstallStatus_12b1074
                   ((RecordManager *)**(undefined8 **)(lVar6 + 0xb8),(void *)0x0);
    TRAnalyticsHelper_UpdateDaysSinceInstall_12b99b0(inAppInstallStatus,(void *)0x0);
  }
  if (self->IsGameStarted == false) {
    return;
  }
  if (self->IsGameOver != false) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar1 = PTR_DAT_029bdef8;
  if ((bRam0000000002b951af & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    bRam0000000002b951af = 1;
  }
  pvVar13 = *(void **)puVar1;
  if (*(int *)((long)pvVar13 + 0xe0) == 0) {
    pvVar13 = (void *)NativeHelper_011df1bc();
  }
  pvVar13 = SavedGame_SavedFilePath_131fe7c(pvVar13);
  if ((bRam0000000002b97d85 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8e00,0);
    bRam0000000002b97d85 = 1;
  }
  if (pvVar13 == (void *)0x0) {
    NativeHelper_011df0c8(PTR_DAT_029c2bf8);
    uVar7 = NativeHelper_011df2d0();
    uVar9 = NativeHelper_011df0c8(PTR_DAT_029cf570);
    NativeHelper_01f79f9c(uVar7,uVar9,0);
    uVar9 = NativeHelper_011df0c8(PTR_DAT_029cf800);
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,uVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_029b8e00 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar7 = NativeHelper_01f933b4(pvVar13,0);
  puVar1 = PTR_DAT_029c5bf0;
  if ((bRam0000000002b97d9a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c5be8);
    NativeHelper_011df0b4(PTR_DAT_029c5bf0);
    bRam0000000002b97d9a = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  iVar4 = func_0x01e7f700(uVar7,0);
  if (-1 < iVar4) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar8 = func_0x01e7e974(0);
  iVar4 = (int)uVar8;
  if (iVar4 == 0x1002d) {
    return;
  }
  if (iVar4 != 0x10048) {
    uVar14 = uVar8;
    if (iVar4 == 0x1001f) {
      uVar8 = func_0x01e7f8b0(0x10002,0);
      uVar14 = uVar8;
    }
    goto code_r0x01f66750;
  }
  if (*(int *)(*(long *)PTR_DAT_029c5be8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  lVar6 = func_0x01f5d0dc(uVar7);
  if (cRam0000000002b96171 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029c5c18);
    cRam0000000002b96171 = '\x01';
    if (lVar6 != 0) goto code_r0x01f666b0;
code_r0x01f666dc:
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    if (lVar6 == 0) goto code_r0x01f666dc;
code_r0x01f666b0:
    uVar9 = NativeHelper_01e9a0c0(lVar6,0);
    uVar11 = *(undefined4 *)(lVar6 + 0x10);
  }
  uVar10 = func_0x01f68ab0(uVar9,uVar11,0x8000,&uStack_28);
  uVar14 = 0x10048;
  if (((uVar10 & 1) == 0) && ((int)uStack_28 == 0x1002d)) {
    return;
  }
code_r0x01f66750:
  uVar7 = func_0x01e7e410(uVar8 & 0xffffffff00000000 | uVar14 & 0xffffffff,uVar7,0,0);
  uVar9 = NativeHelper_011df0c8(PTR_DAT_029cf808);
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df1ac(uVar7,uVar9);
}

