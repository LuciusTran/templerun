// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UseAngelWings() { }
// Ghidra address: 0139fcd8; ELF VA: 0x129fcd8; file offset: 0x129bcd8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_UseAngelWings_129bcd8(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  CharacterPlayer *self_00;
  long lVar5;
  long *plVar6;
  Imangi_Analytics_EventParameter *pIVar7;
  undefined8 uVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  RecordManager *self_01;
  void *inEventId;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  
  if ((bRam0000000002b94d0f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be368);
    NativeHelper_011df0b4(PTR_DAT_029be370);
    bRam0000000002b94d0f = 1;
  }
  if ((((self->IsPaused != false) || (self->IsInCountdown != false)) || (self->IsGameOver != false))
     || ((self->IsTutorialMode != false || (self->IsIntroScene != false)))) {
    return;
  }
  self_00 = self->GamePlayer;
  if (self_00 != (CharacterPlayer *)0x0) {
    if (self_00->IsDead != false) {
      return;
    }
    if (self_00->IsFalling != false) {
      return;
    }
    if (self_00->HasAngelWings != false) {
      return;
    }
    if (self_00->AngelWingsRechargeTimeLeft != 0.0) {
      return;
    }
    if (self_00->AngelWingsCount < 1) {
      return;
    }
    CharacterPlayer_StartAngelWings_12be840(self_00,30.0,false,(void *)0x0);
    if (self->Audio != (AudioManager *)0x0) {
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
      if (self->Audio != (AudioManager *)0x0) {
        AudioManager_PlayFX_12bb190(self->Audio,(void *)0x0,0.75,(void *)0x0);
        if (self->PlayerManager != (void *)0x0) {
          self_01 = self->RecordManager;
          iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
          if ((self->GamePlayer != (CharacterPlayer *)0x0) && (self_01 != (RecordManager *)0x0)) {
            RecordManager_SetPlayerLevelForUpgradeType_12b3198
                      (self_01,iVar4,(void *)0x0,self->GamePlayer->AngelWingsCount,(void *)0x0);
            if (self->RecordManager != (RecordManager *)0x0) {
              RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
              self->UsedPowers = true;
              self->UsedAngelWingsCount = self->UsedAngelWingsCount + 1;
              if (self->RecordManager != (RecordManager *)0x0) {
                pvVar9 = *(void **)PTR_DAT_029be370;
                pvVar10 = *(void **)PTR_DAT_029be368;
                if ((bRam0000000002b94dc3 & 1) == 0) {
                  NativeHelper_011df0b4(PTR_DAT_029bd9e8);
                  NativeHelper_011df0b4(PTR_DAT_029bd9f0);
                  NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                  bRam0000000002b94dc3 = 1;
                }
                if (cRam0000000002b94df3 == '\0') {
                  NativeHelper_011df0b4(PTR_DAT_029bcb50);
                  cRam0000000002b94df3 = '\x01';
                }
                puVar2 = PTR_DAT_029bd9e8;
                puVar1 = PTR_DAT_029bcb50;
                lVar5 = *(long *)PTR_DAT_029bcb50;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  lVar5 = *(long *)puVar1;
                }
                inEventId = *(void **)(*(long *)(lVar5 + 0xb8) + 0xd0);
                plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,3);
                if (cRam0000000002b94df1 == '\0') {
                  NativeHelper_011df0b4(PTR_DAT_029bcb50);
                  cRam0000000002b94df1 = '\x01';
                }
                puVar2 = PTR_DAT_029bd9f0;
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  lVar5 = *(long *)puVar1;
                }
                pvVar14 = *(void **)(*(long *)(lVar5 + 0xb8) + 0x330);
                pIVar7 = (Imangi_Analytics_EventParameter *)
                         NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar7,pvVar14,1,(void *)0x0)
                ;
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df2dc();
                }
                if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar5 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
                   lVar5 == 0)) {
code_r0x013b21fc:
                  uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df1ac(uVar8,0);
                }
                if ((int)plVar6[3] != 0) {
                  plVar6[4] = (long)pIVar7;
                  if (cRam0000000002b94df2 == '\0') {
                    NativeHelper_011df0b4(PTR_DAT_029bcb50);
                    cRam0000000002b94df2 = '\x01';
                  }
                  lVar5 = *(long *)puVar1;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    lVar5 = *(long *)puVar1;
                  }
                  pvVar14 = *(void **)(*(long *)(lVar5 + 0xb8) + 0x338);
                  pIVar7 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar7,pvVar14,pvVar9,(void *)0x0);
                  if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar5 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
                     lVar5 == 0)) goto code_r0x013b21fc;
                  if (1 < *(uint *)(plVar6 + 3)) {
                    plVar6[5] = (long)pIVar7;
                    if (cRam0000000002b94df4 == '\0') {
                      NativeHelper_011df0b4(PTR_DAT_029bcb50);
                      cRam0000000002b94df4 = '\x01';
                    }
                    lVar5 = *(long *)puVar1;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      NativeHelper_011df1bc();
                      lVar5 = *(long *)puVar1;
                    }
                    pvVar9 = *(void **)(*(long *)(lVar5 + 0xb8) + 0x228);
                    pIVar7 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar2);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar7,pvVar9,pvVar10,(void *)0x0);
                    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar5 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar5 == 0)) goto code_r0x013b21fc;
                    puVar1 = PTR_DAT_029bd9d0;
                    if (2 < *(uint *)(plVar6 + 3)) {
                      plVar6[6] = (long)pIVar7;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                      }
                      puVar1 = PTR_DAT_029bd9d0;
                      runtimeMethod_00 = plVar6;
                      if ((bRam0000000002b94e0c & 1) == 0) {
                        NativeHelper_011df0b4(PTR_DAT_029bd9d0,plVar6,0);
                        bRam0000000002b94e0c = 1;
                        runtimeMethod_00 = extraout_x1_01;
                      }
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                        runtimeMethod_00 = extraout_x1_02;
                      }
                      bVar3 = TRAnalytics_IsEventEnabled_12b6e24(inEventId,runtimeMethod_00);
                      if (!bVar3) {
                        return;
                      }
                      Imangi_Analytics_Analytics_LogEvent_126b0dc(inEventId,plVar6,(void *)0x0);
                      pvVar9 = extraout_x1_03;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                        pvVar9 = extraout_x1_04;
                      }
                      puVar1 = PTR_DAT_029bd9d0;
                      if ((bRam0000000002b94e0d & 1) == 0) {
                        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                        bRam0000000002b94e0d = 1;
                        pvVar9 = extraout_x1;
                      }
                      lVar5 = *(long *)puVar1;
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                        lVar5 = *(long *)puVar1;
                        pvVar9 = extraout_x1_00;
                      }
                      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df2dc();
                      }
                      if ((bRam0000000002b94e34 & 1) == 0) {
                        NativeHelper_011df0b4(PTR_DAT_029bd9e8);
                        NativeHelper_011df0b4(PTR_DAT_029bd9f0);
                        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                        NativeHelper_011df0b4(PTR_DAT_029bf150);
                        bRam0000000002b94e34 = 1;
                        pvVar9 = extraout_x1_05;
                      }
                      puVar1 = PTR_DAT_029bf150;
                      if (*(char *)(lVar5 + 0x30) != '\0') {
                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                          pvVar9 = extraout_x1_06;
                        }
                        bVar3 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar1,pvVar9);
                        if (bVar3) {
                          if ((*(long *)(lVar5 + 0x10) != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
                            plVar6 = (long *)NativeHelper_011df12c
                                                       (*(undefined8 *)PTR_DAT_029bd9e8,
                                                        *(int *)(*(long *)(lVar5 + 0x20) + 0x18) +
                                                        *(int *)(*(long *)(lVar5 + 0x10) + 0x18));
                            puVar2 = PTR_DAT_029bd9f0;
                            lVar12 = *(long *)(lVar5 + 0x10);
                            if (lVar12 != 0) {
                              lVar15 = 4;
                              do {
                                uVar16 = lVar15 - 4;
                                if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
                                  lVar12 = *(long *)(lVar5 + 0x20);
                                  if (lVar12 != 0) {
                                    uVar16 = 0;
                                    goto code_r0x013bb368;
                                  }
                                  break;
                                }
                                if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x013bb438;
                                lVar13 = *(long *)(lVar5 + 0x18);
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
                                pvVar9 = *(void **)(lVar12 + lVar15 * 8);
                                pvVar10 = *(void **)(lVar13 + lVar15 * 8);
                                pIVar7 = (Imangi_Analytics_EventParameter *)
                                         NativeHelper_011df2d0(*(undefined8 *)puVar2);
                                Imangi_Analytics_EventParameter_EventParameter_126b488
                                          (pIVar7,pvVar9,pvVar10,(void *)0x0);
                                if (plVar6 == (long *)0x0) break;
                                if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                                   (lVar12 = NativeHelper_011df1c0
                                                       (pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                   lVar12 == 0)) goto code_r0x013bb43c;
                                if (*(uint *)(plVar6 + 3) <= uVar16) goto code_r0x013bb438;
                                plVar6[lVar15] = (long)pIVar7;
                                lVar12 = *(long *)(lVar5 + 0x10);
                                lVar15 = lVar15 + 1;
                              } while (lVar12 != 0);
                            }
                          }
                          goto code_r0x013bb408;
                        }
                      }
                      return;
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2e4();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar1,plVar6,(void *)0x0);
      *(undefined1 *)(lVar5 + 0x30) = 0;
      return;
    }
    lVar15 = *(long *)(lVar5 + 0x10);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar5 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
    pvVar9 = *(void **)(lVar12 + uVar16 * 8 + 0x20);
    iVar4 = *(int *)(lVar13 + uVar16 * 4 + 0x20);
    pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar7,pvVar9,(long)iVar4,(void *)0x0);
    if (plVar6 == (long *)0x0) break;
    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar12 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0)) {
code_r0x013bb43c:
      uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar8,0);
    }
    uVar11 = (int)uVar16 + (int)*(undefined8 *)(lVar15 + 0x18);
    if (*(uint *)(plVar6 + 3) <= uVar11) goto code_r0x013bb438;
    plVar6[(long)(int)uVar11 + 4] = (long)pIVar7;
    lVar12 = *(long *)(lVar5 + 0x20);
    uVar16 = uVar16 + 1;
  } while (lVar12 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

