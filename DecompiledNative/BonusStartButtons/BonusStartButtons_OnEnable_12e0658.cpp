// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 013e4658; ELF VA: 0x12e4658; file offset: 0x12e0658
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BonusStartButtons_OnEnable_12e0658(BonusStartButtons *self,void *runtimeMethod)

{
  bool bVar1;
  bool bVar2;
  Recovered_Vector3 value;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  HeadStartButton *pHVar7;
  long lVar8;
  undefined8 uVar9;
  Recovered_Vector3 *pRVar10;
  RecordManager *pRVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Recovered_Vector3 RVar16;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  if ((bRam0000000002b94fa5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029c0640);
    NativeHelper_011df0b4(PTR_DAT_029b8730);
    NativeHelper_011df0b4(PTR_DAT_029c0648);
    bRam0000000002b94fa5 = 1;
  }
  if (self->PlayerManager == (void *)0x0) goto LAB_013e4a54;
  pRVar11 = self->RecordManager;
  iVar3 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar11 == (RecordManager *)0x0) goto LAB_013e4a54;
  iVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44(pRVar11,iVar3,(void *)0x3,(void *)0x0);
  bVar1 = 0 < iVar3;
  auStack_54[0] = bVar1;
  if (self->PlayerManager == (void *)0x0) goto LAB_013e4a54;
  pRVar11 = self->RecordManager;
  iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar11 == (RecordManager *)0x0) goto LAB_013e4a54;
  iVar4 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44(pRVar11,iVar4,(void *)0x1,(void *)0x0);
  bVar2 = 0 < iVar4;
  auStack_58[0] = bVar2;
  if (self->PlayerManager == (void *)0x0) goto LAB_013e4a54;
  pRVar11 = self->RecordManager;
  iVar5 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar11 == (RecordManager *)0x0) goto LAB_013e4a54;
  iVar5 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44(pRVar11,iVar5,(void *)0x2,(void *)0x0);
  auStack_5c[0] = 0 < iVar5;
  cVar12 = bVar2 + bVar1;
  if (iVar5 < 1) {
    if (cVar12 == '\0') {
      return;
    }
  }
  else {
    cVar12 = cVar12 + '\x01';
  }
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  if (cVar12 == '\x03') {
    if ((self->PermaWings == (PermaWingButton *)0x0) ||
       (pvVar6 = (void *)NativeHelper_0260e1a8(self->PermaWings,0), pvVar6 == (void *)0x0))
    goto LAB_013e4a54;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar6,(Recovered_Vector3)ZEXT812(0xc2d8000000000000),(void *)0x0);
LAB_013e4890:
    if ((self->HeadStart == (HeadStartButton *)0x0) ||
       (pvVar6 = (void *)NativeHelper_0260e1a8(self->HeadStart,0), pvVar6 == (void *)0x0))
    goto LAB_013e4a54;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar6,(Recovered_Vector3)ZEXT412(0xc2fe0000),(void *)0x0);
    pHVar7 = self->MegaHeadStart;
  }
  else {
    if (cVar12 == '\x01') {
      if (self->PermaWings == (PermaWingButton *)0x0) goto LAB_013e4a54;
      pRVar10 = *(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8);
      fVar13 = pRVar10->component0;
      fVar14 = pRVar10->component1;
      fVar15 = pRVar10->component2;
      value = *pRVar10;
      RVar16 = *pRVar10;
      pvVar6 = (void *)NativeHelper_0260e1a8(self->PermaWings,0);
      if (pvVar6 == (void *)0x0) goto LAB_013e4a54;
      UnityEngine_Transform_set_localPosition_2515ec4(pvVar6,RVar16,(void *)0x0);
      if ((self->HeadStart == (HeadStartButton *)0x0) ||
         (pvVar6 = (void *)NativeHelper_0260e1a8(self->HeadStart,0), pvVar6 == (void *)0x0))
      goto LAB_013e4a54;
      UnityEngine_Transform_set_localPosition_2515ec4(pvVar6,value,(void *)0x0);
      if ((self->MegaHeadStart == (HeadStartButton *)0x0) ||
         (pvVar6 = (void *)NativeHelper_0260e1a8(self->MegaHeadStart,0), pvVar6 == (void *)0x0))
      goto LAB_013e4a54;
      goto LAB_013e4944;
    }
    if ((0 < iVar5) && (0 < iVar4)) goto LAB_013e4890;
    if ((iVar3 < 1) || (iVar5 < 1)) {
      if ((iVar3 < 1) || (iVar4 < 1)) {
        lVar8 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,6);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) != 0) {
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_029c0648;
            if (*(int *)(*(long *)PTR_DAT_029b8308 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            uVar9 = NativeHelper_01f83748(auStack_54,0);
            if ((1 < *(uint *)(lVar8 + 0x18)) &&
               (*(undefined8 *)(lVar8 + 0x28) = uVar9, *(uint *)(lVar8 + 0x18) != 2)) {
              *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_029c0640;
              uVar9 = NativeHelper_01f83748(auStack_58,0);
              if ((3 < *(uint *)(lVar8 + 0x18)) &&
                 (*(undefined8 *)(lVar8 + 0x38) = uVar9, *(uint *)(lVar8 + 0x18) != 4)) {
                *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_029b8730;
                uVar9 = NativeHelper_01f83748(auStack_5c,0);
                if (5 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x48) = uVar9;
                  pvVar6 = (void *)NativeHelper_01e9bf50(lVar8,0);
                  DebugEx_LogError_1323bf8(pvVar6,(void *)0x0);
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        goto LAB_013e4a54;
      }
      pHVar7 = self->HeadStart;
    }
    else {
      pHVar7 = self->MegaHeadStart;
    }
    if ((pHVar7 == (HeadStartButton *)0x0) ||
       (pvVar6 = (void *)NativeHelper_0260e1a8(pHVar7,0), pvVar6 == (void *)0x0)) goto LAB_013e4a54;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar6,(Recovered_Vector3)ZEXT412(0xc2fe0000),(void *)0x0);
    pHVar7 = (HeadStartButton *)self->PermaWings;
  }
  if ((pHVar7 != (HeadStartButton *)0x0) &&
     (pvVar6 = (void *)NativeHelper_0260e1a8(pHVar7,0), pvVar6 != (void *)0x0)) {
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar13 = 127.0;
LAB_013e4944:
    RVar16.component1 = fVar14;
    RVar16.component0 = fVar13;
    RVar16.component2 = fVar15;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar6,RVar16,(void *)0x0);
    return;
  }
LAB_013e4a54:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

