// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendTutorialExitedEvent() { }
// Ghidra address: 0138ae28; ELF VA: 0x128ae28; file offset: 0x1286e28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendTutorialExitedEvent_1286e28(GameController *self,void *runtimeMethod)

{
  longlong inParameterValue;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  long *plVar7;
  Imangi_Analytics_EventParameter *pIVar8;
  long lVar9;
  undefined8 uVar10;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  uint uVar11;
  long lVar12;
  long lVar13;
  void *inParameterValue_00;
  long lVar14;
  ulong uVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_029bda68;
  puVar3 = PTR_DAT_029bd9f0;
  puVar2 = PTR_DAT_029bd9e8;
  if ((bRam0000000002b94caf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdb10);
    NativeHelper_011df0b4(PTR_DAT_029bda28);
    NativeHelper_011df0b4(PTR_DAT_029bdaf8);
    NativeHelper_011df0b4(PTR_DAT_029bda68);
    NativeHelper_011df0b4(PTR_DAT_029bdaf0);
    bRam0000000002b94caf = 1;
  }
  pvVar6 = TRAnalyticsHelper_GetTutorialSectionName_12b8e18(self->TutorialID,(void *)0x0);
  plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,4);
  fVar16 = self->TimeSinceTutorialStart;
  pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
  inParameterValue = -0x80000000;
  if (fVar16 != INFINITY) {
    inParameterValue = (long)(int)fVar16;
  }
  Imangi_Analytics_EventParameter_EventParameter_126b5b4
            (pIVar8,*(void **)puVar4,inParameterValue,(void *)0x0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar9 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0138b088:
    uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar10,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = (long)pIVar8;
    puVar2 = PTR_DAT_029bdaf8;
    pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar8,*(void **)puVar2,pvVar6,(void *)0x0);
    if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar9 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_0138b088;
    if (1 < *(uint *)(plVar7 + 3)) {
      plVar7[5] = (long)pIVar8;
      puVar2 = PTR_DAT_029bdaf0;
      iVar1 = self->TutorialDeathCount;
      pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
      Imangi_Analytics_EventParameter_EventParameter_126b5b4
                (pIVar8,*(void **)puVar2,(long)iVar1,(void *)0x0);
      if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar9 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0138b088;
      if (2 < *(uint *)(plVar7 + 3)) {
        plVar7[6] = (long)pIVar8;
        puVar2 = PTR_DAT_029bda28;
        iVar1 = self->StumbleCount;
        pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
        Imangi_Analytics_EventParameter_EventParameter_126b5b4
                  (pIVar8,*(void **)puVar2,(long)iVar1,(void *)0x0);
        if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar9 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_0138b088;
        puVar2 = PTR_DAT_029bd9d0;
        if (3 < *(uint *)(plVar7 + 3)) {
          plVar7[7] = (long)pIVar8;
          puVar3 = PTR_DAT_029bdb10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          puVar2 = PTR_DAT_029bd9d0;
          pvVar6 = *(void **)puVar3;
          runtimeMethod_00 = plVar7;
          if ((bRam0000000002b94e0c & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0,plVar7,0);
            bRam0000000002b94e0c = 1;
            runtimeMethod_00 = extraout_x1_01;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            runtimeMethod_00 = extraout_x1_02;
          }
          bVar5 = TRAnalytics_IsEventEnabled_12b6e24(pvVar6,runtimeMethod_00);
          if (!bVar5) {
            return;
          }
          Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar6,plVar7,(void *)0x0);
          pvVar6 = extraout_x1_03;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar6 = extraout_x1_04;
          }
          puVar2 = PTR_DAT_029bd9d0;
          if ((bRam0000000002b94e0d & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            bRam0000000002b94e0d = 1;
            pvVar6 = extraout_x1;
          }
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar9 = *(long *)puVar2;
            pvVar6 = extraout_x1_00;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if ((bRam0000000002b94e34 & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029bd9e8);
            NativeHelper_011df0b4(PTR_DAT_029bd9f0);
            NativeHelper_011df0b4(PTR_DAT_029bd9d0);
            NativeHelper_011df0b4(PTR_DAT_029bf150);
            bRam0000000002b94e34 = 1;
            pvVar6 = extraout_x1_05;
          }
          puVar2 = PTR_DAT_029bf150;
          if (*(char *)(lVar9 + 0x30) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              pvVar6 = extraout_x1_06;
            }
            bVar5 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar6);
            if (bVar5) {
              if ((*(long *)(lVar9 + 0x10) != 0) && (*(long *)(lVar9 + 0x20) != 0)) {
                plVar7 = (long *)NativeHelper_011df12c
                                           (*(undefined8 *)PTR_DAT_029bd9e8,
                                            *(int *)(*(long *)(lVar9 + 0x20) + 0x18) +
                                            *(int *)(*(long *)(lVar9 + 0x10) + 0x18));
                puVar3 = PTR_DAT_029bd9f0;
                lVar12 = *(long *)(lVar9 + 0x10);
                if (lVar12 != 0) {
                  lVar14 = 4;
                  do {
                    uVar15 = lVar14 - 4;
                    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
                      lVar12 = *(long *)(lVar9 + 0x20);
                      if (lVar12 != 0) {
                        uVar15 = 0;
                        goto code_r0x013bb368;
                      }
                      break;
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
                    lVar13 = *(long *)(lVar9 + 0x18);
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x013bb438;
                    pvVar6 = *(void **)(lVar12 + lVar14 * 8);
                    inParameterValue_00 = *(void **)(lVar13 + lVar14 * 8);
                    pIVar8 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar3);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar8,pvVar6,inParameterValue_00,(void *)0x0);
                    if (plVar7 == (long *)0x0) break;
                    if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar12 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar12 == 0)) goto code_r0x013bb43c;
                    if (*(uint *)(plVar7 + 3) <= uVar15) goto code_r0x013bb438;
                    plVar7[lVar14] = (long)pIVar8;
                    lVar12 = *(long *)(lVar9 + 0x10);
                    lVar14 = lVar14 + 1;
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar7,(void *)0x0);
      *(undefined1 *)(lVar9 + 0x30) = 0;
      return;
    }
    lVar14 = *(long *)(lVar9 + 0x10);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar9 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x013bb438;
    pvVar6 = *(void **)(lVar12 + uVar15 * 8 + 0x20);
    iVar1 = *(int *)(lVar13 + uVar15 * 4 + 0x20);
    pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar8,pvVar6,(long)iVar1,(void *)0x0);
    if (plVar7 == (long *)0x0) break;
    if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar12 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
code_r0x013bb43c:
      uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar10,0);
    }
    uVar11 = (int)uVar15 + (int)*(undefined8 *)(lVar14 + 0x18);
    if (*(uint *)(plVar7 + 3) <= uVar11) goto code_r0x013bb438;
    plVar7[(long)(int)uVar11 + 4] = (long)pIVar8;
    lVar12 = *(long *)(lVar9 + 0x20);
    uVar15 = uVar15 + 1;
  } while (lVar12 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

