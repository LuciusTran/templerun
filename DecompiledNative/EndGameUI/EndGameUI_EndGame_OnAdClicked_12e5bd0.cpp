// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void EndGame_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 013e9bd0; ELF VA: 0x12e9bd0; file offset: 0x12e5bd0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_EndGame_OnAdClicked_12e5bd0
               (EndGameUI *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  void *inParameterValue;
  Imangi_Analytics_EventParameter *pIVar9;
  void *extraout_x0;
  void *pvVar10;
  Imangi_Ad_AdManager *x;
  ulong uVar11;
  long lVar12;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *pvVar13;
  void *inParameterValue_00;
  uint uVar14;
  long lVar15;
  long lVar16;
  RecordManager *self_00;
  long lVar17;
  
  if ((bRam0000000002b94fd3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029bdf90);
    NativeHelper_011df0b4(PTR_DAT_029c0908);
    NativeHelper_011df0b4(PTR_DAT_029bf228);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fd3 = 1;
  }
  puVar2 = PTR_DAT_029bd9e8;
  puVar1 = PTR_DAT_029b9770;
  if ((int)inAdType != 0) {
    if ((int)inAdType == 1) {
      TRAnalyticsHelper_LogInterstitialAd_12b922c
                ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bf228,
                 *(void **)PTR_DAT_029c05c8,*(void **)PTR_DAT_029b8618,(void *)0x0);
      puVar1 = PTR_DAT_029bd310;
      lVar12 = *(long *)PTR_DAT_029bd310;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar12 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_029bdbe8;
      if (**(long **)(lVar12 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if (*(char *)(**(long **)(lVar12 + 0xb8) + 0x31) != '\0') {
        if ((bRam0000000002b94fc7 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b9758);
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          NativeHelper_011df0b4(PTR_DAT_029bdbe8);
          NativeHelper_011df0b4(PTR_DAT_029c05c8);
          NativeHelper_011df0b4(PTR_DAT_029bf1f0);
          NativeHelper_011df0b4(PTR_DAT_029b8618);
          bRam0000000002b94fc7 = 1;
        }
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar12 = *(long *)puVar1;
        }
        self_00 = (RecordManager *)**(undefined8 **)(lVar12 + 0xb8);
        pvVar10 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
        if ((pvVar10 != (void *)0x0) &&
           (iVar6 = PlayerManager_GetActivePlayer_12ccc8c(pvVar10,(void *)0x0),
           self_00 != (RecordManager *)0x0)) {
          bVar5 = RecordManager_GetNoAds_12b479c(self_00,iVar6,(void *)0x0);
          if (!bVar5) {
            if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            x = GameController_GetAdManager_128d9a0((void *)0x0);
            if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
            }
            bVar5 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
            if ((!bVar5) && (bVar5 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0), bVar5)) {
              pvVar10 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
              if (x == (Imangi_Ad_AdManager *)0x0) goto LAB_013e83c8;
              uVar11 = (**(code **)(*(long *)x + 0x2d8))
                                 (x,1,pvVar10,*(undefined8 *)(*(long *)x + 0x2e0));
              if ((uVar11 & 1) == 0) {
                TRAnalyticsHelper_LogInterstitialAd_12b922c
                          ((void *)(ulong)*(uint *)&x->ActiveService,*(void **)PTR_DAT_029bf1f0,
                           *(void **)PTR_DAT_029c05c8,*(void **)PTR_DAT_029b8618,(void *)0x0);
                pvVar10 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_02);
                    /* WARNING: Could not recover jumptable at 0x013e83c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)x + 0x2a8))(x,1,pvVar10,5,*(undefined8 *)(*(long *)x + 0x2b0))
                ;
                return;
              }
            }
          }
          return;
        }
LAB_013e83c8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
    return;
  }
  pvVar10 = *(void **)PTR_DAT_029bdf90;
  pvVar13 = *(void **)PTR_DAT_029c05c8;
  inParameterValue_00 = *(void **)PTR_DAT_029b8618;
  if ((bRam0000000002b94e27 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bf5e0);
    NativeHelper_011df0b4(PTR_DAT_029bf5e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9e0);
    NativeHelper_011df0b4(PTR_DAT_029baa40);
    bRam0000000002b94e27 = 1;
  }
  puVar4 = PTR_DAT_029bf5e8;
  puVar3 = PTR_DAT_029bd9f0;
  plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  inParameterValue =
       Imangi_Ad_AdManager_GetAdServiceAnalyticCode_127b1d8
                 ((void *)((ulong)inService & 0xffffffff),(void *)0x0);
  pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
  Imangi_Analytics_EventParameter_EventParameter_126b488
            (pIVar9,*(void **)puVar4,inParameterValue,(void *)0x0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar12 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
code_r0x013bd6fc:
    uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = (long)pIVar9;
    puVar1 = PTR_DAT_029bf5e0;
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar9,*(void **)puVar1,pvVar13,(void *)0x0);
    pvVar13 = extraout_x0;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (pvVar13 = (void *)NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
       pvVar13 == (void *)0x0)) goto code_r0x013bd6fc;
    puVar1 = PTR_DAT_029bd9e0;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = (long)pIVar9;
      pvVar13 = TRAnalyticsHelper_GetNetworkStatus_12b91d4(pvVar13);
      pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
      Imangi_Analytics_EventParameter_EventParameter_126b488
                (pIVar9,*(void **)puVar1,pvVar13,(void *)0x0);
      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar12 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto code_r0x013bd6fc;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = (long)pIVar9;
        puVar1 = PTR_DAT_029baa40;
        pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar9,*(void **)puVar1,inParameterValue_00,(void *)0x0);
        if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar12 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto code_r0x013bd6fc;
        puVar1 = PTR_DAT_029bd9d0;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = (long)pIVar9;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          puVar1 = PTR_DAT_029bd9d0;
          runtimeMethod_00 = plVar8;
          if ((bRam0000000002b94e0c & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            bRam0000000002b94e0c = 1;
            runtimeMethod_00 = extraout_x1_01;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            runtimeMethod_00 = extraout_x1_02;
          }
          bVar5 = TRAnalytics_IsEventEnabled_12b6e24(pvVar10,runtimeMethod_00);
          if (!bVar5) {
            return;
          }
          Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar10,plVar8,(void *)0x0);
          pvVar10 = extraout_x1_03;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar10 = extraout_x1_04;
          }
          puVar1 = PTR_DAT_029bd9d0;
          if ((bRam0000000002b94e0d & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            bRam0000000002b94e0d = 1;
            pvVar10 = extraout_x1;
          }
          lVar12 = *(long *)puVar1;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar12 = *(long *)puVar1;
            pvVar10 = extraout_x1_00;
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if ((bRam0000000002b94e34 & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9e8);
            NativeHelper_011df0b4(PTR_DAT_029bd9f0);
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            NativeHelper_011df0b4(PTR_DAT_029bf150);
            bRam0000000002b94e34 = 1;
            pvVar10 = extraout_x1_05;
          }
          puVar1 = PTR_DAT_029bf150;
          if (*(char *)(lVar12 + 0x30) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              pvVar10 = extraout_x1_06;
            }
            bVar5 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar1,pvVar10);
            if (bVar5) {
              if ((*(long *)(lVar12 + 0x10) != 0) && (*(long *)(lVar12 + 0x20) != 0)) {
                plVar8 = (long *)NativeHelper_011df12c
                                           (*(undefined8 *)PTR_DAT_029bd9e8,
                                            *(int *)(*(long *)(lVar12 + 0x20) + 0x18) +
                                            *(int *)(*(long *)(lVar12 + 0x10) + 0x18));
                puVar2 = PTR_DAT_029bd9f0;
                lVar15 = *(long *)(lVar12 + 0x10);
                if (lVar15 != 0) {
                  lVar17 = 4;
                  do {
                    uVar11 = lVar17 - 4;
                    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar11) {
                      lVar15 = *(long *)(lVar12 + 0x20);
                      if (lVar15 != 0) {
                        uVar11 = 0;
                        goto code_r0x013bb368;
                      }
                      break;
                    }
                    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x013bb438;
                    lVar16 = *(long *)(lVar12 + 0x18);
                    if (lVar16 == 0) break;
                    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto code_r0x013bb438;
                    pvVar10 = *(void **)(lVar15 + lVar17 * 8);
                    pvVar13 = *(void **)(lVar16 + lVar17 * 8);
                    pIVar9 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar2);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar9,pvVar10,pvVar13,(void *)0x0);
                    if (plVar8 == (long *)0x0) break;
                    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar15 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar15 == 0)) goto code_r0x013bb43c;
                    if (*(uint *)(plVar8 + 3) <= uVar11) goto code_r0x013bb438;
                    plVar8[lVar17] = (long)pIVar9;
                    lVar15 = *(long *)(lVar12 + 0x10);
                    lVar17 = lVar17 + 1;
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar11) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar1,plVar8,(void *)0x0);
      *(undefined1 *)(lVar12 + 0x30) = 0;
      return;
    }
    lVar17 = *(long *)(lVar12 + 0x10);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar11) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar16 = *(long *)(lVar12 + 0x28);
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) goto code_r0x013bb438;
    pvVar10 = *(void **)(lVar15 + uVar11 * 8 + 0x20);
    iVar6 = *(int *)(lVar16 + uVar11 * 4 + 0x20);
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar9,pvVar10,(long)iVar6,(void *)0x0);
    if (plVar8 == (long *)0x0) break;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar15 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
code_r0x013bb43c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar14 = (int)uVar11 + (int)*(undefined8 *)(lVar17 + 0x18);
    if (*(uint *)(plVar8 + 3) <= uVar14) goto code_r0x013bb438;
    plVar8[(long)(int)uVar14 + 4] = (long)pIVar9;
    lVar15 = *(long *)(lVar12 + 0x20);
    uVar11 = uVar11 + 1;
  } while (lVar15 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

