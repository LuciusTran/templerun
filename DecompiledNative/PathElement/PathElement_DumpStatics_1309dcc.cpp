// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void DumpStatics() { }
// Ghidra address: 0140ddcc; ELF VA: 0x130ddcc; file offset: 0x1309dcc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_DumpStatics_1309dcc(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *message;
  long lVar9;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  puVar4 = PTR_DAT_029bde80;
  puVar1 = PTR_DAT_029b8078;
  if ((bRam0000000002b950e3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029c1af8);
    NativeHelper_011df0b4(PTR_DAT_029c1b00);
    bRam0000000002b950e3 = 1;
  }
  puVar2 = PTR_DAT_029b8308;
  plVar5 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,5);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar9);
    lVar9 = *(long *)puVar4;
  }
  auStack_34[0] = *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 4);
  lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,auStack_34);
  if (plVar5 == (long *)0x0) {
LAB_0140e190:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((lVar9 != 0) &&
     (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0140e184:
    uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar9;
    auStack_38[0] = *(undefined1 *)(*(long *)(*(long *)puVar4 + 0xb8) + 5);
    lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,auStack_38);
    if ((lVar9 != 0) &&
       (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0140e184;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar9;
      auStack_3c[0] = *(undefined1 *)(*(long *)(*(long *)puVar4 + 0xb8) + 6);
      lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,auStack_3c);
      if ((lVar9 != 0) &&
         (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_0140e184;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar9;
        auStack_40[0] = *(undefined1 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc);
        lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,auStack_40);
        if ((lVar9 != 0) &&
           (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_0140e184;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar9;
          auStack_44[0] = *(undefined1 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,auStack_44);
          if ((lVar9 != 0) &&
             (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_0140e184;
          puVar2 = PTR_DAT_029c1b00;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar9;
            puVar3 = PTR_DAT_029b8c58;
            uVar7 = NativeHelper_01e9c2e0(*(undefined8 *)puVar2,plVar5,0);
            plVar5 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,4);
            uStack_48 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c);
            lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar3,&uStack_48);
            if (plVar5 == (long *)0x0) goto LAB_0140e190;
            if ((lVar9 != 0) &&
               (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_0140e184;
            if ((int)plVar5[3] != 0) {
              plVar5[4] = lVar9;
              uStack_4c = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
              lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar3,&uStack_4c);
              if ((lVar9 != 0) &&
                 (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_0140e184;
              if (1 < *(uint *)(plVar5 + 3)) {
                plVar5[5] = lVar9;
                uStack_50 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24);
                lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar3,&uStack_50);
                if ((lVar9 != 0) &&
                   (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0
                   )) goto LAB_0140e184;
                if (2 < *(uint *)(plVar5 + 3)) {
                  plVar5[6] = lVar9;
                  uStack_54 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
                  lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar3,&uStack_54);
                  if ((lVar9 != 0) &&
                     (lVar6 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar5 + 0x40)),
                     lVar6 == 0)) goto LAB_0140e184;
                  puVar1 = PTR_DAT_029c1af8;
                  if (3 < *(uint *)(plVar5 + 3)) {
                    plVar5[7] = lVar9;
                    uVar8 = NativeHelper_01e9c2e0(*(undefined8 *)puVar1,plVar5,0);
                    message = (void *)NativeHelper_01e92d00(uVar7,uVar8,0);
                    DebugEx_Log_13222f4(message,(void *)0x0);
                    DebugEx_Break_1323c50((void *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

