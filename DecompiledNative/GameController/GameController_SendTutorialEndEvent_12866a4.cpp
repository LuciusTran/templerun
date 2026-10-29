// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendTutorialEndEvent() { }
// Ghidra address: 0138a6a4; ELF VA: 0x128a6a4; file offset: 0x12866a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendTutorialEndEvent_12866a4(GameController *self,void *runtimeMethod)

{
  longlong inParameterValue;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  Imangi_Analytics_EventParameter *pIVar9;
  undefined8 uVar10;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *runtimeMethod_00;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  uint uVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *inParameterValue_00;
  long lVar15;
  ulong uVar16;
  float fVar17;
  
  if ((bRam0000000002b94cac & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bda28);
    NativeHelper_011df0b4(PTR_DAT_029bda68);
    NativeHelper_011df0b4(PTR_DAT_029bdaf0);
    bRam0000000002b94cac = 1;
    runtimeMethod = extraout_x1;
  }
  if (cRam0000000002b94d33 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029bcb50,runtimeMethod);
    cRam0000000002b94d33 = '\x01';
  }
  puVar5 = PTR_DAT_029bda68;
  puVar4 = PTR_DAT_029bd9f0;
  puVar3 = PTR_DAT_029bd9e8;
  puVar2 = PTR_DAT_029bcb50;
  lVar7 = *(long *)PTR_DAT_029bcb50;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar2;
  }
  pvVar14 = *(void **)(*(long *)(lVar7 + 0xb8) + 0xe0);
  plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,3);
  fVar17 = self->TimeSinceTutorialStart;
  pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
  inParameterValue = -0x80000000;
  if (fVar17 != INFINITY) {
    inParameterValue = (long)(int)fVar17;
  }
  Imangi_Analytics_EventParameter_EventParameter_126b5b4
            (pIVar9,*(void **)puVar5,inParameterValue,(void *)0x0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar7 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_0138a8c8:
    uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar10,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = (long)pIVar9;
    puVar2 = PTR_DAT_029bdaf0;
    iVar1 = self->TutorialDeathCount;
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4
              (pIVar9,*(void **)puVar2,(long)iVar1,(void *)0x0);
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar7 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
    goto LAB_0138a8c8;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = (long)pIVar9;
      puVar2 = PTR_DAT_029bda28;
      iVar1 = self->StumbleCount;
      pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
      Imangi_Analytics_EventParameter_EventParameter_126b5b4
                (pIVar9,*(void **)puVar2,(long)iVar1,(void *)0x0);
      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar7 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
      goto LAB_0138a8c8;
      puVar2 = PTR_DAT_029bd9d0;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = (long)pIVar9;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar2 = PTR_DAT_029bd9d0;
        runtimeMethod_00 = plVar8;
        if ((bRam0000000002b94e0c & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd9d0,plVar8,0);
          bRam0000000002b94e0c = 1;
          runtimeMethod_00 = extraout_x1_02;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          runtimeMethod_00 = extraout_x1_03;
        }
        bVar6 = TRAnalytics_IsEventEnabled_12b6e24(pvVar14,runtimeMethod_00);
        if (!bVar6) {
          return;
        }
        Imangi_Analytics_Analytics_LogEvent_126b0dc(pvVar14,plVar8,(void *)0x0);
        pvVar14 = extraout_x1_04;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar14 = extraout_x1_05;
        }
        puVar2 = PTR_DAT_029bd9d0;
        if ((bRam0000000002b94e0d & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd9d0);
          bRam0000000002b94e0d = 1;
          pvVar14 = extraout_x1_00;
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar7 = *(long *)puVar2;
          pvVar14 = extraout_x1_01;
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
          pvVar14 = extraout_x1_06;
        }
        puVar2 = PTR_DAT_029bf150;
        if (*(char *)(lVar7 + 0x30) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar14 = extraout_x1_07;
          }
          bVar6 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar14);
          if (bVar6) {
            if ((*(long *)(lVar7 + 0x10) != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
              plVar8 = (long *)NativeHelper_011df12c
                                         (*(undefined8 *)PTR_DAT_029bd9e8,
                                          *(int *)(*(long *)(lVar7 + 0x20) + 0x18) +
                                          *(int *)(*(long *)(lVar7 + 0x10) + 0x18));
              puVar3 = PTR_DAT_029bd9f0;
              lVar12 = *(long *)(lVar7 + 0x10);
              if (lVar12 != 0) {
                lVar15 = 4;
                do {
                  uVar16 = lVar15 - 4;
                  if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
                    lVar12 = *(long *)(lVar7 + 0x20);
                    if (lVar12 != 0) {
                      uVar16 = 0;
                      goto code_r0x013bb368;
                    }
                    break;
                  }
                  if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x013bb438;
                  lVar13 = *(long *)(lVar7 + 0x18);
                  if (lVar13 == 0) break;
                  if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
                  pvVar14 = *(void **)(lVar12 + lVar15 * 8);
                  inParameterValue_00 = *(void **)(lVar13 + lVar15 * 8);
                  pIVar9 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar3);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar9,pvVar14,inParameterValue_00,(void *)0x0);
                  if (plVar8 == (long *)0x0) break;
                  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar12 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar12 == 0)) goto code_r0x013bb43c;
                  if (*(uint *)(plVar8 + 3) <= uVar16) goto code_r0x013bb438;
                  plVar8[lVar15] = (long)pIVar9;
                  lVar12 = *(long *)(lVar7 + 0x10);
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
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar16) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar8,(void *)0x0);
      *(undefined1 *)(lVar7 + 0x30) = 0;
      return;
    }
    lVar15 = *(long *)(lVar7 + 0x10);
    if (lVar15 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar16) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar7 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar16) goto code_r0x013bb438;
    pvVar14 = *(void **)(lVar12 + uVar16 * 8 + 0x20);
    iVar1 = *(int *)(lVar13 + uVar16 * 4 + 0x20);
    pIVar9 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar9,pvVar14,(long)iVar1,(void *)0x0);
    if (plVar8 == (long *)0x0) break;
    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar12 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
code_r0x013bb43c:
      uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar10,0);
    }
    uVar11 = (int)uVar16 + (int)*(undefined8 *)(lVar15 + 0x18);
    if (*(uint *)(plVar8 + 3) <= uVar11) goto code_r0x013bb438;
    plVar8[(long)(int)uVar11 + 4] = (long)pIVar9;
    lVar12 = *(long *)(lVar7 + 0x20);
    uVar16 = uVar16 + 1;
  } while (lVar12 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

