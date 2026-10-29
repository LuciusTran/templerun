// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnClick() { }
// Ghidra address: 014010b0; ELF VA: 0x13010b0; file offset: 0x12fd0b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_OnClick_12fd0b0(StoreItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  StoreItem *extraout_x0;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_00;
  RecordManager *pRVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_34;
  StoreItem *self_00;
  
  if ((bRam0000000002b95079 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029c13e8);
    NativeHelper_011df0b4(PTR_DAT_029c13f0);
    NativeHelper_011df0b4(PTR_DAT_029c13f8);
    bRam0000000002b95079 = 1;
  }
  if (self->PlayerManager != (void *)0x0) {
    pRVar11 = self->RecordManager;
    iVar6 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    puVar4 = PTR_DAT_029c13f8;
    puVar3 = PTR_DAT_029c13f0;
    puVar2 = PTR_DAT_029c13e8;
    puVar1 = PTR_DAT_029b7fb8;
    if (pRVar11 == (RecordManager *)0x0) goto LAB_014012b0;
    iStack_34 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                          (pRVar11,iVar6,(void *)(ulong)*(uint *)&self->field_0x20,(void *)0x0);
    uStack_58 = *(undefined8 *)puVar2;
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = *(undefined4 *)&self->field_0x24;
    uVar8 = NativeHelper_02031f7c(&uStack_58,0);
    uVar9 = NativeHelper_01ffa318(&iStack_34,0);
    runtimeMethod_00 = *(void **)puVar3;
    pvVar10 = (void *)NativeHelper_01e9be48(*(undefined8 *)puVar4,uVar8,runtimeMethod_00,uVar9,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    UnityEngine_Debug_Log_24e9c20(pvVar10,(void *)0x0);
    iVar5 = iStack_34;
    iVar6 = *(int *)&self->field_0x24;
    self_00 = extraout_x0;
    pvVar10 = extraout_x1;
    if (iVar6 == 1) {
      if (self->RecordManager == (RecordManager *)0x0) goto LAB_014012b0;
      runtimeMethod_00 = (void *)0x0;
      uVar7 = RecordManager_GetStoreItemMaxLevel_12b4068
                        (self->RecordManager,(void *)(ulong)*(uint *)&self->field_0x20,(void *)0x0);
      self_00 = (StoreItem *)(ulong)uVar7;
      pvVar10 = extraout_x1_00;
      if (iVar5 < (int)uVar7) goto LAB_01401208;
      iVar6 = *(int *)&self->field_0x24;
    }
    if (iVar6 - 2U < 3) {
LAB_01401208:
      if ((*(int *)&self->field_0x24 == 3) && (0 < iStack_34)) {
        StoreItem_ActivateCharacter_12fd2b4
                  (self,(void *)(ulong)*(uint *)&self->field_0x20,runtimeMethod_00);
      }
      else if ((*(int *)&self->field_0x24 == 4) && (0 < iStack_34)) {
        StoreItem_GrabWallpaper_12fd454
                  (self_00,(void *)(ulong)*(uint *)&self->field_0x20,runtimeMethod_00);
      }
      else {
        StoreItem_BuyItem_12fd520(self,pvVar10);
      }
      return;
    }
    if (*(int *)&self->field_0x20 != 0x15) {
      return;
    }
    if (self->PlayerManager != (void *)0x0) {
      pRVar11 = self->RecordManager;
      iVar6 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      if (pRVar11 != (RecordManager *)0x0) {
        runtimeMethod_00 = (void *)0x17;
        uVar7 = RecordManager_GetRecordFlagValue_12b3354(pRVar11,iVar6,(void *)0x17,(void *)0x0);
        self_00 = (StoreItem *)(ulong)uVar7;
        pvVar10 = extraout_x1_01;
        if (uVar7 != 1) {
          return;
        }
        goto LAB_01401208;
      }
    }
  }
LAB_014012b0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

