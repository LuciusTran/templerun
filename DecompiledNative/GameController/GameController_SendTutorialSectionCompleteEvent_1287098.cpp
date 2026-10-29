// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendTutorialSectionCompleteEvent() { }
// Ghidra address: 0138b098; ELF VA: 0x128b098; file offset: 0x1287098
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendTutorialSectionCompleteEvent_1287098
               (GameController *self,void *runtimeMethod)

{
  longlong inParameterValue;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  Imangi_Analytics_EventParameter *pIVar6;
  long lVar7;
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
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  void *pvVar13;
  void *inParameterValue_00;
  long lVar14;
  ulong uVar15;
  float fVar16;
  
  if ((bRam0000000002b94cb0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdb18);
    NativeHelper_011df0b4(PTR_DAT_029bdb20);
    NativeHelper_011df0b4(PTR_DAT_029bda28);
    NativeHelper_011df0b4(PTR_DAT_029bda68);
    NativeHelper_011df0b4(PTR_DAT_029bdaf0);
    NativeHelper_011df0b4(PTR_DAT_029bdb28);
    NativeHelper_011df0b4(PTR_DAT_029bdb30);
    NativeHelper_011df0b4(PTR_DAT_029bdb38);
    bRam0000000002b94cb0 = 1;
  }
  puVar3 = PTR_DAT_029bda68;
  puVar2 = PTR_DAT_029bd9f0;
  uVar9 = self->TutorialID - 1;
  puVar11 = (undefined8 *)PTR_DAT_029bdb28;
  if (uVar9 < 4) {
    puVar11 = *(undefined8 **)(&UNK_02867878 + (long)(int)uVar9 * 8);
  }
  pvVar13 = (void *)*puVar11;
  plVar5 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,3);
  fVar16 = self->TimeSinceTutorialStart;
  pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  inParameterValue = -0x80000000;
  if (fVar16 != INFINITY) {
    inParameterValue = (long)(int)fVar16;
  }
  Imangi_Analytics_EventParameter_EventParameter_126b5b4
            (pIVar6,*(void **)puVar3,inParameterValue,(void *)0x0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar7 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0138b2e0:
    uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar8,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = (long)pIVar6;
    puVar3 = PTR_DAT_029bdaf0;
    iVar1 = self->TutorialDeathCount;
    pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4
              (pIVar6,*(void **)puVar3,(long)iVar1,(void *)0x0);
    if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar7 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0138b2e0;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = (long)pIVar6;
      puVar3 = PTR_DAT_029bda28;
      iVar1 = self->StumbleCount;
      pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
      Imangi_Analytics_EventParameter_EventParameter_126b5b4
                (pIVar6,*(void **)puVar3,(long)iVar1,(void *)0x0);
      if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar7 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0138b2e0;
      puVar2 = PTR_DAT_029bd9d0;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = (long)pIVar6;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar2 = PTR_DAT_029bd9d0;
        runtimeMethod_00 = plVar5;
        if ((bRam0000000002b94e0c & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd9d0,plVar5,0);
          bRam0000000002b94e0c = 1;
          runtimeMethod_00 = extraout_x1_01;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          runtimeMethod_00 = extraout_x1_02;
        }
        bVar4 = TRAnalytics_IsEventEnabled_12b6e24(pvVar13,runtimeMethod_00);
        if (!bVar4) {
          return;
        }
        Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar13,plVar5,(void *)0x0);
        pvVar13 = extraout_x1_03;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar13 = extraout_x1_04;
        }
        puVar2 = PTR_DAT_029bd9d0;
        if ((bRam0000000002b94e0d & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd9d0);
          bRam0000000002b94e0d = 1;
          pvVar13 = extraout_x1;
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar7 = *(long *)puVar2;
          pvVar13 = extraout_x1_00;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if ((bRam0000000002b94e34 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd9e8);
          NativeHelper_011df0b4(PTR_DAT_029bd9f0);
          NativeHelper_011df0b4(PTR_DAT_029bd9d0);
          NativeHelper_011df0b4(PTR_DAT_029bf150);
          bRam0000000002b94e34 = 1;
          pvVar13 = extraout_x1_05;
        }
        puVar2 = PTR_DAT_029bf150;
        if (*(char *)(lVar7 + 0x30) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar13 = extraout_x1_06;
          }
          bVar4 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar13);
          if (bVar4) {
            if ((*(long *)(lVar7 + 0x10) != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
              plVar5 = (long *)NativeHelper_011df12c
                                         (*(undefined8 *)PTR_DAT_029bd9e8,
                                          *(int *)(*(long *)(lVar7 + 0x20) + 0x18) +
                                          *(int *)(*(long *)(lVar7 + 0x10) + 0x18));
              puVar3 = PTR_DAT_029bd9f0;
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 != 0) {
                lVar14 = 4;
                do {
                  uVar15 = lVar14 - 4;
                  if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
                    lVar10 = *(long *)(lVar7 + 0x20);
                    if (lVar10 != 0) {
                      uVar15 = 0;
                      goto code_r0x013bb368;
                    }
                    break;
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto code_r0x013bb438;
                  lVar12 = *(long *)(lVar7 + 0x18);
                  if (lVar12 == 0) break;
                  if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
                  pvVar13 = *(void **)(lVar10 + lVar14 * 8);
                  inParameterValue_00 = *(void **)(lVar12 + lVar14 * 8);
                  pIVar6 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar3);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar6,pvVar13,inParameterValue_00,(void *)0x0);
                  if (plVar5 == (long *)0x0) break;
                  if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar10 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar5 + 0x40)),
                     lVar10 == 0)) goto code_r0x013bb43c;
                  if (*(uint *)(plVar5 + 3) <= uVar15) goto code_r0x013bb438;
                  plVar5[lVar14] = (long)pIVar6;
                  lVar10 = *(long *)(lVar7 + 0x10);
                  lVar14 = lVar14 + 1;
                } while (lVar10 != 0);
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
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar15) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar5,(void *)0x0);
      *(undefined1 *)(lVar7 + 0x30) = 0;
      return;
    }
    lVar14 = *(long *)(lVar7 + 0x10);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar15) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar12 = *(long *)(lVar7 + 0x28);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
    pvVar13 = *(void **)(lVar10 + uVar15 * 8 + 0x20);
    iVar1 = *(int *)(lVar12 + uVar15 * 4 + 0x20);
    pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar6,pvVar13,(long)iVar1,(void *)0x0);
    if (plVar5 == (long *)0x0) break;
    if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar10 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
code_r0x013bb43c:
      uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar8,0);
    }
    uVar9 = (int)uVar15 + (int)*(undefined8 *)(lVar14 + 0x18);
    if (*(uint *)(plVar5 + 3) <= uVar9) goto code_r0x013bb438;
    plVar5[(long)(int)uVar9 + 4] = (long)pIVar6;
    lVar10 = *(long *)(lVar7 + 0x20);
    uVar15 = uVar15 + 1;
  } while (lVar10 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

