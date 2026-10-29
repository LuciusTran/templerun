// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetNearestPathElement(Vector2 point, PathDirection origin, bool isRootNode, int maxTurns = 3) { }
// Ghidra address: 01414488; ELF VA: 0x1314488; file offset: 0x1310488
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement *
PathElement_GetNearestPathElement_1310488
          (PathElement *self,Recovered_Vector2 point,int origin,bool isRootNode,int maxTurns,
          void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *runtimeMethod_00;
  void *extraout_x1;
  PathElement *pPVar3;
  float fVar4;
  
  runtimeMethod_00 = (void *)(ulong)(uint)origin;
  if ((bRam0000000002b95101 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95101 = 1;
    runtimeMethod_00 = extraout_x1;
  }
  fVar4 = (self->Rectangle).component0;
  if ((((fVar4 <= point.component0) && (point.component0 < fVar4 + (self->Rectangle).component2)) &&
      (fVar4 = (self->Rectangle).component1, fVar4 <= point.component1)) &&
     (point.component1 < fVar4 + (self->Rectangle).component3)) {
    return self;
  }
  bVar2 = PathElement_IsTurn_130b174(self,runtimeMethod_00);
  puVar1 = PTR_DAT_029b7f98;
  if ((bVar2) && (maxTurns = maxTurns + -1, maxTurns < 1)) {
    return (PathElement *)0x0;
  }
  if ((origin != 1) || (isRootNode)) {
    pPVar3 = self->PathNorth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathNorth == (PathElement *)0x0) goto LAB_01414758;
      pPVar3 = PathElement_GetNearestPathElement_1310488
                         (self->PathNorth,point,3,false,maxTurns,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar3;
      }
    }
    if ((origin != 2) || (isRootNode)) goto LAB_01414540;
LAB_01414644:
    pPVar3 = self->PathSouth;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathSouth == (PathElement *)0x0) goto LAB_01414758;
      pPVar3 = PathElement_GetNearestPathElement_1310488
                         (self->PathSouth,point,1,false,maxTurns,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar3;
      }
    }
    if ((origin == 4) && (!isRootNode)) {
      return (PathElement *)0x0;
    }
  }
  else {
LAB_01414540:
    pPVar3 = self->PathEast;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathEast == (PathElement *)0x0) goto LAB_01414758;
      pPVar3 = PathElement_GetNearestPathElement_1310488
                         (self->PathEast,point,4,false,maxTurns,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar3;
      }
    }
    if ((origin != 3) || (isRootNode)) goto LAB_01414644;
  }
  pPVar3 = self->PathWest;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->PathWest == (PathElement *)0x0) {
LAB_01414758:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pPVar3 = PathElement_GetNearestPathElement_1310488
                       (self->PathWest,point,2,false,maxTurns,runtimeMethod);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      return pPVar3;
    }
  }
  return (PathElement *)0x0;
}

