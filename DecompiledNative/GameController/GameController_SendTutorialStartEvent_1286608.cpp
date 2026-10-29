// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendTutorialStartEvent() { }
// Ghidra address: 0138a608; ELF VA: 0x128a608; file offset: 0x1286608
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendTutorialStartEvent_1286608(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar6;
  undefined8 uVar7;
  void *extraout_x1;
  void *pvVar8;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  uint uVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  
  if ((bRam0000000002b94cab & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94cab = 1;
    runtimeMethod = extraout_x1;
  }
  if (cRam0000000002b94d32 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029bcb50,runtimeMethod);
    cRam0000000002b94d32 = '\x01';
  }
  puVar3 = PTR_DAT_029bd9d0;
  puVar2 = PTR_DAT_029bcb50;
  lVar5 = *(long *)PTR_DAT_029bcb50;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar5 = *(long *)puVar2;
  }
  pvVar12 = *(void **)(*(long *)(lVar5 + 0xb8) + 0xd8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_029bd9d0;
  pvVar8 = (void *)0x0;
  if ((bRam0000000002b94e07 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94e07 = 1;
    pvVar8 = extraout_x1_00;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar8 = extraout_x1_01;
  }
  bVar4 = TRAnalytics_IsEventEnabled_12b6e24(pvVar12,pvVar8);
  if (!bVar4) {
    return;
  }
  Imangi_Analytics_Analytics_LogEvent_126b1f0(pvVar12,(void *)0x0);
  pvVar12 = extraout_x1_02;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar12 = extraout_x1_03;
  }
  puVar2 = PTR_DAT_029bd9d0;
  if ((bRam0000000002b94e0d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94e0d = 1;
    pvVar12 = extraout_x1_04;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar5 = *(long *)puVar2;
    pvVar12 = extraout_x1_05;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((bRam0000000002b94e34 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bf150);
    bRam0000000002b94e34 = 1;
    pvVar12 = extraout_x1_06;
  }
  puVar2 = PTR_DAT_029bf150;
  if (*(char *)(lVar5 + 0x30) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar12 = extraout_x1_07;
    }
    bVar4 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar12);
    if (bVar4) {
      if ((*(long *)(lVar5 + 0x10) != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        inEventParameters =
             (long *)NativeHelper_011df12c
                               (*(undefined8 *)PTR_DAT_029bd9e8,
                                *(int *)(*(long *)(lVar5 + 0x20) + 0x18) +
                                *(int *)(*(long *)(lVar5 + 0x10) + 0x18));
        puVar3 = PTR_DAT_029bd9f0;
        lVar10 = *(long *)(lVar5 + 0x10);
        if (lVar10 != 0) {
          lVar13 = 4;
          do {
            uVar14 = lVar13 - 4;
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar14) {
              lVar10 = *(long *)(lVar5 + 0x20);
              if (lVar10 != 0) {
                uVar14 = 0;
                goto code_r0x013bb368;
              }
              break;
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar14) goto code_r0x013bb438;
            lVar11 = *(long *)(lVar5 + 0x18);
            if (lVar11 == 0) break;
            if (*(uint *)(lVar11 + 0x18) <= uVar14) goto code_r0x013bb438;
            pvVar12 = *(void **)(lVar10 + lVar13 * 8);
            pvVar8 = *(void **)(lVar11 + lVar13 * 8);
            pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar6,pvVar12,pvVar8,(void *)0x0);
            if (inEventParameters == (long *)0x0) break;
            if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar10 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*inEventParameters + 0x40)),
               lVar10 == 0)) goto code_r0x013bb43c;
            if (*(uint *)(inEventParameters + 3) <= uVar14) goto code_r0x013bb438;
            inEventParameters[lVar13] = (long)pIVar6;
            lVar10 = *(long *)(lVar5 + 0x10);
            lVar13 = lVar13 + 1;
          } while (lVar10 != 0);
        }
      }
      goto code_r0x013bb408;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar14) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar5 + 0x30) = 0;
      return;
    }
    lVar13 = *(long *)(lVar5 + 0x10);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= uVar14) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar11 = *(long *)(lVar5 + 0x28);
    if (lVar11 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar14) goto code_r0x013bb438;
    pvVar12 = *(void **)(lVar10 + uVar14 * 8 + 0x20);
    iVar1 = *(int *)(lVar11 + uVar14 * 4 + 0x20);
    pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar6,pvVar12,(long)iVar1,(void *)0x0);
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar10 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar10 == 0)) {
code_r0x013bb43c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar9 = (int)uVar14 + (int)*(undefined8 *)(lVar13 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar9) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar9 + 4] = (long)pIVar6;
    lVar10 = *(long *)(lVar5 + 0x20);
    uVar14 = uVar14 + 1;
  } while (lVar10 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

