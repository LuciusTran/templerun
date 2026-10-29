// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void LoadLevelInformation() { }
// Ghidra address: 01392344; ELF VA: 0x1292344; file offset: 0x128e344
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_LoadLevelInformation_128e344(GameController *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  CommonPlayer *pCVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  GameController *self_00;
  void *pvVar16;
  PathElement *self_01;
  GameController *newLanguage;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *in_x3;
  CharacterPlayer *pCVar17;
  undefined4 uVar18;
  GameController *pGVar19;
  RecordManager *pRVar20;
  undefined8 uVar21;
  float fVar22;
  Recovered_Vector3 RVar23;
  Recovered_Vector3 RVar24;
  Recovered_Vector3 value;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000002b94d0b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde50);
    NativeHelper_011df0b4(PTR_DAT_029bde58);
    NativeHelper_011df0b4(PTR_DAT_029bde60);
    NativeHelper_011df0b4(PTR_DAT_029bde68);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bde70);
    NativeHelper_011df0b4(PTR_DAT_029bde78);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029bde88);
    NativeHelper_011df0b4(PTR_DAT_029bde90);
    NativeHelper_011df0b4(PTR_DAT_029bde98);
    NativeHelper_011df0b4(PTR_DAT_029bdea0);
    NativeHelper_011df0b4(PTR_DAT_029bdea8);
    NativeHelper_011df0b4(PTR_DAT_029bdeb0);
    bRam0000000002b94d0b = 1;
  }
  uVar2 = _UNK_007a46a8;
  uVar1 = _UNK_007a46a0;
  uVar21 = _UNK_007a3da0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uVar18 = _UNK_007a3dac;
  self->DistanceToChangeAtTemple = (float)_UNK_007a3da8;
  uVar7 = _UNK_007a3da0;
  self->DistanceToChangeAtOther = (float)uVar18;
  _UNK_007a3da0 = (undefined4)uVar21;
  _UNK_007a3da4 = SUB84(uVar21,4);
  uVar18 = _UNK_007a3da4;
  self->DistanceRemainder = (float)_UNK_007a3da0;
  _UNK_007a3da0 = uVar7;
  uVar21 = _UNK_007a46a8;
  self->DistanceTraveled = (float)uVar18;
  _UNK_007a46a8 = (undefined4)uVar2;
  _UNK_007a46ac = SUB84(uVar2,4);
  uVar18 = _UNK_007a46ac;
  self->DistanceToTurnSectionEnd = (float)_UNK_007a46a8;
  _UNK_007a46a8 = uVar21;
  uVar21 = _UNK_007a46a0;
  self->DistanceTraveledSinceLastTurnSection = (float)uVar18;
  _UNK_007a46a0 = (undefined4)uVar1;
  _UNK_007a46a4 = SUB84(uVar1,4);
  uVar18 = _UNK_007a46a4;
  self->DistanceTraveledSinceLastLevelChange = (float)_UNK_007a46a0;
  _UNK_007a46a0 = uVar21;
  self->DistanceToTurnSection = (float)uVar18;
  self->DistanceToChangeDoubleCoins = 1e+09;
  self->DistanceToChangeTripleCoins = 1e+09;
  pCVar12 = self->Player;
  self->AverageScorePerBlock = 100.0;
  if (pCVar12 == (CommonPlayer *)0x0) goto LAB_01392e94;
  (**(code **)(*(long *)pCVar12 + 0x1a8))(pCVar12,*(undefined8 *)(*(long *)pCVar12 + 0x1b0));
  pCVar17 = (CharacterPlayer *)self->Player;
  if (pCVar17 != (CharacterPlayer *)0x0) {
    bVar8 = *(byte *)(*(long *)PTR_DAT_029bde50 + 0x130);
    if (*(byte *)(*(long *)pCVar17 + 0x130) < bVar8) {
      pCVar17 = (CharacterPlayer *)0x0;
    }
    else if (*(long *)(*(long *)(*(long *)pCVar17 + 200) + (ulong)bVar8 * 8 + -8) !=
             *(long *)PTR_DAT_029bde50) {
      pCVar17 = (CharacterPlayer *)0x0;
    }
  }
  self->GamePlayer = pCVar17;
  self->LastBlockScore = 0;
  self->EnemyFollowDistance = 7.5;
  self->IsSwiping = false;
  self->LastSwipeTime = 0.0;
  puVar4 = PTR_DAT_029bdea0;
  puVar5 = PTR_DAT_029bde98;
  if (self->MainCamera == (GameCamera *)0x0) goto LAB_01392e94;
  self->MainCamera->NeedsToDuckCamera = false;
  self->TutorialTextExtraDuration = 0.0;
  self->TimeSinceTutorialSectionEnded = 0.0;
  self->IsResurrecting = false;
  self->MaxDistanceWithoutCoins = 0.0;
  self->LastTurnPathPiece = (PathElement *)0x0;
  self->DidStumble = false;
  self->UsedPowers = false;
  self->TimeSinceCheat = 0.0;
  self->TimeSinceResurrectStart = 0.0;
  self->UsedAngelWingsCount = 0;
  self->UsedAngelWingsPermaCount = 0;
  self->ResurrectionCount = 0;
  self->UsedHeadStart = false;
  self->UsedHeadStartMega = false;
  self->NumBoostsPickedUp = 0;
  self->NumInvisibilityBonusesPickedUp = 0;
  self->ScoreWhenFirstUsedPowers = 0;
  self->NumMagnetBonusesPickedUp = 0;
  *(undefined8 *)((long)&self->NumInvisibilityBonusesPickedUp + 1) = 0;
  self->SaveMeUsedCount = 0;
  self->MaxScoreBeforeFirstSaveMe = 0;
  self->MaxCoinsBeforeFirstSaveMe = 0;
  self->MaxDistBeforeFirstSaveMe = 0;
  self->ShouldPromptForSaveMe = false;
  puVar6 = PTR_DAT_029bde90;
  puVar3 = PTR_DAT_029bde88;
  self->IsPromptingForSaveMe = false;
  self->IsShowingSaveMeVideo = false;
  self->SkippedSaveMeVideo = false;
  self->SaveMePromptTimedOut = false;
  self->ClosedSaveMeVideo = false;
  self->WatchedSavedMeVideo = false;
  self->CancelledSaveMeVideo = false;
  pvVar13 = UnityEngine_PlayerPrefs_GetString_2507a0c(*(void **)puVar4,*(void **)puVar5,(void *)0x0)
  ;
  bVar8 = NativeHelper_01e9b79c(pvVar13,*(undefined8 *)puVar5,0);
  self->IsTutorialMode = (bool)(bVar8 & 1);
  pvVar13 = UnityEngine_PlayerPrefs_GetString_2507a0c(*(void **)puVar3,*(void **)puVar5,(void *)0x0)
  ;
  bVar8 = NativeHelper_01e9b79c(pvVar13,*(undefined8 *)puVar5,0);
  self->UseFriendMarkers = (bool)(bVar8 & 1);
  pvVar13 = UnityEngine_PlayerPrefs_GetString_2507a50(*(void **)puVar6,(void *)0x0);
  uVar14 = NativeHelper_01e9be28(pvVar13,0);
  if ((uVar14 & 1) == 0) {
    self_00 = UnityEngine_PlayerPrefs_GetString_2507a50(*(void **)puVar6,(void *)0x0);
    newLanguage = self_00;
  }
  else {
    lVar15 = NativeHelper_0255188c(0);
    if (lVar15 == 0) goto LAB_01392e94;
    pGVar19 = *(GameController **)(lVar15 + 0x18);
    self_00 = (GameController *)NativeHelper_01e9b79c(pGVar19,*(undefined8 *)PTR_DAT_029bdea8,0);
    newLanguage = *(GameController **)PTR_DAT_029bdeb0;
    if (((ulong)self_00 & 1) == 0) {
      newLanguage = pGVar19;
    }
  }
  puVar5 = PTR_DAT_029bde80;
  GameController_SetLocalizationSystemLanguage_12976f8(self_00,newLanguage,true,in_x3);
  GameController_SetupEnemy_1297958(self,runtimeMethod_00);
  GameController_ResetFriendScores_128fae8(self,runtimeMethod_01);
  uVar21 = NEON_fmov(0x41700000,4);
  self->BoostDistance = 250.0;
  self->VacuumDuration = (float)(int)uVar21;
  self->InvincibilityDuration = (float)(int)((ulong)uVar21 >> 0x20);
  self->CoinBonusValue = 0x32;
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x1c) = 0;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x7,(void *)0x0);
  switch(iVar10) {
  case 1:
    iVar10 = 0x32;
    break;
  case 2:
    iVar10 = 0x4b;
    break;
  case 3:
    iVar10 = 100;
    break;
  case 4:
    iVar10 = 0x7d;
    break;
  case 5:
  case 6:
    iVar10 = 0x96;
    break;
  default:
    lVar15 = *(long *)puVar5;
    goto LAB_013926ec;
  }
  self->CoinBonusValue = iVar10;
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x1c) = 0x3e4ccccd;
LAB_013926ec:
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x20) = 0;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x6,(void *)0x0);
  switch(iVar10) {
  case 1:
    fVar22 = 15.0;
    break;
  case 2:
    fVar22 = 17.5;
    break;
  case 3:
    fVar22 = 20.0;
    break;
  case 4:
    fVar22 = 22.5;
    break;
  case 5:
  case 6:
    fVar22 = 25.0;
    break;
  default:
    lVar15 = *(long *)puVar5;
    goto LAB_013927a8;
  }
  self->InvincibilityDuration = fVar22;
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x20) = 0x3e4ccccd;
LAB_013927a8:
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x24) = 0;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x5,(void *)0x0);
  switch(iVar10) {
  case 1:
    fVar22 = 15.0;
    break;
  case 2:
    fVar22 = 20.0;
    break;
  case 3:
    fVar22 = 20.0;
    goto code_r0x01392830;
  case 4:
    fVar22 = 25.0;
code_r0x01392830:
    iVar10 = 2;
    goto code_r0x01392848;
  case 5:
  case 6:
    fVar22 = 25.0;
    iVar10 = 3;
    goto code_r0x01392848;
  default:
    lVar15 = *(long *)puVar5;
    goto LAB_01392874;
  }
  iVar10 = 1;
code_r0x01392848:
  self->VacuumDuration = fVar22;
  self->CoinMagnetMultiplier = iVar10;
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x24) = 0x3e4ccccd;
LAB_01392874:
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x28) = 0;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x9,(void *)0x0);
  switch(iVar10) {
  case 1:
    fVar22 = 250.0;
    break;
  case 2:
    fVar22 = 375.0;
    break;
  case 3:
    fVar22 = 500.0;
    break;
  case 4:
    fVar22 = 625.0;
    break;
  case 5:
  case 6:
    fVar22 = 750.0;
    break;
  default:
    goto LAB_0139293c;
  }
  self->BoostDistance = fVar22;
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x28) = 0x3e4ccccd;
LAB_0139293c:
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  puVar4 = PTR_DAT_029b9758;
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x8,(void *)0x0);
  pvVar13 = extraout_x1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar4);
    pvVar13 = extraout_x1_00;
  }
  iVar11 = GameController_GetDoubleValueCoinSpawnDistanceForUpgradeLvl_1297b48(iVar10,pvVar13);
  self->DistanceToChangeDoubleCoins = (float)iVar11;
  iVar10 = GameController_GetTripleValueCoinSpawnDistanceForUpgradeLvl_1297bec
                     (iVar10,runtimeMethod_02);
  self->DistanceToChangeTripleCoins = (float)iVar10;
  self->IsNewHighScore = false;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetBestSaveMeScore_12b46a0(pRVar20,iVar10,(void *)0x0);
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar11 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar11 = RecordManager_GetBestScore_12b46b8(pRVar20,iVar11,(void *)0x0);
  if (iVar10 <= iVar11) {
    iVar10 = iVar11;
  }
  self->HighScore = iVar10;
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetLifetimePlays_12b1178(pRVar20,iVar10,(void *)0x0);
  if (iVar10 == 0) {
    self->IsNewHighScore = true;
  }
  lVar15 = *(long *)puVar5;
  bVar9 = self->IsTutorialMode;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  lVar15 = *(long *)(lVar15 + 0xb8);
  *(undefined8 *)(lVar15 + 0x2c) = _UNK_007a3a50;
  uVar21 = _UNK_007a38b0;
  uVar18 = 0xf;
  if (bVar9 != false) {
    uVar18 = 6;
  }
  *(undefined1 *)(lVar15 + 7) = 0;
  *(undefined8 *)(lVar15 + 0x34) = 6;
  *(undefined8 *)(lVar15 + 0xf) = 0x1010100000000;
  *(undefined8 *)(lVar15 + 8) = 0;
  *(undefined4 *)(lVar15 + 0x3c) = uVar18;
  *(undefined8 *)(lVar15 + 0x40) = uVar21;
  if (self->GameInterface == (GameGUI *)0x0) goto LAB_01392e94;
  GameGUI_Reset_12e7c14(self->GameInterface,(void *)0x0);
  GameController_DeleteAnyExistingPath_1297668(self,runtimeMethod_03);
  if ((self->Player == (CommonPlayer *)0x0) ||
     (pvVar13 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar13 == (void *)0x0))
  goto LAB_01392e94;
  UnityEngine_Transform_set_position_25167b0(pvVar13,(Recovered_Vector3)ZEXT412(0),(void *)0x0);
  if ((self->Player == (CommonPlayer *)0x0) ||
     (pvVar13 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar13 == (void *)0x0))
  goto LAB_01392e94;
  UnityEngine_Transform_set_eulerAngles_2516958(pvVar13,(Recovered_Vector3)ZEXT412(0),(void *)0x0);
  pCVar12 = self->Player;
  if (pCVar12 == (CommonPlayer *)0x0) goto LAB_01392e94;
  (**(code **)(*(long *)pCVar12 + 0x1a8))(pCVar12,*(undefined8 *)(*(long *)pCVar12 + 0x1b0));
  pCVar12 = self->Player;
  if (pCVar12 == (CommonPlayer *)0x0) goto LAB_01392e94;
  (**(code **)(*(long *)pCVar12 + 0x188))(pCVar12,1,*(undefined8 *)(*(long *)pCVar12 + 400));
  if (self->PlayerManager == (void *)0x0) goto LAB_01392e94;
  pRVar20 = self->RecordManager;
  iVar10 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
  if (pRVar20 == (RecordManager *)0x0) goto LAB_01392e94;
  iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                     (pRVar20,iVar10,(void *)0x0,(void *)0x0);
  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01392e94;
  self->GamePlayer->AngelWingsCount = iVar10;
  self->IsIntroScene = false;
  if ((self->IsTutorialMode == false) || (self->TutorialID == 0)) {
    self->IsIntroScene = true;
    if ((self->Player == (CommonPlayer *)0x0) ||
       (pvVar13 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar13 == (void *)0x0))
    goto LAB_01392e94;
    UnityEngine_Transform_set_position_25167b0
              (pvVar13,(Recovered_Vector3)(ZEXT412(0xc1200000) << 0x40),(void *)0x0);
    iVar10 = 0x25;
  }
  else {
    iVar10 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar13 = PathElement_Instantiate_130a21c(iVar10,2,(void *)0x0);
  if ((pvVar13 == (void *)0x0) ||
     (pvVar16 = (void *)NativeHelper_02610b98(pvVar13,0), puVar4 = PTR_DAT_029bde70,
     pvVar16 == (void *)0x0)) goto LAB_01392e94;
  UnityEngine_Transform_set_position_25167b0(pvVar16,(Recovered_Vector3)ZEXT412(0),(void *)0x0);
  self_01 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar13,*(void **)puVar4);
  self->PathRoot = self_01;
  if (self_01 == (PathElement *)0x0) goto LAB_01392e94;
  PathElement_UpdateCachedComponents_130f0e0(self_01,(void *)0x0);
  self->PathRootOrigin = 3;
  *(undefined1 *)(*(long *)(*(long *)puVar5 + 0xb8) + 6) = 0;
  if (self->PathRoot == (PathElement *)0x0) goto LAB_01392e94;
  PathElement_AddRandomPath_130fed8(self->PathRoot,6,3,(void *)0x0);
  *(undefined1 *)(*(long *)(*(long *)puVar5 + 0xb8) + 6) = 1;
  if (self->PathRoot == (PathElement *)0x0) goto LAB_01392e94;
  PathElement_AddRandomPath_130fed8(self->PathRoot,8,self->PathRootOrigin,(void *)0x0);
  if (self->IsTutorialMode == false) {
LAB_01392cb4:
    self->StumbleCount = 0;
  }
  else if (self->TutorialID < 5) {
    if (self->PathRoot == (PathElement *)0x0) goto LAB_01392e94;
    PathElement_AddTutorialPath_130f270(self->PathRoot,self->TutorialID,(void *)0x0);
    if (self->IsTutorialMode == false) goto LAB_01392cb4;
  }
  pCVar17 = self->GamePlayer;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar9 = UnityEngine_object_op_Inequality_250c8e4(pCVar17,(void *)0x0,(void *)0x0);
  if (bVar9) {
    pCVar17 = self->GamePlayer;
    if ((pCVar17 == (CharacterPlayer *)0x0) ||
       (pvVar13 = (void *)NativeHelper_0260e1a8(pCVar17,0), pvVar13 == (void *)0x0))
    goto LAB_01392e94;
    RVar23 = UnityEngine_Transform_get_forward_2516be0(pvVar13,(void *)0x0);
    if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01392e94;
    fVar22 = self->GamePlayer->StartRunVelocity;
    *(float *)&pCVar17->field_0x34 = RVar23.component0 * fVar22;
    *(float *)&pCVar17->field_0x38 = RVar23.component1 * fVar22;
    *(float *)&pCVar17->field_0x3c = RVar23.component2 * fVar22;
  }
  puVar4 = PTR_DAT_029bde60;
  puVar5 = PTR_DAT_029bde58;
  if (self->Enemies != (void *)0x0) {
    NativeHelper_01a30500(&uStack_98,self->Enemies,*(undefined8 *)PTR_DAT_029bde78);
    puVar3 = PTR_DAT_029b9368;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while (uVar14 = NativeHelper_0182184c(&uStack_80,*(undefined8 *)puVar4), lVar15 = lStack_70,
          (uVar14 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar13 = (void *)NativeHelper_0260e1a8(lStack_70,0);
      if (cRam0000000002b94510 == '\0') {
        NativeHelper_011df0b4(puVar3);
        cRam0000000002b94510 = '\x01';
      }
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      UnityEngine_Transform_set_eulerAngles_2516958
                (pvVar13,**(Recovered_Vector3 **)(*(long *)puVar3 + 0xb8),(void *)0x0);
      pvVar13 = (void *)NativeHelper_0260e1a8(lVar15,0);
      if (self->Player == (CommonPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar16 = (void *)NativeHelper_0260e1a8(self->Player,0);
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar23 = UnityEngine_Transform_get_position_2516710(pvVar16,(void *)0x0);
      if (self->Player == (CommonPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar16 = (void *)NativeHelper_0260e1a8(self->Player,0);
      if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      RVar24 = UnityEngine_Transform_get_forward_2516be0(pvVar16,(void *)0x0);
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      fVar22 = self->EnemyFollowDistance;
      value.component2 = RVar23.component2 - RVar24.component2 * fVar22;
      value.component1 = RVar23.component1 - RVar24.component1 * fVar22;
      value.component0 = RVar23.component0 - RVar24.component0 * fVar22;
      UnityEngine_Transform_set_position_25167b0(pvVar13,value,(void *)0x0);
    }
    NativeHelper_01821848(&uStack_80,*(undefined8 *)puVar5);
    if (self->Scenery != (SceneryManager *)0x0) {
      SceneryManager_Reset_132234c(self->Scenery,(void *)0x0);
      return;
    }
  }
LAB_01392e94:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

