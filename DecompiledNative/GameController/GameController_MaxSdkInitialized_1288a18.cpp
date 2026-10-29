// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static bool MaxSdkInitialized() { }
// Ghidra address: 0138ca18; ELF VA: 0x128ca18; file offset: 0x1288a18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_MaxSdkInitialized_1288a18(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_80 [8];
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  puVar2 = PTR_DAT_029bd248;
  if ((bRam0000000002b94cbf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd248);
    bRam0000000002b94cbf = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bd248;
  if ((bRam0000000002b97372 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bbf98);
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029bd248);
    NativeHelper_011df0b4(PTR_DAT_029c8028);
    bRam0000000002b97372 = 1;
  }
  puVar1 = PTR_DAT_029b7fe8;
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar12 = *(long *)puVar2;
  }
  lVar17 = *(long *)puVar1;
  lVar15 = *(long *)(lVar17 + 0x38);
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar15 == 0) {
    NativeHelper_011b5290(lVar17);
    lVar15 = *(long *)(lVar17 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_011b5234();
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_011b5234();
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  lVar15 = **(long **)(lVar15 + 0xb8);
  uVar13 = *(undefined8 *)PTR_DAT_029c8028;
  lVar17 = *(long *)PTR_DAT_029bbf98;
  plVar14 = *(long **)(lVar17 + 0x38);
  if (plVar14 == (long *)0x0) {
    NativeHelper_011b5290(lVar17);
    plVar14 = *(long **)(lVar17 + 0x38);
  }
  lVar17 = *plVar14;
  if (*(long *)(lVar17 + 0x38) == 0) {
    NativeHelper_011b5290(lVar17);
  }
  uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
  uVar13 = func_0x0147c920(uVar11,uVar13,lVar15,1,**(undefined8 **)(lVar17 + 0x38));
  lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
  lStack_78 = tpidr_el0;
  lStack_68 = *(long *)(lStack_78 + 0x28);
  plVar14 = (long *)(lVar17 + 0x38);
  if (*plVar14 == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c43b0);
    NativeHelper_011df0b4(PTR_DAT_029c43b8);
    NativeHelper_011df0b4(PTR_DAT_029c43c0);
    NativeHelper_011df0b4(PTR_DAT_029bae30);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029c43c8);
    NativeHelper_011df0b4(PTR_DAT_029b8ba0);
    NativeHelper_011df0b4(PTR_DAT_029c43d0);
    NativeHelper_011df0b4(PTR_DAT_029b88e0);
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029bae58);
    NativeHelper_011df0b4(PTR_DAT_029b8188);
    NativeHelper_011df0b4(PTR_DAT_029c43d8);
    NativeHelper_011df0b4(PTR_DAT_029bb938);
    NativeHelper_011df0b4(PTR_DAT_029bae38);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029bae40);
    NativeHelper_011df0b4(PTR_DAT_029b82e8);
    NativeHelper_011df0b4(PTR_DAT_029c43e0);
    NativeHelper_011df0b4(PTR_DAT_029c43e8);
    NativeHelper_011df0b4(PTR_DAT_029bb940);
    NativeHelper_011df0b4(PTR_DAT_029bae60);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029c43f0);
    NativeHelper_011df0b4(PTR_DAT_029bae28);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029c43f8);
    if (*(long *)(lVar17 + 0x38) != 0) goto code_r0x0148a490;
    NativeHelper_011b5290(lVar17);
    if (lVar15 == 0) goto code_r0x0148a4ec;
code_r0x0148a494:
    uVar18 = *(ulong *)(lVar15 + 0x18);
    if (uVar18 == 0) goto code_r0x0148a4f0;
    if ((uVar18 & 0xffffffff) == 0) {
      puVar16 = (undefined1 *)0x0;
    }
    else {
      puVar16 = auStack_80 +
                -((-(uVar18 >> 0x1f & 1) & 0xfffffff800000000 | (uVar18 & 0xffffffff) << 3) + 0xf &
                 0xfffffffffffffff0);
    }
    NativeHelper_02861500(puVar16,0);
    if ((int)uVar18 < 0) {
      NativeHelper_0201c6cc(0);
    }
  }
  else {
code_r0x0148a490:
    if (lVar15 != 0) goto code_r0x0148a494;
code_r0x0148a4ec:
    uVar18 = 0;
code_r0x0148a4f0:
    puVar16 = (undefined1 *)0x0;
  }
  uVar18 = uVar18 & 0xffffffff;
  func_0x025d38a8(lVar15,puVar16,uVar18,0);
  puVar2 = PTR_DAT_029b9db8;
  uVar11 = *(undefined8 *)*plVar14;
  if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar11 = NativeHelper_0200afdc(uVar11,0);
  puVar1 = PTR_DAT_029c43c0;
  if (*(int *)(*(long *)PTR_DAT_029c43c0 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar7 = func_0x025e21cc(uVar11,0);
  uVar11 = *(undefined8 *)*plVar14;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar11 = NativeHelper_0200afdc(uVar11,0);
    uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae28,0);
    uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      uVar11 = NativeHelper_0200afdc(uVar11,0);
      uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43b0,0);
      uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        uVar11 = NativeHelper_0200afdc(uVar11,0);
        uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43b8,0);
        uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_029c43e0;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          uVar11 = NativeHelper_0200afdc(uVar11,0);
          uVar8 = NativeHelper_0200afdc(*(undefined8 *)*plVar14,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          uVar7 = func_0x025e21e0(uVar11,uVar8,0);
          if ((uVar7 & 1) == 0) {
            uVar13 = *(undefined8 *)*plVar14;
            lVar12 = NativeHelper_011df0c8(PTR_DAT_029b9db8);
            if (*(int *)(lVar12 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            plVar14 = (long *)NativeHelper_0200afdc(uVar13,0);
            if (plVar14 == (long *)0x0) {
              uVar13 = NativeHelper_011df0c8(PTR_DAT_029c4400);
              uVar11 = 0;
            }
            else {
              uVar13 = NativeHelper_011df0c8(PTR_DAT_029c4400);
              uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
            }
            uVar8 = NativeHelper_011df0c8(PTR_DAT_029b9be8);
            uVar13 = NativeHelper_01e9bd68(uVar13,uVar11,uVar8,0);
            NativeHelper_011df0c8(PTR_DAT_029b8638);
            uVar11 = NativeHelper_011df2d0();
            NativeHelper_02033550(uVar11,uVar13,0);
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df1ac(uVar11,lVar17);
          }
          uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
          uVar13 = func_0x025d4e88(uVar11,uVar13,puVar16,uVar18,0);
          bVar3 = func_0x0147dfd0(uVar13,*(undefined8 *)(*plVar14 + 0x10));
          goto code_r0x0148afd4;
        }
        uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
        uVar13 = func_0x025d4e88(uVar11,uVar13,puVar16,uVar18,0);
        uVar7 = NativeHelper_0203ec2c(uVar13,0,0);
        if ((uVar7 & 1) != 0) goto code_r0x0148aa04;
        plVar9 = (long *)func_0x025e0aa8(uVar13,0);
        lVar12 = *(long *)(*plVar14 + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = NativeHelper_011b5234(lVar12);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678(plVar9);
        }
        pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
      }
      else {
        uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
        uVar13 = func_0x025d4e88(uVar11,uVar13,puVar16,uVar18,0);
        uVar7 = NativeHelper_0203ec2c(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
code_r0x0148aa04:
          bVar3 = 0;
          goto code_r0x0148afd4;
        }
        plVar9 = (long *)func_0x025e2054(uVar13,0);
        lVar12 = *(long *)(*plVar14 + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = NativeHelper_011b5234(lVar12);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678(plVar9);
        }
        pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
      }
    }
    else {
      uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
      plVar9 = (long *)func_0x025dbf70(uVar11,uVar13,puVar16,uVar18,0);
      lVar12 = *(long *)(*plVar14 + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = NativeHelper_011b5234(lVar12);
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678(plVar9);
      }
      pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar11 = NativeHelper_0200afdc(uVar11,0);
    uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae38,0);
    uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = *(undefined8 *)*plVar14;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      uVar11 = NativeHelper_0200afdc(uVar11,0);
      uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae30,0);
      uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar11 = *(undefined8 *)*plVar14;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        uVar11 = NativeHelper_0200afdc(uVar11,0);
        uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43c8,0);
        uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
        if ((uVar7 & 1) == 0) {
          uVar11 = *(undefined8 *)*plVar14;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          uVar11 = NativeHelper_0200afdc(uVar11,0);
          uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43e8,0);
          uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
          if ((uVar7 & 1) == 0) {
            uVar11 = *(undefined8 *)*plVar14;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            uVar11 = NativeHelper_0200afdc(uVar11,0);
            uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43d8,0);
            uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
            if ((uVar7 & 1) == 0) {
              uVar11 = *(undefined8 *)*plVar14;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              uVar11 = NativeHelper_0200afdc(uVar11,0);
              uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae40,0);
              uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
              if ((uVar7 & 1) == 0) {
                uVar11 = *(undefined8 *)*plVar14;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                uVar11 = NativeHelper_0200afdc(uVar11,0);
                uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae60,0);
                uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
                if ((uVar7 & 1) == 0) {
                  uVar11 = *(undefined8 *)*plVar14;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  uVar11 = NativeHelper_0200afdc(uVar11,0);
                  uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029bae58,0);
                  uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
                  if ((uVar7 & 1) == 0) {
                    uVar11 = *(undefined8 *)*plVar14;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      NativeHelper_011df1bc();
                    }
                    uVar11 = NativeHelper_0200afdc(uVar11,0);
                    uVar8 = NativeHelper_0200afdc(*(undefined8 *)PTR_DAT_029c43d0,0);
                    uVar7 = NativeHelper_02013e4c(uVar11,uVar8,0);
                    if ((uVar7 & 1) == 0) goto code_r0x0148aa04;
                    uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
                    uVar5 = func_0x025dbfe8(uVar11,uVar13,puVar16,uVar18,0);
                    uStack_70 = CONCAT62(uStack_70._2_6_,uVar5);
                    plVar9 = (long *)NativeHelper_011df1c4
                                               (*(undefined8 *)PTR_DAT_029b88e0,&uStack_70);
                    lVar12 = *(long *)(*plVar14 + 8);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = NativeHelper_011b5234(lVar12);
                    }
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df2dc();
                    }
                    if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df678(plVar9);
                    }
                    pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
                  }
                  else {
                    uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
                    uStack_70 = func_0x025dc060(uVar11,uVar13,puVar16,uVar18,0);
                    plVar9 = (long *)NativeHelper_011df1c4
                                               (*(undefined8 *)PTR_DAT_029b8188,&uStack_70);
                    lVar12 = *(long *)(*plVar14 + 8);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = NativeHelper_011b5234(lVar12);
                    }
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df2dc();
                    }
                    if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df678(plVar9);
                    }
                    pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
                  }
                }
                else {
                  uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
                  uVar6 = func_0x025dc0e4(uVar11,uVar13,puVar16,uVar18,0);
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
                  plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8c58,&uStack_70)
                  ;
                  lVar12 = *(long *)(*plVar14 + 8);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = NativeHelper_011b5234(lVar12);
                  }
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_011df2dc();
                  }
                  if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_011df678(plVar9);
                  }
                  pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
                }
              }
              else {
                uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
                uStack_70 = func_0x025dc168(uVar11,uVar13,puVar16,uVar18,0);
                plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b82e8,&uStack_70);
                lVar12 = *(long *)(*plVar14 + 8);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = NativeHelper_011b5234(lVar12);
                }
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df2dc();
                }
                if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df678(plVar9);
                }
                pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
              }
            }
            else {
              uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
              uVar5 = func_0x025dc1e0(uVar11,uVar13,puVar16,uVar18,0);
              uStack_70 = CONCAT62(uStack_70._2_6_,uVar5);
              plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bb938,&uStack_70);
              lVar12 = *(long *)(*plVar14 + 8);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = NativeHelper_011b5234(lVar12);
              }
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2dc();
              }
              if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df678(plVar9);
              }
              pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
            }
          }
          else {
            uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
            uVar4 = func_0x025dc258(uVar11,uVar13,puVar16,uVar18,0);
            uStack_70 = CONCAT71(uStack_70._1_7_,uVar4);
            plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bb940,&uStack_70);
            lVar12 = *(long *)(*plVar14 + 8);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = NativeHelper_011b5234(lVar12);
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df678(plVar9);
            }
            pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          UnityEngine_Debug_LogWarning_24ea798(*(void **)PTR_DAT_029c43f8,(void *)0x0);
          uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
          uVar4 = func_0x025dc258(uVar11,uVar13,puVar16,uVar18,0);
          uStack_70 = CONCAT71(uStack_70._1_7_,uVar4);
          plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8ba0,&uStack_70);
          lVar12 = *(long *)(*plVar14 + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = NativeHelper_011b5234(lVar12);
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df678(plVar9);
          }
          pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
        }
      }
      else {
        uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
        uVar4 = func_0x025dc2d0(uVar11,uVar13,puVar16,uVar18,0);
        uStack_70 = CONCAT71(uStack_70._1_7_,uVar4) & 0xffffffffffffff01;
        plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,&uStack_70);
        lVar12 = *(long *)(*plVar14 + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = NativeHelper_011b5234(lVar12);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678(plVar9);
        }
        pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
      }
    }
    else {
      uVar11 = func_0x025de180(*(undefined8 *)(lVar12 + 0x18),0);
      uVar6 = func_0x025dc348(uVar11,uVar13,puVar16,uVar18,0);
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
      plVar9 = (long *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&uStack_70);
      lVar12 = *(long *)(*plVar14 + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = NativeHelper_011b5234(lVar12);
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678(plVar9);
      }
      pcVar10 = (char *)NativeHelper_011df1c8(plVar9);
    }
  }
  bVar3 = *pcVar10 != '\0';
code_r0x0148afd4:
  func_0x025d3b7c(lVar15,puVar16,uVar18,0);
  if (*(long *)(lStack_78 + 0x28) == lStack_68) {
    return (bool)(bVar3 & 1);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_02861510();
}

