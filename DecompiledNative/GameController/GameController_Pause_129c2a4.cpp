// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Pause() { }
// Ghidra address: 013a02a4; ELF VA: 0x12a02a4; file offset: 0x129c2a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_Pause_129c2a4(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [12];
  
  puVar1 = PTR_DAT_029bdf48;
  if ((bRam0000000002b94d13 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde50);
    NativeHelper_011df0b4(PTR_DAT_029bdf48);
    bRam0000000002b94d13 = 1;
  }
  puVar2 = PTR_DAT_029bde50;
  if ((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8) != (GameGUI *)0x0) {
    GameGUI_PauseSprite_12e79d0((GameGUI *)**(undefined8 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
    self->IsPaused = true;
    lVar4 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar4 != 0) {
      if ((bRam0000000002b94e5e & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b9cb8,0);
        NativeHelper_011df0b4(PTR_DAT_029bf810);
        NativeHelper_011df0b4(PTR_DAT_029b8028);
        NativeHelper_011df0b4(PTR_DAT_029b86b8);
        bRam0000000002b94e5e = 1;
      }
      pvVar5 = *(void **)(lVar4 + 0xa0);
      if ((pvVar5 == (void *)0x0) ||
         (pvVar5 = UnityEngine_Component_GetComponent_13ccba8(pvVar5,*(void **)PTR_DAT_029bf810),
         puVar1 = PTR_DAT_029b8028, pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      plVar6 = UnityEngine_Animation_GetEnumerator_24e115c(pvVar5,(void *)0x0);
      puVar3 = PTR_DAT_029b9cb8;
      puVar2 = PTR_DAT_029b86b8;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      do {
        lVar9 = *plVar6;
        lVar4 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_013c2ca0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)NativeHelper_011b5528(plVar6,lVar4,0);
LAB_013c2ca0:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          lVar4 = 0;
          goto LAB_013c2d34;
        }
        lVar9 = *plVar6;
        lVar4 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_013c2d00;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)NativeHelper_011b5528(plVar6,lVar4,1);
LAB_013c2d00:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (*plVar8 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678();
        }
        UnityEngine_AnimationState_set_speed_24e1440(plVar8,0.0,(void *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013c2d34:
  plVar8 = (long *)NativeHelper_011df1c0(plVar6,*(undefined8 *)puVar1);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c2d94;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)NativeHelper_011b5528(plVar8,*(long *)puVar1,0);
LAB_013c2d94:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
    plVar6 = plVar8;
  }
  if (lVar4 == 0) {
    return;
  }
  auVar12 = NativeHelper_011df2d4(lVar4);
  if (auVar12._8_4_ != 1) goto LAB_013c2e00;
  plVar8 = (long *)NativeHelper_02861460();
  lVar4 = *plVar8;
  NativeHelper_02861470();
  goto LAB_013c2d34;
LAB_013c2e00:
  plVar6 = (long *)NativeHelper_011df1c0(plVar6,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_013c2e60;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)NativeHelper_011b5528(plVar6,*(long *)puVar1,0);
LAB_013c2e60:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  NativeHelper_012c28d8(auVar12._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

