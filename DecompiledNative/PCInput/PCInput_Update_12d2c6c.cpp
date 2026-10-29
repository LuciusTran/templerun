// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013d6c6c; ELF VA: 0x12d6c6c; file offset: 0x12d2c6c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PCInput_Update_12d2c6c(PCInput *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  CharacterPlayer *pCVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  undefined8 uVar9;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  float distance;
  undefined4 uVar10;
  ulong uVar11;
  int *piVar12;
  PathElement *pPVar13;
  long *plVar14;
  Recovered_Vector3 point;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94f2e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029c0280);
    NativeHelper_011df0b4(PTR_DAT_029c0288);
    NativeHelper_011df0b4(PTR_DAT_029c0290);
    bRam0000000002b94f2e = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar4 = *(long *)puVar1;
    runtimeMethod = extraout_x1_00;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_013d7648;
  if (*(char *)(**(long **)(lVar4 + 0xb8) + 0x12a) != '\0') {
    return;
  }
  if (self->BypassInput != false) {
    return;
  }
  GameInput_Update_12d2a94((GameInput *)self,runtimeMethod);
  if ((*(long *)&self->field_0x40 == 0) || (*(long *)&self->field_0x48 == 0)) goto LAB_013d7648;
  pPVar13 = *(PathElement **)(*(long *)&self->field_0x40 + 0x38);
  pvVar5 = (void *)NativeHelper_0260e1a8(*(long *)&self->field_0x48,0);
  if (pvVar5 == (void *)0x0) goto LAB_013d7648;
  point = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
  if ((*(long *)&self->field_0x40 == 0) || (pPVar13 == (PathElement *)0x0)) goto LAB_013d7648;
  pPVar13 = PathElement_GetPathElementIfPointOverTurn_131075c
                      (pPVar13,point,50.0,*(int *)(*(long *)&self->field_0x40 + 0x40),true,3,
                       (void *)0x0);
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x70,(void *)0x0);
  if (bVar3) {
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    PathElement_DumpStatics_1309dcc((void *)0x0);
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x71,(void *)0x0);
  if (bVar3) {
    bVar3 = UnityEngine_Input_GetKey_2543ce8((void *)0x130,(void *)0x0);
    if ((bVar3) || (bVar3 = UnityEngine_Input_GetKey_2543ce8((void *)0x12f,(void *)0x0), bVar3)) {
      pCVar6 = *(CharacterPlayer **)&self->field_0x48;
      if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
      distance = 2560.0;
    }
    else {
      pCVar6 = *(CharacterPlayer **)&self->field_0x48;
      if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
      distance = 256.0;
    }
    CharacterPlayer_StartBoost_12be89c(pCVar6,distance,false,(void *)0x0);
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x65,(void *)0x0);
  if (bVar3) {
    if (*(CharacterPlayer **)&self->field_0x48 == (CharacterPlayer *)0x0) goto LAB_013d7648;
    CharacterPlayer_StartVacuum_12be870(*(CharacterPlayer **)&self->field_0x48,25.0,(void *)0x0);
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x72,(void *)0x0);
  if (bVar3) {
    bVar3 = UnityEngine_Input_GetKey_2543ce8((void *)0x130,(void *)0x0);
    if ((bVar3) || (bVar3 = UnityEngine_Input_GetKey_2543ce8((void *)0x12f,(void *)0x0), bVar3)) {
      if (*(CharacterPlayer **)&self->field_0x48 == (CharacterPlayer *)0x0) goto LAB_013d7648;
      CharacterPlayer_StartAngelWings_12be840
                (*(CharacterPlayer **)&self->field_0x48,50.0,false,(void *)0x0);
    }
    else {
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar4 = *(long *)puVar1;
      }
      if ((GameController *)**(undefined8 **)(lVar4 + 0xb8) == (GameController *)0x0)
      goto LAB_013d7648;
      GameController_UseAngelWings_129bcd8
                ((GameController *)**(undefined8 **)(lVar4 + 0xb8),(void *)0x0);
    }
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x20,(void *)0x0);
  if (bVar3) {
    DebugEx_Break_1323c50((void *)0x0);
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x11a,(void *)0x0);
  if (bVar3) {
    if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    SavedGame_SaveGame_13200a0(false,*(void **)PTR_DAT_029c0280,0x62,(void *)0x0);
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x11b,(void *)0x0);
  pvVar5 = extraout_x1_01;
  if (bVar3) {
    if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    SavedGame_LoadGame_13209bc((void *)0x0);
    pvVar5 = extraout_x1_02;
  }
  if (self->JoystickMode == false) {
    PCInput_SimulateTilt_12d36ac(self,pvVar5);
    bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x111,(void *)0x0);
    if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x77,(void *)0x0), bVar3))
    {
      self->field_0x2c = 1;
      *(undefined4 *)&self->field_0x30 = 0;
    }
    bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x112,(void *)0x0);
    if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x73,(void *)0x0), bVar3))
    {
      self->field_0x34 = 1;
      *(undefined4 *)&self->field_0x38 = 0;
    }
    bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x113,(void *)0x0);
    if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x64,(void *)0x0), bVar3))
    {
      puVar1 = PTR_DAT_029b7f98;
      if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
      if (!bVar3) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
        if (!bVar3) {
          DebugEx_Log_13222f4(*(void **)PTR_DAT_029c0288,(void *)0x0);
          goto LAB_013d72c8;
        }
      }
      self->field_0x22 = 1;
      *(undefined4 *)&self->field_0x24 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
      if (bVar3) {
        pCVar6 = *(CharacterPlayer **)&self->field_0x48;
        if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
        if (((pCVar6->IsJumping == false) && (pCVar6->IsSliding == false)) &&
           (pCVar6->HasBoost == false)) {
          if (*(long *)&self->field_0x40 == 0) goto LAB_013d7648;
          if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) == '\0') {
            if (pCVar6->GroundHeight <= -7.5) {
              CharacterPlayer_Stumble_12bd5ac(pCVar6,1.0,(void *)0x0);
              lVar4 = *(long *)&self->field_0x48;
              if (lVar4 == 0) goto LAB_013d7648;
              uVar10 = 0xc1700000;
            }
            else {
              CharacterPlayer_Stumble_12bd5ac(pCVar6,0.25,(void *)0x0);
              lVar4 = *(long *)&self->field_0x50;
              if (lVar4 == 0) goto LAB_013d7648;
              if (*(char *)(lVar4 + 0xf8) == '\0') {
                *(undefined1 *)(lVar4 + 0xf8) = 1;
              }
              uVar9 = _UNK_007a43a8;
              uVar7 = _UNK_007a43a0;
              *(undefined1 *)(lVar4 + 0xf9) = 0;
              *(undefined8 *)(lVar4 + 0x114) = uVar9;
              *(undefined8 *)(lVar4 + 0x10c) = uVar7;
              *(undefined4 *)(lVar4 + 0x11c) = 0x3e800000;
              lVar4 = *(long *)&self->field_0x48;
              if (lVar4 == 0) goto LAB_013d7648;
              uVar10 = 0xc1180000;
            }
            *(undefined4 *)(lVar4 + 400) = uVar10;
          }
        }
      }
    }
LAB_013d72c8:
    bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x114,(void *)0x0);
    if ((!bVar3) && (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x61,(void *)0x0), !bVar3)
       ) {
      return;
    }
    puVar1 = PTR_DAT_029b7f98;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
      puVar2 = PTR_DAT_029b7fb8;
      if (!bVar3) {
        uVar7 = *(undefined8 *)PTR_DAT_029c0290;
        if ((bRam0000000002b951cc & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
          bRam0000000002b951cc = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar1 = PTR_DAT_029b7fb8;
        uVar9 = 0;
        if ((bRam0000000002b9c2f8 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
          NativeHelper_011df0b4(PTR_DAT_029f2e60);
          bRam0000000002b9c2f8 = 1;
          uVar9 = extraout_x1_03;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          uVar9 = extraout_x1_04;
        }
        if (cRam0000000002b9b5c7 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar9);
          cRam0000000002b9b5c7 = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar4 = *(long *)puVar1;
        }
        plVar14 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        lVar4 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_029f2e60) {
              puVar8 = (undefined8 *)(lVar4 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto code_r0x025edd08;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)NativeHelper_011b5528(plVar14,*(long *)PTR_DAT_029f2e60,3);
code_r0x025edd08:
                    /* WARNING: Could not recover jumptable at 0x025edd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar8)(plVar14,3,uVar7,puVar8[1]);
        return;
      }
    }
    self->field_0x21 = 1;
    *(undefined4 *)&self->field_0x24 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      return;
    }
    pCVar6 = *(CharacterPlayer **)&self->field_0x48;
    if (pCVar6 != (CharacterPlayer *)0x0) {
      if (pCVar6->IsJumping != false) {
        return;
      }
      if (pCVar6->IsSliding != false) {
        return;
      }
      if (pCVar6->HasBoost != false) {
        return;
      }
      if (*(long *)&self->field_0x40 != 0) {
        if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) != '\0') {
          return;
        }
        if (pCVar6->GroundHeight <= -7.5) {
          CharacterPlayer_Stumble_12bd5ac(pCVar6,1.0,(void *)0x0);
          lVar4 = *(long *)&self->field_0x48;
          if (lVar4 != 0) {
            uVar10 = 0x41700000;
LAB_013d7640:
            *(undefined4 *)(lVar4 + 400) = uVar10;
            return;
          }
        }
        else {
          CharacterPlayer_Stumble_12bd5ac(pCVar6,0.25,(void *)0x0);
          lVar4 = *(long *)&self->field_0x50;
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0xf8) == '\0') {
              *(undefined1 *)(lVar4 + 0xf8) = 1;
            }
            uVar9 = _UNK_007a43a8;
            uVar7 = _UNK_007a43a0;
            *(undefined1 *)(lVar4 + 0xf9) = 0;
            *(undefined8 *)(lVar4 + 0x114) = uVar9;
            *(undefined8 *)(lVar4 + 0x10c) = uVar7;
            *(undefined4 *)(lVar4 + 0x11c) = 0x3e800000;
            lVar4 = *(long *)&self->field_0x48;
            if (lVar4 != 0) {
              uVar10 = 0x41180000;
              goto LAB_013d7640;
            }
          }
        }
      }
    }
    goto LAB_013d7648;
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x111,(void *)0x0);
  if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x77,(void *)0x0), bVar3)) {
    self->field_0x2c = 1;
    *(undefined4 *)&self->field_0x30 = 0;
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x112,(void *)0x0);
  if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x73,(void *)0x0), bVar3)) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = GameController_get_AllowSwipeToSlamDown_129c878((void *)0x0);
    if (bVar3) {
      pCVar6 = *(CharacterPlayer **)&self->field_0x48;
      if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
      if (pCVar6->IsJumping != false) {
        CharacterPlayer_SlamDown_12be420(pCVar6,(void *)0x0);
      }
    }
    self->field_0x34 = 1;
    *(undefined4 *)&self->field_0x38 = 0;
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x113,(void *)0x0);
  if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x64,(void *)0x0), bVar3)) {
    puVar1 = PTR_DAT_029b7f98;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if (*(long *)&self->field_0x40 == 0) goto LAB_013d7648;
      pvVar5 = *(void **)(*(long *)&self->field_0x40 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,pvVar5,(void *)0x0);
      if (!bVar3) goto LAB_013d7040;
LAB_013d7070:
      self->field_0x22 = 1;
      *(undefined4 *)&self->field_0x24 = 0;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
      if (bVar3) {
        pCVar6 = *(CharacterPlayer **)&self->field_0x48;
        if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
        if (((pCVar6->IsJumping == false) && (pCVar6->IsSliding == false)) &&
           (pCVar6->HasBoost == false)) {
          if (*(long *)&self->field_0x40 == 0) goto LAB_013d7648;
          if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) == '\0') {
            if ((pCVar6->GroundHeight <= -7.5) || (7.5 <= pCVar6->GroundHeight)) {
              CharacterPlayer_Stumble_12bd5ac(pCVar6,1.0,(void *)0x0);
              lVar4 = *(long *)&self->field_0x48;
              if (lVar4 == 0) goto LAB_013d7648;
              uVar10 = 0xc1700000;
            }
            else {
              CharacterPlayer_Stumble_12bd5ac(pCVar6,0.25,(void *)0x0);
              uVar9 = _UNK_007a46b8;
              uVar7 = _UNK_007a46b0;
              lVar4 = *(long *)&self->field_0x50;
              if (lVar4 == 0) goto LAB_013d7648;
              *(undefined1 *)(lVar4 + 0xf9) = 1;
              *(undefined8 *)(lVar4 + 0x104) = uVar9;
              *(undefined8 *)(lVar4 + 0xfc) = uVar7;
              lVar4 = *(long *)&self->field_0x48;
              if (lVar4 == 0) goto LAB_013d7648;
              uVar10 = 0xc1180000;
            }
            *(undefined4 *)(lVar4 + 400) = uVar10;
          }
        }
      }
    }
    else {
LAB_013d7040:
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
      if ((bVar3) && (self->joystickPosition == 1)) goto LAB_013d7070;
    }
    if (self->joystickPosition < 1) {
      self->joystickPosition = self->joystickPosition + 1;
    }
  }
  bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x114,(void *)0x0);
  if ((!bVar3) && (bVar3 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x61,(void *)0x0), !bVar3))
  goto LAB_013d75d4;
  puVar1 = PTR_DAT_029b7f98;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (*(long *)&self->field_0x40 == 0) goto LAB_013d7648;
    pvVar5 = *(void **)(*(long *)&self->field_0x40 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,pvVar5,(void *)0x0);
    if (!bVar3) goto LAB_013d74c4;
LAB_013d74f4:
    self->field_0x21 = 1;
    *(undefined4 *)&self->field_0x24 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
    if (bVar3) {
      pCVar6 = *(CharacterPlayer **)&self->field_0x48;
      if (pCVar6 == (CharacterPlayer *)0x0) goto LAB_013d7648;
      if (((pCVar6->IsJumping == false) && (pCVar6->IsSliding == false)) &&
         (pCVar6->HasBoost == false)) {
        if (*(long *)&self->field_0x40 == 0) goto LAB_013d7648;
        if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) == '\0') {
          if ((pCVar6->GroundHeight <= -7.5) || (7.5 <= pCVar6->GroundHeight)) {
            CharacterPlayer_Stumble_12bd5ac(pCVar6,1.0,(void *)0x0);
            lVar4 = *(long *)&self->field_0x48;
            if (lVar4 == 0) goto LAB_013d7648;
            uVar10 = 0x41700000;
          }
          else {
            CharacterPlayer_Stumble_12bd5ac(pCVar6,0.25,(void *)0x0);
            uVar9 = _UNK_007a46b8;
            uVar7 = _UNK_007a46b0;
            lVar4 = *(long *)&self->field_0x50;
            if (lVar4 == 0) {
LAB_013d7648:
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            *(undefined1 *)(lVar4 + 0xf9) = 1;
            *(undefined8 *)(lVar4 + 0x104) = uVar9;
            *(undefined8 *)(lVar4 + 0xfc) = uVar7;
            lVar4 = *(long *)&self->field_0x48;
            if (lVar4 == 0) goto LAB_013d7648;
            uVar10 = 0x41180000;
          }
          *(undefined4 *)(lVar4 + 400) = uVar10;
        }
      }
    }
  }
  else {
LAB_013d74c4:
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
    if ((bVar3) && (self->joystickPosition == -1)) goto LAB_013d74f4;
  }
  if (-1 < self->joystickPosition) {
    self->joystickPosition = self->joystickPosition + -1;
  }
LAB_013d75d4:
  bVar3 = UnityEngine_Input_GetKeyUp_2543d24((void *)0x114,(void *)0x0);
  if ((bVar3) || (bVar3 = UnityEngine_Input_GetKeyUp_2543d24((void *)0x113,(void *)0x0), bVar3)) {
    self->joystickPosition = 0;
  }
  return;
}

