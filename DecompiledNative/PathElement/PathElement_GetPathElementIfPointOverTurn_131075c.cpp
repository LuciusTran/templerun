// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPathElementIfPointOverTurn(Vector3 point, float radius, PathDirection origin, bool isRootNode, int bailOut = 3) { }
// Ghidra address: 0141475c; ELF VA: 0x131475c; file offset: 0x131075c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement *
PathElement_GetPathElementIfPointOverTurn_131075c
          (PathElement *self,Recovered_Vector3 point,float radius,int origin,bool isRootNode,
          int bailOut,void *runtimeMethod)

{
  int bailOut_00;
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  PathElement *pPVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_register_00005064;
  float fVar8;
  float fVar9;
  Recovered_Vector3 RVar10;
  Recovered_Vector3 RVar11;
  Recovered_Vector2 point_00;
  Recovered_Vector2 point_01;
  Recovered_Vector2 point_02;
  Recovered_Vector2 point_03;
  
  uVar7 = (undefined4)((ulong)register0x00005040 >> 0x20);
  fVar6 = point.component2;
  point_00.component0 = point.component0;
  pvVar3 = (void *)(ulong)(uint)origin;
  if ((bRam0000000002b95102 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95102 = 1;
    pvVar3 = extraout_x1;
  }
  bVar2 = PathElement_IsTurn_130b174(self,pvVar3);
  if (bVar2) {
    pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar3 == (void *)0x0) goto code_r0x01414ad0;
    RVar10 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    uVar5 = CONCAT44(uVar7,RVar10.component1);
    pvVar3 = (void *)NativeHelper_0260e1a8
                               (RVar10.component0,uVar5,
                                CONCAT44(in_register_00005064,RVar10.component2),self,0);
    uVar7 = (undefined4)((ulong)uVar5 >> 0x20);
    if (pvVar3 == (void *)0x0) goto code_r0x01414ad0;
    RVar11 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    if (cRam0000000002b94d38 == '\0') {
      NativeHelper_011df0b4(RVar11.component0,CONCAT44(uVar7,RVar11.component1),PTR_DAT_029b97c8);
      cRam0000000002b94d38 = '\x01';
    }
    fVar9 = point_00.component0 - RVar10.component0;
    fVar8 = fVar6 - RVar11.component2;
    if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) <= radius) {
      return self;
    }
  }
  puVar1 = PTR_DAT_029b7f98;
  bailOut_00 = bailOut + -1;
  if (bailOut_00 < 1) {
    return (PathElement *)0x0;
  }
  if ((origin != 1) || (isRootNode)) {
    pPVar4 = self->PathNorth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathNorth == (PathElement *)0x0) goto code_r0x01414ad0;
      point_01.component1 = fVar6;
      point_01.component0 = point_00.component0;
      pPVar4 = PathElement_GetPathElementIfPointOverTurn2D_131076c
                         (self->PathNorth,point_01,radius,3,false,bailOut_00,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar4;
      }
    }
    if ((origin != 2) || (isRootNode)) goto code_r0x01414878;
code_r0x0141499c:
    puVar1 = PTR_DAT_029b7f98;
    pPVar4 = self->PathSouth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathSouth == (PathElement *)0x0) goto code_r0x01414ad0;
      point_02.component1 = fVar6;
      point_02.component0 = point_00.component0;
      pPVar4 = PathElement_GetPathElementIfPointOverTurn2D_131076c
                         (self->PathSouth,point_02,radius,1,false,bailOut_00,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar4;
      }
    }
    if ((origin == 4) && (!isRootNode)) {
      return (PathElement *)0x0;
    }
  }
  else {
code_r0x01414878:
    puVar1 = PTR_DAT_029b7f98;
    pPVar4 = self->PathEast;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathEast == (PathElement *)0x0) goto code_r0x01414ad0;
      point_00.component1 = fVar6;
      pPVar4 = PathElement_GetPathElementIfPointOverTurn2D_131076c
                         (self->PathEast,point_00,radius,4,false,bailOut_00,runtimeMethod);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
      if (bVar2) {
        return pPVar4;
      }
    }
    if ((origin != 3) || (isRootNode)) goto code_r0x0141499c;
  }
  puVar1 = PTR_DAT_029b7f98;
  pPVar4 = self->PathWest;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->PathWest == (PathElement *)0x0) {
code_r0x01414ad0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    point_03.component1 = fVar6;
    point_03.component0 = point_00.component0;
    pPVar4 = PathElement_GetPathElementIfPointOverTurn2D_131076c
                       (self->PathWest,point_03,radius,2,false,bailOut_00,runtimeMethod);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      return pPVar4;
    }
  }
  return (PathElement *)0x0;
}

