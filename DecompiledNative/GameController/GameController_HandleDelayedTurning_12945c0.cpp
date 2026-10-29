// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleDelayedTurning() { }
// Ghidra address: 013985c0; ELF VA: 0x12985c0; file offset: 0x12945c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleDelayedTurning_12945c0(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  void *extraout_x1;
  uint uVar8;
  CharacterPlayer *pCVar9;
  GameInput *pGVar10;
  undefined2 uVar11;
  PathElement *pPVar12;
  PathElement *pPVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 RVar18;
  undefined8 uStack_78;
  float fStack_6c;
  char acStack_68 [4];
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94cfe & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be0b0);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029be0c0);
    NativeHelper_011df0b4(PTR_DAT_029be0c8);
    NativeHelper_011df0b4(PTR_DAT_029be0d0);
    NativeHelper_011df0b4(PTR_DAT_029be0d8);
    NativeHelper_011df0b4(PTR_DAT_029be0e0);
    NativeHelper_011df0b4(PTR_DAT_029be0e8);
    NativeHelper_011df0b4(PTR_DAT_029be0f0);
    NativeHelper_011df0b4(PTR_DAT_029be0f8);
    NativeHelper_011df0b4(PTR_DAT_029be100);
    NativeHelper_011df0b4(PTR_DAT_029be108);
    bRam0000000002b94cfe = 1;
    runtimeMethod = extraout_x1;
  }
  acStack_68[0] = '\0';
  fStack_6c = 0.0;
  uStack_78 = 0;
  pPVar12 = self->PathRoot;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
  pCVar9 = self->GamePlayer;
  if (pCVar9 == (CharacterPlayer *)0x0) goto LAB_01398ea4;
  if ((bVar3 & (pCVar9->IsDead ^ 0xffU)) == 0) {
    return;
  }
  uStack_64 = 0x41200000;
  fVar14 = 10.0;
  if (7.5 < pCVar9->GroundHeight) {
    fVar14 = 6.5;
    uStack_64 = 0x40d00000;
  }
  pPVar12 = self->PathRoot;
  pvVar5 = (void *)NativeHelper_0260e1a8(pCVar9,0);
  if ((pvVar5 == (void *)0x0) ||
     (RVar17 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0),
     pPVar12 == (PathElement *)0x0)) goto LAB_01398ea4;
  pPVar12 = PathElement_GetPathElementIfPointOverTurn_131075c
                      (pPVar12,RVar17,fVar14,self->PathRootOrigin,true,3,(void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return;
  }
  pPVar13 = self->PathRoot;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pPVar13,(void *)0x0);
  if (bVar3) {
    if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
       (pvVar5 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0), pvVar5 == (void *)0x0))
    goto LAB_01398ea4;
    RVar17 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    fVar14 = RVar17.component0;
    if ((self->GamePlayer == (CharacterPlayer *)0x0) ||
       (pvVar5 = (void *)NativeHelper_0260e1a8
                                   (fVar14,RVar17.component1,RVar17.component2,self->GamePlayer,0),
       pvVar5 == (void *)0x0)) goto LAB_01398ea4;
    RVar17 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    if ((pPVar12 == (PathElement *)0x0) ||
       (pvVar5 = (void *)NativeHelper_0260e1a8(RVar17.component0,RVar17.component1,pPVar12,0),
       pvVar5 == (void *)0x0)) goto LAB_01398ea4;
    RVar18 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    fVar15 = RVar18.component0;
    pvVar5 = (void *)NativeHelper_0260e1a8(fVar15,RVar18.component1,RVar18.component2,pPVar12,0);
    if (pvVar5 == (void *)0x0) goto LAB_01398ea4;
    RVar18 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    if (cRam0000000002b94d38 == '\0') {
      NativeHelper_011df0b4(RVar18.component0,RVar18.component1,PTR_DAT_029b97c8);
      cRam0000000002b94d38 = '\x01';
    }
    fVar16 = RVar17.component2 - RVar18.component2;
    if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    fStack_6c = SQRT((fVar14 - fVar15) * (fVar14 - fVar15) + fVar16 * fVar16);
    lVar6 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,8);
    if (lVar6 == 0) goto LAB_01398ea4;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01398ea8;
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_029be0f0;
    uStack_78 = CONCAT44(RVar17.component2,fVar14);
    uVar7 = NativeHelper_013a0df0(&uStack_78,0,0,0);
    if ((*(uint *)(lVar6 + 0x18) < 2) ||
       (*(undefined8 *)(lVar6 + 0x28) = uVar7, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_01398ea8;
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_029be0c8;
    uStack_78 = CONCAT44(RVar18.component2,fVar15);
    uVar7 = NativeHelper_013a0df0(&uStack_78,0,0,0);
    if ((*(uint *)(lVar6 + 0x18) < 4) ||
       (*(undefined8 *)(lVar6 + 0x38) = uVar7, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_01398ea8;
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_029be0c0;
    uVar7 = NativeHelper_0200e848(&fStack_6c,0);
    if ((*(uint *)(lVar6 + 0x18) < 6) ||
       (*(undefined8 *)(lVar6 + 0x48) = uVar7, *(uint *)(lVar6 + 0x18) == 6)) goto LAB_01398ea8;
    *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_029be108;
    uVar7 = NativeHelper_0200e848(&uStack_64,0);
    if (*(uint *)(lVar6 + 0x18) < 8) goto LAB_01398ea8;
    *(undefined8 *)(lVar6 + 0x58) = uVar7;
    pvVar5 = (void *)NativeHelper_01e9bf50(lVar6,0);
    DebugEx_Log_13222f4(pvVar5,(void *)0x0);
    DebugEx_LogError_1321a6c(*(void **)PTR_DAT_029be0e0,pPVar12,(void *)0x0);
  }
  if (self->PathRootOrigin == 0) {
    DebugEx_LogError_1321a6c(*(void **)PTR_DAT_029be0f8,self,(void *)0x0);
  }
  acStack_68[0] = '\0';
  if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01398ea4;
  if ((self->GamePlayer->HasBoost == false) && (self->GodMode == false)) {
LAB_01398a84:
    puVar2 = PTR_DAT_029be0b0;
    pvVar5 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029be0b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_01398ea4;
      if (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x68) != 0) {
        pPVar13 = self->LastTurnPathPiece;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pPVar13,(void *)0x0);
        if (bVar3) {
          lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar6 == 0) goto LAB_01398ea4;
          if (*(int *)(lVar6 + 0x68) == -1) {
            if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
            bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
            if (bVar3) goto LAB_01398c5c;
            lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
            if (lVar6 == 0) goto LAB_01398ea4;
          }
          if (*(int *)(lVar6 + 0x68) == 1) {
            if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
            goto LAB_01398c6c;
          }
          goto LAB_01398c90;
        }
      }
    }
    pvVar5 = *(void **)PTR_DAT_029b9758;
    if (*(int *)((long)pvVar5 + 0xe0) == 0) {
      pvVar5 = (void *)NativeHelper_011df1bc();
    }
    bVar3 = GameController_get_AllowTiltToTurn_1296de4(pvVar5);
    if (bVar3) {
      pPVar13 = self->LastTurnPathPiece;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pPVar13,(void *)0x0);
      if (bVar3) {
        if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01398ea4;
        if (5.0 < self->GamePlayer->PlayerXOffset) {
          if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
          bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
          if (bVar3) {
            pGVar10 = self->GameInput;
            if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
            if (pGVar10->ShouldTurnRight == false) goto LAB_01398c64;
            bVar3 = PathElement_CanTurnRight_130b808(pPVar12,self->PathRootOrigin,(void *)0x0);
            if (!bVar3) goto LAB_01398c5c;
          }
        }
        if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01398ea4;
        if (self->GamePlayer->PlayerXOffset < -5.0) {
          if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
          bVar3 = PathElement_CanTurnRight_130b808(pPVar12,self->PathRootOrigin,(void *)0x0);
          if (bVar3) {
            pGVar10 = self->GameInput;
            if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
            if (pGVar10->ShouldTurnLeft == false) goto LAB_01398c88;
            bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
            if (!bVar3) goto LAB_01398c80;
          }
        }
      }
    }
    goto LAB_01398c90;
  }
  pPVar13 = self->LastTurnPathPiece;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pPVar13,(void *)0x0);
  if (!bVar3) goto LAB_01398a84;
  acStack_68[0] = '\x01';
  if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
  bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
  if ((bVar3) &&
     (bVar3 = PathElement_CanTurnRight_130b808(pPVar12,self->PathRootOrigin,(void *)0x0), bVar3)) {
    pGVar10 = self->GameInput;
    if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
    if ((pGVar10->ShouldTurnLeft == false) && (pGVar10->ShouldTurnRight == false)) {
      iVar4 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
      pGVar10 = self->GameInput;
      if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
      if (iVar4 == 0) {
        pGVar10->ShouldTurnLeft = true;
      }
      else {
        pGVar10->ShouldTurnRight = true;
      }
    }
  }
  else {
    bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
    if (bVar3) {
LAB_01398c5c:
      pGVar10 = self->GameInput;
      if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
LAB_01398c64:
      uVar11 = 1;
    }
    else {
LAB_01398c6c:
      bVar3 = PathElement_CanTurnRight_130b808(pPVar12,self->PathRootOrigin,(void *)0x0);
      if (!bVar3) goto LAB_01398c90;
LAB_01398c80:
      pGVar10 = self->GameInput;
      if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
LAB_01398c88:
      uVar11 = 0x100;
    }
    pGVar10->ShouldTurnLeft = (bool)(char)uVar11;
    pGVar10->ShouldTurnRight = (bool)(char)((ushort)uVar11 >> 8);
  }
LAB_01398c90:
  pGVar10 = self->GameInput;
  if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
  if (pGVar10->ShouldTurnLeft == false) {
LAB_01398cd4:
    if (pGVar10->ShouldTurnRight != false) {
      if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
      bVar3 = PathElement_CanTurnRight_130b808(pPVar12,self->PathRootOrigin,(void *)0x0);
      if (bVar3) {
        if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01398ea4;
        CharacterPlayer_TurnRight_12be5e8(self->GamePlayer,(void *)0x0);
        goto LAB_01398d04;
      }
    }
    if (acStack_68[0] != '\0') {
      lVar6 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,8);
      if (lVar6 == 0) goto LAB_01398ea4;
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_029be0d8;
        puVar1 = PTR_DAT_029b8308;
        if (*(int *)(*(long *)PTR_DAT_029b8308 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        uVar7 = NativeHelper_01f83748(acStack_68,0);
        uVar8 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if ((1 < uVar8) && (*(undefined8 *)(lVar6 + 0x28) = uVar7, uVar8 != 2)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_029be0d0;
          if (pPVar12 == (PathElement *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*(long *)pPVar12 + 0x168))
                              (pPVar12,*(undefined8 *)(*(long *)pPVar12 + 0x170));
            uVar8 = (uint)*(undefined8 *)(lVar6 + 0x18);
          }
          if ((3 < uVar8) && (*(undefined8 *)(lVar6 + 0x38) = uVar7, uVar8 != 4)) {
            *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_029be0e8;
            pGVar10 = self->GameInput;
            if (pGVar10 == (GameInput *)0x0) {
LAB_01398ea4:
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            uVar7 = NativeHelper_01f83748(&pGVar10->ShouldTurnLeft,0);
            if ((5 < *(uint *)(lVar6 + 0x18)) &&
               (*(undefined8 *)(lVar6 + 0x48) = uVar7, *(uint *)(lVar6 + 0x18) != 6)) {
              *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)PTR_DAT_029be100;
              if (self->GameInput == (GameInput *)0x0) goto LAB_01398ea4;
              uVar7 = NativeHelper_01f83748(&self->GameInput->ShouldTurnRight,0);
              if (7 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x58) = uVar7;
                pvVar5 = (void *)NativeHelper_01e9bf50(lVar6,0);
                DebugEx_LogError_1321a6c(pvVar5,pPVar12,(void *)0x0);
                return;
              }
            }
          }
        }
      }
LAB_01398ea8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
  else {
    if (pPVar12 == (PathElement *)0x0) goto LAB_01398ea4;
    bVar3 = PathElement_CanTurnLeft_130b74c(pPVar12,self->PathRootOrigin,(void *)0x0);
    if (!bVar3) {
      pGVar10 = self->GameInput;
      if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
      goto LAB_01398cd4;
    }
    if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01398ea4;
    CharacterPlayer_TurnLeft_12be570(self->GamePlayer,(void *)0x0);
LAB_01398d04:
    pGVar10 = self->GameInput;
    if (pGVar10 == (GameInput *)0x0) goto LAB_01398ea4;
    pGVar10->TimeSinceLastTurn = 0.0;
    pGVar10->ShouldTurnRight = false;
    pGVar10->JustTurned = true;
    pGVar10->ShouldTurnLeft = false;
    self->LastTurnPathPiece = pPVar12;
  }
  return;
}

