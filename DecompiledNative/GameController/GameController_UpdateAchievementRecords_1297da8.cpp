// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateAchievementRecords() { }
// Ghidra address: 0139bda8; ELF VA: 0x129bda8; file offset: 0x1297da8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_UpdateAchievementRecords_1297da8(GameController *self,void *runtimeMethod)

{
  void **ppvVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
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
  int iVar18;
  GameController *pGVar19;
  undefined8 uVar20;
  void *pvVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  long lVar25;
  RecordManager *self_00;
  RecordManager **ppRVar26;
  float fVar27;
  float fVar28;
  
  if ((bRam0000000002b94d15 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8420);
    NativeHelper_011df0b4(PTR_DAT_029b9998);
    NativeHelper_011df0b4(PTR_DAT_029b9b20);
    NativeHelper_011df0b4(PTR_DAT_029b9b28);
    NativeHelper_011df0b4(PTR_DAT_029be1a0);
    NativeHelper_011df0b4(PTR_DAT_029be1a8);
    NativeHelper_011df0b4(PTR_DAT_029be1b0);
    NativeHelper_011df0b4(PTR_DAT_029be1b8);
    NativeHelper_011df0b4(PTR_DAT_029be1c0);
    NativeHelper_011df0b4(PTR_DAT_029be1c8);
    NativeHelper_011df0b4(PTR_DAT_029be1d0);
    NativeHelper_011df0b4(PTR_DAT_029be1d8);
    NativeHelper_011df0b4(PTR_DAT_029be1e0);
    NativeHelper_011df0b4(PTR_DAT_029be1e8);
    NativeHelper_011df0b4(PTR_DAT_029be1f0);
    NativeHelper_011df0b4(PTR_DAT_029be1f8);
    NativeHelper_011df0b4(PTR_DAT_029be200);
    NativeHelper_011df0b4(PTR_DAT_029be208);
    NativeHelper_011df0b4(PTR_DAT_029be210);
    NativeHelper_011df0b4(PTR_DAT_029be218);
    NativeHelper_011df0b4(PTR_DAT_029be220);
    NativeHelper_011df0b4(PTR_DAT_029be228);
    NativeHelper_011df0b4(PTR_DAT_029be230);
    NativeHelper_011df0b4(PTR_DAT_029be238);
    NativeHelper_011df0b4(PTR_DAT_029be240);
    NativeHelper_011df0b4(PTR_DAT_029be248);
    NativeHelper_011df0b4(PTR_DAT_029be250);
    NativeHelper_011df0b4(PTR_DAT_029be258);
    NativeHelper_011df0b4(PTR_DAT_029be260);
    NativeHelper_011df0b4(PTR_DAT_029be268);
    NativeHelper_011df0b4(PTR_DAT_029be270);
    NativeHelper_011df0b4(PTR_DAT_029be278);
    NativeHelper_011df0b4(PTR_DAT_029be280);
    NativeHelper_011df0b4(PTR_DAT_029be288);
    NativeHelper_011df0b4(PTR_DAT_029be290);
    NativeHelper_011df0b4(PTR_DAT_029be298);
    NativeHelper_011df0b4(PTR_DAT_029be2a0);
    NativeHelper_011df0b4(PTR_DAT_029be2a8);
    NativeHelper_011df0b4(PTR_DAT_029be2b0);
    NativeHelper_011df0b4(PTR_DAT_029be2b8);
    NativeHelper_011df0b4(PTR_DAT_029be2c0);
    NativeHelper_011df0b4(PTR_DAT_029be2c8);
    NativeHelper_011df0b4(PTR_DAT_029be2d0);
    NativeHelper_011df0b4(PTR_DAT_029be2d8);
    NativeHelper_011df0b4(PTR_DAT_029be2e0);
    NativeHelper_011df0b4(PTR_DAT_029be2e8);
    NativeHelper_011df0b4(PTR_DAT_029be2f0);
    NativeHelper_011df0b4(PTR_DAT_029be2f8);
    NativeHelper_011df0b4(PTR_DAT_029be300);
    NativeHelper_011df0b4(PTR_DAT_029be308);
    NativeHelper_011df0b4(PTR_DAT_029be310);
    NativeHelper_011df0b4(PTR_DAT_029be318);
    NativeHelper_011df0b4(PTR_DAT_029be320);
    NativeHelper_011df0b4(PTR_DAT_029be328);
    NativeHelper_011df0b4(PTR_DAT_029be330);
    NativeHelper_011df0b4(PTR_DAT_029be338);
    NativeHelper_011df0b4(PTR_DAT_029be340);
    NativeHelper_011df0b4(PTR_DAT_029be348);
    NativeHelper_011df0b4(PTR_DAT_029be350);
    NativeHelper_011df0b4(PTR_DAT_029be358);
    NativeHelper_011df0b4(PTR_DAT_029be360);
    bRam0000000002b94d15 = 1;
  }
  pvVar21 = self->AwardedAchievements;
  if (pvVar21 != (void *)0x0) {
    iVar5 = *(int *)((long)pvVar21 + 0x18);
    *(undefined4 *)((long)pvVar21 + 0x18) = 0;
    *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
    if (0 < iVar5) {
      NativeHelper_0201ea34(*(undefined8 *)((long)pvVar21 + 0x10),0,iVar5,0);
    }
    if (self->PlayerManager != (void *)0x0) {
      iVar5 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      puVar4 = PTR_DAT_029be218;
      ppRVar26 = &self->RecordManager;
      if (*ppRVar26 != (RecordManager *)0x0) {
        ppvVar1 = &self->AwardedAchievements;
        fVar27 = RecordManager_GetProgressForAchievement_12b2910
                           (*ppRVar26,iVar5,*(void **)PTR_DAT_029be218,(void *)0x0);
        if (fVar27 < 100.0) {
          fVar27 = (self->DistanceTraveled / 500.0) * 100.0;
          if (100.0 <= fVar27) {
            pvVar21 = *ppvVar1;
            if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
            uVar20 = *(undefined8 *)puVar4;
            lVar22 = *(long *)((long)pvVar21 + 0x10);
            lVar25 = *(long *)PTR_DAT_029b8420;
            *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
            if (lVar22 == 0) goto LAB_0139fcb0;
            uVar24 = *(uint *)((long)pvVar21 + 0x18);
            if (uVar24 < *(uint *)(lVar22 + 0x18)) {
              *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
              *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
              fVar27 = 100.0;
            }
            else {
              NativeHelper_01a2fa14
                        (pvVar21,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              fVar27 = 100.0;
            }
          }
          if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
          RecordManager_UpdateAchievementRecord_12b2930
                    (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
        }
        puVar4 = PTR_DAT_029be2f0;
        if (*ppRVar26 != (RecordManager *)0x0) {
          fVar27 = RecordManager_GetProgressForAchievement_12b2910
                             (*ppRVar26,iVar5,*(void **)PTR_DAT_029be2f0,(void *)0x0);
          if (fVar27 < 100.0) {
            fVar27 = (self->MaxDistanceWithoutCoins / 500.0) * 100.0;
            if (100.0 <= fVar27) {
              pvVar21 = *ppvVar1;
              if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
              uVar20 = *(undefined8 *)puVar4;
              lVar22 = *(long *)((long)pvVar21 + 0x10);
              lVar25 = *(long *)PTR_DAT_029b8420;
              *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
              if (lVar22 == 0) goto LAB_0139fcb0;
              uVar24 = *(uint *)((long)pvVar21 + 0x18);
              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                fVar27 = 100.0;
              }
              else {
                NativeHelper_01a2fa14
                          (pvVar21,uVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                fVar27 = 100.0;
              }
            }
            if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
            RecordManager_UpdateAchievementRecord_12b2930
                      (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
          }
          puVar4 = PTR_DAT_029be228;
          if (*ppRVar26 != (RecordManager *)0x0) {
            fVar27 = RecordManager_GetProgressForAchievement_12b2910
                               (*ppRVar26,iVar5,*(void **)PTR_DAT_029be228,(void *)0x0);
            if (fVar27 < 100.0) {
              fVar27 = (self->DistanceTraveled / 1000.0) * 100.0;
              if (100.0 <= fVar27) {
                pvVar21 = *ppvVar1;
                if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                uVar20 = *(undefined8 *)puVar4;
                lVar22 = *(long *)((long)pvVar21 + 0x10);
                lVar25 = *(long *)PTR_DAT_029b8420;
                *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                if (lVar22 == 0) goto LAB_0139fcb0;
                uVar24 = *(uint *)((long)pvVar21 + 0x18);
                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                  *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                  fVar27 = 100.0;
                }
                else {
                  NativeHelper_01a2fa14
                            (pvVar21,uVar20,
                             *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                  fVar27 = 100.0;
                }
              }
              if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
              RecordManager_UpdateAchievementRecord_12b2930
                        (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
            }
            puVar4 = PTR_DAT_029be2d8;
            if (*ppRVar26 != (RecordManager *)0x0) {
              fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                 (*ppRVar26,iVar5,*(void **)PTR_DAT_029be2d8,(void *)0x0);
              if (fVar27 < 100.0) {
                fVar27 = (self->MaxDistanceWithoutCoins / 1000.0) * 100.0;
                if (100.0 <= fVar27) {
                  pvVar21 = *ppvVar1;
                  if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                  uVar20 = *(undefined8 *)puVar4;
                  lVar22 = *(long *)((long)pvVar21 + 0x10);
                  lVar25 = *(long *)PTR_DAT_029b8420;
                  *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                  if (lVar22 == 0) goto LAB_0139fcb0;
                  uVar24 = *(uint *)((long)pvVar21 + 0x18);
                  if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                    *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                    *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                    fVar27 = 100.0;
                  }
                  else {
                    NativeHelper_01a2fa14
                              (pvVar21,uVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                    fVar27 = 100.0;
                  }
                }
                if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                RecordManager_UpdateAchievementRecord_12b2930
                          (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
              }
              puVar4 = PTR_DAT_029be300;
              if (*ppRVar26 != (RecordManager *)0x0) {
                fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                   (*ppRVar26,iVar5,*(void **)PTR_DAT_029be300,(void *)0x0);
                if (fVar27 < 100.0) {
                  fVar27 = (self->DistanceTraveled / _UNK_007a3ce4) * 100.0;
                  if (100.0 <= fVar27) {
                    pvVar21 = *ppvVar1;
                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                    uVar20 = *(undefined8 *)puVar4;
                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                    lVar25 = *(long *)PTR_DAT_029b8420;
                    *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                    if (lVar22 == 0) goto LAB_0139fcb0;
                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                      *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                      fVar27 = 100.0;
                    }
                    else {
                      NativeHelper_01a2fa14
                                (pvVar21,uVar20,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70))
                      ;
                      fVar27 = 100.0;
                    }
                  }
                  if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                  RecordManager_UpdateAchievementRecord_12b2930
                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                }
                puVar4 = PTR_DAT_029be2b8;
                if (*ppRVar26 != (RecordManager *)0x0) {
                  fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                     (*ppRVar26,iVar5,*(void **)PTR_DAT_029be2b8,(void *)0x0);
                  if (fVar27 < 100.0) {
                    fVar27 = (self->DistanceTraveled / _UNK_007a3ccc) * 100.0;
                    if (100.0 <= fVar27) {
                      pvVar21 = *ppvVar1;
                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                      uVar20 = *(undefined8 *)puVar4;
                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                      lVar25 = *(long *)PTR_DAT_029b8420;
                      *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                      if (lVar22 == 0) goto LAB_0139fcb0;
                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                        *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                        fVar27 = 100.0;
                      }
                      else {
                        NativeHelper_01a2fa14
                                  (pvVar21,uVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                        fVar27 = 100.0;
                      }
                    }
                    if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                    RecordManager_UpdateAchievementRecord_12b2930
                              (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                  }
                  puVar4 = PTR_DAT_029be2d0;
                  if (*ppRVar26 != (RecordManager *)0x0) {
                    fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                       (*ppRVar26,iVar5,*(void **)PTR_DAT_029be2d0,(void *)0x0);
                    if (fVar27 < 100.0) {
                      fVar27 = (self->DistanceTraveled / _UNK_007a3c64) * 100.0;
                      if (100.0 <= fVar27) {
                        pvVar21 = *ppvVar1;
                        if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                        uVar20 = *(undefined8 *)puVar4;
                        lVar22 = *(long *)((long)pvVar21 + 0x10);
                        lVar25 = *(long *)PTR_DAT_029b8420;
                        *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                        if (lVar22 == 0) goto LAB_0139fcb0;
                        uVar24 = *(uint *)((long)pvVar21 + 0x18);
                        if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                          *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                          *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                          fVar27 = 100.0;
                        }
                        else {
                          NativeHelper_01a2fa14
                                    (pvVar21,uVar20,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                          fVar27 = 100.0;
                        }
                      }
                      if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                      RecordManager_UpdateAchievementRecord_12b2930
                                (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                    }
                    puVar4 = PTR_DAT_029be290;
                    if (self->DidStumble == false) {
                      if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                      fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                         (*ppRVar26,iVar5,*(void **)PTR_DAT_029be290,(void *)0x0);
                      if (fVar27 < 100.0) {
                        fVar27 = (self->DistanceTraveled / _UNK_007a3ccc) * 100.0;
                        if (100.0 <= fVar27) {
                          pvVar21 = *ppvVar1;
                          if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                          uVar20 = *(undefined8 *)puVar4;
                          lVar22 = *(long *)((long)pvVar21 + 0x10);
                          lVar25 = *(long *)PTR_DAT_029b8420;
                          *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                          if (lVar22 == 0) goto LAB_0139fcb0;
                          uVar24 = *(uint *)((long)pvVar21 + 0x18);
                          if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                            *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                            *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                            fVar27 = 100.0;
                          }
                          else {
                            NativeHelper_01a2fa14
                                      (pvVar21,uVar20,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                            fVar27 = 100.0;
                          }
                        }
                        if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                        RecordManager_UpdateAchievementRecord_12b2930
                                  (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                      }
                      puVar4 = PTR_DAT_029be2c0;
                      if (self->DidStumble == false) {
                        if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                        fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                           (*ppRVar26,iVar5,*(void **)PTR_DAT_029be2c0,(void *)0x0);
                        if (fVar27 < 100.0) {
                          fVar27 = (self->DistanceTraveled / _UNK_007a3ce4) * 100.0;
                          if (100.0 <= fVar27) {
                            pvVar21 = *ppvVar1;
                            if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                            uVar20 = *(undefined8 *)puVar4;
                            lVar22 = *(long *)((long)pvVar21 + 0x10);
                            lVar25 = *(long *)PTR_DAT_029b8420;
                            *(int *)((long)pvVar21 + 0x1c) = *(int *)((long)pvVar21 + 0x1c) + 1;
                            if (lVar22 == 0) goto LAB_0139fcb0;
                            uVar24 = *(uint *)((long)pvVar21 + 0x18);
                            if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                              *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                              *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                              fVar27 = 100.0;
                            }
                            else {
                              NativeHelper_01a2fa14
                                        (pvVar21,uVar20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                              fVar27 = 100.0;
                            }
                          }
                          if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                          RecordManager_UpdateAchievementRecord_12b2930
                                    (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                        }
                      }
                    }
                    puVar4 = PTR_DAT_029be2c8;
                    if (*ppRVar26 != (RecordManager *)0x0) {
                      pvVar21 = *(void **)PTR_DAT_029be2c8;
                      fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                         (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                      if (fVar27 < 100.0) {
                        if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                        fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3b9c) * 100.0;
                        if (100.0 <= fVar27) {
                          pGVar19 = *ppvVar1;
                          if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                          uVar20 = *(undefined8 *)puVar4;
                          lVar22 = *(long *)&pGVar19->field_0x10;
                          lVar25 = *(long *)PTR_DAT_029b8420;
                          *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                          if (lVar22 == 0) goto LAB_0139fcb0;
                          uVar24 = *(uint *)&pGVar19->field_0x18;
                          if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                            *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                            *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                          }
                          else {
                            pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
                            pGVar19 = (GameController *)NativeHelper_01a2fa14();
                          }
                          if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                          GameController_SendScoreMilestoneEvent_12872f0
                                    (pGVar19,self->GamePlayer->Score,pvVar21);
                          fVar27 = 100.0;
                        }
                        if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                        RecordManager_UpdateAchievementRecord_12b2930
                                  (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                      }
                      puVar4 = PTR_DAT_029be340;
                      if (*ppRVar26 != (RecordManager *)0x0) {
                        pvVar21 = *(void **)PTR_DAT_029be340;
                        fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                           (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                        if (fVar27 < 100.0) {
                          if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                          fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3ba0) * 100.0;
                          if (100.0 <= fVar27) {
                            pGVar19 = *ppvVar1;
                            if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                            uVar20 = *(undefined8 *)puVar4;
                            lVar22 = *(long *)&pGVar19->field_0x10;
                            lVar25 = *(long *)PTR_DAT_029b8420;
                            *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                            if (lVar22 == 0) goto LAB_0139fcb0;
                            uVar24 = *(uint *)&pGVar19->field_0x18;
                            if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                              *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                              *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                            }
                            else {
                              pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70
                                                  );
                              pGVar19 = (GameController *)NativeHelper_01a2fa14();
                            }
                            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                            GameController_SendScoreMilestoneEvent_12872f0
                                      (pGVar19,self->GamePlayer->Score,pvVar21);
                            fVar27 = 100.0;
                          }
                          if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                          RecordManager_UpdateAchievementRecord_12b2930
                                    (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                        }
                        puVar4 = PTR_DAT_029be328;
                        if (*ppRVar26 != (RecordManager *)0x0) {
                          pvVar21 = *(void **)PTR_DAT_029be328;
                          fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                             (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                          if (fVar27 < 100.0) {
                            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                            fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3b6c) * 100.0;
                            if (100.0 <= fVar27) {
                              pGVar19 = *ppvVar1;
                              if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                              uVar20 = *(undefined8 *)puVar4;
                              lVar22 = *(long *)&pGVar19->field_0x10;
                              lVar25 = *(long *)PTR_DAT_029b8420;
                              *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                              if (lVar22 == 0) goto LAB_0139fcb0;
                              uVar24 = *(uint *)&pGVar19->field_0x18;
                              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                              }
                              else {
                                pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) +
                                                    0x70);
                                pGVar19 = (GameController *)NativeHelper_01a2fa14();
                              }
                              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                              GameController_SendScoreMilestoneEvent_12872f0
                                        (pGVar19,self->GamePlayer->Score,pvVar21);
                              fVar27 = 100.0;
                            }
                            if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                            RecordManager_UpdateAchievementRecord_12b2930
                                      (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                          }
                          puVar4 = PTR_DAT_029be240;
                          if (*ppRVar26 != (RecordManager *)0x0) {
                            pvVar21 = *(void **)PTR_DAT_029be240;
                            fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                               (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                            if (fVar27 < 100.0) {
                              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                              fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3bd8) * 100.0;
                              if (100.0 <= fVar27) {
                                pGVar19 = *ppvVar1;
                                if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                uVar20 = *(undefined8 *)puVar4;
                                lVar22 = *(long *)&pGVar19->field_0x10;
                                lVar25 = *(long *)PTR_DAT_029b8420;
                                *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                                if (lVar22 == 0) goto LAB_0139fcb0;
                                uVar24 = *(uint *)&pGVar19->field_0x18;
                                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                  *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                  *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                                }
                                else {
                                  pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) +
                                                      0x70);
                                  pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                }
                                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                                GameController_SendScoreMilestoneEvent_12872f0
                                          (pGVar19,self->GamePlayer->Score,pvVar21);
                                fVar27 = 100.0;
                              }
                              if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                              RecordManager_UpdateAchievementRecord_12b2930
                                        (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                            }
                            puVar4 = PTR_DAT_029be268;
                            if (*ppRVar26 != (RecordManager *)0x0) {
                              pvVar21 = *(void **)PTR_DAT_029be268;
                              fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                 (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                              if (fVar27 < 100.0) {
                                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                                fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3c74) * 100.0;
                                if (100.0 <= fVar27) {
                                  pGVar19 = *ppvVar1;
                                  if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                  uVar20 = *(undefined8 *)puVar4;
                                  lVar22 = *(long *)&pGVar19->field_0x10;
                                  lVar25 = *(long *)PTR_DAT_029b8420;
                                  *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                                  if (lVar22 == 0) goto LAB_0139fcb0;
                                  uVar24 = *(uint *)&pGVar19->field_0x18;
                                  if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                    *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                    *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                                  }
                                  else {
                                    pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0)
                                                        + 0x70);
                                    pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                  }
                                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                                  GameController_SendScoreMilestoneEvent_12872f0
                                            (pGVar19,self->GamePlayer->Score,pvVar21);
                                  fVar27 = 100.0;
                                }
                                if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                RecordManager_UpdateAchievementRecord_12b2930
                                          (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                              }
                              puVar4 = PTR_DAT_029be1d8;
                              if (*ppRVar26 != (RecordManager *)0x0) {
                                pvVar21 = *(void **)PTR_DAT_029be1d8;
                                fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                   (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                                if (fVar27 < 100.0) {
                                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0139fcb0;
                                  fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3d50) * 100.0;
                                  if (100.0 <= fVar27) {
                                    pGVar19 = *ppvVar1;
                                    if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                    uVar20 = *(undefined8 *)puVar4;
                                    lVar22 = *(long *)&pGVar19->field_0x10;
                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                    *(int *)&pGVar19->field_0x1c = *(int *)&pGVar19->field_0x1c + 1;
                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                    uVar24 = *(uint *)&pGVar19->field_0x18;
                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                      *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                      *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                           uVar20;
                                    }
                                    else {
                                      pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0
                                                                    ) + 0x70);
                                      pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                    }
                                    if (self->GamePlayer == (CharacterPlayer *)0x0)
                                    goto LAB_0139fcb0;
                                    GameController_SendScoreMilestoneEvent_12872f0
                                              (pGVar19,self->GamePlayer->Score,pvVar21);
                                    fVar27 = 100.0;
                                  }
                                  if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                  RecordManager_UpdateAchievementRecord_12b2930
                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                                }
                                puVar4 = PTR_DAT_029be1f0;
                                if (*ppRVar26 != (RecordManager *)0x0) {
                                  pvVar21 = *(void **)PTR_DAT_029be1f0;
                                  fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                     (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                                  if (fVar27 < 100.0) {
                                    if (self->GamePlayer == (CharacterPlayer *)0x0)
                                    goto LAB_0139fcb0;
                                    fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3d44) *
                                             100.0;
                                    if (100.0 <= fVar27) {
                                      pGVar19 = *ppvVar1;
                                      if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                      uVar20 = *(undefined8 *)puVar4;
                                      lVar22 = *(long *)&pGVar19->field_0x10;
                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                      *(int *)&pGVar19->field_0x1c =
                                           *(int *)&pGVar19->field_0x1c + 1;
                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                      uVar24 = *(uint *)&pGVar19->field_0x18;
                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                        *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                        *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                             uVar20;
                                      }
                                      else {
                                        pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) +
                                                                      0xc0) + 0x70);
                                        pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                      }
                                      if (self->GamePlayer == (CharacterPlayer *)0x0)
                                      goto LAB_0139fcb0;
                                      GameController_SendScoreMilestoneEvent_12872f0
                                                (pGVar19,self->GamePlayer->Score,pvVar21);
                                      fVar27 = 100.0;
                                    }
                                    if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                    RecordManager_UpdateAchievementRecord_12b2930
                                              (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0);
                                  }
                                  puVar4 = PTR_DAT_029be338;
                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                    pvVar21 = *(void **)PTR_DAT_029be338;
                                    fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                       (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                                    if (fVar27 < 100.0) {
                                      if (self->GamePlayer == (CharacterPlayer *)0x0)
                                      goto LAB_0139fcb0;
                                      fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3c18) *
                                               100.0;
                                      if (100.0 <= fVar27) {
                                        pGVar19 = *ppvVar1;
                                        if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                        uVar20 = *(undefined8 *)puVar4;
                                        lVar22 = *(long *)&pGVar19->field_0x10;
                                        lVar25 = *(long *)PTR_DAT_029b8420;
                                        *(int *)&pGVar19->field_0x1c =
                                             *(int *)&pGVar19->field_0x1c + 1;
                                        if (lVar22 == 0) goto LAB_0139fcb0;
                                        uVar24 = *(uint *)&pGVar19->field_0x18;
                                        if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                          *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                          *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                               uVar20;
                                        }
                                        else {
                                          pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20) +
                                                                        0xc0) + 0x70);
                                          pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                        }
                                        if (self->GamePlayer == (CharacterPlayer *)0x0)
                                        goto LAB_0139fcb0;
                                        GameController_SendScoreMilestoneEvent_12872f0
                                                  (pGVar19,self->GamePlayer->Score,pvVar21);
                                        fVar27 = 100.0;
                                      }
                                      if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                      RecordManager_UpdateAchievementRecord_12b2930
                                                (*ppRVar26,iVar5,*(void **)puVar4,fVar27,(void *)0x0
                                                );
                                    }
                                    puVar4 = PTR_DAT_029be258;
                                    if (self->UsedPowers == false) {
                                      if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                      fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                         (*ppRVar26,iVar5,*(void **)PTR_DAT_029be258
                                                          ,(void *)0x0);
                                      if (fVar27 < 100.0) {
                                        if (self->GamePlayer == (CharacterPlayer *)0x0)
                                        goto LAB_0139fcb0;
                                        fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3d50) *
                                                 100.0;
                                        if (100.0 <= fVar27) {
                                          pvVar21 = *ppvVar1;
                                          if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                          uVar20 = *(undefined8 *)puVar4;
                                          lVar22 = *(long *)((long)pvVar21 + 0x10);
                                          lVar25 = *(long *)PTR_DAT_029b8420;
                                          *(int *)((long)pvVar21 + 0x1c) =
                                               *(int *)((long)pvVar21 + 0x1c) + 1;
                                          if (lVar22 == 0) goto LAB_0139fcb0;
                                          uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                          if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                            *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                            *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                 uVar20;
                                            fVar27 = 100.0;
                                          }
                                          else {
                                            NativeHelper_01a2fa14
                                                      (pvVar21,uVar20,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0)
                                                        + 0x70));
                                            fVar27 = 100.0;
                                          }
                                        }
                                        if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                        RecordManager_UpdateAchievementRecord_12b2930
                                                  (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                   (void *)0x0);
                                      }
                                    }
                                    puVar4 = PTR_DAT_029be1f8;
                                    if (*ppRVar26 != (RecordManager *)0x0) {
                                      pvVar21 = *(void **)PTR_DAT_029be1f8;
                                      fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                         (*ppRVar26,iVar5,pvVar21,(void *)0x0);
                                      if (fVar27 < 100.0) {
                                        if (self->GamePlayer == (CharacterPlayer *)0x0)
                                        goto LAB_0139fcb0;
                                        fVar27 = ((float)self->GamePlayer->Score / _UNK_007a3bf8) *
                                                 100.0;
                                        if (100.0 <= fVar27) {
                                          pGVar19 = *ppvVar1;
                                          if (pGVar19 == (GameController *)0x0) goto LAB_0139fcb0;
                                          uVar20 = *(undefined8 *)puVar4;
                                          lVar22 = *(long *)&pGVar19->field_0x10;
                                          lVar25 = *(long *)PTR_DAT_029b8420;
                                          *(int *)&pGVar19->field_0x1c =
                                               *(int *)&pGVar19->field_0x1c + 1;
                                          if (lVar22 == 0) goto LAB_0139fcb0;
                                          uVar24 = *(uint *)&pGVar19->field_0x18;
                                          if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                            *(uint *)&pGVar19->field_0x18 = uVar24 + 1;
                                            *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                 uVar20;
                                          }
                                          else {
                                            pvVar21 = *(void **)(*(long *)(*(long *)(lVar25 + 0x20)
                                                                          + 0xc0) + 0x70);
                                            pGVar19 = (GameController *)NativeHelper_01a2fa14();
                                          }
                                          if (self->GamePlayer == (CharacterPlayer *)0x0)
                                          goto LAB_0139fcb0;
                                          GameController_SendScoreMilestoneEvent_12872f0
                                                    (pGVar19,self->GamePlayer->Score,pvVar21);
                                          fVar27 = 100.0;
                                        }
                                        if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                        RecordManager_UpdateAchievementRecord_12b2930
                                                  (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                   (void *)0x0);
                                      }
                                      puVar4 = PTR_DAT_029be1b0;
                                      if (*ppRVar26 != (RecordManager *)0x0) {
                                        fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                           (*ppRVar26,iVar5,
                                                            *(void **)PTR_DAT_029be1b0,(void *)0x0);
                                        if (fVar27 < 100.0) {
                                          if (self->GamePlayer == (CharacterPlayer *)0x0)
                                          goto LAB_0139fcb0;
                                          fVar27 = ((float)self->GamePlayer->CoinCountTotal / 100.0)
                                                   * 100.0;
                                          if (100.0 <= fVar27) {
                                            pvVar21 = *ppvVar1;
                                            if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                            uVar20 = *(undefined8 *)puVar4;
                                            lVar22 = *(long *)((long)pvVar21 + 0x10);
                                            lVar25 = *(long *)PTR_DAT_029b8420;
                                            *(int *)((long)pvVar21 + 0x1c) =
                                                 *(int *)((long)pvVar21 + 0x1c) + 1;
                                            if (lVar22 == 0) goto LAB_0139fcb0;
                                            uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                            if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                              *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                              *(undefined8 *)(lVar22 + (long)(int)uVar24 * 8 + 0x20)
                                                   = uVar20;
                                              fVar27 = 100.0;
                                            }
                                            else {
                                              NativeHelper_01a2fa14
                                                        (pvVar21,uVar20,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                              fVar27 = 100.0;
                                            }
                                          }
                                          if (*ppRVar26 == (RecordManager *)0x0) goto LAB_0139fcb0;
                                          RecordManager_UpdateAchievementRecord_12b2930
                                                    (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                     (void *)0x0);
                                        }
                                        puVar4 = PTR_DAT_029be260;
                                        if (*ppRVar26 != (RecordManager *)0x0) {
                                          fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                             (*ppRVar26,iVar5,
                                                              *(void **)PTR_DAT_029be260,(void *)0x0
                                                             );
                                          if (fVar27 < 100.0) {
                                            if (self->GamePlayer == (CharacterPlayer *)0x0)
                                            goto LAB_0139fcb0;
                                            fVar27 = ((float)self->GamePlayer->CoinCountTotal /
                                                     250.0) * 100.0;
                                            if (100.0 <= fVar27) {
                                              pvVar21 = *ppvVar1;
                                              if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                              uVar20 = *(undefined8 *)puVar4;
                                              lVar22 = *(long *)((long)pvVar21 + 0x10);
                                              lVar25 = *(long *)PTR_DAT_029b8420;
                                              *(int *)((long)pvVar21 + 0x1c) =
                                                   *(int *)((long)pvVar21 + 0x1c) + 1;
                                              if (lVar22 == 0) goto LAB_0139fcb0;
                                              uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                              if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                *(undefined8 *)
                                                 (lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                                                fVar27 = 100.0;
                                              }
                                              else {
                                                NativeHelper_01a2fa14
                                                          (pvVar21,uVar20,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar25 + 0x20) +
                                                                      0xc0) + 0x70));
                                                fVar27 = 100.0;
                                              }
                                            }
                                            if (*ppRVar26 == (RecordManager *)0x0)
                                            goto LAB_0139fcb0;
                                            RecordManager_UpdateAchievementRecord_12b2930
                                                      (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                       (void *)0x0);
                                          }
                                          puVar4 = PTR_DAT_029be208;
                                          if (*ppRVar26 != (RecordManager *)0x0) {
                                            fVar27 = RecordManager_GetProgressForAchievement_12b2910
                                                               (*ppRVar26,iVar5,
                                                                *(void **)PTR_DAT_029be208,
                                                                (void *)0x0);
                                            if (fVar27 < 100.0) {
                                              if (self->GamePlayer == (CharacterPlayer *)0x0)
                                              goto LAB_0139fcb0;
                                              fVar27 = ((float)self->GamePlayer->CoinCountTotal /
                                                       500.0) * 100.0;
                                              if (100.0 <= fVar27) {
                                                pvVar21 = *ppvVar1;
                                                if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                uVar20 = *(undefined8 *)puVar4;
                                                lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                lVar25 = *(long *)PTR_DAT_029b8420;
                                                *(int *)((long)pvVar21 + 0x1c) =
                                                     *(int *)((long)pvVar21 + 0x1c) + 1;
                                                if (lVar22 == 0) goto LAB_0139fcb0;
                                                uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                  *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                  *(undefined8 *)
                                                   (lVar22 + (long)(int)uVar24 * 8 + 0x20) = uVar20;
                                                  fVar27 = 100.0;
                                                }
                                                else {
                                                  NativeHelper_01a2fa14
                                                            (pvVar21,uVar20,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar25 + 0x20) +
                                                                        0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                }
                                              }
                                              if (*ppRVar26 == (RecordManager *)0x0)
                                              goto LAB_0139fcb0;
                                              RecordManager_UpdateAchievementRecord_12b2930
                                                        (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                         (void *)0x0);
                                            }
                                            puVar4 = PTR_DAT_029be288;
                                            if (*ppRVar26 != (RecordManager *)0x0) {
                                              fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be288,(void *)0x0)
                                              ;
                                              if (fVar27 < 100.0) {
                                                if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                goto LAB_0139fcb0;
                                                fVar27 = ((float)self->GamePlayer->CoinCountTotal /
                                                         _UNK_007a3b70) * 100.0;
                                                if (100.0 <= fVar27) {
                                                  pvVar21 = *ppvVar1;
                                                  if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                  uVar20 = *(undefined8 *)puVar4;
                                                  lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                  lVar25 = *(long *)PTR_DAT_029b8420;
                                                  *(int *)((long)pvVar21 + 0x1c) =
                                                       *(int *)((long)pvVar21 + 0x1c) + 1;
                                                  if (lVar22 == 0) goto LAB_0139fcb0;
                                                  uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                  if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                    *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                    *(undefined8 *)
                                                     (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                         uVar20;
                                                    fVar27 = 100.0;
                                                  }
                                                  else {
                                                    NativeHelper_01a2fa14
                                                              (pvVar21,uVar20,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar25 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                    fVar27 = 100.0;
                                                  }
                                                }
                                                if (*ppRVar26 == (RecordManager *)0x0)
                                                goto LAB_0139fcb0;
                                                RecordManager_UpdateAchievementRecord_12b2930
                                                          (*ppRVar26,iVar5,*(void **)puVar4,fVar27,
                                                           (void *)0x0);
                                              }
                                              puVar4 = PTR_DAT_029be1b8;
                                              if (*ppRVar26 != (RecordManager *)0x0) {
                                                fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1b8,(void *)0x0)
                                                ;
                                                if (fVar27 < 100.0) {
                                                  if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                  goto LAB_0139fcb0;
                                                  fVar27 = ((float)self->GamePlayer->CoinCountTotal
                                                           / 1000.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                }
                                                puVar4 = PTR_DAT_029be1e8;
                                                if (*ppRVar26 != (RecordManager *)0x0) {
                                                  fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1e8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                    goto LAB_0139fcb0;
                                                    fVar27 = ((float)self->GamePlayer->
                                                                     CoinCountTotal / _UNK_007a3ce4)
                                                             * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be220;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be220,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                    goto LAB_0139fcb0;
                                                    fVar27 = ((float)self->GamePlayer->
                                                                     CoinCountTotal / _UNK_007a3ccc)
                                                             * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be318;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be318,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                    goto LAB_0139fcb0;
                                                    fVar27 = ((float)self->GamePlayer->BonusLevelMax
                                                             / 5.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be2f8;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2f8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (float)self->ResurrectionCount * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be2e0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2e0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (float)self->ResurrectionCount * 0.5 *
                                                             100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1a8;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1a8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if ((self->UsedHeadStart == false) &&
                                                       (self->UsedHeadStartMega == false)) {
                                                      fVar27 = 0.0;
                                                    }
                                                    else {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be360;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be360,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x6,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x7,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar8 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x8,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar9 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x5,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  bVar23 = 1;
                                                  if (0 < iVar6) {
                                                    bVar23 = 2;
                                                  }
                                                  bVar3 = 0 < iVar6;
                                                  if (0 < iVar7) {
                                                    bVar3 = bVar23;
                                                  }
                                                  if (0 < iVar8) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  if (0 < iVar9) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x9,(void *)0x0
                                                            );
                                                  if (0 < iVar6) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  fVar27 = ((float)bVar3 / 5.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be270;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be270,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x6,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x7,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar8 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x8,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar9 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x5,(void *)0x0
                                                            );
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  bVar23 = 1;
                                                  if (4 < iVar6) {
                                                    bVar23 = 2;
                                                  }
                                                  bVar3 = 4 < iVar6;
                                                  if (4 < iVar7) {
                                                    bVar3 = bVar23;
                                                  }
                                                  if (4 < iVar8) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  if (4 < iVar9) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x9,(void *)0x0
                                                            );
                                                  if (4 < iVar6) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  fVar27 = ((float)bVar3 / 5.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be210,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x10,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x11,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar8 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x12,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar9 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x13,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar10 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x14,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar11 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x16,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar12 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1c,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar13 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1d,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar14 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1e,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar15 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1f,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar16 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x20,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar17 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x21,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar18 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x22,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  uVar24 = 1;
                                                  if (0 < iVar6) {
                                                    uVar24 = 2;
                                                  }
                                                  uVar2 = (uint)(0 < iVar6);
                                                  if (0 < iVar7) {
                                                    uVar2 = uVar24;
                                                  }
                                                  if (0 < iVar8) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar9) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar10) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar11) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar12) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar13) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar14) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar15) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar16) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar17) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar18) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x23,
                                                             (void *)0x0);
                                                  puVar4 = PTR_DAT_029be210;
                                                  if (0 < iVar6) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  fVar27 = (float)uVar2 * 0.5 * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)PTR_DAT_029be210;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be350,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x10,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x11,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar8 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x12,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar9 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x13,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar10 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x14,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar11 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x16,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar12 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1c,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar13 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1d,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar14 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1e,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar15 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1f,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar16 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x20,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar17 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x21,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar18 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x22,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  uVar24 = 1;
                                                  if (0 < iVar6) {
                                                    uVar24 = 2;
                                                  }
                                                  uVar2 = (uint)(0 < iVar6);
                                                  if (0 < iVar7) {
                                                    uVar2 = uVar24;
                                                  }
                                                  if (0 < iVar8) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar9) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar10) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar11) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar12) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar13) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar14) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar15) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar16) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar17) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar18) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x23,
                                                             (void *)0x0);
                                                  puVar4 = PTR_DAT_029be350;
                                                  if (0 < iVar6) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  fVar27 = (float)uVar2 * 0.25 * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)PTR_DAT_029be350;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be308,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x10,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x11,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar8 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x12,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar9 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x13,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar10 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x14,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar11 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x16,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar12 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1c,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar13 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x23,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar14 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1d,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar15 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1e,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar16 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x1f,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar17 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x21,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar18 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x22,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  uVar24 = 1;
                                                  if (0 < iVar6) {
                                                    uVar24 = 2;
                                                  }
                                                  uVar2 = (uint)(0 < iVar6);
                                                  if (0 < iVar7) {
                                                    uVar2 = uVar24;
                                                  }
                                                  if (0 < iVar8) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar9) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar10) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar11) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar12) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar13) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar14) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar15) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar16) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar17) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  if (0 < iVar18) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x20,
                                                             (void *)0x0);
                                                  puVar4 = PTR_DAT_029be308;
                                                  if (0 < iVar6) {
                                                    uVar2 = uVar2 + 1;
                                                  }
                                                  fVar27 = ((float)uVar2 / 6.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)PTR_DAT_029be308;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be330;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be330,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    if (*ppRVar26 == (RecordManager *)0x0)
                                                    goto LAB_0139fcb0;
                                                    iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x17,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  iVar7 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x18,
                                                             (void *)0x0);
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  bVar23 = 1;
                                                  if (0 < iVar6) {
                                                    bVar23 = 2;
                                                  }
                                                  bVar3 = 0 < iVar6;
                                                  if (0 < iVar7) {
                                                    bVar3 = bVar23;
                                                  }
                                                  iVar6 = 
                                                  RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                            (*ppRVar26,iVar5,(void *)0x19,
                                                             (void *)0x0);
                                                  if (0 < iVar6) {
                                                    bVar3 = bVar3 + 1;
                                                  }
                                                  fVar27 = ((float)bVar3 / 3.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    iVar6 = RecordManager_GetLifetimePlays_12b1178
                                                                      (*ppRVar26,iVar5,(void *)0x0);
                                                    puVar4 = PTR_DAT_029be200;
                                                    if (*ppRVar26 != (RecordManager *)0x0) {
                                                      fVar28 = (float)iVar6;
                                                      fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be200,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / 1000.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be2e8;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2e8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3ccc) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be250;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be250,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3c64) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    iVar6 = RecordManager_GetLifetimeCoins_12b46d0
                                                                      (*ppRVar26,iVar5,(void *)0x0);
                                                    puVar4 = PTR_DAT_029be2a8;
                                                    if (*ppRVar26 != (RecordManager *)0x0) {
                                                      fVar28 = (float)iVar6;
                                                      fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2a8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3b6c) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be280;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be280,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3c74) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be2a0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2a0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3d50) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (self->PlayerManager == (void *)0x0)
                                                  goto LAB_0139fcb0;
                                                  self_00 = self->RecordManager;
                                                  iVar6 = PlayerManager_GetActivePlayer_12ccc8c
                                                                    (self->PlayerManager,(void *)0x0
                                                                    );
                                                  if (self_00 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (self_00,iVar6,*(void **)puVar4,fVar27,
                                                             (void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    iVar6 = 
                                                  RecordManager_GetLifetimeDistance_12b46e8
                                                            (*ppRVar26,iVar5,(void *)0x0);
                                                  puVar4 = PTR_DAT_029be248;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar28 = (float)iVar6;
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be248,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3b6c) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be278;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be278,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3d50) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be298;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be298,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = (fVar28 / _UNK_007a3bf8) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1a0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1a0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMagnetBonusesPickedUp
                                                             / 5.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be348;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be348,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMagnetBonusesPickedUp
                                                             / 10.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be320;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be320,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMagnetBonusesPickedUp
                                                             / 20.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be358;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be358,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMegaCoinsPickedUp /
                                                             5.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be238;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be238,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMegaCoinsPickedUp /
                                                             10.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be310;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be310,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumMegaCoinsPickedUp /
                                                             20.0) * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1d0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1d0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->
                                                  NumInvisibilityBonusesPickedUp / 5.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1c8;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1c8,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->
                                                  NumInvisibilityBonusesPickedUp / 10.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1e0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1e0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->
                                                  NumInvisibilityBonusesPickedUp / 20.0) * 100.0;
                                                  if (100.0 <= fVar27) {
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                    uVar20 = *(undefined8 *)puVar4;
                                                    lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                    lVar25 = *(long *)PTR_DAT_029b8420;
                                                    *(int *)((long)pvVar21 + 0x1c) =
                                                         *(int *)((long)pvVar21 + 0x1c) + 1;
                                                    if (lVar22 == 0) goto LAB_0139fcb0;
                                                    uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                    if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                      *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1;
                                                      *(undefined8 *)
                                                       (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                           uVar20;
                                                      fVar27 = 100.0;
                                                    }
                                                    else {
                                                      NativeHelper_01a2fa14
                                                                (pvVar21,uVar20,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                      fVar27 = 100.0;
                                                    }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be1c0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be1c0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumBoostsPickedUp / 5.0)
                                                             * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be2b0;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be2b0,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumBoostsPickedUp / 10.0)
                                                             * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  puVar4 = PTR_DAT_029be230;
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    fVar27 = 
                                                  RecordManager_GetProgressForAchievement_12b2910
                                                            (*ppRVar26,iVar5,
                                                             *(void **)PTR_DAT_029be230,(void *)0x0)
                                                  ;
                                                  if (fVar27 < 100.0) {
                                                    fVar27 = ((float)self->NumBoostsPickedUp / 20.0)
                                                             * 100.0;
                                                    if (100.0 <= fVar27) {
                                                      pvVar21 = *ppvVar1;
                                                      if (pvVar21 == (void *)0x0) goto LAB_0139fcb0;
                                                      uVar20 = *(undefined8 *)puVar4;
                                                      lVar22 = *(long *)((long)pvVar21 + 0x10);
                                                      lVar25 = *(long *)PTR_DAT_029b8420;
                                                      *(int *)((long)pvVar21 + 0x1c) =
                                                           *(int *)((long)pvVar21 + 0x1c) + 1;
                                                      if (lVar22 == 0) goto LAB_0139fcb0;
                                                      uVar24 = *(uint *)((long)pvVar21 + 0x18);
                                                      if (uVar24 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)((long)pvVar21 + 0x18) = uVar24 + 1
                                                        ;
                                                        *(undefined8 *)
                                                         (lVar22 + (long)(int)uVar24 * 8 + 0x20) =
                                                             uVar20;
                                                        fVar27 = 100.0;
                                                      }
                                                      else {
                                                        NativeHelper_01a2fa14
                                                                  (pvVar21,uVar20,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar25 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  fVar27 = 100.0;
                                                  }
                                                  }
                                                  if (*ppRVar26 == (RecordManager *)0x0)
                                                  goto LAB_0139fcb0;
                                                  RecordManager_UpdateAchievementRecord_12b2930
                                                            (*ppRVar26,iVar5,*(void **)puVar4,fVar27
                                                             ,(void *)0x0);
                                                  }
                                                  if (*ppRVar26 != (RecordManager *)0x0) {
                                                    RecordManager_SaveRecords_12b3350
                                                              (*ppRVar26,(void *)0x0);
                                                    puVar4 = PTR_DAT_029b9b28;
                                                    pvVar21 = *ppvVar1;
                                                    if (pvVar21 != (void *)0x0) {
                                                      iVar5 = 0;
                                                      do {
                                                        if (*(int *)((long)pvVar21 + 0x18) <= iVar5)
                                                        {
                                                          return;
                                                        }
                                                        pvVar21 = (void *)NativeHelper_01a2f750
                                                                                    (pvVar21,iVar5,
                                                                                     *(undefined8 *)
                                                                                      puVar4);
                                                        if (*ppRVar26 == (RecordManager *)0x0)
                                                        break;
                                                                                                                
                                                  RecordManager_SendUnlockAchievementEvent_12ae20c
                                                            (*ppRVar26,pvVar21,(void *)0x0);
                                                  pvVar21 = *ppvVar1;
                                                  iVar5 = iVar5 + 1;
                                                  } while (pvVar21 != (void *)0x0);
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
LAB_0139fcb0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

