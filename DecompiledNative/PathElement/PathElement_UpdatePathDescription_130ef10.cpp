// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdatePathDescription(PathElement parentPath) { }
// Ghidra address: 01412f10; ELF VA: 0x1312f10; file offset: 0x130ef10
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_UpdatePathDescription_130ef10
               (PathElement *self,PathElement *parentPath,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *pvVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950fc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950fc = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(parentPath,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return;
  }
  bVar2 = PathElement_IsTurn_130b174(self,runtimeMethod_00);
  if (bVar2) {
    iVar5 = 0;
  }
  else {
    if (parentPath == (PathElement *)0x0) goto LAB_014130dc;
    iVar5 = parentPath->SpacesSinceLastTurn + 1;
  }
  self->SpacesSinceLastTurn = iVar5;
  if (self->HasObstacles == false) {
    if (parentPath == (PathElement *)0x0) goto LAB_014130dc;
    self->SpacesSinceLastObstacle = parentPath->SpacesSinceLastObstacle + 1;
    self->BackToBackObstacleCount = 0;
    pvVar4 = runtimeMethod_01;
  }
  else {
    self->SpacesSinceLastObstacle = 0;
    bVar2 = PathElement_DoesSidePathHaveObstacles_130b8c4(self,runtimeMethod_01);
    if (bVar2) {
      if (parentPath == (PathElement *)0x0) goto LAB_014130dc;
      self->BackToBackObstacleCount = parentPath->BackToBackObstacleCount + 1;
    }
    if (self->Obstacles - 5U < 2) {
      self->SpacesSinceLastTurn = 0;
    }
    pvVar4 = extraout_x1;
    if (parentPath == (PathElement *)0x0) {
LAB_014130dc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  if (self->HasCoins == false) {
    iVar5 = parentPath->SpacesSinceLastCoinRun;
    self->CoinRunCount = 0;
    iVar5 = iVar5 + 1;
LAB_01413048:
    self->SpacesSinceLastCoinRun = iVar5;
  }
  else {
    iVar5 = parentPath->CoinRunCount + 1;
    self->CoinRunCount = iVar5;
    puVar1 = PTR_DAT_029bde80;
    lVar3 = *(long *)PTR_DAT_029bde80;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar3 = *(long *)puVar1;
      pvVar4 = extraout_x1_00;
    }
    if (iVar5 < *(int *)(*(long *)(lVar3 + 0xb8) + 0x40)) {
      iVar5 = parentPath->SpacesSinceLastCoinRun;
      goto LAB_01413048;
    }
    self->SpacesSinceLastCoinRun = 0;
  }
  if (self->HasBonusItems == false) {
    if (self->SkippedBonusItems == false) {
      self->SpacesSinceLastBonusItem = parentPath->SpacesSinceLastBonusItem + 1;
      goto LAB_01413070;
    }
  }
  else {
    self->SpacesSinceLastTurn = 0;
    self->SpacesSinceLastObstacle = 0;
  }
  self->SpacesSinceLastBonusItem = 0;
LAB_01413070:
  puVar1 = PTR_DAT_029bde80;
  iVar5 = self->Type;
  if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar4 = extraout_x1_01;
  }
  bVar2 = PathElement_IsPathTypeStepDown_130babc(iVar5,pvVar4);
  if (!bVar2) {
    iVar5 = parentPath->Type;
    pvVar4 = extraout_x1_02;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar4 = extraout_x1_03;
    }
    bVar2 = PathElement_IsPathTypeStepDown_130babc(iVar5,pvVar4);
    if (!bVar2) {
      return;
    }
  }
  self->SpacesSinceLastTurn = 0;
  self->SpacesSinceLastObstacle = 0;
  return;
}

