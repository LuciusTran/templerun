// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPathElementIfPointOverTutorialObstacle(Vector3 point, float radius, PathDirection origin, bool isRootNode) { }
// Ghidra address: 01414be0; ELF VA: 0x1314be0; file offset: 0x1310be0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement *
PathElement_GetPathElementIfPointOverTutorialObstacle_1310be0
          (PathElement *self,Recovered_Vector3 point,float radius,int origin,bool isRootNode,
          void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  long lVar4;
  PathElement *pPVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_register_00005064;
  Recovered_Vector3 RVar11;
  Recovered_Vector3 RVar12;
  Recovered_Vector2 point_00;
  Recovered_Vector2 point_01;
  Recovered_Vector2 point_02;
  Recovered_Vector2 point_03;
  
  uVar10 = (undefined4)((ulong)register0x00005040 >> 0x20);
  fVar8 = point.component2;
  point_00.component0 = point.component0;
  pvVar3 = (void *)(ulong)(uint)origin;
  if ((bRam0000000002b95104 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b95104 = 1;
    pvVar3 = extraout_x1;
  }
  if ((self->HasObstacles != false) || (bVar2 = PathElement_IsTurn_130b174(self,pvVar3), bVar2)) {
    puVar1 = PTR_DAT_029bde80;
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar3 == (void *)0x0) goto LAB_01414f38;
    RVar11 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1a8
                               (RVar11.component0,CONCAT44(uVar10,RVar11.component1),
                                CONCAT44(in_register_00005064,RVar11.component2),self,0);
    if (pvVar3 == (void *)0x0) goto LAB_01414f38;
    RVar12 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    fVar6 = RVar12.component2 - radius;
    fVar9 = radius + radius;
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar7 = RVar11.component0 - radius;
    *(float *)(lVar4 + 0x78) = fVar7;
    *(float *)(lVar4 + 0x7c) = fVar6;
    *(float *)(lVar4 + 0x80) = fVar9;
    *(float *)(lVar4 + 0x84) = fVar9;
    if ((((fVar8 < fVar9 + fVar6) && (fVar7 <= point_00.component0)) &&
        (point_00.component0 < fVar9 + fVar7)) && (fVar6 <= fVar8)) {
      return self;
    }
  }
  puVar1 = PTR_DAT_029b7f98;
  if ((origin != 1) || (isRootNode)) {
    pPVar5 = self->PathNorth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathNorth == (PathElement *)0x0) goto LAB_01414f38;
      point_01.component1 = fVar8;
      point_01.component0 = point_00.component0;
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathNorth,point_01,radius,3,false,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar5;
      }
    }
    if ((origin != 2) || (isRootNode)) goto LAB_01414d00;
LAB_01414e14:
    puVar1 = PTR_DAT_029b7f98;
    pPVar5 = self->PathSouth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathSouth == (PathElement *)0x0) goto LAB_01414f38;
      point_02.component1 = fVar8;
      point_02.component0 = point_00.component0;
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathSouth,point_02,radius,1,false,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar5;
      }
    }
    if ((origin == 4) && (!isRootNode)) {
      return (PathElement *)0x0;
    }
  }
  else {
LAB_01414d00:
    puVar1 = PTR_DAT_029b7f98;
    pPVar5 = self->PathEast;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathEast == (PathElement *)0x0) goto LAB_01414f38;
      point_00.component1 = fVar8;
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathEast,point_00,radius,4,false,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar5;
      }
    }
    if ((origin != 3) || (isRootNode)) goto LAB_01414e14;
  }
  puVar1 = PTR_DAT_029b7f98;
  pPVar5 = self->PathWest;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->PathWest == (PathElement *)0x0) {
LAB_01414f38:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    point_03.component1 = fVar8;
    point_03.component0 = point_00.component0;
    pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                       (self->PathWest,point_03,radius,2,false,runtimeMethod);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar5,(void *)0x0,(void *)0x0);
    if (bVar2) {
      return pPVar5;
    }
  }
  return (PathElement *)0x0;
}

