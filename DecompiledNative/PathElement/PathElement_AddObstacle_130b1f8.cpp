// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddObstacle(ObstacleType type) { }
// Ghidra address: 0140f1f8; ELF VA: 0x130f1f8; file offset: 0x130b1f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_AddObstacle_130b1f8(PathElement *self,int type,void *runtimeMethod)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if ((bRam0000000002b950e7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1da0);
    NativeHelper_011df0b4(PTR_DAT_029c1da8);
    NativeHelper_011df0b4(PTR_DAT_029c1db0);
    NativeHelper_011df0b4(PTR_DAT_029c1db8);
    NativeHelper_011df0b4(PTR_DAT_029c1dc0);
    NativeHelper_011df0b4(PTR_DAT_029c1dc8);
    NativeHelper_011df0b4(PTR_DAT_029c1dd0);
    NativeHelper_011df0b4(PTR_DAT_029c1dd8);
    NativeHelper_011df0b4(PTR_DAT_029c1de0);
    NativeHelper_011df0b4(PTR_DAT_029c1de8);
    NativeHelper_011df0b4(PTR_DAT_029c1df0);
    NativeHelper_011df0b4(PTR_DAT_029c1df8);
    bRam0000000002b950e7 = 1;
  }
  if (self->HasObstacles != false) {
    return;
  }
  if (((uint)type < 8) && ((1 << (ulong)(type & 0x1f) & 199U) != 0)) {
    return;
  }
  iVar5 = self->Type;
  if (1 < iVar5 - 1U) {
    return;
  }
  if (type == 5) {
    bVar1 = self->Level == 2;
    puVar4 = (undefined8 *)PTR_DAT_029c1da0;
    puVar3 = (undefined8 *)PTR_DAT_029c1dd8;
    if (iVar5 != 1) {
      puVar4 = (undefined8 *)PTR_DAT_029c1de8;
      puVar3 = (undefined8 *)PTR_DAT_029c1db0;
    }
    iVar5 = 5;
  }
  else if (type == 4) {
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    iVar2 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
    bVar1 = iVar2 == 0;
    puVar4 = (undefined8 *)PTR_DAT_029c1dc0;
    puVar3 = (undefined8 *)PTR_DAT_029c1df8;
    if (iVar5 != 1) {
      puVar4 = (undefined8 *)PTR_DAT_029c1dc8;
      puVar3 = (undefined8 *)PTR_DAT_029c1df0;
    }
    iVar5 = 4;
  }
  else {
    if (type != 3) goto LAB_0140f430;
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    iVar2 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
    bVar1 = iVar2 == 0;
    puVar4 = (undefined8 *)PTR_DAT_029c1db8;
    puVar3 = (undefined8 *)PTR_DAT_029c1de0;
    if (iVar5 != 1) {
      puVar4 = (undefined8 *)PTR_DAT_029c1dd0;
      puVar3 = (undefined8 *)PTR_DAT_029c1da8;
    }
    iVar5 = 3;
  }
  if (!bVar1) {
    puVar3 = puVar4;
  }
  DynamicElement_SetDataModelReference_12d54e4
            ((DynamicElement *)self,(void *)*puVar3,(void *)0x0,(void *)0x0);
  self->Obstacles = iVar5;
LAB_0140f430:
  self->HasObstacles = true;
  self->IsTutorialObstacle = true;
  return;
}

