// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdatePrice() { }
// Ghidra address: 013ffcdc; ELF VA: 0x12ffcdc; file offset: 0x12fbcdc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_UpdatePrice_12fbcdc(StoreItem *self,void *runtimeMethod)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  RecordManager *pRVar11;
  UILabel *pUVar12;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000002b95076 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029c10c0);
    NativeHelper_011df0b4(PTR_DAT_029c10c8);
    NativeHelper_011df0b4(PTR_DAT_029c10d0);
    NativeHelper_011df0b4(PTR_DAT_029c10d8);
    NativeHelper_011df0b4(PTR_DAT_029c10e0);
    NativeHelper_011df0b4(PTR_DAT_029c10e8);
    NativeHelper_011df0b4(PTR_DAT_029c10f0);
    NativeHelper_011df0b4(PTR_DAT_029c10f8);
    NativeHelper_011df0b4(PTR_DAT_029c1100);
    NativeHelper_011df0b4(PTR_DAT_029c1108);
    NativeHelper_011df0b4(PTR_DAT_029c1110);
    NativeHelper_011df0b4(PTR_DAT_029c1118);
    NativeHelper_011df0b4(PTR_DAT_029c1120);
    NativeHelper_011df0b4(PTR_DAT_029c1128);
    NativeHelper_011df0b4(PTR_DAT_029c1130);
    NativeHelper_011df0b4(PTR_DAT_029c1138);
    NativeHelper_011df0b4(PTR_DAT_029c1140);
    NativeHelper_011df0b4(PTR_DAT_029c1148);
    bRam0000000002b95076 = 1;
  }
  iStack_38 = 0;
  if (self->PlayerManager == (void *)0x0) goto LAB_01400414;
  pRVar11 = self->RecordManager;
  iVar5 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  puVar4 = PTR_DAT_029c10e0;
  puVar3 = PTR_DAT_029b7fb8;
  if (pRVar11 == (RecordManager *)0x0) goto LAB_01400414;
  puVar1 = &self->field_0x20;
  iVar5 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                    (pRVar11,iVar5,(void *)(ulong)*(uint *)puVar1,(void *)0x0);
  iStack_34 = iVar5;
  uVar7 = NativeHelper_01ffa318(&iStack_34,0);
  pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar4,uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3);
  }
  UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
  if (*(int *)&self->field_0x24 - 3U < 2) {
    iStack_34 = iVar5;
    uVar7 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c10f0,uVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar3);
    }
    UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
    pUVar12 = self->ButtonLabel;
    puVar10 = (undefined8 *)PTR_DAT_029c10c8;
  }
  else if (*(int *)&self->field_0x24 == 2) {
    pUVar12 = self->ButtonLabel;
    puVar10 = (undefined8 *)PTR_DAT_029c1100;
  }
  else {
    pUVar12 = self->ButtonLabel;
    puVar10 = (undefined8 *)PTR_DAT_029c1140;
    if (*(int *)&self->field_0x20 == 0x15) {
      puVar10 = (undefined8 *)PTR_DAT_029c1118;
    }
  }
  pvVar8 = Strings_Txt_131380c((void *)*puVar10,false,(void *)0x0);
  if (pUVar12 == (UILabel *)0x0) goto LAB_01400414;
  UILabel_set_text_129fea0(pUVar12,pvVar8,(void *)0x0);
  iVar6 = *(int *)&self->field_0x24;
  if (iVar6 == 1) {
    if (self->RecordManager == (RecordManager *)0x0) goto LAB_01400414;
    iVar6 = RecordManager_GetStoreItemMaxLevel_12b4068
                      (self->RecordManager,(void *)(ulong)*(uint *)puVar1,(void *)0x0);
    if (iVar6 <= iVar5) {
      iVar6 = *(int *)&self->field_0x24;
      goto LAB_013fff74;
    }
  }
  else {
LAB_013fff74:
    if ((iVar6 != 2) && ((0 < iVar5 || (1 < iVar6 - 3U)))) {
      if (*(int *)puVar1 == 0x15) {
        if (self->PlayerManager == (void *)0x0) goto LAB_01400414;
        pRVar11 = self->RecordManager;
        iVar6 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
        if (pRVar11 == (RecordManager *)0x0) goto LAB_01400414;
        iVar6 = RecordManager_GetRecordFlagValue_12b3354(pRVar11,iVar6,(void *)0x17,(void *)0x0);
        if (iVar6 == 1) goto LAB_013fffd0;
      }
      iStack_34 = iVar5;
      uVar7 = NativeHelper_01ffa318(&iStack_34,0);
      pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c10c0,uVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
      if (self->CostLabel == (UILabel *)0x0) goto LAB_01400414;
      UnityEngine_Behaviour_set_enabled_250972c(self->CostLabel,false,(void *)0x0);
      if (self->UpgradeCoin == (UISprite *)0x0) goto LAB_01400414;
      UnityEngine_Behaviour_set_enabled_250972c(self->UpgradeCoin,false,(void *)0x0);
      if (*(int *)&self->field_0x24 == 4) {
        pUVar12 = self->ButtonLabel;
        puVar10 = (undefined8 *)PTR_DAT_029c1120;
      }
      else if (*(int *)&self->field_0x24 == 3) {
        if (self->PlayerManager == (void *)0x0) goto LAB_01400414;
        pRVar11 = self->RecordManager;
        iVar6 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
        if (pRVar11 == (RecordManager *)0x0) goto LAB_01400414;
        iVar6 = RecordManager_GetActiveCharacter_12b45a0(pRVar11,iVar6,(void *)0x0);
        switch(iVar6) {
        case 0:
          if (*(int *)puVar1 == 0xf) {
code_r0x0140036c:
            pUVar12 = self->ButtonLabel;
            puVar10 = (undefined8 *)PTR_DAT_029c10d8;
            goto LAB_01400378;
          }
          break;
        case 1:
          if (*(int *)puVar1 == 0x10) goto code_r0x0140036c;
          break;
        case 2:
          if (*(int *)puVar1 == 0x11) goto code_r0x0140036c;
          break;
        case 3:
          if (*(int *)puVar1 == 0x12) goto code_r0x0140036c;
          break;
        case 4:
          if (*(int *)puVar1 == 0x13) goto code_r0x0140036c;
          break;
        case 5:
          if (*(int *)puVar1 == 0x14) goto code_r0x0140036c;
          break;
        case 6:
          if (*(int *)puVar1 == 0x16) goto code_r0x0140036c;
          break;
        case 7:
          if (*(int *)puVar1 == 0x1c) goto code_r0x0140036c;
          break;
        case 8:
          if (*(int *)puVar1 == 0x1d) goto code_r0x0140036c;
          break;
        case 9:
          if (*(int *)puVar1 == 0x1e) goto code_r0x0140036c;
          break;
        case 10:
          if (*(int *)puVar1 == 0x1f) goto code_r0x0140036c;
          break;
        case 0xb:
          if (*(int *)puVar1 == 0x20) goto code_r0x0140036c;
          break;
        case 0xc:
          if (*(int *)puVar1 == 0x21) goto code_r0x0140036c;
          break;
        case 0xd:
          if (*(int *)puVar1 == 0x22) goto code_r0x0140036c;
          break;
        case 0xe:
          if (*(int *)puVar1 == 0x23) goto code_r0x0140036c;
          break;
        case 0xf:
          if (*(int *)puVar1 == 0x24) goto code_r0x0140036c;
        }
        pUVar12 = self->ButtonLabel;
        puVar10 = (undefined8 *)PTR_DAT_029c10e8;
      }
      else {
        pUVar12 = self->ButtonLabel;
        puVar10 = (undefined8 *)PTR_DAT_029c1108;
        if (*(int *)&self->field_0x20 == 0x15) {
          puVar10 = (undefined8 *)PTR_DAT_029c1110;
        }
      }
LAB_01400378:
      pvVar8 = Strings_Txt_131380c((void *)*puVar10,false,(void *)0x0);
      if (pUVar12 != (UILabel *)0x0) {
        UILabel_set_text_129fea0(pUVar12,pvVar8,(void *)0x0);
        if (self->UpgradeCoin != (UISprite *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c(self->UpgradeCoin,false,(void *)0x0);
          iStack_34 = iVar5;
          uVar7 = NativeHelper_01ffa318(&iStack_34,0);
          pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c1148,uVar7,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar3);
          }
          UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
          return;
        }
      }
      goto LAB_01400414;
    }
  }
LAB_013fffd0:
  puVar4 = PTR_DAT_029c1138;
  uVar2 = *(uint *)puVar1;
  iStack_34 = iVar5;
  uVar7 = NativeHelper_01ffa318(&iStack_34,0);
  pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar4,uVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3);
  }
  UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
  puVar4 = PTR_DAT_029c10f8;
  puVar3 = PTR_DAT_029c10d0;
  if (self->RecordManager != (RecordManager *)0x0) {
    iStack_38 = RecordManager_GetPriceForUpgradeType_12b3654
                          (self->RecordManager,(void *)(ulong)uVar2,iVar5,(void *)0x0);
    iStack_34 = iVar5;
    uVar7 = NativeHelper_01ffa318(&iStack_34,0);
    uVar9 = NativeHelper_01ffa318(&iStack_38,0);
    pvVar8 = (void *)NativeHelper_01e9be48
                               (*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar4,uVar9,0);
    UnityEngine_Debug_Log_24e9c20(pvVar8,(void *)0x0);
    self->Price = iStack_38;
    if (self->CostLabel != (UILabel *)0x0) {
      UnityEngine_Behaviour_set_enabled_250972c(self->CostLabel,true,(void *)0x0);
      if (self->UpgradeCoin != (UISprite *)0x0) {
        UnityEngine_Behaviour_set_enabled_250972c(self->UpgradeCoin,true,(void *)0x0);
        if ((iVar5 < 6) || (*(int *)puVar1 != 9 && 2 < *(int *)puVar1 - 5U)) {
          return;
        }
        if (self->CostLabel != (UILabel *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c(self->CostLabel,false,(void *)0x0);
          if (self->UpgradeCoin != (UISprite *)0x0) {
            UnityEngine_Behaviour_set_enabled_250972c(self->UpgradeCoin,false,(void *)0x0);
            pUVar12 = self->ButtonLabel;
            puVar10 = (undefined8 *)PTR_DAT_029c1128;
            if (iVar5 != 6) {
              puVar10 = (undefined8 *)PTR_DAT_029c1130;
            }
            pvVar8 = Strings_Txt_131380c((void *)*puVar10,false,(void *)0x0);
            if (pUVar12 != (UILabel *)0x0) {
              UILabel_set_text_129fea0(pUVar12,pvVar8,(void *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01400414:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

