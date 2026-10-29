// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 01408a4c; ELF VA: 0x1308a4c; file offset: 0x1304a4c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIStack_Update_1304a4c(UIStack *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  ulong in_d1;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  Recovered_Vector3 RVar29;
  Recovered_Vector3 RVar30;
  undefined1 auVar31 [12];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (self->repositionNow == false) {
    return;
  }
  self->repositionNow = false;
  if ((bRam0000000002b950bb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9b10);
    NativeHelper_011df0b4(PTR_DAT_029c0e90);
    NativeHelper_011df0b4(PTR_DAT_029b9340);
    NativeHelper_011df0b4(PTR_DAT_029c1948);
    NativeHelper_011df0b4(PTR_DAT_029b9588);
    NativeHelper_011df0b4(PTR_DAT_029b9538);
    NativeHelper_011df0b4(PTR_DAT_029b94b0);
    NativeHelper_011df0b4(PTR_DAT_029b8000);
    NativeHelper_011df0b4(PTR_DAT_029b8008);
    NativeHelper_011df0b4(PTR_DAT_029b8010);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    NativeHelper_011df0b4(PTR_DAT_029b8030);
    NativeHelper_011df0b4(PTR_DAT_029ba1f0);
    NativeHelper_011df0b4(PTR_DAT_029baa98);
    NativeHelper_011df0b4(PTR_DAT_029b8430);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b97e8);
    bRam0000000002b950bb = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pvVar11 = (void *)NativeHelper_0260e1a8(self,0);
  puVar4 = PTR_DAT_029c1948;
  puVar3 = PTR_DAT_029b94b0;
  puVar2 = PTR_DAT_029b8028;
  if (pvVar11 != (void *)0x0) {
    uVar10 = NativeHelper_0261ba84(pvVar11,0);
    lVar12 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
    NativeHelper_0178bdbc(lVar12,uVar10,*(undefined8 *)puVar4);
    plVar13 = UnityEngine_Transform_GetEnumerator_2517d48(pvVar11,(void *)0x0);
    puVar5 = PTR_DAT_029b97e8;
    puVar4 = PTR_DAT_029b9340;
    puVar3 = PTR_DAT_029b86b8;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    do {
      lVar20 = *plVar13;
      lVar19 = *(long *)puVar3;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar19) {
            puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_014084c4;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)NativeHelper_011b5528(plVar13,lVar19,0);
LAB_014084c4:
      uVar21 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar21 & 1) == 0) {
        lVar19 = 0;
        goto LAB_01408590;
      }
      lVar20 = *plVar13;
      lVar19 = *(long *)puVar3;
      uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar19) {
            puVar14 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_01408524;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar14 = (undefined8 *)NativeHelper_011b5528(plVar13,lVar19,1);
LAB_01408524:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678(plVar15);
      }
      pvVar11 = UnityEngine_object_get_name_25101a4(plVar15,(void *)0x0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc(pvVar11,pvVar11);
      }
      NativeHelper_0178c6dc(lVar12,pvVar11,plVar15,*(undefined8 *)puVar4);
    } while( true );
  }
LAB_014088d0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_01408590:
  plVar15 = (long *)NativeHelper_011df1c0(plVar13,*(undefined8 *)puVar2);
  if (plVar15 != (long *)0x0) {
    lVar20 = *plVar15;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar14 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_014085f0;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)NativeHelper_011b5528(plVar15,*(long *)puVar2,0);
LAB_014085f0:
    (*(code *)*puVar14)(plVar15,puVar14[1]);
    plVar13 = plVar15;
  }
  puVar4 = PTR_DAT_029baa98;
  puVar3 = PTR_DAT_029b8430;
  if (lVar19 == 0) {
    if (lVar12 != 0) {
      uVar16 = NativeHelper_0178c41c(lVar12,*(undefined8 *)PTR_DAT_029b9538);
      lVar19 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
      NativeHelper_01a2f364(lVar19,uVar16,*(undefined8 *)puVar4);
      puVar8 = PTR_DAT_029c0e90;
      puVar7 = PTR_DAT_029b9b10;
      puVar6 = PTR_DAT_029b9588;
      puVar5 = PTR_DAT_029b8030;
      puVar4 = PTR_DAT_029b8008;
      puVar3 = PTR_DAT_029b8000;
      puVar2 = PTR_DAT_029b7f98;
      if (lVar19 != 0) {
        NativeHelper_01a313d0(lVar19,*(undefined8 *)PTR_DAT_029ba1f0);
        NativeHelper_01a30500(&uStack_d8,lVar19,*(undefined8 *)puVar5);
        uVar21 = 0;
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        uStack_b0 = uStack_c8;
        fVar25 = 0.0;
        do {
          uVar17 = NativeHelper_0182184c(&uStack_c0,*(undefined8 *)puVar4);
          if ((uVar17 & 1) == 0) {
            NativeHelper_01821848(&uStack_c0,*(undefined8 *)puVar3);
            return;
          }
          pvVar11 = (void *)NativeHelper_0178c65c(lVar12,uStack_b0,*(undefined8 *)puVar6);
          if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          pvVar18 = UnityEngine_Component_GetComponent_13ccba8(pvVar11,*(void **)puVar8);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar9 = UnityEngine_object_op_Inequality_250c8e4(pvVar18,(void *)0x0,(void *)0x0);
          if (bVar9) {
            if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            plVar13 = *(long **)((long)pvVar18 + 0x20);
            fVar28 = *(float *)((long)pvVar18 + 0x28);
          }
          else {
            plVar13 = (long *)0x0;
            fVar28 = 0.0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar9 = UnityEngine_object_op_Equality_250d534(plVar13,(void *)0x0,(void *)0x0);
          if (bVar9) {
            plVar13 = (long *)NativeHelper_014d0e0c(pvVar11,*(undefined8 *)puVar7);
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar9 = UnityEngine_object_op_Inequality_250c8e4(plVar13,(void *)0x0,(void *)0x0);
          uVar17 = uVar21;
          fVar23 = fVar25;
          if (bVar9) {
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            fVar23 = (float)(**(code **)(*plVar13 + 0x1c8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
            uVar17 = in_d1;
            pvVar18 = (void *)NativeHelper_0260e1a8(plVar13,0);
            uVar10 = (undefined4)(uVar17 >> 0x20);
            if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            RVar29 = UnityEngine_Transform_get_localScale_2516d6c(pvVar18,(void *)0x0);
            pvVar18 = (void *)NativeHelper_0260e1a8
                                        (RVar29.component0,CONCAT44(uVar10,RVar29.component1),
                                         RVar29.component2,plVar13,0);
            if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            RVar30 = UnityEngine_Transform_get_localScale_2516d6c(pvVar18,(void *)0x0);
            fVar24 = (float)in_d1 * RVar30.component1;
            if (*(int *)&self->field_0x20 == 0) {
              fVar27 = fVar25 + fVar28 + fVar23 * RVar29.component0 + self->padding;
              fVar25 = fVar25 + fVar28;
              uVar26 = uVar21;
            }
            else {
              fVar23 = (float)uVar21;
              uVar21 = (ulong)(uint)(fVar23 - fVar28);
              uVar26 = (ulong)(uint)(fVar23 - (fVar28 + fVar24 + self->padding));
              fVar27 = fVar25;
            }
            fVar28 = fVar24 * 0.5 + 0.0;
            if ((int)plVar13[7] != 4) {
              fVar28 = 0.0;
            }
            uVar17 = (ulong)(uint)((float)uVar21 - fVar28);
            uVar21 = uVar26;
            fVar23 = fVar25 + 0.0;
            fVar25 = fVar27;
          }
          in_d1 = uVar17;
          RVar29.component1 = (undefined4)in_d1;
          RVar29.component0 = fVar23;
          RVar29.component2 = 0.0;
          UnityEngine_Transform_set_localPosition_2515ec4(pvVar11,RVar29,(void *)0x0);
        } while( true );
      }
    }
    goto LAB_014088d0;
  }
  auVar31 = NativeHelper_011df2d4(lVar19);
  if (auVar31._8_4_ != 1) goto LAB_014089c8;
  plVar15 = (long *)NativeHelper_02861460();
  lVar19 = *plVar15;
  NativeHelper_02861470();
  goto LAB_01408590;
LAB_014089c8:
  plVar13 = (long *)NativeHelper_011df1c0(plVar13,*(undefined8 *)puVar2);
  if (plVar13 != (long *)0x0) {
    lVar12 = *plVar13;
    uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar2) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01408a28;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar14 = (undefined8 *)NativeHelper_011b5528(plVar13,*(long *)puVar2,0);
LAB_01408a28:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
  NativeHelper_012c28d8(auVar31._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

