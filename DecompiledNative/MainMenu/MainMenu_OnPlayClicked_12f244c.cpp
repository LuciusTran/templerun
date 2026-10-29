// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnPlayClicked() { }
// Ghidra address: 013f644c; ELF VA: 0x12f644c; file offset: 0x12f244c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MainMenu_OnPlayClicked_12f244c(MainMenu *self,void *runtimeMethod)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  void *inEventId;
  GameGUI *pGVar12;
  GameController *extraout_x0;
  MovingObject_MovingObjectPathNode *pMVar13;
  long lVar14;
  long *inEventParameters;
  Imangi_Analytics_EventParameter *pIVar15;
  undefined8 uVar16;
  GameController *self_01;
  void *inParameterName;
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
  void *pvVar17;
  uint uVar18;
  GameCamera *pGVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  ulong uVar24;
  Recovered_Vector3 RVar25;
  GameController *self_00;
  
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  self_01 = *(GameController **)&self->field_0x20;
  if (self_01 == (GameController *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  pvVar17 = (void *)0x0;
  if ((bRam0000000002b94cec & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029bdf48);
    NativeHelper_011df0b4(PTR_DAT_029bdf50);
    bRam0000000002b94cec = 1;
    pvVar17 = extraout_x1;
  }
  if (self_01->IsGameStarted == false) {
    GameController_LoadLevelInformation_128e344(self_01,pvVar17);
    pGVar12 = self_01->GameInterface;
    self_01->HandelingEndGame = false;
    if (pGVar12 == (GameGUI *)0x0) goto LAB_01393ae4;
    (**(code **)(*(long *)pGVar12 + 0x188))(pGVar12,1,*(undefined8 *)(*(long *)pGVar12 + 400));
    if (self_01->IsTutorialMode == false) {
      self_01->IsGameStarted = true;
      self_01->TimeSinceGameStart = 0.0;
      pvVar17 = extraout_x1_00;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_029bd310 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar11 = AdManager_ConfigData_BannerAdPlacementEnabledInTutorial_12ac390((void *)0x0);
      self_00 = (GameController *)(ulong)bVar11;
      pvVar17 = extraout_x1_01;
      if (!bVar11) {
        if (self_01->GameInterface == (GameGUI *)0x0) goto LAB_01393ae4;
        BasePanel_UnhookBannerAdEvents_12dfc20((BasePanel *)self_01->GameInterface,(void *)0x0);
        self_00 = extraout_x0;
        pvVar17 = extraout_x1_02;
      }
      self_01->IsGameStarted = true;
      self_01->TimeSinceGameStart = 0.0;
      if ((self_01->IsTutorialMode != false) && (self_01->TutorialDeathCount == 0)) {
        GameController_SendTutorialStartEvent_1286608(self_00,pvVar17);
        self_01->TimeSinceTutorialStart = 0.0;
        self_01->StumbleCount = 0;
        pvVar17 = extraout_x1_03;
      }
    }
    if (self_01->IsIntroScene != false) {
      if ((GameGUI *)**(undefined8 **)(*(long *)PTR_DAT_029bdf48 + 0xb8) == (GameGUI *)0x0) {
LAB_01393ae4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      GameGUI_ResumeSprite_12e7a24
                ((GameGUI *)**(undefined8 **)(*(long *)PTR_DAT_029bdf48 + 0xb8),(void *)0x0);
      if (self_01->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      GameCamera_SnapStartGame_12d8170(self_01->MainCamera,(void *)0x0);
      puVar6 = PTR_DAT_029bdf50;
      pMVar13 = (MovingObject_MovingObjectPathNode *)
                NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf50);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar13,(void *)0x0);
      if (pMVar13 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar13->TimeStamp = 0.0;
      if ((self_01->MainCamera == (GameCamera *)0x0) ||
         (pvVar17 = (void *)NativeHelper_0260e1a8(self_01->MainCamera,0), pvVar17 == (void *)0x0))
      goto LAB_01393ae4;
      RVar25 = UnityEngine_Transform_get_position_2516710(pvVar17,(void *)0x0);
      (pMVar13->Location).component0 = RVar25.component0;
      (pMVar13->Location).component1 = RVar25.component1;
      (pMVar13->Location).component2 = RVar25.component2;
      pMVar13->Ease = false;
      if (self_01->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self_01->MainCamera,pMVar13,(void *)0x0);
      pMVar13 = (MovingObject_MovingObjectPathNode *)NativeHelper_011df2d0(*(undefined8 *)puVar6);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar13,(void *)0x0);
      if (pMVar13 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar13->TimeStamp = 0.25;
      pGVar19 = self_01->MainCamera;
      if (pGVar19 == (GameCamera *)0x0) goto LAB_01393ae4;
      fVar1 = (pGVar19->EndLocation).component2;
      fVar3 = (pGVar19->EndLocation).component0;
      fVar4 = (pGVar19->EndLocation).component1;
      pMVar13->Ease = true;
      (pMVar13->Location).component2 = fVar1;
      (pMVar13->Location).component0 = fVar3;
      (pMVar13->Location).component1 = fVar4;
      if (self_01->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self_01->MainCamera,pMVar13,(void *)0x0);
      pMVar13 = (MovingObject_MovingObjectPathNode *)NativeHelper_011df2d0(*(undefined8 *)puVar6);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar13,(void *)0x0);
      uVar9 = _UNK_007a47b8;
      uVar16 = _UNK_007a47b0;
      if (pMVar13 == (MovingObject_MovingObjectPathNode *)0x0) goto LAB_01393ae4;
      pMVar13->Ease = true;
      uVar10 = _UNK_007a47b8;
      _UNK_007a47b8 = (undefined4)uVar9;
      _UNK_007a47bc = SUB84(uVar9,4);
      uVar5 = _UNK_007a47bc;
      (pMVar13->Location).component1 = (float)_UNK_007a47b8;
      _UNK_007a47b8 = uVar10;
      uVar9 = _UNK_007a47b0;
      (pMVar13->Location).component2 = (float)uVar5;
      _UNK_007a47b0 = (undefined4)uVar16;
      _UNK_007a47b4 = SUB84(uVar16,4);
      uVar5 = _UNK_007a47b4;
      pMVar13->TimeStamp = (float)_UNK_007a47b0;
      _UNK_007a47b0 = uVar9;
      (pMVar13->Location).component0 = (float)uVar5;
      if (self_01->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_AddFollowingPathNode_1308f94
                ((MovingObject *)self_01->MainCamera,pMVar13,(void *)0x0);
      if (self_01->MainCamera == (GameCamera *)0x0) goto LAB_01393ae4;
      MovingObject_StartFollowingPath_1309128((MovingObject *)self_01->MainCamera,(void *)0x0);
      if (self_01->Audio == (AudioManager *)0x0) goto LAB_01393ae4;
      AudioManager_StartGameMusic_12bb130(self_01->Audio,(void *)0x0);
      if (self_01->Audio == (AudioManager *)0x0) goto LAB_01393ae4;
      AudioManager_PlayFX_12bb190(self_01->Audio,(void *)0x14,_UNK_007a3d00,(void *)0x0);
      pvVar17 = extraout_x1_04;
    }
    GameController_ResetFriendScores_128fae8(self_01,pvVar17);
    puVar6 = PTR_DAT_029ba5a8;
    if (self_01->IsTutorialMode == false) {
      if ((bRam0000000002b94ca9 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029ba5a8);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bd9d8);
        NativeHelper_011df0b4(PTR_DAT_029bd9e0);
        bRam0000000002b94ca9 = 1;
      }
      puVar7 = PTR_DAT_029bd9d0;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar8 = PTR_DAT_029bd9e0;
      puVar6 = PTR_DAT_029bd9d8;
      bVar11 = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
      pvVar17 = TRAnalyticsHelper_BoolAsString_12b8938(bVar11,(void *)0x0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar7);
      }
      puVar7 = PTR_DAT_029bd9d0;
      inEventId = *(void **)puVar6;
      inParameterName = *(void **)puVar8;
      pvVar22 = inParameterName;
      if ((bRam0000000002b94e08 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9d0,inParameterName,pvVar17,0);
        bRam0000000002b94e08 = 1;
        pvVar22 = extraout_x1_07;
      }
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar22 = extraout_x1_08;
      }
      bVar11 = TRAnalytics_IsEventEnabled_12b6e24(inEventId,pvVar22);
      if (!bVar11) {
        return;
      }
      Imangi_Analytics_Analytics_LogEvent_126af14(inEventId,inParameterName,pvVar17,(void *)0x0);
      pvVar17 = extraout_x1_09;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar17 = extraout_x1_10;
      }
      puVar6 = PTR_DAT_029bd9d0;
      if ((bRam0000000002b94e0d & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        bRam0000000002b94e0d = 1;
        pvVar17 = extraout_x1_05;
      }
      lVar14 = *(long *)puVar6;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar14 = *(long *)puVar6;
        pvVar17 = extraout_x1_06;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((bRam0000000002b94e34 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bd9e8);
        NativeHelper_011df0b4(PTR_DAT_029bd9f0);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bf150);
        bRam0000000002b94e34 = 1;
        pvVar17 = extraout_x1_11;
      }
      puVar6 = PTR_DAT_029bf150;
      if (*(char *)(lVar14 + 0x30) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          pvVar17 = extraout_x1_12;
        }
        bVar11 = TRAnalytics_IsEventEnabled_12b6e24(*(void **)puVar6,pvVar17);
        if (bVar11) {
          if ((*(long *)(lVar14 + 0x10) != 0) && (*(long *)(lVar14 + 0x20) != 0)) {
            inEventParameters =
                 (long *)NativeHelper_011df12c
                                   (*(undefined8 *)PTR_DAT_029bd9e8,
                                    *(int *)(*(long *)(lVar14 + 0x20) + 0x18) +
                                    *(int *)(*(long *)(lVar14 + 0x10) + 0x18));
            puVar7 = PTR_DAT_029bd9f0;
            lVar20 = *(long *)(lVar14 + 0x10);
            if (lVar20 != 0) {
              lVar23 = 4;
              do {
                uVar24 = lVar23 - 4;
                if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar24) {
                  lVar20 = *(long *)(lVar14 + 0x20);
                  if (lVar20 != 0) {
                    uVar24 = 0;
                    goto code_r0x013bb368;
                  }
                  break;
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar24) goto code_r0x013bb438;
                lVar21 = *(long *)(lVar14 + 0x18);
                if (lVar21 == 0) break;
                if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x013bb438;
                pvVar17 = *(void **)(lVar20 + lVar23 * 8);
                pvVar22 = *(void **)(lVar21 + lVar23 * 8);
                pIVar15 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar7);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar15,pvVar17,pvVar22,(void *)0x0);
                if (inEventParameters == (long *)0x0) break;
                if ((pIVar15 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar20 = NativeHelper_011df1c0
                                       (pIVar15,*(undefined8 *)(*inEventParameters + 0x40)),
                   lVar20 == 0)) goto code_r0x013bb43c;
                if (*(uint *)(inEventParameters + 3) <= uVar24) goto code_r0x013bb438;
                inEventParameters[lVar23] = (long)pIVar15;
                lVar20 = *(long *)(lVar14 + 0x10);
                lVar23 = lVar23 + 1;
              } while (lVar20 != 0);
            }
          }
          goto code_r0x013bb408;
        }
      }
      return;
    }
  }
  return;
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar24) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar6,inEventParameters,(void *)0x0);
      *(undefined1 *)(lVar14 + 0x30) = 0;
      return;
    }
    lVar23 = *(long *)(lVar14 + 0x10);
    if (lVar23 == 0) break;
    if (*(uint *)(lVar20 + 0x18) <= uVar24) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar21 = *(long *)(lVar14 + 0x28);
    if (lVar21 == 0) break;
    if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x013bb438;
    pvVar17 = *(void **)(lVar20 + uVar24 * 8 + 0x20);
    iVar2 = *(int *)(lVar21 + uVar24 * 4 + 0x20);
    pIVar15 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar7);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar15,pvVar17,(long)iVar2,(void *)0x0);
    if (inEventParameters == (long *)0x0) break;
    if ((pIVar15 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar20 = NativeHelper_011df1c0(pIVar15,*(undefined8 *)(*inEventParameters + 0x40)),
       lVar20 == 0)) {
code_r0x013bb43c:
      uVar16 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar16,0);
    }
    uVar18 = (int)uVar24 + (int)*(undefined8 *)(lVar23 + 0x18);
    if (*(uint *)(inEventParameters + 3) <= uVar18) goto code_r0x013bb438;
    inEventParameters[(long)(int)uVar18 + 4] = (long)pIVar15;
    lVar20 = *(long *)(lVar14 + 0x20);
    uVar24 = uVar24 + 1;
  } while (lVar20 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

