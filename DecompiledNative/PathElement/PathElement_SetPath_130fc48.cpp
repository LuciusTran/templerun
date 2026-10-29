// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool SetPath(PathElement path, PathDirection direction) { }
// Ghidra address: 01413c48; ELF VA: 0x1313c48; file offset: 0x130fc48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_SetPath_130fc48
               (PathElement *self,PathElement *path,int direction,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *runtimeMethod_00;
  void *in_x4;
  PathElement **ppPVar5;
  Recovered_Vector3 RVar6;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Vector3 value_01;
  
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950f9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950f9 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(path,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return false;
  }
  if (path == (PathElement *)0x0) {
LAB_01413e44:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  bVar3 = PathElement_DoesPieceTypeFitOnSide_130c044(self,path->Type,direction,false,in_x4);
  if (!bVar3) {
    return false;
  }
  pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar4 == (void *)0x0) goto LAB_01413e44;
  RVar6 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
  uVar1 = RVar6._0_8_;
  pvVar4 = extraout_x1;
  switch(direction) {
  case 1:
    pvVar4 = (void *)NativeHelper_0260e1a8(path,0);
    if (pvVar4 == (void *)0x0) goto LAB_01413e44;
    value.component2 = RVar6.component2 + 60.0;
    value.component0 = (float)(int)uVar1;
    value.component1 = (float)(int)((ulong)uVar1 >> 0x20);
    UnityEngine_Transform_set_position_25167b0(pvVar4,value,(void *)0x0);
    self->PathNorth = path;
    ppPVar5 = &path->PathSouth;
    pvVar4 = extraout_x1_00;
    break;
  case 2:
    pvVar4 = (void *)NativeHelper_0260e1a8(path,0);
    if (pvVar4 == (void *)0x0) goto LAB_01413e44;
    RVar6.component0 = RVar6.component0 + 60.0;
    UnityEngine_Transform_set_position_25167b0(pvVar4,RVar6,(void *)0x0);
    self->PathEast = path;
    ppPVar5 = &path->PathWest;
    pvVar4 = extraout_x1_01;
    break;
  case 3:
    pvVar4 = (void *)NativeHelper_0260e1a8(path,0);
    if (pvVar4 == (void *)0x0) goto LAB_01413e44;
    value_00.component2 = RVar6.component2 + -60.0;
    value_00.component0 = (float)(int)uVar1;
    value_00.component1 = (float)(int)((ulong)uVar1 >> 0x20);
    UnityEngine_Transform_set_position_25167b0(pvVar4,value_00,(void *)0x0);
    self->PathSouth = path;
    ppPVar5 = &path->PathNorth;
    pvVar4 = extraout_x1_02;
    break;
  case 4:
    pvVar4 = (void *)NativeHelper_0260e1a8(path,0);
    if (pvVar4 == (void *)0x0) goto LAB_01413e44;
    value_01.component0 = RVar6.component0 + -60.0;
    value_01.component1 = RVar6.component1;
    value_01.component2 = RVar6.component2;
    UnityEngine_Transform_set_position_25167b0(pvVar4,value_01,(void *)0x0);
    ppPVar5 = &path->PathEast;
    self->PathWest = path;
    pvVar4 = extraout_x1_03;
    break;
  default:
    goto LAB_01413e08;
  }
  *ppPVar5 = self;
LAB_01413e08:
  PathElement_UpdateCachedComponents_130f0e0(path,pvVar4);
  bVar3 = PathElement_IsTurn_130b174(self,runtimeMethod_00);
  if ((bVar3) && (path->HasObstacles != false)) {
    path->IsTutorialObstacle = false;
  }
  return true;
}

