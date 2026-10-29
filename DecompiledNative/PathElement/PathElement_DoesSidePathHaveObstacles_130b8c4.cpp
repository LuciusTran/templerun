// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool DoesSidePathHaveObstacles() { }
// Ghidra address: 0140f8c4; ELF VA: 0x130f8c4; file offset: 0x130b8c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_DoesSidePathHaveObstacles_130b8c4(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *pvVar3;
  PathElement *pPVar4;
  
  puVar1 = PTR_DAT_029bde80;
  if ((bRam0000000002b950ec & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950ec = 1;
    runtimeMethod = extraout_x1;
  }
  pPVar4 = self->PathNorth;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    runtimeMethod = extraout_x1_00;
  }
  bVar2 = PathElement_HasObstacle_130b98c(pPVar4,runtimeMethod);
  if (!bVar2) {
    pPVar4 = self->PathEast;
    pvVar3 = extraout_x1_01;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar3 = extraout_x1_02;
    }
    bVar2 = PathElement_HasObstacle_130b98c(pPVar4,pvVar3);
    if (!bVar2) {
      pPVar4 = self->PathWest;
      pvVar3 = extraout_x1_03;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        pvVar3 = extraout_x1_04;
      }
      bVar2 = PathElement_HasObstacle_130b98c(pPVar4,pvVar3);
      if (!bVar2) {
        pPVar4 = self->PathSouth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar1 = PTR_DAT_029b7f98;
        if ((bRam0000000002b950ed & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          bRam0000000002b950ed = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
        if (bVar2) {
          if (pPVar4 == (PathElement *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          bVar2 = pPVar4->HasObstacles != false;
        }
        else {
          bVar2 = false;
        }
        return bVar2;
      }
    }
  }
  return true;
}

