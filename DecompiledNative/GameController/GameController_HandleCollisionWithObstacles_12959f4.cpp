// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleCollisionWithObstacles() { }
// Ghidra address: 013999f4; ELF VA: 0x12999f4; file offset: 0x12959f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleCollisionWithObstacles_12959f4(GameController *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  Region2D *self_00;
  CharacterPlayer *pCVar9;
  void *extraout_x1;
  PathElement *x;
  Obstacle *self_01;
  uint uVar10;
  uint uVar11;
  Recovered_Vector3 RVar12;
  Recovered_Vector2 RVar13;
  Recovered_Vector2 RVar14;
  Recovered_Vector2 p1;
  
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94d03 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be118);
    NativeHelper_011df0b4(PTR_DAT_029be120);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d03 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar2;
  x = self->NearestElement;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar5,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  if (!bVar4) {
    if ((self->NearestElement == (PathElement *)0x0) ||
       (pvVar6 = UnityEngine_Component_GetComponentsInChildren_13cd618
                           (self->NearestElement,*(void **)PTR_DAT_029be120),
       puVar3 = PTR_DAT_029be118, pvVar6 == (void *)0x0)) {
LAB_01399d74:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar11 = *(uint *)((long)pvVar6 + 0x18);
    if (0 < (int)uVar11) {
      uVar10 = 0;
      do {
        if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        self_01 = *(Obstacle **)((long)pvVar6 + (long)(int)uVar10 * 8 + 0x20);
        if ((self_01 == (Obstacle *)0x0) || (lVar5 = NativeHelper_0260e1e4(self_01,0), lVar5 == 0))
        goto LAB_01399d74;
        uVar7 = NativeHelper_02610cd4(lVar5,0);
        if ((uVar7 & 1) != 0) {
          pvVar8 = (void *)NativeHelper_0260e1a8(self_01,0);
          if (pvVar8 == (void *)0x0) goto LAB_01399d74;
          self_00 = UnityEngine_Component_GetComponent_13ccba8(pvVar8,*(void **)puVar3);
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            NativeHelper_011df1bc(lVar5);
          }
          bVar4 = UnityEngine_object_op_Inequality_250c8e4(self_00,(void *)0x0,(void *)0x0);
          if (bVar4) {
            pCVar9 = self->GamePlayer;
            if (self_01->MustSlideUnder == false) {
              if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
            }
            else {
              if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
              if (pCVar9->IsSliding != false) {
                if (self->MainCamera == (GameCamera *)0x0) goto LAB_01399d74;
                self->MainCamera->NeedsToDuckCamera = true;
              }
              if ((self_01->MustJumpOver == false) && (pCVar9->HasInvincibility != false)) {
                if (self->MainCamera == (GameCamera *)0x0) goto LAB_01399d74;
                self->MainCamera->NeedsToDuckCamera = true;
              }
            }
            RVar13 = CharacterPlayer_GetPreviousPosition2D_12be330(pCVar9,(void *)0x0);
            if (self_00 == (Region2D *)0x0) goto LAB_01399d74;
            RVar13.component1 = (float)((ulong)RVar13 >> 0x20);
            bVar4 = Region2D_IsPointInside_131eb68(self_00,RVar13,(void *)0x0);
            if (!bVar4) {
              if (self_01->MustJumpOver == false) {
LAB_01399bc8:
                if (self_01->MustSlideUnder != false) {
                  bVar1 = 1;
                  goto LAB_01399be4;
                }
                pCVar9 = self->GamePlayer;
                if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
              }
              else {
                if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
                   (pvVar8 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0),
                   pvVar8 == (void *)0x0)) goto LAB_01399d74;
                RVar12 = UnityEngine_Transform_get_position_2516710(pvVar8,(void *)0x0);
                if (RVar12.component1 < self_00->Height) goto LAB_01399bc8;
                if (self_01->MustSlideUnder == false) goto LAB_01399d44;
                bVar1 = 0;
LAB_01399be4:
                pCVar9 = self->GamePlayer;
                if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
                if (!(bool)(bVar1 & pCVar9->IsSliding == false)) goto LAB_01399d44;
              }
              RVar13 = CharacterPlayer_GetPreviousPosition2D_12be330(pCVar9,(void *)0x0);
              if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01399d74;
              RVar14 = MovingObject_GetPosition2D_1309760
                                 ((MovingObject *)self->GamePlayer,(void *)0x0);
              p1.component0 = RVar13.component0;
              p1.component1 = (float)((ulong)RVar13 >> 0x20);
              RVar14.component1 = (float)((ulong)RVar14 >> 0x20);
              bVar4 = Obstacle_DoesLineSegementIntersect_1309c0c(self_01,p1,RVar14,(void *)0x0);
              if (bVar4) {
                pCVar9 = self->GamePlayer;
                if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
                if (pCVar9->HasInvincibility == false) {
                  if (self_01->DoesKill == false) {
                    CharacterPlayer_Stumble_12bd5ac(pCVar9,0.0,(void *)0x0);
                    if (self->MainCamera == (GameCamera *)0x0) goto LAB_01399d74;
                    GameCamera_Shake_12d364c(self->MainCamera,1.0,1.5,1.0,0.0,(void *)0x0);
                    self->DidStumble = true;
                  }
                  else {
                    if (self_01->MustJumpOver == false) {
                      if (self_01->MustSlideUnder != false) {
                        pvVar8 = (void *)0x3;
                        goto LAB_01399d04;
                      }
                    }
                    else {
                      if (self_01->MustSlideUnder == false) {
                        pvVar8 = (void *)0x2;
                      }
                      else {
                        if (self->NearestElement == (PathElement *)0x0) goto LAB_01399d74;
                        uVar11 = 7;
                        if (self->NearestElement->Level != 1) {
                          uVar11 = 5;
                        }
                        pvVar8 = (void *)(ulong)uVar11;
                      }
LAB_01399d04:
                      CharacterPlayer_Kill_12bda84(pCVar9,pvVar8,(void *)0x0);
                    }
                    pCVar9 = self->GamePlayer;
                    if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01399d74;
                    (**(code **)(*(long *)pCVar9 + 0x188))
                              (pCVar9,0,*(undefined8 *)(*(long *)pCVar9 + 400));
                    if (self->MainCamera == (GameCamera *)0x0) goto LAB_01399d74;
                    GameCamera_Shake_12d364c(self->MainCamera,1.0,1.0,1.0,0.0,(void *)0x0);
                  }
                }
                else {
                  if (self->NearestElement == (PathElement *)0x0) goto LAB_01399d74;
                  if (self->NearestElement->Obstacles == 6) {
                    lVar5 = NativeHelper_0260e1e4(self_01,0);
                    if (lVar5 == 0) goto LAB_01399d74;
                    NativeHelper_02610c54(lVar5,0,0);
                  }
                }
              }
            }
          }
        }
LAB_01399d44:
        uVar11 = *(uint *)((long)pvVar6 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
  }
  return;
}

