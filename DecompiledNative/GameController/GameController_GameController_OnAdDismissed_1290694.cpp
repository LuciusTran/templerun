// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }
// Ghidra address: 01394694; ELF VA: 0x1294694; file offset: 0x1290694
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnAdDismissed_1290694
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               bool inCompleted,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar7;
  undefined8 uVar8;
  void *runtimeMethod_00;
  void *pvVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  RecordManager *pRVar14;
  long lVar15;
  ulong uVar16;
  
  if ((bRam0000000002b94cf1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029bdff0);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029bdff8);
    bRam0000000002b94cf1 = 1;
  }
  if ((int)inAdType != 0) {
    return;
  }
  UIInputBlocking_EnableInput_1300bfc((void *)0x0);
  self->IsShowingSaveMeVideo = false;
  self->ClosedSaveMeVideo = (bool)(~inCompleted & 1);
  self->WatchedSavedMeVideo = inCompleted;
  GameController_UnhookAdEvents_12903b0(self,runtimeMethod_00);
  if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) != (AudioManager *)0x0) {
    AudioManager_StartGameMusic_12bb130
              ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x0);
    if (!inCompleted) {
      TRAnalyticsHelper_LogVideoAd_12b949c
                ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bdff8,
                 *(void **)PTR_DAT_029b9680,*(void **)PTR_DAT_029b8618,(void *)0x0);
      self->CancelledSaveMeVideo = true;
      self->SkippedSaveMeVideo = true;
      self->SaveMePromptTimedOut = false;
      self->ClosedSaveMeVideo = false;
      self->WatchedSavedMeVideo = false;
      return;
    }
    TRAnalyticsHelper_LogVideoAd_12b949c
              ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bdff0,
               *(void **)PTR_DAT_029b9680,*(void **)PTR_DAT_029b8618,(void *)0x0);
    if (self->PlayerManager != (void *)0x0) {
      pRVar14 = self->RecordManager;
      iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      if (pRVar14 != (RecordManager *)0x0) {
        RecordManager_IncrimentVideoAdsWatchedCount_12b4834(pRVar14,iVar4,(void *)0x0);
        if (self->RecordManager != (RecordManager *)0x0) {
          RecordManager_SaveRecords_12b3350(self->RecordManager,(void *)0x0);
          if (self->PlayerManager != (void *)0x0) {
            pRVar14 = self->RecordManager;
            iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
            if (pRVar14 != (RecordManager *)0x0) {
              iVar4 = RecordManager_GetVideoAdsWatchedCount_12b481c(pRVar14,iVar4,(void *)0x0);
              if ((bRam0000000002b94dc9 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029bd9d0,iVar4,0);
                NativeHelper_011df0b4(PTR_DAT_029be888);
                NativeHelper_011df0b4(PTR_DAT_029be890);
                NativeHelper_011df0b4(PTR_DAT_029be898);
                NativeHelper_011df0b4(PTR_DAT_029be8a0);
                NativeHelper_011df0b4(PTR_DAT_029be8a8);
                bRam0000000002b94dc9 = 1;
              }
              switch(iVar4) {
              case 2:
                puVar11 = (undefined8 *)PTR_DAT_029be898;
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  puVar11 = (undefined8 *)PTR_DAT_029be898;
                }
                break;
              case 3:
                puVar11 = (undefined8 *)PTR_DAT_029be890;
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  puVar11 = (undefined8 *)PTR_DAT_029be890;
                }
                break;
              case 4:
              case 6:
              case 7:
              case 8:
              case 9:
                return;
              case 5:
                puVar11 = (undefined8 *)PTR_DAT_029be8a0;
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  puVar11 = (undefined8 *)PTR_DAT_029be8a0;
                }
                break;
              case 10:
                puVar11 = (undefined8 *)PTR_DAT_029be8a8;
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  puVar11 = (undefined8 *)PTR_DAT_029be8a8;
                }
                break;
              default:
                if (iVar4 != 0x19) {
                  return;
                }
                puVar11 = (undefined8 *)PTR_DAT_029be888;
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  puVar11 = (undefined8 *)PTR_DAT_029be888;
                }
              }
              puVar1 = PTR_DAT_029bd9d0;
              pvVar5 = (void *)*puVar11;
              pvVar9 = (void *)0x0;
              if ((bRam0000000002b94e07 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                bRam0000000002b94e07 = 1;
                pvVar9 = extraout_x1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                pvVar9 = extraout_x1_00;
              }
              bVar3 = TRAnalytics_IsEventEnabled_12b6e24(pvVar5,pvVar9);
              if (!bVar3) {
                return;
              }
              Imangi_Analytics_Analytics_LogEvent_126b1f0(pvVar5,(void *)0x0);
              pvVar9 = extraout_x1_01;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                pvVar9 = extraout_x1_02;
              }
              puVar1 = PTR_DAT_029bd9d0;
              if ((bRam0000000002b94e0d & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                bRam0000000002b94e0d = 1;
                pvVar9 = extraout_x1_03;
              }
              lVar6 = *(long *)puVar1;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                lVar6 = *(long *)puVar1;
                pvVar9 = extraout_x1_04;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
              if (lVar6 == 0) {
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
              if (*(char *)(lVar6 + 0x30) != '\0') {
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  pvVar9 = extraout_x1_06;
                }
                bVar3 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar1,pvVar9);
                if (bVar3) {
                  if ((*(long *)(lVar6 + 0x10) != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
                    inEventParameters =
                         (long *)NativeHelper_011df12c
                                           (*(undefined8 *)PTR_DAT_029bd9e8,
                                            *(int *)(*(long *)(lVar6 + 0x20) + 0x18) +
                                            *(int *)(*(long *)(lVar6 + 0x10) + 0x18));
                    puVar2 = PTR_DAT_029bd9f0;
                    lVar12 = *(long *)(lVar6 + 0x10);
                    if (lVar12 != 0) {
                      lVar15 = 4;
                      do {
                        uVar16 = lVar15 - 4;
                        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
                          lVar12 = *(long *)(lVar6 + 0x20);
                          if (lVar12 != 0) {
                            uVar16 = 0;
                            goto code_r0x013bb368;
                          }
                          break;
                        }
                        if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x013bb438;
                        lVar13 = *(long *)(lVar6 + 0x18);
                        if (lVar13 == 0) break;
                        if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
                        pvVar9 = *(void **)(lVar12 + lVar15 * 8);
                        pvVar5 = *(void **)(lVar13 + lVar15 * 8);
                        pIVar7 = (Imangi_Analytics_EventParameter *)
                                 NativeHelper_011df2d0(*(undefined8 *)puVar2);
                        Imangi_Analytics_EventParameter_EventParameter_126b488
                                  (pIVar7,pvVar9,pvVar5,(void *)0x0);
                        if (inEventParameters == (long *)0x0) break;
                        if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                           (lVar12 = NativeHelper_011df1c0
                                               (pIVar7,*(undefined8 *)(*inEventParameters + 0x40)),
                           lVar12 == 0)) goto code_r0x013bb43c;
                        if (*(uint *)(inEventParameters + 3) <= uVar16) goto code_r0x013bb438;
                        inEventParameters[lVar15] = (long)pIVar7;
                        lVar12 = *(long *)(lVar6 + 0x10);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar1,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar6 + 0x30) = 0;
      return;
    }
    lVar15 = *(long *)(lVar6 + 0x10);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar6 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
    pvVar9 = *(void **)(lVar12 + uVar16 * 8 + 0x20);
    iVar4 = *(int *)(lVar13 + uVar16 * 4 + 0x20);
    pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar7,pvVar9,(long)iVar4,(void *)0x0);
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar12 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar12 == 0)) {
code_r0x013bb43c:
      uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar8,0);
    }
    uVar10 = (int)uVar16 + (int)*(undefined8 *)(lVar15 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar10) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar10 + 4] = (long)pIVar7;
    lVar12 = *(long *)(lVar6 + 0x20);
    uVar16 = uVar16 + 1;
  } while (lVar12 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

