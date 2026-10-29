// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendTutorialDeathEvent() { }
// Ghidra address: 0138a8d8; ELF VA: 0x128a8d8; file offset: 0x12868d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendTutorialDeathEvent_12868d8(GameController *self,void *runtimeMethod)

{
  longlong inParameterValue;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  Imangi_Analytics_EventParameter *pIVar9;
  long lVar10;
  undefined8 uVar11;
  void *extraout_x1;
  void *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  
  if ((bRam0000000002b94cad & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bda28);
    NativeHelper_011df0b4(PTR_DAT_029bdaf8);
    NativeHelper_011df0b4(PTR_DAT_029bda58);
    NativeHelper_011df0b4(PTR_DAT_029bda68);
    NativeHelper_011df0b4(PTR_DAT_029bdaf0);
    NativeHelper_011df0b4(PTR_DAT_029bdb00);
    bRam0000000002b94cad = 1;
  }
  pvVar6 = TRAnalyticsHelper_GetTutorialSectionName_12b8e18(self->TutorialID,(void *)0x0);
  puVar4 = PTR_DAT_029bda68;
  puVar3 = PTR_DAT_029bd9f0;
  puVar2 = PTR_DAT_029bd9e8;
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    pvVar7 = TRAnalyticsHelper_GetDeathTypeName_12b8eb0
                       ((void *)(ulong)*(uint *)&self->GamePlayer->field_0xe0,(void *)0x0);
    plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,5);
    fVar17 = self->TimeSinceTutorialStart;
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    inParameterValue = -0x80000000;
    if (fVar17 != INFINITY) {
      inParameterValue = (long)(int)fVar17;
    }
    Imangi_Analytics_EventParameter_EventParameter_126b5b4
              (pIVar9,*(void **)puVar4,inParameterValue,(void *)0x0);
    if (plVar8 != (long *)0x0) {
      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_0138aba8:
        uVar11 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar11,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = (long)pIVar9;
        puVar2 = PTR_DAT_029bdaf8;
        pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar9,*(void **)puVar2,pvVar6,(void *)0x0);
        if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_0138aba8;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = (long)pIVar9;
          puVar2 = PTR_DAT_029bda58;
          pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar9,*(void **)puVar2,pvVar7,(void *)0x0);
          if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0138aba8;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = (long)pIVar9;
            puVar2 = PTR_DAT_029bdaf0;
            iVar1 = self->TutorialDeathCount;
            pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b5b4
                      (pIVar9,*(void **)puVar2,(long)iVar1,(void *)0x0);
            if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
               ) goto LAB_0138aba8;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = (long)pIVar9;
              puVar2 = PTR_DAT_029bda28;
              iVar1 = self->StumbleCount;
              pIVar9 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)puVar3);
              Imangi_Analytics_EventParameter_EventParameter_126b5b4
                        (pIVar9,*(void **)puVar2,(long)iVar1,(void *)0x0);
              if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar10 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
                 lVar10 == 0)) goto LAB_0138aba8;
              puVar2 = PTR_DAT_029bd9d0;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = (long)pIVar9;
                puVar3 = PTR_DAT_029bdb00;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                puVar2 = PTR_DAT_029bd9d0;
                pvVar6 = *(void **)puVar3;
                runtimeMethod_00 = plVar8;
                if ((bRam0000000002b94e0c & 1) == 0) {
                  NativeHelper_011df0b4(PTR_DAT_029bd9d0,plVar8,0);
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
                Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar6,plVar8,(void *)0x0);
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
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  lVar10 = *(long *)puVar2;
                  pvVar6 = extraout_x1_00;
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
                  pvVar6 = extraout_x1_05;
                }
                puVar2 = PTR_DAT_029bf150;
                if (*(char *)(lVar10 + 0x30) != '\0') {
                  if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    pvVar6 = extraout_x1_06;
                  }
                  bVar5 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar6);
                  if (bVar5) {
                    if ((*(long *)(lVar10 + 0x10) != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
                      plVar8 = (long *)NativeHelper_011df12c
                                                 (*(undefined8 *)PTR_DAT_029bd9e8,
                                                  *(int *)(*(long *)(lVar10 + 0x20) + 0x18) +
                                                  *(int *)(*(long *)(lVar10 + 0x10) + 0x18));
                      puVar3 = PTR_DAT_029bd9f0;
                      lVar13 = *(long *)(lVar10 + 0x10);
                      if (lVar13 != 0) {
                        lVar15 = 4;
                        do {
                          uVar16 = lVar15 - 4;
                          if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar16) {
                            lVar13 = *(long *)(lVar10 + 0x20);
                            if (lVar13 != 0) {
                              uVar16 = 0;
                              goto code_r0x013bb368;
                            }
                            break;
                          }
                          if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
                          lVar14 = *(long *)(lVar10 + 0x18);
                          if (lVar14 == 0) break;
                          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x013bb438;
                          pvVar6 = *(void **)(lVar13 + lVar15 * 8);
                          pvVar7 = *(void **)(lVar14 + lVar15 * 8);
                          pIVar9 = (Imangi_Analytics_EventParameter *)
                                   NativeHelper_011df2d0(*(undefined8 *)puVar3);
                          Imangi_Analytics_EventParameter_EventParameter_126b488
                                    (pIVar9,pvVar6,pvVar7,(void *)0x0);
                          if (plVar8 == (long *)0x0) break;
                          if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                             (lVar13 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40))
                             , lVar13 == 0)) goto code_r0x013bb43c;
                          if (*(uint *)(plVar8 + 3) <= uVar16) goto code_r0x013bb438;
                          plVar8[lVar15] = (long)pIVar9;
                          lVar13 = *(long *)(lVar10 + 0x10);
                          lVar15 = lVar15 + 1;
                        } while (lVar13 != 0);
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
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar16) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar8,(void *)0x0);
      *(undefined1 *)(lVar10 + 0x30) = 0;
      return;
    }
    lVar15 = *(long *)(lVar10 + 0x10);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar14 = *(long *)(lVar10 + 0x28);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar16) goto code_r0x013bb438;
    pvVar6 = *(void **)(lVar13 + uVar16 * 8 + 0x20);
    iVar1 = *(int *)(lVar14 + uVar16 * 4 + 0x20);
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar9,pvVar6,(long)iVar1,(void *)0x0);
    if (plVar8 == (long *)0x0) break;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar13 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
code_r0x013bb43c:
      uVar11 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar11,0);
    }
    uVar12 = (int)uVar16 + (int)*(undefined8 *)(lVar15 + 0x18);
    if (*(uint *)(plVar8 + 3) <= uVar12) goto code_r0x013bb438;
    plVar8[(long)(int)uVar12 + 4] = (long)pIVar9;
    lVar13 = *(long *)(lVar10 + 0x20);
    uVar16 = uVar16 + 1;
  } while (lVar13 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

