// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool ResurrectPlayer(bool isSaveMe = false) { }
// Ghidra address: 01395adc; ELF VA: 0x1295adc; file offset: 0x1291adc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_ResurrectPlayer_1291adc(GameController *self,bool isSaveMe,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  PathElement *x;
  void *pvVar6;
  void *self_00;
  long lVar7;
  MovingObject_MovingObjectPathNode *pMVar8;
  PathElement *self_01;
  undefined8 *puVar9;
  long lVar10;
  CharacterPlayer *pCVar11;
  GameCamera *pGVar12;
  PathElement *pPVar13;
  int origin;
  int origin_00;
  int iVar14;
  PathElement *self_02;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  Recovered_Vector3 RVar19;
  Recovered_Vector3 RVar20;
  Recovered_Vector3 RVar21;
  
  if ((bRam0000000002b94cfb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bdf50);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029be048);
    NativeHelper_011df0b4(PTR_DAT_029be050);
    NativeHelper_011df0b4(PTR_DAT_029be058);
    bRam0000000002b94cfb = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if (self->Audio != (AudioManager *)0x0) {
    AudioManager_StopFX_12bb390(self->Audio,(void *)0x0);
    pPVar13 = self->PathRoot;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
    puVar9 = (undefined8 *)PTR_DAT_029be048;
    if (!bVar2) {
LAB_01395f7c:
      DebugEx_LogError_1323bf8((void *)*puVar9,(void *)0x0);
      return false;
    }
    iVar14 = self->PathRootOrigin;
    uVar5 = 0;
    bVar2 = true;
    pPVar13 = (PathElement *)0x0;
    self_02 = self->PathRoot;
    while( true ) {
      self_01 = pPVar13;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(self_01,(void *)0x0,(void *)0x0);
      if ((9 < uVar5) || (!bVar3)) break;
      if (self_02 == (PathElement *)0x0) goto LAB_013965d8;
      if ((self_02->HasObstacles != false) ||
         (bVar3 = PathElement_IsTurn_130b174(self_02,(void *)0x0), pPVar13 = self_02, bVar3)) {
        bVar3 = PathElement_IsTurn_130b174(self_02,(void *)0x0);
        if (iVar14 == 0) {
          x = PathElement_GetPath_130bd38(self_02,1,(void *)0x0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
          if (bVar4) {
            iVar14 = 3;
          }
          else {
            x = PathElement_GetPath_130bd38(self_02,3,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar1);
            }
            bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
            if (bVar4) {
LAB_01395f24:
              iVar14 = 1;
            }
            else {
              x = PathElement_GetPath_130bd38(self_02,2,(void *)0x0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)puVar1);
              }
              bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
              if (bVar4) goto LAB_01395f1c;
              x = PathElement_GetPath_130bd38(self_02,4,(void *)0x0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)puVar1);
              }
              bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
              if (bVar4) goto LAB_01395f2c;
              DebugEx_LogError_1323bf8(*(void **)PTR_DAT_029be050,(void *)0x0);
              iVar14 = 0;
            }
          }
        }
        else {
          x = PathElement_GetPathForward_130bd88(self_02,iVar14,(void *)0x0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
          origin = iVar14;
          if (bVar4) {
            x = PathElement_GetPathLeft_130be28(self_02,iVar14,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar1);
            }
            bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
            if (bVar4) {
              origin = 4;
              switch(iVar14) {
              case 2:
                origin = 1;
                break;
              case 3:
                origin = 2;
                break;
              case 4:
                origin = 3;
              }
            }
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
          origin_00 = origin;
          if (bVar4) {
            x = PathElement_GetPathRight_130bf24(self_02,origin,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar1);
            }
            bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
            if (bVar4) {
              origin_00 = 2;
              switch(origin) {
              case 2:
                origin_00 = 3;
                break;
              case 3:
                origin_00 = 4;
                break;
              case 4:
                origin_00 = 1;
              }
            }
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
          iVar14 = origin_00;
          if (bVar4) {
            x = PathElement_GetPathBackward_130bdd8(self_02,origin_00,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar1);
            }
            bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
            if (bVar4) {
              iVar14 = 3;
              switch(origin_00) {
              case 2:
LAB_01395f1c:
                iVar14 = 4;
                break;
              case 3:
                goto LAB_01395f24;
              case 4:
LAB_01395f2c:
                iVar14 = 2;
              }
            }
          }
        }
        bVar2 = (bool)(bVar2 & !bVar3);
        uVar5 = uVar5 + 1;
        pPVar13 = self_01;
        self_02 = x;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(self_01,(void *)0x0,(void *)0x0);
    puVar9 = (undefined8 *)PTR_DAT_029be058;
    if (bVar3) goto LAB_01395f7c;
    self->PathRoot = self_01;
    self->PathRootOrigin = iVar14;
    self->IsResurrecting = true;
    self->TimeSinceResurrectStart = 0.0;
    if (!isSaveMe) {
      self->ResurrectionCount = self->ResurrectionCount + 1;
    }
    if (self->GameInput != (GameInput *)0x0) {
      GameInput_Reset_12d2be0(self->GameInput,(void *)0x0);
      if ((((self->GamePlayer != (CharacterPlayer *)0x0) &&
           (pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
           self_01 != (PathElement *)0x0)) &&
          (self_00 = (void *)NativeHelper_0260e1a8(self_01,0), self_00 != (void *)0x0)) &&
         (RVar19 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0),
         pvVar6 != (void *)0x0)) {
        UnityEngine_Transform_set_position_25167b0(pvVar6,RVar19,(void *)0x0);
        pCVar11 = self->GamePlayer;
        fVar15 = PathElement_GetPathHeight_130bd10(self_01,(void *)0x0);
        if (pCVar11 != (CharacterPlayer *)0x0) {
          CharacterPlayer_SetGroundHeight_12bde90(pCVar11,fVar15,(void *)0x0);
          if (self->GamePlayer != (CharacterPlayer *)0x0) {
            CharacterPlayer_Resurrect_12be934(self->GamePlayer,(void *)0x0);
            if ((self->GamePlayer != (CharacterPlayer *)0x0) &&
               (pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0), pvVar6 != (void *)0x0))
            {
              UnityEngine_Transform_set_eulerAngles_2516958
                        (pvVar6,(Recovered_Vector3)ZEXT412(0),(void *)0x0);
              iVar14 = self->PathRootOrigin;
              if (iVar14 == 4) {
                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013965d8;
                CharacterPlayer_TurnRight_12be5e8(self->GamePlayer,(void *)0x0);
              }
              else {
                if (iVar14 != 2) {
                  if (iVar14 != 1) goto LAB_013960ac;
                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013965d8;
                  CharacterPlayer_TurnLeft_12be570(self->GamePlayer,(void *)0x0);
                }
                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013965d8;
                CharacterPlayer_TurnLeft_12be570(self->GamePlayer,(void *)0x0);
              }
LAB_013960ac:
              pCVar11 = self->GamePlayer;
              if (pCVar11 != (CharacterPlayer *)0x0) {
                (**(code **)(*(long *)pCVar11 + 0x188))
                          (pCVar11,1,*(undefined8 *)(*(long *)pCVar11 + 400));
                pvVar6 = *(void **)PTR_DAT_029b9758;
                if (*(int *)((long)pvVar6 + 0xe0) == 0) {
                  pvVar6 = (void *)NativeHelper_011df1bc();
                }
                uVar5 = GameController_get_ResurrectionBoostDistance_1296c70(pvVar6);
                fVar15 = GameController_get_ResurrectionSlowDownPercent_1296cd4
                                   ((void *)(ulong)uVar5);
                pCVar11 = self->GamePlayer;
                if (pCVar11 != (CharacterPlayer *)0x0) {
                  fVar15 = fVar15 * pCVar11->DeathRunVelocity;
                  fVar17 = pCVar11->StartRunVelocity;
                  if (pCVar11->StartRunVelocity <= fVar15) {
                    fVar17 = fVar15;
                  }
                  pvVar6 = (void *)NativeHelper_0260e1a8(pCVar11,0);
                  if (pvVar6 != (void *)0x0) {
                    RVar19 = UnityEngine_Transform_get_forward_2516be0(pvVar6,(void *)0x0);
                    *(float *)&pCVar11->field_0x34 = fVar17 * RVar19.component0;
                    *(float *)&pCVar11->field_0x38 = fVar17 * RVar19.component1;
                    *(float *)&pCVar11->field_0x3c = fVar17 * RVar19.component2;
                    if (self->GamePlayer != (CharacterPlayer *)0x0) {
                      CharacterPlayer_StartBoost_12be89c
                                (self->GamePlayer,(float)(int)uVar5,false,(void *)0x0);
                      pCVar11 = self->GamePlayer;
                      if (pCVar11 != (CharacterPlayer *)0x0) {
                        pCVar11->DeathRunVelocity = 0.0;
                        CharacterPlayer_SetAlpha_12bcab8(pCVar11,0.0,(void *)0x0);
                        puVar1 = PTR_DAT_029bde80;
                        lVar7 = *(long *)PTR_DAT_029bde80;
                        if (*(int *)(lVar7 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                          lVar7 = *(long *)puVar1;
                        }
                        lVar10 = *(long *)(lVar7 + 0xb8);
                        auVar16 = NEON_fmov(0x3f800000,4);
                        *(long *)(lVar10 + 0x54) = auVar16._8_8_;
                        *(long *)(lVar10 + 0x4c) = auVar16._0_8_;
                        *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 4) = 1;
                        if ((self->GamePlayer != (CharacterPlayer *)0x0) &&
                           (self->MainCamera != (GameCamera *)0x0)) {
                          self->MainCamera->GroundHeight = self->GamePlayer->GroundHeight;
                          if (self->MainCameraFocusPoint != (MovingObject *)0x0) {
                            MovingObject_ClearFollowingPath_1309140
                                      (self->MainCameraFocusPoint,(void *)0x0);
                            if ((self->GamePlayer != (CharacterPlayer *)0x0) &&
                               (pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                               pvVar6 != (void *)0x0)) {
                              RVar19 = UnityEngine_Transform_get_position_2516710
                                                 (pvVar6,(void *)0x0);
                              if ((self->MainCamera != (GameCamera *)0x0) &&
                                 (self->GamePlayer != (CharacterPlayer *)0x0)) {
                                fVar15 = self->MainCamera->FocusHeightRun;
                                pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
                                if (pvVar6 != (void *)0x0) {
                                  RVar20 = UnityEngine_Transform_get_eulerAngles_25168d0
                                                     (pvVar6,(void *)0x0);
                                  puVar1 = PTR_DAT_029bdf50;
                                  fVar17 = RVar20.component1 + 180.0;
                                  if (bVar2) {
                                    if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
                                       (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                   (self->MainCameraFocusPoint,0),
                                       pvVar6 == (void *)0x0)) goto LAB_013965d8;
                                    RVar19.component1 = RVar19.component1 + fVar15;
                                    UnityEngine_Transform_set_position_25167b0
                                              (pvVar6,RVar19,(void *)0x0);
                                    if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
                                       (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                   (self->MainCameraFocusPoint,0),
                                       pvVar6 == (void *)0x0)) goto LAB_013965d8;
                                    RVar20.component1 = fVar17;
                                    UnityEngine_Transform_set_eulerAngles_2516958
                                              (pvVar6,RVar20,(void *)0x0);
                                  }
                                  else {
                                    pMVar8 = (MovingObject_MovingObjectPathNode *)
                                             NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf50);
                                    MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120
                                              (pMVar8,(void *)0x0);
                                    if (pMVar8 == (MovingObject_MovingObjectPathNode *)0x0)
                                    goto LAB_013965d8;
                                    pMVar8->TimeStamp = 0.0;
                                    if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
                                       (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                   (self->MainCameraFocusPoint,0),
                                       pvVar6 == (void *)0x0)) goto LAB_013965d8;
                                    RVar19 = UnityEngine_Transform_get_position_2516710
                                                       (pvVar6,(void *)0x0);
                                    (pMVar8->Location).component0 = RVar19.component0;
                                    (pMVar8->Location).component1 = RVar19.component1;
                                    (pMVar8->Location).component2 = RVar19.component2;
                                    pMVar8->Ease = true;
                                    if (self->MainCameraFocusPoint == (MovingObject *)0x0)
                                    goto LAB_013965d8;
                                    MovingObject_AddFollowingPathNode_1308f94
                                              (self->MainCameraFocusPoint,pMVar8,(void *)0x0);
                                    if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                                       (pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                                       pvVar6 == (void *)0x0)) goto LAB_013965d8;
                                    RVar19 = UnityEngine_Transform_get_position_2516710
                                                       (pvVar6,(void *)0x0);
                                    pGVar12 = self->MainCamera;
                                    if ((pGVar12 == (GameCamera *)0x0) ||
                                       (self->MainCameraFocusPoint == (MovingObject *)0x0))
                                    goto LAB_013965d8;
                                    fVar15 = pGVar12->GroundHeight;
                                    fVar18 = pGVar12->FocusHeightRun;
                                    MovingObject_AddFollowingPathNode_1308f94
                                              (self->MainCameraFocusPoint,pMVar8,(void *)0x0);
                                    if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
                                       (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                   (self->MainCameraFocusPoint,0),
                                       pvVar6 == (void *)0x0)) goto LAB_013965d8;
                                    RVar21.component1 = fVar17;
                                    RVar21.component0 = RVar20.component0;
                                    RVar21.component2 = RVar20.component2;
                                    UnityEngine_Transform_set_eulerAngles_2516958
                                              (pvVar6,RVar21,(void *)0x0);
                                    pMVar8 = (MovingObject_MovingObjectPathNode *)
                                             NativeHelper_011df2d0(*(undefined8 *)puVar1);
                                    MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120
                                              (pMVar8,(void *)0x0);
                                    if (pMVar8 == (MovingObject_MovingObjectPathNode *)0x0)
                                    goto LAB_013965d8;
                                    (pMVar8->Location).component1 = fVar15 + fVar18;
                                    (pMVar8->Location).component2 = RVar19.component2;
                                    pMVar8->TimeStamp = 2.0;
                                    (pMVar8->Location).component0 = RVar19.component0;
                                    pMVar8->Ease = true;
                                    if (self->MainCameraFocusPoint == (MovingObject *)0x0)
                                    goto LAB_013965d8;
                                    MovingObject_AddFollowingPathNode_1308f94
                                              (self->MainCameraFocusPoint,pMVar8,(void *)0x0);
                                    if (self->MainCameraFocusPoint == (MovingObject *)0x0)
                                    goto LAB_013965d8;
                                    MovingObject_StartFollowingPath_1309128
                                              (self->MainCameraFocusPoint,(void *)0x0);
                                  }
                                  if (self->MainCamera != (GameCamera *)0x0) {
                                    MovingObject_ClearFollowingPath_1309140
                                              ((MovingObject *)self->MainCamera,(void *)0x0);
                                    if (self->GamePlayer != (CharacterPlayer *)0x0) {
                                      pGVar12 = self->MainCamera;
                                      pvVar6 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
                                      if (pvVar6 != (void *)0x0) {
                                        RVar19 = UnityEngine_Transform_get_position_2516710
                                                           (pvVar6,(void *)0x0);
                                        if ((self->MainCameraFocusPoint != (MovingObject *)0x0) &&
                                           (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                       (self->MainCameraFocusPoint,0
                                                                       ), pvVar6 != (void *)0x0)) {
                                          RVar20 = UnityEngine_Transform_get_forward_2516be0
                                                             (pvVar6,(void *)0x0);
                                          if ((self->MainCamera != (GameCamera *)0x0) &&
                                             (self->MainCameraFocusPoint != (MovingObject *)0x0)) {
                                            fVar15 = self->MainCamera->FollowDistanceRun;
                                            pvVar6 = (void *)NativeHelper_0260e1a8
                                                                       (self->MainCameraFocusPoint,0
                                                                       );
                                            if (pvVar6 != (void *)0x0) {
                                              RVar21 = UnityEngine_Transform_get_up_2516b64
                                                                 (pvVar6,(void *)0x0);
                                              if ((self->MainCamera != (GameCamera *)0x0) &&
                                                 (pGVar12 != (GameCamera *)0x0)) {
                                                fVar17 = self->MainCamera->FollowHeightRun;
                                                (pGVar12->TargetCameraLocation).component0 =
                                                     RVar19.component0 + RVar20.component0 * fVar15
                                                     + RVar21.component0 * fVar17;
                                                (pGVar12->TargetCameraLocation).component1 =
                                                     RVar19.component1 + RVar20.component1 * fVar15
                                                     + RVar21.component1 * fVar17;
                                                (pGVar12->TargetCameraLocation).component2 =
                                                     RVar19.component2 + RVar20.component2 * fVar15
                                                     + RVar21.component2 * fVar17;
                                                puVar1 = PTR_DAT_029bdf50;
                                                pMVar8 = (MovingObject_MovingObjectPathNode *)
                                                         NativeHelper_011df2d0
                                                                   (*(undefined8 *)PTR_DAT_029bdf50)
                                                ;
                                                MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120
                                                          (pMVar8,(void *)0x0);
                                                if (pMVar8 != (MovingObject_MovingObjectPathNode *)
                                                              0x0) {
                                                  pMVar8->TimeStamp = 0.0;
                                                  if ((self->MainCamera != (GameCamera *)0x0) &&
                                                     (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                                 (self->MainCamera,0
                                                                                 ),
                                                     pvVar6 != (void *)0x0)) {
                                                    RVar19 = 
                                                  UnityEngine_Transform_get_position_2516710
                                                            (pvVar6,(void *)0x0);
                                                  (pMVar8->Location).component0 = RVar19.component0;
                                                  (pMVar8->Location).component1 = RVar19.component1;
                                                  (pMVar8->Location).component2 = RVar19.component2;
                                                  pMVar8->Ease = true;
                                                  if (self->MainCamera != (GameCamera *)0x0) {
                                                    MovingObject_AddFollowingPathNode_1308f94
                                                              ((MovingObject *)self->MainCamera,
                                                               pMVar8,(void *)0x0);
                                                    pMVar8 = (MovingObject_MovingObjectPathNode *)
                                                             NativeHelper_011df2d0
                                                                       (*(undefined8 *)puVar1);
                                                                                                        
                                                  MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120
                                                            (pMVar8,(void *)0x0);
                                                  if (pMVar8 != (MovingObject_MovingObjectPathNode *
                                                                )0x0) {
                                                    pMVar8->TimeStamp = 1.0;
                                                    if ((self->MainCamera != (GameCamera *)0x0) &&
                                                       (pvVar6 = (void *)NativeHelper_0260e1a8
                                                                                   (self->MainCamera
                                                                                    ,0),
                                                       pvVar6 != (void *)0x0)) {
                                                      RVar19 = 
                                                  UnityEngine_Transform_get_position_2516710
                                                            (pvVar6,(void *)0x0);
                                                  (pMVar8->Location).component0 = RVar19.component0;
                                                  (pMVar8->Location).component1 = RVar19.component1;
                                                  (pMVar8->Location).component2 = RVar19.component2;
                                                  pMVar8->Ease = true;
                                                  if (self->MainCamera != (GameCamera *)0x0) {
                                                    MovingObject_AddFollowingPathNode_1308f94
                                                              ((MovingObject *)self->MainCamera,
                                                               pMVar8,(void *)0x0);
                                                    pMVar8 = (MovingObject_MovingObjectPathNode *)
                                                             NativeHelper_011df2d0
                                                                       (*(undefined8 *)puVar1);
                                                                                                        
                                                  MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120
                                                            (pMVar8,(void *)0x0);
                                                  if (pMVar8 != (MovingObject_MovingObjectPathNode *
                                                                )0x0) {
                                                    fVar15 = 2.0;
                                                    if (!bVar2) {
                                                      fVar15 = 3.0;
                                                    }
                                                    pMVar8->TimeStamp = fVar15;
                                                    pGVar12 = self->MainCamera;
                                                    if (pGVar12 != (GameCamera *)0x0) {
                                                      fVar15 = (pGVar12->TargetCameraLocation).
                                                               component2;
                                                      fVar17 = (pGVar12->TargetCameraLocation).
                                                               component0;
                                                      fVar18 = (pGVar12->TargetCameraLocation).
                                                               component1;
                                                      pMVar8->Ease = true;
                                                      (pMVar8->Location).component2 = fVar15;
                                                      (pMVar8->Location).component0 = fVar17;
                                                      (pMVar8->Location).component1 = fVar18;
                                                      if (self->MainCamera != (GameCamera *)0x0) {
                                                        MovingObject_AddFollowingPathNode_1308f94
                                                                  ((MovingObject *)self->MainCamera,
                                                                   pMVar8,(void *)0x0);
                                                        if (self->MainCamera != (GameCamera *)0x0) {
                                                          MovingObject_StartFollowingPath_1309128
                                                                    ((MovingObject *)
                                                                     self->MainCamera,(void *)0x0);
                                                          return true;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013965d8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

