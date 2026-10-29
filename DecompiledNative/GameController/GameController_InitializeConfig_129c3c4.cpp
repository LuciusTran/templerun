// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void InitializeConfig(PromoFile inPromoFile) { }
// Ghidra address: 013a03c4; ELF VA: 0x12a03c4; file offset: 0x129c3c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0178d550) */
/* WARNING: Removing unreachable block (ram,0x0178d518) */
/* WARNING: Removing unreachable block (ram,0x0178d520) */
/* WARNING: Removing unreachable block (ram,0x0178d52c) */
/* WARNING: Removing unreachable block (ram,0x0178d558) */
/* WARNING: Removing unreachable block (ram,0x0178d564) */

void GameController_InitializeConfig_129c3c4(PromoFile *inPromoFile,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  PromoFile_PromoLineHandler *self;
  ulong uVar12;
  long *plVar13;
  long *paramList;
  long lVar14;
  void *extraout_x1;
  long *plVar15;
  long lVar16;
  long lVar17;
  void *in_x4;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  undefined8 uVar23;
  int *piVar24;
  int iVar25;
  
  puVar3 = PTR_DAT_029be3b0;
  puVar2 = PTR_DAT_029be3a8;
  if ((bRam0000000002b94d19 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be3b0);
    NativeHelper_011df0b4(PTR_DAT_029be3b8);
    NativeHelper_011df0b4(PTR_DAT_029be3c0);
    NativeHelper_011df0b4(PTR_DAT_029be3c8);
    NativeHelper_011df0b4(PTR_DAT_029be3d0);
    NativeHelper_011df0b4(PTR_DAT_029be3d8);
    NativeHelper_011df0b4(PTR_DAT_029be3a8);
    NativeHelper_011df0b4(PTR_DAT_029be3e0);
    NativeHelper_011df0b4(PTR_DAT_029be3e8);
    NativeHelper_011df0b4(PTR_DAT_029be3f0);
    bRam0000000002b94d19 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar10 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2,runtimeMethod);
  PromoFile_PromoLineProcessDelegate_PromoLineProcessDelegate_12cb240
            (pvVar10,(void *)0x0,*(void **)puVar3,(void *)0x0);
  puVar8 = PTR_DAT_029be3e8;
  puVar7 = PTR_DAT_029be3e0;
  puVar6 = PTR_DAT_029be3d8;
  puVar5 = PTR_DAT_029be3d0;
  puVar4 = PTR_DAT_029be3c0;
  puVar3 = PTR_DAT_029be3b8;
  if (inPromoFile == (PromoFile *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  PromoFile_AddPromoLineHandler_142e058
            (inPromoFile,*(void **)PTR_DAT_029be3f0,pvVar10,*(void **)PTR_DAT_029be3c8);
  pvVar10 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  PromoFile_PromoLineProcessDelegate_PromoLineProcessDelegate_12cb240
            (pvVar10,(void *)0x0,*(void **)puVar3,(void *)0x0);
  PromoFile_AddPromoLineHandler_142e058(inPromoFile,*(void **)puVar8,pvVar10,*(void **)puVar5);
  pvVar10 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  PromoFile_PromoLineProcessDelegate_PromoLineProcessDelegate_12cb240
            (pvVar10,(void *)0x0,*(void **)puVar4,(void *)0x0);
  plVar15 = *(long **)puVar7;
  lVar17 = *(long *)puVar6;
  puVar19 = *(undefined8 **)(lVar17 + 0x38);
  if (puVar19 == (undefined8 *)0x0) {
    NativeHelper_011df0b4(PTR_DAT_029c4b50);
    NativeHelper_011df0b4(PTR_DAT_029bfe58);
    NativeHelper_011df0b4(PTR_DAT_029bfe68);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bfdf8);
    NativeHelper_011df0b4(PTR_DAT_029c4b58);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029c4b60);
    puVar19 = *(undefined8 **)(lVar17 + 0x38);
    if (puVar19 == (undefined8 *)0x0) {
      NativeHelper_011b5290(lVar17);
      puVar19 = *(undefined8 **)(lVar17 + 0x38);
    }
  }
  uVar23 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar11 = (void *)NativeHelper_0200afdc(uVar23,0);
  self = (PromoFile_PromoLineHandler *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c4b58);
  PromoFile_PromoLineHandler_PromoLineHandler_12cb3bc(self,pvVar11,pvVar10,(void *)0x0);
  uVar12 = NativeHelper_01e9be28(plVar15,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if (inPromoFile->_PromoLineHandlers == (void *)0x0) {
code_r0x01532304:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  uVar12 = NativeHelper_0178c8d0
                     (inPromoFile->_PromoLineHandlers,plVar15,*(undefined8 *)PTR_DAT_029bfe58);
  pvVar10 = inPromoFile->_PromoLineHandlers;
  if (pvVar10 == (void *)0x0) goto code_r0x01532304;
  if ((uVar12 & 1) != 0) {
    plVar13 = (long *)NativeHelper_0178c65c(pvVar10,plVar15,*(undefined8 *)PTR_DAT_029bfe68);
    puVar2 = PTR_DAT_029bfdf8;
    lVar17 = *(long *)PTR_DAT_029bfdf8;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar17);
      lVar17 = *(long *)puVar2;
    }
    pvVar10 = (void *)**(undefined8 **)(lVar17 + 0xb8);
    paramList = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,3);
    if (paramList != (long *)0x0) {
      if ((plVar15 != (long *)0x0) &&
         (lVar17 = NativeHelper_011df1c0(plVar15,*(undefined8 *)(*paramList + 0x40)), lVar17 == 0))
      {
code_r0x0153230c:
        uVar23 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar23,0);
      }
      if ((int)paramList[3] != 0) {
        paramList[4] = (long)plVar15;
        if (self == (PromoFile_PromoLineHandler *)0x0) goto code_r0x01532304;
        lVar17 = (**(code **)(*(long *)self + 0x168))(self,*(undefined8 *)(*(long *)self + 0x170));
        if ((lVar17 != 0) &&
           (lVar14 = NativeHelper_011df1c0(lVar17,*(undefined8 *)(*paramList + 0x40)), lVar14 == 0))
        goto code_r0x0153230c;
        if (1 < *(uint *)(paramList + 3)) {
          paramList[5] = lVar17;
          if (plVar13 == (long *)0x0) goto code_r0x01532304;
          lVar17 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
          if ((lVar17 != 0) &&
             (lVar14 = NativeHelper_011df1c0(lVar17,*(undefined8 *)(*paramList + 0x40)), lVar14 == 0
             )) goto code_r0x0153230c;
          if (2 < *(uint *)(paramList + 3)) {
            paramList[6] = lVar17;
            if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            puVar2 = PTR_DAT_029b9638;
            pvVar11 = *(void **)PTR_DAT_029c4b60;
            if ((bRam0000000002b9472c & 1) == 0) {
              NativeHelper_011df0b4(PTR_DAT_029b9638,pvVar11,paramList,0);
              NativeHelper_011df0b4(PTR_DAT_029ba678);
              bRam0000000002b9472c = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            if (cRam0000000002b94817 == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b9638);
              cRam0000000002b94817 = '\x01';
            }
            lVar17 = *(long *)puVar2;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              lVar17 = *(long *)puVar2;
            }
            puVar2 = PTR_DAT_029ba678;
            if (*(char *)(*(long *)(lVar17 + 0xb8) + 0x10) == '\0') {
              return;
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            pvVar10 = Imangi_Utilities_ImangiLog_GetOSString_121f50c
                                (pvVar10,*(void **)puVar2,pvVar11,paramList,in_x4);
            puVar4 = PTR_DAT_029baa58;
            puVar3 = PTR_DAT_029b9638;
            puVar2 = PTR_DAT_029b7f68;
            if ((bRam0000000002b9471a & 1) == 0) {
              NativeHelper_011df0b4(PTR_DAT_029b7f68);
              NativeHelper_011df0b4(PTR_DAT_029baa58);
              NativeHelper_011df0b4(PTR_DAT_029b9638);
              bRam0000000002b9471a = 1;
            }
            lVar17 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
            NativeHelper_01694ef4(lVar17,0,*(undefined8 *)puVar4,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            if (pvVar10 != (void *)0x0) {
              iVar25 = *(int *)((long)pvVar10 + 0x10);
              while (0x3ff < iVar25) {
                uVar23 = NativeHelper_01e9d468(pvVar10,0,0x3ff,0);
                if (lVar17 == 0) goto code_r0x01322758;
                (**(code **)(lVar17 + 0x18))
                          (*(undefined8 *)(lVar17 + 0x40),uVar23,*(undefined8 *)(lVar17 + 0x28));
                pvVar10 = (void *)NativeHelper_01e9f644(pvVar10,0x3ff,0);
                if (pvVar10 == (void *)0x0) goto code_r0x01322758;
                iVar25 = *(int *)((long)pvVar10 + 0x10);
              }
              if (lVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01322754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(lVar17 + 0x18))
                          (*(undefined8 *)(lVar17 + 0x40),pvVar10,*(undefined8 *)(lVar17 + 0x28));
                return;
              }
            }
code_r0x01322758:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    goto code_r0x01532304;
  }
  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_029c4b50 + 0x20) + 0xc0) + 0x110);
  if (plVar15 == (long *)0x0) {
    func_0x0200dc6c(5);
  }
  *(int *)((long)pvVar10 + 0x2c) = *(int *)((long)pvVar10 + 0x2c) + 1;
  if (*(long *)((long)pvVar10 + 0x10) == 0) {
    func_0x0178d074(pvVar10,0,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x10));
  }
  plVar13 = *(long **)((long)pvVar10 + 0x30);
  lVar14 = *(long *)((long)pvVar10 + 0x18);
  if (plVar13 == (long *)0x0) {
    if (plVar15 == (long *)0x0) goto code_r0x0178d58c;
    uVar9 = (**(code **)(*plVar15 + 0x158))(plVar15,*(undefined8 *)(*plVar15 + 0x160));
  }
  else {
    lVar16 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = NativeHelper_011b5234(lVar16);
    }
    lVar20 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar12 != 0) {
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == lVar16) {
          puVar19 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
          goto code_r0x0178d234;
        }
        uVar12 = uVar12 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar12 != 0);
    }
    puVar19 = (undefined8 *)NativeHelper_011b5528(plVar13,lVar16,1);
code_r0x0178d234:
    uVar9 = (*(code *)*puVar19)(plVar13,plVar15,puVar19[1]);
  }
  lVar16 = *(long *)((long)pvVar10 + 0x10);
  if (lVar16 == 0) goto code_r0x0178d58c;
  uVar22 = *(uint *)(lVar16 + 0x18);
  uVar9 = uVar9 & 0x7fffffff;
  iVar25 = 0;
  if (uVar22 != 0) {
    iVar25 = (int)uVar9 / (int)uVar22;
  }
  uVar18 = uVar9 - iVar25 * uVar22;
  if (uVar18 < uVar22) {
    piVar24 = (int *)(lVar16 + (ulong)uVar18 * 4 + 0x20);
    uVar22 = *piVar24 - 1;
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)func_0x014b0a50(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x18));
      if (lVar14 == 0) goto code_r0x0178d58c;
      uVar23 = *(undefined8 *)(lVar14 + 0x18);
      uVar18 = (uint)uVar23;
      if (uVar22 < uVar18) {
        iVar25 = 0;
        do {
          uVar18 = (uint)uVar23;
          if (*(uint *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x20) == uVar9) {
            if (plVar13 == (long *)0x0) goto code_r0x0178d58c;
            uVar12 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x28),
                                plVar15,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar12 & 1) != 0) goto code_r0x0178d574;
            uVar18 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar18 <= uVar22) goto code_r0x0178d588;
          uVar22 = *(uint *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x24);
          if ((int)uVar18 <= iVar25) {
            func_0x0201d4c4(0);
          }
          uVar23 = *(undefined8 *)(lVar14 + 0x18);
          iVar25 = iVar25 + 1;
          uVar18 = (uint)uVar23;
        } while (uVar22 < uVar18);
      }
    }
    else {
      if (lVar14 == 0) goto code_r0x0178d58c;
      uVar23 = *(undefined8 *)(lVar14 + 0x18);
      uVar18 = (uint)uVar23;
      if (uVar22 < uVar18) {
        iVar25 = 0;
        do {
          uVar18 = (uint)uVar23;
          if (*(uint *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x20) == uVar9) {
            lVar16 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 8);
            uVar23 = *(undefined8 *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x28);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = NativeHelper_011b5234(lVar16);
            }
            lVar20 = *plVar13;
            uVar12 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar16) {
                  puVar19 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x0178d31c;
                }
                uVar12 = uVar12 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar12 != 0);
            }
            puVar19 = (undefined8 *)NativeHelper_011b5528(plVar13,lVar16,0);
code_r0x0178d31c:
            uVar12 = (*(code *)*puVar19)(plVar13,uVar23,plVar15,puVar19[1]);
            if ((uVar12 & 1) != 0) {
code_r0x0178d574:
              func_0x0201d3c0(plVar15,0);
              return;
            }
            uVar18 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar18 <= uVar22) goto code_r0x0178d588;
          uVar22 = *(uint *)(lVar14 + (long)(int)uVar22 * 0x18 + 0x24);
          if ((int)uVar18 <= iVar25) {
            func_0x0201d4c4(0);
          }
          uVar23 = *(undefined8 *)(lVar14 + 0x18);
          iVar25 = iVar25 + 1;
          uVar18 = (uint)uVar23;
        } while (uVar22 < uVar18);
      }
    }
    if (*(int *)((long)pvVar10 + 0x28) < 1) {
      uVar22 = *(uint *)((long)pvVar10 + 0x20);
      if (uVar22 == uVar18) {
        func_0x0178d914(pvVar10,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x1b0))
        ;
        lVar17 = *(long *)((long)pvVar10 + 0x10);
        *(uint *)((long)pvVar10 + 0x20) = uVar22 + 1;
        if (lVar17 == 0) goto code_r0x0178d58c;
        uVar18 = *(uint *)(lVar17 + 0x18);
        iVar25 = 0;
        if (uVar18 != 0) {
          iVar25 = (int)uVar9 / (int)uVar18;
        }
        uVar1 = uVar9 - iVar25 * uVar18;
        if (uVar18 <= uVar1) goto code_r0x0178d588;
        lVar14 = *(long *)((long)pvVar10 + 0x18);
        piVar24 = (int *)(lVar17 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar14 = *(long *)((long)pvVar10 + 0x18);
        *(uint *)((long)pvVar10 + 0x20) = uVar22 + 1;
      }
      if (lVar14 == 0) {
code_r0x0178d58c:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto code_r0x0178d588;
      lVar17 = (long)(int)uVar22;
    }
    else {
      *(int *)((long)pvVar10 + 0x28) = *(int *)((long)pvVar10 + 0x28) + -1;
      uVar22 = *(uint *)((long)pvVar10 + 0x24);
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto code_r0x0178d588;
      lVar17 = (long)(int)uVar22;
      *(undefined4 *)((long)pvVar10 + 0x24) = *(undefined4 *)(lVar14 + lVar17 * 0x18 + 0x24);
    }
    lVar14 = lVar14 + lVar17 * 0x18;
    *(uint *)(lVar14 + 0x20) = uVar9;
    iVar25 = *piVar24;
    *(long **)(lVar14 + 0x28) = plVar15;
    *(PromoFile_PromoLineHandler **)(lVar14 + 0x30) = self;
    *(int *)(lVar14 + 0x24) = iVar25 + -1;
    *piVar24 = uVar22 + 1;
    return;
  }
code_r0x0178d588:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

