// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResumeClicked() { }
// Ghidra address: 013fada0; ELF VA: 0x12fada0; file offset: 0x12f6da0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PauseMenu_ResumeClicked_12f6da0(PauseMenu *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *self_00;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  
  puVar1 = PTR_DAT_029bdfa0;
  if ((bRam0000000002b95047 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029bdf48);
    bRam0000000002b95047 = 1;
  }
  puVar2 = PTR_DAT_029bdf48;
  if ((AudioManager *)**(undefined8 **)(*(long *)puVar1 + 0xb8) != (AudioManager *)0x0) {
    AudioManager_StartGameMusic_12bb130
              ((AudioManager *)**(undefined8 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
    (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
    if ((GameGUI *)**(undefined8 **)(*(long *)puVar2 + 0xb8) != (GameGUI *)0x0) {
      GameGUI_HideInGameBannerAdsIfDisabled_12e7a78
                ((GameGUI *)**(undefined8 **)(*(long *)puVar2 + 0xb8),(void *)0x0);
      puVar1 = PTR_DAT_029bdf48;
      lVar7 = *(long *)&self->field_0x20;
      if (lVar7 != 0) {
        if ((bRam0000000002b94d14 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bde50,0);
          NativeHelper_011df0b4(PTR_DAT_029bdf48);
          bRam0000000002b94d14 = 1;
        }
        puVar2 = PTR_DAT_029bde50;
        if ((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8) != (GameGUI *)0x0) {
          GameGUI_ResumeSprite_12e7a24
                    ((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
          *(undefined1 *)(lVar7 + 0xec) = 0;
          *(undefined1 *)(lVar7 + 0x224) = 1;
          *(undefined1 *)(lVar7 + 0x21f) = 1;
          *(undefined4 *)(lVar7 + 0x220) = 0x3dcccccd;
          *(undefined2 *)(lVar7 + 0x225) = 0;
          *(undefined1 *)(lVar7 + 0x227) = 0;
          lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar7 != 0) {
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
            fVar14 = *(float *)(lVar7 + 0x34);
            fVar13 = *(float *)(lVar7 + 0x38);
            fVar12 = *(float *)(lVar7 + 0x3c);
            if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            if ((*(void **)(lVar7 + 0xa0) == (void *)0x0) ||
               (self_00 = UnityEngine_Component_GetComponent_13ccba8
                                    (*(void **)(lVar7 + 0xa0),*(void **)PTR_DAT_029bf810),
               puVar1 = PTR_DAT_029b8028, self_00 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            plVar4 = UnityEngine_Animation_GetEnumerator_24e115c(self_00,(void *)0x0);
            puVar3 = PTR_DAT_029b9cb8;
            puVar2 = PTR_DAT_029b86b8;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            fVar12 = (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) / 100.0) *
                     _UNK_007a3c80;
            do {
              lVar9 = *plVar4;
              lVar7 = *(long *)puVar2;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_013c1c9c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar7,0);
LAB_013c1c9c:
              uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              if ((uVar10 & 1) == 0) {
                lVar7 = 0;
                goto LAB_013c1d30;
              }
              lVar9 = *plVar4;
              lVar7 = *(long *)puVar2;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_013c1cfc;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar7,1);
LAB_013c1cfc:
              plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2dc();
              }
              if (*plVar6 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df678();
              }
              UnityEngine_AnimationState_set_speed_24e1440(plVar6,fVar12,(void *)0x0);
            } while( true );
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013c1d30:
  plVar6 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c1d90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar6,*(long *)puVar1,0);
LAB_013c1d90:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar4 = plVar6;
  }
  if (lVar7 == 0) {
    return;
  }
  auVar15 = NativeHelper_011df2d4(lVar7);
  if (auVar15._8_4_ != 1) goto LAB_013c1e0c;
  plVar6 = (long *)NativeHelper_02861460();
  lVar7 = *plVar6;
  NativeHelper_02861470();
  goto LAB_013c1d30;
LAB_013c1e0c:
  plVar4 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c1e6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,*(long *)puVar1,0);
LAB_013c1e6c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  NativeHelper_012c28d8(auVar15._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

