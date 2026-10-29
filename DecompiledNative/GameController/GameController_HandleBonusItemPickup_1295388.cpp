// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void HandleBonusItemPickup(PathElement pathElement, PathDirection origin, bool isRootNode, int bailOut = 3) { }
// Ghidra address: 01399388; ELF VA: 0x1299388; file offset: 0x1295388
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_HandleBonusItemPickup_1295388
               (GameController *self,PathElement *pathElement,int origin,bool isRootNode,int bailOut
               ,void *runtimeMethod)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int coinValue;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  void *pvVar8;
  void *pvVar9;
  UISprite *pUVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  CharacterPlayer *pCVar14;
  BonusItem *self_00;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Recovered_Vector3 RVar20;
  Recovered_Vector3 RVar21;
  
  fVar6 = _UNK_007a3d20;
  fVar5 = _UNK_007a3c5c;
  fVar4 = _UNK_007a3bf8;
  while( true ) {
    if ((bRam0000000002b94d02 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029be110);
      NativeHelper_011df0b4(PTR_DAT_029b7f98);
      bRam0000000002b94d02 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Equality_250d534(pathElement,(void *)0x0,(void *)0x0);
    if (bVar7) {
      return;
    }
    if (pathElement == (PathElement *)0x0) break;
    if ((pathElement->HasBonusItems != false) || (pathElement->HasCoins != false)) {
      pvVar8 = UnityEngine_Component_GetComponentsInChildren_13cd618
                         (pathElement,*(void **)PTR_DAT_029be110);
      if (pvVar8 == (void *)0x0) break;
      uVar3 = *(uint *)((long)pvVar8 + 0x18);
      if (0 < (int)uVar3) {
        uVar13 = 0;
        do {
          if (uVar3 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          self_00 = *(BonusItem **)((long)pvVar8 + (long)(int)uVar13 * 8 + 0x20);
          if (self_00 == (BonusItem *)0x0) goto LAB_013999ec;
          bVar7 = UnityEngine_Behaviour_get_enabled_25096f0(self_00,(void *)0x0);
          if (bVar7) {
            fVar19 = 2.25;
            uVar3 = *(int *)&self_00->field_0x78 - 1;
            if (uVar3 < 6) {
              fVar19 = *(float *)(&UNK_007c424c + (long)(int)uVar3 * 4);
            }
            if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
            if ((self->GamePlayer->IsDead == false) &&
               (bVar7 = BonusItem_IsACoin_12bbc44(self_00,(void *)0x0), bVar7)) {
              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
              if (((self->GamePlayer->HasVacuum != false) || (self->GodMode != false)) ||
                 (self_00->isMagnetized != false)) {
                pvVar9 = (void *)NativeHelper_0260e1a8(self_00,0);
                if (pvVar9 == (void *)0x0) goto LAB_013999ec;
                RVar20 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
                if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                   (pvVar9 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                   pvVar9 == (void *)0x0)) goto LAB_013999ec;
                RVar21 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
                fVar15 = RVar20.component0 - RVar21.component0;
                fVar16 = RVar20.component1 - RVar21.component1;
                fVar17 = RVar20.component2 - RVar21.component2;
                fVar15 = fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16;
                if ((0.0 < fVar15) && (fVar15 <= fVar6)) {
                  if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                     (pvVar9 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                     pvVar9 == (void *)0x0)) goto LAB_013999ec;
                  RVar20 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
                  pvVar9 = (void *)NativeHelper_0260e1a8(self_00,0);
                  if (pvVar9 == (void *)0x0) goto LAB_013999ec;
                  RVar21 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
                  if (cRam0000000002b945c3 == '\0') {
                    NativeHelper_011df0b4(PTR_DAT_029b97c8);
                    cRam0000000002b945c3 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  fVar19 = RVar20.component0 - RVar21.component0;
                  fVar16 = RVar20.component1 - RVar21.component1;
                  fVar17 = RVar20.component2 - RVar21.component2;
                  fVar18 = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar16 * fVar16);
                  if (fVar18 <= fVar5) {
                    if (cRam0000000002b94510 == '\0') {
                      NativeHelper_011df0b4(PTR_DAT_029b9368);
                      cRam0000000002b94510 = '\x01';
                    }
                    pfVar12 = *(float **)(*(long *)PTR_DAT_029b9368 + 0xb8);
                    fVar19 = *pfVar12;
                    fVar16 = pfVar12[1];
                    fVar17 = pfVar12[2];
                  }
                  else {
                    fVar19 = fVar19 / fVar18;
                    fVar16 = fVar16 / fVar18;
                    fVar17 = fVar17 / fVar18;
                  }
                  fVar15 = 1.0 / fVar15;
                  RVar20.component0 = fVar15 * fVar19 * fVar4;
                  RVar20.component1 = fVar15 * fVar16 * fVar4;
                  RVar20.component2 = fVar15 * fVar17 * fVar4;
                  MovingObject_ApplyForce_13091b0((MovingObject *)self_00,RVar20,(void *)0x0);
                  fVar19 = 12.0;
                  self_00->isMagnetized = true;
                }
              }
            }
            pCVar14 = self->GamePlayer;
            pvVar9 = (void *)NativeHelper_0260e1a8(self_00,0);
            if ((pvVar9 == (void *)0x0) ||
               (RVar20 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0),
               pCVar14 == (CharacterPlayer *)0x0)) goto LAB_013999ec;
            bVar7 = MovingObject_DoesSphereIntersectBoundingBox_1309658
                              ((MovingObject *)pCVar14,RVar20,fVar19,(void *)0x0);
            if (bVar7) {
              BonusItem_DestroySelf_12bc250(self_00,(void *)0x0);
              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
              CharacterPlayer_AddScore_12be660(self->GamePlayer,self_00->Value,(void *)0x0);
              bVar7 = BonusItem_IsACoin_12bbc44(self_00,(void *)0x0);
              if (bVar7) {
                pCVar14 = self->GamePlayer;
                if (pCVar14 == (CharacterPlayer *)0x0) goto LAB_013999ec;
                if ((pCVar14->HasVacuum == false) && (self->GodMode == false)) {
                  iVar11 = 1;
                }
                else {
                  iVar11 = self->CoinMagnetMultiplier;
                }
                coinValue = *(int *)&self_00->field_0x78;
                iVar1 = 1;
                if (coinValue == 2) {
                  iVar1 = 2;
                }
                if (coinValue != 3) {
                  coinValue = iVar1;
                }
                CharacterPlayer_AddCoins_12be67c(pCVar14,coinValue * iVar11,(void *)0x0);
                if (self->GameInterface == (GameGUI *)0x0) goto LAB_013999ec;
                GameGUI_SpawnSpriteParticleForCoin_12e840c
                          (self->GameInterface,coinValue,(void *)0x0);
                if (self->Audio == (AudioManager *)0x0) goto LAB_013999ec;
                AudioManager_PlayCoin_12bb3ac(self->Audio,(void *)0x0);
              }
              else {
                switch(*(undefined4 *)&self_00->field_0x78) {
                case 4:
                  if (self->Audio == (AudioManager *)0x0) goto LAB_013999ec;
                  AudioManager_PlayFX_12bb190(self->Audio,(void *)0x7,1.0,(void *)0x0);
                  if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                     (pUVar10 = self->GamePlayer->PickupEffect, pUVar10 == (UISprite *)0x0))
                  goto LAB_013999ec;
                  UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
                  CharacterPlayer_StartCoinBonus_12be884
                            (self->GamePlayer,self->CoinBonusValue,(void *)0x0);
                  if (self->GameInterface == (GameGUI *)0x0) goto LAB_013999ec;
                  GameGUI_SpawnMegaCoinParticle_12e860c(self->GameInterface,0x19,(void *)0x0);
                  self->NumMegaCoinsPickedUp = self->NumMegaCoinsPickedUp + 1;
                  break;
                case 5:
                  self->UsedPowers = true;
                  if (self->Audio == (AudioManager *)0x0) goto LAB_013999ec;
                  AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
                  if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                     (pUVar10 = self->GamePlayer->PickupEffect, pUVar10 == (UISprite *)0x0))
                  goto LAB_013999ec;
                  UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
                  CharacterPlayer_StartInvcibility_12be7f8
                            (self->GamePlayer,self->InvincibilityDuration,(void *)0x0);
                  self->NumInvisibilityBonusesPickedUp = self->NumInvisibilityBonusesPickedUp + 1;
                  break;
                case 6:
                  self->UsedPowers = true;
                  if (self->Audio == (AudioManager *)0x0) goto LAB_013999ec;
                  AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
                  if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                     (pUVar10 = self->GamePlayer->PickupEffect, pUVar10 == (UISprite *)0x0))
                  goto LAB_013999ec;
                  UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
                  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_013999ec;
                  CharacterPlayer_StartVacuum_12be870
                            (self->GamePlayer,self->VacuumDuration,(void *)0x0);
                  self->NumMagnetBonusesPickedUp = self->NumMagnetBonusesPickedUp + 1;
                  break;
                case 7:
                  if (self->Audio == (AudioManager *)0x0) goto LAB_013999ec;
                  pvVar9 = (void *)0x0;
                  AudioManager_PlayFX_12bb190(self->Audio,(void *)0x2,1.0,(void *)0x0);
                  GameController_BoostPlayer_1296e48(self,self->BoostDistance,false,pvVar9);
                  self->NumBoostsPickedUp = self->NumBoostsPickedUp + 1;
                }
              }
            }
          }
          uVar3 = *(uint *)((long)pvVar8 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar3);
      }
    }
    bailOut = bailOut + -1;
    if (bailOut < 1) {
      return;
    }
    bVar2 = isRootNode ^ 1;
    if (((((origin == 1 & bVar2) == 0) &&
         (GameController_HandleBonusItemPickup_1295388
                    (self,pathElement->PathNorth,3,false,bailOut,runtimeMethod),
         (origin == 2 & bVar2) != 0)) ||
        (GameController_HandleBonusItemPickup_1295388
                   (self,pathElement->PathEast,4,false,bailOut,runtimeMethod),
        (origin == 3 & bVar2) == 0)) &&
       (GameController_HandleBonusItemPickup_1295388
                  (self,pathElement->PathSouth,1,false,bailOut,runtimeMethod),
       (origin == 4 & (isRootNode ^ 1U)) != 0)) {
      return;
    }
    pathElement = pathElement->PathWest;
    isRootNode = false;
    origin = 2;
  }
LAB_013999ec:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

