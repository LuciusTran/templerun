// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPathElementIfPointOverTutorialObstacle(Vector2 point, float radius, PathDirection origin, bool isRootNode) { }
// Ghidra address: 01414bf0; ELF VA: 0x1314bf0; file offset: 0x1310bf0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement *
PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
          (PathElement *self,Recovered_Vector2 point,float radius,int origin,bool isRootNode,
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
  undefined4 uVar8;
  float fVar9;
  undefined4 in_register_00005044;
  Recovered_Vector3 RVar10;
  Recovered_Vector3 RVar11;
  
  uVar8 = (undefined4)((ulong)register0x00005020 >> 0x20);
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
    RVar10 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1a8
                               (RVar10.component0,CONCAT44(uVar8,RVar10.component1),
                                CONCAT44(in_register_00005044,RVar10.component2),self,0);
    if (pvVar3 == (void *)0x0) goto LAB_01414f38;
    RVar11 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    fVar6 = RVar11.component2 - radius;
    fVar9 = radius + radius;
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar7 = RVar10.component0 - radius;
    *(float *)(lVar4 + 0x78) = fVar7;
    *(float *)(lVar4 + 0x7c) = fVar6;
    *(float *)(lVar4 + 0x80) = fVar9;
    *(float *)(lVar4 + 0x84) = fVar9;
    if ((((point.component1 < fVar9 + fVar6) && (fVar7 <= point.component0)) &&
        (point.component0 < fVar9 + fVar7)) && (fVar6 <= point.component1)) {
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
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathNorth,point,radius,3,false,runtimeMethod);
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
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathSouth,point,radius,1,false,runtimeMethod);
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
      pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                         (self->PathEast,point,radius,4,false,runtimeMethod);
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
    pPVar5 = PathElement_GetPathElementIfPointOverTutorialObstacle_1310bf0
                       (self->PathWest,point,radius,2,false,runtimeMethod);
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

