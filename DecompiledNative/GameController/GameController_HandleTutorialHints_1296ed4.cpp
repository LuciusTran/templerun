// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleTutorialHints() { }
// Ghidra address: 0139aed4; ELF VA: 0x129aed4; file offset: 0x1296ed4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013bf2b4) */
/* WARNING: Removing unreachable block (ram,0x013bf2b8) */
/* WARNING: Removing unreachable block (ram,0x013bf2bc) */
/* WARNING: Removing unreachable block (ram,0x013bf2c0) */
/* WARNING: Removing unreachable block (ram,0x013bf2c4) */

void GameController_HandleTutorialHints_1296ed4(GameController *self,void *runtimeMethod)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  PathElement *pPVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *extraout_x1;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  void *in_x5;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  PathElement *pPVar19;
  long *plVar20;
  float fVar21;
  Recovered_Vector2 point;
  
  puVar3 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94d05 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be150);
    NativeHelper_011df0b4(PTR_DAT_029be158);
    NativeHelper_011df0b4(PTR_DAT_029be160);
    NativeHelper_011df0b4(PTR_DAT_029be168);
    bRam0000000002b94d05 = 1;
    runtimeMethod = extraout_x1;
  }
  pPVar19 = self->PathRoot;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  bVar5 = UnityEngine_object_op_Inequality_250c8e4(pPVar19,(void *)0x0,(void *)0x0);
  if (!bVar5) {
    return;
  }
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    pPVar19 = self->PathRoot;
    point = MovingObject_GetPosition2D_1309760((MovingObject *)self->GamePlayer,(void *)0x0);
    if (pPVar19 != (PathElement *)0x0) {
      pPVar19 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                          (pPVar19,point,120.0,self->PathRootOrigin,true,(void *)0x0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(pPVar19,(void *)0x0,(void *)0x0);
      if (bVar5) {
        if (pPVar19 == (PathElement *)0x0) goto LAB_0139b1f4;
        if (pPVar19->IsTutorialObstacle != false) {
          pPVar19->IsTutorialObstacle = false;
          pPVar6 = PathElement_GetPathLeft_130be28(pPVar19,self->PathRootOrigin,(void *)0x0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar3);
          }
          bVar5 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
          if (bVar5) {
            if (pPVar6 == (PathElement *)0x0) goto LAB_0139b1f4;
            if (pPVar6->HasObstacles == false) {
              GameController_HintSprite_12971f8
                        (self,*(void **)PTR_DAT_029be160,(Recovered_Vector3)ZEXT412(0x41a00000),
                         (Recovered_Vector3)ZEXT412(0xc3960000),true,false,(void *)0x0,in_x5);
              if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) ==
                  (AudioManager *)0x0) goto LAB_0139b1f4;
              AudioManager_PlayFX_12bb190
                        ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),
                         (void *)0x1f,1.0,(void *)0x0);
            }
          }
          pPVar6 = PathElement_GetPathRight_130bf24(pPVar19,self->PathRootOrigin,(void *)0x0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar3);
          }
          bVar5 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
          if (bVar5) {
            if (pPVar6 == (PathElement *)0x0) goto LAB_0139b1f4;
            if (pPVar6->HasObstacles == false) {
              GameController_HintSprite_12971f8
                        (self,*(void **)PTR_DAT_029be168,(Recovered_Vector3)ZEXT412(0xc1a00000),
                         (Recovered_Vector3)ZEXT412(0x43960000),true,false,(void *)0x0,in_x5);
              if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) ==
                  (AudioManager *)0x0) goto LAB_0139b1f4;
              AudioManager_PlayFX_12bb190
                        ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),
                         (void *)0x1f,1.0,(void *)0x0);
            }
          }
          if ((pPVar19->HasObstacles != false) && (pPVar19->Obstacles != 2)) {
            if (pPVar19->Obstacles - 5U < 2) {
              uVar16 = 0xc3960000;
              pvVar12 = *(void **)PTR_DAT_029be150;
              uVar14 = 0x42200000;
            }
            else {
              uVar16 = 0x43960000;
              pvVar12 = *(void **)PTR_DAT_029be158;
              uVar14 = 0xc2200000;
            }
            auVar1._4_8_ = 0;
            auVar1._0_4_ = uVar14;
            auVar2._4_8_ = 0;
            auVar2._0_4_ = uVar16;
            GameController_HintSprite_12971f8
                      (self,pvVar12,(Recovered_Vector3)(auVar1 << 0x20),
                       (Recovered_Vector3)(auVar2 << 0x20),true,false,(void *)0x0,in_x5);
            lVar7 = **(long **)(*(long *)PTR_DAT_029bdfa0 + 0xb8);
            if (lVar7 != 0) {
              if ((bRam0000000002b94e46 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029bf6d0,0x1f,0);
                NativeHelper_011df0b4(PTR_DAT_029bf6d8);
                NativeHelper_011df0b4(PTR_DAT_029bf6e0);
                NativeHelper_011df0b4(PTR_DAT_029b7f98);
                bRam0000000002b94e46 = 1;
              }
              puVar3 = PTR_DAT_029b7f98;
              if ((*(long *)(lVar7 + 0x70) != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
                pvVar12 = (void *)NativeHelper_01768fbc
                                            (*(long *)(lVar7 + 0xc0),0x1f,
                                             *(undefined8 *)PTR_DAT_029bf6d0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  NativeHelper_011df1bc(*(long *)puVar3);
                }
                bVar5 = UnityEngine_object_op_Implicit_2510034(pvVar12,(void *)0x0);
                if (!bVar5) {
                  return;
                }
                if (*(long *)(lVar7 + 0xa8) != 0) {
                  uVar8 = NativeHelper_01a2fd9c
                                    (*(long *)(lVar7 + 0xa8),pvVar12,*(undefined8 *)PTR_DAT_029bf6e0
                                    );
                  if ((uVar8 & 1) != 0) {
                    return;
                  }
                  lVar9 = *(long *)(lVar7 + 0xa8);
                  if (lVar9 != 0) {
                    lVar15 = *(long *)(lVar9 + 0x10);
                    lVar17 = *(long *)PTR_DAT_029bf6d8;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar15 != 0) {
                      uVar14 = *(uint *)(lVar9 + 0x18);
                      if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar14 + 1;
                        *(void **)(lVar15 + (long)(int)uVar14 * 8 + 0x20) = pvVar12;
                      }
                      else {
                        NativeHelper_01a2fa14
                                  (lVar9,pvVar12,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_029b7f98;
                      lVar9 = *(long *)(lVar7 + 0x28);
                      if (lVar9 != 0) {
                        fVar21 = *(float *)(lVar7 + 0xb4);
                        if ((bRam0000000002b9bf78 & 1) == 0) {
                          NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar12,0);
                          NativeHelper_011df0b4(PTR_DAT_029b7f98);
                          NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                          bRam0000000002b9bf78 = 1;
                        }
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                        }
                        bVar5 = UnityEngine_object_op_Equality_250d534
                                          (pvVar12,(void *)0x0,(void *)0x0);
                        puVar3 = PTR_DAT_029f4ee0;
                        if (!bVar5) {
                          if (pcRam0000000002b9bf48 == (code *)0x0) {
                            pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                          }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000002b9bf48)(fVar21 * 1.0,lVar9,pvVar12);
                          return;
                        }
                        if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                        }
                        puVar4 = PTR_DAT_029b7fb8;
                        uVar10 = *(undefined8 *)puVar3;
                        uVar13 = 0;
                        if ((bRam0000000002b9c302 & 1) == 0) {
                          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
                          NativeHelper_011df0b4(PTR_DAT_029f2e60);
                          bRam0000000002b9c302 = 1;
                          uVar13 = extraout_x1_00;
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                          uVar13 = extraout_x1_01;
                        }
                        if (cRam0000000002b9b5c7 == '\0') {
                          NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar13);
                          cRam0000000002b9b5c7 = '\x01';
                        }
                        lVar7 = *(long *)puVar4;
                        if (*(int *)(lVar7 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                          lVar7 = *(long *)puVar4;
                        }
                        plVar20 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
                        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          NativeHelper_011df2dc();
                        }
                        lVar7 = *plVar20;
                        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar8 != 0) {
                          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_029f2e60) {
                              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar18 + 3) * 0x10 + 0x138);
                              goto code_r0x025ee880;
                            }
                            uVar8 = uVar8 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar8 != 0);
                        }
                        puVar11 = (undefined8 *)
                                  NativeHelper_011b5528(plVar20,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar11)(plVar20,2,uVar10,puVar11[1]);
                        return;
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            goto LAB_0139b1f4;
          }
        }
      }
      return;
    }
  }
LAB_0139b1f4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

