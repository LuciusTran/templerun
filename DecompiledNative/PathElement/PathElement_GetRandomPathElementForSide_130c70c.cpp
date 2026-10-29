// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private PathElement GetRandomPathElementForSide(PathDirection direction) { }
// Ghidra address: 0141070c; ELF VA: 0x131070c; file offset: 0x130c70c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement *
PathElement_GetRandomPathElementForSide_130c70c(PathElement *self,int direction,void *runtimeMethod)

{
  bool bVar1;
  ulong uVar2;
  uint type;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  PathElement *pPVar23;
  void *pvVar24;
  int direction_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *extraout_x1_09;
  void *extraout_x1_10;
  void *extraout_x1_11;
  void *extraout_x1_12;
  void *extraout_x1_13;
  void *extraout_x1_14;
  void *extraout_x1_15;
  void *runtimeMethod_00;
  void *extraout_x1_16;
  void *extraout_x1_17;
  void *extraout_x1_18;
  void *pvVar25;
  void *pvVar26;
  void *in_x4;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  uint maxExclusive;
  int iVar31;
  int type_00;
  undefined1 auVar32 [16];
  int *piStack_d8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined1 auStack_64 [4];
  
  puVar7 = PTR_DAT_029bde80;
  if ((bRam0000000002b950f5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029c1e10);
    NativeHelper_011df0b4(PTR_DAT_029bde70);
    NativeHelper_011df0b4(PTR_DAT_029b8f98);
    NativeHelper_011df0b4(PTR_DAT_029c1e50);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1e00);
    NativeHelper_011df0b4(PTR_DAT_029c1e48);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029c1e70);
    NativeHelper_011df0b4(PTR_DAT_029c1e78);
    NativeHelper_011df0b4(PTR_DAT_029c1e80);
    NativeHelper_011df0b4(PTR_DAT_029c1e88);
    NativeHelper_011df0b4(PTR_DAT_029c1e90);
    bRam0000000002b950f5 = 1;
  }
  lVar27 = *(long *)puVar7;
  auStack_64[0] = 0;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar27);
    lVar27 = *(long *)puVar7;
  }
  lVar30 = *(long *)(lVar27 + 0xb8);
  if (*(char *)(lVar30 + 7) == '\0') {
    bVar1 = false;
  }
  else {
    iVar18 = self->SpacesSinceLastTurn;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar27);
      lVar27 = *(long *)puVar7;
      lVar30 = *(long *)(lVar27 + 0xb8);
    }
    bVar1 = *(int *)(lVar30 + 0x2c) <= iVar18;
  }
  iVar18 = self->SpacesSinceLastTurn;
  iVar29 = *(int *)(lVar27 + 0xe0);
  iVar19 = self->BackToBackObstacleCount;
  if (iVar29 == 0) {
    NativeHelper_011df1bc(lVar27);
    lVar27 = *(long *)puVar7;
    iVar29 = *(int *)(lVar27 + 0xe0);
  }
  lVar30 = *(long *)(lVar27 + 0xb8);
  iVar31 = self->SpacesSinceLastObstacle;
  bVar3 = iVar18 != 1 && iVar19 < *(int *)(lVar30 + 0x30);
  if (iVar29 == 0) {
    NativeHelper_011df1bc(lVar27);
    lVar27 = *(long *)puVar7;
    lVar30 = *(long *)(lVar27 + 0xb8);
  }
  if (iVar31 < *(int *)(lVar30 + 0x34)) {
    iVar18 = UnityEngine_Random_Range_2507f84(0,1000,(void *)0x0);
    lVar27 = *(long *)puVar7;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar27);
      lVar27 = *(long *)puVar7;
    }
    if (*(float *)(*(long *)(lVar27 + 0xb8) + 0x38) * 1000.0 <= (float)iVar18) {
      bVar3 = false;
    }
  }
  puVar8 = PTR_DAT_029c1e70;
  puVar6 = PTR_DAT_029c1e10;
  puVar5 = PTR_DAT_029c1e00;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar27);
    lVar27 = *(long *)puVar7;
  }
  iVar18 = self->Type;
  iStack_b4 = *(int *)(*(long *)(lVar27 + 0xb8) + 0x44);
  uVar22 = NativeHelper_011df12c(*(undefined8 *)puVar5,4);
  NativeHelper_01f3db6c(uVar22,*(undefined8 *)puVar8,0);
  auVar32 = NativeHelper_01505ab4(iVar18,uVar22,*(undefined8 *)puVar6);
  puVar8 = PTR_DAT_029c1e78;
  pvVar26 = auVar32._8_8_;
  if ((auVar32._0_8_ & 1) == 0) {
    uVar22 = NativeHelper_011df12c(*(undefined8 *)puVar5,4);
    NativeHelper_01f3db6c(uVar22,*(undefined8 *)puVar8,0);
    auVar32 = NativeHelper_01505ab4(iVar18,uVar22,*(undefined8 *)puVar6);
    pvVar26 = auVar32._8_8_;
    if ((auVar32._0_8_ & 1) == 0) {
      bVar15 = false;
    }
    else {
      bVar15 = PathElement_DoesSidePathHaveObstacles_130b8c4(self,pvVar26);
      bVar15 = !bVar15;
      bVar3 = (bool)(bVar3 & bVar15);
      pvVar26 = extraout_x1;
    }
  }
  else {
    bVar15 = false;
    bVar3 = false;
  }
  lVar27 = *(long *)puVar7;
  bVar13 = self->HasObstacles == false;
  if (self->HasObstacles != false) {
    if (*(int *)(lVar27 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar27 = *(long *)puVar7;
      pvVar26 = extraout_x1_00;
    }
    bVar1 = (bool)(bVar1 & *(char *)(*(long *)(lVar27 + 0xb8) + 0xe) != '\0');
    bVar3 = (bool)(bVar3 & 1 < self->Obstacles - 5U);
  }
  iVar29 = self->Level;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar27 = *(long *)puVar7;
    pvVar26 = extraout_x1_01;
  }
  iVar19 = *(int *)(*(long *)(lVar27 + 0xb8) + 0x44);
  if (iVar29 == iVar19) {
LAB_01410a7c:
    bVar4 = false;
    bVar12 = false;
    if (self->Obstacles == 7) goto LAB_01410a98;
  }
  else {
    if ((((1 < iVar18 - 1U) || (self->HasObstacles != false)) || (self->SpacesSinceLastTurn < 3)) ||
       (self->SpacesSinceLastObstacle < 3)) {
      iStack_b4 = self->Level;
      bVar13 = false;
      bVar3 = false;
      bVar1 = false;
      bVar15 = false;
      goto LAB_01410a7c;
    }
    if (iVar29 == 3) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar27 = *(long *)puVar7;
        iVar19 = *(int *)(*(long *)(lVar27 + 0xb8) + 0x44);
        pvVar26 = extraout_x1_16;
      }
      if (iVar19 != 2) {
        if (*(int *)(lVar27 + 0xe0) == 0) goto LAB_01411450;
        goto LAB_01411460;
      }
LAB_01411468:
      if (direction - 1U < 4) {
        self->Type = *(int *)(&UNK_007a43c0 + (long)(int)(direction - 1U) * 4);
        self->Level = iVar29;
        PathElement_SetupTerrain_130a4dc(self,pvVar26);
        pvVar26 = extraout_x1_18;
      }
      PathElement_RemoveAllSubObjects_130b440(self,pvVar26);
      lVar27 = *(long *)puVar7;
    }
    else if (iVar29 == 2) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar27 = *(long *)puVar7;
        iVar19 = *(int *)(*(long *)(lVar27 + 0xb8) + 0x44);
        pvVar26 = extraout_x1_12;
      }
      if (iVar19 == 3) {
        if (direction - 1U < 4) {
          self->Type = *(int *)(&UNK_007a43c0 + (long)(int)(direction - 1U) * 4);
          self->Level = 2;
          PathElement_SetupTerrain_130a4dc(self,pvVar26);
          pvVar26 = extraout_x1_13;
        }
        PathElement_RemoveAllSubObjects_130b440(self,pvVar26);
        lVar27 = *(long *)puVar7;
        pvVar26 = extraout_x1_14;
      }
      if (*(int *)(lVar27 + 0xe0) == 0) {
LAB_01411450:
        NativeHelper_011df1bc();
        lVar27 = *(long *)puVar7;
        pvVar26 = extraout_x1_17;
      }
      iVar19 = *(int *)(*(long *)(lVar27 + 0xb8) + 0x44);
LAB_01411460:
      if (iVar19 == 1) goto LAB_01411468;
    }
    bVar12 = true;
LAB_01410a98:
    bVar4 = bVar12;
    bVar13 = false;
    bVar3 = false;
    bVar1 = false;
    bVar15 = false;
  }
  piStack_d8 = &self->Obstacles;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar27 = *(long *)puVar7;
  }
  bVar14 = *(char *)(*(long *)(lVar27 + 0xb8) + 0x48) == '\0';
  bVar12 = (bool)(bVar15 & bVar14);
  bVar3 = (bool)(bVar3 & bVar14);
  lVar27 = NativeHelper_011df12c(*(undefined8 *)puVar5,0x26);
  maxExclusive = 0;
  uVar20 = 0xfffffff0;
  do {
    type = uVar20 + 0x11;
    pvVar26 = (void *)0x1;
    bVar16 = PathElement_DoesPieceTypeFitOnSide_130c044(self,type,direction,true,in_x4);
    pPVar23 = (PathElement *)(ulong)bVar16;
    if (!bVar1) {
      pPVar23 = *(PathElement **)puVar7;
      if (*(int *)&pPVar23[1].field_0xf == 0) {
        pPVar23 = (PathElement *)NativeHelper_011df1bc();
      }
      bVar16 = 7 < uVar20 + 0xe && bVar16;
    }
    lVar30 = *(long *)puVar7;
    if (*(int *)(lVar30 + 0xe0) == 0) {
      pPVar23 = (PathElement *)NativeHelper_011df1bc(lVar30);
      lVar30 = *(long *)puVar7;
    }
    lVar28 = *(long *)(lVar30 + 0xb8);
    if (*(char *)(lVar28 + 0xf) == '\0') {
      if ((uVar20 + 10 < 2) && (self->Type == 1)) {
        bVar16 = false;
        goto LAB_01410b8c;
      }
      bVar16 = (bool)(bVar16 & (1 < uVar20 + 8 || self->Type != 2));
      if (!bVar3) goto LAB_01410c68;
LAB_01410b90:
      if (uVar20 - 0xe < 2) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
          lVar30 = *(long *)puVar7;
          lVar28 = *(long *)(lVar30 + 0xb8);
        }
        if (!bVar15 &&
            ((iStack_b4 != 3 && *(char *)(lVar28 + 10) != '\0') && (bVar13 & bVar14) == 1)) {
LAB_01410c18:
          if (*(int *)(lVar30 + 0xe0) == 0) {
            NativeHelper_011df1bc(lVar30);
          }
          iVar19 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
          if ((iVar19 != 0) && (bVar16 == true)) goto LAB_01410ca4;
        }
      }
      else if ((type == 0xe) || (type == 0xb)) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
          lVar30 = *(long *)puVar7;
          lVar28 = *(long *)(lVar30 + 0xb8);
        }
        if (*(char *)(lVar28 + 8) != '\0') goto LAB_01410c18;
      }
      else {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
        }
        if (uVar20 < 0xe) {
          pPVar23 = *(PathElement **)puVar7;
          if (*(int *)&pPVar23[1].field_0xf == 0) {
            NativeHelper_011df1bc();
            pPVar23 = *(PathElement **)puVar7;
          }
          bVar17 = true;
          if ((iStack_b4 == 2) && (*(char *)((long)pPVar23->LastRenderState + 9) != '\0')) {
            bVar17 = self->SpacesSinceLastTurn < 2;
          }
          if (!bVar17 && !bVar12) {
            if (*(int *)&pPVar23[1].field_0xf == 0) {
              NativeHelper_011df1bc();
            }
            iVar19 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
            if (iVar19 != 0) goto joined_r0x01410c78;
            pPVar23 = (PathElement *)0x0;
          }
          bVar17 = PathElement_ACertainTypeCheck_130c6b8(pPVar23,type,iVar18,pvVar26);
          bVar16 = (bool)(bVar16 & bVar17);
        }
joined_r0x01410c78:
        if (bVar16 != false) goto LAB_01410ca4;
      }
    }
    else {
LAB_01410b8c:
      if (bVar3) goto LAB_01410b90;
LAB_01410c68:
      bVar17 = PathElement_ACertainTypeCheck_130c6b8(pPVar23,type,iVar18,pvVar26);
      if (bVar17) goto joined_r0x01410c78;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar30);
      }
      if ((0x19 < uVar20 + 6 & bVar16) == 0) goto LAB_01410ccc;
LAB_01410ca4:
      if ((0x25 < type) || ((1L << ((ulong)type & 0x3f) & 0x3e0001b000U) == 0)) {
        if (lVar27 == 0) goto LAB_014114b4;
        if (*(uint *)(lVar27 + 0x18) <= maxExclusive) goto LAB_014114b0;
        lVar30 = (long)(int)maxExclusive;
        maxExclusive = maxExclusive + 1;
        *(uint *)(lVar27 + lVar30 * 4 + 0x20) = type;
      }
    }
LAB_01410ccc:
    puVar11 = PTR_DAT_029c1e90;
    puVar10 = PTR_DAT_029c1e80;
    puVar9 = PTR_DAT_029c1e50;
    puVar8 = PTR_DAT_029c1e48;
    puVar6 = PTR_DAT_029b8708;
    puVar5 = PTR_DAT_029b8308;
    uVar20 = uVar20 + 1;
  } while (uVar20 != 0x15);
  if (maxExclusive == 0) {
    iVar18 = 1;
    while( true ) {
      auStack_64[0] = PathElement_DoesPieceTypeFitOnSide_130c044(self,iVar18,direction,true,in_x4);
      lVar27 = NativeHelper_011df12c(*(undefined8 *)puVar6,7);
      uStack_80 = *(undefined8 *)puVar8;
      uStack_78 = 0xffffffffffffffff;
      iStack_70 = self->Type;
      uVar22 = NativeHelper_02031f7c(&uStack_80,0);
      if (lVar27 == 0) break;
      if ((*(int *)(lVar27 + 0x18) == 0) ||
         (*(undefined8 *)(lVar27 + 0x20) = uVar22, *(int *)(lVar27 + 0x18) == 1)) goto LAB_014114b0;
      *(undefined8 *)(lVar27 + 0x28) = *(undefined8 *)puVar11;
      uStack_98 = *(undefined8 *)puVar8;
      uStack_90 = 0xffffffffffffffff;
      iStack_88 = iVar18;
      uVar22 = NativeHelper_02031f7c(&uStack_98,0);
      if ((*(uint *)(lVar27 + 0x18) < 3) ||
         (*(undefined8 *)(lVar27 + 0x30) = uVar22, *(uint *)(lVar27 + 0x18) == 3))
      goto LAB_014114b0;
      *(undefined8 *)(lVar27 + 0x38) = *(undefined8 *)puVar10;
      uStack_b0 = *(undefined8 *)puVar9;
      uStack_a8 = 0xffffffffffffffff;
      iStack_a0 = direction;
      uVar22 = NativeHelper_02031f7c(&uStack_b0,0);
      if ((*(uint *)(lVar27 + 0x18) < 5) ||
         (*(undefined8 *)(lVar27 + 0x40) = uVar22, *(uint *)(lVar27 + 0x18) == 5))
      goto LAB_014114b0;
      *(undefined8 *)(lVar27 + 0x48) = *(undefined8 *)puVar10;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      uVar22 = NativeHelper_01f83748(auStack_64,0);
      if (*(uint *)(lVar27 + 0x18) < 7) goto LAB_014114b0;
      *(undefined8 *)(lVar27 + 0x50) = uVar22;
      pvVar26 = (void *)NativeHelper_01e9bf50(lVar27,0);
      DebugEx_Log_13222f4(pvVar26,(void *)0x0);
      iVar18 = iVar18 + 1;
      if (iVar18 == 0x26) {
        DebugEx_LogError_1321a6c(*(void **)PTR_DAT_029c1e88,self,(void *)0x0);
        return (PathElement *)0x0;
      }
    }
    goto LAB_014114b4;
  }
  pvVar25 = (void *)0x0;
  uVar20 = UnityEngine_Random_Range_2507f84(0,maxExclusive,(void *)0x0);
  if (lVar27 == 0) goto LAB_014114b4;
  if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_014114b0;
  iVar19 = *(int *)(lVar27 + (long)(int)uVar20 * 4 + 0x20);
  iVar31 = 1;
  pvVar24 = extraout_x1_02;
  if ((iVar19 != 0xb) && (iVar19 != 0xe)) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar24 = extraout_x1_03;
    }
    iVar31 = (uint)(iVar19 - 0x11U < 0xe) << 1;
  }
  type_00 = iVar31;
  if (bVar3) {
    lVar27 = *(long *)puVar7;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar27 = *(long *)puVar7;
      pvVar24 = extraout_x1_04;
    }
    lVar30 = *(long *)(lVar27 + 0xb8);
    if (*(char *)(lVar30 + 0xb) == '\0') {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar27 = *(long *)puVar7;
        lVar30 = *(long *)(lVar27 + 0xb8);
        pvVar24 = extraout_x1_05;
      }
      if (*(char *)(lVar30 + 0xc) != '\0') goto LAB_01410e44;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar27 = *(long *)puVar7;
        lVar30 = *(long *)(lVar27 + 0xb8);
        pvVar24 = extraout_x1_11;
      }
      if ((bVar12) || (*(char *)(lVar30 + 0xd) == '\0')) goto LAB_014111e0;
    }
    else {
LAB_01410e44:
      if (bVar12) goto LAB_014111e0;
    }
    if (iVar19 - 1U < 2) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar25 = (void *)0x0;
      iVar21 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
      pvVar24 = extraout_x1_06;
      if (iVar21 == 0) {
        auVar32 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8f98,4);
        pvVar24 = auVar32._8_8_;
        lVar27 = auVar32._0_8_;
        lVar30 = *(long *)puVar7;
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
          lVar30 = *(long *)puVar7;
          pvVar24 = extraout_x1_07;
        }
        lVar28 = *(long *)(lVar30 + 0xb8);
        uVar20 = 0;
        if ((iStack_b4 == 2) && (*(char *)(lVar28 + 0xb) != '\0')) {
          if (lVar27 == 0) goto LAB_014114b4;
          if (*(int *)(lVar27 + 0x18) == 0) goto LAB_014114b0;
          uVar20 = 1;
          *(undefined4 *)(lVar27 + 0x20) = 0;
        }
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
          lVar30 = *(long *)puVar7;
          lVar28 = *(long *)(lVar30 + 0xb8);
          pvVar24 = extraout_x1_08;
        }
        if ((iStack_b4 == 2) && (*(char *)(lVar28 + 0xc) != '\0')) {
          if (lVar27 == 0) goto LAB_014114b4;
          if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_014114b0;
          uVar2 = (ulong)uVar20;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(lVar27 + uVar2 * 4 + 0x20) = 1;
        }
        if (*(int *)(lVar30 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar30);
          lVar28 = *(long *)(*(long *)puVar7 + 0xb8);
          pvVar24 = extraout_x1_09;
        }
        if ((iStack_b4 == 1) || ((*(byte *)(lVar28 + 0xd) & bVar13 & bVar14) == 0)) {
          if (uVar20 == 0) goto LAB_014111e0;
          pvVar25 = (void *)0x0;
          uVar20 = UnityEngine_Random_Range_2507f84(0,uVar20,(void *)0x0);
          pvVar24 = extraout_x1_15;
          if (lVar27 == 0) goto LAB_014114b4;
        }
        else {
          if (lVar27 == 0) goto LAB_014114b4;
          if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_014114b0;
          pvVar25 = (void *)0x0;
          *(undefined4 *)(lVar27 + (ulong)uVar20 * 4 + 0x20) = 2;
          uVar20 = UnityEngine_Random_Range_2507f84(0,uVar20 + 1,(void *)0x0);
          pvVar24 = extraout_x1_10;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar20) {
LAB_014114b0:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        uVar20 = *(uint *)(lVar27 + (long)(int)uVar20 * 4 + 0x20);
        type_00 = uVar20 + 3;
        if (2 < uVar20) {
          type_00 = iVar31;
        }
      }
    }
  }
LAB_014111e0:
  iVar31 = iVar19;
  if ((((iStack_b4 == 3) && (*piStack_d8 == 1)) && (iVar31 = iVar18, iVar18 != 0xe)) &&
     (iVar31 = iVar19, iVar18 == 0xb)) {
    iVar31 = 0xb;
  }
  if ((*piStack_d8 == 1) && ((iVar18 == 0xe || (iVar18 == 0xb)))) {
    if (iVar31 == 0xb) {
      if (direction == 1) {
        self->Type = 0xc;
        self->Level = iStack_b4;
        PathElement_SetupTerrain_130a4dc(self,pvVar24);
        iVar31 = 0xd;
      }
      else {
        self->Type = 0xd;
        self->Level = iStack_b4;
        PathElement_SetupTerrain_130a4dc(self,pvVar24);
        iVar31 = 0xc;
      }
    }
    else if (iVar31 == 0xe) {
      if (direction == 2) {
        self->Type = 0xf;
        self->Level = iStack_b4;
        PathElement_SetupTerrain_130a4dc(self,pvVar24);
        iVar31 = 0x10;
      }
      else {
        self->Type = 0x10;
        self->Level = iStack_b4;
        PathElement_SetupTerrain_130a4dc(self,pvVar24);
        iVar31 = 0xf;
      }
    }
  }
  if (bVar4) {
    if ((iVar29 != 3) || (iStack_b4 != 2)) {
      if ((iVar29 != 2 || iStack_b4 != 3) && (iVar29 != 1 || iStack_b4 != 2)) goto LAB_01411334;
    }
    if (direction - 1U < 4) {
      iVar31 = *(int *)(&UNK_007a46c0 + (long)(int)(direction - 1U) * 4);
    }
  }
LAB_01411334:
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar24 = PathElement_Instantiate_130a21c(iVar31,iStack_b4,pvVar25);
  if ((pvVar24 != (void *)0x0) &&
     (pPVar23 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar24,*(void **)PTR_DAT_029bde70),
     pPVar23 != (PathElement *)0x0)) {
    pPVar23->OriginalPick = iVar19;
    pPVar23->FinalPick = iVar31;
    if (type_00 - 1U < 2) {
      pPVar23->Obstacles = type_00;
    }
    else {
      PathElement_AddObstacle_130b1f8(pPVar23,type_00,pvVar25);
    }
    if (!bVar12) {
      PathElement_AddCoins_130d4b8(pPVar23,direction,self,pvVar26);
      PathElement_AddBonusItems_130e7d8(pPVar23,direction_00,self,pvVar26);
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (direction - 1U < 4) {
      pvVar25 = (void *)(ulong)*(uint *)(&UNK_007a47d0 + (long)(int)(direction - 1U) * 4);
    }
    else {
      pvVar25 = (void *)0x0;
    }
    PathElement_AddSafteyNet_130ec0c(self,pPVar23,(int)pvVar25,pvVar26);
    PathElement_UpdatePathDescription_130ef10(pPVar23,self,pvVar25);
    PathElement_UpdateCachedComponents_130f0e0(pPVar23,runtimeMethod_00);
    return pPVar23;
  }
LAB_014114b4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

