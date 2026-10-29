// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendLifetimeRunsMilestoneEvent(int lifetimeRuns) { }
// Ghidra address: 0138a3e8; ELF VA: 0x128a3e8; file offset: 0x12863e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendLifetimeRunsMilestoneEvent_12863e8
               (GameController *self,int lifetimeRuns,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar7;
  undefined8 uVar8;
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
  long lVar14;
  ulong uVar15;
  
  if ((bRam0000000002b94cb2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdab0);
    NativeHelper_011df0b4(PTR_DAT_029bdab8);
    NativeHelper_011df0b4(PTR_DAT_029bdac0);
    NativeHelper_011df0b4(PTR_DAT_029bdac8);
    NativeHelper_011df0b4(PTR_DAT_029bdad0);
    NativeHelper_011df0b4(PTR_DAT_029bdad8);
    NativeHelper_011df0b4(PTR_DAT_029bdae0);
    NativeHelper_011df0b4(PTR_DAT_029bdae8);
    bRam0000000002b94cb2 = 1;
  }
  if (lifetimeRuns < 100) {
    if (lifetimeRuns < 0x19) {
      if (lifetimeRuns == 5) {
        puVar11 = (undefined8 *)PTR_DAT_029bdac0;
        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          puVar11 = (undefined8 *)PTR_DAT_029bdac0;
        }
      }
      else {
        if (lifetimeRuns != 10) {
          return;
        }
        puVar11 = (undefined8 *)PTR_DAT_029bdae8;
        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          puVar11 = (undefined8 *)PTR_DAT_029bdae8;
        }
      }
    }
    else if (lifetimeRuns == 0x19) {
      puVar11 = (undefined8 *)PTR_DAT_029bdab8;
      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        puVar11 = (undefined8 *)PTR_DAT_029bdab8;
      }
    }
    else {
      if (lifetimeRuns != 0x32) {
        return;
      }
      puVar11 = (undefined8 *)PTR_DAT_029bdac8;
      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        puVar11 = (undefined8 *)PTR_DAT_029bdac8;
      }
    }
  }
  else if (lifetimeRuns < 500) {
    if (lifetimeRuns == 100) {
      puVar11 = (undefined8 *)PTR_DAT_029bdae0;
      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        puVar11 = (undefined8 *)PTR_DAT_029bdae0;
      }
    }
    else {
      if (lifetimeRuns != 0xfa) {
        return;
      }
      puVar11 = (undefined8 *)PTR_DAT_029bdab0;
      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        puVar11 = (undefined8 *)PTR_DAT_029bdab0;
      }
    }
  }
  else if (lifetimeRuns == 500) {
    puVar11 = (undefined8 *)PTR_DAT_029bdad0;
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      puVar11 = (undefined8 *)PTR_DAT_029bdad0;
    }
  }
  else {
    if (lifetimeRuns != 1000) {
      return;
    }
    puVar11 = (undefined8 *)PTR_DAT_029bdad8;
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      puVar11 = (undefined8 *)PTR_DAT_029bdad8;
    }
  }
  puVar2 = PTR_DAT_029bd9d0;
  pvVar5 = (void *)*puVar11;
  pvVar9 = (void *)0x0;
  if ((bRam0000000002b94e07 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94e07 = 1;
    pvVar9 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar9 = extraout_x1_00;
  }
  bVar4 = TRAnalytics_IsEventEnabled_12b6e24(pvVar5,pvVar9);
  if (!bVar4) {
    return;
  }
  Imangi_Analytics_Analytics_LogEvent_126b1f0(pvVar5,(void *)0x0);
  pvVar9 = extraout_x1_01;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar9 = extraout_x1_02;
  }
  puVar2 = PTR_DAT_029bd9d0;
  if ((bRam0000000002b94e0d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94e0d = 1;
    pvVar9 = extraout_x1_03;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
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
  puVar2 = PTR_DAT_029bf150;
  if (*(char *)(lVar6 + 0x30) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar9 = extraout_x1_06;
    }
    bVar4 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar9);
    if (bVar4) {
      if ((*(long *)(lVar6 + 0x10) != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
        inEventParameters =
             (long *)NativeHelper_011df12c
                               (*(undefined8 *)PTR_DAT_029bd9e8,
                                *(int *)(*(long *)(lVar6 + 0x20) + 0x18) +
                                *(int *)(*(long *)(lVar6 + 0x10) + 0x18));
        puVar3 = PTR_DAT_029bd9f0;
        lVar12 = *(long *)(lVar6 + 0x10);
        if (lVar12 != 0) {
          lVar14 = 4;
          do {
            uVar15 = lVar14 - 4;
            if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
              lVar12 = *(long *)(lVar6 + 0x20);
              if (lVar12 != 0) {
                uVar15 = 0;
                goto code_r0x013bb368;
              }
              break;
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x013bb438;
            lVar13 = *(long *)(lVar6 + 0x18);
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x013bb438;
            pvVar9 = *(void **)(lVar12 + lVar14 * 8);
            pvVar5 = *(void **)(lVar13 + lVar14 * 8);
            pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b488(pIVar7,pvVar9,pvVar5,(void *)0x0)
            ;
            if (inEventParameters == (long *)0x0) break;
            if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar12 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*inEventParameters + 0x40)),
               lVar12 == 0)) goto code_r0x013bb43c;
            if (*(uint *)(inEventParameters + 3) <= uVar15) goto code_r0x013bb438;
            inEventParameters[lVar14] = (long)pIVar7;
            lVar12 = *(long *)(lVar6 + 0x10);
            lVar14 = lVar14 + 1;
          } while (lVar12 != 0);
        }
      }
      goto code_r0x013bb408;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar6 + 0x30) = 0;
      return;
    }
    lVar14 = *(long *)(lVar6 + 0x10);
    if (lVar14 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar6 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x013bb438;
    pvVar9 = *(void **)(lVar12 + uVar15 * 8 + 0x20);
    iVar1 = *(int *)(lVar13 + uVar15 * 4 + 0x20);
    pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar7,pvVar9,(long)iVar1,(void *)0x0);
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar12 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar12 == 0)) {
code_r0x013bb43c:
      uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar8,0);
    }
    uVar10 = (int)uVar15 + (int)*(undefined8 *)(lVar14 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar10) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar10 + 4] = (long)pIVar7;
    lVar12 = *(long *)(lVar6 + 0x20);
    uVar15 = uVar15 + 1;
  } while (lVar12 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

