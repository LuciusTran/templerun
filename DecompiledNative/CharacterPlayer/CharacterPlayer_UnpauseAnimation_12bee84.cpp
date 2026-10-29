// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UnpauseAnimation() { }
// Ghidra address: 013c2e84; ELF VA: 0x12c2e84; file offset: 0x12bee84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_UnpauseAnimation_12bee84(CharacterPlayer *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *self_00;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *extraout_x1;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  
  if ((bRam0000000002b94e5d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9cb8);
    NativeHelper_011df0b4(PTR_DAT_029bf810);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    bRam0000000002b94e5d = 1;
    runtimeMethod = extraout_x1;
  }
  if (cRam0000000002b945bd == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b97c8,runtimeMethod);
    cRam0000000002b945bd = '\x01';
  }
  fVar13 = *(float *)&self->field_0x34;
  fVar12 = *(float *)&self->field_0x38;
  fVar11 = *(float *)&self->field_0x3c;
  if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
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
  fVar11 = (SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) / 100.0) * _UNK_007a3c80;
  do {
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c1c9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar7,0);
LAB_013c1c9c:
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
          goto LAB_013c1cfc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
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
    UnityEngine_AnimationState_set_speed_24e1440(plVar6,fVar11,(void *)0x0);
  } while( true );
LAB_013c1d30:
  plVar6 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c1d90;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar6,*(long *)puVar1,0);
LAB_013c1d90:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar4 = plVar6;
  }
  if (lVar7 == 0) {
    return;
  }
  auVar14 = NativeHelper_011df2d4(lVar7);
  if (auVar14._8_4_ != 1) goto LAB_013c1e0c;
  plVar6 = (long *)NativeHelper_02861460();
  lVar7 = *plVar6;
  NativeHelper_02861470();
  goto LAB_013c1d30;
LAB_013c1e0c:
  plVar4 = (long *)NativeHelper_011df1c0(plVar4,*(undefined8 *)puVar1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_013c1e6c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,*(long *)puVar1,0);
LAB_013c1e6c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  NativeHelper_012c28d8(auVar14._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

