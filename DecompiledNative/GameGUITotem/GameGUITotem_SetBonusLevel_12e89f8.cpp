// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetBonusLevel(int level, bool awardBonus) { }
// Ghidra address: 013ec9f8; ELF VA: 0x12ec9f8; file offset: 0x12e89f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013bf2b4) */
/* WARNING: Removing unreachable block (ram,0x013bf2b8) */
/* WARNING: Removing unreachable block (ram,0x013bf2bc) */
/* WARNING: Removing unreachable block (ram,0x013bf2c0) */
/* WARNING: Removing unreachable block (ram,0x013bf2c4) */

void GameGUITotem_SetBonusLevel_12e89f8
               (GameGUITotem *self,int level,bool awardBonus,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  GameGUITotem *self_00;
  GameGUITotem *self_01;
  GameGUITotem *self_02;
  GameGUITotem *self_03;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  float fVar17;
  
  pvVar8 = (void *)(ulong)awardBonus;
  self_00 = self;
  if ((bRam0000000002b94fe7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029c09d0);
    NativeHelper_011df0b4(PTR_DAT_029c09d8);
    NativeHelper_011df0b4(PTR_DAT_029c09e0);
    self_00 = (GameGUITotem *)NativeHelper_011df0b4(PTR_DAT_029c09e8);
    bRam0000000002b94fe7 = 1;
  }
  if ((level < 1) || (iVar1 = self->BonusLevel, iVar1 == level)) {
    return;
  }
  self->BonusLevel = level;
  self->BonusLevelJustChagned = true;
  self->TimeSinceBonusLevelChang = 0.0;
  if (level == 1) {
    GameGUITotem_StartEmblemFallIfVisible_12e8bcc(self_00,self->FallingTotemEmblem1,pvVar8);
    GameGUITotem_StartEmblemFallIfVisible_12e8bcc(self_01,self->FallingTotemEmblem2,pvVar8);
    GameGUITotem_StartEmblemFallIfVisible_12e8bcc(self_02,self->FallingTotemEmblem3,pvVar8);
    GameGUITotem_StartEmblemFallIfVisible_12e8bcc(self_03,self->FallingTotemEmblem4,pvVar8);
  }
  if (self->TotemEmblem1 != (UISprite *)0x0) {
    UnityEngine_Behaviour_set_enabled_250972c(self->TotemEmblem1,1 < self->BonusLevel,(void *)0x0);
    if (self->TotemEmblem2 != (UISprite *)0x0) {
      UnityEngine_Behaviour_set_enabled_250972c(self->TotemEmblem2,2 < self->BonusLevel,(void *)0x0)
      ;
      if (self->TotemEmblem3 != (UISprite *)0x0) {
        UnityEngine_Behaviour_set_enabled_250972c
                  (self->TotemEmblem3,3 < self->BonusLevel,(void *)0x0);
        if (self->TotemEmblem4 != (UISprite *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c
                    (self->TotemEmblem4,4 < self->BonusLevel,(void *)0x0);
          if (level <= iVar1) {
            return;
          }
          if (!awardBonus) {
            return;
          }
          iVar1 = self->BonusLevel;
          if (3 < iVar1) {
            iVar1 = 4;
          }
          uVar2 = iVar1 - 2;
          if (uVar2 < 4) {
            iVar1 = *(int *)(&UNK_007a43b0 + (long)(int)uVar2 * 4);
            pvVar8 = (void *)NativeHelper_013eccbc
                                       (self,**(undefined8 **)(&UNK_02867ad8 + (long)(int)uVar2 * 8)
                                       );
            UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar8,(void *)0x0);
            self->AccumulatedScore = self->AccumulatedScore + iVar1;
          }
          lVar9 = **(long **)(*(long *)PTR_DAT_029bdfa0 + 0xb8);
          if (lVar9 != 0) {
            if ((bRam0000000002b94e46 & 1) == 0) {
              NativeHelper_011df0b4(PTR_DAT_029bf6d0,1,0);
              NativeHelper_011df0b4(PTR_DAT_029bf6d8);
              NativeHelper_011df0b4(PTR_DAT_029bf6e0);
              NativeHelper_011df0b4(PTR_DAT_029b7f98);
              bRam0000000002b94e46 = 1;
            }
            puVar3 = PTR_DAT_029b7f98;
            if ((*(long *)(lVar9 + 0x70) != 0) && (*(long *)(lVar9 + 0xc0) != 0)) {
              pvVar8 = (void *)NativeHelper_01768fbc
                                         (*(long *)(lVar9 + 0xc0),1,*(undefined8 *)PTR_DAT_029bf6d0)
              ;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)puVar3);
              }
              bVar5 = UnityEngine_object_op_Implicit_2510034(pvVar8,(void *)0x0);
              if (!bVar5) {
                return;
              }
              if (*(long *)(lVar9 + 0xa8) != 0) {
                uVar6 = NativeHelper_01a2fd9c
                                  (*(long *)(lVar9 + 0xa8),pvVar8,*(undefined8 *)PTR_DAT_029bf6e0);
                if ((uVar6 & 1) != 0) {
                  return;
                }
                lVar7 = *(long *)(lVar9 + 0xa8);
                if (lVar7 != 0) {
                  lVar13 = *(long *)(lVar7 + 0x10);
                  lVar14 = *(long *)PTR_DAT_029bf6d8;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar2 = *(uint *)(lVar7 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                      *(void **)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = pvVar8;
                    }
                    else {
                      NativeHelper_01a2fa14
                                (lVar7,pvVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                    puVar3 = PTR_DAT_029b7f98;
                    lVar7 = *(long *)(lVar9 + 0x28);
                    if (lVar7 != 0) {
                      fVar17 = *(float *)(lVar9 + 0xb4);
                      if ((bRam0000000002b9bf78 & 1) == 0) {
                        NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar8,0);
                        NativeHelper_011df0b4(PTR_DAT_029b7f98);
                        NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                        bRam0000000002b9bf78 = 1;
                      }
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                      }
                      bVar5 = UnityEngine_object_op_Equality_250d534(pvVar8,(void *)0x0,(void *)0x0)
                      ;
                      puVar3 = PTR_DAT_029f4ee0;
                      if (!bVar5) {
                        if (pcRam0000000002b9bf48 == (code *)0x0) {
                          pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                        }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000002b9bf48)(fVar17 * 0.5,lVar7,pvVar8);
                        return;
                      }
                      if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                      }
                      puVar4 = PTR_DAT_029b7fb8;
                      uVar10 = *(undefined8 *)puVar3;
                      uVar12 = 0;
                      if ((bRam0000000002b9c302 & 1) == 0) {
                        NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
                        NativeHelper_011df0b4(PTR_DAT_029f2e60);
                        bRam0000000002b9c302 = 1;
                        uVar12 = extraout_x1;
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                        uVar12 = extraout_x1_00;
                      }
                      if (cRam0000000002b9b5c7 == '\0') {
                        NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar12);
                        cRam0000000002b9b5c7 = '\x01';
                      }
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                        lVar9 = *(long *)puVar4;
                      }
                      plVar16 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
                      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df2dc();
                      }
                      lVar9 = *plVar16;
                      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar6 != 0) {
                        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_029f2e60) {
                            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                            goto code_r0x025ee880;
                          }
                          uVar6 = uVar6 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)
                                NativeHelper_011b5528(plVar16,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar11)(plVar16,2,uVar10,puVar11[1]);
                      return;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

