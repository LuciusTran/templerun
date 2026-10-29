// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void EndGame_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 013e9d14; ELF VA: 0x12e9d14; file offset: 0x12e5d14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_EndGame_OnAdOpened_12e5d14
               (EndGameUI *self,void *inService,void *inAdType,void *inAdSpaceName,
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
  void *pvVar9;
  Imangi_Analytics_EventParameter *pIVar10;
  void *extraout_x0;
  void *extraout_x0_00;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  if ((bRam0000000002b94fd4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029bf1e8);
    NativeHelper_011df0b4(PTR_DAT_029bdf98);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fd4 = 1;
  }
  puVar3 = PTR_DAT_029bd9e8;
  puVar2 = PTR_DAT_029b9770;
  if ((int)inAdType == 0) {
    pvVar11 = *(void **)PTR_DAT_029bdf98;
    pvVar12 = *(void **)PTR_DAT_029c05c8;
    pvVar13 = *(void **)PTR_DAT_029b8618;
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
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar16);
    }
    pvVar9 = Imangi_Ad_AdManager_GetAdServiceAnalyticCode_127b1d8
                       ((void *)((ulong)inService & 0xffffffff),(void *)0x0);
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar5,pvVar9,(void *)0x0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0)) {
code_r0x013bd6fc:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    if ((int)plVar8[3] == 0) {
code_r0x013bd6f8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    plVar8[4] = (long)pIVar10;
    puVar2 = PTR_DAT_029bf5e0;
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar12,(void *)0x0);
    pvVar12 = extraout_x0_00;
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (pvVar12 = (void *)NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)),
       pvVar12 == (void *)0x0)) goto code_r0x013bd6fc;
    puVar2 = PTR_DAT_029bd9e0;
    if (*(uint *)(plVar8 + 3) < 2) goto code_r0x013bd6f8;
    plVar8[5] = (long)pIVar10;
    pvVar12 = TRAnalyticsHelper_GetNetworkStatus_12b91d4(pvVar12);
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar12,(void *)0x0);
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0))
    goto code_r0x013bd6fc;
    if (*(uint *)(plVar8 + 3) < 3) goto code_r0x013bd6f8;
    plVar8[6] = (long)pIVar10;
    puVar2 = PTR_DAT_029baa40;
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar13,(void *)0x0);
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0))
    goto code_r0x013bd6fc;
    puVar2 = PTR_DAT_029bd9d0;
    if (*(uint *)(plVar8 + 3) < 4) goto code_r0x013bd6f8;
    plVar8[7] = (long)pIVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
  }
  else {
    if ((int)inAdType != 1) {
      return;
    }
    pvVar11 = *(void **)PTR_DAT_029bf1e8;
    pvVar12 = *(void **)PTR_DAT_029c05c8;
    pvVar13 = *(void **)PTR_DAT_029b8618;
    if ((bRam0000000002b94e26 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b9770);
      NativeHelper_011df0b4(PTR_DAT_029bd9e8);
      NativeHelper_011df0b4(PTR_DAT_029bd9f0);
      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
      NativeHelper_011df0b4(PTR_DAT_029bf5e0);
      NativeHelper_011df0b4(PTR_DAT_029bf5e8);
      NativeHelper_011df0b4(PTR_DAT_029bd9e0);
      NativeHelper_011df0b4(PTR_DAT_029baa40);
      bRam0000000002b94e26 = 1;
    }
    puVar5 = PTR_DAT_029bf5e8;
    puVar4 = PTR_DAT_029bd9f0;
    plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,4);
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar16);
    }
    pvVar9 = Imangi_Ad_AdManager_GetAdServiceAnalyticCode_127b1d8
                       ((void *)((ulong)inService & 0xffffffff),(void *)0x0);
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar5,pvVar9,(void *)0x0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0)) {
code_r0x013bd48c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    if ((int)plVar8[3] == 0) {
code_r0x013bd488:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    plVar8[4] = (long)pIVar10;
    puVar2 = PTR_DAT_029bf5e0;
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar12,(void *)0x0);
    pvVar12 = extraout_x0;
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (pvVar12 = (void *)NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)),
       pvVar12 == (void *)0x0)) goto code_r0x013bd48c;
    puVar2 = PTR_DAT_029bd9e0;
    if (*(uint *)(plVar8 + 3) < 2) goto code_r0x013bd488;
    plVar8[5] = (long)pIVar10;
    pvVar12 = TRAnalyticsHelper_GetNetworkStatus_12b91d4(pvVar12);
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar12,(void *)0x0);
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0))
    goto code_r0x013bd48c;
    if (*(uint *)(plVar8 + 3) < 3) goto code_r0x013bd488;
    plVar8[6] = (long)pIVar10;
    puVar2 = PTR_DAT_029baa40;
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar10,*(void **)puVar2,pvVar13,(void *)0x0);
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar16 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar16 == 0))
    goto code_r0x013bd48c;
    puVar2 = PTR_DAT_029bd9d0;
    if (*(uint *)(plVar8 + 3) < 4) goto code_r0x013bd488;
    plVar8[7] = (long)pIVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
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
  lVar16 = *(long *)puVar2;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar16 = *(long *)puVar2;
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
  puVar2 = PTR_DAT_029bf150;
  if (*(char *)(lVar16 + 0x30) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar11 = extraout_x1_06;
    }
    bVar6 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar11);
    if (bVar6) {
      if ((*(long *)(lVar16 + 0x10) != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
        plVar8 = (long *)NativeHelper_011df12c
                                   (*(undefined8 *)PTR_DAT_029bd9e8,
                                    *(int *)(*(long *)(lVar16 + 0x20) + 0x18) +
                                    *(int *)(*(long *)(lVar16 + 0x10) + 0x18));
        puVar3 = PTR_DAT_029bd9f0;
        lVar15 = *(long *)(lVar16 + 0x10);
        if (lVar15 != 0) {
          lVar18 = 4;
          do {
            uVar19 = lVar18 - 4;
            if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar19) {
              lVar15 = *(long *)(lVar16 + 0x20);
              if (lVar15 != 0) {
                uVar19 = 0;
                goto code_r0x013bb368;
              }
              break;
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x013bb438;
            lVar17 = *(long *)(lVar16 + 0x18);
            if (lVar17 == 0) break;
            if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x013bb438;
            pvVar11 = *(void **)(lVar15 + lVar18 * 8);
            pvVar12 = *(void **)(lVar17 + lVar18 * 8);
            pIVar10 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar3);
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar10,pvVar11,pvVar12,(void *)0x0);
            if (plVar8 == (long *)0x0) break;
            if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar15 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0
               )) goto code_r0x013bb43c;
            if (*(uint *)(plVar8 + 3) <= uVar19) goto code_r0x013bb438;
            plVar8[lVar18] = (long)pIVar10;
            lVar15 = *(long *)(lVar16 + 0x10);
            lVar18 = lVar18 + 1;
          } while (lVar15 != 0);
        }
      }
      goto code_r0x013bb408;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar19) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar8,(void *)0x0);
      *(undefined1 *)(lVar16 + 0x30) = 0;
      return;
    }
    lVar18 = *(long *)(lVar16 + 0x10);
    if (lVar18 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar19) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar17 = *(long *)(lVar16 + 0x28);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x013bb438;
    pvVar11 = *(void **)(lVar15 + uVar19 * 8 + 0x20);
    iVar1 = *(int *)(lVar17 + uVar19 * 4 + 0x20);
    pIVar10 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar10,pvVar11,(long)iVar1,(void *)0x0);
    if (plVar8 == (long *)0x0) break;
    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar15 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
code_r0x013bb43c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar14 = (int)uVar19 + (int)*(undefined8 *)(lVar18 + 0x18);
    if (*(uint *)(plVar8 + 3) <= uVar14) goto code_r0x013bb438;
    plVar8[(long)(int)uVar14 + 4] = (long)pIVar10;
    lVar15 = *(long *)(lVar16 + 0x20);
    uVar19 = uVar19 + 1;
  } while (lVar15 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

