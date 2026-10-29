// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PauseAnimation() { }
// Ghidra address: 013c2bbc; ELF VA: 0x12c2bbc; file offset: 0x12bebbc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_PauseAnimation_12bebbc(CharacterPlayer *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *self_00;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [12];
  
  if ((bRam0000000002b94e5e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9cb8);
    NativeHelper_011df0b4(PTR_DAT_029bf810);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    bRam0000000002b94e5e = 1;
  }
  if ((self->AnimateObject == (void *)0x0) ||
     (self_00 = UnityEngine_Component_GetComponent_13ccba8
                          (self->AnimateObject,*(void **)PTR_DAT_029bf810),
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
  do {
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c2ca0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar7,0);
LAB_013c2ca0:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      lVar7 = 0;
      break;
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_013c2d00;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar7,1);
LAB_013c2d00:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if (*plVar6 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df678();
    }
    UnityEngine_AnimationState_set_speed_24e1440(plVar6,0.0,(void *)0x0);
  } while( true );
LAB_013c2d34:
  plVar6 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c2d94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar6,*(long *)puVar1,0);
LAB_013c2d94:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar4 = plVar6;
  }
  if (lVar7 == 0) {
    return;
  }
  auVar11 = NativeHelper_011df2d4(lVar7);
  if (auVar11._8_4_ != 1) goto LAB_013c2e00;
  plVar6 = (long *)NativeHelper_02861460();
  lVar7 = *plVar6;
  NativeHelper_02861470();
  goto LAB_013c2d34;
LAB_013c2e00:
  plVar4 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c2e60;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,*(long *)puVar1,0);
LAB_013c2e60:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  NativeHelper_012c28d8(auVar11._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

