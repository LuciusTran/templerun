// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Prune() { }
// Ghidra address: 0139784c; ELF VA: 0x129784c; file offset: 0x129384c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_Prune_129384c(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *extraout_x1;
  void *pvVar6;
  void *runtimeMethod_00;
  PathElement *pPVar7;
  PathElement *pPVar8;
  void *pvVar9;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94cfc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b94cfc = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar1;
  pPVar7 = self->NearestElement;
  pPVar8 = self->PathRoot;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar5,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar7,pPVar8,(void *)0x0);
  if (bVar2) {
    self->LastTurnPathPiece = (PathElement *)0x0;
    if (self->Player == (CommonPlayer *)0x0) {
LAB_01397984:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    iVar3 = CommonPlayer_TravelingDirection_12bf6d0(self->Player,(void *)0x0);
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029bde80);
    }
    iVar4 = PathElement_GetOpposite_130c020(iVar3,(void *)0x0);
    if (iVar3 != 0) {
      if (self->IsIntroScene == false) {
        if (self->PathRoot == (PathElement *)0x0) goto LAB_01397984;
        PathElement_Prune_13102e8(self->PathRoot,iVar3,(void *)0x0);
      }
      pPVar7 = self->NearestElement;
      self->PathRootOrigin = iVar4;
      self->PathRoot = pPVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar7,(void *)0x0,(void *)0x0);
      puVar1 = PTR_DAT_029b7f98;
      if (bVar2) {
        pPVar7 = self->PathRoot;
        if (pPVar7 != (PathElement *)0x0) {
          pvVar6 = (void *)(ulong)(uint)self->PathRootOrigin;
          runtimeMethod_00 = (void *)0x0;
          iVar3 = 9;
          pvVar9 = pvVar6;
          do {
            if ((bRam0000000002b950fb & 1) == 0) {
              NativeHelper_011df0b4(puVar1);
              bRam0000000002b950fb = 1;
            }
            if (iVar3 == -1) {
              return;
            }
            iVar4 = (int)pvVar9;
            if (iVar4 == 1) {
code_r0x01413fd4:
              bVar2 = PathElement_CanPathExtendOnSide_130c140(pPVar7,2,pvVar6);
              if (bVar2) {
                pPVar8 = pPVar7->PathEast;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                pvVar6 = (void *)0x0;
                bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                if (bVar2) {
                  pPVar8 = pPVar7->PathEast;
                  bVar2 = false;
                }
                else {
                  pPVar8 = PathElement_GetRandomPathElementForSide_130c70c(pPVar7,2,pvVar6);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)puVar1);
                  }
                  pvVar6 = (void *)0x0;
                  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                  if (!bVar2) goto code_r0x01414078;
                  bVar2 = PathElement_SetPath_130fc48(pPVar7,pPVar8,2,runtimeMethod_00);
                }
                if (pPVar8 == (PathElement *)0x0) goto code_r0x014141e0;
                pvVar6 = (void *)0x4;
                PathElement_AddRandomPath_130fed8(pPVar8,iVar3,4,runtimeMethod_00);
              }
code_r0x01414078:
              if (iVar4 != 3) goto code_r0x01414080;
            }
            else {
              bVar2 = PathElement_CanPathExtendOnSide_130c140(pPVar7,1,pvVar6);
              if (bVar2) {
                pPVar8 = pPVar7->PathNorth;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                pvVar6 = (void *)0x0;
                bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                if (bVar2) {
                  pPVar8 = pPVar7->PathNorth;
                  bVar2 = false;
                }
                else {
                  pPVar8 = PathElement_GetRandomPathElementForSide_130c70c(pPVar7,1,pvVar6);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)puVar1);
                  }
                  pvVar6 = (void *)0x0;
                  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                  if (!bVar2) goto code_r0x01413fcc;
                  bVar2 = PathElement_SetPath_130fc48(pPVar7,pPVar8,1,runtimeMethod_00);
                }
                if (pPVar8 == (PathElement *)0x0) {
code_r0x014141e0:
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df2dc(bVar2);
                }
                pvVar6 = (void *)0x3;
                PathElement_AddRandomPath_130fed8(pPVar8,iVar3,3,runtimeMethod_00);
              }
code_r0x01413fcc:
              if (iVar4 != 2) goto code_r0x01413fd4;
code_r0x01414080:
              bVar2 = PathElement_CanPathExtendOnSide_130c140(pPVar7,3,pvVar6);
              if (bVar2) {
                pPVar8 = pPVar7->PathSouth;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                pvVar6 = (void *)0x0;
                bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                if (bVar2) {
                  pPVar8 = pPVar7->PathSouth;
                  bVar2 = false;
                }
                else {
                  pPVar8 = PathElement_GetRandomPathElementForSide_130c70c(pPVar7,3,pvVar6);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)puVar1);
                  }
                  pvVar6 = (void *)0x0;
                  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
                  if (!bVar2) goto code_r0x01414124;
                  bVar2 = PathElement_SetPath_130fc48(pPVar7,pPVar8,3,runtimeMethod_00);
                }
                if (pPVar8 == (PathElement *)0x0) goto code_r0x014141e0;
                pvVar6 = (void *)0x1;
                PathElement_AddRandomPath_130fed8(pPVar8,iVar3,1,runtimeMethod_00);
              }
code_r0x01414124:
              if (iVar4 == 4) {
                return;
              }
            }
            bVar2 = PathElement_CanPathExtendOnSide_130c140(pPVar7,4,pvVar6);
            if (!bVar2) {
              return;
            }
            pPVar8 = pPVar7->PathWest;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            pvVar6 = (void *)0x0;
            bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
            if (bVar2) {
              pPVar7 = pPVar7->PathWest;
            }
            else {
              pPVar8 = PathElement_GetRandomPathElementForSide_130c70c(pPVar7,4,pvVar6);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)puVar1);
              }
              bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar8,(void *)0x0,(void *)0x0);
              if (!bVar2) {
                return;
              }
              pvVar6 = (void *)0x4;
              bVar2 = PathElement_SetPath_130fc48(pPVar7,pPVar8,4,runtimeMethod_00);
              pPVar7 = pPVar8;
            }
            if (pPVar7 == (PathElement *)0x0) goto code_r0x014141e0;
            iVar3 = iVar3 + -1;
            pvVar9 = (void *)0x2;
          } while( true );
        }
        goto LAB_01397984;
      }
    }
  }
  return;
}

