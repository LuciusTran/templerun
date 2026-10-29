// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void BuyItem() { }
// Ghidra address: 01401520; ELF VA: 0x1301520; file offset: 0x12fd520
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Type propagation algorithm not settling */

void StoreItem_BuyItem_12fd520(StoreItem *self,void *runtimeMethod)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int playerId;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *leftButtonAction;
  void *rightButtonAction;
  StoreItem *extraout_x0;
  StoreItem *extraout_x0_00;
  StoreItem *extraout_x0_01;
  StoreItem *extraout_x0_02;
  StoreItem *extraout_x0_03;
  StoreItem *self_00;
  StoreItem *extraout_x0_04;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  undefined8 *puVar9;
  RecordManager *pRVar10;
  AlertView *pAVar11;
  RecordManager **ppRVar12;
  undefined8 uVar13;
  int iStack_54;
  
  if ((bRam0000000002b9507b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029c0f20);
    NativeHelper_011df0b4(PTR_DAT_029c1410);
    NativeHelper_011df0b4(PTR_DAT_029c0fd8);
    NativeHelper_011df0b4(PTR_DAT_029c1418);
    NativeHelper_011df0b4(PTR_DAT_029c1420);
    NativeHelper_011df0b4(PTR_DAT_029c1428);
    NativeHelper_011df0b4(PTR_DAT_029c1160);
    NativeHelper_011df0b4(PTR_DAT_029c1430);
    NativeHelper_011df0b4(PTR_DAT_029c1438);
    NativeHelper_011df0b4(PTR_DAT_029c1440);
    NativeHelper_011df0b4(PTR_DAT_029c1170);
    NativeHelper_011df0b4(PTR_DAT_029c1448);
    NativeHelper_011df0b4(PTR_DAT_029c1450);
    NativeHelper_011df0b4(PTR_DAT_029c0a90);
    NativeHelper_011df0b4(PTR_DAT_029c1458);
    NativeHelper_011df0b4(PTR_DAT_029c1460);
    NativeHelper_011df0b4(PTR_DAT_029c0aa0);
    NativeHelper_011df0b4(PTR_DAT_029c1468);
    NativeHelper_011df0b4(PTR_DAT_029c1200);
    NativeHelper_011df0b4(PTR_DAT_029c1470);
    NativeHelper_011df0b4(PTR_DAT_029be388);
    NativeHelper_011df0b4(PTR_DAT_029c1478);
    NativeHelper_011df0b4(PTR_DAT_029bbeb0);
    NativeHelper_011df0b4(PTR_DAT_029c1480);
    NativeHelper_011df0b4(PTR_DAT_029c1488);
    NativeHelper_011df0b4(PTR_DAT_029c1490);
    NativeHelper_011df0b4(PTR_DAT_029c1498);
    NativeHelper_011df0b4(PTR_DAT_029bf0e0);
    NativeHelper_011df0b4(PTR_DAT_029c14a0);
    NativeHelper_011df0b4(PTR_DAT_029c14a8);
    NativeHelper_011df0b4(PTR_DAT_029c14b0);
    NativeHelper_011df0b4(PTR_DAT_029c14b8);
    NativeHelper_011df0b4(PTR_DAT_029be378);
    NativeHelper_011df0b4(PTR_DAT_029c14c0);
    NativeHelper_011df0b4(PTR_DAT_029c14c8);
    NativeHelper_011df0b4(PTR_DAT_029c14d0);
    NativeHelper_011df0b4(PTR_DAT_029c14d8);
    NativeHelper_011df0b4(PTR_DAT_029c14e0);
    NativeHelper_011df0b4(PTR_DAT_029c14e8);
    NativeHelper_011df0b4(PTR_DAT_029c14f0);
    NativeHelper_011df0b4(PTR_DAT_029bf0b8);
    NativeHelper_011df0b4(PTR_DAT_029c14f8);
    NativeHelper_011df0b4(PTR_DAT_029be3a0);
    NativeHelper_011df0b4(PTR_DAT_029c1500);
    NativeHelper_011df0b4(PTR_DAT_029c1508);
    NativeHelper_011df0b4(PTR_DAT_029c1510);
    NativeHelper_011df0b4(PTR_DAT_029c1518);
    NativeHelper_011df0b4(PTR_DAT_029c1520);
    NativeHelper_011df0b4(PTR_DAT_029c1528);
    NativeHelper_011df0b4(PTR_DAT_029c08f8);
    NativeHelper_011df0b4(PTR_DAT_029c1530);
    NativeHelper_011df0b4(PTR_DAT_029c1538);
    NativeHelper_011df0b4(PTR_DAT_029be370);
    NativeHelper_011df0b4(PTR_DAT_029c1540);
    NativeHelper_011df0b4(PTR_DAT_029c1548);
    NativeHelper_011df0b4(PTR_DAT_029c00a0);
    NativeHelper_011df0b4(PTR_DAT_029c0af8);
    NativeHelper_011df0b4(PTR_DAT_029c1550);
    NativeHelper_011df0b4(PTR_DAT_029c1558);
    NativeHelper_011df0b4(PTR_DAT_029c1560);
    NativeHelper_011df0b4(PTR_DAT_029c0900);
    NativeHelper_011df0b4(PTR_DAT_029c1568);
    bRam0000000002b9507b = 1;
  }
  iStack_54 = 0;
  ppRVar12 = &self->RecordManager;
  pRVar10 = *ppRVar12;
  if ((self->PlayerManager == (void *)0x0) ||
     (iVar3 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0),
     pRVar10 == (RecordManager *)0x0)) goto LAB_01402420;
  iVar4 = RecordManager_GetCoinCount_12b4150(pRVar10,iVar3,(void *)0x0);
  iVar3 = self->Price;
  if (iVar4 < iVar3) {
    pAVar11 = self->AlertView;
    pvVar5 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1470,false,(void *)0x0);
    pvVar6 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1530,false,(void *)0x0);
    pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0900,false,(void *)0x0);
    pvVar8 = Strings_Txt_131380c(*(void **)PTR_DAT_029c08f8,false,(void *)0x0);
    puVar2 = PTR_DAT_029b8c90;
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8);
    leftButtonAction = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(leftButtonAction,uVar13,*(undefined8 *)PTR_DAT_029c1410,0);
    rightButtonAction = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    NativeHelper_01f80268(rightButtonAction,self,*(undefined8 *)PTR_DAT_029c1418,0);
    if (pAVar11 != (AlertView *)0x0) {
      AlertView_ShowAlert_12ce598
                (pAVar11,pvVar5,pvVar6,pvVar7,pvVar8,leftButtonAction,rightButtonAction,true,
                 (void *)0x0);
      return;
    }
    goto LAB_01402420;
  }
  if (self->PlayerManager == (void *)0x0) goto LAB_01402420;
  pRVar10 = self->RecordManager;
  playerId = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
  RecordManager_SetCoinCount_12b4168(pRVar10,playerId,iVar4 - iVar3,(void *)0x0);
  if (self->PlayerManager == (void *)0x0) goto LAB_01402420;
  pRVar10 = self->RecordManager;
  iVar3 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
  iVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                    (pRVar10,iVar3,(void *)(ulong)*(uint *)&self->field_0x20,(void *)0x0);
  if (*(int *)&self->field_0x20 - 5U < 3) {
    if (iVar3 < 7) goto LAB_01401a84;
LAB_01401a2c:
    if (self->PlayerManager == (void *)0x0) goto LAB_01402420;
    pRVar10 = self->RecordManager;
    iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SetPlayerLevelForUpgradeType_12b3198
              (pRVar10,iVar4,(void *)(ulong)*(uint *)&self->field_0x20,6,(void *)0x0);
    iVar4 = *(int *)&self->field_0x20;
    puVar9 = (undefined8 *)PTR_DAT_029c1528;
    if ((((iVar4 != 5) && (puVar9 = (undefined8 *)PTR_DAT_029c1498, iVar4 != 6)) &&
        (puVar9 = (undefined8 *)PTR_DAT_029c14a8, iVar4 != 7)) &&
       (puVar9 = (undefined8 *)PTR_DAT_029c14b8, iVar4 != 9)) {
      puVar9 = (undefined8 *)PTR_DAT_029bbeb0;
    }
    pvVar5 = (void *)*puVar9;
    pRVar10 = *ppRVar12;
    if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
LAB_01401b68:
    RecordManager_SendSelectContentEvent_12ae59c
              (pRVar10,pvVar5,*(void **)PTR_DAT_029c1420,(void *)0x0);
  }
  else {
    if ((6 < iVar3) && (*(int *)&self->field_0x20 == 9)) goto LAB_01401a2c;
LAB_01401a84:
    if (self->PlayerManager == (void *)0x0) goto LAB_01402420;
    pRVar10 = self->RecordManager;
    iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SetPlayerLevelForUpgradeType_12b3198
              (pRVar10,iVar4,(void *)(ulong)*(uint *)&self->field_0x20,iVar3 + 1,(void *)0x0);
    iVar4 = *(int *)&self->field_0x20;
    if (iVar4 == 7) {
      puVar9 = (undefined8 *)PTR_DAT_029c1540;
      if (iVar3 == 6) goto LAB_01401b5c;
    }
    else if (iVar4 - 5U < 2) {
      if (iVar3 == 6) {
        puVar9 = (undefined8 *)PTR_DAT_029c14c8;
        if (iVar4 != 5) {
          puVar9 = (undefined8 *)PTR_DAT_029c1468;
        }
LAB_01401b5c:
        pRVar10 = *ppRVar12;
        if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
        pvVar5 = (void *)*puVar9;
        goto LAB_01401b68;
      }
    }
    else if ((iVar3 == 6) && (puVar9 = (undefined8 *)PTR_DAT_029c1568, iVar4 == 9))
    goto LAB_01401b5c;
  }
  NativeHelper_0260e6e8(self,*(undefined8 *)PTR_DAT_029c1440,0);
  if (self->RecordManager == (RecordManager *)0x0) goto LAB_01402420;
  RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
  iVar4 = self->Price;
  pvVar5 = extraout_x1;
  if (iVar4 < 1) goto LAB_01401fd4;
  iStack_54 = iVar3 + 1;
  switch(*(undefined4 *)&self->field_0x20) {
  case 0:
    if (*ppRVar12 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SendSpendVirtualCurrencyEvent_12adf80
              (*ppRVar12,iVar4,*(void **)PTR_DAT_029bf0b8,*(void **)PTR_DAT_029c1478,(void *)0x0);
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029be370;
    goto joined_r0x01401ccc;
  case 1:
    if (*ppRVar12 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SendSpendVirtualCurrencyEvent_12adf80
              (*ppRVar12,iVar4,*(void **)PTR_DAT_029bf0b8,*(void **)PTR_DAT_029c1428,(void *)0x0);
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029be388;
    goto joined_r0x01401ccc;
  case 2:
    if (*ppRVar12 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SendSpendVirtualCurrencyEvent_12adf80
              (*ppRVar12,iVar4,*(void **)PTR_DAT_029bf0b8,*(void **)PTR_DAT_029c1518,(void *)0x0);
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029be3a0;
    goto joined_r0x01401ccc;
  case 3:
    if (*ppRVar12 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SendSpendVirtualCurrencyEvent_12adf80
              (*ppRVar12,iVar4,*(void **)PTR_DAT_029bf0b8,*(void **)PTR_DAT_029c1438,(void *)0x0);
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029be378;
joined_r0x01401ccc:
    if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
    RecordManager_SendEarnVirtualCurrencyEvent_12add1c
              (pRVar10,1,(void *)*puVar9,*(void **)PTR_DAT_029bf0e0,(void *)0x0);
    pvVar5 = extraout_x1_00;
  default:
    goto LAB_01401fd4;
  case 5:
    pRVar10 = *ppRVar12;
    uVar13 = NativeHelper_01ffa318(&iStack_54,0);
    puVar9 = (undefined8 *)PTR_DAT_029c14f0;
    goto code_r0x01401d80;
  case 6:
    pRVar10 = *ppRVar12;
    uVar13 = NativeHelper_01ffa318(&iStack_54,0);
    puVar9 = (undefined8 *)PTR_DAT_029c1460;
    goto code_r0x01401d80;
  case 7:
    pRVar10 = *ppRVar12;
    uVar13 = NativeHelper_01ffa318(&iStack_54,0);
    puVar9 = (undefined8 *)PTR_DAT_029c1538;
    goto code_r0x01401d80;
  case 8:
    pRVar10 = *ppRVar12;
    uVar13 = NativeHelper_01ffa318(&iStack_54,0);
    puVar9 = (undefined8 *)PTR_DAT_029c14c0;
    goto code_r0x01401d80;
  case 9:
    pRVar10 = *ppRVar12;
    uVar13 = NativeHelper_01ffa318(&iStack_54,0);
    puVar9 = (undefined8 *)PTR_DAT_029c1560;
code_r0x01401d80:
    pvVar5 = (void *)NativeHelper_01e92d00(*puVar9,uVar13,0);
    if (pRVar10 == (RecordManager *)0x0) goto LAB_01402420;
    pvVar6 = *(void **)PTR_DAT_029bf0b8;
    goto code_r0x01401fc8;
  case 0xf:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14a0;
    break;
  case 0x10:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1558;
    break;
  case 0x11:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1490;
    break;
  case 0x12:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1430;
    break;
  case 0x13:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1480;
    break;
  case 0x14:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1500;
    break;
  case 0x16:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1488;
    break;
  case 0x17:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1508;
    break;
  case 0x18:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1550;
    break;
  case 0x19:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14d8;
    break;
  case 0x1c:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1458;
    break;
  case 0x1d:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14b0;
    break;
  case 0x1e:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14e8;
    break;
  case 0x1f:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1510;
    break;
  case 0x20:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14e0;
    break;
  case 0x21:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1520;
    break;
  case 0x22:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14d0;
    break;
  case 0x23:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c14f8;
    break;
  case 0x24:
    pRVar10 = *ppRVar12;
    puVar9 = (undefined8 *)PTR_DAT_029c1448;
  }
  if (pRVar10 != (RecordManager *)0x0) {
    pvVar6 = *(void **)PTR_DAT_029bf0b8;
    pvVar5 = (void *)*puVar9;
code_r0x01401fc8:
    RecordManager_SendSpendVirtualCurrencyEvent_12adf80(pRVar10,iVar4,pvVar6,pvVar5,(void *)0x0);
    pvVar5 = extraout_x1_01;
LAB_01401fd4:
    *(undefined4 *)&self->LastType = 0x25;
    *(undefined8 *)&self->LastPrice = 0xffffffff;
    StoreItem_Configure_12fb958(self,pvVar5);
    if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) != (AudioManager *)0x0)
    {
      pvVar5 = (void *)0x0;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x5,1.0
                 ,(void *)0x0);
      puVar2 = PTR_DAT_029c0fd8;
      iVar4 = *(int *)&self->field_0x20;
      self_00 = extraout_x0;
      plVar1 = (long *)PTR_DAT_029c0fd8;
      if (iVar4 == 0 && iVar3 == 0) {
        if ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8) == (BasePanel *)0x0)
        goto LAB_01402420;
        BasePanel_UnhookBannerAdEvents_12dfc20
                  ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8),(void *)0x0);
        pAVar11 = self->AlertView;
        pvVar6 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0aa0,false,(void *)0x0);
        pvVar5 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1160,false,(void *)0x0);
        pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c00a0,false,(void *)0x0);
        uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
        NativeHelper_01f80268(pvVar8,uVar13,*(undefined8 *)PTR_DAT_029c0f20,0);
        if (pAVar11 == (AlertView *)0x0) goto LAB_01402420;
        AlertView_ShowAlert_12cd2ec(pAVar11,pvVar6,pvVar5,pvVar7,pvVar8,true,(void *)0x0);
        iVar4 = *(int *)&self->field_0x20;
        self_00 = extraout_x0_00;
        plVar1 = (long *)PTR_DAT_029c0fd8;
      }
      PTR_DAT_029c0fd8 = (undefined *)plVar1;
      if ((iVar3 == 0) && (iVar4 == 3)) {
        if ((BasePanel *)**(undefined8 **)(*plVar1 + 0xb8) == (BasePanel *)0x0) goto LAB_01402420;
        BasePanel_UnhookBannerAdEvents_12dfc20
                  ((BasePanel *)**(undefined8 **)(*plVar1 + 0xb8),(void *)0x0);
        pAVar11 = self->AlertView;
        pvVar6 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0a90,false,(void *)0x0);
        pvVar5 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1548,false,(void *)0x0);
        pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c00a0,false,(void *)0x0);
        uVar13 = **(undefined8 **)(*plVar1 + 0xb8);
        pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
        NativeHelper_01f80268(pvVar8,uVar13,*(undefined8 *)PTR_DAT_029c0f20,0);
        if (pAVar11 == (AlertView *)0x0) goto LAB_01402420;
        AlertView_ShowAlert_12cd2ec(pAVar11,pvVar6,pvVar5,pvVar7,pvVar8,true,(void *)0x0);
        iVar4 = *(int *)&self->field_0x20;
        self_00 = extraout_x0_01;
      }
      puVar2 = PTR_DAT_029c0fd8;
      if ((iVar3 == 0) && (iVar4 == 1)) {
        if ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8) == (BasePanel *)0x0)
        goto LAB_01402420;
        BasePanel_UnhookBannerAdEvents_12dfc20
                  ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8),(void *)0x0);
        pAVar11 = self->AlertView;
        pvVar6 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0af8,false,(void *)0x0);
        pvVar5 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1170,false,(void *)0x0);
        pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c00a0,false,(void *)0x0);
        uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
        NativeHelper_01f80268(pvVar8,uVar13,*(undefined8 *)PTR_DAT_029c0f20,0);
        if (pAVar11 == (AlertView *)0x0) goto LAB_01402420;
        AlertView_ShowAlert_12cd2ec(pAVar11,pvVar6,pvVar5,pvVar7,pvVar8,true,(void *)0x0);
        iVar4 = *(int *)&self->field_0x20;
        self_00 = extraout_x0_02;
      }
      puVar2 = PTR_DAT_029c0fd8;
      if ((iVar3 != 0) || (iVar4 != 2)) {
LAB_014023d8:
        iVar3 = *(int *)&self->field_0x24;
        if (iVar3 == 3) {
          StoreItem_ActivateCharacter_12fd2b4(self,(void *)(ulong)*(uint *)&self->field_0x20,pvVar5)
          ;
          iVar3 = *(int *)&self->field_0x24;
          self_00 = extraout_x0_04;
        }
        if (iVar3 == 4) {
          StoreItem_GrabWallpaper_12fd454(self_00,(void *)(ulong)*(uint *)&self->field_0x20,pvVar5);
        }
        return;
      }
      if ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8) != (BasePanel *)0x0) {
        BasePanel_UnhookBannerAdEvents_12dfc20
                  ((BasePanel *)**(undefined8 **)(*(long *)PTR_DAT_029c0fd8 + 0xb8),(void *)0x0);
        pAVar11 = self->AlertView;
        pvVar6 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1450,false,(void *)0x0);
        pvVar5 = Strings_Txt_131380c(*(void **)PTR_DAT_029c1200,false,(void *)0x0);
        pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c00a0,false,(void *)0x0);
        uVar13 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
        pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
        NativeHelper_01f80268(pvVar8,uVar13,*(undefined8 *)PTR_DAT_029c0f20,0);
        if (pAVar11 != (AlertView *)0x0) {
          AlertView_ShowAlert_12cd2ec(pAVar11,pvVar6,pvVar5,pvVar7,pvVar8,true,(void *)0x0);
          self_00 = extraout_x0_03;
          goto LAB_014023d8;
        }
      }
    }
  }
LAB_01402420:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

