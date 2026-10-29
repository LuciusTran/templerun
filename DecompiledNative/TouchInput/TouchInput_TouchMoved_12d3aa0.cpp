// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TouchMoved(Vector2 touchPoint) { }
// Ghidra address: 013d7aa0; ELF VA: 0x12d7aa0; file offset: 0x12d3aa0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TouchInput_TouchMoved_12d3aa0
               (TouchInput *self,Recovered_Vector2 touchPoint,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  CharacterPlayer *pCVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  PathElement *pPVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Recovered_Vector3 point;
  
  if ((bRam0000000002b94f33 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c0288);
    NativeHelper_011df0b4(PTR_DAT_029c0290);
    bRam0000000002b94f33 = 1;
  }
  fVar15 = self->_Sensitivity;
  bVar2 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if (!bVar2) {
    return;
  }
  lVar8 = *(long *)&self->field_0x40;
  if (lVar8 == 0) goto LAB_013d8320;
  if (*(char *)(lVar8 + 0xee) != '\0') {
    return;
  }
  if (*(char *)(lVar8 + 0xec) != '\0') {
    return;
  }
  if (*(char *)(lVar8 + 0x12a) != '\0') {
    return;
  }
  if (self->IsSwiping == false) {
    return;
  }
  fVar16 = (self->LastSwipePoint).component0;
  fVar17 = (self->LastSwipePoint).component1;
  fVar15 = (1.0 - fVar15) * 1.75 + 0.25;
  if (cRam0000000002b94d38 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b94d38 = '\x01';
  }
  puVar1 = PTR_DAT_029b97c8;
  fVar16 = touchPoint.component0 - fVar16;
  fVar17 = touchPoint.component1 - fVar17;
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
  if (fVar16 < fVar15 * 44.0) {
    return;
  }
  fVar18 = (self->LastSwipePoint).component0;
  fVar17 = (self->LastSwipePoint).component1;
  if (cRam0000000002b945bf == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8);
    cRam0000000002b945bf = '\x01';
  }
  fVar18 = touchPoint.component0 - fVar18;
  fVar17 = touchPoint.component1 - fVar17;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  fVar14 = SQRT(fVar18 * fVar18 + fVar17 * fVar17);
  if (fVar14 <= _UNK_007a3c5c) {
    if (cRam0000000002b945be == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9a40);
      cRam0000000002b945be = '\x01';
    }
    fVar18 = **(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8);
    fVar17 = (*(float **)(*(long *)PTR_DAT_029b9a40 + 0xb8))[1];
  }
  else {
    fVar18 = fVar18 / fVar14;
    fVar17 = fVar17 / fVar14;
  }
  fVar17 = (float)NativeHelper_02861520(fVar17,fVar18);
  fVar18 = (_UNK_007a3c60 - fVar17) * _UNK_007a3bf0;
  fVar17 = fVar18 + 360.0;
  if (0.0 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = (float)(**(code **)(*(long *)self + 0x188))(self,*(undefined8 *)(*(long *)self + 400));
  if ((*(long *)&self->field_0x40 == 0) || (*(long *)&self->field_0x48 == 0)) goto LAB_013d8320;
  pPVar12 = *(PathElement **)(*(long *)&self->field_0x40 + 0x38);
  pvVar3 = (void *)NativeHelper_0260e1a8(*(long *)&self->field_0x48,0);
  if (pvVar3 == (void *)0x0) goto LAB_013d8320;
  point = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
  if ((*(long *)&self->field_0x40 == 0) || (pPVar12 == (PathElement *)0x0)) goto LAB_013d8320;
  fVar15 = fVar15 * 88.0;
  fVar18 = fVar18 * -2.0;
  pPVar12 = PathElement_GetPathElementIfPointOverTurn_131075c
                      (pPVar12,point,fVar15,*(int *)(*(long *)&self->field_0x40 + 0x40),true,3,
                       (void *)0x0);
  bVar2 = UnityEngine_Input_GetKeyDown_2543d60((void *)0x20,(void *)0x0);
  if (bVar2) {
    DebugEx_Break_1323c50((void *)0x0);
  }
  plVar13 = (long *)PTR_DAT_029b7f98;
  if ((fVar18 + _UNK_007a3c1c < fVar17) || (fVar17 <= fVar18 + 45.0)) {
    *(undefined4 *)&self->field_0x30 = 0;
    self->IsSwiping = false;
    self->field_0x2c = 1;
    goto LAB_013d7df8;
  }
  if ((fVar18 + 135.0 < fVar17) && (fVar17 <= fVar18 + 225.0)) {
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = GameController_get_AllowSwipeToSlamDown_129c878((void *)0x0);
    if (bVar2) {
      pCVar4 = *(CharacterPlayer **)&self->field_0x48;
      if (pCVar4 == (CharacterPlayer *)0x0) goto LAB_013d8320;
      if (pCVar4->IsJumping != false) {
        CharacterPlayer_SlamDown_12be420(pCVar4,(void *)0x0);
      }
    }
    *(undefined4 *)&self->field_0x38 = 0;
    self->IsSwiping = false;
    self->field_0x34 = 1;
    goto LAB_013d7df8;
  }
  if ((fVar17 <= fVar18 + 45.0) || (fVar18 + 135.0 < fVar17)) {
    if (fVar17 <= fVar18 + 225.0) {
      return;
    }
    if (fVar18 + _UNK_007a3c1c < fVar17) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (*(long *)&self->field_0x40 == 0) goto LAB_013d8320;
      pvVar3 = *(void **)(*(long *)&self->field_0x40 + 0x48);
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pvVar3,(void *)0x0);
      if (!bVar2) goto LAB_013d8054;
    }
    else {
LAB_013d8054:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
      puVar6 = (undefined8 *)PTR_DAT_029c0290;
      if ((fVar16 <= fVar15) || (!bVar2)) goto LAB_013d81c4;
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
      if (fVar16 <= fVar15) {
        return;
      }
      if (!bVar2) {
        return;
      }
    }
    self->field_0x21 = 1;
    *(undefined4 *)&self->field_0x24 = 0;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
    if (bVar2) {
      lVar8 = *(long *)&self->field_0x48;
      if (lVar8 == 0) goto LAB_013d8320;
      if (((*(char *)(lVar8 + 0xf8) == '\0') && (*(char *)(lVar8 + 0x100) == '\0')) &&
         (*(char *)(lVar8 + 0x174) == '\0')) {
        if (*(long *)&self->field_0x40 == 0) goto LAB_013d8320;
        if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar2 = GameController_get_AllowSwipeStumbleDeath_129c7b0((void *)0x0);
          if (bVar2) {
            pCVar4 = *(CharacterPlayer **)&self->field_0x48;
            if (pCVar4 == (CharacterPlayer *)0x0) goto LAB_013d8320;
            if ((pCVar4->GroundHeight <= -7.5) || (7.5 <= pCVar4->GroundHeight)) {
              CharacterPlayer_Stumble_12bd5ac(pCVar4,1.0,(void *)0x0);
              lVar8 = *(long *)&self->field_0x48;
              if (lVar8 == 0) goto LAB_013d8320;
              uVar9 = 0x41700000;
            }
            else {
              CharacterPlayer_Stumble_12bd5ac(pCVar4,0.25,(void *)0x0);
              uVar7 = _UNK_007a46b8;
              uVar5 = _UNK_007a46b0;
              lVar8 = *(long *)&self->field_0x50;
              if (lVar8 == 0) goto LAB_013d8320;
              *(undefined1 *)(lVar8 + 0xf9) = 1;
              *(undefined8 *)(lVar8 + 0x104) = uVar7;
              *(undefined8 *)(lVar8 + 0xfc) = uVar5;
              lVar8 = *(long *)&self->field_0x48;
              if (lVar8 == 0) goto LAB_013d8320;
              uVar9 = 0x41180000;
            }
            *(undefined4 *)(lVar8 + 400) = uVar9;
          }
        }
      }
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b9758;
    if (bVar2) {
      if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = GameController_get_AllowSwipeStumbleDeath_129c7b0((void *)0x0);
      if (!bVar2) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar2 = GameController_get_AllowSwipeToStrafe_129c814((void *)0x0);
        if (bVar2) {
          if (*(CharacterPlayer **)&self->field_0x48 == (CharacterPlayer *)0x0) goto LAB_013d8320;
          CharacterPlayer_StrafeLeft_12be448(*(CharacterPlayer **)&self->field_0x48,(void *)0x0);
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (*(long *)&self->field_0x40 == 0) goto LAB_013d8320;
      pvVar3 = *(void **)(*(long *)&self->field_0x40 + 0x48);
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        plVar13 = (long *)PTR_DAT_029b7f98;
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,pvVar3,(void *)0x0);
      if (!bVar2) goto LAB_013d7e78;
    }
    else {
LAB_013d7e78:
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
      puVar6 = (undefined8 *)PTR_DAT_029c0288;
      if ((fVar16 <= fVar15) || (!bVar2)) {
LAB_013d81c4:
        puVar1 = PTR_DAT_029b7fb8;
        uVar5 = *puVar6;
        if ((bRam0000000002b951cc & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
          bRam0000000002b951cc = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar1 = PTR_DAT_029b7fb8;
        uVar7 = 0;
        if ((bRam0000000002b9c2f8 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
          NativeHelper_011df0b4(PTR_DAT_029f2e60);
          bRam0000000002b9c2f8 = 1;
          uVar7 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          uVar7 = extraout_x1_00;
        }
        if (cRam0000000002b9b5c7 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar7);
          cRam0000000002b9b5c7 = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar8 = *(long *)puVar1;
        }
        plVar13 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        lVar8 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_029f2e60) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto code_r0x025edd08;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)NativeHelper_011b5528(plVar13,*(long *)PTR_DAT_029f2e60,3);
code_r0x025edd08:
                    /* WARNING: Could not recover jumptable at 0x025edd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(plVar13,3,uVar5,puVar6[1]);
        return;
      }
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
      if ((fVar16 <= fVar15) || (!bVar2)) goto LAB_013d8318;
    }
    self->field_0x22 = 1;
    *(undefined4 *)&self->field_0x24 = 0;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
    if (bVar2) {
      lVar8 = *(long *)&self->field_0x48;
      if (lVar8 == 0) goto LAB_013d8320;
      if (((*(char *)(lVar8 + 0xf8) == '\0') && (*(char *)(lVar8 + 0x100) == '\0')) &&
         (*(char *)(lVar8 + 0x174) == '\0')) {
        if (*(long *)&self->field_0x40 == 0) goto LAB_013d8320;
        plVar13 = (long *)PTR_DAT_029b7f98;
        if (*(char *)(*(long *)&self->field_0x40 + 0x2b9) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar2 = GameController_get_AllowSwipeStumbleDeath_129c7b0((void *)0x0);
          plVar13 = (long *)PTR_DAT_029b7f98;
          if (bVar2) {
            pCVar4 = *(CharacterPlayer **)&self->field_0x48;
            if (pCVar4 == (CharacterPlayer *)0x0) goto LAB_013d8320;
            if ((pCVar4->GroundHeight <= -7.5) || (7.5 <= pCVar4->GroundHeight)) {
              CharacterPlayer_Stumble_12bd5ac(pCVar4,1.0,(void *)0x0);
              lVar8 = *(long *)&self->field_0x48;
              if (lVar8 == 0) goto LAB_013d8320;
              uVar9 = 0xc1700000;
            }
            else {
              CharacterPlayer_Stumble_12bd5ac(pCVar4,0.25,(void *)0x0);
              uVar7 = _UNK_007a46b8;
              uVar5 = _UNK_007a46b0;
              lVar8 = *(long *)&self->field_0x50;
              if (lVar8 == 0) goto LAB_013d8320;
              *(undefined1 *)(lVar8 + 0xf9) = 1;
              *(undefined8 *)(lVar8 + 0x104) = uVar7;
              *(undefined8 *)(lVar8 + 0xfc) = uVar5;
              lVar8 = *(long *)&self->field_0x48;
              if (lVar8 == 0) goto LAB_013d8320;
              uVar9 = 0xc1180000;
            }
            *(undefined4 *)(lVar8 + 400) = uVar9;
            plVar13 = (long *)PTR_DAT_029b7f98;
          }
        }
      }
    }
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pPVar12,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b9758;
    if (bVar2) {
      if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = GameController_get_AllowSwipeStumbleDeath_129c7b0((void *)0x0);
      if (!bVar2) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar2 = GameController_get_AllowSwipeToStrafe_129c814((void *)0x0);
        if (bVar2) {
          if (*(CharacterPlayer **)&self->field_0x48 == (CharacterPlayer *)0x0) {
LAB_013d8320:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          CharacterPlayer_StrafeRight_12be4dc(*(CharacterPlayer **)&self->field_0x48,(void *)0x0);
        }
      }
    }
  }
LAB_013d8318:
  self->IsSwiping = false;
LAB_013d7df8:
  self->tapCount = 0;
  return;
}

