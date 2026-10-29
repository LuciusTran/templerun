// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SimulateEnemies() { }
// Ghidra address: 01399d7c; ELF VA: 0x1299d7c; file offset: 0x1295d7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_SimulateEnemies_1295d7c(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  MovingObject *self_00;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  CharacterPlayer *pCVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_var;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  Recovered_Vector3 RVar21;
  Recovered_Vector3 RVar22;
  Recovered_Vector3 RVar23;
  Recovered_Vector3 RVar24;
  Recovered_Vector3 RVar25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  MovingObject *pMStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  MovingObject *pMStack_b0;
  
  if ((bRam0000000002b94d09 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde58);
    NativeHelper_011df0b4(PTR_DAT_029bde60);
    NativeHelper_011df0b4(PTR_DAT_029bde68);
    NativeHelper_011df0b4(PTR_DAT_029bde78);
    NativeHelper_011df0b4(PTR_DAT_029be128);
    NativeHelper_011df0b4(PTR_DAT_029be130);
    NativeHelper_011df0b4(PTR_DAT_029be138);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d09 = 1;
  }
  puVar2 = PTR_DAT_029be138;
  puVar1 = PTR_DAT_029b7f98;
  uStack_c0 = 0;
  uStack_b8 = 0;
  pMStack_b0 = (MovingObject *)0x0;
  pvVar4 = self->Enemies;
  if (pvVar4 == (void *)0x0) goto LAB_0139a534;
  if (*(int *)((long)pvVar4 + 0x18) == 0) {
    return;
  }
  if ((3 < *(int *)((long)pvVar4 + 0x18)) && (self->IsIntroScene == false)) {
    iVar10 = 3;
    do {
      lVar5 = NativeHelper_01a2f750(pvVar4,iVar10,*(undefined8 *)puVar2);
      if (lVar5 == 0) goto LAB_0139a534;
      uVar6 = NativeHelper_0260e1e4(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      NativeHelper_02614ce0(uVar6,0);
      pvVar4 = self->Enemies;
      if (pvVar4 == (void *)0x0) goto LAB_0139a534;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)((long)pvVar4 + 0x18));
    NativeHelper_01a31258
              (pvVar4,3,*(int *)((long)pvVar4 + 0x18) + -3,*(undefined8 *)PTR_DAT_029be128);
  }
  pCVar9 = self->GamePlayer;
  if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_0139a534;
  fVar15 = (pCVar9->StumbleKillTimer / 10.0) * 46.0 + -23.0;
  fVar17 = 11.5;
  if ((11.5 <= fVar15) && (fVar17 = fVar15, 25.0 < fVar15)) {
    fVar17 = 75.0;
  }
  if (pCVar9->IsSliding == false) {
LAB_01399f44:
    if (self->GameInput == (GameInput *)0x0) goto LAB_0139a534;
    if (self->GameInput->JustTurned != false) {
      fVar17 = fVar17 + 10.0;
    }
    fVar15 = 100.0;
  }
  else {
    if (self->MainCamera == (GameCamera *)0x0) goto LAB_0139a534;
    if (self->MainCamera->NeedsToDuckCamera == false) goto LAB_01399f44;
    fVar17 = fVar17 + 75.0;
    fVar15 = 1000.0;
  }
  fVar20 = fVar17;
  if ((pCVar9->IsDead != false) && (fVar20 = 0.0, *(int *)&pCVar9->field_0xe0 != 6)) {
    fVar20 = fVar17;
  }
  fVar18 = self->EnemyFollowDistance;
  fVar19 = fVar20 - fVar18;
  fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  fVar13 = -fVar12;
  fVar17 = 100.0;
  if (0.0 <= fVar19) {
    fVar13 = fVar12;
    fVar17 = fVar15;
  }
  if (ABS(fVar13 * fVar17) <= ABS(fVar20 - fVar18)) {
    fVar19 = fVar13 * fVar17;
  }
  self->EnemyFollowDistance = self->EnemyFollowDistance + fVar19;
  puVar1 = PTR_DAT_029bde60;
  if (self->Enemies != (void *)0x0) {
    NativeHelper_01a30500(&uStack_d8,self->Enemies,*(undefined8 *)PTR_DAT_029bde78);
    puVar2 = PTR_DAT_029b97c8;
    fVar17 = _UNK_007a3c5c;
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    pMStack_b0 = pMStack_c8;
    uVar3 = 0xffffffff;
    while( true ) {
      do {
        uVar11 = uVar3;
        uVar7 = NativeHelper_0182184c(&uStack_c0,*(undefined8 *)puVar1);
        self_00 = pMStack_b0;
        if ((uVar7 & 1) == 0) {
          NativeHelper_01821848(&uStack_c0,*(undefined8 *)PTR_DAT_029bde58);
          return;
        }
        pCVar9 = self->GamePlayer;
        if (pCVar9 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (pMStack_b0 == (MovingObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        *(float *)&pMStack_b0[1].field_0x10 = pCVar9->GroundHeight;
        uVar3 = uVar11 + 1;
      } while (pCVar9->IsFalling != false);
      pvVar4 = (void *)NativeHelper_0260e1a8(pMStack_b0,0);
      if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar8 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar21 = UnityEngine_Transform_get_eulerAngles_25168d0(pvVar8,(void *)0x0);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      UnityEngine_Transform_set_eulerAngles_2516958(pvVar4,RVar21,(void *)0x0);
      if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      fVar15 = CharacterPlayer_GetRunVelocity_12bdeac(self->GamePlayer,(void *)0x0);
      uVar6 = 0x42a00000;
      if ((80.0 <= fVar15) && (uVar6 = CONCAT44(extraout_var,fVar15), 100.0 < fVar15)) {
        uVar6 = 0x42c80000;
      }
      fVar20 = 0.0;
      fVar15 = 0.0;
      *(int *)&self_00[1].field_0x8 = (int)uVar6;
      if (uVar11 < 7) {
        uVar6 = 0;
        fVar15 = self->EnemySpreadFrontBack * *(float *)(&UNK_007c4264 + (long)(int)uVar11 * 4);
        fVar20 = self->EnemySpreadLeftRight * *(float *)(&UNK_007c4280 + (long)(int)uVar11 * 4);
      }
      uVar16 = (undefined4)((ulong)uVar6 >> 0x20);
      pCVar9 = self->GamePlayer;
      if (pCVar9 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      fVar13 = fVar20;
      if ((pCVar9->IsDead != false) && (fVar13 = fVar20 * 0.25, *(int *)&pCVar9->field_0xe0 != 6)) {
        fVar13 = fVar20;
      }
      pvVar4 = (void *)NativeHelper_0260e1a8(self_00,0);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar21 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
      uVar6 = CONCAT44(uVar16,RVar21.component1);
      if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc(RVar21.component0,uVar6,RVar21.component2);
      }
      pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
      uVar16 = (undefined4)((ulong)uVar6 >> 0x20);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar22 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
      fVar19 = RVar22.component2;
      fVar20 = RVar22.component0;
      pCVar9 = self->GamePlayer;
      if (pCVar9 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((pCVar9->IsFalling == false) &&
         ((pCVar9->IsDead == false || (*(int *)&pCVar9->field_0xe0 != 6)))) {
        pvVar4 = (void *)NativeHelper_0260e1a8(pCVar9,0);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        RVar23 = UnityEngine_Transform_get_right_2516ae8(pvVar4,(void *)0x0);
        uVar6 = CONCAT44(uVar16,RVar23.component1);
        fVar12 = RVar23.component0;
        if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc(fVar12,uVar6,RVar23.component2);
        }
        pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
        uVar16 = (undefined4)((ulong)uVar6 >> 0x20);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        RVar23 = UnityEngine_Transform_get_right_2516ae8(pvVar4,(void *)0x0);
        fVar18 = RVar23.component2;
        if (cRam0000000002b945bf == '\0') {
          NativeHelper_011df0b4(RVar23.component0,CONCAT44(uVar16,RVar23.component1),puVar2);
          cRam0000000002b945bf = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        fVar14 = SQRT(fVar12 * fVar12 + fVar18 * fVar18);
        if (fVar14 <= fVar17) {
          if (cRam0000000002b945be == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b9a40);
            cRam0000000002b945be = '\x01';
          }
          fVar12 = **(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8);
          fVar18 = (*(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8))[1];
        }
        else {
          fVar12 = fVar12 / fVar14;
          fVar18 = fVar18 / fVar14;
        }
        pCVar9 = self->GamePlayer;
        uVar16 = 0;
        if (ABS(fVar12) <= ABS(fVar18)) {
          if (pCVar9 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(pCVar9,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar23 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          uVar6 = CONCAT44(uVar16,RVar23.component1);
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc(RVar23.component0,uVar6);
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          uVar16 = (undefined4)((ulong)uVar6 >> 0x20);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar24 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc(RVar24.component0,CONCAT44(uVar16,RVar24.component1));
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar25 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          fVar19 = 30.0;
          if (RVar23.component2 <= 0.0) {
            fVar19 = -30.0;
          }
          fVar19 = fVar19 + RVar24.component2;
          fVar12 = -2.1474835e+09;
          if (fVar19 != INFINITY) {
            fVar12 = (float)((int)fVar19 / 0x3c) * 60.0;
          }
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar23 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          fVar19 = (fVar12 - RVar25.component2) * 0.5 + RVar23.component2;
        }
        else {
          if (pCVar9 == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(pCVar9,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar23 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          uVar6 = CONCAT44(uVar16,RVar23.component1);
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc(RVar23.component0,uVar6,RVar23.component2);
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          uVar16 = (undefined4)((ulong)uVar6 >> 0x20);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar24 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc
                      (RVar24.component0,CONCAT44(uVar16,RVar24.component1),RVar24.component2);
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar25 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          fVar20 = 30.0;
          if (RVar23.component0 <= 0.0) {
            fVar20 = -30.0;
          }
          fVar20 = fVar20 + RVar24.component0;
          fVar12 = -2.1474835e+09;
          if (fVar20 != INFINITY) {
            fVar12 = (float)((int)fVar20 / 0x3c) * 60.0;
          }
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar23 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          fVar20 = (fVar12 - RVar25.component0) * 0.5 + RVar23.component0;
        }
      }
      pvVar4 = (void *)NativeHelper_0260e1a8(self_00,0);
      if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar8 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar23 = UnityEngine_Transform_get_forward_2516be0(pvVar8,(void *)0x0);
      if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      fVar12 = self->EnemyFollowDistance;
      pvVar8 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
      if (pvVar8 == (void *)0x0) break;
      RVar24 = UnityEngine_Transform_get_right_2516ae8(pvVar8,(void *)0x0);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      fVar15 = fVar15 + fVar12;
      RVar25.component2 = (fVar19 - RVar23.component2 * fVar15) + fVar13 * RVar24.component2;
      RVar25.component1 =
           (RVar22.component1 - RVar23.component1 * fVar15) + fVar13 * RVar24.component1;
      RVar25.component0 = (fVar20 - RVar23.component0 * fVar15) + fVar13 * RVar24.component0;
      UnityEngine_Transform_set_position_25167b0(pvVar4,RVar25,(void *)0x0);
      MovingObject_SetY_130939c(self_00,RVar21.component1,(void *)0x0);
      self_00[1].field_0xc = 1;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_0139a534:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

