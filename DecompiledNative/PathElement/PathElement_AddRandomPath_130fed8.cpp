// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddRandomPath(int depth, PathDirection origin) { }
// Ghidra address: 01413ed8; ELF VA: 0x1313ed8; file offset: 0x130fed8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_AddRandomPath_130fed8(PathElement *self,int depth,int origin,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  PathElement *pPVar6;
  
  puVar1 = PTR_DAT_029b7f98;
  pvVar3 = (void *)(ulong)(uint)origin;
  pvVar5 = pvVar3;
  do {
    depth = depth + -1;
    if ((bRam0000000002b950fb & 1) == 0) {
      NativeHelper_011df0b4(puVar1);
      bRam0000000002b950fb = 1;
    }
    if (depth == -1) {
      return;
    }
    iVar4 = (int)pvVar5;
    if (iVar4 == 1) {
LAB_01413fd4:
      bVar2 = PathElement_CanPathExtendOnSide_130c140(self,2,pvVar3);
      if (bVar2) {
        pPVar6 = self->PathEast;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar3 = (void *)0x0;
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
        if (bVar2) {
          pPVar6 = self->PathEast;
          bVar2 = false;
        }
        else {
          pPVar6 = PathElement_GetRandomPathElementForSide_130c70c(self,2,pvVar3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          pvVar3 = (void *)0x0;
          bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
          if (!bVar2) goto LAB_01414078;
          bVar2 = PathElement_SetPath_130fc48(self,pPVar6,2,runtimeMethod);
        }
        if (pPVar6 == (PathElement *)0x0) goto LAB_014141e0;
        pvVar3 = (void *)0x4;
        PathElement_AddRandomPath_130fed8(pPVar6,depth,4,runtimeMethod);
      }
LAB_01414078:
      if (iVar4 != 3) goto LAB_01414080;
    }
    else {
      bVar2 = PathElement_CanPathExtendOnSide_130c140(self,1,pvVar3);
      if (bVar2) {
        pPVar6 = self->PathNorth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar3 = (void *)0x0;
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
        if (bVar2) {
          pPVar6 = self->PathNorth;
          bVar2 = false;
        }
        else {
          pPVar6 = PathElement_GetRandomPathElementForSide_130c70c(self,1,pvVar3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          pvVar3 = (void *)0x0;
          bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
          if (!bVar2) goto LAB_01413fcc;
          bVar2 = PathElement_SetPath_130fc48(self,pPVar6,1,runtimeMethod);
        }
        if (pPVar6 == (PathElement *)0x0) {
LAB_014141e0:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc(bVar2);
        }
        pvVar3 = (void *)0x3;
        PathElement_AddRandomPath_130fed8(pPVar6,depth,3,runtimeMethod);
      }
LAB_01413fcc:
      if (iVar4 != 2) goto LAB_01413fd4;
LAB_01414080:
      bVar2 = PathElement_CanPathExtendOnSide_130c140(self,3,pvVar3);
      if (bVar2) {
        pPVar6 = self->PathSouth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar3 = (void *)0x0;
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
        if (bVar2) {
          pPVar6 = self->PathSouth;
          bVar2 = false;
        }
        else {
          pPVar6 = PathElement_GetRandomPathElementForSide_130c70c(self,3,pvVar3);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          pvVar3 = (void *)0x0;
          bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
          if (!bVar2) goto LAB_01414124;
          bVar2 = PathElement_SetPath_130fc48(self,pPVar6,3,runtimeMethod);
        }
        if (pPVar6 == (PathElement *)0x0) goto LAB_014141e0;
        pvVar3 = (void *)0x1;
        PathElement_AddRandomPath_130fed8(pPVar6,depth,1,runtimeMethod);
      }
LAB_01414124:
      if (iVar4 == 4) {
        return;
      }
    }
    bVar2 = PathElement_CanPathExtendOnSide_130c140(self,4,pvVar3);
    if (!bVar2) {
      return;
    }
    pPVar6 = self->PathWest;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar3 = (void *)0x0;
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
    if (bVar2) {
      self = self->PathWest;
    }
    else {
      pPVar6 = PathElement_GetRandomPathElementForSide_130c70c(self,4,pvVar3);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar6,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        return;
      }
      pvVar3 = (void *)0x4;
      bVar2 = PathElement_SetPath_130fc48(self,pPVar6,4,runtimeMethod);
      self = pPVar6;
    }
    if (self == (PathElement *)0x0) goto LAB_014141e0;
    pvVar5 = (void *)0x2;
  } while( true );
}

