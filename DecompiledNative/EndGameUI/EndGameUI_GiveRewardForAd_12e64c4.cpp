// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GiveRewardForAd() { }
// Ghidra address: 013ea4c4; ELF VA: 0x12ea4c4; file offset: 0x12e64c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_GiveRewardForAd_12e64c4(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  Imangi_Analytics_EventParameter *pIVar9;
  undefined8 uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *inParameterName;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  RecordManager *pRVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  
  if ((bRam0000000002b94fd7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bffc8);
    NativeHelper_011df0b4(PTR_DAT_029c0920);
    NativeHelper_011df0b4(PTR_DAT_029c0928);
    NativeHelper_011df0b4(PTR_DAT_029c0930);
    NativeHelper_011df0b4(PTR_DAT_029bf0b8);
    NativeHelper_011df0b4(PTR_DAT_029c0938);
    NativeHelper_011df0b4(PTR_DAT_029c0940);
    bRam0000000002b94fd7 = 1;
  }
  lVar16 = *(long *)&self->field_0x20;
  self->WatchedRewardedAd = true;
  if ((lVar16 != 0) && (*(void **)(lVar16 + 200) != (void *)0x0)) {
    pRVar18 = *(RecordManager **)(lVar16 + 0xc0);
    iVar8 = PlayerManager_GetActivePlayer_12ccc8c(*(void **)(lVar16 + 200),(void *)0x0);
    if (pRVar18 != (RecordManager *)0x0) {
      RecordManager_AddCoins_12af118(pRVar18,iVar8,self->_RewardAmount,(void *)0x0);
      lVar16 = *(long *)&self->field_0x20;
      if ((lVar16 != 0) && (*(void **)(lVar16 + 200) != (void *)0x0)) {
        pRVar18 = *(RecordManager **)(lVar16 + 0xc0);
        iVar8 = PlayerManager_GetActivePlayer_12ccc8c(*(void **)(lVar16 + 200),(void *)0x0);
        if (pRVar18 != (RecordManager *)0x0) {
          RecordManager_IncrimentVideoAdsWatchedCount_12b4834(pRVar18,iVar8,(void *)0x0);
          if ((*(long *)&self->field_0x20 != 0) &&
             (pRVar18 = *(RecordManager **)(*(long *)&self->field_0x20 + 0xc0),
             pRVar18 != (RecordManager *)0x0)) {
            RecordManager_SaveRecords_12b3350(pRVar18,(void *)0x0);
            if ((*(long *)&self->field_0x20 != 0) &&
               (pRVar18 = *(RecordManager **)(*(long *)&self->field_0x20 + 0xc0),
               pRVar18 != (RecordManager *)0x0)) {
              RecordManager_SendEarnVirtualCurrencyEvent_12add1c
                        (pRVar18,self->_RewardAmount,*(void **)PTR_DAT_029bf0b8,
                         *(void **)PTR_DAT_029c0938,(void *)0x0);
              lVar16 = *(long *)&self->field_0x20;
              if ((lVar16 != 0) && (*(void **)(lVar16 + 200) != (void *)0x0)) {
                pRVar18 = *(RecordManager **)(lVar16 + 0xc0);
                iVar8 = PlayerManager_GetActivePlayer_12ccc8c(*(void **)(lVar16 + 200),(void *)0x0);
                puVar6 = PTR_DAT_029c0940;
                puVar5 = PTR_DAT_029c0930;
                puVar4 = PTR_DAT_029c0928;
                puVar3 = PTR_DAT_029c0920;
                puVar2 = PTR_DAT_029bffc8;
                puVar1 = PTR_DAT_029b8c90;
                if (pRVar18 != (RecordManager *)0x0) {
                  iVar8 = RecordManager_GetVideoAdsWatchedCount_12b481c(pRVar18,iVar8,(void *)0x0);
                  RecordManager_SendVideoAdsWatchedMilestoneEvent_12aeb60(pRVar18,iVar8,(void *)0x0)
                  ;
                  plVar19 = (long *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
                  pvVar11 = Strings_Txt_131380c(*(void **)puVar4,false,(void *)0x0);
                  pvVar12 = Strings_Txt_131380c(*(void **)puVar5,false,(void *)0x0);
                  pvVar13 = Strings_Txt_131380c(*(void **)puVar6,false,(void *)0x0);
                  lVar16 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
                  NativeHelper_01f80268(lVar16,self,*(undefined8 *)puVar3,0);
                  if (plVar19 != (long *)0x0) {
                    if ((bRam0000000002b94f84 & 1) == 0) {
                      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                      NativeHelper_011df0b4(PTR_DAT_029bbf28);
                      NativeHelper_011df0b4(PTR_DAT_029bf1b8);
                      bRam0000000002b94f84 = 1;
                    }
                    (**(code **)(*plVar19 + 0x188))(plVar19,1,*(undefined8 *)(*plVar19 + 400));
                    if (plVar19[0xb] != 0) {
                      NativeHelper_02610c54(plVar19[0xb],0,0);
                      if (plVar19[0xc] != 0) {
                        NativeHelper_02610c54(plVar19[0xc],0,0);
                        if (plVar19[0xd] != 0) {
                          NativeHelper_02610c54(plVar19[0xd],0,0);
                          if (plVar19[0x10] != 0) {
                            NativeHelper_02610c54(plVar19[0x10],0,0);
                            if (plVar19[0xe] != 0) {
                              NativeHelper_02610c54(plVar19[0xe],0,0);
                              if ((void *)plVar19[0x14] != (void *)0x0) {
                                UnityEngine_Behaviour_set_enabled_250972c
                                          ((void *)plVar19[0x14],true,(void *)0x0);
                                if ((UILabel *)plVar19[0x14] != (UILabel *)0x0) {
                                  UILabel_set_text_129fea0
                                            ((UILabel *)plVar19[0x14],pvVar11,(void *)0x0);
                                  if ((UILabel *)plVar19[0x15] != (UILabel *)0x0) {
                                    UILabel_set_text_129fea0
                                              ((UILabel *)plVar19[0x15],pvVar12,(void *)0x0);
                                    if ((void *)plVar19[0x15] != (void *)0x0) {
                                      UnityEngine_Behaviour_set_enabled_250972c
                                                ((void *)plVar19[0x15],true,(void *)0x0);
                                      if ((UILabel *)plVar19[0x12] != (UILabel *)0x0) {
                                        UILabel_set_text_129fea0
                                                  ((UILabel *)plVar19[0x12],pvVar13,(void *)0x0);
                                        plVar19[0x1b] = lVar16;
                                        if ((void *)plVar19[0x17] != (void *)0x0) {
                                          UnityEngine_Behaviour_set_enabled_250972c
                                                    ((void *)plVar19[0x17],false,(void *)0x0);
                                          puVar3 = PTR_DAT_029bf1b8;
                                          puVar2 = PTR_DAT_029bd9d0;
                                          puVar1 = PTR_DAT_029bbf28;
                                          if (plVar19[0x16] != 0) {
                                            NativeHelper_02610c54(plVar19[0x16],0,0);
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              NativeHelper_011df1bc();
                                            }
                                            puVar2 = PTR_DAT_029bd9d0;
                                            pvVar13 = *(void **)puVar3;
                                            inParameterName = *(void **)puVar1;
                                            pvVar12 = inParameterName;
                                            if ((bRam0000000002b94e08 & 1) == 0) {
                                              NativeHelper_011df0b4
                                                        (PTR_DAT_029bd9d0,inParameterName,pvVar11,0)
                                              ;
                                              bRam0000000002b94e08 = 1;
                                              pvVar12 = extraout_x1_01;
                                            }
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              NativeHelper_011df1bc();
                                              pvVar12 = extraout_x1_02;
                                            }
                                            bVar7 = TRAnalytics_IsEventEnabled_12b6e24
                                                              (pvVar13,pvVar12);
                                            if (!bVar7) {
                                              return;
                                            }
                                            Imangi_Analytics_Analytics_LogEvent_126af14
                                                      (pvVar13,inParameterName,pvVar11,(void *)0x0);
                                            pvVar11 = extraout_x1_03;
                                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                              NativeHelper_011df1bc();
                                              pvVar11 = extraout_x1_04;
                                            }
                                            puVar1 = PTR_DAT_029bd9d0;
                                            if ((bRam0000000002b94e0d & 1) == 0) {
                                              NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                              bRam0000000002b94e0d = 1;
                                              pvVar11 = extraout_x1;
                                            }
                                            lVar16 = *(long *)puVar1;
                                            if (*(int *)(lVar16 + 0xe0) == 0) {
                                              NativeHelper_011df1bc();
                                              lVar16 = *(long *)puVar1;
                                              pvVar11 = extraout_x1_00;
                                            }
                                            lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x10);
                                            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                              NativeHelper_011df2dc();
                                            }
                                            if ((bRam0000000002b94e34 & 1) == 0) {
                                              NativeHelper_011df0b4(PTR_DAT_029bd9e8);
                                              NativeHelper_011df0b4(PTR_DAT_029bd9f0);
                                              NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                              NativeHelper_011df0b4(PTR_DAT_029bf150);
                                              bRam0000000002b94e34 = 1;
                                              pvVar11 = extraout_x1_05;
                                            }
                                            puVar1 = PTR_DAT_029bf150;
                                            if (*(char *)(lVar16 + 0x30) != '\0') {
                                              if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                                                NativeHelper_011df1bc();
                                                pvVar11 = extraout_x1_06;
                                              }
                                              bVar7 = TRAnalytics_IsEventEnabled_12b6e24
                                                                (*(void **)puVar1,pvVar11);
                                              if (bVar7) {
                                                if ((*(long *)(lVar16 + 0x10) != 0) &&
                                                   (*(long *)(lVar16 + 0x20) != 0)) {
                                                  plVar19 = (long *)NativeHelper_011df12c
                                                                              (*(undefined8 *)
                                                                                PTR_DAT_029bd9e8,
                                                                               *(int *)(*(long *)(
                                                  lVar16 + 0x20) + 0x18) +
                                                  *(int *)(*(long *)(lVar16 + 0x10) + 0x18));
                                                  puVar2 = PTR_DAT_029bd9f0;
                                                  lVar15 = *(long *)(lVar16 + 0x10);
                                                  if (lVar15 != 0) {
                                                    lVar20 = 4;
                                                    do {
                                                      uVar21 = lVar20 - 4;
                                                      if ((long)(int)*(uint *)(lVar15 + 0x18) <=
                                                          (long)uVar21) {
                                                        lVar15 = *(long *)(lVar16 + 0x20);
                                                        if (lVar15 != 0) {
                                                          uVar21 = 0;
                                                          goto code_r0x013bb368;
                                                        }
                                                        break;
                                                      }
                                                      if (*(uint *)(lVar15 + 0x18) <= uVar21)
                                                      goto code_r0x013bb438;
                                                      lVar17 = *(long *)(lVar16 + 0x18);
                                                      if (lVar17 == 0) break;
                                                      if (*(uint *)(lVar17 + 0x18) <= uVar21)
                                                      goto code_r0x013bb438;
                                                      pvVar11 = *(void **)(lVar15 + lVar20 * 8);
                                                      pvVar12 = *(void **)(lVar17 + lVar20 * 8);
                                                      pIVar9 = (Imangi_Analytics_EventParameter *)
                                                               NativeHelper_011df2d0
                                                                         (*(undefined8 *)puVar2);
                                                                                                            
                                                  Imangi_Analytics_EventParameter_EventParameter_126b488
                                                            (pIVar9,pvVar11,pvVar12,(void *)0x0);
                                                  if (plVar19 == (long *)0x0) break;
                                                  if ((pIVar9 != (Imangi_Analytics_EventParameter *)
                                                                 0x0) &&
                                                     (lVar15 = NativeHelper_011df1c0
                                                                         (pIVar9,*(undefined8 *)
                                                                                  (*plVar19 + 0x40))
                                                     , lVar15 == 0)) goto code_r0x013bb43c;
                                                  if (*(uint *)(plVar19 + 3) <= uVar21)
                                                  goto code_r0x013bb438;
                                                  plVar19[lVar20] = (long)pIVar9;
                                                  lVar15 = *(long *)(lVar16 + 0x10);
                                                  lVar20 = lVar20 + 1;
                                                  } while (lVar15 != 0);
                                                  }
                                                }
                                                goto code_r0x013bb408;
                                              }
                                            }
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
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar21) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar1,plVar19,(void *)0x0);
      *(undefined1 *)(lVar16 + 0x30) = 0;
      return;
    }
    lVar20 = *(long *)(lVar16 + 0x10);
    if (lVar20 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar21) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar17 = *(long *)(lVar16 + 0x28);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x013bb438;
    pvVar11 = *(void **)(lVar15 + uVar21 * 8 + 0x20);
    iVar8 = *(int *)(lVar17 + uVar21 * 4 + 0x20);
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar9,pvVar11,(long)iVar8,(void *)0x0);
    if (plVar19 == (long *)0x0) break;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar15 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0)) {
code_r0x013bb43c:
      uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar10,0);
    }
    uVar14 = (int)uVar21 + (int)*(undefined8 *)(lVar20 + 0x18);
    if (*(uint *)(plVar19 + 3) <= uVar14) goto code_r0x013bb438;
    plVar19[(long)(int)uVar14 + 4] = (long)pIVar9;
    lVar15 = *(long *)(lVar16 + 0x20);
    uVar21 = uVar21 + 1;
  } while (lVar15 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

