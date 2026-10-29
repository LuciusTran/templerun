// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddCoins(PathDirection direction, PathElement parentPiece) { }
// Ghidra address: 014114b8; ELF VA: 0x13114b8; file offset: 0x130d4b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathElement_AddCoins_130d4b8
               (PathElement *self,int direction,PathElement *parentPiece,void *runtimeMethod)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  BonusItem *item1;
  void *pvVar18;
  void *value;
  BonusItem *item1_00;
  BonusItem *item1_01;
  BonusItem *item1_02;
  BonusItem *item1_03;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  void *runtimeMethod_05;
  void *runtimeMethod_06;
  void *extraout_x1_01;
  void *runtimeMethod_07;
  void *runtimeMethod_08;
  void *runtimeMethod_09;
  void *runtimeMethod_10;
  void *runtimeMethod_11;
  void *extraout_x1_02;
  void *runtimeMethod_12;
  void *runtimeMethod_13;
  void *runtimeMethod_14;
  void *runtimeMethod_15;
  void *runtimeMethod_16;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *runtimeMethod_17;
  void *runtimeMethod_18;
  void *runtimeMethod_19;
  void *runtimeMethod_20;
  void *extraout_x1_05;
  void *runtimeMethod_21;
  void *runtimeMethod_22;
  void *runtimeMethod_23;
  void *extraout_x1_06;
  void *runtimeMethod_24;
  void *runtimeMethod_25;
  void *runtimeMethod_26;
  void *runtimeMethod_27;
  void *extraout_x1_07;
  void *runtimeMethod_28;
  void *runtimeMethod_29;
  void *runtimeMethod_30;
  void *extraout_x1_08;
  long lVar19;
  char cVar20;
  char cVar21;
  void *pvVar22;
  long unaff_x30;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float y;
  float z;
  float z_00;
  float y_00;
  float z_01;
  float z_02;
  float z_03;
  Recovered_Vector3 value_00;
  Recovered_Vector3 value_01;
  Recovered_Vector3 value_02;
  Recovered_Vector3 value_03;
  Recovered_Vector3 value_04;
  Recovered_Vector3 value_05;
  Recovered_Vector3 value_06;
  Recovered_Vector3 value_07;
  Recovered_Vector3 value_08;
  Recovered_Vector3 value_09;
  
  puVar4 = PTR_DAT_029b7f98;
  if ((bRam0000000002b95109 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf750);
    NativeHelper_011df0b4(PTR_DAT_029c1e10);
    NativeHelper_011df0b4(PTR_DAT_029b8f98);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1e00);
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029c1e78);
    NativeHelper_011df0b4(PTR_DAT_029bf788);
    bRam0000000002b95109 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar10 = UnityEngine_object_op_Equality_250d534(parentPiece,(void *)0x0,(void *)0x0);
  puVar6 = PTR_DAT_029bde80;
  if (bVar10) {
    return;
  }
  if (self->HasCoins != false) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_029bde80;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar6;
  }
  lVar19 = *(long *)(lVar15 + 0xb8);
  if (*(char *)(lVar19 + 0x10) == '\0') {
    return;
  }
  if (parentPiece == (PathElement *)0x0) goto LAB_014127d0;
  iVar13 = parentPiece->CoinRunCount;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar6;
    lVar19 = *(long *)(lVar15 + 0xb8);
  }
  if (*(int *)(lVar19 + 0x40) <= iVar13) {
    return;
  }
  iVar13 = parentPiece->SpacesSinceLastCoinRun;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar6;
    lVar19 = *(long *)(lVar15 + 0xb8);
  }
  if (iVar13 <= *(int *)(lVar19 + 0x3c)) {
    return;
  }
  if (((self->HasObstacles != false) && (self->Obstacles != 2)) && (self->Obstacles != 5)) {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
    }
    if (*(char *)(lVar19 + 0x15) == '\0') {
      return;
    }
  }
  if (self->Obstacles == 7) {
    return;
  }
  iVar13 = self->Type;
  uVar16 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e00,4);
  NativeHelper_01f3db6c(uVar16,*(undefined8 *)PTR_DAT_029c1e78,0);
  uVar17 = NativeHelper_01505ab4(iVar13,uVar16,*(undefined8 *)PTR_DAT_029c1e10);
  if ((uVar17 & 1) != 0) {
    return;
  }
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar6;
  }
  lVar19 = *(long *)(lVar15 + 0xb8);
  if (*(char *)(lVar19 + 0x11) == '\0') {
LAB_01411714:
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar15 = *(long *)puVar6;
    }
    lVar19 = *(long *)(lVar15 + 0xb8);
    if (*(char *)(lVar19 + 0x11) != '\0') {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar15 = *(long *)puVar6;
        lVar19 = *(long *)(lVar15 + 0xb8);
      }
      if (*(char *)(lVar19 + 0x12) != '\0') {
        pvVar22 = (void *)0x2;
        uVar14 = 3;
        goto LAB_014117b4;
      }
    }
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar15 = *(long *)puVar6;
    }
    lVar19 = *(long *)(lVar15 + 0xb8);
    if (*(char *)(lVar19 + 0x11) == '\0') {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
      }
      uVar14 = 3;
      if (*(char *)(lVar19 + 0x12) == '\0') {
        uVar14 = 1;
      }
      pvVar22 = (void *)(ulong)uVar14;
    }
    else {
      uVar14 = 1;
      pvVar22 = (void *)0x1;
    }
  }
  else {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar15 = *(long *)puVar6;
      lVar19 = *(long *)(lVar15 + 0xb8);
    }
    if (*(char *)(lVar19 + 0x12) != '\0') goto LAB_01411714;
    pvVar22 = (void *)0x1;
    uVar14 = 2;
  }
LAB_014117b4:
  puVar5 = PTR_DAT_029b90f0;
  lVar15 = *(long *)PTR_DAT_029b90f0;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar5;
  }
  if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_014127d0;
  lVar15 = NativeHelper_012e8f84(**(long **)(lVar15 + 0xb8),*(undefined8 *)PTR_DAT_029bf788,0);
  if (*(int *)(*(long *)PTR_DAT_029bf750 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029bf750);
  }
  item1 = BonusItem_Instantiate_12bbc58(pvVar22,(void *)0x0);
  if ((item1 == (BonusItem *)0x0) ||
     (pvVar18 = (void *)NativeHelper_0260e1a8(item1,0), pvVar18 == (void *)0x0)) goto LAB_014127d0;
  UnityEngine_Transform_set_eulerAngles_2516958
            (pvVar18,(Recovered_Vector3)ZEXT812(0xc2b4000000000000),(void *)0x0);
  pvVar18 = (void *)NativeHelper_0260e1a8(item1,0);
  value = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar18 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_parent_2516ee0(pvVar18,value,(void *)0x0);
  item1_00 = BonusItem_Instantiate_12bbc58(pvVar22,(void *)0x0);
  if ((item1_00 == (BonusItem *)0x0) ||
     (pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0), pvVar22 == (void *)0x0))
  goto LAB_014127d0;
  UnityEngine_Transform_set_eulerAngles_2516958
            (pvVar22,(Recovered_Vector3)ZEXT812(0xc258000000000000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
  pvVar18 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_parent_2516ee0(pvVar22,pvVar18,(void *)0x0);
  item1_01 = BonusItem_Instantiate_12bbc58((void *)(ulong)uVar14,(void *)0x0);
  if ((item1_01 == (BonusItem *)0x0) ||
     (pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0), pvVar22 == (void *)0x0))
  goto LAB_014127d0;
  UnityEngine_Transform_set_eulerAngles_2516958
            (pvVar22,(Recovered_Vector3)ZEXT812(0xc190000000000000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0);
  pvVar18 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_parent_2516ee0(pvVar22,pvVar18,(void *)0x0);
  item1_02 = BonusItem_Instantiate_12bbc58((void *)(ulong)uVar14,(void *)0x0);
  if ((item1_02 == (BonusItem *)0x0) ||
     (pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0), pvVar22 == (void *)0x0))
  goto LAB_014127d0;
  UnityEngine_Transform_set_eulerAngles_2516958
            (pvVar22,(Recovered_Vector3)ZEXT812(0xc190000000000000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0);
  pvVar18 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_parent_2516ee0(pvVar22,pvVar18,(void *)0x0);
  item1_03 = BonusItem_Instantiate_12bbc58((void *)0x1,(void *)0x0);
  if ((item1_03 == (BonusItem *)0x0) ||
     (pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0), pvVar22 == (void *)0x0))
  goto LAB_014127d0;
  UnityEngine_Transform_set_eulerAngles_2516958
            (pvVar22,(Recovered_Vector3)ZEXT812(0x4258000000000000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
  pvVar18 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_parent_2516ee0(pvVar22,pvVar18,(void *)0x0);
  pvVar22 = extraout_x1;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar22 = extraout_x1_00;
  }
  PathElement_ResetItem_13115e4(item1,pvVar22);
  PathElement_ResetItem_13115e4(item1_00,runtimeMethod_00);
  PathElement_ResetItem_13115e4(item1_01,runtimeMethod_01);
  PathElement_ResetItem_13115e4(item1_02,runtimeMethod_02);
  PathElement_ResetItem_13115e4(item1_03,runtimeMethod_03);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  puVar5 = PTR_DAT_029b9368;
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,**(Recovered_Vector3 **)(*(long *)puVar5 + 0xb8),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0);
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,**(Recovered_Vector3 **)(*(long *)puVar5 + 0xb8),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0);
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,**(Recovered_Vector3 **)(*(long *)puVar5 + 0xb8),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,**(Recovered_Vector3 **)(*(long *)puVar5 + 0xb8),(void *)0x0);
  bVar10 = PathElement_IsStraightVert_130b59c(self,runtimeMethod_04);
  if (bVar10) {
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_00.component2 = -25.0;
    value_00.component0 = 0.0;
    value_00.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_00,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_01.component2 = -12.5;
    value_01.component0 = 0.0;
    value_01.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_01,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar22,(Recovered_Vector3)ZEXT812(0x4040000000000000),(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_02.component2 = 12.5;
    value_02.component0 = 0.0;
    value_02.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_02,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    uVar23 = 0;
    fVar26 = 25.0;
    goto LAB_01411efc;
  }
  bVar10 = PathElement_IsStraightHorz_130b618(self,runtimeMethod_05);
  if (bVar10) {
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar22,(Recovered_Vector3)ZEXT812(0x4040000041c80000),(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    uVar23 = 0x41480000;
    fVar26 = 0.0;
    goto code_r0x01411cf4;
  }
  switch(self->Type) {
  case 3:
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_04.component2 = -25.0;
    value_04.component0 = 0.0;
    value_04.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_04,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    uVar23 = 0;
    fVar26 = -12.5;
    break;
  case 4:
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_05.component2 = -25.0;
    value_05.component0 = 0.0;
    value_05.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_05,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    fVar26 = -12.5;
    goto code_r0x01411e90;
  case 5:
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_06.component2 = 25.0;
    value_06.component0 = 0.0;
    value_06.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_06,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    uVar23 = 0;
    fVar26 = 12.5;
    break;
  case 6:
    pvVar22 = (void *)NativeHelper_0260e1a8(item1,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    value_07.component2 = 25.0;
    value_07.component0 = 0.0;
    value_07.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_07,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_00,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    fVar26 = 12.5;
code_r0x01411e90:
    value_08.component2 = fVar26;
    value_08.component0 = 0.0;
    value_08.component1 = 3.0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_08,(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar22,(Recovered_Vector3)ZEXT812(0x4040000000000000),(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar22,(Recovered_Vector3)ZEXT812(0x4040000041480000),(void *)0x0);
    pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
    if (pvVar22 == (void *)0x0) goto LAB_014127d0;
    uVar23 = 0x41c80000;
    goto LAB_01411ef4;
  default:
    goto LAB_01411f04;
  }
code_r0x01411cf4:
  value_03.component1 = 3.0;
  value_03.component0 = (float)uVar23;
  value_03.component2 = fVar26;
  UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_03,(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_01,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,(Recovered_Vector3)ZEXT812(0x4040000000000000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_02,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  UnityEngine_Transform_set_localPosition_2515ec4
            (pvVar22,(Recovered_Vector3)ZEXT812(0x40400000c1480000),(void *)0x0);
  pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
  if (pvVar22 == (void *)0x0) goto LAB_014127d0;
  uVar23 = 0xc1c80000;
LAB_01411ef4:
  fVar26 = 0.0;
LAB_01411efc:
  value_09.component1 = 3.0;
  value_09.component0 = (float)uVar23;
  value_09.component2 = fVar26;
  UnityEngine_Transform_set_localPosition_2515ec4(pvVar22,value_09,(void *)0x0);
LAB_01411f04:
  fVar26 = 18.0;
  if (self->Level != 3) {
    fVar26 = 3.0;
  }
  y = -12.0;
  if (self->Level != 1) {
    y = fVar26;
  }
  fVar26 = y;
  if (((self->HasObstacles != false) && (iVar13 = self->Obstacles, iVar13 != 2)) && (iVar13 != 5)) {
    if (iVar13 == 6) {
      iVar13 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
      if (iVar13 == 0) {
        lVar19 = *(long *)puVar6;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar19 = *(long *)puVar6;
        }
        if (*(char *)(*(long *)(lVar19 + 0xb8) + 0x15) != '\0') goto LAB_01411f9c;
      }
      if (self->Obstacles == 6) goto LAB_01411fe4;
    }
LAB_01411f9c:
    iVar13 = self->Level;
    fVar26 = 33.0;
    if (iVar13 != 3) {
      fVar26 = 18.0;
    }
    fVar24 = 35.0;
    if (iVar13 != 3) {
      fVar24 = 20.0;
    }
    y = 3.0;
    if (iVar13 != 1) {
      y = fVar26;
    }
    fVar26 = 5.0;
    if (iVar13 != 1) {
      fVar26 = fVar24;
    }
    self->IsCoinRunInAir = true;
  }
LAB_01411fe4:
  lVar19 = *(long *)puVar6;
  if (*(int *)(lVar19 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar19 = *(long *)puVar6;
  }
  lVar19 = *(long *)(lVar19 + 0xb8);
  cVar1 = *(char *)(lVar19 + 0x14);
  bVar7 = *(char *)(lVar19 + 0x16) != '\0';
  bVar10 = *(char *)(lVar19 + 0x13) != '\0';
  cVar20 = cVar1;
  cVar21 = cVar1;
  if (self->Obstacles != 2) goto code_r0x014120c8;
  bVar7 = false;
  bVar10 = false;
  cVar20 = '\0';
  cVar21 = '\0';
  switch(self->Type) {
  case 0x11:
  case 0x12:
    break;
  case 0x13:
  case 0x14:
  case 0x15:
    if (direction != 1) {
      if (direction == 3) goto code_r0x01412144;
      goto LAB_014120b8;
    }
code_r0x014120a8:
    bVar7 = false;
    bVar10 = false;
    cVar20 = '\0';
    cVar21 = cVar1;
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    if (direction != 1) {
      if (direction == 3) goto code_r0x014120a8;
      goto LAB_014120b8;
    }
code_r0x01412144:
    bVar7 = false;
    bVar10 = false;
    cVar20 = cVar1;
    cVar21 = '\0';
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    if (direction == 2) goto code_r0x014120a8;
    if (direction == 4) goto code_r0x01412144;
  default:
LAB_014120b8:
    bVar7 = false;
    bVar10 = false;
    cVar20 = cVar1;
    cVar21 = cVar1;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    if (direction == 2) goto code_r0x01412144;
    if (direction == 4) goto code_r0x014120a8;
    goto LAB_014120b8;
  }
code_r0x014120c8:
  bVar8 = cVar21 != '\0';
  bVar9 = cVar20 != '\0';
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar11 = UnityEngine_object_op_Inequality_250c8e4(parentPiece,(void *)0x0,(void *)0x0);
  bVar3 = bVar7;
  bVar2 = bVar7;
  if (bVar11) {
    iVar13 = parentPiece->CoinLocationEnd;
    if (iVar13 == 1) {
      bVar11 = false;
      bVar8 = false;
LAB_0141217c:
      bVar9 = false;
      bVar7 = false;
    }
    else {
      bVar11 = bVar7;
      if (iVar13 == 2) {
        bVar10 = false;
        bVar2 = false;
        goto LAB_0141217c;
      }
      if (iVar13 == 3) {
        bVar8 = false;
        bVar10 = false;
        bVar2 = false;
        bVar11 = false;
      }
    }
    bVar12 = PathElement_IsTurn_130b174(self,runtimeMethod_06);
    bVar3 = bVar7;
    bVar7 = bVar11;
    if (bVar12) {
      if (parentPiece->CoinLocationEnd != 1) {
        uVar16 = NativeHelper_0260e1a8(item1,0);
        if (lVar15 != 0) {
          NativeHelper_012eb6dc(lVar15,uVar16,0);
          uVar16 = NativeHelper_0260e1a8(item1_00,0);
          NativeHelper_012eb6dc(lVar15,uVar16,0);
          uVar16 = NativeHelper_0260e1a8(item1_01,0);
          NativeHelper_012eb6dc(lVar15,uVar16,0);
          uVar16 = NativeHelper_0260e1a8(item1_02,0);
          NativeHelper_012eb6dc(lVar15,uVar16,0);
          pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
          goto code_r0x012eb6dc;
        }
        goto LAB_014127d0;
      }
      bVar7 = false;
      bVar2 = false;
      bVar3 = false;
      bVar9 = false;
      bVar8 = false;
    }
    if ((parentPiece->IsCoinRunInAir == false) || (self->IsCoinRunInAir != false))
    goto LAB_014121d0;
    if (self->Level == 1) {
      fVar25 = -15.0;
      y_00 = -9.0;
      fVar26 = -4.0;
      fVar24 = -14.0;
      y = 0.0;
    }
    else {
      bVar11 = self->Level != 3;
      y = 30.0;
      if (bVar11) {
        y = 15.0;
      }
      fVar26 = 26.0;
      if (bVar11) {
        fVar26 = 11.0;
      }
      y_00 = 21.0;
      if (bVar11) {
        y_00 = 6.0;
      }
      fVar24 = 16.0;
      if (bVar11) {
        fVar24 = 1.0;
      }
      fVar25 = 15.0;
      if (bVar11) {
        fVar25 = 0.0;
      }
    }
    fVar25 = fVar25 + 0.0;
    lVar19 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8f98,7);
    if (!bVar10) goto LAB_01412328;
LAB_014121f4:
    if (lVar19 == 0) goto LAB_014127d0;
    if (*(int *)(lVar19 + 0x18) == 0) goto LAB_014127d4;
    uVar14 = 1;
    *(undefined4 *)(lVar19 + 0x20) = 0;
    if (bVar8) goto LAB_01412334;
LAB_01412360:
    if (bVar9) {
      if (lVar19 == 0) goto LAB_014127d0;
      goto LAB_0141236c;
    }
LAB_01412398:
    if (bVar2) {
      if (lVar19 == 0) goto LAB_014127d0;
      goto LAB_014123a4;
    }
LAB_014123d0:
    if (bVar3) {
      if (lVar19 == 0) goto LAB_014127d0;
      bVar10 = false;
LAB_014123dc:
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
      uVar17 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
      *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 4;
      if (bVar10) goto LAB_01412408;
    }
    if (bVar7) {
      if (lVar19 == 0) goto LAB_014127d0;
LAB_01412438:
      if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
      uVar17 = (ulong)uVar14;
      uVar14 = uVar14 + 1;
      *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 6;
      goto LAB_01412454;
    }
    if (uVar14 == 0) {
      uVar16 = NativeHelper_0260e1a8(item1,0);
      if (lVar15 != 0) {
        NativeHelper_012eb6dc(lVar15,uVar16,0);
        uVar16 = NativeHelper_0260e1a8(item1_00,0);
        NativeHelper_012eb6dc(lVar15,uVar16,0);
        uVar16 = NativeHelper_0260e1a8(item1_01,0);
        NativeHelper_012eb6dc(lVar15,uVar16,0);
        uVar16 = NativeHelper_0260e1a8(item1_02,0);
        NativeHelper_012eb6dc(lVar15,uVar16,0);
        pvVar22 = (void *)NativeHelper_0260e1a8(item1_03,0);
code_r0x012eb6dc:
        if ((bRam0000000002b944e5 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar22,0);
          NativeHelper_011df0b4(PTR_DAT_029b9278);
          NativeHelper_011df0b4(PTR_DAT_029b9280);
          NativeHelper_011df0b4(PTR_DAT_029b9288);
          NativeHelper_011df0b4(PTR_DAT_029b93e0);
          NativeHelper_011df0b4(PTR_DAT_029b9298);
          NativeHelper_011df0b4(PTR_DAT_029b93e8);
          NativeHelper_011df0b4(PTR_DAT_029b93f0);
          NativeHelper_011df0b4(PTR_DAT_029b93f8);
          bRam0000000002b944e5 = 1;
        }
        puVar6 = PTR_DAT_029b93e0;
        puVar4 = PTR_DAT_029b9280;
        if (*(long *)(lVar15 + 0x60) != 0) {
          NativeHelper_01a30500
                    (&stack0xffffffffffffff98,*(long *)(lVar15 + 0x60),
                     *(undefined8 *)PTR_DAT_029b9298);
          while( true ) {
            uVar17 = NativeHelper_0182184c(&stack0xffffffffffffffb0,*(undefined8 *)puVar4);
            if ((uVar17 & 1) == 0) {
              NativeHelper_01821848(&stack0xffffffffffffffb0,*(undefined8 *)PTR_DAT_029b9278);
              if (pvVar22 != (void *)0x0) {
                uVar16 = *(undefined8 *)(lVar15 + 0x20);
                pvVar22 = UnityEngine_object_get_name_25101a4(pvVar22,(void *)0x0);
                pvVar22 = (void *)NativeHelper_01e9c258
                                            (*(undefined8 *)PTR_DAT_029b93f0,uVar16,pvVar22,0);
                if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                  NativeHelper_011df1bc(*(long *)PTR_DAT_029b7fb8);
                }
                UnityEngine_Debug_LogError_24ea230(pvVar22,(void *)0x0);
                return;
              }
              goto code_r0x012eb944;
            }
            if (unaff_x30 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            if (*(long *)(unaff_x30 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            uVar17 = NativeHelper_01a2fd9c
                               (*(long *)(unaff_x30 + 0x50),pvVar22,*(undefined8 *)puVar6);
            if ((uVar17 & 1) != 0) break;
            if (*(long *)(unaff_x30 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
            uVar17 = NativeHelper_01a2fd9c
                               (*(long *)(unaff_x30 + 0x58),pvVar22,*(undefined8 *)puVar6);
            if ((uVar17 & 1) != 0) {
              if (pvVar22 != (void *)0x0) {
                uVar16 = *(undefined8 *)(lVar15 + 0x20);
                pvVar22 = UnityEngine_object_get_name_25101a4(pvVar22,(void *)0x0);
                pvVar22 = (void *)NativeHelper_01e9c258
                                            (*(undefined8 *)PTR_DAT_029b93f8,uVar16,pvVar22,0);
                if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                UnityEngine_Debug_LogError_24ea230(pvVar22,(void *)0x0);
                NativeHelper_01821848(&stack0xffffffffffffffb0,*(undefined8 *)PTR_DAT_029b9278);
                return;
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
          }
          func_0x012eb9e4(unaff_x30,pvVar22);
          NativeHelper_01821848(&stack0xffffffffffffffb0,*(undefined8 *)PTR_DAT_029b9278);
          if (*(long *)(lVar15 + 0x68) != 0) {
            NativeHelper_01a30f28(*(long *)(lVar15 + 0x68),pvVar22,*(undefined8 *)PTR_DAT_029b93e8);
            return;
          }
        }
code_r0x012eb944:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
LAB_014127d0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar14 = UnityEngine_Random_Range_2507f84(0,uVar14,(void *)0x0);
    pvVar22 = extraout_x1_04;
    if (lVar19 == 0) goto LAB_014127d0;
  }
  else {
LAB_014121d0:
    lVar19 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8f98,7);
    fVar24 = fVar26;
    y_00 = fVar26;
    fVar25 = y;
    if (bVar10) goto LAB_014121f4;
LAB_01412328:
    if (!bVar8) {
      uVar14 = 0;
      goto LAB_01412360;
    }
    if (lVar19 == 0) goto LAB_014127d0;
    uVar14 = 0;
LAB_01412334:
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
    uVar17 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 1;
    if (!bVar9) goto LAB_01412398;
LAB_0141236c:
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
    uVar17 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 2;
    if (!bVar2) goto LAB_014123d0;
LAB_014123a4:
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
    uVar17 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 3;
    if (bVar3) {
      bVar10 = true;
      goto LAB_014123dc;
    }
LAB_01412408:
    if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_014127d4;
    uVar17 = (ulong)uVar14;
    uVar14 = uVar14 + 1;
    *(undefined4 *)(lVar19 + uVar17 * 4 + 0x20) = 5;
    if (bVar7) goto LAB_01412438;
LAB_01412454:
    uVar14 = UnityEngine_Random_Range_2507f84(0,uVar14,(void *)0x0);
    pvVar22 = extraout_x1_01;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar14) {
LAB_014127d4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
  uVar14 = *(uint *)(lVar19 + (long)(int)uVar14 * 4 + 0x20);
  lVar15 = (long)(int)uVar14;
  z_01 = 0.0;
  z_02 = 0.0;
  z_03 = 0.0;
  z = 0.0;
  z_00 = 0.0;
  if (uVar14 < 7) {
    z_01 = *(float *)(&UNK_007c466c + lVar15 * 4);
    z_02 = *(float *)(&UNK_007c4688 + lVar15 * 4);
    z_03 = *(float *)(&UNK_007c46a4 + lVar15 * 4);
    z = *(float *)(&UNK_007c46c0 + lVar15 * 4);
    iVar13 = *(int *)(&UNK_007c4650 + lVar15 * 4);
    z_00 = *(float *)(&UNK_007c46dc + lVar15 * 4);
    self->CoinLocationStart = *(int *)(&UNK_007c4634 + lVar15 * 4);
    self->CoinLocationEnd = iVar13;
  }
  if (self->Level == 3) {
    z_00 = z_00 * _UNK_007a3bec;
    z = z * _UNK_007a3bec;
    z_03 = z_03 * _UNK_007a3bec;
    z_02 = z_02 * _UNK_007a3bec;
    z_01 = z_01 * _UNK_007a3bec;
  }
  bVar10 = PathElement_IsStraightVert_130b59c(self,pvVar22);
  if (bVar10) {
    if (direction != 3) {
      if (direction != 1) goto LAB_014127c4;
      MovingObject_SetLocalX_1309494((MovingObject *)item1,-z_00,runtimeMethod_07);
      MovingObject_SetLocalX_1309494((MovingObject *)item1_00,-z,runtimeMethod_08);
      MovingObject_SetLocalX_1309494((MovingObject *)item1_01,-z_03,runtimeMethod_09);
      MovingObject_SetLocalX_1309494((MovingObject *)item1_02,-z_02,runtimeMethod_10);
      MovingObject_SetLocalX_1309494((MovingObject *)item1_03,-z_01,runtimeMethod_11);
      pvVar22 = extraout_x1_02;
      goto LAB_0141278c;
    }
    MovingObject_SetLocalX_1309494((MovingObject *)item1,z_01,runtimeMethod_07);
    MovingObject_SetLocalX_1309494((MovingObject *)item1_00,z_02,runtimeMethod_17);
    MovingObject_SetLocalX_1309494((MovingObject *)item1_01,z_03,runtimeMethod_18);
    MovingObject_SetLocalX_1309494((MovingObject *)item1_02,z,runtimeMethod_19);
    MovingObject_SetLocalX_1309494((MovingObject *)item1_03,z_00,runtimeMethod_20);
    pvVar22 = extraout_x1_05;
LAB_0141264c:
    MovingObject_SetLocalY_1309510((MovingObject *)item1,fVar25,pvVar22);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_00,fVar24,runtimeMethod_21);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_01,y_00,runtimeMethod_22);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_02,fVar26,runtimeMethod_23);
    pvVar22 = extraout_x1_06;
  }
  else {
    bVar10 = PathElement_IsStraightHorz_130b618(self,runtimeMethod_07);
    pvVar22 = runtimeMethod_12;
    if (bVar10) {
      if (direction != 4) {
        if (direction != 2) goto LAB_014127c4;
        MovingObject_SetLocalZ_130958c((MovingObject *)item1,z_00,runtimeMethod_12);
        MovingObject_SetLocalZ_130958c((MovingObject *)item1_00,z,runtimeMethod_13);
        MovingObject_SetLocalZ_130958c((MovingObject *)item1_01,z_03,runtimeMethod_14);
        MovingObject_SetLocalZ_130958c((MovingObject *)item1_02,z_02,runtimeMethod_15);
        MovingObject_SetLocalZ_130958c((MovingObject *)item1_03,z_01,runtimeMethod_16);
        pvVar22 = extraout_x1_03;
        goto LAB_0141264c;
      }
      MovingObject_SetLocalZ_130958c((MovingObject *)item1,-z_01,runtimeMethod_12);
      MovingObject_SetLocalZ_130958c((MovingObject *)item1_00,-z_02,runtimeMethod_24);
      MovingObject_SetLocalZ_130958c((MovingObject *)item1_01,-z_03,runtimeMethod_25);
      MovingObject_SetLocalZ_130958c((MovingObject *)item1_02,-z,runtimeMethod_26);
      MovingObject_SetLocalZ_130958c((MovingObject *)item1_03,-z_00,runtimeMethod_27);
      pvVar22 = extraout_x1_07;
    }
LAB_0141278c:
    MovingObject_SetLocalY_1309510((MovingObject *)item1,y,pvVar22);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_00,fVar26,runtimeMethod_28);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_01,y_00,runtimeMethod_29);
    MovingObject_SetLocalY_1309510((MovingObject *)item1_02,fVar24,runtimeMethod_30);
    pvVar22 = extraout_x1_08;
    y = fVar25;
  }
  MovingObject_SetLocalY_1309510((MovingObject *)item1_03,y,pvVar22);
LAB_014127c4:
  self->HasCoins = true;
  return;
}

