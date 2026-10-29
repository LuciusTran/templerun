// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetPathType(PathType type, PathLevel level) { }
// Ghidra address: 0140e470; ELF VA: 0x130e470; file offset: 0x130a470
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_SetPathType_130a470(PathElement *self,int type,int level,void *runtimeMethod)

{
  int level_00;
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  int iVar10;
  int *piVar11;
  long *plVar12;
  
  pvVar6 = (void *)(ulong)(uint)level;
  pvVar4 = (void *)(ulong)(uint)type;
  self->Type = type;
  self->Level = level;
  if ((bRam0000000002b950e6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1b20);
    NativeHelper_011df0b4(PTR_DAT_029c1b28);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029b8ab0);
    NativeHelper_011df0b4(PTR_DAT_029c1b30);
    bRam0000000002b950e6 = 1;
    pvVar4 = extraout_x1;
  }
  if (self->Type == 0) {
    return;
  }
  if (self->Level == 0) {
    return;
  }
  PathElement_RemoveAllSubObjects_130b440(self,pvVar4);
  DynamicElement_ClearAllChildren_12d593c((DynamicElement *)self,(void *)0x0);
  puVar2 = PTR_DAT_029bde80;
  iVar10 = self->Type;
  level_00 = self->Level;
  if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar4 = PathElement_GetPrefabNameForType_130a7a0(iVar10,level_00,pvVar6);
  uVar5 = NativeHelper_01e9b79c(pvVar4,*(undefined8 *)PTR_DAT_029b8618,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  pvVar6 = DynamicElement_SetDataModelReference_12d54e4
                     ((DynamicElement *)self,pvVar4,*(void **)PTR_DAT_029c1b30,(void *)0x0);
  puVar1 = PTR_DAT_029b7f98;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar6,(void *)0x0,(void *)0x0);
  if (bVar3) {
    uVar7 = NativeHelper_01e9bd68
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
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar2;
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    lVar8 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_029f2e60) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto code_r0x025ee428;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined8 *)NativeHelper_011b5528(plVar12,*(long *)PTR_DAT_029f2e60,4);
code_r0x025ee428:
                    /* WARNING: Could not recover jumptable at 0x025ee448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar12,0,uVar7,self,puVar9[1]);
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
  iVar10 = self->Type;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar4 = extraout_x1_02;
  }
  if (iVar10 - 0xbU < 0x1a) {
    self->HasObstacles = true;
    self->IsTutorialObstacle = true;
    iVar10 = self->Type;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar4 = extraout_x1_03;
    }
    if (iVar10 - 0xbU < 6) {
      iVar10 = 1;
    }
    else {
      iVar10 = self->Type;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar4 = extraout_x1_04;
      }
      if (iVar10 - 0x11U < 0xe) {
        iVar10 = 2;
      }
      else {
        iVar10 = self->Type;
        if (iVar10 - 0x1fU < 2) {
          iVar10 = 6;
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            pvVar4 = extraout_x1_05;
          }
          if (3 < iVar10 - 0x21U) goto code_r0x0140e76c;
          iVar10 = 7;
        }
      }
    }
    self->Obstacles = iVar10;
  }
code_r0x0140e76c:
  bVar3 = PathElement_IsTurn_130b174(self,pvVar4);
  if (bVar3) {
    self->IsTutorialObstacle = true;
  }
  return;
}

