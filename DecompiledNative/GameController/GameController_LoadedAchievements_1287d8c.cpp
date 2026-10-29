// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LoadedAchievements(List<ImangiGameCenterAchievement> inAchievements) { }
// Ghidra address: 0138bd8c; ELF VA: 0x128bd8c; file offset: 0x1287d8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_LoadedAchievements_1287d8c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  RecordManager *pRVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  
  if ((bRam0000000002b94cb9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdbd8);
    NativeHelper_011df0b4(PTR_DAT_029bdbe0);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94cb9 = 1;
  }
  pvVar5 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if ((pvVar5 != (void *)0x0) &&
     (iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar5,(void *)0x0), puVar3 = PTR_DAT_029bdbe8,
     puVar2 = PTR_DAT_029bdbe0, param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x18);
    if (0 < iVar1) {
      iVar9 = 0;
      do {
        lVar6 = NativeHelper_01a2f750(param_2,iVar9,*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_0138bf38;
        if (*(char *)(lVar6 + 0x1c) != '\0') {
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar7 = *(long *)puVar3;
          }
          if ((RecordManager *)**(undefined8 **)(lVar7 + 0xb8) == (RecordManager *)0x0)
          goto LAB_0138bf38;
          fVar11 = RecordManager_GetProgressForAchievement_12b2910
                             ((RecordManager *)**(undefined8 **)(lVar7 + 0xb8),iVar4,
                              *(void **)(lVar6 + 0x10),(void *)0x0);
          if (fVar11 < 100.0) {
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              lVar7 = *(long *)puVar3;
            }
            if ((RecordManager *)**(undefined8 **)(lVar7 + 0xb8) == (RecordManager *)0x0)
            goto LAB_0138bf38;
            RecordManager_UpdateAchievementRecord_12b2930
                      ((RecordManager *)**(undefined8 **)(lVar7 + 0xb8),iVar4,
                       *(void **)(lVar6 + 0x10),100.0,(void *)0x0);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar1 != iVar9);
    }
    if (*(RecordManager **)(param_1 + 0xc0) != (RecordManager *)0x0) {
      iVar4 = RecordManager_GetScoreMulitplier_12b1164
                        (*(RecordManager **)(param_1 + 0xc0),iVar4,(void *)0x0);
      TRAnalyticsHelper_UpdateScoreMultiplier_12b9adc(iVar4,(void *)0x0);
      puVar2 = PTR_DAT_029bd9d0;
      if (*(RecordManager **)(param_1 + 0xc0) != (RecordManager *)0x0) {
        RecordManager_SaveRecords_12b3350(*(RecordManager **)(param_1 + 0xc0),(void *)0x0);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar6 = *(long *)puVar2;
        }
        puVar2 = PTR_DAT_029b9758;
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 != 0) {
          if ((bRam0000000002b94e31 & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029b9758,0);
            bRam0000000002b94e31 = 1;
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          pvVar5 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
          if ((lVar7 != 0) && (pvVar5 != (void *)0x0)) {
            lVar10 = *(long *)(lVar6 + 0x28);
            pRVar8 = *(RecordManager **)(lVar7 + 0xc0);
            iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar5,(void *)0x0);
            if ((pRVar8 != (RecordManager *)0x0) &&
               (iVar4 = RecordManager_GetLifetimePlays_12b1178(pRVar8,iVar4,(void *)0x0),
               lVar10 != 0)) {
              if (*(int *)(lVar10 + 0x18) == 0) {
code_r0x013bdfd4:
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2e4();
              }
              *(int *)(lVar10 + 0x20) = iVar4;
              lVar10 = *(long *)(lVar6 + 0x28);
              pRVar8 = *(RecordManager **)(lVar7 + 0xc0);
              iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar5,(void *)0x0);
              if ((pRVar8 != (RecordManager *)0x0) &&
                 (iVar4 = RecordManager_GetLifetimeCoins_12b46d0(pRVar8,iVar4,(void *)0x0),
                 lVar10 != 0)) {
                if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x013bdfd4;
                *(int *)(lVar10 + 0x24) = iVar4;
                lVar10 = *(long *)(lVar6 + 0x28);
                pRVar8 = *(RecordManager **)(lVar7 + 0xc0);
                iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar5,(void *)0x0);
                if ((pRVar8 != (RecordManager *)0x0) &&
                   (iVar4 = RecordManager_GetLifetimeDistance_12b46e8(pRVar8,iVar4,(void *)0x0),
                   lVar10 != 0)) {
                  if (*(uint *)(lVar10 + 0x18) < 3) goto code_r0x013bdfd4;
                  *(int *)(lVar10 + 0x28) = iVar4;
                  if (*(RecordManager **)(lVar7 + 0xc0) != (RecordManager *)0x0) {
                    lVar10 = *(long *)(lVar6 + 0x28);
                    iVar4 = RecordManager_GetAchievementCompletedCount_12b2b90
                                      (*(RecordManager **)(lVar7 + 0xc0),(void *)0x0);
                    if (lVar10 != 0) {
                      if (3 < *(uint *)(lVar10 + 0x18)) {
                        *(int *)(lVar10 + 0x2c) = iVar4;
                        *(undefined1 *)(lVar6 + 0x30) = 1;
                        return;
                      }
                      goto code_r0x013bdfd4;
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
LAB_0138bf38:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

