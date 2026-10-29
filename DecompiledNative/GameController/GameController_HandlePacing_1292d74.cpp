// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandlePacing() { }
// Ghidra address: 01396d74; ELF VA: 0x1296d74; file offset: 0x1292d74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_HandlePacing_1292d74(GameController *self,void *runtimeMethod)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  GUIParticle *pGVar7;
  void *pvVar8;
  UIWidget *pUVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *in_x5;
  PathElement *pPVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  CharacterPlayer *x;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Color value_01;
  undefined8 uStack_58;
  undefined8 uStack_50;
  void *pvStack_48;
  
  if ((bRam0000000002b94d07 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029bdf58);
    NativeHelper_011df0b4(PTR_DAT_029bdf60);
    NativeHelper_011df0b4(PTR_DAT_029bdf68);
    NativeHelper_011df0b4(PTR_DAT_029bdf70);
    NativeHelper_011df0b4(PTR_DAT_029bdf78);
    NativeHelper_011df0b4(PTR_DAT_029bdf80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029be068);
    NativeHelper_011df0b4(PTR_DAT_029bdf88);
    NativeHelper_011df0b4(PTR_DAT_029be070);
    NativeHelper_011df0b4(PTR_DAT_029be078);
    NativeHelper_011df0b4(PTR_DAT_029be080);
    NativeHelper_011df0b4(PTR_DAT_029be088);
    NativeHelper_011df0b4(PTR_DAT_029be090);
    NativeHelper_011df0b4(PTR_DAT_029be098);
    NativeHelper_011df0b4(PTR_DAT_029be0a0);
    NativeHelper_011df0b4(PTR_DAT_029be0a8);
    bRam0000000002b94d07 = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  pvStack_48 = (void *)0x0;
  if (self->IsTutorialMode == false) {
    if (self->TutorialUIGameObjects == (void *)0x0) goto LAB_013977b8;
    NativeHelper_02610c54(self->TutorialUIGameObjects,0,0);
    x = self->GamePlayer;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
    puVar2 = PTR_DAT_029bde80;
    if (bVar4) {
      bVar4 = true;
    }
    else {
      if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013977b8;
      bVar4 = 15.0 <= self->GamePlayer->TimeSinceLastPowerup;
    }
    lVar10 = *(long *)PTR_DAT_029bde80;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar2;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    *(bool *)(lVar14 + 5) = bVar4;
    lVar10 = 0x14c;
    if (*(int *)(lVar14 + 0x44) != 2) {
      lVar10 = 0x150;
    }
    if (*(float *)(&self->field_0x0 + lVar10) < self->DistanceTraveledSinceLastLevelChange) {
      self->DistanceTraveledSinceLastLevelChange = 0.0;
      uVar5 = UnityEngine_Random_Range_2507f84(0,4,(void *)0x0);
      if ((int)uVar5 < 3) {
        GameController_ChangeLevel_129735c((GameController *)(ulong)uVar5,runtimeMethod_00);
      }
    }
    lVar10 = *(long *)puVar2;
    fVar20 = self->DistanceTraveled;
    fVar21 = self->DistanceToChangeDoubleCoins;
    fVar18 = fVar20;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar10);
      lVar10 = *(long *)puVar2;
      fVar18 = self->DistanceTraveled;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    *(bool *)(lVar14 + 0x11) = fVar21 <= fVar20;
    *(bool *)(lVar14 + 0x12) = self->DistanceToChangeTripleCoins <= fVar18;
    if (250.0 <= fVar18) {
      if (500.0 <= fVar18) {
        if (1000.0 <= fVar18) {
          if (_UNK_007a3c88 <= fVar18) {
            if (fVar18 < 2000.0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                NativeHelper_011df1bc(lVar10);
                lVar10 = *(long *)puVar2;
                lVar14 = *(long *)(lVar10 + 0xb8);
              }
              uVar19 = 0x3dcccccd00000003;
              *(undefined4 *)(lVar14 + 0x3c) = 7;
              *(undefined1 *)(lVar14 + 9) = 1;
              *(undefined4 *)(lVar14 + 0x2c) = 5;
              goto LAB_013972a0;
            }
            if (_UNK_007a3c10 <= fVar18) {
              if (_UNK_007a3c14 <= fVar18) {
                uVar16 = _UNK_007a370c;
                self->DistanceToChangeAtTemple = (float)_UNK_007a3708;
                self->DistanceToChangeAtOther = (float)uVar16;
                self->DistanceToTurnSection = 750.0;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  NativeHelper_011df1bc(lVar10);
                  lVar10 = *(long *)puVar2;
                  lVar14 = *(long *)(lVar10 + 0xb8);
                }
                *(undefined4 *)(lVar14 + 0x3c) = 6;
                *(undefined4 *)(lVar14 + 0x2c) = 2;
                *(undefined8 *)(lVar14 + 0x34) = 0x3e4ccccd00000002;
                goto LAB_013974e0;
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                NativeHelper_011df1bc(lVar10);
                lVar10 = *(long *)puVar2;
                lVar14 = *(long *)(lVar10 + 0xb8);
              }
              uVar11 = 0x3e333333;
              uVar16 = 3;
            }
            else {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                NativeHelper_011df1bc(lVar10);
                lVar10 = *(long *)puVar2;
                lVar14 = *(long *)(lVar10 + 0xb8);
              }
              uVar11 = 0x3e19999a;
              uVar16 = 4;
            }
            *(ulong *)(lVar14 + 0x38) = uVar11 | 0x600000000;
            *(undefined4 *)(lVar14 + 0x2c) = uVar16;
          }
          else {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              NativeHelper_011df1bc(lVar10);
              lVar10 = *(long *)puVar2;
              lVar14 = *(long *)(lVar10 + 0xb8);
            }
            uVar19 = _UNK_007a3970;
            *(undefined4 *)(lVar14 + 0x3c) = 8;
            *(undefined4 *)(lVar14 + 0x2c) = 6;
            uVar3 = _UNK_007a3970;
            _UNK_007a3970 = (undefined4)uVar19;
            _UNK_007a3974 = SUB84(uVar19,4);
            uVar16 = _UNK_007a3974;
            self->DistanceToChangeAtTemple = (float)_UNK_007a3970;
            _UNK_007a3970 = uVar3;
            self->DistanceToChangeAtOther = (float)uVar16;
            self->DistanceToTurnSection = 850.0;
          }
        }
        else {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            NativeHelper_011df1bc(lVar10);
            lVar10 = *(long *)puVar2;
            lVar14 = *(long *)(lVar10 + 0xb8);
          }
          uVar19 = 0x3d4ccccd00000004;
          *(undefined4 *)(lVar14 + 0x3c) = 9;
          *(undefined4 *)(lVar14 + 0x2c) = 8;
          *(undefined1 *)(lVar14 + 0xd) = 1;
          *(undefined1 *)(lVar14 + 10) = 1;
LAB_013972a0:
          *(undefined8 *)(lVar14 + 0x34) = uVar19;
        }
      }
      else {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar10);
          lVar10 = *(long *)puVar2;
          lVar14 = *(long *)(lVar10 + 0xb8);
        }
        *(undefined4 *)(lVar14 + 0x3c) = 10;
        *(undefined4 *)(lVar14 + 0x2c) = 10;
        *(undefined4 *)(lVar14 + 0x34) = 5;
      }
    }
    else {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar10);
        lVar10 = *(long *)puVar2;
        lVar14 = *(long *)(lVar10 + 0xb8);
      }
      uVar19 = _UNK_007a3a58;
      *(undefined1 *)(lVar14 + 0x10) = 1;
      *(undefined2 *)(lVar14 + 7) = 0x101;
      *(undefined4 *)(lVar14 + 0x2c) = 0xc;
      *(undefined2 *)(lVar14 + 0xb) = 0x101;
      *(undefined8 *)(lVar14 + 0x3c) = uVar19;
      *(undefined4 *)(lVar14 + 0x34) = 6;
    }
LAB_013974e0:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar10);
      lVar10 = *(long *)puVar2;
    }
    cVar1 = *(char *)(*(long *)(lVar10 + 0xb8) + 0x48);
    if ((cVar1 != '\0') ||
       (self->DistanceTraveledSinceLastTurnSection <= self->DistanceToTurnSection)) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar10);
        lVar10 = *(long *)puVar2;
        cVar1 = *(char *)(*(long *)(lVar10 + 0xb8) + 0x48);
      }
      if ((cVar1 != '\0') &&
         (self->DistanceToTurnSectionEnd < self->DistanceTraveledSinceLastTurnSection))
      goto LAB_01397540;
    }
    else {
LAB_01397540:
      self->DistanceTraveledSinceLastTurnSection = 0.0;
      iVar6 = UnityEngine_Random_Range_2507f84(0,4,(void *)0x0);
      lVar10 = *(long *)puVar2;
      if (iVar6 < 3) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar10);
          lVar10 = *(long *)puVar2;
        }
        *(byte *)(*(long *)(lVar10 + 0xb8) + 0x48) = *(byte *)(*(long *)(lVar10 + 0xb8) + 0x48) ^ 1;
      }
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar10);
      lVar10 = *(long *)puVar2;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    if (*(char *)(lVar14 + 0x48) != '\0') {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar10);
        lVar10 = *(long *)puVar2;
        lVar14 = *(long *)(lVar10 + 0xb8);
      }
      fVar18 = (float)*(int *)(lVar14 + 0x2c) * _UNK_007a3c80;
      iVar6 = -0x80000000;
      if (fVar18 != INFINITY) {
        iVar6 = (int)fVar18;
      }
      *(int *)(lVar14 + 0x2c) = iVar6;
      if (iVar6 < 2) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar10);
          lVar10 = *(long *)puVar2;
          lVar14 = *(long *)(lVar10 + 0xb8);
        }
        *(undefined4 *)(lVar14 + 0x2c) = 2;
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar10);
        lVar10 = *(long *)puVar2;
      }
      *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x3c) = 0;
    }
    if (self->IsNewHighScore != false) {
      return;
    }
    if (self->GamePlayer != (CharacterPlayer *)0x0) {
      if (self->GamePlayer->Score <= self->HighScore) {
        return;
      }
      if (cRam0000000002b94510 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368);
        cRam0000000002b94510 = '\x01';
      }
      pGVar7 = GameController_HintSprite_12971f8
                         (self,*(void **)PTR_DAT_029be080,
                          (Recovered_Vector3)ZEXT812(0x43c8000000000000),
                          **(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),false,true,
                          *(void **)PTR_DAT_029be078,in_x5);
      if ((pGVar7 != (GUIParticle *)0x0) &&
         (pvVar8 = (void *)NativeHelper_0260e1a8(pGVar7,0), pvVar8 != (void *)0x0)) {
        value_00.component2 = 1.0;
        value_00.component0 = 0.5;
        value_00.component1 = 0.5;
        UnityEngine_Transform_set_localScale_2516e0c(pvVar8,value_00,(void *)0x0);
        uVar19 = NEON_fmov(0x40400000,4);
        (pGVar7->FinalScale).component0 = (float)(int)uVar19;
        (pGVar7->FinalScale).component1 = (float)(int)((ulong)uVar19 >> 0x20);
        (pGVar7->FinalScale).component2 = 1.0;
        pGVar7->LifeSpan = 2.0;
        pGVar7->Gravity = true;
        *(undefined4 *)&pGVar7->field_0x54 = 2;
        GUIParticle_BeginAnimation_12e857c(pGVar7,(void *)0x0);
        if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) !=
            (AudioManager *)0x0) {
          AudioManager_PlayFX_12bb190
                    ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),
                     (void *)0x20,1.0,(void *)0x0);
          self->IsNewHighScore = true;
          return;
        }
      }
    }
    goto LAB_013977b8;
  }
  pPVar13 = self->PathRoot;
  if (pPVar13 == (PathElement *)0x0) goto LAB_013977b8;
  if (pPVar13->IsTutorialEnd == false) {
    return;
  }
  pPVar13->IsTutorialEnd = false;
  if (self->TutorialID < 4) {
    if (cRam0000000002b94510 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9368);
      cRam0000000002b94510 = '\x01';
    }
    pGVar7 = GameController_HintSprite_12971f8
                       (self,*(void **)PTR_DAT_029be0a0,
                        (Recovered_Vector3)ZEXT812(0x43c8000000000000),
                        **(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),false,true,
                        *(void **)PTR_DAT_029be090,in_x5);
    if ((pGVar7 == (GUIParticle *)0x0) ||
       (pvVar8 = (void *)NativeHelper_0260e1a8(pGVar7,0), pvVar8 == (void *)0x0)) goto LAB_013977b8;
    value.component2 = 1.0;
    value.component0 = 0.5;
    value.component1 = 0.5;
    UnityEngine_Transform_set_localScale_2516e0c(pvVar8,value,(void *)0x0);
    uVar19 = NEON_fmov(0x40400000,4);
    (pGVar7->FinalScale).component0 = (float)(int)uVar19;
    (pGVar7->FinalScale).component1 = (float)(int)((ulong)uVar19 >> 0x20);
    (pGVar7->FinalScale).component2 = 1.0;
    pGVar7->LifeSpan = 2.0;
    pGVar7->Gravity = true;
    *(undefined4 *)&pGVar7->field_0x54 = 2;
    GUIParticle_BeginAnimation_12e857c(pGVar7,(void *)0x0);
    if (self->Audio == (AudioManager *)0x0) goto LAB_013977b8;
    AudioManager_PlayFX_12bb190(self->Audio,(void *)0x16,_UNK_007a3d5c,(void *)0x0);
    runtimeMethod = extraout_x1_00;
  }
  GameController_SendTutorialSectionCompleteEvent_1287098(self,runtimeMethod);
  iVar6 = 5;
  if (self->TutorialID + 1 < 5) {
    iVar6 = self->TutorialID + 1;
  }
  self->TutorialID = iVar6;
  if ((self->CurrentTutorialUIGameObject == (void *)0x0) ||
     (pUVar9 = (UIWidget *)
               NativeHelper_015070d0
                         (self->CurrentTutorialUIGameObject,*(undefined8 *)PTR_DAT_029bdf70),
     pUVar9 == (UIWidget *)0x0)) goto LAB_013977b8;
  value_01.component1 = (float)_UNK_007a3ca8;
  value_01.component0 = (float)_UNK_007a3c84;
  value_01.component2 = (float)_UNK_007a3bd4;
  value_01.component3 = 0.0;
  UIWidget_set_color_1206e5c(pUVar9,value_01,(void *)0x0);
  if ((self->CurrentTutorialUIGameObject == (void *)0x0) ||
     (pvVar8 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                         (self->CurrentTutorialUIGameObject,*(void **)PTR_DAT_029bdf78),
     pvVar8 == (void *)0x0)) goto LAB_013977b8;
  uVar5 = *(uint *)((long)pvVar8 + 0x18);
  if (0 < (int)uVar5) {
    uVar17 = 0;
    do {
      if (uVar5 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      pUVar9 = *(UIWidget **)((long)pvVar8 + (long)(int)uVar17 * 8 + 0x20);
      if (pUVar9 == (UIWidget *)0x0) goto LAB_013977b8;
      UIWidget_set_color_1206e5c(pUVar9,(Recovered_Color)ZEXT816(0),(void *)0x0);
      uVar5 = *(uint *)((long)pvVar8 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar5);
  }
  iVar6 = self->TutorialID;
  self->TutorialTextExtraDuration = 0.0;
  switch(iVar6) {
  case 0:
    puVar15 = (undefined8 *)PTR_DAT_029bdf88;
    break;
  case 1:
    puVar15 = (undefined8 *)PTR_DAT_029be088;
    break;
  case 2:
    puVar15 = (undefined8 *)PTR_DAT_029be098;
    break;
  case 3:
    puVar15 = (undefined8 *)PTR_DAT_029be068;
    break;
  case 4:
    uVar19 = *(undefined8 *)PTR_DAT_029be0a8;
    self->TutorialTextExtraDuration = 1.0;
    goto LAB_013972e4;
  case 5:
    uVar19 = *(undefined8 *)PTR_DAT_029be070;
    goto LAB_013972f4;
  default:
    uVar19 = 0;
    if (iVar6 < 5) goto LAB_013972e4;
    goto LAB_013972f4;
  }
  uVar19 = *puVar15;
LAB_013972e4:
  if (self->PathRoot != (PathElement *)0x0) {
    PathElement_AddTutorialPath_130f270(self->PathRoot,iVar6,(void *)0x0);
LAB_013972f4:
    self->TimeSinceTutorialSectionEnded = 0.0;
    lVar10 = NativeHelper_012f0488(self->TutorialUIGameObjects,0);
    if (lVar10 != 0) {
      NativeHelper_01a30500(&uStack_58,lVar10,*(undefined8 *)PTR_DAT_029bdf80);
      puVar2 = PTR_DAT_029bdf60;
      while( true ) {
        uVar11 = NativeHelper_0182184c(&uStack_58,*(undefined8 *)puVar2);
        pvVar8 = pvStack_48;
        if ((uVar11 & 1) == 0) {
          NativeHelper_01821848(&uStack_58,*(undefined8 *)PTR_DAT_029bdf58);
          return;
        }
        if (pvStack_48 == (void *)0x0) break;
        pvVar12 = UnityEngine_object_get_name_25101a4(pvStack_48,(void *)0x0);
        uVar11 = NativeHelper_01e9b79c(pvVar12,uVar19,0);
        if ((uVar11 & 1) == 0) {
          NativeHelper_02610c54(pvVar8,0,0);
        }
        else {
          NativeHelper_02610c54(pvVar8,1,0);
          self->CurrentTutorialUIGameObject = pvVar8;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
LAB_013977b8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

