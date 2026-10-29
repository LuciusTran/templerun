// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool DoesPieceTypeFitOnSide(PathType type, PathDirection direction, bool checkPieceTypes = true) { }
// Ghidra address: 01410044; ELF VA: 0x1310044; file offset: 0x130c044
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_DoesPieceTypeFitOnSide_130c044
               (PathElement *self,int type,int direction,bool checkPieceTypes,void *runtimeMethod)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  void *runtimeMethod_00;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  PathElement **ppPVar9;
  PathElement *x;
  ulong uVar10;
  
  if ((bRam0000000002b950f2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950f2 = 1;
  }
  switch(direction) {
  case 1:
    ppPVar9 = &self->PathNorth;
    break;
  case 2:
    ppPVar9 = &self->PathEast;
    break;
  case 3:
    ppPVar9 = &self->PathSouth;
    break;
  case 4:
    ppPVar9 = &self->PathWest;
    break;
  default:
    x = (PathElement *)0x0;
    goto LAB_014100d4;
  }
  x = *ppPVar9;
LAB_014100d4:
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  runtimeMethod_00 = (void *)0x0;
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return false;
  }
  bVar2 = PathElement_CanPathExtendOnSide_130c140(self,direction,runtimeMethod_00);
  if (!bVar2) {
    return bVar2;
  }
  if (!checkPieceTypes) {
    return bVar2;
  }
  if ((bRam0000000002b950f4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1e10);
    NativeHelper_011df0b4(PTR_DAT_029c1e00);
    NativeHelper_011df0b4(PTR_DAT_029c1e28);
    NativeHelper_011df0b4(PTR_DAT_029c1e30);
    NativeHelper_011df0b4(PTR_DAT_029c1e38);
    NativeHelper_011df0b4(PTR_DAT_029c1e40);
    bRam0000000002b950f4 = 1;
  }
  switch(direction) {
  case 1:
    switch(self->Type) {
    case 0xc:
      bVar1 = type == 1;
      bVar2 = type == 0xd;
      break;
    default:
      lVar3 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e00,0xf);
      puVar8 = (undefined8 *)PTR_DAT_029c1e38;
code_r0x014104e0:
      NativeHelper_01f3db6c(lVar3,*puVar8,0);
      lVar6 = *(long *)PTR_DAT_029c1e10;
      uVar4 = (ulong)(uint)type;
      if (*(long *)(lVar6 + 0x38) == 0) {
        uVar4 = NativeHelper_011b5290(lVar6);
      }
      if (lVar3 != 0) {
        bVar2 = 0 < *(int *)(lVar3 + 0x18);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar10 = 0;
          do {
            plVar5 = (long *)func_0x014b08c8(**(undefined8 **)(lVar6 + 0x38));
            if (*(uint *)(lVar3 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2e4();
            }
            uVar4 = 0;
            if (plVar5 == (long *)0x0) goto code_r0x01505b64;
            uVar4 = (**(code **)(*plVar5 + 0x1b8))
                              (plVar5,*(undefined4 *)(lVar3 + 0x20 + uVar10 * 4),(ulong)(uint)type,
                               *(undefined8 *)(*plVar5 + 0x1c0));
            if ((uVar4 & 1) != 0) {
              return bVar2;
            }
            uVar10 = uVar10 + 1;
            bVar2 = (long)uVar10 < (long)*(int *)(lVar3 + 0x18);
          } while ((long)uVar10 < (long)*(int *)(lVar3 + 0x18));
        }
        return bVar2;
      }
code_r0x01505b64:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc(uVar4);
    case 0x11:
    case 0x15:
    case 0x18:
code_r0x01410384:
      return type == 1;
    case 0x13:
    case 0x14:
      bVar1 = type == 0x13;
      bVar2 = type == 0x15;
      break;
    case 0x16:
    case 0x17:
      bVar1 = type == 0x16;
      bVar2 = type == 0x18;
    }
    break;
  case 2:
    switch(self->Type) {
    case 0xf:
      bVar1 = type == 2;
      bVar2 = type == 0x10;
      break;
    default:
      lVar3 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e00,0xe);
      puVar8 = (undefined8 *)PTR_DAT_029c1e30;
      goto code_r0x014104e0;
    case 0x12:
    case 0x1b:
    case 0x1e:
code_r0x014103b4:
      return type == 2;
    case 0x19:
    case 0x1a:
      return (type & 0xfffffffdU) == 0x19;
    case 0x1c:
    case 0x1d:
      uVar7 = type & 0xfffffffd;
code_r0x01410404:
      return uVar7 == 0x1c;
    }
    break;
  case 3:
    switch(self->Type) {
    case 0xd:
      bVar1 = type == 1;
      bVar2 = type == 0xc;
      break;
    default:
      lVar3 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e00,0xf);
      puVar8 = (undefined8 *)PTR_DAT_029c1e40;
      goto code_r0x014104e0;
    case 0x11:
    case 0x14:
    case 0x17:
      goto code_r0x01410384;
    case 0x13:
    case 0x15:
      uVar7 = type - 0x13;
code_r0x014103f4:
      return uVar7 < 2;
    case 0x16:
    case 0x18:
      return (type & 0xfffffffeU) == 0x16;
    }
    break;
  case 4:
    switch(self->Type) {
    case 0x10:
      bVar1 = type == 2;
      bVar2 = type == 0xf;
      break;
    default:
      lVar3 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029c1e00,0xe);
      puVar8 = (undefined8 *)PTR_DAT_029c1e28;
      goto code_r0x014104e0;
    case 0x12:
    case 0x1a:
    case 0x1d:
      goto code_r0x014103b4;
    case 0x19:
    case 0x1b:
      uVar7 = type - 0x19;
      goto code_r0x014103f4;
    case 0x1c:
    case 0x1e:
      uVar7 = type & 0xfffffffe;
      goto code_r0x01410404;
    }
    break;
  default:
    return false;
  }
  return (bool)(bVar1 | bVar2);
}

