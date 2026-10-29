// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void HideAll() { }
// Ghidra address: 013e8f80; ELF VA: 0x12e8f80; file offset: 0x12e4f80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_HideAll_12e4f80(EndGameUI *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  void *extraout_x1;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auVar17 [12];
  
  puVar3 = PTR_DAT_029c0878;
  if ((bRam0000000002b94fca & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b97e8);
    NativeHelper_011df0b4(PTR_DAT_029c0878);
    NativeHelper_011df0b4(PTR_DAT_029c0880);
    bRam0000000002b94fca = 1;
    runtimeMethod = extraout_x1;
  }
  BasePanel_HideAll_12dfbf8((BasePanel *)self,runtimeMethod);
  NativeHelper_0260c7d0(0);
  UnityEngine_MonoBehaviour_StopCoroutine_250df88(self,*(void **)puVar3,(void *)0x0);
  if ((self->DoubleCoinsButton != (UISprite *)0x0) &&
     (pvVar6 = (void *)NativeHelper_0260e1a8(self->DoubleCoinsButton,0), pvVar6 != (void *)0x0)) {
    pvVar6 = UnityEngine_Transform_get_parent_2516614(pvVar6,(void *)0x0);
    puVar3 = PTR_DAT_029c0880;
    if (self->DoubleCoinsButton != (UISprite *)0x0) {
      pvVar7 = UnityEngine_object_get_name_25101a4(self->DoubleCoinsButton,(void *)0x0);
      uVar8 = NativeHelper_01e9390c(*(undefined8 *)puVar3,pvVar7,0);
      puVar3 = PTR_DAT_029b8028;
      if (pvVar6 != (void *)0x0) {
        plVar9 = UnityEngine_Transform_GetEnumerator_2517d48(pvVar6,(void *)0x0);
        puVar5 = PTR_DAT_029b97e8;
        puVar4 = PTR_DAT_029b86b8;
        puVar2 = PTR_DAT_029b7f98;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        do {
          lVar14 = *plVar9;
          lVar13 = *(long *)puVar4;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_013e90f4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,lVar13,0);
LAB_013e90f4:
          uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar15 & 1) == 0) {
            lVar13 = 0;
            goto LAB_013e91e4;
          }
          lVar14 = *plVar9;
          lVar13 = *(long *)puVar4;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_013e9154;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,lVar13,1);
LAB_013e9154:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df678(plVar11);
          }
          pvVar6 = UnityEngine_object_get_name_25101a4(plVar11,(void *)0x0);
          uVar15 = NativeHelper_01e9b79c(pvVar6,uVar8,0);
          if ((uVar15 & 1) != 0) {
            uVar12 = NativeHelper_0260e1e4(plVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            NativeHelper_02614ce0(uVar12,0);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013e91e4:
  plVar11 = (long *)NativeHelper_011df1c0(plVar9,*(undefined8 *)puVar3);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_013e9244;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar11,*(long *)puVar3,0);
LAB_013e9244:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
    plVar9 = plVar11;
  }
  if (lVar13 == 0) {
    return;
  }
  auVar17 = NativeHelper_011df2d4(lVar13);
  if (auVar17._8_4_ != 1) goto LAB_013e92cc;
  plVar11 = (long *)NativeHelper_02861460();
  lVar13 = *plVar11;
  NativeHelper_02861470();
  goto LAB_013e91e4;
LAB_013e92cc:
  plVar9 = (long *)NativeHelper_011df1c0(plVar9,*(undefined8 *)puVar3);
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_013e932c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_011b5528(plVar9,*(long *)puVar3,0);
LAB_013e932c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  NativeHelper_012c28d8(auVar17._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

