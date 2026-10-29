// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleEndGame() { }
// Ghidra address: 0139a820; ELF VA: 0x129a820; file offset: 0x1296820
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleEndGame_1296820(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  long lVar3;
  TRUserAttributes *self_00;
  GameGUI *pGVar4;
  AwardedObjectives *pAVar5;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar6;
  void *pvVar7;
  RecordManager *self_01;
  
  if ((bRam0000000002b94d0e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029bdb90);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdd08);
    bRam0000000002b94d0e = 1;
    runtimeMethod = extraout_x1;
  }
  GameController_EndOfRunAdInitRetryGate_1289f3c(self,runtimeMethod);
  self->HandelingEndGame = true;
  if (self->IsTutorialMode != false) {
    return;
  }
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    if (self->GamePlayer->CoinCountTotal == 0) {
      self->MaxDistanceWithoutCoins = self->DistanceTraveled;
    }
    GameController_UpdateAndSaveRecords_1297c90(self,runtimeMethod_00);
    GameController_SendRunEndEvent_1285858(self,runtimeMethod_01);
    puVar1 = PTR_DAT_029bd9d0;
    lVar3 = *(long *)PTR_DAT_029bd9d0;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar3 = *(long *)puVar1;
    }
    self_00 = *(TRUserAttributes **)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (self_00 != (TRUserAttributes *)0x0) {
      TRUserAttributes_Update_12b9e78(self_00,(void *)0x0);
      puVar1 = PTR_DAT_029bd310;
      lVar3 = *(long *)PTR_DAT_029bd310;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar3 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_029bdb90;
      if (**(long **)(lVar3 + 0xb8) != 0) {
        if (*(char *)(**(long **)(lVar3 + 0xb8) + 0x30) != '\0') {
          pvVar7 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029bdb90 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
          if (bVar2) {
            if ((EndGameUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8) == (EndGameUI *)0x0)
            goto LAB_0139a9b8;
            EndGameUI_CacheInterstitial_12e4218
                      ((EndGameUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8),
                       *(void **)PTR_DAT_029bdd08,(void *)0x0);
          }
        }
        pGVar4 = self->GameInterface;
        if (pGVar4 != (GameGUI *)0x0) {
          (**(code **)(*(long *)pGVar4 + 0x198))(pGVar4,*(undefined8 *)(*(long *)pGVar4 + 0x1a0));
          puVar1 = PTR_DAT_029b7f98;
          pAVar5 = self->GameOverInterface;
          if (pAVar5 != (AwardedObjectives *)0x0) {
            if ((bRam0000000002b94f9a & 1) == 0) {
              NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
              bRam0000000002b94f9a = 1;
            }
            (**(code **)(*(long *)pAVar5 + 0x1a8))
                      (pAVar5,0,*(undefined8 *)(*(long *)pAVar5 + 0x1b0));
            pvVar7 = *(void **)&pAVar5->field_0x30;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
            puVar1 = PTR_DAT_029bdbe8;
            if (bVar2) {
              lVar3 = *(long *)&pAVar5->field_0x30;
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2dc();
              }
              if ((bRam0000000002b95097 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
                bRam0000000002b95097 = 1;
              }
              lVar3 = NativeHelper_0260e1e4(lVar3,0);
              lVar6 = *(long *)puVar1;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                NativeHelper_011df1bc(lVar6);
                lVar6 = *(long *)puVar1;
              }
              self_01 = (RecordManager *)**(undefined8 **)(lVar6 + 0xb8);
              pvVar7 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
              if (pvVar7 != (void *)0x0) {
                inPlayerID = PlayerManager_GetActivePlayer_12ccc8c(pvVar7,(void *)0x0);
                if (self_01 != (RecordManager *)0x0) {
                  bVar2 = RecordManager_GetNoAds_12b479c(self_01,inPlayerID,(void *)0x0);
                  if (lVar3 != 0) {
                    if (pcRam0000000002b9cda0 == (code *)0x0) {
                      pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
                    }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000002b9cda0)(lVar3,~bVar2 & 1);
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            return;
          }
        }
      }
    }
  }
LAB_0139a9b8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

