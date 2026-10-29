// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 01394c18; ELF VA: 0x1294c18; file offset: 0x1290c18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_Update_1290c18(GameController *self,void *runtimeMethod)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  GameGUI *pGVar9;
  GameController *self_00;
  GameController *extraout_x0;
  MovingObject_MovingObjectPathNode *pMVar10;
  PathElement *pPVar11;
  CharacterPlayer *pCVar12;
  Imangi_Ad_AdManager *x;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar13;
  undefined8 uVar14;
  long lVar15;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *pvVar16;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *runtimeMethod_00;
  void *extraout_x1_09;
  void *extraout_x1_10;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *extraout_x1_11;
  void *extraout_x1_12;
  void *runtimeMethod_04;
  void *runtimeMethod_05;
  void *runtimeMethod_06;
  void *runtimeMethod_07;
  void *runtimeMethod_08;
  void *runtimeMethod_09;
  void *runtimeMethod_10;
  void *extraout_x1_13;
  void *extraout_x1_14;
  void *extraout_x1_15;
  void *extraout_x1_16;
  void *extraout_x1_17;
  void *extraout_x1_18;
  void *runtimeMethod_11;
  void *runtimeMethod_12;
  void *extraout_x1_19;
  void *extraout_x1_20;
  void *extraout_x1_21;
  void *extraout_x1_22;
  void *extraout_x1_23;
  void *extraout_x1_24;
  void *extraout_x1_25;
  void *extraout_x1_26;
  void *extraout_x1_27;
  void *extraout_x1_28;
  void *extraout_x1_29;
  void *extraout_x1_30;
  void *extraout_x1_31;
  void *extraout_x1_32;
  void *extraout_x1_33;
  void *pvVar17;
  void *in_x2;
  void *pvVar18;
  void *in_x5;
  char cVar19;
  uint uVar20;
  GameCamera *pGVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  SaveMeGUI *self_01;
  GameInput *pGVar25;
  Region2D *self_02;
  byte bVar26;
  int iVar27;
  void *pvVar28;
  UISprite *pUVar29;
  long lVar30;
  PathElement *pPVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 in_d1;
  undefined4 uVar36;
  undefined8 in_d2;
  undefined4 uVar38;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  Recovered_Vector3 RVar41;
  Recovered_Vector3 RVar42;
  Recovered_Vector3 RVar43;
  Recovered_Vector3 RVar44;
  Recovered_Vector2 point;
  Recovered_Vector2 point_00;
  Recovered_Quaternion value;
  
  uVar36 = (undefined4)((ulong)in_d1 >> 0x20);
  uVar38 = (undefined4)((ulong)in_d2 >> 0x20);
  if ((bRam0000000002b94cf5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029be000);
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    NativeHelper_011df0b4(PTR_DAT_029be008);
    NativeHelper_011df0b4(PTR_DAT_029be010);
    NativeHelper_011df0b4(PTR_DAT_029be018);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be020);
    NativeHelper_011df0b4(PTR_DAT_029be028);
    NativeHelper_011df0b4(PTR_DAT_029be030);
    NativeHelper_011df0b4(PTR_DAT_029be038);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029be040);
    bRam0000000002b94cf5 = 1;
    runtimeMethod = extraout_x1_05;
  }
  if (self->GodMode != false) {
    pCVar12 = self->GamePlayer;
    if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
    if (pCVar12->HasInvincibility == false) {
      CharacterPlayer_StartInvcibility_12be7f8(pCVar12,3.0,(void *)0x0);
      pCVar12 = self->GamePlayer;
      runtimeMethod = extraout_x1_06;
      if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
    }
    pCVar12->InvincibilityTimeLeft = 3.0;
  }
  if (self->SkipFrame != false) {
    self->SkipFrame = false;
    puVar3 = PTR_DAT_029bde80;
    puVar2 = PTR_DAT_029b7f98;
    pPVar11 = self->PathRoot;
    if (pPVar11 == (PathElement *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pvVar17 = (void *)(ulong)(uint)self->PathRootOrigin;
    pvVar16 = (void *)0x1;
    pvVar18 = (void *)0x0;
    iVar24 = 0;
    bVar8 = true;
    bVar6 = true;
    pvVar28 = pvVar17;
    do {
      if ((bRam0000000002b95106 & 1) == 0) {
        NativeHelper_011df0b4(puVar2);
        NativeHelper_011df0b4(puVar3);
        bRam0000000002b95106 = 1;
        pvVar16 = extraout_x1_32;
      }
      if (bVar8 || bVar6 != true) {
        bVar6 = (bool)(bVar6 | bVar8);
      }
      else {
        bVar7 = PathElement_IsTurn_130b174(pPVar11,pvVar16);
        iVar24 = iVar24 + (uint)bVar7;
        bVar6 = (bool)(bVar6 & iVar24 < 3);
      }
      PathElement_SetRendering_1310f3c(pPVar11,bVar6,pvVar17);
      if (bVar6) {
        pUVar29 = pPVar11->MySafteyNetSprite;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar6 = UnityEngine_object_op_Inequality_250c8e4(pUVar29,(void *)0x0,(void *)0x0);
        if (bVar6) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pUVar29 = pPVar11->MySafteyNetSprite;
          if (pUVar29 == (UISprite *)0x0) break;
          if (*(char *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) == '\0') {
            UnityEngine_Behaviour_set_enabled_250972c(pUVar29,false,(void *)0x0);
          }
          else {
            UnityEngine_Behaviour_set_enabled_250972c(pUVar29,true,(void *)0x0);
            lVar15 = *(long *)puVar3;
            pUVar29 = pPVar11->MySafteyNetSprite;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              lVar15 = *(long *)puVar3;
            }
            if (pUVar29 == (UISprite *)0x0) break;
            UIWidget_set_color_1206e5c
                      ((UIWidget *)pUVar29,*(Recovered_Color *)(*(long *)(lVar15 + 0xb8) + 0x4c),
                       (void *)0x0);
          }
        }
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      iVar27 = (int)pvVar28;
      if ((bool)(iVar27 == 1 & (bVar8 ^ 1U))) {
code_r0x014152dc:
        pPVar31 = pPVar11->PathEast;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar31,(void *)0x0,(void *)0x0);
        if (bVar7) {
          if (pPVar11->PathEast == (PathElement *)0x0) break;
          PathElement_RecursiveVisibility_1311120(pPVar11->PathEast,bVar6,4,false,iVar24,pvVar18);
        }
        if (!(bool)(iVar27 == 3 & (bVar8 ^ 1U))) goto code_r0x01415334;
      }
      else {
        pPVar31 = pPVar11->PathNorth;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar31,(void *)0x0,(void *)0x0);
        if (bVar7) {
          if (pPVar11->PathNorth == (PathElement *)0x0) break;
          PathElement_RecursiveVisibility_1311120(pPVar11->PathNorth,bVar6,3,false,iVar24,pvVar18);
        }
        if (!(bool)(iVar27 == 2 & (bVar8 ^ 1U))) goto code_r0x014152dc;
code_r0x01415334:
        pPVar31 = pPVar11->PathSouth;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar31,(void *)0x0,(void *)0x0);
        if (bVar7) {
          if (pPVar11->PathSouth == (PathElement *)0x0) break;
          PathElement_RecursiveVisibility_1311120(pPVar11->PathSouth,bVar6,1,false,iVar24,pvVar18);
        }
        if ((bool)(iVar27 == 4 & (bVar8 ^ 1U))) {
          return;
        }
      }
      pPVar31 = pPVar11->PathWest;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar17 = (void *)0x0;
      bVar8 = UnityEngine_object_op_Inequality_250c8e4(pPVar31,(void *)0x0,(void *)0x0);
      if (!bVar8) {
        return;
      }
      pPVar11 = pPVar11->PathWest;
      bVar8 = false;
      pvVar28 = (void *)0x2;
      pvVar16 = extraout_x1_33;
    } while (pPVar11 != (PathElement *)0x0);
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  pCVar12 = self->GamePlayer;
  if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
  if (pCVar12->DidStumble != false) {
    self->DidStumble = true;
    self->StumbleCount = self->StumbleCount + 1;
    pCVar12->DidStumble = false;
    if (self->IsTutorialMode != false) {
      GameController_SendTutorialStumbleEvent_1286bb8(self,runtimeMethod);
      runtimeMethod = extraout_x1_07;
    }
  }
  puVar2 = PTR_DAT_029b8c90;
  if (self->IsResurrecting == false) {
    if ((self->ShouldPromptForSaveMe == false) && (self->IsPromptingForSaveMe == false)) {
      if (self->IsShowingSaveMeVideo != false) {
        return;
      }
      if (self->IsInCountdown == false) {
        if (self->IsPaused != false) goto LAB_01394de4;
        if (self->IsGameStarted != false) {
          fVar39 = self->TimeSinceGameStart;
          fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          fVar40 = self->TimeSinceLastPause;
          self->TimeSinceGameStart = fVar39 + fVar33;
          fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          fVar39 = self->TimeSinceLastCoin;
          self->TimeSinceLastPause = fVar40 + fVar33;
          fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          self->TimeSinceLastCoin = fVar39 + fVar33;
          if (self->IsTutorialMode != false) {
            fVar39 = self->TimeSinceTutorialStart;
            fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
            self->TimeSinceTutorialStart = fVar39 + fVar33;
          }
        }
        if ((self->IsIntroScene != false) && (uVar36 = 0, 3.0 < self->TimeSinceGameStart)) {
          self->IsIntroScene = false;
        }
        puVar2 = PTR_DAT_029b7f98;
        pCVar12 = self->GamePlayer;
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar16 = (void *)0x0;
        bVar8 = UnityEngine_object_op_Equality_250d534(pCVar12,(void *)0x0,(void *)0x0);
        if (bVar8) {
          GameController_ComputeDistanceTraveled_129288c(self,runtimeMethod_01);
          GameController_HandlePacing_1292d74(self,runtimeMethod_02);
          if ((self->Player == (CommonPlayer *)0x0) ||
             (pvVar16 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar16 == (void *)0x0))
          goto LAB_01395a60;
          RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
          point.component0 = RVar41.component0;
          if ((self->Player == (CommonPlayer *)0x0) ||
             (pvVar16 = (void *)NativeHelper_0260e1a8
                                          (point.component0,CONCAT44(uVar36,RVar41.component1),
                                           CONCAT44(uVar38,RVar41.component2),self->Player,0),
             pvVar16 == (void *)0x0)) goto LAB_01395a60;
          RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
          if (self->PathRoot == (PathElement *)0x0) goto LAB_01395a60;
          point.component1 = RVar41.component2;
          pPVar11 = PathElement_GetNearestPathElement_1310488
                              (self->PathRoot,point,self->PathRootOrigin,true,3,(void *)0x0);
          self->NearestElement = pPVar11;
          GameController_Prune_129384c(self,runtimeMethod_03);
          pvVar28 = extraout_x1_11;
        }
        else {
          pvVar28 = runtimeMethod_01;
          if ((self->IsGameStarted != false) &&
             ((self->IsIntroScene == false || (1.0 < self->TimeSinceGameStart)))) {
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
            self->GamePlayer->Hold = false;
            pGVar25 = self->GameInput;
            if (pGVar25 == (GameInput *)0x0) goto LAB_01395a60;
            if (pGVar25->JustTurned != false) {
              fVar39 = pGVar25->TimeSinceLastTurn;
              fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
              pGVar25->TimeSinceLastTurn = fVar39 + fVar33;
              pGVar25 = self->GameInput;
              if (pGVar25 == (GameInput *)0x0) goto LAB_01395a60;
              pvVar28 = extraout_x1_12;
              if (0.25 < pGVar25->TimeSinceLastTurn) {
                pGVar25->JustTurned = false;
              }
            }
            GameController_HandleControls_1293988(self,pvVar28);
            GameController_HandleDelayedJumping_1294304(self,runtimeMethod_04);
            GameController_HandleDelayedSliding_1294570(self,runtimeMethod_05);
            GameController_HandleDelayedTurning_12945c0(self,runtimeMethod_06);
            pCVar12 = self->GamePlayer;
            if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
            if (pCVar12->IsSliding == false) {
              if (self->MainCamera == (GameCamera *)0x0) goto LAB_01395a60;
              self->MainCamera->NeedsToDuckCamera = false;
            }
            RVar41.component0 = *(float *)&pCVar12->field_0x7c;
            RVar41.component1 = *(float *)&pCVar12->field_0x80;
            RVar41.component2 = *(float *)&pCVar12->field_0x84;
            pvVar28 = (void *)NativeHelper_0260e1a8(pCVar12,0);
            if (pvVar28 == (void *)0x0) goto LAB_01395a60;
            RVar42 = UnityEngine_Transform_get_position_2516710(pvVar28,(void *)0x0);
            uVar38 = 0;
            uVar36 = 0;
            GameController_MakeSureDidntRunPastTurn_1294eac(self,RVar41,RVar42,runtimeMethod_07);
            GameController_HandleInvincibility_1295124(self,runtimeMethod_08);
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
            pvVar28 = runtimeMethod_09;
            if (self->GamePlayer->IsDead != false) goto LAB_01395984;
            GameController_ComputeDistanceTraveled_129288c(self,runtimeMethod_09);
            GameController_HandlePacing_1292d74(self,runtimeMethod_10);
            if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
               (self->Player == (CommonPlayer *)0x0)) goto LAB_01395a60;
            bVar8 = self->GamePlayer->IsOverGround;
            pvVar16 = (void *)NativeHelper_0260e1a8(self->Player,0);
            if (pvVar16 == (void *)0x0) goto LAB_01395a60;
            RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
            uVar14 = CONCAT44(uVar38,RVar41.component2);
            point_00.component0 = RVar41.component0;
            if (self->Player == (CommonPlayer *)0x0) goto LAB_01395a60;
            pvVar16 = (void *)NativeHelper_0260e1a8
                                        (point_00.component0,CONCAT44(uVar36,RVar41.component1),
                                         uVar14,self->Player,0);
            uVar36 = (undefined4)((ulong)uVar14 >> 0x20);
            if (pvVar16 == (void *)0x0) goto LAB_01395a60;
            RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
            if (self->PathRoot == (PathElement *)0x0) goto LAB_01395a60;
            point_00.component1 = RVar41.component2;
            uVar38 = uVar36;
            pPVar11 = PathElement_GetNearestPathElement_1310488
                                (self->PathRoot,point_00,self->PathRootOrigin,true,3,(void *)0x0);
            self->NearestElement = pPVar11;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar6 = UnityEngine_object_op_Inequality_250c8e4(pPVar11,(void *)0x0,(void *)0x0);
            if (bVar6) {
              pPVar11 = self->NearestElement;
              self->LastNearestElement = pPVar11;
            }
            else {
              pPVar11 = self->NearestElement;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar6 = UnityEngine_object_op_Inequality_250c8e4(pPVar11,(void *)0x0,(void *)0x0);
            if (bVar6) {
              if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                 (self->NearestElement == (PathElement *)0x0)) goto LAB_01395a60;
              fVar33 = self->GamePlayer->GroundHeight;
              pPVar11 = PathElement_GetPathForward_130bd88
                                  (self->NearestElement,self->PathRootOrigin,(void *)0x0);
              if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
              iVar24 = self->NearestElement->Obstacles;
              uVar14 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029be020,3);
              NativeHelper_01f3db6c(uVar14,*(undefined8 *)PTR_DAT_029be038,0);
              uVar32 = NativeHelper_01505ab4(iVar24,uVar14,*(undefined8 *)PTR_DAT_029be000);
              if ((uVar32 & 1) == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                bVar6 = UnityEngine_object_op_Inequality_250c8e4(pPVar11,(void *)0x0,(void *)0x0);
                if (bVar6) {
                  if (pPVar11 == (PathElement *)0x0) goto LAB_01395a60;
                  if (pPVar11->Obstacles == 7) {
                    if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                    if (self->NearestElement->Level != 3) goto LAB_01395488;
                  }
                }
LAB_01395634:
                bVar26 = 0;
LAB_01395638:
                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
                pPVar31 = self->NearestElement;
                pvVar16 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
                if ((pvVar16 == (void *)0x0) ||
                   (RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0),
                   pPVar31 == (PathElement *)0x0)) goto LAB_01395a60;
                bVar6 = PathElement_IsPointInsideAnyRegion2D_13113e4(pPVar31,RVar41,(void *)0x0);
                if (bVar6) goto LAB_0139566c;
                bVar6 = false;
                pvVar16 = extraout_x1_14;
              }
              else {
LAB_01395488:
                if (self->SafetyNetRegion == (Region2D *)0x0) goto LAB_01395a60;
                pvVar16 = (void *)NativeHelper_0260e1a8(self->SafetyNetRegion,0);
                if ((self->NearestElement == (PathElement *)0x0) ||
                   (pvVar28 = (void *)NativeHelper_0260e1a8(self->NearestElement,0),
                   pvVar28 == (void *)0x0)) goto LAB_01395a60;
                RVar41 = UnityEngine_Transform_get_position_2516710(pvVar28,(void *)0x0);
                RVar42.component0 = RVar41.component0;
                if ((self->NearestElement == (PathElement *)0x0) ||
                   (pvVar28 = (void *)NativeHelper_0260e1a8
                                                (RVar42.component0,
                                                 CONCAT44(uVar38,RVar41.component1),
                                                 CONCAT44(uVar36,RVar41.component2),
                                                 self->NearestElement,0), pvVar28 == (void *)0x0))
                goto LAB_01395a60;
                RVar41 = UnityEngine_Transform_get_position_2516710(pvVar28,(void *)0x0);
                RVar42.component2 = RVar41.component2;
                if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                RVar42.component1 = 0.0;
                UnityEngine_Transform_set_position_25167b0(pvVar16,RVar42,(void *)0x0);
                if (self->SafetyNetRegion == (Region2D *)0x0) goto LAB_01395a60;
                pvVar16 = (void *)NativeHelper_0260e1a8(self->SafetyNetRegion,0);
                if (((self->NearestElement == (PathElement *)0x0) ||
                    (pvVar28 = (void *)NativeHelper_0260e1a8(self->NearestElement,0),
                    pvVar28 == (void *)0x0)) ||
                   (value = UnityEngine_Transform_get_rotation_2516900(pvVar28,(void *)0x0),
                   pvVar16 == (void *)0x0)) goto LAB_01395a60;
                UnityEngine_Transform_set_rotation_2516988(pvVar16,value,(void *)0x0);
                if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                bVar6 = PathElement_IsStraightHorz_130b618(self->NearestElement,(void *)0x0);
                if (self->SafetyNetRegion == (Region2D *)0x0) goto LAB_01395a60;
                pvVar16 = (void *)NativeHelper_0260e1a8(self->SafetyNetRegion,0);
                if (bVar6) {
                  if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                  uVar20 = 0x42b40000;
                }
                else {
                  if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                  uVar20 = 0;
                }
                auVar1._4_8_ = 0;
                auVar1._0_4_ = uVar20;
                uVar36 = 0;
                uVar38 = 0;
                UnityEngine_Transform_set_eulerAngles_2516958
                          (pvVar16,(Recovered_Vector3)(auVar1 << 0x20),(void *)0x0);
                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
                self_02 = self->SafetyNetRegion;
                pvVar16 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0);
                if ((pvVar16 == (void *)0x0) ||
                   (RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0),
                   self_02 == (Region2D *)0x0)) goto LAB_01395a60;
                bVar6 = Region2D_IsPointInside_131eb60(self_02,RVar41,(void *)0x0);
                if (!bVar6) goto LAB_01395634;
                if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
                bVar26 = 1;
                if (self->GamePlayer->HasInvincibility == false) goto LAB_01395638;
LAB_0139566c:
                pCVar12 = self->GamePlayer;
                if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
                pPVar31 = self->NearestElement;
                if ((pCVar12->HasInvincibility & bVar26) == 0) {
                  if (pPVar31 == (PathElement *)0x0) goto LAB_01395a60;
                  fVar39 = PathElement_GetPathHeight_130bd10(pPVar31,(void *)0x0);
                }
                else {
                  if (pPVar31 == (PathElement *)0x0) goto LAB_01395a60;
                  fVar40 = PathElement_GetPathHeight_130bd10(pPVar31,(void *)0x0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  bVar6 = UnityEngine_object_op_Inequality_250c8e4(pPVar11,(void *)0x0,(void *)0x0);
                  if (bVar6) {
                    if (pPVar11 == (PathElement *)0x0) goto LAB_01395a60;
                    fVar40 = PathElement_GetPathHeight_130bd10(pPVar11,(void *)0x0);
                    if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                    bVar6 = PathElement_IsStraightHorz_130b618(self->NearestElement,(void *)0x0);
                    if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                       (pvVar16 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                       pvVar16 == (void *)0x0)) goto LAB_01395a60;
                    RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                    uVar14 = CONCAT44(uVar38,RVar41.component1);
                    fVar39 = RVar41.component0;
                    if (bVar6) {
                      if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                      pvVar16 = (void *)NativeHelper_0260e1a8(fVar39,uVar14,self->NearestElement,0);
                      uVar38 = (undefined4)((ulong)uVar14 >> 0x20);
                      if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                      RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      uVar37 = CONCAT44(uVar36,RVar41.component2);
                      uVar14 = CONCAT44(uVar38,RVar41.component1);
                      pvVar16 = (void *)NativeHelper_0260e1a8
                                                  (RVar41.component0,uVar14,uVar37,pPVar11,0);
                      uVar38 = (undefined4)((ulong)uVar37 >> 0x20);
                      uVar36 = (undefined4)((ulong)uVar14 >> 0x20);
                      if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                      RVar42 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      if ((self->NearestElement == (PathElement *)0x0) ||
                         (pvVar16 = (void *)NativeHelper_0260e1a8
                                                      (RVar42.component0,
                                                       CONCAT44(uVar36,RVar42.component1),
                                                       CONCAT44(uVar38,RVar42.component2),
                                                       self->NearestElement,0),
                         pvVar16 == (void *)0x0)) goto LAB_01395a60;
                      RVar43 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      fVar39 = fVar39 - RVar41.component0;
                      fVar34 = RVar42.component0 - RVar43.component0;
                    }
                    else {
                      if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                      pvVar16 = (void *)NativeHelper_0260e1a8(fVar39,uVar14,self->NearestElement,0);
                      uVar36 = (undefined4)((ulong)uVar14 >> 0x20);
                      if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                      RVar42 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      uVar14 = CONCAT44(uVar36,RVar42.component1);
                      pvVar16 = (void *)NativeHelper_0260e1a8(RVar42.component0,uVar14,pPVar11,0);
                      uVar36 = (undefined4)((ulong)uVar14 >> 0x20);
                      if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                      RVar43 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      if ((self->NearestElement == (PathElement *)0x0) ||
                         (pvVar16 = (void *)NativeHelper_0260e1a8
                                                      (RVar43.component0,
                                                       CONCAT44(uVar36,RVar43.component1),
                                                       self->NearestElement,0),
                         pvVar16 == (void *)0x0)) goto LAB_01395a60;
                      RVar44 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                      fVar39 = RVar41.component2 - RVar42.component2;
                      fVar34 = RVar43.component2 - RVar44.component2;
                    }
                    fVar34 = fVar39 / fVar34 + 0.5;
                  }
                  else {
                    fVar34 = 0.0;
                  }
                  if (self->NearestElement == (PathElement *)0x0) goto LAB_01395a60;
                  pCVar12 = self->GamePlayer;
                  fVar39 = PathElement_GetPathHeight_130bd10(self->NearestElement,(void *)0x0);
                  if ((self->NearestElement == (PathElement *)0x0) ||
                     (fVar35 = PathElement_GetPathHeight_130bd10(self->NearestElement,(void *)0x0),
                     pCVar12 == (CharacterPlayer *)0x0)) goto LAB_01395a60;
                  fVar39 = fVar39 + fVar34 * (fVar40 - fVar35);
                }
                CharacterPlayer_SetGroundHeight_12bde90(pCVar12,fVar39,(void *)0x0);
                bVar6 = true;
                pvVar16 = extraout_x1_15;
              }
              pCVar12 = self->GamePlayer;
              if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
              if ((fVar33 < pCVar12->GroundHeight) || ((bVar6 & (bVar8 ^ 0xffU)) != 0)) {
                pvVar16 = (void *)NativeHelper_0260e1a8(pCVar12,0);
                if (pvVar16 == (void *)0x0) goto LAB_01395a60;
                RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
                pCVar12 = self->GamePlayer;
                if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
                pvVar16 = extraout_x1_16;
                if (((RVar41.component1 < pCVar12->GroundHeight + -6.0) &&
                    (pCVar12->IsDead == false)) && (pCVar12->HasInvincibility == false)) {
                  CharacterPlayer_Kill_12bda84(pCVar12,(void *)0x4,(void *)0x0);
                  pCVar12 = self->GamePlayer;
                  if (pCVar12 == (CharacterPlayer *)0x0) goto LAB_01395a60;
                  (**(code **)(*(long *)pCVar12 + 0x188))
                            (pCVar12,0,*(undefined8 *)(*(long *)pCVar12 + 400));
                  if (self->MainCamera == (GameCamera *)0x0) goto LAB_01395a60;
                  GameCamera_Shake_12d364c(self->MainCamera,1.0,1.0,1.0,0.0,(void *)0x0);
                  pvVar16 = extraout_x1_17;
                }
              }
              GameController_Prune_129384c(self,pvVar16);
              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
              iVar24 = self->GamePlayer->Score;
              self->AverageScorePerBlock =
                   self->AverageScorePerBlock * _UNK_007a3c44 +
                   (float)(iVar24 - self->LastBlockScore) * _UNK_007a3c94;
              self->LastBlockScore = iVar24;
              pvVar16 = extraout_x1_18;
            }
            else {
              bVar26 = 0;
              bVar6 = false;
              pvVar16 = extraout_x1_13;
            }
            if ((bVar26 == 0) && (bVar6 == false)) {
              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
              if (self->GamePlayer->IsDead == false) {
                GameController_CheckHittingScenery_129524c(self,pvVar16);
              }
            }
            pvVar16 = (void *)(ulong)(uint)self->PathRootOrigin;
            GameController_HandleBonusItemPickup_1295388
                      (self,self->PathRoot,self->PathRootOrigin,true,3,in_x5);
            GameController_HandleCollisionWithObstacles_12959f4(self,runtimeMethod_11);
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
            self->GamePlayer->IsOverGround = bVar6;
            GameController_SimulateEnemies_1295d7c(self,runtimeMethod_12);
            pvVar28 = extraout_x1_19;
          }
LAB_01395984:
          pCVar12 = self->GamePlayer;
          if (pCVar12 == (CharacterPlayer *)0x0) {
LAB_01395a60:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if ((pCVar12->IsDead != false) && (self->IsGameOver == false)) {
            if (self->IsTutorialMode == false) {
              if (pCVar12->HasAngelWings != false) {
                if (pCVar12->AreWingsPermanent != false) {
                  pCVar12->AngelWingsRechargeTimeLeft = 15.0;
                }
                bVar8 = GameController_ResurrectPlayer_1291adc(self,false,pvVar16);
                if (self->UsedPowers == false) {
                  self->UsedPowers = true;
                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01395a60;
                  self->ScoreWhenFirstUsedPowers = self->GamePlayer->Score;
                }
                pvVar28 = extraout_x1_20;
                if (bVar8) goto LAB_01395a34;
              }
              fVar33 = 0.5;
              bVar8 = false;
            }
            else {
              self->TutorialDeathCount = self->TutorialDeathCount + 1;
              GameController_SendTutorialDeathEvent_12868d8(self,pvVar28);
              fVar33 = 2.0;
              bVar8 = true;
            }
            GameController_EndGame_1296758(self,fVar33,bVar8,pvVar16);
            pvVar28 = extraout_x1_21;
          }
LAB_01395a34:
          if (((self->IsGameOver != false) && (self->IsGameOverFinished != false)) &&
             (self->HandelingEndGame == false)) {
            GameController_HandleEndGame_1296820(self,pvVar28);
            pvVar28 = extraout_x1_22;
          }
        }
        GameController_SimulateWorldElements_12969bc(self,pvVar28);
        pvVar16 = extraout_x1_23;
      }
      else {
        GameController_HandleCountDown_12925dc(self,runtimeMethod);
        pvVar16 = extraout_x1_10;
      }
      goto LAB_01394dac;
    }
    if (((self->SkippedSaveMeVideo == false) && (self->ClosedSaveMeVideo == false)) &&
       (self->SaveMePromptTimedOut == false)) {
      if (self->WatchedSavedMeVideo == false) {
        if ((self->ShouldPromptForSaveMe != false) && (self->IsPromptingForSaveMe == false)) {
          self_01 = (SaveMeGUI *)**(undefined8 **)(*(long *)PTR_DAT_029be028 + 0xb8);
          pvVar16 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
          NativeHelper_01f80268(pvVar16,self,*(undefined8 *)PTR_DAT_029be018,0);
          pvVar28 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
          NativeHelper_01f80268(pvVar28,self,*(undefined8 *)PTR_DAT_029be010,0);
          pvVar17 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
          NativeHelper_01f80268(pvVar17,self,*(undefined8 *)PTR_DAT_029be008,0);
          if (self_01 == (SaveMeGUI *)0x0) goto LAB_01395a60;
          SaveMeGUI_ShowWithOptions_12f7c8c(self_01,pvVar16,pvVar28,pvVar17,(void *)0x0);
          self->ShouldPromptForSaveMe = false;
          self->IsPromptingForSaveMe = true;
        }
      }
      else {
        self->ShouldPromptForSaveMe = false;
        self->IsPromptingForSaveMe = false;
        bVar8 = GameController_ResurrectPlayer_1291adc(self,true,in_x2);
        if (bVar8) {
          pGVar9 = self->GameInterface;
          self->IsGameOver = false;
          self->SaveMeUsedCount = self->SaveMeUsedCount + 1;
          if (pGVar9 == (GameGUI *)0x0) goto LAB_01395a60;
          (**(code **)(*(long *)pGVar9 + 0x188))(pGVar9,1,*(undefined8 *)(*(long *)pGVar9 + 400));
        }
        if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        x = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
        }
        bVar8 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
        if (bVar8) {
          if (x == (Imangi_Ad_AdManager *)0x0) goto LAB_01395a60;
          (**(code **)(*(long *)x + 0x2a8))
                    (x,0,*(undefined8 *)PTR_DAT_029b9680,5,*(undefined8 *)(*(long *)x + 0x2b0));
        }
      }
    }
    else {
      self->ShouldPromptForSaveMe = false;
      self->IsPromptingForSaveMe = false;
    }
  }
  else {
    GameController_HandleResurrecting_1291a64(self,runtimeMethod);
    pvVar16 = extraout_x1_08;
LAB_01394dac:
    GameController_SetPathElementVisibility_1290064(self,pvVar16);
  }
LAB_01394de4:
  if (self->IsGameOver == false) {
    return;
  }
  if (self->IsGameOverFinished != false) {
    return;
  }
  fVar39 = self->TimeSinceGameEnd;
  fVar33 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  fVar39 = fVar39 + fVar33;
  self->TimeSinceGameEnd = fVar39;
  if (fVar39 <= self->EndGameDelayTime) {
    return;
  }
  if (self->AutoRestart == false) {
    if (self->IsPromptingForSaveMe != false) {
      return;
    }
    if (self->IsShowingSaveMeVideo != false) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_029ba770 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar8 = FeatureManager_IsFeatureEnabled_12d634c(*(void **)PTR_DAT_029be040,(void *)0x0);
    if (bVar8) {
      cVar19 = self->SkippedSaveMeVideo;
      if (((bool)cVar19 == false) && (self->SaveMePromptTimedOut == false)) {
        if (((**(long **)(*(long *)PTR_DAT_029be030 + 0xb8) == 0) ||
            (iVar24 = *(int *)(**(long **)(*(long *)PTR_DAT_029be030 + 0xb8) + 0x28), iVar24 < 1))
           || (self->SaveMeUsedCount < iVar24)) {
          pvVar16 = *(void **)PTR_DAT_029b9758;
          if (*(int *)((long)pvVar16 + 0xe0) == 0) {
            pvVar16 = (void *)NativeHelper_011df1bc();
          }
          bVar8 = GameController_IsVideoAdAvailable_128da40(pvVar16);
          if (bVar8) {
            cVar19 = self->SkippedSaveMeVideo;
            goto LAB_01395388;
          }
        }
      }
      else if ((self->ShouldPromptForSaveMe != false) || (self->IsPromptingForSaveMe != false)) {
LAB_01395388:
        if (cVar19 != '\0') {
          return;
        }
        if (self->SaveMePromptTimedOut != false) {
          return;
        }
        if (self->ClosedSaveMeVideo != false) {
          return;
        }
        if (self->IsPromptingForSaveMe != false) {
          return;
        }
        if (self->IsShowingSaveMeVideo != false) {
          return;
        }
        self->ShouldPromptForSaveMe = true;
        self->SaveMePromptTimedOut = false;
        self->ClosedSaveMeVideo = false;
        self->WatchedSavedMeVideo = false;
        self->CancelledSaveMeVideo = false;
        self->IsPromptingForSaveMe = false;
        self->IsShowingSaveMeVideo = false;
        self->SkippedSaveMeVideo = false;
        self->SaveMePromptTimedOut = false;
        return;
      }
    }
    self->IsGameOverFinished = true;
    return;
  }
  GameController_RestartGame_128fbbc(self,runtimeMethod_00);
  pvVar16 = extraout_x1_09;
  if ((bRam0000000002b94cec & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029bdf48);
    NativeHelper_011df0b4(PTR_DAT_029bdf50);
    bRam0000000002b94cec = 1;
    pvVar16 = extraout_x1;
  }
  if (self->IsGameStarted == false) {
    GameController_LoadLevelInformation_128e344(self,pvVar16);
    pGVar9 = self->GameInterface;
    self->HandelingEndGame = false;
    if (pGVar9 == (GameGUI *)0x0) goto LAB_01393ae4;
    (**(code **)(*(long *)pGVar9 + 0x188))(pGVar9,1,*(undefined8 *)(*(long *)pGVar9 + 400));
    if (self->IsTutorialMode == false) {
      self->IsGameStarted = true;
      self->TimeSinceGameStart = 0.0;
      pvVar16 = extraout_x1_00;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_029bd310 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar8 = AdManager_ConfigData_BannerAdPlacementEnabledInTutorial_12ac390((void *)0x0);
      self_00 = (GameController *)(ulong)bVar8;
      pvVar16 = extraout_x1_01;
      if (!bVar8) {
        if (self->GameInterface == (GameGUI *)0x0) goto LAB_01393ae4;
        BasePanel_UnhookBannerAdEvents_12dfc20((BasePanel *)self->GameInterface,(void *)0x0);
        self_00 = extraout_x0;
        pvVar16 = extraout_x1_02;
      }
      self->IsGameStarted = true;
      self->TimeSinceGameStart = 0.0;
      if ((self->IsTutorialMode != false) && (self->TutorialDeathCount == 0)) {
        GameController_SendTutorialStartEvent_1286608(self_00,pvVar16);
        self->TimeSinceTutorialStart = 0.0;
        self->StumbleCount = 0;
        pvVar16 = extraout_x1_03;
      }
    }
    if (self->IsIntroScene != false) {
      if ((GameGUI *)**(undefined8 **)(*(long *)PTR_DAT_029bdf48 + 0xb8) == (GameGUI *)0x0) {
LAB_01393ae4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      GameGUI_ResumeSprite_12e7a24
                ((GameGUI *)**(undefined8 **)(*(long *)PTR_DAT_029bdf48 + 0xb8),(void *)0x0);
      if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      GameCamera_SnapStartGame_12d8170(self->MainCamera,(void *)0x0);
      puVar2 = PTR_DAT_029bdf50;
      pMVar10 = (MovingObject_MovingObjectPathNode *)
                NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf50);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar10,(void *)0x0);
      if (pMVar10 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar10->TimeStamp = 0.0;
      if ((self->MainCamera == (GameCamera *)0x0) ||
         (pvVar16 = (void *)NativeHelper_0260e1a8(self->MainCamera,0), pvVar16 == (void *)0x0))
      goto LAB_01393ae4;
      RVar41 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
      (pMVar10->Location).component0 = RVar41.component0;
      (pMVar10->Location).component1 = RVar41.component1;
      (pMVar10->Location).component2 = RVar41.component2;
      pMVar10->Ease = false;
      if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self->MainCamera,pMVar10,(void *)0x0);
      pMVar10 = (MovingObject_MovingObjectPathNode *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar10,(void *)0x0);
      if (pMVar10 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar10->TimeStamp = 0.25;
      pGVar21 = self->MainCamera;
      if (pGVar21 == (GameCamera *)0x0) goto LAB_01393ae4;
      fVar33 = (pGVar21->EndLocation).component2;
      fVar39 = (pGVar21->EndLocation).component0;
      fVar40 = (pGVar21->EndLocation).component1;
      pMVar10->Ease = true;
      (pMVar10->Location).component2 = fVar33;
      (pMVar10->Location).component0 = fVar39;
      (pMVar10->Location).component1 = fVar40;
      if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self->MainCamera,pMVar10,(void *)0x0);
      pMVar10 = (MovingObject_MovingObjectPathNode *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar10,(void *)0x0);
      uVar37 = _UNK_007a47b8;
      uVar14 = _UNK_007a47b0;
      if (pMVar10 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar10->Ease = true;
      uVar5 = _UNK_007a47b8;
      _UNK_007a47b8 = (undefined4)uVar37;
      _UNK_007a47bc = SUB84(uVar37,4);
      uVar36 = _UNK_007a47bc;
      (pMVar10->Location).component1 = (float)_UNK_007a47b8;
      _UNK_007a47b8 = uVar5;
      uVar37 = _UNK_007a47b0;
      (pMVar10->Location).component2 = (float)uVar36;
      _UNK_007a47b0 = (undefined4)uVar14;
      _UNK_007a47b4 = SUB84(uVar14,4);
      uVar36 = _UNK_007a47b4;
      pMVar10->TimeStamp = (float)_UNK_007a47b0;
      _UNK_007a47b0 = uVar37;
      (pMVar10->Location).component0 = (float)uVar36;
      if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self->MainCamera,pMVar10,(void *)0x0);
      if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_StartFollowingPath_1309128((MovingObject *)self->MainCamera,(void *)0x0);
      if (self->Audio == (AudioManager *)0x0) goto LAB_01393ae4;
      AudioManager_StartGameMusic_12bb130(self->Audio,(void *)0x0);
      if (self->Audio == (AudioManager *)0x0) goto LAB_01393ae4;
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x14,_UNK_007a3d00,(void *)0x0);
      pvVar16 = extraout_x1_04;
    }
    GameController_ResetFriendScores_128fae8(self,pvVar16);
    puVar2 = PTR_DAT_029ba5a8;
    if (self->IsTutorialMode == false) {
      if ((bRam0000000002b94ca9 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029ba5a8);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bd9d8);
        NativeHelper_011df0b4(PTR_DAT_029bd9e0);
        bRam0000000002b94ca9 = 1;
      }
      puVar3 = PTR_DAT_029bd9d0;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar4 = PTR_DAT_029bd9e0;
      puVar2 = PTR_DAT_029bd9d8;
      bVar8 = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
      pvVar16 = TRAnalyticsHelper_BoolAsString_12b8938(bVar8,(void *)0x0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      puVar3 = PTR_DAT_029bd9d0;
      pvVar17 = *(void **)puVar2;
      pvVar18 = *(void **)puVar4;
      pvVar28 = pvVar18;
      if ((bRam0000000002b94e08 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9d0,pvVar18,pvVar16,0);
        bRam0000000002b94e08 = 1;
        pvVar28 = extraout_x1_26;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar28 = extraout_x1_27;
      }
      bVar8 = TRAnalytics_IsEventEnabled_12b6e24(pvVar17,pvVar28);
      if (!bVar8) {
        return;
      }
      Imangi_Analytics_Analytics_LogEvent_126af14(pvVar17,pvVar18,pvVar16,(void *)0x0);
      pvVar16 = extraout_x1_28;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar16 = extraout_x1_29;
      }
      puVar2 = PTR_DAT_029bd9d0;
      if ((bRam0000000002b94e0d & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        bRam0000000002b94e0d = 1;
        pvVar16 = extraout_x1_24;
      }
      lVar15 = *(long *)puVar2;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar15 = *(long *)puVar2;
        pvVar16 = extraout_x1_25;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((bRam0000000002b94e34 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9e8);
        NativeHelper_011df0b4(PTR_DAT_029bd9f0);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bf150);
        bRam0000000002b94e34 = 1;
        pvVar16 = extraout_x1_30;
      }
      puVar2 = PTR_DAT_029bf150;
      if (*(char *)(lVar15 + 0x30) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar16 = extraout_x1_31;
        }
        bVar8 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar2,pvVar16);
        if (bVar8) {
          if ((*(long *)(lVar15 + 0x10) != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
            inEventParameters =
                 (long *)NativeHelper_011df12c
                                   (*(undefined8 *)PTR_DAT_029bd9e8,
                                    *(int *)(*(long *)(lVar15 + 0x20) + 0x18) +
                                    *(int *)(*(long *)(lVar15 + 0x10) + 0x18));
            puVar3 = PTR_DAT_029bd9f0;
            lVar22 = *(long *)(lVar15 + 0x10);
            if (lVar22 != 0) {
              lVar30 = 4;
              do {
                uVar32 = lVar30 - 4;
                if ((long)(int)*(uint *)(lVar22 + 0x18) <= (long)uVar32) {
                  lVar22 = *(long *)(lVar15 + 0x20);
                  if (lVar22 != 0) {
                    uVar32 = 0;
                    goto code_r0x013bb368;
                  }
                  break;
                }
                if (*(uint *)(lVar22 + 0x18) <= uVar32) goto code_r0x013bb438;
                lVar23 = *(long *)(lVar15 + 0x18);
                if (lVar23 == 0) break;
                if (*(uint *)(lVar23 + 0x18) <= uVar32) goto code_r0x013bb438;
                pvVar16 = *(void **)(lVar22 + lVar30 * 8);
                pvVar28 = *(void **)(lVar23 + lVar30 * 8);
                pIVar13 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar3);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar13,pvVar16,pvVar28,(void *)0x0);
                if (inEventParameters == (long *)0x0) break;
                if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar22 = NativeHelper_011df1c0
                                       (pIVar13,*(undefined8 *)(*inEventParameters + 0x40)),
                   lVar22 == 0)) goto code_r0x013bb43c;
                if (*(uint *)(inEventParameters + 3) <= uVar32) goto code_r0x013bb438;
                inEventParameters[lVar30] = (long)pIVar13;
                lVar22 = *(long *)(lVar15 + 0x10);
                lVar30 = lVar30 + 1;
              } while (lVar22 != 0);
            }
          }
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
      }
      return;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar22 + 0x18) <= (long)uVar32) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar15 + 0x30) = 0;
      return;
    }
    lVar30 = *(long *)(lVar15 + 0x10);
    if (lVar30 == 0) break;
    if (*(uint *)(lVar22 + 0x18) <= uVar32) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar23 = *(long *)(lVar15 + 0x28);
    if (lVar23 == 0) break;
    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto code_r0x013bb438;
    pvVar16 = *(void **)(lVar22 + uVar32 * 8 + 0x20);
    iVar24 = *(int *)(lVar23 + uVar32 * 4 + 0x20);
    pIVar13 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar13,pvVar16,(long)iVar24,(void *)0x0)
    ;
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar22 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar22 == 0)) {
code_r0x013bb43c:
      uVar14 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar14,0);
    }
    uVar20 = (int)uVar32 + (int)*(undefined8 *)(lVar30 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar20) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar20 + 4] = (long)pIVar13;
    lVar22 = *(long *)(lVar15 + 0x20);
    uVar32 = uVar32 + 1;
  } while (lVar22 != 0);
  goto code_r0x013bb408;
}

