// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddBonusItems(PathDirection direction, PathElement parentPiece) { }
// Ghidra address: 014127d8; ELF VA: 0x13127d8; file offset: 0x130e7d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_AddBonusItems_130e7d8
               (PathElement *self,int direction,PathElement *parentPiece,void *runtimeMethod)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  BonusItem *pBVar10;
  void *value;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack_34;
  
  puVar3 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9510a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1e98,direction);
    NativeHelper_011df0b4(PTR_DAT_029bf750);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1ea0);
    NativeHelper_011df0b4(PTR_DAT_029bafa8);
    bRam0000000002b9510a = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(parentPiece,(void *)0x0,(void *)0x0);
  puVar3 = PTR_DAT_029bde80;
  if (!bVar4) {
    lVar7 = *(long *)PTR_DAT_029bde80;
    pvVar9 = extraout_x1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar7 = *(long *)puVar3;
      pvVar9 = extraout_x1_00;
    }
    lVar11 = *(long *)(lVar7 + 0xb8);
    if (*(char *)(lVar11 + 5) == '\0') {
      return;
    }
    if (parentPiece == (PathElement *)0x0) {
LAB_01412c04:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    iVar5 = parentPiece->SpacesSinceLastBonusItem;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
      pvVar9 = extraout_x1_01;
    }
    if (iVar5 <= *(int *)(lVar11 + 0x18)) {
      return;
    }
    if (parentPiece->Obstacles == 5) {
      return;
    }
    if (self->HasCoins != false) {
      return;
    }
    if (self->HasBonusItems != false) {
      return;
    }
    if (parentPiece->SpacesSinceLastTurn < 3) {
      return;
    }
    bVar4 = PathElement_IsTurn_130b174(self,pvVar9);
    if (bVar4) {
      return;
    }
    iVar5 = parentPiece->Level;
    iVar1 = self->Level;
    fVar16 = 15.0;
    if (iVar5 != 3) {
      fVar16 = 0.0;
    }
    fVar13 = -15.0;
    if (iVar5 != 1) {
      fVar13 = fVar16;
    }
    fVar16 = 15.0;
    if (iVar1 != 3) {
      fVar16 = 0.0;
    }
    fVar14 = -15.0;
    if (iVar1 != 1) {
      fVar14 = fVar16;
    }
    if (fVar13 < fVar14) {
      return;
    }
    if (self->Obstacles == 5) {
      return;
    }
    fVar15 = 35.0;
    fVar16 = fVar15;
    if (iVar1 != 3) {
      fVar16 = 20.0;
    }
    fVar17 = 5.0;
    if (iVar1 != 1) {
      fVar17 = fVar16;
    }
    if (iVar5 != 3) {
      fVar15 = 20.0;
    }
    fVar16 = 5.0;
    if (iVar5 != 1) {
      fVar16 = fVar15;
    }
    if (fVar13 <= fVar14) {
      fVar16 = fVar17;
    }
    fVar13 = fVar16 + 5.0;
    if (self->Obstacles != 6) {
      fVar13 = fVar16;
    }
    uStack_34 = 0;
    lVar7 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e98,6);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar11);
      lVar11 = *(long *)puVar3;
    }
    lVar12 = *(long *)(lVar11 + 0xb8);
    if (*(float *)(lVar12 + 0x1c) <= 0.0) {
      uVar6 = 0;
    }
    else {
      if (lVar7 == 0) goto LAB_01412c04;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01412c08;
      *(undefined4 *)(lVar7 + 0x20) = 4;
      uVar6 = uStack_34 + 1;
      uStack_34 = uVar6;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar11);
      lVar11 = *(long *)puVar3;
      lVar12 = *(long *)(lVar11 + 0xb8);
    }
    if (0.0 < *(float *)(lVar12 + 0x20)) {
      if (lVar7 == 0) goto LAB_01412c04;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_01412c08;
      *(undefined4 *)(lVar7 + (long)(int)uVar6 * 4 + 0x20) = 5;
      uVar6 = uStack_34 + 1;
      uStack_34 = uVar6;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar11);
      lVar11 = *(long *)puVar3;
      lVar12 = *(long *)(lVar11 + 0xb8);
    }
    if (0.0 < *(float *)(lVar12 + 0x24)) {
      if (lVar7 == 0) goto LAB_01412c04;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_01412c08;
      *(undefined4 *)(lVar7 + (long)(int)uVar6 * 4 + 0x20) = 6;
      uVar6 = uStack_34 + 1;
      uStack_34 = uVar6;
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar11);
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
    }
    if (0.0 < *(float *)(lVar12 + 0x28)) {
      if (lVar7 == 0) goto LAB_01412c04;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_01412c08;
      *(undefined4 *)(lVar7 + (long)(int)uVar6 * 4 + 0x20) = 7;
      uVar6 = uStack_34 + 1;
      uStack_34 = uVar6;
    }
    if ((0 < (int)uVar6) && (iVar5 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0), iVar5 == 0))
    {
      uVar6 = UnityEngine_Random_Range_2507f84(0,uVar6,(void *)0x0);
      if (lVar7 == 0) goto LAB_01412c04;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_01412c08:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      uVar6 = *(uint *)(lVar7 + (long)(int)uVar6 * 4 + 0x20);
      if (uVar6 != 0) {
        if (*(int *)(*(long *)PTR_DAT_029bf750 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pBVar10 = BonusItem_Instantiate_12bbc58((void *)(ulong)uVar6,(void *)0x0);
        if (pBVar10 != (BonusItem *)0x0) {
          pvVar9 = (void *)NativeHelper_0260e1a8(pBVar10,0);
          value = (void *)NativeHelper_0260e1a8(self,0);
          if (pvVar9 != (void *)0x0) {
            UnityEngine_Transform_set_parent_2516ee0(pvVar9,value,(void *)0x0);
            pvVar9 = (void *)NativeHelper_0260e1a8(pBVar10,0);
            if (pvVar9 != (void *)0x0) {
              auVar2._4_8_ = 0;
              auVar2._0_4_ = fVar13;
              UnityEngine_Transform_set_localPosition_2515ec4
                        (pvVar9,(Recovered_Vector3)(auVar2 << 0x20),(void *)0x0);
              self->HasBonusItems = true;
              return;
            }
          }
        }
        goto LAB_01412c04;
      }
    }
    uVar8 = NativeHelper_01ffa318(&uStack_34,0);
    pvVar9 = (void *)NativeHelper_01e9bd68
                               (*(undefined8 *)PTR_DAT_029c1ea0,uVar8,
                                *(undefined8 *)PTR_DAT_029bafa8,0);
    DebugEx_Log_13222f4(pvVar9,(void *)0x0);
    self->SkippedBonusItems = true;
  }
  return;
}

