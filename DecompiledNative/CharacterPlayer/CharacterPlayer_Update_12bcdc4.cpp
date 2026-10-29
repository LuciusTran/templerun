// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013c0dc4; ELF VA: 0x12c0dc4; file offset: 0x12bcdc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_Update_12bcdc4(CharacterPlayer *self,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *runtimeMethod_00;
  void *extraout_x1_03;
  void *runtimeMethod_01;
  void *extraout_x1_04;
  void *runtimeMethod_02;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *extraout_x1_09;
  void *runtimeMethod_03;
  void *extraout_x1_10;
  void *extraout_x1_11;
  void *extraout_x1_12;
  void *in_x2;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  Recovered_Vector3 RVar22;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Vector2 RVar23;
  Recovered_Vector2 value_01;
  Recovered_Vector2 value_02;
  undefined1 auVar24 [12];
  
  if ((bRam0000000002b94e53 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bf7f0);
    bRam0000000002b94e53 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar4 = PTR_DAT_029b9758;
  if (self->IsDead != false) {
    return;
  }
  if (self->Hold != false) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_029b9758;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar4;
    runtimeMethod = extraout_x1_00;
  }
  lVar12 = **(long **)(lVar7 + 0xb8);
  if (lVar12 == 0) goto LAB_013c15a4;
  if (*(char *)(lVar12 + 0xf0) != '\0') {
    return;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar4;
    lVar12 = **(long **)(lVar7 + 0xb8);
    runtimeMethod = extraout_x1_01;
    if (lVar12 == 0) goto LAB_013c15a4;
  }
  if (*(char *)(lVar12 + 0x21f) != '\0') {
    return;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar12 = **(long **)(*(long *)puVar4 + 0xb8);
    runtimeMethod = extraout_x1_02;
    if (lVar12 == 0) goto LAB_013c15a4;
  }
  if (*(char *)(lVar12 + 0xec) != '\0') {
    return;
  }
  if (self->StumbleAfterDelay != false) {
    fVar21 = self->StumbleDelay;
    fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar21 = fVar21 - fVar18;
    self->StumbleDelay = fVar21;
    runtimeMethod = runtimeMethod_00;
    if (fVar21 <= 0.0) {
      CharacterPlayer_Stumble_12bd5ac(self,0.0,runtimeMethod_00);
      runtimeMethod = extraout_x1_03;
    }
  }
  if (self->JumpAfterDelay != false) {
    fVar21 = self->JumpDelay;
    fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar21 = fVar21 - fVar18;
    self->JumpDelay = fVar21;
    runtimeMethod = runtimeMethod_01;
    if (fVar21 <= 0.0) {
      CharacterPlayer_Jump_12bd754(self,0.0,runtimeMethod_01);
      runtimeMethod = extraout_x1_04;
    }
  }
  if (self->HasInvincibility == false) {
    fVar18 = 1.0;
  }
  else {
    if ((self->HasBoost == false) || (fVar18 = 0.5, self->BoostDistanceLeft < 50.0)) {
      fVar21 = self->InvincibilityTimeLeft;
      fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      self->InvincibilityTimeLeft = fVar21 - fVar18;
      fVar21 = CharacterPlayer_GetAlpha_12bcc6c(self,runtimeMethod_02);
      fVar18 = 0.5;
      runtimeMethod = extraout_x1_05;
      if (self->InvincibilityTimeLeft <= 2.5) {
        fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar18 = fVar21 - (fVar18 + fVar18);
        runtimeMethod = extraout_x1_06;
        if (fVar18 <= 0.0) {
          fVar18 = 0.5;
        }
      }
    }
    pvVar16 = self->RenderObject;
    if (pvVar16 == (void *)0x0) goto LAB_013c15a4;
    uVar1 = *(uint *)((long)pvVar16 + 0x18);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (uVar1 <= uVar17) goto LAB_013c15a8;
        pvVar15 = *(void **)((long)pvVar16 + (long)(int)uVar17 * 8 + 0x20);
        if ((pvVar15 == (void *)0x0) ||
           (pvVar8 = UnityEngine_Renderer_get_material_24f2d20(pvVar15,(void *)0x0),
           pvVar8 == (void *)0x0)) goto LAB_013c15a4;
        RVar23 = UnityEngine_Material_get_mainTextureOffset_24f39b4(pvVar8,(void *)0x0);
        fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar19 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        pvVar15 = UnityEngine_Renderer_get_material_24f2d20(pvVar15,(void *)0x0);
        if (pvVar15 == (void *)0x0) goto LAB_013c15a4;
        value_01.component1 = RVar23.component1 + fVar19 + fVar19;
        value_01.component0 = RVar23.component0 + fVar21 + fVar21;
        UnityEngine_Material_set_mainTextureOffset_24f3abc(pvVar15,value_01,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar16 + 0x18);
        uVar17 = uVar17 + 1;
        runtimeMethod = extraout_x1_07;
      } while ((int)uVar17 < (int)uVar1);
    }
    pvVar16 = self->AttachmentsRenderObjects;
    if (pvVar16 == (void *)0x0) goto LAB_013c15a4;
    uVar1 = *(uint *)((long)pvVar16 + 0x18);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (uVar1 <= uVar17) {
LAB_013c15a8:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        pvVar15 = *(void **)((long)pvVar16 + (long)(int)uVar17 * 8 + 0x20);
        if ((pvVar15 == (void *)0x0) ||
           (pvVar8 = UnityEngine_Renderer_get_material_24f2d20(pvVar15,(void *)0x0),
           pvVar8 == (void *)0x0)) goto LAB_013c15a4;
        RVar23 = UnityEngine_Material_get_mainTextureOffset_24f39b4(pvVar8,(void *)0x0);
        fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar19 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        pvVar15 = UnityEngine_Renderer_get_material_24f2d20(pvVar15,(void *)0x0);
        if (pvVar15 == (void *)0x0) goto LAB_013c15a4;
        value_02.component1 = RVar23.component1 + fVar19 + fVar19;
        value_02.component0 = RVar23.component0 + fVar21 + fVar21;
        UnityEngine_Material_set_mainTextureOffset_24f3abc(pvVar15,value_02,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar16 + 0x18);
        uVar17 = uVar17 + 1;
        runtimeMethod = extraout_x1_08;
      } while ((int)uVar17 < (int)uVar1);
    }
    if (self->InvincibilityTimeLeft <= 0.0) {
      self->HasInvincibility = false;
      CharacterPlayer_ApplyPlayerTexture_12bd84c(self,runtimeMethod);
      runtimeMethod = extraout_x1_09;
      if (self->HasBoost != false) {
        self->HasBoost = false;
        self->IsMegaBoost = false;
      }
    }
  }
  CharacterPlayer_SetAlpha_12bcab8(self,fVar18,runtimeMethod);
  if (self->HasAngelWings == false) {
LAB_013c113c:
    fVar18 = self->AngelWingsRechargeTimeLeft;
    if (0.0 < fVar18) {
      fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar18 = fVar18 - fVar21;
      self->AngelWingsRechargeTimeLeft = fVar18;
      if ((fVar18 <= 0.0) && (self->AngelWingsRechargeTimeLeft = 0.0, 0 < self->AngelWingsCount)) {
        if (self->Audio == (AudioManager *)0x0) goto LAB_013c15a4;
        AudioManager_PlayFX_12bb190(self->Audio,(void *)0x15,1.0,in_x2);
      }
    }
  }
  else if (self->AreWingsPermanent == false) {
    fVar21 = self->AngelWingsTimeLeft;
    fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar21 = fVar21 - fVar18;
    self->AngelWingsTimeLeft = fVar21;
    if (fVar21 <= 0.0) {
      self->AreWingsPermanent = false;
      self->HasAngelWings = false;
    }
    else if ((self->HasAngelWings != false) && (self->AreWingsPermanent != false))
    goto LAB_013c1184;
    goto LAB_013c113c;
  }
LAB_013c1184:
  if (self->HasVacuum != false) {
    fVar21 = self->VacuumTimeLeft;
    fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar21 = fVar21 - fVar18;
    self->VacuumTimeLeft = fVar21;
    if (fVar21 <= 0.0) {
      self->HasVacuum = false;
    }
  }
  fVar21 = self->TimeSinceLastPowerup;
  fVar18 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  self->TimeSinceLastPowerup = fVar21 + fVar18;
  if (cRam0000000002b94efb == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94efb = '\x01';
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_029b9368 + 0xb8);
  RVar22.component0 = *(float *)(lVar7 + 0x24) * 250.0;
  RVar22.component1 = *(float *)(lVar7 + 0x28) * 250.0;
  RVar22.component2 = *(float *)(lVar7 + 0x2c) * 250.0;
  uVar20 = 0;
  MovingObject_ApplyForce_13091b0((MovingObject *)self,RVar22,(void *)0x0);
  CommonPlayer_Update_12bda14((CommonPlayer *)self,runtimeMethod_03);
  bVar2 = self->IsOnGround;
  pvVar16 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar16 == (void *)0x0) goto LAB_013c15a4;
  RVar22 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
  fVar18 = RVar22.component1;
  if (self->IsOverGround == false) {
LAB_013c1390:
    self->IsOnGround = false;
  }
  else {
    cVar3 = self->IsFalling;
    fVar21 = self->GroundHeight;
    if ((bool)cVar3 == false) {
      if (fVar21 < fVar18) goto LAB_013c1390;
    }
    else if ((fVar21 < fVar18) || (uVar20 = 0, fVar18 < fVar21 + -6.0)) goto LAB_013c1390;
    pvVar16 = extraout_x1_10;
    if (self->IsJumping != false) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_013c15a4;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0xe,1.0,in_x2);
      if (self->DustSprite == (UISprite *)0x0) goto LAB_013c15a4;
      UnityEngine_Behaviour_set_enabled_250972c(self->DustSprite,true,(void *)0x0);
      cVar3 = self->IsFalling;
      self->IsJumping = false;
      pvVar16 = extraout_x1_11;
    }
    if (cVar3 != '\0') {
      uVar20 = 0;
      if ((fVar18 < self->GroundHeight + -2.0) && (self->HasInvincibility == false)) {
        uVar20 = 0;
        CharacterPlayer_Stumble_12bd5ac(self,0.0,pvVar16);
        pvVar16 = extraout_x1_12;
      }
    }
    if (self->IsGroundHeightChangeHigher != false) {
      uVar20 = 0;
      if (self->GroundHeight + -6.0 <= fVar18) {
        uVar20 = 0;
        if ((fVar18 < self->GroundHeight + -2.0) && (self->HasInvincibility == false)) {
          uVar20 = 0;
          CharacterPlayer_Stumble_12bd5ac(self,0.0,pvVar16);
        }
      }
    }
    pvVar16 = (void *)NativeHelper_0260e1a8(self,0);
    pvVar15 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar15 == (void *)0x0) goto LAB_013c15a4;
    RVar22 = UnityEngine_Transform_get_position_2516710(pvVar15,(void *)0x0);
    value.component0 = RVar22.component0;
    fVar18 = self->GroundHeight;
    pvVar15 = (void *)NativeHelper_0260e1a8
                                (value.component0,CONCAT44(uVar20,RVar22.component1),
                                 RVar22.component2,self,0);
    if (pvVar15 == (void *)0x0) goto LAB_013c15a4;
    RVar22 = UnityEngine_Transform_get_position_2516710(pvVar15,(void *)0x0);
    value.component2 = RVar22.component2;
    if (pvVar16 == (void *)0x0) goto LAB_013c15a4;
    value.component1 = fVar18;
    UnityEngine_Transform_set_position_25167b0(pvVar16,value,(void *)0x0);
    fVar18 = self->GroundHeight;
    *(undefined4 *)&self->field_0x38 = 0;
    self->IsOnGround = true;
    self->IsGroundHeightChangeHigher = false;
  }
  if (self->ShadowSPrite == (UISprite *)0x0) goto LAB_013c15a4;
  pvVar16 = (void *)0x0;
  UnityEngine_Behaviour_set_enabled_250972c(self->ShadowSPrite,self->IsOverGround,(void *)0x0);
  if (self->IsOverGround != false) {
    pvVar15 = self->ShadowSpot;
    if (pvVar15 == (void *)0x0) goto LAB_013c15a4;
    RVar22 = UnityEngine_Transform_get_position_2516710(pvVar15,(void *)0x0);
    value_00.component0 = RVar22.component0;
    if (self->ShadowSpot == (void *)0x0) goto LAB_013c15a4;
    fVar21 = self->GroundHeight;
    RVar22 = UnityEngine_Transform_get_position_2516710(self->ShadowSpot,(void *)0x0);
    value_00.component2 = RVar22.component2;
    value_00.component1 = fVar21;
    UnityEngine_Transform_set_position_25167b0(pvVar15,value_00,(void *)0x0);
  }
  if (self->GroundHeight <= fVar18) {
    self->IsFalling = false;
  }
  else {
    fVar19 = self->TimeSinceFallStart;
    fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar19 = fVar19 + fVar21;
    self->TimeSinceFallStart = fVar19;
    if (self->IsFalling == false) {
      self->TimeSinceFallStart = 0.0;
      self->IsFalling = true;
    }
    else if (0.25 < fVar19) {
      if (self->Audio == (AudioManager *)0x0) goto LAB_013c15a4;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x17,1.0,pvVar16);
    }
  }
  if (self->IsSliding != false) {
    fVar19 = self->TimeSinceSlideStart;
    fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    self->TimeSinceSlideStart = fVar19 + fVar21;
    if (self->DustSprite == (UISprite *)0x0) goto LAB_013c15a4;
    pvVar16 = (void *)0x0;
    UnityEngine_Behaviour_set_enabled_250972c(self->DustSprite,true,(void *)0x0);
    if (self->SlideDuration < self->TimeSinceSlideStart) {
      self->IsSliding = false;
      if (self->Audio == (AudioManager *)0x0) goto LAB_013c15a4;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x1b,1.0,pvVar16);
      if (self->AnimateObject == (void *)0x0) goto LAB_013c15a4;
      pvVar16 = (void *)0x0;
      NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf7f0);
    }
  }
  if ((((bVar2 == false) && (self->IsOnGround != false)) && (self->IsStumbling == false)) &&
     (self->IsSliding == false)) {
    if (self->AnimateObject == (void *)0x0) {
LAB_013c15a4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pvVar16 = (void *)0x0;
    NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf7f0);
  }
  if (self->IsStumbling != false) {
    fVar19 = self->TimeSinceStumbleStart;
    fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar19 = fVar19 + fVar21;
    self->TimeSinceStumbleStart = fVar19;
    if (self->StumbleDuration < fVar19) {
      self->IsStumbling = false;
    }
  }
  fVar19 = self->StumbleKillTimer;
  fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  self->StumbleKillTimer = fVar19 + fVar21;
  if (self->IsStrafing != false) {
    fVar19 = self->TimeSinceStrafeStart;
    fVar21 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar19 = fVar19 + fVar21;
    self->TimeSinceStrafeStart = fVar19;
    if (self->StrafeDuration < fVar19) {
      self->IsStrafing = false;
    }
  }
  if (fVar18 < -35.0) {
    CharacterPlayer_Kill_12bda84(self,(void *)0x1,pvVar16);
  }
  if ((bRam0000000002b94e5d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9cb8);
    NativeHelper_011df0b4(PTR_DAT_029bf810);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    bRam0000000002b94e5d = 1;
  }
  if (cRam0000000002b945bd == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b945bd = '\x01';
  }
  fVar19 = *(float *)&self->field_0x34;
  fVar21 = *(float *)&self->field_0x38;
  fVar18 = *(float *)&self->field_0x3c;
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if ((self->AnimateObject == (void *)0x0) ||
     (pvVar16 = UnityEngine_Component_GetComponent_13ccba8
                          (self->AnimateObject,*(void **)PTR_DAT_029bf810),
     puVar4 = PTR_DAT_029b8028, pvVar16 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  plVar9 = UnityEngine_Animation_GetEnumerator_24e115c(pvVar16,(void *)0x0);
  puVar6 = PTR_DAT_029b9cb8;
  puVar5 = PTR_DAT_029b86b8;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  fVar18 = (SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar18 * fVar18) / 100.0) * _UNK_007a3c80;
  do {
    lVar12 = *plVar9;
    lVar7 = *(long *)puVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_013c1c9c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,lVar7,0);
LAB_013c1c9c:
    uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar13 & 1) == 0) {
      lVar7 = 0;
      break;
    }
    lVar12 = *plVar9;
    lVar7 = *(long *)puVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_013c1cfc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,lVar7,1);
LAB_013c1cfc:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if (*plVar11 != *(long *)puVar6) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df678();
    }
    UnityEngine_AnimationState_set_speed_24e1440(plVar11,fVar18,(void *)0x0);
  } while( true );
LAB_013c1d30:
  plVar11 = (long *)NativeHelper_011df1c0(plVar9,*(undefined8 *)puVar4);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_013c1d90;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar11,*(long *)puVar4,0);
LAB_013c1d90:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
    plVar9 = plVar11;
  }
  if (lVar7 == 0) {
    return;
  }
  auVar24 = NativeHelper_011df2d4(lVar7);
  if (auVar24._8_4_ != 1) goto LAB_013c1e0c;
  plVar11 = (long *)NativeHelper_02861460();
  lVar7 = *plVar11;
  NativeHelper_02861470();
  goto LAB_013c1d30;
LAB_013c1e0c:
  plVar9 = (long *)NativeHelper_011df1c0(plVar9,*(undefined8 *)puVar4);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_013c1e6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,*(long *)puVar4,0);
LAB_013c1e6c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  NativeHelper_012c28d8(auVar24._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

