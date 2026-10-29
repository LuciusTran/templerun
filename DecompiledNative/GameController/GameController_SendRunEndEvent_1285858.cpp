// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SendRunEndEvent() { }
// Ghidra address: 01389858; ELF VA: 0x1289858; file offset: 0x1285858
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SendRunEndEvent_1285858(GameController *self,void *runtimeMethod)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  void *inParameterValue;
  void *pvVar12;
  long *plVar13;
  Imangi_Analytics_EventParameter *pIVar14;
  undefined8 uVar15;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  uint uVar16;
  CharacterPlayer *pCVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  PathElement *pPVar21;
  RecordManager *self_00;
  uint *puVar22;
  void *inParameterName;
  int iVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar4 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94caa & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bd9f8);
    NativeHelper_011df0b4(PTR_DAT_029bda00);
    NativeHelper_011df0b4(PTR_DAT_029bda08);
    NativeHelper_011df0b4(PTR_DAT_029bda10);
    NativeHelper_011df0b4(PTR_DAT_029bda18);
    NativeHelper_011df0b4(PTR_DAT_029bda20);
    NativeHelper_011df0b4(PTR_DAT_029bda28);
    NativeHelper_011df0b4(PTR_DAT_029bda30);
    NativeHelper_011df0b4(PTR_DAT_029bda38);
    NativeHelper_011df0b4(PTR_DAT_029bda40);
    NativeHelper_011df0b4(PTR_DAT_029bda48);
    NativeHelper_011df0b4(PTR_DAT_029bda50);
    NativeHelper_011df0b4(PTR_DAT_029bda58);
    NativeHelper_011df0b4(PTR_DAT_029bda60);
    NativeHelper_011df0b4(PTR_DAT_029bda68);
    NativeHelper_011df0b4(PTR_DAT_029bda70);
    NativeHelper_011df0b4(PTR_DAT_029bda78);
    NativeHelper_011df0b4(PTR_DAT_029bda80);
    NativeHelper_011df0b4(PTR_DAT_029bda88);
    NativeHelper_011df0b4(PTR_DAT_029bda90);
    NativeHelper_011df0b4(PTR_DAT_029bda98);
    NativeHelper_011df0b4(PTR_DAT_029bdaa0);
    NativeHelper_011df0b4(PTR_DAT_029bdaa8);
    bRam0000000002b94caa = 1;
    runtimeMethod = extraout_x1;
  }
  lVar9 = *(long *)puVar4;
  fVar27 = self->TimeSinceGameStart;
  fVar28 = self->EndGameDelayTime;
  pPVar21 = self->NearestElement;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar9,runtimeMethod);
  }
  bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar21,(void *)0x0,(void *)0x0);
  if (bVar7) {
    pPVar21 = self->NearestElement;
joined_r0x01389a48:
    if (pPVar21 == (PathElement *)0x0) goto LAB_0138a3e4;
    iVar23 = pPVar21->Type;
  }
  else {
    pPVar21 = self->LastNearestElement;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar21,(void *)0x0,(void *)0x0);
    if (bVar7) {
      pPVar21 = self->LastNearestElement;
      goto joined_r0x01389a48;
    }
    iVar23 = 0;
  }
  if (self->PlayerManager != (void *)0x0) {
    self_00 = self->RecordManager;
    iVar8 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (self_00 != (RecordManager *)0x0) {
      iVar8 = RecordManager_GetLifetimePlays_12b1178(self_00,iVar8,(void *)0x0);
      pCVar17 = self->GamePlayer;
      if (pCVar17 != (CharacterPlayer *)0x0) {
        fVar26 = pCVar17->DeathRunVelocity;
        pvVar10 = TRAnalyticsHelper_GetDeathTypeName_12b8eb0
                            ((void *)(ulong)*(uint *)&pCVar17->field_0xe0,(void *)0x0);
        pvVar11 = TRAnalyticsHelper_GetPathLevelName_12b8f7c(self->LastLevel,(void *)0x0);
        inParameterValue = TRAnalyticsHelper_GetPathTypeName_12b9008(iVar23,(void *)0x0);
        puVar4 = PTR_DAT_029bd9e8;
        if (self->GamePlayer != (CharacterPlayer *)0x0) {
          pvVar12 = TRAnalyticsHelper_GetCharacterName_12b90e8
                              (self->GamePlayer->ActiveCharacterId,(void *)0x0);
          bVar7 = self->UsedHeadStart;
          bVar2 = self->UsedHeadStartMega;
          plVar13 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar4,0x17);
          if (cRam0000000002b94d2f == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029bcb50);
            cRam0000000002b94d2f = '\x01';
          }
          puVar5 = PTR_DAT_029bd9f0;
          puVar4 = PTR_DAT_029bcb50;
          lVar9 = *(long *)PTR_DAT_029bcb50;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar9 = *(long *)puVar4;
          }
          inParameterName = *(void **)(*(long *)(lVar9 + 0xb8) + 0x168);
          pIVar14 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar5);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar14,inParameterName,pvVar12,(void *)0x0);
          if (plVar13 != (long *)0x0) {
            if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)
               ) goto LAB_0138a3d8;
            puVar22 = (uint *)(plVar13 + 3);
            if (*puVar22 == 0) goto LAB_0138a3d4;
            plVar13[4] = (long)pIVar14;
            if (cRam0000000002b94d30 == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029bcb50);
              cRam0000000002b94d30 = '\x01';
            }
            lVar9 = *(long *)puVar4;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              lVar9 = *(long *)puVar4;
            }
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0138a3e4;
            iVar3 = self->GamePlayer->Score;
            pvVar12 = *(void **)(*(long *)(lVar9 + 0xb8) + 0x2c0);
            pIVar14 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar5);
            Imangi_Analytics_EventParameter_EventParameter_126b5b4
                      (pIVar14,pvVar12,(long)iVar3,(void *)0x0);
            if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)
               ) goto LAB_0138a3d8;
            if (*puVar22 < 2) goto LAB_0138a3d4;
            plVar13[5] = (long)pIVar14;
            puVar6 = PTR_DAT_029bda10;
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_0138a3e4;
            iVar3 = self->GamePlayer->CoinCountTotal;
            pIVar14 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar5);
            Imangi_Analytics_EventParameter_EventParameter_126b5b4
                      (pIVar14,*(void **)puVar6,(long)iVar3,(void *)0x0);
            if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)
               ) {
LAB_0138a3d8:
              uVar15 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df1ac(uVar15,0);
            }
            if (2 < *puVar22) {
              plVar13[6] = (long)pIVar14;
              puVar6 = PTR_DAT_029bda90;
              fVar29 = self->DistanceTraveled;
              pIVar14 = (Imangi_Analytics_EventParameter *)
                        NativeHelper_011df2d0(*(undefined8 *)puVar5);
              lVar1 = -0x80000000;
              if (fVar29 != INFINITY) {
                lVar1 = (long)(int)fVar29;
              }
              Imangi_Analytics_EventParameter_EventParameter_126b5b4
                        (pIVar14,*(void **)puVar6,lVar1,(void *)0x0);
              if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                 lVar9 == 0)) goto LAB_0138a3d8;
              if (3 < *puVar22) {
                plVar13[7] = (long)pIVar14;
                puVar6 = PTR_DAT_029bda68;
                fVar27 = fVar27 - fVar28;
                pIVar14 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar5);
                lVar1 = -0x80000000;
                if (fVar27 != INFINITY) {
                  lVar1 = (long)(int)fVar27;
                }
                Imangi_Analytics_EventParameter_EventParameter_126b5b4
                          (pIVar14,*(void **)puVar6,lVar1,(void *)0x0);
                if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar9 == 0)) goto LAB_0138a3d8;
                if (4 < *puVar22) {
                  plVar13[8] = (long)pIVar14;
                  puVar6 = PTR_DAT_029bda28;
                  iVar3 = self->StumbleCount;
                  pIVar14 = (Imangi_Analytics_EventParameter *)
                            NativeHelper_011df2d0(*(undefined8 *)puVar5);
                  Imangi_Analytics_EventParameter_EventParameter_126b5b4
                            (pIVar14,*(void **)puVar6,(long)iVar3,(void *)0x0);
                  if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar9 == 0)) goto LAB_0138a3d8;
                  if (5 < *puVar22) {
                    plVar13[9] = (long)pIVar14;
                    puVar6 = PTR_DAT_029bda58;
                    pIVar14 = (Imangi_Analytics_EventParameter *)
                              NativeHelper_011df2d0(*(undefined8 *)puVar5);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar14,*(void **)puVar6,pvVar10,(void *)0x0);
                    if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar9 == 0)) goto LAB_0138a3d8;
                    if (6 < *puVar22) {
                      plVar13[10] = (long)pIVar14;
                      puVar6 = PTR_DAT_029bda98;
                      pIVar14 = (Imangi_Analytics_EventParameter *)
                                NativeHelper_011df2d0(*(undefined8 *)puVar5);
                      Imangi_Analytics_EventParameter_EventParameter_126b488
                                (pIVar14,*(void **)puVar6,pvVar11,(void *)0x0);
                      if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar9 == 0)) goto LAB_0138a3d8;
                      if (7 < *puVar22) {
                        plVar13[0xb] = (long)pIVar14;
                        puVar6 = PTR_DAT_029bda80;
                        pIVar14 = (Imangi_Analytics_EventParameter *)
                                  NativeHelper_011df2d0(*(undefined8 *)puVar5);
                        Imangi_Analytics_EventParameter_EventParameter_126b488
                                  (pIVar14,*(void **)puVar6,inParameterValue,(void *)0x0);
                        if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                           (lVar9 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar9 == 0)) goto LAB_0138a3d8;
                        if (8 < *puVar22) {
                          plVar13[0xc] = (long)pIVar14;
                          puVar6 = PTR_DAT_029bdaa8;
                          pIVar14 = (Imangi_Analytics_EventParameter *)
                                    NativeHelper_011df2d0(*(undefined8 *)puVar5);
                          Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                    (pIVar14,*(void **)puVar6,(long)iVar23,(void *)0x0);
                          if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                             (lVar9 = NativeHelper_011df1c0
                                                (pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar9 == 0)) goto LAB_0138a3d8;
                          if (9 < *puVar22) {
                            plVar13[0xd] = (long)pIVar14;
                            puVar6 = PTR_DAT_029bda38;
                            pIVar14 = (Imangi_Analytics_EventParameter *)
                                      NativeHelper_011df2d0(*(undefined8 *)puVar5);
                            Imangi_Analytics_EventParameter_EventParameter_126b674
                                      (pIVar14,*(void **)puVar6,(double)fVar26,(void *)0x0);
                            if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                               (lVar9 = NativeHelper_011df1c0
                                                  (pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                               lVar9 == 0)) goto LAB_0138a3d8;
                            if (10 < *puVar22) {
                              plVar13[0xe] = (long)pIVar14;
                              puVar6 = PTR_DAT_029bd9f8;
                              pIVar14 = (Imangi_Analytics_EventParameter *)
                                        NativeHelper_011df2d0(*(undefined8 *)puVar5);
                              Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                        (pIVar14,*(void **)puVar6,(ulong)bVar7,(void *)0x0);
                              if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                 (lVar9 = NativeHelper_011df1c0
                                                    (pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                                 lVar9 == 0)) goto LAB_0138a3d8;
                              if (0xb < *puVar22) {
                                plVar13[0xf] = (long)pIVar14;
                                puVar6 = PTR_DAT_029bda08;
                                pIVar14 = (Imangi_Analytics_EventParameter *)
                                          NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                          (pIVar14,*(void **)puVar6,(ulong)bVar2,(void *)0x0);
                                if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                   (lVar9 = NativeHelper_011df1c0
                                                      (pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                                   lVar9 == 0)) goto LAB_0138a3d8;
                                if (0xc < *puVar22) {
                                  plVar13[0x10] = (long)pIVar14;
                                  puVar6 = PTR_DAT_029bda30;
                                  iVar23 = self->UsedAngelWingsCount;
                                  pIVar14 = (Imangi_Analytics_EventParameter *)
                                            NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                  Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                            (pIVar14,*(void **)puVar6,(long)iVar23,(void *)0x0);
                                  if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                     (lVar9 = NativeHelper_011df1c0
                                                        (pIVar14,*(undefined8 *)(*plVar13 + 0x40)),
                                     lVar9 == 0)) goto LAB_0138a3d8;
                                  if (0xd < *puVar22) {
                                    plVar13[0x11] = (long)pIVar14;
                                    puVar6 = PTR_DAT_029bda60;
                                    iVar23 = self->UsedAngelWingsPermaCount;
                                    pIVar14 = (Imangi_Analytics_EventParameter *)
                                              NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                    Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                              (pIVar14,*(void **)puVar6,(long)iVar23,(void *)0x0);
                                    if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                       (lVar9 = NativeHelper_011df1c0
                                                          (pIVar14,*(undefined8 *)(*plVar13 + 0x40))
                                       , lVar9 == 0)) goto LAB_0138a3d8;
                                    if (0xe < *puVar22) {
                                      plVar13[0x12] = (long)pIVar14;
                                      puVar6 = PTR_DAT_029bda50;
                                      iVar23 = self->NumMagnetBonusesPickedUp;
                                      pIVar14 = (Imangi_Analytics_EventParameter *)
                                                NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                      Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                (pIVar14,*(void **)puVar6,(long)iVar23,(void *)0x0);
                                      if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                         (lVar9 = NativeHelper_011df1c0
                                                            (pIVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40)), lVar9 == 0
                                         )) goto LAB_0138a3d8;
                                      if (0xf < *puVar22) {
                                        plVar13[0x13] = (long)pIVar14;
                                        puVar6 = PTR_DAT_029bdaa0;
                                        iVar23 = self->NumMegaCoinsPickedUp;
                                        pIVar14 = (Imangi_Analytics_EventParameter *)
                                                  NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                        Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                  (pIVar14,*(void **)puVar6,(long)iVar23,(void *)0x0
                                                  );
                                        if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                           (lVar9 = NativeHelper_011df1c0
                                                              (pIVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                           lVar9 == 0)) goto LAB_0138a3d8;
                                        if (0x10 < *puVar22) {
                                          plVar13[0x14] = (long)pIVar14;
                                          puVar6 = PTR_DAT_029bda00;
                                          iVar23 = self->NumInvisibilityBonusesPickedUp;
                                          pIVar14 = (Imangi_Analytics_EventParameter *)
                                                    NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                          Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                    (pIVar14,*(void **)puVar6,(long)iVar23,
                                                     (void *)0x0);
                                          if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
                                             (lVar9 = NativeHelper_011df1c0
                                                                (pIVar14,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                             lVar9 == 0)) goto LAB_0138a3d8;
                                          if (0x11 < *puVar22) {
                                            plVar13[0x15] = (long)pIVar14;
                                            puVar6 = PTR_DAT_029bda40;
                                            iVar23 = self->NumBoostsPickedUp;
                                            pIVar14 = (Imangi_Analytics_EventParameter *)
                                                      NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                            Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                      (pIVar14,*(void **)puVar6,(long)iVar23,
                                                       (void *)0x0);
                                            if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0)
                                               && (lVar9 = NativeHelper_011df1c0
                                                                     (pIVar14,*(undefined8 *)
                                                                               (*plVar13 + 0x40)),
                                                  lVar9 == 0)) goto LAB_0138a3d8;
                                            if (0x12 < *puVar22) {
                                              plVar13[0x16] = (long)pIVar14;
                                              puVar6 = PTR_DAT_029bda48;
                                              iVar23 = self->ResurrectionCount;
                                              pIVar14 = (Imangi_Analytics_EventParameter *)
                                                        NativeHelper_011df2d0(*(undefined8 *)puVar5)
                                              ;
                                              Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                        (pIVar14,*(void **)puVar6,(long)iVar23,
                                                         (void *)0x0);
                                              if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0
                                                  ) && (lVar9 = NativeHelper_011df1c0
                                                                          (pIVar14,*(undefined8 *)
                                                                                    (*plVar13 + 0x40
                                                                                    )), lVar9 == 0))
                                              goto LAB_0138a3d8;
                                              if (0x13 < *puVar22) {
                                                plVar13[0x17] = (long)pIVar14;
                                                puVar6 = PTR_DAT_029bda78;
                                                iVar23 = self->SaveMeUsedCount;
                                                pIVar14 = (Imangi_Analytics_EventParameter *)
                                                          NativeHelper_011df2d0
                                                                    (*(undefined8 *)puVar5);
                                                Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                          (pIVar14,*(void **)puVar6,(long)iVar23,
                                                           (void *)0x0);
                                                if ((pIVar14 !=
                                                     (Imangi_Analytics_EventParameter *)0x0) &&
                                                   (lVar9 = NativeHelper_011df1c0
                                                                      (pIVar14,*(undefined8 *)
                                                                                (*plVar13 + 0x40)),
                                                   lVar9 == 0)) goto LAB_0138a3d8;
                                                if (0x14 < *puVar22) {
                                                  plVar13[0x18] = (long)pIVar14;
                                                  puVar6 = PTR_DAT_029bda88;
                                                  if (self->GamePlayer == (CharacterPlayer *)0x0)
                                                  goto LAB_0138a3e4;
                                                  iVar23 = self->GamePlayer->ScoreMultiplier;
                                                  pIVar14 = (Imangi_Analytics_EventParameter *)
                                                            NativeHelper_011df2d0
                                                                      (*(undefined8 *)puVar5);
                                                  Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                            (pIVar14,*(void **)puVar6,(long)iVar23,
                                                             (void *)0x0);
                                                  if ((pIVar14 !=
                                                       (Imangi_Analytics_EventParameter *)0x0) &&
                                                     (lVar9 = NativeHelper_011df1c0
                                                                        (pIVar14,*(undefined8 *)
                                                                                  (*plVar13 + 0x40))
                                                     , lVar9 == 0)) goto LAB_0138a3d8;
                                                  if (0x15 < *puVar22) {
                                                    plVar13[0x19] = (long)pIVar14;
                                                    puVar6 = PTR_DAT_029bda70;
                                                    pIVar14 = (Imangi_Analytics_EventParameter *)
                                                              NativeHelper_011df2d0
                                                                        (*(undefined8 *)puVar5);
                                                                                                        
                                                  Imangi_Analytics_EventParameter_EventParameter_126b5b4
                                                            (pIVar14,*(void **)puVar6,(long)iVar8,
                                                             (void *)0x0);
                                                  if ((pIVar14 !=
                                                       (Imangi_Analytics_EventParameter *)0x0) &&
                                                     (lVar9 = NativeHelper_011df1c0
                                                                        (pIVar14,*(undefined8 *)
                                                                                  (*plVar13 + 0x40))
                                                     , lVar9 == 0)) goto LAB_0138a3d8;
                                                  puVar5 = PTR_DAT_029bd9d0;
                                                  if (0x16 < *puVar22) {
                                                    plVar13[0x1a] = (long)pIVar14;
                                                    puVar6 = PTR_DAT_029bda18;
                                                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                                      NativeHelper_011df1bc();
                                                    }
                                                    TRAnalytics_LogEvent_12b7164
                                                              (*(void **)puVar6,plVar13,(void *)0x0)
                                                    ;
                                                    if (cRam0000000002b94d31 == '\0') {
                                                      NativeHelper_011df0b4(PTR_DAT_029bcb50);
                                                      cRam0000000002b94d31 = '\x01';
                                                    }
                                                    lVar9 = *(long *)puVar4;
                                                    if (*(int *)(lVar9 + 0xe0) == 0) {
                                                      NativeHelper_011df1bc();
                                                      lVar9 = *(long *)puVar4;
                                                    }
                                                    TRAnalytics_LogEvent_12b7164
                                                              (*(void **)(*(long *)(lVar9 + 0xb8) +
                                                                         0x78),plVar13,(void *)0x0);
                                                    if (iVar8 == 1) {
                                                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                                                        NativeHelper_011df1bc();
                                                      }
                                                      TRAnalytics_LogEvent_12b7164
                                                                (*(void **)PTR_DAT_029bda20,plVar13,
                                                                 (void *)0x0);
                                                    }
                                                    TRAnalyticsHelper_UpdateLifetimeRuns_12b9b78
                                                              (iVar8,(void *)0x0);
                                                    if ((bRam0000000002b94cb2 & 1) == 0) {
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdab0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdab8);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdac0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdac8);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdad0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdad8);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdae0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bdae8);
                                                      bRam0000000002b94cb2 = 1;
                                                    }
                                                    if (iVar8 < 100) {
                                                      if (iVar8 < 0x19) {
                                                        if (iVar8 == 5) {
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdac0;
                                                          if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                      0xe0) == 0) {
                                                            NativeHelper_011df1bc();
                                                            puVar18 = (undefined8 *)PTR_DAT_029bdac0
                                                            ;
                                                          }
                                                        }
                                                        else {
                                                          if (iVar8 != 10) {
                                                            return;
                                                          }
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdae8;
                                                          if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                      0xe0) == 0) {
                                                            NativeHelper_011df1bc();
                                                            puVar18 = (undefined8 *)PTR_DAT_029bdae8
                                                            ;
                                                          }
                                                        }
                                                      }
                                                      else if (iVar8 == 0x19) {
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdab8;
                                                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                    0xe0) == 0) {
                                                          NativeHelper_011df1bc();
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdab8;
                                                        }
                                                      }
                                                      else {
                                                        if (iVar8 != 0x32) {
                                                          return;
                                                        }
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdac8;
                                                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                    0xe0) == 0) {
                                                          NativeHelper_011df1bc();
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdac8;
                                                        }
                                                      }
                                                    }
                                                    else if (iVar8 < 500) {
                                                      if (iVar8 == 100) {
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdae0;
                                                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                    0xe0) == 0) {
                                                          NativeHelper_011df1bc();
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdae0;
                                                        }
                                                      }
                                                      else {
                                                        if (iVar8 != 0xfa) {
                                                          return;
                                                        }
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdab0;
                                                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 +
                                                                    0xe0) == 0) {
                                                          NativeHelper_011df1bc();
                                                          puVar18 = (undefined8 *)PTR_DAT_029bdab0;
                                                        }
                                                      }
                                                    }
                                                    else if (iVar8 == 500) {
                                                      puVar18 = (undefined8 *)PTR_DAT_029bdad0;
                                                      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0)
                                                          == 0) {
                                                        NativeHelper_011df1bc();
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdad0;
                                                      }
                                                    }
                                                    else {
                                                      if (iVar8 != 1000) {
                                                        return;
                                                      }
                                                      puVar18 = (undefined8 *)PTR_DAT_029bdad8;
                                                      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0)
                                                          == 0) {
                                                        NativeHelper_011df1bc();
                                                        puVar18 = (undefined8 *)PTR_DAT_029bdad8;
                                                      }
                                                    }
                                                    puVar4 = PTR_DAT_029bd9d0;
                                                    pvVar11 = (void *)*puVar18;
                                                    pvVar10 = (void *)0x0;
                                                    if ((bRam0000000002b94e07 & 1) == 0) {
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                                      bRam0000000002b94e07 = 1;
                                                      pvVar10 = extraout_x1_00;
                                                    }
                                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                      NativeHelper_011df1bc();
                                                      pvVar10 = extraout_x1_01;
                                                    }
                                                    bVar7 = TRAnalytics_IsEventEnabled_12b6e24
                                                                      (pvVar11,pvVar10);
                                                    if (!bVar7) {
                                                      return;
                                                    }
                                                    Imangi_Analytics_Analytics_LogEvent_126b1f0
                                                              (pvVar11,(void *)0x0);
                                                    pvVar10 = extraout_x1_02;
                                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                      NativeHelper_011df1bc();
                                                      pvVar10 = extraout_x1_03;
                                                    }
                                                    puVar4 = PTR_DAT_029bd9d0;
                                                    if ((bRam0000000002b94e0d & 1) == 0) {
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                                      bRam0000000002b94e0d = 1;
                                                      pvVar10 = extraout_x1_04;
                                                    }
                                                    lVar9 = *(long *)puVar4;
                                                    if (*(int *)(lVar9 + 0xe0) == 0) {
                                                      NativeHelper_011df1bc();
                                                      lVar9 = *(long *)puVar4;
                                                      pvVar10 = extraout_x1_05;
                                                    }
                                                    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10
                                                                     );
                                                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                                                      NativeHelper_011df2dc();
                                                    }
                                                    if ((bRam0000000002b94e34 & 1) == 0) {
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9e8);
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9f0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                                      NativeHelper_011df0b4(PTR_DAT_029bf150);
                                                      bRam0000000002b94e34 = 1;
                                                      pvVar10 = extraout_x1_06;
                                                    }
                                                    puVar4 = PTR_DAT_029bf150;
                                                    if (*(char *)(lVar9 + 0x30) != '\0') {
                                                      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0)
                                                          == 0) {
                                                        NativeHelper_011df1bc();
                                                        pvVar10 = extraout_x1_07;
                                                      }
                                                      bVar7 = TRAnalytics_IsEventEnabled_12b6e24
                                                                        (*(void **)puVar4,pvVar10);
                                                      if (bVar7) {
                                                        if ((*(long *)(lVar9 + 0x10) != 0) &&
                                                           (*(long *)(lVar9 + 0x20) != 0)) {
                                                          plVar13 = (long *)NativeHelper_011df12c
                                                                                      (*(undefined8
                                                                                         *)
                                                  PTR_DAT_029bd9e8,
                                                  *(int *)(*(long *)(lVar9 + 0x20) + 0x18) +
                                                  *(int *)(*(long *)(lVar9 + 0x10) + 0x18));
                                                  puVar5 = PTR_DAT_029bd9f0;
                                                  lVar19 = *(long *)(lVar9 + 0x10);
                                                  if (lVar19 != 0) {
                                                    lVar24 = 4;
                                                    do {
                                                      uVar25 = lVar24 - 4;
                                                      if ((long)(int)*(uint *)(lVar19 + 0x18) <=
                                                          (long)uVar25) {
                                                        lVar19 = *(long *)(lVar9 + 0x20);
                                                        if (lVar19 != 0) {
                                                          uVar25 = 0;
                                                          goto code_r0x013bb368;
                                                        }
                                                        break;
                                                      }
                                                      if (*(uint *)(lVar19 + 0x18) <= uVar25)
                                                      goto code_r0x013bb438;
                                                      lVar20 = *(long *)(lVar9 + 0x18);
                                                      if (lVar20 == 0) break;
                                                      if (*(uint *)(lVar20 + 0x18) <= uVar25)
                                                      goto code_r0x013bb438;
                                                      pvVar10 = *(void **)(lVar19 + lVar24 * 8);
                                                      pvVar11 = *(void **)(lVar20 + lVar24 * 8);
                                                      pIVar14 = (Imangi_Analytics_EventParameter *)
                                                                NativeHelper_011df2d0
                                                                          (*(undefined8 *)puVar5);
                                                                                                            
                                                  Imangi_Analytics_EventParameter_EventParameter_126b488
                                                            (pIVar14,pvVar10,pvVar11,(void *)0x0);
                                                  if (plVar13 == (long *)0x0) break;
                                                  if ((pIVar14 !=
                                                       (Imangi_Analytics_EventParameter *)0x0) &&
                                                     (lVar19 = NativeHelper_011df1c0
                                                                         (pIVar14,*(undefined8 *)
                                                                                   (*plVar13 + 0x40)
                                                                         ), lVar19 == 0))
                                                  goto code_r0x013bb43c;
                                                  if (*(uint *)(plVar13 + 3) <= uVar25)
                                                  goto code_r0x013bb438;
                                                  plVar13[lVar24] = (long)pIVar14;
                                                  lVar19 = *(long *)(lVar9 + 0x10);
                                                  lVar24 = lVar24 + 1;
                                                  } while (lVar19 != 0);
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
LAB_0138a3d4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
        }
      }
    }
  }
LAB_0138a3e4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar25) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar4,plVar13,(void *)0x0);
      *(undefined1 *)(lVar9 + 0x30) = 0;
      return;
    }
    lVar24 = *(long *)(lVar9 + 0x10);
    if (lVar24 == 0) break;
    if (*(uint *)(lVar19 + 0x18) <= uVar25) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar20 = *(long *)(lVar9 + 0x28);
    if (lVar20 == 0) break;
    if (*(uint *)(lVar20 + 0x18) <= uVar25) goto code_r0x013bb438;
    pvVar10 = *(void **)(lVar19 + uVar25 * 8 + 0x20);
    iVar23 = *(int *)(lVar20 + uVar25 * 4 + 0x20);
    pIVar14 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar5);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar14,pvVar10,(long)iVar23,(void *)0x0)
    ;
    if (plVar13 == (long *)0x0) break;
    if ((pIVar14 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar19 = NativeHelper_011df1c0(pIVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0)) {
code_r0x013bb43c:
      uVar15 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar15,0);
    }
    uVar16 = (int)uVar25 + (int)*(undefined8 *)(lVar24 + 0x18);
    if (*(uint *)(plVar13 + 3) <= uVar16) goto code_r0x013bb438;
    plVar13[(long)(int)uVar16 + 4] = (long)pIVar14;
    lVar19 = *(long *)(lVar9 + 0x20);
    uVar25 = uVar25 + 1;
  } while (lVar19 != 0);
  goto code_r0x013bb408;
}

