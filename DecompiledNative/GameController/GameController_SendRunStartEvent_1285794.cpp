// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendRunStartEvent() { }
// Ghidra address: 01389794; ELF VA: 0x1289794; file offset: 0x1285794
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendRunStartEvent_1285794(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  void *inEventId;
  long lVar7;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar8;
  undefined8 uVar9;
  void *extraout_x1;
  void *inParameterName;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  uint uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  
  puVar2 = PTR_DAT_029ba5a8;
  if ((bRam0000000002b94ca9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d8);
    NativeHelper_011df0b4(PTR_DAT_029bd9e0);
    bRam0000000002b94ca9 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_029bd9d0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  puVar4 = PTR_DAT_029bd9e0;
  puVar2 = PTR_DAT_029bd9d8;
  bVar5 = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
  pvVar6 = TRAnalyticsHelper_BoolAsString_12b8938(bVar5,(void *)0x0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_029bd9d0;
  inEventId = *(void **)puVar2;
  inParameterName = *(void **)puVar4;
  pvVar13 = inParameterName;
  if ((bRam0000000002b94e08 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0,inParameterName,pvVar6,0);
    bRam0000000002b94e08 = 1;
    pvVar13 = extraout_x1_02;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar13 = extraout_x1_03;
  }
  bVar5 = TRAnalytics_IsEventEnabled_12b6e24(inEventId,pvVar13);
  if (!bVar5) {
    return;
  }
  Imangi_Analytics_Analytics_LogEvent_126af14(inEventId,inParameterName,pvVar6,(void *)0x0);
  pvVar6 = extraout_x1_04;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar6 = extraout_x1_05;
  }
  puVar2 = PTR_DAT_029bd9d0;
  if ((bRam0000000002b94e0d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94e0d = 1;
    pvVar6 = extraout_x1_00;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar2;
    pvVar6 = extraout_x1_01;
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
    pvVar6 = extraout_x1_06;
  }
  puVar2 = PTR_DAT_029bf150;
  if (*(char *)(lVar7 + 0x30) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar6 = extraout_x1_07;
    }
    bVar5 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar6);
    if (bVar5) {
      if ((*(long *)(lVar7 + 0x10) != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
        inEventParameters =
             (long *)NativeHelper_011df12c
                               (*(undefined8 *)PTR_DAT_029bd9e8,
                                *(int *)(*(long *)(lVar7 + 0x20) + 0x18) +
                                *(int *)(*(long *)(lVar7 + 0x10) + 0x18));
        puVar3 = PTR_DAT_029bd9f0;
        lVar11 = *(long *)(lVar7 + 0x10);
        if (lVar11 != 0) {
          lVar14 = 4;
          do {
            uVar15 = lVar14 - 4;
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar15) {
              lVar11 = *(long *)(lVar7 + 0x20);
              if (lVar11 != 0) {
                uVar15 = 0;
                goto code_r0x013bb368;
              }
              break;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar15) goto code_r0x013bb438;
            lVar12 = *(long *)(lVar7 + 0x18);
            if (lVar12 == 0) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
            pvVar6 = *(void **)(lVar11 + lVar14 * 8);
            pvVar13 = *(void **)(lVar12 + lVar14 * 8);
            pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar8,pvVar6,pvVar13,(void *)0x0);
            if (inEventParameters == (long *)0x0) break;
            if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar11 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*inEventParameters + 0x40)),
               lVar11 == 0)) goto code_r0x013bb43c;
            if (*(uint *)(inEventParameters + 3) <= uVar15) goto code_r0x013bb438;
            inEventParameters[lVar14] = (long)pIVar8;
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar14 = lVar14 + 1;
          } while (lVar11 != 0);
        }
      }
      goto code_r0x013bb408;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar15) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar7 + 0x30) = 0;
      return;
    }
    lVar14 = *(long *)(lVar7 + 0x10);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar15) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar12 = *(long *)(lVar7 + 0x28);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
    pvVar6 = *(void **)(lVar11 + uVar15 * 8 + 0x20);
    iVar1 = *(int *)(lVar12 + uVar15 * 4 + 0x20);
    pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar8,pvVar6,(long)iVar1,(void *)0x0);
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar11 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar11 == 0)) {
code_r0x013bb43c:
      uVar9 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar9,0);
    }
    uVar10 = (int)uVar15 + (int)*(undefined8 *)(lVar14 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar10) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar10 + 4] = (long)pIVar8;
    lVar11 = *(long *)(lVar7 + 0x20);
    uVar15 = uVar15 + 1;
  } while (lVar11 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

