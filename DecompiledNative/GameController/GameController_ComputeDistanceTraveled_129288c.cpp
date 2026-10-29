// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ComputeDistanceTraveled() { }
// Ghidra address: 0139688c; ELF VA: 0x129688c; file offset: 0x129288c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_ComputeDistanceTraveled_129288c(GameController *self,void *runtimeMethod)

{
  int score;
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  UIWidget *pUVar7;
  GameGUI *pGVar8;
  GameController *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  CommonPlayer *pCVar9;
  uint uVar10;
  CharacterPlayer *pCVar11;
  float fVar12;
  undefined8 in_d1;
  undefined8 uVar13;
  undefined8 in_d2;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  Recovered_Vector3 RVar18;
  Recovered_Vector3 RVar19;
  Recovered_Color value;
  Recovered_Color value_00;
  Recovered_Color value_01;
  Recovered_Color value_02;
  undefined4 uVar14;
  
  puVar3 = PTR_DAT_029b7f98;
  uVar15 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar14 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((bRam0000000002b94d04 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf70);
    NativeHelper_011df0b4(PTR_DAT_029bdf78);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be060);
    NativeHelper_011df0b4(PTR_DAT_029bdea0);
    bRam0000000002b94d04 = 1;
    runtimeMethod = extraout_x1;
  }
  pCVar11 = self->GamePlayer;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pCVar11,(void *)0x0,(void *)0x0);
  if (!bVar4) {
    if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01396d6c;
    if (self->GamePlayer->IsFalling != false) {
      return;
    }
  }
  if ((self->Player != (CommonPlayer *)0x0) &&
     (pvVar5 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar5 != (void *)0x0)) {
    RVar18 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    uVar13 = CONCAT44(uVar14,RVar18.component1);
    if (self->Player != (CommonPlayer *)0x0) {
      pvVar5 = (void *)NativeHelper_0260e1a8
                                 (RVar18.component0,uVar13,CONCAT44(uVar15,RVar18.component2),
                                  self->Player,0);
      uVar14 = (undefined4)((ulong)uVar13 >> 0x20);
      if (pvVar5 != (void *)0x0) {
        RVar19 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
        pCVar9 = self->Player;
        if (pCVar9 != (CommonPlayer *)0x0) {
          fVar16 = (pCVar9->PreviousLocation).component0;
          fVar17 = (pCVar9->PreviousLocation).component2;
          if (cRam0000000002b94d38 == '\0') {
            NativeHelper_011df0b4
                      (RVar19.component0,CONCAT44(uVar14,RVar19.component1),PTR_DAT_029b97c8);
            cRam0000000002b94d38 = '\x01';
          }
          fVar16 = RVar18.component0 - fVar16;
          fVar17 = RVar19.component2 - fVar17;
          if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          fVar2 = _UNK_007a3d40;
          fVar16 = (SQRT(fVar16 * fVar16 + fVar17 * fVar17) / fVar12) * _UNK_007a3d40;
          fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          fVar16 = ((fVar17 / fVar2) * fVar16 * fVar16) / 20.0;
          self->DistanceTraveled = self->DistanceTraveled + fVar16;
          self->DistanceTraveledSinceLastLevelChange =
               self->DistanceTraveledSinceLastLevelChange + fVar16;
          fVar17 = fVar16 + self->DistanceRemainder;
          score = -0x80000000;
          if (fVar17 != INFINITY) {
            score = (int)fVar17;
          }
          self->DistanceTraveledSinceLastTurnSection =
               fVar16 + self->DistanceTraveledSinceLastTurnSection;
          self->DistanceRemainder = fVar17 - (float)score;
          if (self->GamePlayer != (CharacterPlayer *)0x0) {
            CharacterPlayer_AddScore_12be660(self->GamePlayer,score,(void *)0x0);
            pCVar11 = self->GamePlayer;
            if (pCVar11 != (CharacterPlayer *)0x0) {
              if (pCVar11->HasBoost != false) {
                pCVar11->BoostDistanceLeft = pCVar11->BoostDistanceLeft - fVar16;
              }
              if ((self->MaxDistanceWithoutCoins == 0.0) && (0 < pCVar11->CoinCountTotal)) {
                self->MaxDistanceWithoutCoins = self->DistanceTraveled;
              }
              if ((self->ShowTutorialGuides != false) || (self->IsTutorialMode != false)) {
                GameController_HandleTutorialHints_1296ed4(self,runtimeMethod_00);
              }
              if ((self->IsIntroScene != false) || (self->IsTutorialMode == false)) {
                return;
              }
              fVar16 = self->TimeSinceTutorialSectionEnded;
              fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
              fVar16 = fVar16 + fVar17;
              self->TimeSinceTutorialSectionEnded = fVar16;
              puVar3 = PTR_DAT_029bdf70;
              if ((fVar16 <= 1.0) || (3.0 <= fVar16)) {
                if (fVar16 < self->TutorialTextExtraDuration + 3.0) {
                  return;
                }
                if ((self->CurrentTutorialUIGameObject == (void *)0x0) ||
                   (lVar6 = NativeHelper_015070d0
                                      (self->CurrentTutorialUIGameObject,
                                       *(undefined8 *)PTR_DAT_029bdf70), lVar6 == 0))
                goto LAB_01396d6c;
                fVar16 = *(float *)(lVar6 + 0x34);
                fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
                fVar16 = fVar16 - (fVar17 + fVar17);
                if ((fVar16 < 0.0) && (fVar16 = 0.0, 4 < self->TutorialID)) {
                  GameController_SendTutorialEndEvent_12866a4(self,runtimeMethod_01);
                  pGVar8 = self->GameInterface;
                  if (pGVar8 == (GameGUI *)0x0) goto LAB_01396d6c;
                  (**(code **)(*(long *)pGVar8 + 0x188))
                            (pGVar8,1,*(undefined8 *)(*(long *)pGVar8 + 400));
                  if (self->TutorialUIGameObjects == (void *)0x0) goto LAB_01396d6c;
                  NativeHelper_02610c54(self->TutorialUIGameObjects,0,0);
                  self->TutorialID = 0;
                  self->IsTutorialMode = false;
                  self->TutorialDeathCount = 0;
                  UnityEngine_PlayerPrefs_SetString_250797c
                            (*(void **)PTR_DAT_029bdea0,*(void **)PTR_DAT_029be060,(void *)0x0);
                  self->DistanceTraveled = 0.0;
                  self->DistanceTraveledSinceLastLevelChange = 0.0;
                  self->DistanceTraveledSinceLastTurnSection = 0.0;
                  self->MaxDistanceWithoutCoins = 0.0;
                  self->StumbleCount = 0;
                  GameController_SendRunStartEvent_1285794(self_00,runtimeMethod_02);
                }
                if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
                   (pUVar7 = (UIWidget *)
                             NativeHelper_015070d0
                                       (self->CurrentTutorialUIGameObject,*(undefined8 *)puVar3),
                   pUVar7 != (UIWidget *)0x0)) {
                  value_01.component1 = (float)_UNK_007a3ca8;
                  value_01.component0 = (float)_UNK_007a3c84;
                  value_01.component3 = fVar16;
                  value_01.component2 = (float)_UNK_007a3bd4;
                  UIWidget_set_color_1206e5c(pUVar7,value_01,(void *)0x0);
                  if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
                     (pvVar5 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                                         (self->CurrentTutorialUIGameObject,
                                          *(void **)PTR_DAT_029bdf78), pvVar5 != (void *)0x0)) {
                    uVar1 = *(uint *)((long)pvVar5 + 0x18);
                    if ((int)uVar1 < 1) {
                      return;
                    }
                    uVar10 = 0;
                    while (uVar10 < uVar1) {
                      pUVar7 = *(UIWidget **)((long)pvVar5 + (long)(int)uVar10 * 8 + 0x20);
                      if (pUVar7 == (UIWidget *)0x0) goto LAB_01396d6c;
                      value_02.component1 = fVar16;
                      value_02.component0 = fVar16;
                      value_02.component3 = fVar16;
                      value_02.component2 = fVar16;
                      UIWidget_set_color_1206e5c(pUVar7,value_02,(void *)0x0);
                      uVar1 = *(uint *)((long)pvVar5 + 0x18);
                      uVar10 = uVar10 + 1;
                      if ((int)uVar1 <= (int)uVar10) {
                        return;
                      }
                    }
LAB_01396d70:
                    /* WARNING: Subroutine does not return */
                    NativeHelper_011df2e4();
                  }
                }
              }
              else if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
                      (lVar6 = NativeHelper_015070d0
                                         (self->CurrentTutorialUIGameObject,
                                          *(undefined8 *)PTR_DAT_029bdf70), lVar6 != 0)) {
                fVar17 = *(float *)(lVar6 + 0x34);
                fVar16 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
                if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
                   (pUVar7 = (UIWidget *)
                             NativeHelper_015070d0
                                       (self->CurrentTutorialUIGameObject,*(undefined8 *)puVar3),
                   pUVar7 != (UIWidget *)0x0)) {
                  fVar17 = fVar17 + fVar16 * 4.0;
                  if (1.0 < fVar17) {
                    fVar17 = 1.0;
                  }
                  value.component1 = (float)_UNK_007a3ca8;
                  value.component0 = (float)_UNK_007a3c84;
                  value.component3 = fVar17;
                  value.component2 = (float)_UNK_007a3bd4;
                  UIWidget_set_color_1206e5c(pUVar7,value,(void *)0x0);
                  if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
                     (pvVar5 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                                         (self->CurrentTutorialUIGameObject,
                                          *(void **)PTR_DAT_029bdf78), pvVar5 != (void *)0x0)) {
                    uVar1 = *(uint *)((long)pvVar5 + 0x18);
                    if ((int)uVar1 < 1) {
                      return;
                    }
                    uVar10 = 0;
                    while (uVar10 < uVar1) {
                      pUVar7 = *(UIWidget **)((long)pvVar5 + (long)(int)uVar10 * 8 + 0x20);
                      if (pUVar7 == (UIWidget *)0x0) goto LAB_01396d6c;
                      value_00.component1 = fVar17;
                      value_00.component0 = fVar17;
                      value_00.component3 = fVar17;
                      value_00.component2 = fVar17;
                      UIWidget_set_color_1206e5c(pUVar7,value_00,(void *)0x0);
                      uVar1 = *(uint *)((long)pvVar5 + 0x18);
                      uVar10 = uVar10 + 1;
                      if ((int)uVar1 <= (int)uVar10) {
                        return;
                      }
                    }
                    goto LAB_01396d70;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01396d6c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

