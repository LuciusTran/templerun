// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateAndSaveRecords() { }
// Ghidra address: 0139bc90; ELF VA: 0x129bc90; file offset: 0x1297c90
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013b5da4) */

void GameController_UpdateAndSaveRecords_1297c90(GameController *self,void *runtimeMethod)

{
  int distance;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  Warble *self_00;
  void *pvVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  CharacterPlayer *pCVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  RecordManager *pRVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined4 auStackY_54 [3];
  void *pvStackY_48;
  
  if ((bRam0000000002b94d0d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    bRam0000000002b94d0d = 1;
  }
  if (self->DebugHyperCoins != false) {
    bVar4 = DebugEx_get_isDebugBuild_1323ae8((void *)0x0);
    if (!bVar4) {
      if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_Application_get_isEditor_24e728c((void *)0x0);
      if (!bVar4) goto LAB_0139bd10;
    }
    pCVar18 = self->GamePlayer;
    if (pCVar18 == (CharacterPlayer *)0x0) goto LAB_0139bda4;
    pCVar18->CoinCountTotal = pCVar18->CoinCountTotal * 1000;
  }
LAB_0139bd10:
  if (self->PlayerManager != (void *)0x0) {
    pRVar22 = self->RecordManager;
    iVar5 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    pCVar18 = self->GamePlayer;
    if ((pCVar18 != (CharacterPlayer *)0x0) && (pRVar22 != (RecordManager *)0x0)) {
      distance = -0x80000000;
      if (self->DistanceTraveled != INFINITY) {
        distance = (int)self->DistanceTraveled;
      }
      RecordManager_UpdateRecordsForSession_12b4248
                (pRVar22,iVar5,pCVar18->Score,pCVar18->CoinCountTotal,distance,
                 self->MaxScoreBeforeFirstSaveMe,self->MaxCoinsBeforeFirstSaveMe,
                 self->MaxDistBeforeFirstSaveMe,0 < self->SaveMeUsedCount,(void *)0x0);
      GameController_UpdateAchievementRecords_1297da8(self,runtimeMethod_00);
      puVar3 = PTR_DAT_029beed0;
      puVar2 = PTR_DAT_029b8a00;
      pRVar22 = self->RecordManager;
      if (pRVar22 != (RecordManager *)0x0) {
        auVar24._8_8_ = 0;
        auVar24._0_8_ = pRVar22;
        if ((bRam0000000002b94dd1 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029beed0);
          NativeHelper_011df0b4(PTR_DAT_029b8028);
          NativeHelper_011df0b4(PTR_DAT_029b8bc0);
          NativeHelper_011df0b4(PTR_DAT_029b8a00);
          auVar24 = NativeHelper_011df0b4(PTR_DAT_029bee38);
          bRam0000000002b94dd1 = 1;
        }
        puVar1 = PTR_DAT_029b8028;
        pvStackY_48 = (void *)0x0;
        pvVar6 = RecordManager_GetDummyFileName_12b12e0(auVar24._0_8_,auVar24._8_8_);
        NativeHelper_01f66530(pvVar6,0);
        plVar7 = (long *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
        NativeHelper_01f5ac30(plVar7,0);
        lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
        NativeHelper_01f292c4(lVar8,0);
        auStackY_54[0] = 1;
        uVar9 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,auStackY_54);
        if (lVar8 != 0) {
          NativeHelper_01f29994(lVar8,plVar7,uVar9,0);
          NativeHelper_01f29994(lVar8,plVar7,pRVar22->PlayerRecords,0);
          NativeHelper_01f29994(lVar8,plVar7,pRVar22->AchievementRecords,0);
          NativeHelper_01f29994(lVar8,plVar7,pRVar22->FriendScores,0);
          NativeHelper_01f29994(lVar8,plVar7,pRVar22->AppVersion,0);
          pvVar6 = RecordManager_GetFileName_12b1190(pRVar22,runtimeMethod_01);
          pvVar10 = RecordManager_GetAltFileName_12b1224(pRVar22,runtimeMethod_02);
          self_00 = (Warble *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bee38);
          Warble_Warble_1212c40(self_00,0x1428c,(void *)0x0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvStackY_48 = (void *)(**(code **)(*plVar7 + 0x388))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x390));
          if (self_00 == (Warble *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar11 = Warble_BlabidyJibber_121336c(self_00,&pvStackY_48,(void *)0x0);
          plVar12 = (long *)NativeHelper_01f66484(pvVar10,0);
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          (**(code **)(*plVar12 + 0x358))
                    (plVar12,pvVar11,0,*(undefined4 *)((long)pvVar11 + 0x18),
                     *(undefined8 *)(*plVar12 + 0x360));
          (**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
          lVar8 = 0;
          do {
            lVar19 = *plVar12;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                  puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x013b59f0;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar13 = (undefined8 *)NativeHelper_011b5528(plVar12,*(long *)puVar1,0);
code_r0x013b59f0:
            (*(code *)*puVar13)(plVar12,puVar13[1]);
            do {
              if (lVar8 == 0) goto code_r0x013b5a00;
              auVar23 = NativeHelper_011df2d4(lVar8);
              iVar5 = auVar23._8_4_;
              uVar9 = auVar23._0_8_;
              if (iVar5 != 1) {
                if (plVar12 == (long *)0x0) goto code_r0x013b5c68;
                lVar8 = *plVar12;
                uVar20 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar20 == 0) goto code_r0x013b5c40;
                piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                goto code_r0x013b5c28;
              }
              plVar14 = (long *)NativeHelper_02861460(uVar9);
              lVar8 = *plVar14;
              NativeHelper_02861470();
            } while (plVar12 == (long *)0x0);
          } while( true );
        }
code_r0x013b5a9c:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
LAB_0139bda4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
code_r0x013b5c28:
    if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar21 * 0x10 + 0x138);
      goto code_r0x013b5c5c;
    }
  }
code_r0x013b5c40:
  puVar13 = (undefined8 *)NativeHelper_011b5528(plVar12,*(long *)puVar1,0);
code_r0x013b5c5c:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
code_r0x013b5c68:
  if (iVar5 == 1) {
    puVar13 = (undefined8 *)NativeHelper_02861460(uVar9);
    uVar9 = NativeHelper_011df0c8(PTR_DAT_029b8638);
    uVar20 = NativeHelper_011df708(uVar9,*(undefined8 *)*puVar13);
    if ((uVar20 & 1) == 0) {
      puVar17 = (undefined8 *)NativeHelper_02861480(8);
      *puVar17 = *puVar13;
      NativeHelper_02861490(puVar17,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__028677c8,0);
code_r0x013b5da0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    plVar12 = (long *)*puVar13;
    NativeHelper_02861470();
    if (plVar12 == (long *)0x0) {
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029beee0);
      uVar15 = 0;
    }
    else {
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029beee0);
      uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    }
    pvVar11 = (void *)NativeHelper_01e92d00(uVar9,uVar15,0);
    DebugEx_Log_13222f4(pvVar11,(void *)0x0);
    if (plVar12 == (long *)0x0) goto code_r0x013b5da0;
    uVar9 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    uVar15 = NativeHelper_011df0c8(PTR_DAT_029beee8);
    uVar9 = NativeHelper_01e92d00(uVar15,uVar9,0);
    lVar8 = NativeHelper_011df0c8(PTR_DAT_029b8ba8);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar15 = NativeHelper_011df0c8(PTR_DAT_029beef0);
    uVar16 = NativeHelper_011df0c8(PTR_DAT_029bee60);
    NativeHelper_012ddf68(uVar15,uVar9,uVar16,0);
code_r0x013b5a00:
    NativeHelper_01f65e9c(pvVar10,pvVar6,1,0);
    lVar8 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar20 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
              puVar13 = (undefined8 *)(lVar8 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x013b5e70;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar13 = (undefined8 *)NativeHelper_011b5528(plVar7,*(long *)puVar1,0);
code_r0x013b5e70:
        (*(code *)*puVar13)(plVar7,puVar13[1]);
      }
      NativeHelper_012c28d8(uVar9);
      NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
      NativeHelper_010689ac();
    }
    plVar12 = (long *)NativeHelper_02861460(uVar9);
    lVar8 = *plVar12;
    NativeHelper_02861470();
  }
  if (plVar7 != (long *)0x0) {
    lVar19 = *plVar7;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x013b5a68;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)NativeHelper_011b5528(plVar7,*(long *)puVar1,0);
code_r0x013b5a68:
    (*(code *)*puVar13)(plVar7,puVar13[1]);
  }
  if (lVar8 == 0) {
    return;
  }
  NativeHelper_011df2d4(lVar8);
  goto code_r0x013b5a9c;
}

