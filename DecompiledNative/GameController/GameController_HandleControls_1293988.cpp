// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleControls() { }
// Ghidra address: 01397988; ELF VA: 0x1297988; file offset: 0x1293988
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_HandleControls_1293988(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int index;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *extraout_x1_09;
  void *extraout_x1_10;
  void *extraout_x1_11;
  void *extraout_x1_12;
  void *extraout_x1_13;
  void *extraout_x1_14;
  void *extraout_x1_15;
  void *extraout_x1_16;
  long lVar4;
  CharacterPlayer *pCVar5;
  float *pfVar6;
  PathElement *x;
  void *pvVar7;
  CharacterPlayer **ppCVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Recovered_Vector3 RVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 RVar18;
  
  if ((bRam0000000002b94d08 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be0b0);
    NativeHelper_011df0b4(PTR_DAT_029be0b8);
    bRam0000000002b94d08 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  ppCVar8 = &self->GamePlayer;
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  if ((*ppCVar8)->IsDead != false) {
    return;
  }
  x = self->NearestElement;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_029be0b0;
  if (bVar3) {
    return;
  }
  pvVar7 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029be0b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar3) {
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 == 0) goto LAB_01398300;
    if (*(char *)(lVar4 + 100) != '\0') {
      pCVar5 = *ppCVar8;
      if (*(int *)(lVar4 + 0x68) == 1) {
        if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
        fVar14 = -6.0;
      }
      else {
        if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
        if (*(int *)(lVar4 + 0x68) != -1) {
          pCVar5->PlayerXOffset = 0.0;
          goto LAB_01397ab4;
        }
        fVar14 = 6.0;
      }
      pCVar5->PlayerXOffset = fVar14;
    }
  }
LAB_01397ab4:
  pCVar5 = *ppCVar8;
  if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
  fVar14 = *(float *)&pCVar5->field_0x34;
  fVar15 = *(float *)&pCVar5->field_0x3c;
  pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0);
  if (pvVar7 == (void *)0x0) goto LAB_01398300;
  RVar16 = UnityEngine_Transform_get_right_2516ae8(pvVar7,(void *)0x0);
  fVar12 = RVar16.component0;
  if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
     (pvVar7 = (void *)NativeHelper_0260e1a8(fVar12,RVar16.component1,RVar16.component2,*ppCVar8,0),
     pvVar7 == (void *)0x0)) goto LAB_01398300;
  RVar16 = UnityEngine_Transform_get_right_2516ae8(pvVar7,(void *)0x0);
  fVar13 = RVar16.component2;
  if (cRam0000000002b945bf == '\0') {
    NativeHelper_011df0b4(RVar16.component0,RVar16.component1,PTR_DAT_029b97c8);
    cRam0000000002b945bf = '\x01';
  }
  puVar1 = PTR_DAT_029b97c8;
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  fVar11 = _UNK_007a3c5c;
  fVar9 = SQRT(fVar12 * fVar12 + fVar13 * fVar13);
  if (fVar9 <= _UNK_007a3c5c) {
    if (cRam0000000002b945be == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9a40);
      cRam0000000002b945be = '\x01';
    }
    fVar12 = **(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8);
    fVar13 = (*(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8))[1];
  }
  else {
    fVar12 = fVar12 / fVar9;
    fVar13 = fVar13 / fVar9;
  }
  if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
     (pvVar7 = (void *)NativeHelper_0260e1a8(*ppCVar8,0), pvVar7 == (void *)0x0)) goto LAB_01398300;
  RVar16 = UnityEngine_Transform_get_right_2516ae8(pvVar7,(void *)0x0);
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  fVar14 = -(fVar14 * fVar12 + fVar15 * fVar13);
  RVar17.component2 = RVar16.component2 * fVar14 * 10.0;
  RVar17.component1 = RVar16.component1 * fVar14 * 10.0;
  RVar17.component0 = RVar16.component0 * fVar14 * 10.0;
  MovingObject_ApplyForce_13091b0((MovingObject *)*ppCVar8,RVar17,(void *)0x0);
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  if (((*ppCVar8)->HasBoost == false) && (self->GodMode == false)) {
    pvVar7 = *(void **)PTR_DAT_029b9758;
    if (*(int *)((long)pvVar7 + 0xe0) == 0) {
      pvVar7 = (void *)NativeHelper_011df1bc();
    }
    bVar3 = GameController_get_AllowFallOnCliffs_1297450(pvVar7);
    if (!bVar3) goto LAB_01397c24;
  }
  else {
LAB_01397c24:
    if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
    if (self->NearestElement->Level == 3) {
      pCVar5 = *ppCVar8;
      if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
      if (6.0 <= pCVar5->PlayerXOffset) {
        fVar14 = 6.0;
      }
      else {
        if (-6.0 < pCVar5->PlayerXOffset) goto LAB_01397c6c;
        fVar14 = -6.0;
      }
      pCVar5->PlayerXOffset = fVar14;
    }
  }
LAB_01397c6c:
  fVar14 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  if ((**(long **)(*(long *)PTR_DAT_029be0b8 + 0xb8) == 0) ||
     (pCVar5 = *ppCVar8, pCVar5 == (CharacterPlayer *)0x0)) goto LAB_01398300;
  if (pCVar5->IsFalling == false) {
    fVar15 = *(float *)(**(long **)(*(long *)PTR_DAT_029be0b8 + 0xb8) + 0x60);
    pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0);
    if (pvVar7 == (void *)0x0) goto LAB_01398300;
    RVar16 = UnityEngine_Transform_get_right_2516ae8(pvVar7,(void *)0x0);
    if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
       (pvVar7 = (void *)NativeHelper_0260e1a8
                                   (RVar16.component0,RVar16.component1,RVar16.component2,*ppCVar8,0
                                   ), pvVar7 == (void *)0x0)) goto LAB_01398300;
    RVar17 = UnityEngine_Transform_get_right_2516ae8(pvVar7,(void *)0x0);
    if ((self->NearestElement == (PathElement *)0x0) ||
       (pvVar7 = (void *)NativeHelper_0260e1a8
                                   (RVar17.component0,RVar17.component1,self->NearestElement,0),
       pvVar7 == (void *)0x0)) goto LAB_01398300;
    if (_UNK_007a3cac < fVar14) {
      fVar14 = _UNK_007a3cac;
    }
    fVar12 = fVar14 * 50.0 * (fVar15 * 1.75 + 0.25);
    RVar18 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
    fVar15 = RVar18.component2;
    fVar14 = RVar18.component0;
    if (ABS(RVar16.component0) <= ABS(RVar17.component2)) {
      pCVar5 = *ppCVar8;
      if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
      fVar13 = pCVar5->PlayerXOffset;
      pvVar7 = (void *)NativeHelper_0260e1a8(fVar14,RVar18.component1,pCVar5,0);
      if (pvVar7 == (void *)0x0) goto LAB_01398300;
      RVar16 = UnityEngine_Transform_get_forward_2516be0(pvVar7,(void *)0x0);
      if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8
                                     (RVar16.component0,RVar16.component1,RVar16.component2,*ppCVar8
                                      ,0), pvVar7 == (void *)0x0)) goto LAB_01398300;
      RVar17 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
      fVar14 = fVar15 + fVar13 * RVar16.component0;
      fVar13 = fVar14 - RVar17.component2;
      if (((*ppCVar8)->HasBoost == false) && (self->GodMode == false)) {
        pvVar7 = *(void **)PTR_DAT_029b9758;
        if (*(int *)((long)pvVar7 + 0xe0) == 0) {
          pvVar7 = (void *)NativeHelper_011df1bc(fVar14,RVar17.component1);
        }
        bVar3 = GameController_get_AllowFallOnCliffs_1297450(pvVar7);
        if (!bVar3) goto LAB_01397f30;
LAB_01397f70:
        pvVar7 = *(void **)PTR_DAT_029b9758;
        fVar13 = fVar13 * _UNK_007a3c08;
        if (*(int *)((long)pvVar7 + 0xe0) == 0) {
          pvVar7 = (void *)NativeHelper_011df1bc();
        }
        fVar13 = fVar12 * fVar13;
        bVar3 = GameController_get_AllowFallOnNarrows_12974b4(pvVar7);
        if (!bVar3) {
          if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
          bVar3 = PathElement_IsNarrow_130b6ec(self->NearestElement,(void *)0x0);
          if (bVar3) {
            pCVar5 = *ppCVar8;
            if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
            if (pCVar5->IsOnGround != false) {
              pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0);
              if (pvVar7 == (void *)0x0) goto LAB_01398300;
              RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
              if (5.0 < ABS(fVar15 - RVar16.component2)) goto LAB_01398018;
            }
          }
        }
      }
      else {
LAB_01397f30:
        if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
        if (self->NearestElement->Level != 3) goto LAB_01397f70;
        if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
           (pvVar7 = (void *)NativeHelper_0260e1a8(*ppCVar8,0), pvVar7 == (void *)0x0))
        goto LAB_01398300;
        RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
        if (ABS(fVar15 - RVar16.component2) <= 6.0) goto LAB_01397f70;
      }
      pCVar5 = *ppCVar8;
      if ((pCVar5 == (CharacterPlayer *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0), pvVar7 == (void *)0x0))
      goto LAB_01398300;
      RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      MovingObject_SetZ_1309418((MovingObject *)pCVar5,fVar13 + RVar16.component2,(void *)0x0);
      goto LAB_01398018;
    }
    pCVar5 = *ppCVar8;
    if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
    fVar15 = pCVar5->PlayerXOffset;
    pvVar7 = (void *)NativeHelper_0260e1a8(fVar14,RVar18.component1,pCVar5,0);
    if (pvVar7 == (void *)0x0) goto LAB_01398300;
    RVar16 = UnityEngine_Transform_get_forward_2516be0(pvVar7,(void *)0x0);
    if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
       (pvVar7 = (void *)NativeHelper_0260e1a8(RVar16.component0,RVar16.component1,*ppCVar8,0),
       pvVar7 == (void *)0x0)) goto LAB_01398300;
    RVar17 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
    if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
    fVar15 = fVar14 - fVar15 * RVar16.component2;
    fVar13 = fVar15 - RVar17.component0;
    if (((*ppCVar8)->HasBoost == false) && (self->GodMode == false)) {
      pvVar7 = *(void **)PTR_DAT_029b9758;
      if (*(int *)((long)pvVar7 + 0xe0) == 0) {
        pvVar7 = (void *)NativeHelper_011df1bc(RVar17.component0,fVar15,RVar17.component2);
      }
      bVar3 = GameController_get_AllowFallOnCliffs_1297450(pvVar7);
      if (!bVar3) goto LAB_01397dbc;
LAB_01397dfc:
      pvVar7 = *(void **)PTR_DAT_029b9758;
      fVar13 = fVar13 * _UNK_007a3c08;
      if (*(int *)((long)pvVar7 + 0xe0) == 0) {
        pvVar7 = (void *)NativeHelper_011df1bc();
      }
      fVar13 = fVar12 * fVar13;
      bVar3 = GameController_get_AllowFallOnNarrows_12974b4(pvVar7);
      if (!bVar3) {
        if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
        bVar3 = PathElement_IsNarrow_130b6ec(self->NearestElement,(void *)0x0);
        if (bVar3) {
          pCVar5 = *ppCVar8;
          if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
          if (pCVar5->IsOnGround != false) {
            pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0);
            if (pvVar7 == (void *)0x0) goto LAB_01398300;
            RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
            if (5.0 < ABS(fVar14 - RVar16.component0)) goto LAB_01398018;
          }
        }
      }
    }
    else {
LAB_01397dbc:
      if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
      if (self->NearestElement->Level != 3) goto LAB_01397dfc;
      if ((*ppCVar8 == (CharacterPlayer *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8(*ppCVar8,0), pvVar7 == (void *)0x0))
      goto LAB_01398300;
      RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      if (ABS(fVar14 - RVar16.component0) <= 6.0) goto LAB_01397dfc;
    }
    pCVar5 = *ppCVar8;
    if ((pCVar5 == (CharacterPlayer *)0x0) ||
       (pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0), pvVar7 == (void *)0x0)) goto LAB_01398300;
    RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
    MovingObject_SetX_1309320((MovingObject *)pCVar5,fVar13 + RVar16.component0,(void *)0x0);
  }
LAB_01398018:
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  fVar14 = CharacterPlayer_GetRunVelocity_12bdeac(*ppCVar8,(void *)0x0);
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  fVar15 = CharacterPlayer_GetMaxRunVelocity_12bdf10(*ppCVar8,(void *)0x0);
  if (*ppCVar8 == (CharacterPlayer *)0x0) goto LAB_01398300;
  fVar12 = CharacterPlayer_GetMaxRunVelocity_12bdf10(*ppCVar8,(void *)0x0);
  pCVar5 = *ppCVar8;
  if (fVar12 <= fVar14) {
    if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
    if (pCVar5->HasBoost == false) {
      return;
    }
    if (pCVar5->BoostSlowdownDistance < pCVar5->BoostDistanceLeft) {
      return;
    }
  }
  else if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
  if (pCVar5->IsJumping != false) {
    return;
  }
  if (pCVar5->IsSliding != false) {
    return;
  }
  if (self->NearestElement == (PathElement *)0x0) goto LAB_01398300;
  self->LastLevel = self->NearestElement->Level;
  pvVar7 = (void *)NativeHelper_0260e1a8(pCVar5,0);
  if (pvVar7 == (void *)0x0) goto LAB_01398300;
  RVar16 = UnityEngine_Transform_get_forward_2516be0(pvVar7,(void *)0x0);
  fVar9 = RVar16.component2;
  fVar13 = RVar16.component1;
  fVar12 = RVar16.component0;
  pvVar7 = extraout_x1_00;
  if (cRam0000000002b945c3 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b945c3 = '\x01';
    pvVar7 = extraout_x1_01;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar7 = extraout_x1_02;
  }
  fVar10 = SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar13 * fVar13);
  if (fVar10 <= fVar11) {
    if (cRam0000000002b94510 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9368);
      cRam0000000002b94510 = '\x01';
      pvVar7 = extraout_x1_03;
    }
    pfVar6 = *(float **)(*(long *)PTR_DAT_029b9368 + 0xb8);
    fVar12 = *pfVar6;
    fVar13 = pfVar6[1];
    fVar9 = pfVar6[2];
  }
  else {
    fVar12 = fVar12 / fVar10;
    fVar13 = fVar13 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  puVar1 = PTR_DAT_029b9758;
  if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar7 = extraout_x1_04;
  }
  fVar14 = fVar14 / fVar15;
  fVar15 = GameController_GetAccelerationCurveThreshold_1297518(0,pvVar7);
  pvVar7 = extraout_x1_05;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar7 = extraout_x1_06;
  }
  index = 0;
  if (fVar15 <= fVar14) {
    fVar15 = GameController_GetAccelerationCurveThreshold_1297518(0,pvVar7);
    pvVar7 = extraout_x1_07;
    if (fVar15 <= fVar14) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar7 = extraout_x1_08;
      }
      fVar15 = GameController_GetAccelerationCurveThreshold_1297518(1,pvVar7);
      pvVar7 = extraout_x1_09;
      if (fVar14 <= fVar15) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar7 = extraout_x1_15;
        }
        index = 1;
        goto LAB_0139824c;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar7 = extraout_x1_10;
    }
    fVar15 = GameController_GetAccelerationCurveThreshold_1297518(1,pvVar7);
    pvVar7 = extraout_x1_11;
    if (fVar15 <= fVar14) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar7 = extraout_x1_12;
      }
      fVar15 = GameController_GetAccelerationCurveThreshold_1297518(2,pvVar7);
      pvVar7 = extraout_x1_13;
      if (fVar14 <= fVar15) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar7 = extraout_x1_16;
        }
        index = 2;
        goto LAB_0139824c;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar7 = extraout_x1_14;
    }
    index = 3;
  }
LAB_0139824c:
  fVar15 = GameController_GetAccelerationCurveForce_12975c0(index,pvVar7);
  pCVar5 = *ppCVar8;
  if (pCVar5 != (CharacterPlayer *)0x0) {
    if (pCVar5->HasBoost != false) {
      if (pCVar5->BoostDistanceLeft <= pCVar5->BoostSlowdownDistance) {
        fVar11 = CharacterPlayer_GetRunVelocity_12bdeac(pCVar5,(void *)0x0);
        pCVar5 = *ppCVar8;
        if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01398300;
        if (pCVar5->VelocityBeforeBoost < fVar11) {
          fVar15 = -150.0;
        }
      }
      else {
        fVar15 = 150.0;
      }
    }
    if ((_UNK_007a3c80 <= fVar14) && (self->IsTutorialMode != false)) {
      return;
    }
    *(ulong *)&pCVar5->field_0x28 =
         CONCAT44(fVar13 * fVar15 + (float)((ulong)*(undefined8 *)&pCVar5->field_0x28 >> 0x20),
                  fVar12 * fVar15 + (float)*(undefined8 *)&pCVar5->field_0x28);
    *(float *)&pCVar5->field_0x30 = fVar9 * fVar15 + *(float *)&pCVar5->field_0x30;
    pCVar5->field_0x24 = 1;
    return;
  }
LAB_01398300:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

