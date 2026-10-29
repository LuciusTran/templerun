// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetupTerrain() { }
// Ghidra address: 0140e4dc; ELF VA: 0x130e4dc; file offset: 0x130a4dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_SetupTerrain_130a4dc(PathElement *self,void *runtimeMethod)

{
  int level;
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  void *x;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *in_x2;
  int iVar9;
  int *piVar10;
  long *plVar11;
  
  if ((bRam0000000002b950e6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1b20);
    NativeHelper_011df0b4(PTR_DAT_029c1b28);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029b8ab0);
    NativeHelper_011df0b4(PTR_DAT_029c1b30);
    bRam0000000002b950e6 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->Type == 0) {
    return;
  }
  if (self->Level == 0) {
    return;
  }
  PathElement_RemoveAllSubObjects_130b440(self,runtimeMethod);
  DynamicElement_ClearAllChildren_12d593c((DynamicElement *)self,(void *)0x0);
  puVar2 = PTR_DAT_029bde80;
  iVar9 = self->Type;
  level = self->Level;
  if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar4 = PathElement_GetPrefabNameForType_130a7a0(iVar9,level,in_x2);
  uVar5 = NativeHelper_01e9b79c(pvVar4,*(undefined8 *)PTR_DAT_029b8618,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  x = DynamicElement_SetDataModelReference_12d54e4
                ((DynamicElement *)self,pvVar4,*(void **)PTR_DAT_029c1b30,(void *)0x0);
  puVar1 = PTR_DAT_029b7f98;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  if (bVar3) {
    uVar6 = NativeHelper_01e9bd68
                      (*(undefined8 *)PTR_DAT_029c1b28,pvVar4,*(undefined8 *)PTR_DAT_029b8ab0,0);
    puVar2 = PTR_DAT_029b7fb8;
    if ((bRam0000000002b951d1 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7fb8,self,0);
      bRam0000000002b951d1 = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar2 = PTR_DAT_029b7fb8;
    if ((bRam0000000002b9c2fd & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7fb8,self,0);
      NativeHelper_011df0b4(PTR_DAT_029f2e60);
      bRam0000000002b9c2fd = 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (cRam0000000002b9b5c7 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b7fb8);
      cRam0000000002b9b5c7 = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar7 = *(long *)puVar2;
    }
    plVar11 = *(long **)(*(long *)(lVar7 + 0xb8) + 8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    lVar7 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_029f2e60) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto code_r0x025ee428;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)NativeHelper_011b5528(plVar11,*(long *)PTR_DAT_029f2e60,4);
code_r0x025ee428:
                    /* WARNING: Could not recover jumptable at 0x025ee448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)(plVar11,0,uVar6,self,puVar8[1]);
    return;
  }
  pvVar4 = *(void **)&self->field_0x28;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar4,(void *)0x0,(void *)0x0);
  pvVar4 = extraout_x1_00;
  if (bVar3) {
    pvVar4 = UnityEngine_object_get_name_25101a4(self,(void *)0x0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c1b20,pvVar4,0);
    DebugEx_LogError_1321a6c(pvVar4,self,(void *)0x0);
    pvVar4 = extraout_x1_01;
  }
  iVar9 = self->Type;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar4 = extraout_x1_02;
  }
  if (iVar9 - 0xbU < 0x1a) {
    self->HasObstacles = true;
    self->IsTutorialObstacle = true;
    iVar9 = self->Type;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar4 = extraout_x1_03;
    }
    if (iVar9 - 0xbU < 6) {
      iVar9 = 1;
    }
    else {
      iVar9 = self->Type;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar4 = extraout_x1_04;
      }
      if (iVar9 - 0x11U < 0xe) {
        iVar9 = 2;
      }
      else {
        iVar9 = self->Type;
        if (iVar9 - 0x1fU < 2) {
          iVar9 = 6;
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar4 = extraout_x1_05;
          }
          if (3 < iVar9 - 0x21U) goto LAB_0140e76c;
          iVar9 = 7;
        }
      }
    }
    self->Obstacles = iVar9;
  }
LAB_0140e76c:
  bVar3 = PathElement_IsTurn_130b174(self,pvVar4);
  if (bVar3) {
    self->IsTutorialObstacle = true;
  }
  return;
}

