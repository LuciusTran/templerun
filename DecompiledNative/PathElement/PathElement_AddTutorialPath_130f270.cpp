// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddTutorialPath(int tutorialId) { }
// Ghidra address: 01413270; ELF VA: 0x1313270; file offset: 0x130f270
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathElement_AddTutorialPath_130f270(PathElement *self,int tutorialId,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  PathElement *pPVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  void *pvVar12;
  PathElement *pPVar13;
  void *in_x3;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  PathElement *pPVar18;
  int iVar19;
  
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950f8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1ea8);
    bRam0000000002b950f8 = 1;
  }
  do {
    pPVar18 = self->PathNorth;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar12 = (void *)0x0;
    bVar6 = UnityEngine_object_op_Inequality_250c8e4(pPVar18,(void *)0x0,(void *)0x0);
    puVar4 = PTR_DAT_029bde80;
    puVar3 = PTR_DAT_029b7fb8;
    if (!bVar6) {
      switch(tutorialId) {
      case 0:
        iVar19 = tutorialId + -6;
        goto code_r0x01413358;
      case 1:
        if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
        if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
        PathElement_AddObstacle_130b1f8(pPVar18,3,pvVar12);
        pvVar12 = (void *)0x1;
        PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
        iVar19 = 4;
        goto code_r0x014133e4;
      case 2:
        if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
        if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
        iVar19 = 5;
        PathElement_AddObstacle_130b1f8(pPVar18,5,pvVar12);
        pvVar12 = (void *)0x1;
        PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
        break;
      case 3:
        lVar9 = *(long *)PTR_DAT_029bde80;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar9 = *(long *)puVar4;
        }
        uVar7 = _UNK_007a3518;
        lVar14 = *(long *)(lVar9 + 0xb8);
        uVar11 = *(undefined8 *)(lVar14 + 0x3c);
        iVar19 = 5;
        *(undefined1 *)(lVar14 + 0x10) = 1;
        *(undefined4 *)(lVar14 + 0x13) = 0x100;
        *(undefined8 *)(lVar14 + 0x3c) = uVar7;
        goto code_r0x014134f8;
      case 4:
        if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
        goto code_r0x01413c1c;
      default:
        goto LAB_01413c30;
      }
      goto code_r0x01413470;
    }
    if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
    self = pPVar18;
  } while (pPVar18->Type == 1);
  uVar7 = *(undefined8 *)PTR_DAT_029c1ea8;
  if ((bRam0000000002b951d0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
    bRam0000000002b951d0 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029b7fb8;
  uVar11 = 0;
  if ((bRam0000000002b9c2fc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
    NativeHelper_011df0b4(PTR_DAT_029f2e60);
    bRam0000000002b9c2fc = 1;
    uVar11 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    uVar11 = extraout_x1_00;
  }
  if (cRam0000000002b9b5c7 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar11);
    cRam0000000002b9b5c7 = '\x01';
  }
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar9 = *(long *)puVar2;
  }
  plVar17 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  lVar9 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_029f2e60) {
        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar16 + 3) * 0x10 + 0x138);
        goto code_r0x025ee318;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)NativeHelper_011b5528(plVar17,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee318:
                    /* WARNING: Could not recover jumptable at 0x025ee330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(plVar17,0,uVar7,puVar10[1]);
  return;
code_r0x014134f8:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
  pPVar8 = self;
  PathElement_AddCoins_130d4b8(pPVar18,1,self,in_x3);
  PathElement_UpdatePathDescription_130ef10(pPVar18,self,pPVar8);
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
  uVar7 = _DAT_007a32e0;
  if (iVar19 == 0) goto code_r0x014136cc;
  lVar9 = *(long *)puVar4;
  iVar19 = iVar19 + -1;
  self = pPVar18;
  goto code_r0x014134f8;
code_r0x01413470:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (iVar19 == 0) {
    if ((pPVar8 != (PathElement *)0x0) &&
       (PathElement_AddObstacle_130b1f8(pPVar8,5,pvVar12), pPVar18 != (PathElement *)0x0)) {
      pvVar12 = (void *)0x1;
      PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
      iVar19 = 5;
      goto code_r0x01413688;
    }
    goto LAB_01413c44;
  }
  if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
  iVar19 = iVar19 + -1;
  pPVar18 = pPVar8;
  goto code_r0x01413470;
code_r0x01413688:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    iVar19 = 0x20;
    goto code_r0x01413b1c;
  }
  pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (pPVar8 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
  iVar19 = iVar19 + -1;
  pPVar8 = pPVar18;
  goto code_r0x01413688;
code_r0x014133e4:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (iVar19 == 0) {
    if ((pPVar8 != (PathElement *)0x0) &&
       (PathElement_AddObstacle_130b1f8(pPVar8,4,pvVar12), pPVar18 != (PathElement *)0x0)) {
      pvVar12 = (void *)0x1;
      PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
      iVar19 = 4;
      goto code_r0x0141361c;
    }
    goto LAB_01413c44;
  }
  if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
  iVar19 = iVar19 + -1;
  pPVar18 = pPVar8;
  goto code_r0x014133e4;
code_r0x0141361c:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    iVar19 = 0xb;
code_r0x01413b1c:
    pPVar18 = PathElement_InstantiatePathElement_130a194(iVar19,2,pvVar12);
    if (pPVar8 != (PathElement *)0x0) {
      pvVar12 = (void *)0x1;
      PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
      pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
      if ((pPVar18 != (PathElement *)0x0) &&
         (PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3), pPVar8 != (PathElement *)0x0)) {
        pPVar8->IsTutorialEnd = true;
        return;
      }
    }
    goto LAB_01413c44;
  }
  pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (pPVar8 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
  iVar19 = iVar19 + -1;
  pPVar8 = pPVar18;
  goto code_r0x0141361c;
code_r0x01413358:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    pPVar18 = PathElement_InstantiatePathElement_130a194(4,2,pvVar12);
    if (self != (PathElement *)0x0) {
      pvVar12 = (void *)0x1;
      PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
      iVar19 = 6;
      goto code_r0x014135b0;
    }
    goto LAB_01413c44;
  }
  pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (self == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x1;
  PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
  iVar19 = iVar19 + 1;
  self = pPVar18;
  goto code_r0x01413358;
code_r0x014135b0:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    pPVar8 = PathElement_InstantiatePathElement_130a194(3,2,pvVar12);
    if (pPVar18 != (PathElement *)0x0) {
      pvVar12 = (void *)0x2;
      PathElement_SetPath_130fc48(pPVar18,pPVar8,2,in_x3);
      iVar19 = 4;
      goto code_r0x01413acc;
    }
    goto LAB_01413c44;
  }
  pPVar8 = PathElement_InstantiatePathElement_130a194(2,2,pvVar12);
  if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x2;
  PathElement_SetPath_130fc48(pPVar18,pPVar8,2,in_x3);
  iVar19 = iVar19 + -1;
  pPVar18 = pPVar8;
  goto code_r0x014135b0;
code_r0x01413acc:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    pPVar18 = PathElement_InstantiatePathElement_130a194(6,2,pvVar12);
    if (pPVar8 != (PathElement *)0x0) {
      pvVar12 = (void *)0x3;
      PathElement_SetPath_130fc48(pPVar8,pPVar18,3,in_x3);
      iVar19 = 2;
      goto code_r0x01413b98;
    }
    goto LAB_01413c44;
  }
  pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
  if (pPVar8 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x3;
  PathElement_SetPath_130fc48(pPVar8,pPVar18,3,in_x3);
  iVar19 = iVar19 + -1;
  pPVar8 = pPVar18;
  goto code_r0x01413acc;
code_r0x01413b98:
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (iVar19 == 0) {
    self = PathElement_InstantiatePathElement_130a194(5,2,pvVar12);
    if (pPVar18 != (PathElement *)0x0) {
      pvVar12 = (void *)0x2;
      PathElement_SetPath_130fc48(pPVar18,self,2,in_x3);
      pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
      if (self != (PathElement *)0x0) {
code_r0x01413c1c:
        PathElement_SetPath_130fc48(self,pPVar18,1,in_x3);
        if (pPVar18 != (PathElement *)0x0) {
          pPVar18->IsTutorialEnd = true;
LAB_01413c30:
          return;
        }
      }
    }
    goto LAB_01413c44;
  }
  pPVar8 = PathElement_InstantiatePathElement_130a194(2,2,pvVar12);
  if (pPVar18 == (PathElement *)0x0) goto LAB_01413c44;
  pvVar12 = (void *)0x2;
  PathElement_SetPath_130fc48(pPVar18,pPVar8,2,in_x3);
  iVar19 = iVar19 + -1;
  pPVar18 = pPVar8;
  goto code_r0x01413b98;
code_r0x014136cc:
  uVar1 = _UNK_007a32e4;
  pPVar18->SpacesSinceLastCoinRun = _DAT_007a32e0;
  pPVar18->CoinRunCount = uVar1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pPVar8 = PathElement_InstantiatePathElement_130a194(0x14,2,pvVar12);
  if (pPVar8 != (PathElement *)0x0) {
    pPVar13 = pPVar18;
    PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
    PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
    pvVar12 = (void *)0x1;
    PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
    pPVar18 = PathElement_InstantiatePathElement_130a194(0x13,2,pvVar12);
    if (pPVar18 != (PathElement *)0x0) {
      pPVar13 = pPVar8;
      PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
      PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
      pvVar12 = (void *)0x1;
      PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
      pPVar8 = PathElement_InstantiatePathElement_130a194(0x13,2,pvVar12);
      if (pPVar8 != (PathElement *)0x0) {
        pPVar13 = pPVar18;
        PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
        PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
        pvVar12 = (void *)0x1;
        PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
        pPVar18 = PathElement_InstantiatePathElement_130a194(0x15,2,pvVar12);
        if (pPVar18 != (PathElement *)0x0) {
          pPVar13 = pPVar8;
          PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
          PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
          pvVar12 = (void *)0x1;
          PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
          pPVar18->SpacesSinceLastCoinRun = 0;
          pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
          if (pPVar8 != (PathElement *)0x0) {
            pPVar13 = pPVar18;
            PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
            PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
            pvVar12 = (void *)0x1;
            PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
            pPVar18 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
            if (pPVar18 != (PathElement *)0x0) {
              pPVar13 = pPVar8;
              PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
              PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
              pvVar12 = (void *)0x1;
              PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
              uVar5 = _DAT_007a32e0;
              _DAT_007a32e0 = (undefined4)uVar7;
              _UNK_007a32e4 = SUB84(uVar7,4);
              uVar1 = _UNK_007a32e4;
              pPVar18->SpacesSinceLastCoinRun = _DAT_007a32e0;
              _DAT_007a32e0 = uVar5;
              pPVar18->CoinRunCount = uVar1;
              pPVar8 = PathElement_InstantiatePathElement_130a194(0x17,2,pvVar12);
              if (pPVar8 != (PathElement *)0x0) {
                pPVar13 = pPVar18;
                PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
                PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
                pvVar12 = (void *)0x1;
                PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
                pPVar18 = PathElement_InstantiatePathElement_130a194(0x16,2,pvVar12);
                if (pPVar18 != (PathElement *)0x0) {
                  pPVar13 = pPVar8;
                  PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
                  PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
                  pvVar12 = (void *)0x1;
                  PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
                  pPVar8 = PathElement_InstantiatePathElement_130a194(0x16,2,pvVar12);
                  if (pPVar8 != (PathElement *)0x0) {
                    pPVar13 = pPVar18;
                    PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
                    PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
                    pvVar12 = (void *)0x1;
                    PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
                    pPVar18 = PathElement_InstantiatePathElement_130a194(0x18,2,pvVar12);
                    if (pPVar18 != (PathElement *)0x0) {
                      pPVar13 = pPVar8;
                      PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
                      PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
                      pvVar12 = (void *)0x1;
                      PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
                      pPVar18->SpacesSinceLastCoinRun = 0;
                      pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
                      if (pPVar8 != (PathElement *)0x0) {
                        pPVar13 = pPVar18;
                        PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
                        PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
                        pvVar12 = (void *)0x1;
                        PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
                        uVar5 = _DAT_007a32e0;
                        _DAT_007a32e0 = (undefined4)uVar7;
                        _UNK_007a32e4 = SUB84(uVar7,4);
                        uVar1 = _UNK_007a32e4;
                        pPVar8->SpacesSinceLastCoinRun = _DAT_007a32e0;
                        _DAT_007a32e0 = uVar5;
                        pPVar8->CoinRunCount = uVar1;
                        pPVar18 = PathElement_InstantiatePathElement_130a194(0x14,2,pvVar12);
                        if (pPVar18 != (PathElement *)0x0) {
                          pPVar13 = pPVar8;
                          PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
                          PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
                          pvVar12 = (void *)0x1;
                          PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
                          pPVar8 = PathElement_InstantiatePathElement_130a194(0x13,2,pvVar12);
                          if (pPVar8 != (PathElement *)0x0) {
                            pPVar13 = pPVar18;
                            PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
                            PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
                            pvVar12 = (void *)0x1;
                            PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
                            pPVar18 = PathElement_InstantiatePathElement_130a194(0x15,2,pvVar12);
                            if (pPVar18 != (PathElement *)0x0) {
                              pPVar13 = pPVar8;
                              PathElement_AddCoins_130d4b8(pPVar18,1,pPVar8,in_x3);
                              PathElement_UpdatePathDescription_130ef10(pPVar18,pPVar8,pPVar13);
                              pvVar12 = (void *)0x1;
                              PathElement_SetPath_130fc48(pPVar8,pPVar18,1,in_x3);
                              pPVar8 = PathElement_InstantiatePathElement_130a194(1,2,pvVar12);
                              if (pPVar8 != (PathElement *)0x0) {
                                pPVar13 = pPVar18;
                                PathElement_AddCoins_130d4b8(pPVar8,1,pPVar18,in_x3);
                                PathElement_UpdatePathDescription_130ef10(pPVar8,pPVar18,pPVar13);
                                PathElement_SetPath_130fc48(pPVar18,pPVar8,1,in_x3);
                                pPVar8->IsTutorialEnd = true;
                                lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
                                *(undefined1 *)(lVar9 + 0x10) = 0;
                                *(undefined4 *)(lVar9 + 0x13) = 0x10101;
                                *(undefined8 *)(lVar9 + 0x3c) = uVar11;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01413c44:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

