// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ActivateCharacter(StoreItemType type) { }
// Ghidra address: 014012b4; ELF VA: 0x13012b4; file offset: 0x12fd2b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_ActivateCharacter_12fd2b4(StoreItem *self,void *type,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  void *pvVar21;
  int iVar22;
  RecordManager *pRVar23;
  long lVar24;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar2 = PTR_DAT_029bde50;
  puVar1 = PTR_DAT_029bdbe8;
  if ((bRam0000000002b9507a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde50);
    NativeHelper_011df0b4(PTR_DAT_029c0650);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029c1400);
    NativeHelper_011df0b4(PTR_DAT_029c0660);
    bRam0000000002b9507a = 1;
  }
  lVar20 = *(long *)puVar1;
  lVar24 = **(long **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(lVar20 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar20 = *(long *)puVar1;
  }
  if (((RecordManager *)**(undefined8 **)(lVar20 + 0xb8) != (RecordManager *)0x0) &&
     (iVar17 = RecordManager_CharcterIDFromType_12b45dc
                         ((RecordManager *)**(undefined8 **)(lVar20 + 0xb8),
                          (void *)((ulong)type & 0xffffffff),(void *)0x0), lVar24 != 0)) {
    *(int *)(lVar24 + 0x188) = iVar17;
    if (self->PlayerManager != (void *)0x0) {
      pRVar23 = self->RecordManager;
      iVar17 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) && (pRVar23 != (RecordManager *)0x0)) {
        RecordManager_SetActiveCharacter_12b45bc
                  (pRVar23,iVar17,*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x188),(void *)0x0)
        ;
        pvVar21 = (void *)NativeHelper_0260e1a8(self,0);
        if ((pvVar21 != (void *)0x0) &&
           (pvVar21 = UnityEngine_Transform_get_parent_2516614(pvVar21,(void *)0x0),
           pvVar21 != (void *)0x0)) {
          NativeHelper_0260e890(pvVar21,*(undefined8 *)PTR_DAT_029c0660,0);
          if (self->RecordManager != (RecordManager *)0x0) {
            RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
            if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
              pRVar23 = self->RecordManager;
              pvVar21 = TRAnalyticsHelper_GetCharacterName_12b90e8
                                  (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x188),(void *)0x0
                                  );
              puVar1 = PTR_DAT_029c0650;
              if (pRVar23 != (RecordManager *)0x0) {
                RecordManager_SendSelectContentEvent_12ae59c
                          (pRVar23,pvVar21,*(void **)PTR_DAT_029c1400,(void *)0x0);
                lVar20 = **(long **)(*(long *)puVar1 + 0xb8);
                if (lVar20 != 0) {
                  if ((bRam0000000002b94fad & 1) == 0) {
                    NativeHelper_011df0b4(PTR_DAT_029b8bc0,0);
                    NativeHelper_011df0b4(PTR_DAT_029c0680);
                    NativeHelper_011df0b4(PTR_DAT_029c0688);
                    bRam0000000002b94fad = 1;
                  }
                  if (*(void **)(lVar20 + 0xb0) != (void *)0x0) {
                    iVar17 = PlayerManager_GetActivePlayer_12ccc8c
                                       (*(void **)(lVar20 + 0xb0),(void *)0x0);
                    if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                      iVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                        (*(RecordManager **)(lVar20 + 0xa8),iVar17,(void *)0x10,
                                         (void *)0x0);
                      if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                        iVar4 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                          (*(RecordManager **)(lVar20 + 0xa8),iVar17,(void *)0x11,
                                           (void *)0x0);
                        if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                          iVar5 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                            (*(RecordManager **)(lVar20 + 0xa8),iVar17,(void *)0x12,
                                             (void *)0x0);
                          if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                            iVar6 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                              (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                               (void *)0x13,(void *)0x0);
                            if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                              iVar7 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                                 (void *)0x14,(void *)0x0);
                              if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                                iVar8 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                  (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                                   (void *)0x16,(void *)0x0);
                                if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                                  iVar9 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                    (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                                     (void *)0x1c,(void *)0x0);
                                  if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0) {
                                    iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                       (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                                        (void *)0x1d,(void *)0x0);
                                    if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0)
                                    {
                                      iVar11 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                         (*(RecordManager **)(lVar20 + 0xa8),iVar17,
                                                          (void *)0x1e,(void *)0x0);
                                      if (*(RecordManager **)(lVar20 + 0xa8) != (RecordManager *)0x0
                                         ) {
                                        iVar12 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                           (*(RecordManager **)(lVar20 + 0xa8),
                                                            iVar17,(void *)0x1f,(void *)0x0);
                                        if (*(RecordManager **)(lVar20 + 0xa8) !=
                                            (RecordManager *)0x0) {
                                          iVar13 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*(RecordManager **)(lVar20 + 0xa8),
                                                             iVar17,(void *)0x20,(void *)0x0);
                                          if (*(RecordManager **)(lVar20 + 0xa8) !=
                                              (RecordManager *)0x0) {
                                            iVar14 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*(RecordManager **)(lVar20 + 0xa8),
                                                             iVar17,(void *)0x21,(void *)0x0);
                                            if (*(RecordManager **)(lVar20 + 0xa8) !=
                                                (RecordManager *)0x0) {
                                              iVar15 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*(RecordManager **)(lVar20 + 0xa8),
                                                             iVar17,(void *)0x22,(void *)0x0);
                                              if (*(RecordManager **)(lVar20 + 0xa8) !=
                                                  (RecordManager *)0x0) {
                                                iVar16 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*(RecordManager **)(lVar20 + 0xa8),
                                                             iVar17,(void *)0x23,(void *)0x0);
                                                if (*(RecordManager **)(lVar20 + 0xa8) !=
                                                    (RecordManager *)0x0) {
                                                  iVar22 = 1;
                                                  if (0 < iVar3) {
                                                    iVar22 = 2;
                                                  }
                                                  if (0 < iVar4) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar5) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar6) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar7) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar8) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar9) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar10) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar11) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar12) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar13) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar14) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar15) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  if (0 < iVar16) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  iVar17 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*(RecordManager **)(lVar20 + 0xa8),
                                                             iVar17,(void *)0x24,(void *)0x0);
                                                  if (0 < iVar17) {
                                                    iVar22 = iVar22 + 1;
                                                  }
                                                  pvVar21 = Strings_Txt_131380c(*(void **)
                                                  PTR_DAT_029c0688,false,(void *)0x0);
                                                  puVar1 = PTR_DAT_029b8bc0;
                                                  iStack_64 = iVar22;
                                                  uVar18 = NativeHelper_011df1c4
                                                                     (*(undefined8 *)
                                                                       PTR_DAT_029b8bc0,&iStack_64);
                                                  uStack_68 = 0x10;
                                                  uVar19 = NativeHelper_011df1c4
                                                                     (*(undefined8 *)puVar1,
                                                                      &uStack_68);
                                                  pvVar21 = (void *)NativeHelper_01e9c29c
                                                                              (*(undefined8 *)
                                                                                PTR_DAT_029c0680,
                                                                               pvVar21,uVar18,uVar19
                                                                               ,0);
                                                  if (*(UILabel **)(lVar20 + 0x78) != (UILabel *)0x0
                                                     ) {
                                                    UILabel_set_text_129fea0
                                                              (*(UILabel **)(lVar20 + 0x78),pvVar21,
                                                               (void *)0x0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df2dc();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

