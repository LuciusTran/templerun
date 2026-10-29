// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateDescription() { }
// Ghidra address: 01400418; ELF VA: 0x1300418; file offset: 0x12fc418
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_UpdateDescription_12fc418(StoreItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *value;
  undefined8 uVar6;
  undefined8 *puVar7;
  RecordManager *pRVar8;
  UILabel *self_00;
  int iStack_38;
  uint uStack_34;
  
  if ((bRam0000000002b95077 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029c1150);
    NativeHelper_011df0b4(PTR_DAT_029c1158);
    NativeHelper_011df0b4(PTR_DAT_029c1160);
    NativeHelper_011df0b4(PTR_DAT_029c1168);
    NativeHelper_011df0b4(PTR_DAT_029c1170);
    NativeHelper_011df0b4(PTR_DAT_029c1178);
    NativeHelper_011df0b4(PTR_DAT_029c1180);
    NativeHelper_011df0b4(PTR_DAT_029c1188);
    NativeHelper_011df0b4(PTR_DAT_029c1190);
    NativeHelper_011df0b4(PTR_DAT_029c1198);
    NativeHelper_011df0b4(PTR_DAT_029c11a0);
    NativeHelper_011df0b4(PTR_DAT_029c11a8);
    NativeHelper_011df0b4(PTR_DAT_029c11b0);
    NativeHelper_011df0b4(PTR_DAT_029c11b8);
    NativeHelper_011df0b4(PTR_DAT_029c11c0);
    NativeHelper_011df0b4(PTR_DAT_029c11c8);
    NativeHelper_011df0b4(PTR_DAT_029c11d0);
    NativeHelper_011df0b4(PTR_DAT_029c11d8);
    NativeHelper_011df0b4(PTR_DAT_029c11e0);
    NativeHelper_011df0b4(PTR_DAT_029c11e8);
    NativeHelper_011df0b4(PTR_DAT_029c11f0);
    NativeHelper_011df0b4(PTR_DAT_029c11f8);
    NativeHelper_011df0b4(PTR_DAT_029c1200);
    NativeHelper_011df0b4(PTR_DAT_029c1208);
    NativeHelper_011df0b4(PTR_DAT_029c1210);
    NativeHelper_011df0b4(PTR_DAT_029c1218);
    NativeHelper_011df0b4(PTR_DAT_029c1220);
    NativeHelper_011df0b4(PTR_DAT_029c1228);
    NativeHelper_011df0b4(PTR_DAT_029c1230);
    NativeHelper_011df0b4(PTR_DAT_029c1238);
    NativeHelper_011df0b4(PTR_DAT_029c1240);
    NativeHelper_011df0b4(PTR_DAT_029c1248);
    NativeHelper_011df0b4(PTR_DAT_029c1250);
    NativeHelper_011df0b4(PTR_DAT_029c1258);
    NativeHelper_011df0b4(PTR_DAT_029c1260);
    NativeHelper_011df0b4(PTR_DAT_029c1268);
    NativeHelper_011df0b4(PTR_DAT_029c1270);
    NativeHelper_011df0b4(PTR_DAT_029c1278);
    NativeHelper_011df0b4(PTR_DAT_029c1280);
    NativeHelper_011df0b4(PTR_DAT_029c1288);
    NativeHelper_011df0b4(PTR_DAT_029c1290);
    NativeHelper_011df0b4(PTR_DAT_029c1298);
    NativeHelper_011df0b4(PTR_DAT_029c12a0);
    NativeHelper_011df0b4(PTR_DAT_029c12a8);
    NativeHelper_011df0b4(PTR_DAT_029c12b0);
    NativeHelper_011df0b4(PTR_DAT_029c12b8);
    NativeHelper_011df0b4(PTR_DAT_029c12c0);
    NativeHelper_011df0b4(PTR_DAT_029c12c8);
    NativeHelper_011df0b4(PTR_DAT_029c12d0);
    NativeHelper_011df0b4(PTR_DAT_029c12d8);
    NativeHelper_011df0b4(PTR_DAT_029c12e0);
    NativeHelper_011df0b4(PTR_DAT_029c12e8);
    NativeHelper_011df0b4(PTR_DAT_029c12f0);
    NativeHelper_011df0b4(PTR_DAT_029c12f8);
    NativeHelper_011df0b4(PTR_DAT_029c1300);
    NativeHelper_011df0b4(PTR_DAT_029c1308);
    NativeHelper_011df0b4(PTR_DAT_029c1310);
    NativeHelper_011df0b4(PTR_DAT_029c1318);
    NativeHelper_011df0b4(PTR_DAT_029c1320);
    NativeHelper_011df0b4(PTR_DAT_029c1328);
    NativeHelper_011df0b4(PTR_DAT_029c1330);
    NativeHelper_011df0b4(PTR_DAT_029c1338);
    NativeHelper_011df0b4(PTR_DAT_029c1340);
    NativeHelper_011df0b4(PTR_DAT_029c1348);
    NativeHelper_011df0b4(PTR_DAT_029c1350);
    NativeHelper_011df0b4(PTR_DAT_029c1358);
    NativeHelper_011df0b4(PTR_DAT_029c1360);
    NativeHelper_011df0b4(PTR_DAT_029c1368);
    NativeHelper_011df0b4(PTR_DAT_029c1370);
    NativeHelper_011df0b4(PTR_DAT_029c1378);
    NativeHelper_011df0b4(PTR_DAT_029c1380);
    NativeHelper_011df0b4(PTR_DAT_029c1388);
    NativeHelper_011df0b4(PTR_DAT_029c1390);
    NativeHelper_011df0b4(PTR_DAT_029c1398);
    bRam0000000002b95077 = 1;
  }
  if (self->PlayerManager == (void *)0x0) goto LAB_01400de4;
  pRVar8 = self->RecordManager;
  iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  puVar1 = PTR_DAT_029c1248;
  if (pRVar8 == (RecordManager *)0x0) goto LAB_01400de4;
  uVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                    (pRVar8,iVar2,(void *)(ulong)*(uint *)&self->field_0x20,(void *)0x0);
  uStack_34 = uVar3;
  pvVar5 = Strings_Txt_131380c(*(void **)puVar1,false,(void *)0x0);
  switch(*(undefined4 *)&self->field_0x20) {
  case 0:
    puVar7 = (undefined8 *)PTR_DAT_029c1198;
    goto code_r0x01400874;
  case 1:
    puVar7 = (undefined8 *)PTR_DAT_029c1170;
    goto code_r0x01400874;
  case 2:
    puVar7 = (undefined8 *)PTR_DAT_029c1200;
    goto code_r0x01400874;
  case 3:
    puVar7 = (undefined8 *)PTR_DAT_029c1160;
code_r0x01400874:
    pvVar5 = Strings_Txt_131380c((void *)*puVar7,false,(void *)0x0);
    self_00 = self->CounterLabel;
    value = (void *)NativeHelper_01ffa318(&uStack_34,0);
    if (self_00 == (UILabel *)0x0) goto LAB_01400de4;
    UILabel_set_text_129fea0(self_00,value,(void *)0x0);
  default:
    goto LAB_01400dbc;
  case 5:
    switch(uVar3) {
    case 0:
      puVar7 = (undefined8 *)PTR_DAT_029c11b8;
      break;
    case 1:
      puVar7 = (undefined8 *)PTR_DAT_029c1368;
      break;
    case 2:
      puVar7 = (undefined8 *)PTR_DAT_029c1290;
      break;
    case 3:
      puVar7 = (undefined8 *)PTR_DAT_029c1208;
      break;
    case 4:
      puVar7 = (undefined8 *)PTR_DAT_029c1178;
      break;
    case 5:
      puVar7 = (undefined8 *)PTR_DAT_029c1308;
      break;
    case 6:
      puVar7 = (undefined8 *)PTR_DAT_029c12a0;
      break;
    case 7:
      puVar7 = (undefined8 *)PTR_DAT_029c11f8;
      break;
    default:
      goto LAB_01400dbc;
    }
    break;
  case 6:
    switch(uVar3) {
    case 0:
      puVar7 = (undefined8 *)PTR_DAT_029c1378;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      puVar7 = (undefined8 *)PTR_DAT_029c1168;
      break;
    case 5:
      puVar7 = (undefined8 *)PTR_DAT_029c11b0;
      break;
    case 6:
      puVar7 = (undefined8 *)PTR_DAT_029c11c0;
      break;
    case 7:
      puVar7 = (undefined8 *)PTR_DAT_029c12e0;
      break;
    default:
      goto LAB_01400dbc;
    }
    break;
  case 7:
    switch(uVar3) {
    case 0:
      puVar7 = (undefined8 *)PTR_DAT_029c12f8;
      break;
    case 1:
      puVar7 = (undefined8 *)PTR_DAT_029c1240;
      break;
    case 2:
      puVar7 = (undefined8 *)PTR_DAT_029c1388;
      break;
    case 3:
      puVar7 = (undefined8 *)PTR_DAT_029c12e8;
      break;
    case 4:
      puVar7 = (undefined8 *)PTR_DAT_029c1328;
      break;
    case 5:
      puVar7 = (undefined8 *)PTR_DAT_029c1330;
      break;
    case 6:
      puVar7 = (undefined8 *)PTR_DAT_029c1348;
      break;
    case 7:
      puVar7 = (undefined8 *)PTR_DAT_029c11c8;
      break;
    default:
      goto LAB_01400dbc;
    }
    break;
  case 8:
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    iVar2 = GameController_GetDoubleValueCoinSpawnDistanceForUpgradeLvl_1297b48
                      (uVar3 + 1,(void *)0x0);
    iVar4 = GameController_GetTripleValueCoinSpawnDistanceForUpgradeLvl_1297bec
                      (uVar3 + 1,(void *)0x0);
    switch(uVar3) {
    case 0:
      puVar7 = (undefined8 *)PTR_DAT_029c11d8;
      goto code_r0x01400bf0;
    case 1:
      puVar7 = (undefined8 *)PTR_DAT_029c11e8;
code_r0x01400bf0:
      pvVar5 = Strings_Txt_131380c((void *)*puVar7,false,(void *)0x0);
      iStack_38 = iVar2;
      goto code_r0x01400c54;
    case 2:
      puVar7 = (undefined8 *)PTR_DAT_029c1250;
      break;
    case 3:
      puVar7 = (undefined8 *)PTR_DAT_029c1280;
      break;
    case 4:
      puVar7 = (undefined8 *)PTR_DAT_029c12c0;
      break;
    case 5:
      puVar7 = (undefined8 *)PTR_DAT_029c1278;
      goto code_r0x01400da8;
    default:
      goto LAB_01400dbc;
    }
    pvVar5 = Strings_Txt_131380c((void *)*puVar7,false,(void *)0x0);
    iStack_38 = iVar4;
code_r0x01400c54:
    uVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_38);
    pvVar5 = (void *)NativeHelper_01e9390c(pvVar5,uVar6,0);
    goto LAB_01400dbc;
  case 9:
    switch(uVar3) {
    case 0:
      puVar7 = (undefined8 *)PTR_DAT_029c12d0;
      break;
    case 1:
      puVar7 = (undefined8 *)PTR_DAT_029c12d8;
      break;
    case 2:
      puVar7 = (undefined8 *)PTR_DAT_029c1338;
      break;
    case 3:
      puVar7 = (undefined8 *)PTR_DAT_029c12c8;
      break;
    case 4:
      puVar7 = (undefined8 *)PTR_DAT_029c1260;
      break;
    case 5:
      puVar7 = (undefined8 *)PTR_DAT_029c1228;
      break;
    case 6:
      puVar7 = (undefined8 *)PTR_DAT_029c12b0;
      break;
    case 7:
      puVar7 = (undefined8 *)PTR_DAT_029c1288;
      break;
    default:
      goto LAB_01400dbc;
    }
    break;
  case 0xf:
    puVar7 = (undefined8 *)PTR_DAT_029c1360;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c12a8;
    }
    break;
  case 0x10:
    puVar7 = (undefined8 *)PTR_DAT_029c12b8;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c11a8;
    }
    break;
  case 0x11:
    puVar7 = (undefined8 *)PTR_DAT_029c1238;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1380;
    }
    break;
  case 0x12:
    puVar7 = (undefined8 *)PTR_DAT_029c1210;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c11f0;
    }
    break;
  case 0x13:
    puVar7 = (undefined8 *)PTR_DAT_029c1300;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1230;
    }
    break;
  case 0x14:
    puVar7 = (undefined8 *)PTR_DAT_029c1268;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1218;
    }
    break;
  case 0x15:
    if (self->PlayerManager == (void *)0x0) goto LAB_01400de4;
    pRVar8 = self->RecordManager;
    iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (pRVar8 == (RecordManager *)0x0) goto LAB_01400de4;
    iVar2 = RecordManager_GetRecordFlagValue_12b3354(pRVar8,iVar2,(void *)0x17,(void *)0x0);
    puVar7 = (undefined8 *)PTR_DAT_029c1150;
    if (iVar2 == 1) {
      puVar7 = (undefined8 *)PTR_DAT_029c1358;
    }
    break;
  case 0x16:
    puVar7 = (undefined8 *)PTR_DAT_029c11a0;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1180;
    }
    break;
  case 0x1c:
    puVar7 = (undefined8 *)PTR_DAT_029c1310;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1190;
    }
    break;
  case 0x1d:
    puVar7 = (undefined8 *)PTR_DAT_029c1188;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1340;
    }
    break;
  case 0x1e:
    puVar7 = (undefined8 *)PTR_DAT_029c1398;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c11d0;
    }
    break;
  case 0x1f:
    puVar7 = (undefined8 *)PTR_DAT_029c12f0;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1270;
    }
    break;
  case 0x20:
    puVar7 = (undefined8 *)PTR_DAT_029c1220;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1320;
    }
    break;
  case 0x21:
    puVar7 = (undefined8 *)PTR_DAT_029c1390;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1258;
    }
    break;
  case 0x22:
    puVar7 = (undefined8 *)PTR_DAT_029c1158;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1298;
    }
    break;
  case 0x23:
    puVar7 = (undefined8 *)PTR_DAT_029c11e0;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1318;
    }
    break;
  case 0x24:
    puVar7 = (undefined8 *)PTR_DAT_029c1370;
    if (uVar3 != 0) {
      puVar7 = (undefined8 *)PTR_DAT_029c1350;
    }
  }
code_r0x01400da8:
  pvVar5 = Strings_Txt_131380c((void *)*puVar7,false,(void *)0x0);
LAB_01400dbc:
  if (self->DescriptionLabel != (UILabel *)0x0) {
    UILabel_set_text_129fea0(self->DescriptionLabel,pvVar5,(void *)0x0);
    return;
  }
LAB_01400de4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

