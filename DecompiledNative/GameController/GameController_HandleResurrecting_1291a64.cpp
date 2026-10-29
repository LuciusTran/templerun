// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleResurrecting() { }
// Ghidra address: 01395a64; ELF VA: 0x1295a64; file offset: 0x1291a64
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_HandleResurrecting_1291a64(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  void *self_00;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  
  fVar13 = self->TimeSinceResurrectStart;
  fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  fVar13 = fVar13 + fVar12;
  self->TimeSinceResurrectStart = fVar13;
  if (1.0 <= fVar13) {
    if (self->MainCamera == (GameCamera *)0x0) {
LAB_01395ad8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if (self->MainCamera->field_0x64 == '\0') {
      if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_01395ad8;
      if ((self->MainCameraFocusPoint->IsFollowingPath == false) && (self->IsPaused == false)) {
        self->IsResurrecting = false;
        puVar1 = PTR_DAT_029bdf48;
        if ((bRam0000000002b94d14 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bde50);
          NativeHelper_011df0b4(PTR_DAT_029bdf48);
          bRam0000000002b94d14 = 1;
        }
        puVar2 = PTR_DAT_029bde50;
        if ((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8) != (GameGUI *)0x0) {
          GameGUI_ResumeSprite_12e7a24
                    ((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
          self->IsPaused = false;
          self->IsStartOfCountDown = true;
          self->IsInCountdown = true;
          self->TimeSinceCountdownStarted = 0.1;
          self->Has3SoundPlayed = false;
          self->Has2SoundPlayed = false;
          self->Has1SoundPlayed = false;
          lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar4 != 0) {
            uVar8 = 0;
            if ((bRam0000000002b94e5d & 1) == 0) {
              NativeHelper_011df0b4(PTR_DAT_029b9cb8,0);
              NativeHelper_011df0b4(PTR_DAT_029bf810);
              NativeHelper_011df0b4(PTR_DAT_029b8028);
              NativeHelper_011df0b4(PTR_DAT_029b86b8);
              bRam0000000002b94e5d = 1;
              uVar8 = extraout_x1;
            }
            if (cRam0000000002b945bd == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b97c8,uVar8);
              cRam0000000002b945bd = '\x01';
            }
            fVar14 = *(float *)(lVar4 + 0x34);
            fVar13 = *(float *)(lVar4 + 0x38);
            fVar12 = *(float *)(lVar4 + 0x3c);
            if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            if ((*(void **)(lVar4 + 0xa0) == (void *)0x0) ||
               (self_00 = UnityEngine_Component_GetComponent_13ccba8
                                    (*(void **)(lVar4 + 0xa0),*(void **)PTR_DAT_029bf810),
               puVar1 = PTR_DAT_029b8028, self_00 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            plVar5 = UnityEngine_Animation_GetEnumerator_24e115c(self_00,(void *)0x0);
            puVar3 = PTR_DAT_029b9cb8;
            puVar2 = PTR_DAT_029b86b8;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            fVar12 = (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) / 100.0) *
                     _UNK_007a3c80;
            do {
              lVar9 = *plVar5;
              lVar4 = *(long *)puVar2;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar4) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_013c1c9c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)NativeHelper_011b5528(plVar5,lVar4,0);
LAB_013c1c9c:
              uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar10 & 1) == 0) {
                lVar4 = 0;
                goto LAB_013c1d30;
              }
              lVar9 = *plVar5;
              lVar4 = *(long *)puVar2;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar4) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_013c1cfc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)NativeHelper_011b5528(plVar5,lVar4,1);
LAB_013c1cfc:
              plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2dc();
              }
              if (*plVar7 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df678();
              }
              UnityEngine_AnimationState_set_speed_24e1440(plVar7,fVar12,(void *)0x0);
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
  return;
LAB_013c1d30:
  plVar7 = (long *)NativeHelper_011df1c0(plVar5,*(undefined8 *)puVar1);
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c1d90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)NativeHelper_011b5528(plVar7,*(long *)puVar1,0);
LAB_013c1d90:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    plVar5 = plVar7;
  }
  if (lVar4 == 0) {
    return;
  }
  auVar15 = NativeHelper_011df2d4(lVar4);
  if (auVar15._8_4_ != 1) goto LAB_013c1e0c;
  plVar7 = (long *)NativeHelper_02861460();
  lVar4 = *plVar7;
  NativeHelper_02861470();
  goto LAB_013c1d30;
LAB_013c1e0c:
  plVar5 = (long *)NativeHelper_011df1c0(plVar5,*(undefined8 *)puVar1);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c1e6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)NativeHelper_011b5528(plVar5,*(long *)puVar1,0);
LAB_013c1e6c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  NativeHelper_012c28d8(auVar15._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

