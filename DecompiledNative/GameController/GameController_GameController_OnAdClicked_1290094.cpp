// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnAdClicked(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 01394094; ELF VA: 0x1294094; file offset: 0x1290094
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnAdClicked_1290094
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  void *inParameterValue;
  Imangi_Analytics_EventParameter *pIVar9;
  long lVar10;
  void *extraout_x0;
  void *pvVar11;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *pvVar12;
  void *inParameterValue_00;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  if ((bRam0000000002b94cee & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bdf90);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94cee = 1;
  }
  puVar3 = PTR_DAT_029bd9e8;
  puVar2 = PTR_DAT_029b9770;
  if ((int)inAdType != 0) {
    return;
  }
  pvVar11 = *(void **)PTR_DAT_029bdf90;
  pvVar12 = *(void **)PTR_DAT_029b9680;
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
  puVar5 = PTR_DAT_029bf5e8;
  puVar4 = PTR_DAT_029bd9f0;
  plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2);
  }
  inParameterValue =
       Imangi_Ad_AdManager_GetAdServiceAnalyticCode_127b1d8
                 ((void *)((ulong)inService & 0xffffffff),(void *)0x0);
  pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
  Imangi_Analytics_EventParameter_EventParameter_126b488
            (pIVar9,*(void **)puVar5,inParameterValue,(void *)0x0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
code_r0x013bd6fc:
    uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = (long)pIVar9;
    puVar2 = PTR_DAT_029bf5e0;
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar9,*(void **)puVar2,pvVar12,(void *)0x0);
    pvVar12 = extraout_x0;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (pvVar12 = (void *)NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
       pvVar12 == (void *)0x0)) goto code_r0x013bd6fc;
    puVar2 = PTR_DAT_029bd9e0;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = (long)pIVar9;
      pvVar12 = TRAnalyticsHelper_GetNetworkStatus_12b91d4(pvVar12);
      pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
      Imangi_Analytics_EventParameter_EventParameter_126b488
                (pIVar9,*(void **)puVar2,pvVar12,(void *)0x0);
      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto code_r0x013bd6fc;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = (long)pIVar9;
        puVar2 = PTR_DAT_029baa40;
        pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar9,*(void **)puVar2,inParameterValue_00,(void *)0x0);
        if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto code_r0x013bd6fc;
        puVar2 = PTR_DAT_029bd9d0;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = (long)pIVar9;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          puVar2 = PTR_DAT_029bd9d0;
          runtimeMethod_00 = plVar8;
          if ((bRam0000000002b94e0c & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            bRam0000000002b94e0c = 1;
            runtimeMethod_00 = extraout_x1_01;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            runtimeMethod_00 = extraout_x1_02;
          }
          bVar6 = TRAnalytics_IsEventEnabled_12b6e24(pvVar11,runtimeMethod_00);
          if (!bVar6) {
            return;
          }
          Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar11,plVar8,(void *)0x0);
          pvVar11 = extraout_x1_03;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar11 = extraout_x1_04;
          }
          puVar2 = PTR_DAT_029bd9d0;
          if ((bRam0000000002b94e0d & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            bRam0000000002b94e0d = 1;
            pvVar11 = extraout_x1;
          }
          lVar10 = *(long *)puVar2;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar10 = *(long *)puVar2;
            pvVar11 = extraout_x1_00;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar10 == 0) {
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
          puVar2 = PTR_DAT_029bf150;
          if (*(char *)(lVar10 + 0x30) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              pvVar11 = extraout_x1_06;
            }
            bVar6 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar11);
            if (bVar6) {
              if ((*(long *)(lVar10 + 0x10) != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
                plVar8 = (long *)NativeHelper_011df12c
                                           (*(undefined8 *)PTR_DAT_029bd9e8,
                                            *(int *)(*(long *)(lVar10 + 0x20) + 0x18) +
                                            *(int *)(*(long *)(lVar10 + 0x10) + 0x18));
                puVar3 = PTR_DAT_029bd9f0;
                lVar14 = *(long *)(lVar10 + 0x10);
                if (lVar14 != 0) {
                  lVar16 = 4;
                  do {
                    uVar17 = lVar16 - 4;
                    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar17) {
                      lVar14 = *(long *)(lVar10 + 0x20);
                      if (lVar14 != 0) {
                        uVar17 = 0;
                        goto code_r0x013bb368;
                      }
                      break;
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar17) goto code_r0x013bb438;
                    lVar15 = *(long *)(lVar10 + 0x18);
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto code_r0x013bb438;
                    pvVar11 = *(void **)(lVar14 + lVar16 * 8);
                    pvVar12 = *(void **)(lVar15 + lVar16 * 8);
                    pIVar9 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar3);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar9,pvVar11,pvVar12,(void *)0x0);
                    if (plVar8 == (long *)0x0) break;
                    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar14 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar14 == 0)) goto code_r0x013bb43c;
                    if (*(uint *)(plVar8 + 3) <= uVar17) goto code_r0x013bb438;
                    plVar8[lVar16] = (long)pIVar9;
                    lVar14 = *(long *)(lVar10 + 0x10);
                    lVar16 = lVar16 + 1;
                  } while (lVar14 != 0);
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
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar17) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar8,(void *)0x0);
      *(undefined1 *)(lVar10 + 0x30) = 0;
      return;
    }
    lVar16 = *(long *)(lVar10 + 0x10);
    if (lVar16 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar15 = *(long *)(lVar10 + 0x28);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto code_r0x013bb438;
    pvVar11 = *(void **)(lVar14 + uVar17 * 8 + 0x20);
    iVar1 = *(int *)(lVar15 + uVar17 * 4 + 0x20);
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar9,pvVar11,(long)iVar1,(void *)0x0);
    if (plVar8 == (long *)0x0) break;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar14 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)) {
code_r0x013bb43c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar13 = (int)uVar17 + (int)*(undefined8 *)(lVar16 + 0x18);
    if (*(uint *)(plVar8 + 3) <= uVar13) goto code_r0x013bb438;
    plVar8[(long)(int)uVar13 + 4] = (long)pIVar9;
    lVar14 = *(long *)(lVar10 + 0x20);
    uVar17 = uVar17 + 1;
  } while (lVar14 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

