// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013db648; ELF VA: 0x12db648; file offset: 0x12d7648
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameCamera_Update_12d7648(GameCamera *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  MovingObject *pMVar9;
  void *in_x2;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  CharacterPlayer *pCVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_d2;
  undefined4 uVar20;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  Recovered_Vector3 RVar26;
  Recovered_Vector3 RVar27;
  Recovered_Vector3 RVar28;
  Recovered_Quaternion value;
  
  uVar20 = (undefined4)((ulong)in_d2 >> 0x20);
  if ((bRam0000000002b94f60 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c03f8);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94f60 = 1;
  }
  MovingObject_Update_1308914((MovingObject *)self,(void *)0x0);
  if (self->ShowMainMenuAfterFollow != false) {
    bVar3 = MovingObject_IsMoving_1308f04((MovingObject *)self,(void *)0x0);
    if (bVar3) {
      uVar5 = NativeHelper_02647af4(0,0);
      if (((uVar5 & 1) != 0) || (iVar4 = NativeHelper_026480a4(0), 0 < iVar4)) {
        GameCamera_SetMainMenuAniatmion_12d7f20(self,true,in_x2);
      }
    }
    else {
      self->ShowMainMenuAfterFollow = false;
      if (self->MainMenuGUI == (MainMenu *)0x0) goto LAB_013dbf1c;
      BasePanel_Show_12dff8c((BasePanel *)self->MainMenuGUI,(void *)0x0);
    }
  }
  puVar1 = PTR_DAT_029b7f98;
  pCVar13 = self->GamePlayer;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029b9758;
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pCVar13,(void *)0x0,(void *)0x0);
  if (bVar3) {
    pCVar13 = self->GamePlayer;
    if (pCVar13 == (CharacterPlayer *)0x0) goto LAB_013dbf1c;
    bVar3 = pCVar13->IsJumping != false;
    if (pCVar13->IsDead == false) {
      pfVar10 = (float *)&pCVar13->field_0x34;
      pfVar11 = (float *)&pCVar13->field_0x38;
      pfVar12 = (float *)&pCVar13->field_0x3c;
      goto LAB_013db79c;
    }
  }
  else {
    if ((self->Player == (CommonPlayer *)0x0) ||
       (pvVar7 = UnityEngine_Component_GetComponent_13ccba8(self->Player,*(void **)PTR_DAT_029c03f8)
       , pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
    bVar3 = false;
    pfVar10 = (float *)((long)pvVar7 + 0xac);
    pfVar11 = (float *)((long)pvVar7 + 0xb0);
    pfVar12 = (float *)((long)pvVar7 + 0xb4);
LAB_013db79c:
    lVar6 = *(long *)puVar2;
    fVar24 = *pfVar10;
    fVar23 = *pfVar11;
    fVar25 = *pfVar12;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_013dbf1c;
    if (*(char *)(**(long **)(lVar6 + 0xb8) + 0xf0) != '\0') goto LAB_013dbccc;
    if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013dbf1c;
    pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
    if (((self->Player == (CommonPlayer *)0x0) ||
        (pvVar8 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar8 == (void *)0x0)) ||
       (RVar26 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0),
       pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
    UnityEngine_Transform_set_position_25167b0(pvVar7,RVar26,(void *)0x0);
    if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013dbf1c;
    pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
    if (((self->Player == (CommonPlayer *)0x0) ||
        (pvVar8 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar8 == (void *)0x0)) ||
       (value = UnityEngine_Transform_get_rotation_2516900(pvVar8,(void *)0x0),
       pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
    UnityEngine_Transform_set_rotation_2516988(pvVar7,value,(void *)0x0);
    if (self->NeedsToDuckCamera == false) {
      if (!bVar3) {
        fVar16 = self->FollowHeightRun;
        fVar17 = self->FollowDistanceRun;
        fVar14 = self->FocusHeightRun;
        goto LAB_013db928;
      }
      if (self->Player == (CommonPlayer *)0x0) goto LAB_013dbf1c;
      fVar14 = self->FollowHeightJump;
      pvVar7 = (void *)NativeHelper_0260e1a8(self->Player,0);
      if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      uVar18 = CONCAT44(uVar20,RVar26.component2);
      fVar14 = fVar14 + (RVar26.component1 - self->GroundHeight) * 0.5;
      self->FollowHeight = fVar14;
      if (self->Player == (CommonPlayer *)0x0) goto LAB_013dbf1c;
      fVar16 = self->FollowDistanceJump;
      pvVar7 = (void *)NativeHelper_0260e1a8(fVar14,0x3f000000,uVar18,self->Player,0);
      uVar20 = (undefined4)((ulong)uVar18 >> 0x20);
      if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      uVar18 = CONCAT44(uVar20,RVar26.component2);
      fVar16 = fVar16 + (RVar26.component1 - self->GroundHeight) * 0.5;
      self->FollowDistance = fVar16;
      if (self->Player == (CommonPlayer *)0x0) goto LAB_013dbf1c;
      fVar14 = self->FocusHeightJump;
      pvVar7 = (void *)NativeHelper_0260e1a8(fVar16,0x3f000000,uVar18,self->Player,0);
      uVar20 = (undefined4)((ulong)uVar18 >> 0x20);
      if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      uVar19 = CONCAT44(uVar20,RVar26.component2);
      uVar5 = 0x3e800000;
      fVar14 = fVar14 + (RVar26.component1 - self->GroundHeight) * 0.25;
    }
    else {
      fVar16 = self->FollowHeightSlide;
      fVar17 = self->FollowDistanceSlide;
      fVar14 = self->FocusHeightSlide;
LAB_013db928:
      uVar19 = (ulong)(uint)fVar17;
      uVar5 = (ulong)(uint)fVar16;
      self->FollowHeight = fVar16;
      self->FollowDistance = fVar17;
    }
    self->FocusHeight = fVar14;
    pCVar13 = self->GamePlayer;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(fVar14,uVar5,uVar19);
    }
    uVar21 = (undefined4)(uVar19 >> 0x20);
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pCVar13,(void *)0x0,(void *)0x0);
    uVar20 = (undefined4)(uVar5 >> 0x20);
    if (bVar3) {
      if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013dbf1c;
      uVar19 = (ulong)(uint)self->GamePlayer->GroundHeight;
    }
    else {
      if ((self->Player == (CommonPlayer *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar7 == (void *)0x0))
      goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      uVar5 = CONCAT44(uVar20,RVar26.component1);
      uVar19 = uVar5;
    }
    uVar20 = (undefined4)(uVar5 >> 0x20);
    fVar14 = self->GroundHeight;
    fVar16 = (float)uVar19;
    if (0.0 <= fVar16 - fVar14) {
      if (0.0 < fVar16 - fVar14) {
        fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        uVar20 = 0;
        fVar14 = fVar14 + fVar17 * 50.0;
        self->GroundHeight = fVar14;
        if (fVar16 < fVar14) goto LAB_013db9e8;
      }
    }
    else {
      fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      uVar20 = 0;
      fVar14 = fVar14 + fVar17 * -50.0;
      self->GroundHeight = fVar14;
      if (fVar14 < fVar16) {
LAB_013db9e8:
        uVar20 = 0;
        self->GroundHeight = fVar16;
      }
    }
    if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013dbf1c;
    pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
    if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
       (pvVar8 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0), pvVar8 == (void *)0x0)
       ) goto LAB_013dbf1c;
    RVar26 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0);
    if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013dbf1c;
    fVar14 = self->GroundHeight;
    fVar16 = self->FocusHeight;
    pvVar8 = (void *)NativeHelper_0260e1a8
                               (RVar26.component0,CONCAT44(uVar20,RVar26.component1),
                                CONCAT44(uVar21,RVar26.component2),self->MainCameraFocusPoint,0);
    if (pvVar8 == (void *)0x0) goto LAB_013dbf1c;
    RVar27 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0);
    RVar26.component2 = RVar27.component2;
    if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
    RVar26.component1 = fVar14 + fVar16;
    uVar20 = 0;
    UnityEngine_Transform_set_position_25167b0(pvVar7,RVar26,(void *)0x0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_013dbf1c;
    if (*(char *)(**(long **)(lVar6 + 0xb8) + 0x12a) == '\0') {
      if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0),
         pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      fVar14 = RVar26.component0;
      fVar16 = self->GroundHeight;
      pMVar9 = self->MainCameraFocusPoint;
      (self->TargetCameraLocation).component0 = fVar14;
      (self->TargetCameraLocation).component1 = fVar16;
      (self->TargetCameraLocation).component2 = RVar26.component2;
      if ((pMVar9 == (MovingObject *)0x0) ||
         (pvVar7 = (void *)NativeHelper_0260e1a8(fVar14,CONCAT44(uVar20,RVar26.component1),pMVar9,0)
         , pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
      RVar27 = UnityEngine_Transform_get_forward_2516be0(pvVar7,(void *)0x0);
      if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013dbf1c;
      fVar17 = self->FollowDistance;
      pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
      if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
      RVar28 = UnityEngine_Transform_get_up_2516b64(pvVar7,(void *)0x0);
      fVar22 = self->FollowHeight;
      fVar14 = fVar14 + (RVar28.component0 * fVar22 - RVar27.component0 * fVar17);
      fVar16 = fVar16 + (RVar28.component1 * fVar22 - RVar27.component1 * fVar17);
      fVar17 = RVar26.component2 + (RVar28.component2 * fVar22 - RVar27.component2 * fVar17);
      (self->TargetCameraLocation).component0 = fVar14;
      (self->TargetCameraLocation).component1 = fVar16;
      (self->TargetCameraLocation).component2 = fVar17;
      pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
      RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      if (cRam0000000002b945bd == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b97c8);
        cRam0000000002b945bd = '\x01';
      }
      puVar1 = PTR_DAT_029b97c8;
      fVar14 = fVar14 - RVar26.component0;
      fVar16 = fVar16 - RVar26.component1;
      fVar17 = fVar17 - RVar26.component2;
      if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      fVar22 = SQRT(fVar17 * fVar17 + fVar14 * fVar14 + fVar16 * fVar16);
      if (0.0 < fVar22) {
        if (cRam0000000002b945bd == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945bd = '\x01';
        }
        if ((*(int *)(*(long *)puVar1 + 0xe0) == 0) &&
           (NativeHelper_011df1bc(), cRam0000000002b945bd == '\0')) {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945bd = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        fVar15 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        fVar15 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25) * 1.25 * fVar15;
        if ((fVar22 <= fVar15) || (self->SnapCamera != false)) {
          pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
          if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
          fVar24 = (self->TargetCameraLocation).component1;
          fVar25 = (self->TargetCameraLocation).component2;
          fVar23 = (self->TargetCameraLocation).component0;
        }
        else {
          if (cRam0000000002b945c3 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b97c8);
            cRam0000000002b945c3 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          if (fVar22 <= _UNK_007a3c5c) {
            if (cRam0000000002b94510 == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b9368);
              cRam0000000002b94510 = '\x01';
            }
            pfVar10 = *(float **)(*(long *)PTR_DAT_029b9368 + 0xb8);
            fVar14 = *pfVar10;
            fVar16 = pfVar10[1];
            fVar17 = pfVar10[2];
          }
          else {
            fVar14 = fVar14 / fVar22;
            fVar16 = fVar16 / fVar22;
            fVar17 = fVar17 / fVar22;
          }
          pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
          if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
          RVar26 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
          fVar23 = fVar15 * fVar14 + RVar26.component0;
          fVar24 = fVar15 * fVar16 + RVar26.component1;
          fVar25 = fVar15 * fVar17 + RVar26.component2;
        }
        RVar27.component1 = fVar24;
        RVar27.component0 = fVar23;
        RVar27.component2 = fVar25;
        UnityEngine_Transform_set_position_25167b0(pvVar7,RVar27,(void *)0x0);
      }
    }
    pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
    if (((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
        (pvVar8 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0), pvVar8 == (void *)0x0
        )) || (RVar26 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0),
              pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
    UnityEngine_Transform_LookAt_2517728(pvVar7,RVar26,(void *)0x0);
  }
LAB_013dbccc:
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    if (*(char *)(**(long **)(lVar6 + 0xb8) + 0xf0) != '\0') {
      pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
      if (((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
          (pvVar8 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0),
          pvVar8 == (void *)0x0)) ||
         (RVar26 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0),
         pvVar7 == (void *)0x0)) goto LAB_013dbf1c;
      UnityEngine_Transform_LookAt_2517728(pvVar7,RVar26,(void *)0x0);
    }
    if (self->IsCameraShaking != false) {
      fVar24 = self->TimeSinceCameraShakeStart;
      fVar23 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar25 = self->CameraShakeMagnitude;
      self->TimeSinceCameraShakeStart = fVar24 - fVar23;
      fVar23 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar25 = fVar25 - fVar23 * self->CameraShakeDamperRate;
      self->CameraShakeMagnitude = fVar25;
      if ((fVar25 <= 0.0) ||
         (fVar23 = self->TimeSinceCameraShakeStart, self->CameraShakeDuration < fVar23)) {
        self->IsCameraShaking = false;
      }
      else {
        fVar24 = self->CameraShakeFrequencyMultiplier;
        pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar7 == (void *)0x0) goto LAB_013dbf1c;
        fVar14 = (float)NativeHelper_028614c0(fVar23 * 50.0 * fVar24);
        fVar23 = (float)NativeHelper_028614c0(fVar23 * 35.0 * fVar24);
        UnityEngine_Transform_Translate_25172b0
                  (pvVar7,fVar25 * fVar23,fVar25 * fVar14,0.0,(void *)0x0);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    if (**(long **)(lVar6 + 0xb8) != 0) {
      if (*(char *)(**(long **)(lVar6 + 0xb8) + 0xed) == '\0') {
        return;
      }
      pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar7 != (void *)0x0) {
        UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
        pvVar7 = self->Water;
        if (pvVar7 != (void *)0x0) {
          UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
          if (pcRam0000000002b9d2b0 == (code *)0x0) {
            pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
          }
          (*pcRam0000000002b9d2b0)(pvVar7,&stack0xffffffffffffffd0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
LAB_013dbf1c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

