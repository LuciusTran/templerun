// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ClearTerrainPieces() { }
// Ghidra address: 0140e784; ELF VA: 0x130e784; file offset: 0x130a784
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_ClearTerrainPieces_130a784(PathElement *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  void *self_00;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  DynamicElement *self_01;
  undefined8 uVar13;
  void *runtimeMethod_00;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auVar17 [12];
  
  PathElement_RemoveAllSubObjects_130b440(self,runtimeMethod);
  if ((bRam0000000002b94f46 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0380,0);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b97e8);
    bRam0000000002b94f46 = 1;
  }
  lVar9 = NativeHelper_0260e1a8(self,0);
  if (lVar9 != 0) {
    iVar8 = NativeHelper_0261ba84(lVar9,0);
    if (iVar8 == 0) {
      return;
    }
    self_00 = (void *)NativeHelper_0260e1a8(self,0);
    puVar3 = PTR_DAT_029b8028;
    if (self_00 != (void *)0x0) {
      plVar10 = UnityEngine_Transform_GetEnumerator_2517d48(self_00,(void *)0x0);
      puVar6 = PTR_DAT_029c0380;
      puVar5 = PTR_DAT_029b97e8;
      puVar4 = PTR_DAT_029b86b8;
      puVar2 = PTR_DAT_029b7f98;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      do {
        lVar14 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_013d9a54;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)NativeHelper_011b5528(plVar10,lVar9,0);
LAB_013d9a54:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) {
          lVar9 = 0;
          goto LAB_013d9b6c;
        }
        lVar14 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_013d9ab4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)NativeHelper_011b5528(plVar10,lVar9,1);
LAB_013d9ab4:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678(plVar12);
        }
        self_01 = UnityEngine_Component_GetComponent_13ccba8(plVar12,*(void **)puVar6);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Equality_250d534(self_01,(void *)0x0,(void *)0x0);
        if (bVar7) {
          uVar13 = NativeHelper_0260e1e4(plVar12,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          NativeHelper_02614ce0(uVar13,0);
        }
        else {
          if (self_01 == (DynamicElement *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          DynamicElement_DestroySelf_12d5ce8(self_01,runtimeMethod_00);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013d9b6c:
  plVar12 = (long *)NativeHelper_011df1c0(plVar10,*(undefined8 *)puVar3);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_013d9bcc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)NativeHelper_011b5528(plVar12,*(long *)puVar3,0);
LAB_013d9bcc:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
    plVar10 = plVar12;
  }
  if (lVar9 == 0) {
    return;
  }
  auVar17 = NativeHelper_011df2d4(lVar9);
  if (auVar17._8_4_ != 1) goto LAB_013d9c64;
  plVar12 = (long *)NativeHelper_02861460();
  lVar9 = *plVar12;
  NativeHelper_02861470();
  goto LAB_013d9b6c;
LAB_013d9c64:
  plVar10 = (long *)NativeHelper_011df1c0(plVar10,*(undefined8 *)puVar3);
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_013d9cc4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)NativeHelper_011b5528(plVar10,*(long *)puVar3,0);
LAB_013d9cc4:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  NativeHelper_012c28d8(auVar17._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

