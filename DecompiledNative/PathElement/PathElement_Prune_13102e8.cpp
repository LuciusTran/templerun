// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Prune(PathDirection origin) { }
// Ghidra address: 014142e8; ELF VA: 0x13142e8; file offset: 0x13102e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_Prune_13102e8(PathElement *self,int origin,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  PathElement *pPVar4;
  
  if ((bRam0000000002b950fe & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950fe = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if (origin == 1) {
LAB_01414380:
    pPVar4 = self->PathEast;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar3 = (void *)0x0;
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathEast == (PathElement *)0x0) goto LAB_01414484;
      PathElement_Prune_13102e8(self->PathEast,4,pvVar3);
      if (self->PathEast == (PathElement *)0x0) goto LAB_01414484;
      DynamicElement_DestroySelf_12d5ce8((DynamicElement *)self->PathEast,(void *)0x0);
      self->PathEast = (PathElement *)0x0;
    }
    if (origin != 3) goto LAB_014143d4;
  }
  else {
    pPVar4 = self->PathNorth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar3 = (void *)0x0;
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathNorth == (PathElement *)0x0) goto LAB_01414484;
      PathElement_Prune_13102e8(self->PathNorth,3,pvVar3);
      if (self->PathNorth == (PathElement *)0x0) goto LAB_01414484;
      DynamicElement_DestroySelf_12d5ce8((DynamicElement *)self->PathNorth,(void *)0x0);
      self->PathNorth = (PathElement *)0x0;
    }
    if (origin != 2) goto LAB_01414380;
LAB_014143d4:
    pPVar4 = self->PathSouth;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar3 = (void *)0x0;
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->PathSouth == (PathElement *)0x0) goto LAB_01414484;
      PathElement_Prune_13102e8(self->PathSouth,1,pvVar3);
      if (self->PathSouth == (PathElement *)0x0) goto LAB_01414484;
      DynamicElement_DestroySelf_12d5ce8((DynamicElement *)self->PathSouth,(void *)0x0);
      self->PathSouth = (PathElement *)0x0;
    }
    if (origin == 4) {
      return;
    }
  }
  pPVar4 = self->PathWest;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar3 = (void *)0x0;
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if (self->PathWest != (PathElement *)0x0) {
    PathElement_Prune_13102e8(self->PathWest,2,pvVar3);
    if (self->PathWest != (PathElement *)0x0) {
      DynamicElement_DestroySelf_12d5ce8((DynamicElement *)self->PathWest,(void *)0x0);
      self->PathWest = (PathElement *)0x0;
      return;
    }
  }
LAB_01414484:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

