// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013e6e60; ELF VA: 0x12e6e60; file offset: 0x12e2e60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_Awake_12e2e60(EndGameUI *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  EndGameUI *self_00;
  ulong uVar9;
  long lVar10;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  Recovered_Vector3 RVar22;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  if ((bRam0000000002b94fbf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdb90);
    bRam0000000002b94fbf = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029bdb90;
  if (self->CoinsHeaderTransform == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc(0,runtimeMethod);
  }
  RVar22 = UnityEngine_Transform_get_localPosition_2515e38(self->CoinsHeaderTransform,(void *)0x0);
  (self->CoinsHeaderDefaultPos).component0 = RVar22.component0;
  (self->CoinsHeaderDefaultPos).component1 = RVar22.component1;
  (self->CoinsHeaderDefaultPos).component2 = RVar22.component2;
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
  EndGameUI_Setup_12e2ed8(self,runtimeMethod_00);
  puVar3 = PTR_DAT_029c0760;
  puVar2 = PTR_DAT_029c0758;
  if ((bRam0000000002b94fcc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029c0768);
    NativeHelper_011df0b4(PTR_DAT_029c0770);
    NativeHelper_011df0b4(PTR_DAT_029c0778);
    NativeHelper_011df0b4(PTR_DAT_029c0780);
    NativeHelper_011df0b4(PTR_DAT_029c0788);
    NativeHelper_011df0b4(PTR_DAT_029c0790);
    NativeHelper_011df0b4(PTR_DAT_029c0760);
    NativeHelper_011df0b4(PTR_DAT_029c0758);
    NativeHelper_011df0b4(PTR_DAT_029c0798);
    NativeHelper_011df0b4(PTR_DAT_029c07a0);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029c07a8);
    NativeHelper_011df0b4(PTR_DAT_029b8420);
    NativeHelper_011df0b4(PTR_DAT_029c07b0);
    NativeHelper_011df0b4(PTR_DAT_029b8428);
    NativeHelper_011df0b4(PTR_DAT_029c07b8);
    NativeHelper_011df0b4(PTR_DAT_029b8430);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029c07c0);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029b9918);
    NativeHelper_011df0b4(PTR_DAT_029c07c8);
    NativeHelper_011df0b4(PTR_DAT_029c07d0);
    NativeHelper_011df0b4(PTR_DAT_029c07d8);
    NativeHelper_011df0b4(PTR_DAT_029c07e0);
    NativeHelper_011df0b4(PTR_DAT_029c07e8);
    NativeHelper_011df0b4(PTR_DAT_029c07f0);
    NativeHelper_011df0b4(PTR_DAT_029c07f8);
    bRam0000000002b94fcc = 1;
  }
  iStack_6c = 0;
  uStack_68 = 0;
  pvVar6 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01768700(pvVar6,*(undefined8 *)puVar3);
  self->DeathDetails = pvVar6;
  if ((self->DeathImageFile != (void *)0x0) &&
     (pvVar6 = UnityEngine_TextAsset_get_text_250f308(self->DeathImageFile,(void *)0x0),
     pvVar6 != (void *)0x0)) {
    lVar7 = NativeHelper_01e9dd2c(pvVar6,10,0,0);
    puVar2 = PTR_DAT_029c07e0;
    iStack_64 = 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar21 = 0;
        lVar15 = 0;
        lVar17 = 0;
        lVar16 = 0;
        plVar20 = (long *)PTR_DAT_029b7fe8;
        do {
          if (uVar1 <= uVar21) goto code_r0x013e7844;
          lVar18 = *(long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
          if (((lVar18 == 0) || (lVar8 = NativeHelper_01e9fa9c(lVar18,0), lVar8 == 0)) ||
             (lVar8 = NativeHelper_01e9dd2c(lVar8,0x20,0,0), lVar8 == 0)) goto code_r0x013e7840;
          if (1 < *(int *)(lVar8 + 0x18)) {
            uVar19 = *(undefined8 *)(lVar8 + 0x20);
            pvVar6 = (void *)0x0;
            self_00 = (EndGameUI *)NativeHelper_01e9b79c(uVar19,*(undefined8 *)puVar2);
            if (((ulong)self_00 & 1) == 0) {
              uVar9 = NativeHelper_01e9b79c(uVar19,*(undefined8 *)PTR_DAT_029c07f8,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = NativeHelper_01e9b79c(uVar19,*(undefined8 *)PTR_DAT_029c07e8,0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = NativeHelper_01e9b79c(uVar19,*(undefined8 *)PTR_DAT_029c07d0,0);
                  if ((uVar9 & 1) == 0) {
                    uVar19 = NativeHelper_01ffa318(&iStack_64,0);
                    if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x013e7844;
                    pvVar6 = (void *)NativeHelper_01e9bd68
                                               (uVar19,*(undefined8 *)PTR_DAT_029c07c0,
                                                *(undefined8 *)(lVar8 + 0x20),0);
                    lVar8 = *plVar20;
                    lVar18 = *(long *)(lVar8 + 0x38);
                    if (lVar18 == 0) {
                      NativeHelper_011b5290(lVar8);
                      lVar18 = *(long *)(lVar8 + 0x38);
                    }
                    lVar18 = *(long *)(lVar18 + 0x10);
                    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                      lVar18 = NativeHelper_011b5234();
                    }
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      NativeHelper_011df1bc();
                    }
                    lVar18 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
                      lVar18 = NativeHelper_011b5234();
                    }
                    pvVar14 = (void *)**(undefined8 **)(lVar18 + 0xb8);
                    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
                    }
                    Imangi_Utilities_ImangiLog_Error_12165d4
                              (*(void **)PTR_DAT_029c05c8,pvVar6,pvVar14,(void *)0x0);
                    DebugEx_Break_1323c50((void *)0x0);
                  }
                  else if (*(int *)(lVar8 + 0x18) == 3) {
                    lVar13 = *(long *)(lVar8 + 0x30);
                    lVar10 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,1);
                    if (lVar10 == 0) goto code_r0x013e7840;
                    if (*(int *)(lVar10 + 0x18) == 0) {
code_r0x013e7844:
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df2e4();
                    }
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_029b9918;
                    if ((lVar13 == 0) ||
                       (lVar10 = NativeHelper_01e9ebcc(lVar13,lVar10,0,0), lVar10 == 0))
                    goto code_r0x013e7840;
                    if (*(int *)(lVar10 + 0x18) != 2) {
                      uVar19 = NativeHelper_01ffa318(&iStack_64,0);
                      uVar11 = *(undefined8 *)PTR_DAT_029c07c8;
                      goto code_r0x013e7738;
                    }
                    iVar4 = NativeHelper_01ffa648(*(undefined8 *)(lVar10 + 0x20),0);
                    if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x013e7844;
                    iVar5 = NativeHelper_01ffa648(*(undefined8 *)(lVar10 + 0x28),0);
                    if (((iVar5 == 0) || (iVar4 == 0)) || (iVar5 <= iVar4)) {
                      uVar19 = NativeHelper_01ffa318(&iStack_64,0);
                      pvVar6 = (void *)NativeHelper_01e9bd68
                                                 (uVar19,*(undefined8 *)PTR_DAT_029c07c8,lVar18,0);
                      lVar7 = *(long *)PTR_DAT_029b7fe8;
                      goto code_r0x013e7744;
                    }
                    iStack_6c = iVar4;
                    if (lVar15 == 0) goto code_r0x013e7840;
                    do {
                      if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x013e7844;
                      lVar18 = *(long *)(lVar15 + 0x18);
                      uVar11 = *(undefined8 *)(lVar8 + 0x28);
                      uVar19 = NativeHelper_01ffa318(&iStack_6c,0);
                      uVar19 = NativeHelper_01e92d00(uVar11,uVar19,0);
                      if (lVar18 == 0) goto code_r0x013e7840;
                      lVar10 = *(long *)(lVar18 + 0x10);
                      lVar13 = *(long *)PTR_DAT_029b8420;
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      if (lVar10 == 0) goto code_r0x013e7840;
                      uVar1 = *(uint *)(lVar18 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar19;
                      }
                      else {
                        NativeHelper_01a2fa14
                                  (lVar18,uVar19,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      iStack_6c = iStack_6c + 1;
                      plVar20 = (long *)PTR_DAT_029b7fe8;
                    } while (iStack_6c <= iVar5);
                  }
                  else if (*(int *)(lVar8 + 0x18) == 2) {
                    if ((lVar15 == 0) || (lVar18 = *(long *)(lVar15 + 0x18), lVar18 == 0))
                    goto code_r0x013e7840;
                    lVar10 = *(long *)(lVar8 + 0x28);
                    lVar8 = *(long *)(lVar18 + 0x10);
                    lVar13 = *(long *)PTR_DAT_029b8420;
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar8 == 0) goto code_r0x013e7840;
                    uVar1 = *(uint *)(lVar18 + 0x18);
                    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                      lVar8 = *(long *)(lVar13 + 0x20);
                      goto code_r0x013e747c;
                    }
                    *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
                  }
                }
                else {
                  lVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c07a0);
                  NativeHelper_0203e408(lVar10,0);
                  if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x013e7844;
                  if (lVar10 == 0) goto code_r0x013e7840;
                  *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar8 + 0x28);
                  uVar19 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8430);
                  NativeHelper_01a2f248(uVar19,*(undefined8 *)PTR_DAT_029b8428);
                  *(undefined8 *)(lVar10 + 0x18) = uVar19;
                  if (lVar17 == 0) goto code_r0x013e7840;
                  lVar18 = *(long *)(lVar17 + 0x10);
                  lVar8 = *(long *)PTR_DAT_029c07a8;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar18 == 0) goto code_r0x013e7840;
                  uVar1 = *(uint *)(lVar17 + 0x18);
                  lVar15 = lVar10;
                  if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                    *(long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
                  }
                  else {
                    lVar8 = *(long *)(lVar8 + 0x20);
                    lVar18 = lVar17;
code_r0x013e747c:
                    NativeHelper_01a2fa14
                              (lVar18,lVar10,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
                  }
                }
              }
              else {
                if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x013e7844;
                uStack_68 = NativeHelper_01ffa648(*(undefined8 *)(lVar8 + 0x28),0);
                if (lVar16 == 0) goto code_r0x013e7840;
                uVar9 = NativeHelper_01757d54(lVar16,uStack_68,*(undefined8 *)PTR_DAT_029c0780);
                if ((uVar9 & 1) != 0) {
                  uVar19 = NativeHelper_01ffa318(&iStack_64,0);
                  lVar18 = NativeHelper_01ffa318(&uStack_68,0);
                  puVar12 = (undefined8 *)PTR_DAT_029c07d8;
                  goto code_r0x013e772c;
                }
                lVar17 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c07b8);
                NativeHelper_01a2f248(lVar17,*(undefined8 *)PTR_DAT_029c07b0);
                NativeHelper_01757b60(lVar16,uStack_68,lVar17,*(undefined8 *)PTR_DAT_029c0770);
              }
            }
            else {
              if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x013e7844;
              pvVar6 = EndGameUI_TypeFromName_12e5350(self_00,*(void **)(lVar8 + 0x28),pvVar6);
              if (self->DeathDetails == (void *)0x0) goto code_r0x013e7840;
              uVar9 = NativeHelper_01769250
                                (self->DeathDetails,(ulong)pvVar6 & 0xffffffff,
                                 *(undefined8 *)PTR_DAT_029c0788);
              if ((uVar9 & 1) != 0) {
                uVar19 = NativeHelper_01ffa318(&iStack_64,0);
                uStack_88 = *(undefined8 *)PTR_DAT_029c0768;
                uStack_78 = SUB84(pvVar6,0);
                uStack_80 = 0xffffffffffffffff;
                lVar18 = NativeHelper_02031f7c(&uStack_88,0);
                puVar12 = (undefined8 *)PTR_DAT_029c07f0;
code_r0x013e772c:
                uVar11 = *puVar12;
code_r0x013e7738:
                pvVar6 = (void *)NativeHelper_01e9bd68(uVar19,uVar11,lVar18,0);
                lVar7 = *plVar20;
code_r0x013e7744:
                lVar15 = *(long *)(lVar7 + 0x38);
                if (lVar15 == 0) {
                  NativeHelper_011b5290(lVar7);
                  lVar15 = *(long *)(lVar7 + 0x38);
                }
                lVar15 = *(long *)(lVar15 + 0x10);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  lVar15 = NativeHelper_011b5234();
                }
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = NativeHelper_011b5234();
                }
                pvVar14 = (void *)**(undefined8 **)(lVar7 + 0xb8);
                if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                  NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
                }
                Imangi_Utilities_ImangiLog_Error_12165d4
                          (*(void **)PTR_DAT_029c05c8,pvVar6,pvVar14,(void *)0x0);
                return;
              }
              lVar16 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c0798);
              NativeHelper_01757204(lVar16,*(undefined8 *)PTR_DAT_029c0790);
              if (self->DeathDetails == (void *)0x0) goto code_r0x013e7840;
              NativeHelper_0176905c
                        (self->DeathDetails,(ulong)pvVar6 & 0xffffffff,lVar16,
                         *(undefined8 *)PTR_DAT_029c0778);
            }
            iStack_64 = iStack_64 + 1;
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < (int)uVar1);
      }
      return;
    }
  }
code_r0x013e7840:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

