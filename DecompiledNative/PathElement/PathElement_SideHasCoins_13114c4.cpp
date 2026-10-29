// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool SideHasCoins(PathDirection direciton) { }
// Ghidra address: 014154c4; ELF VA: 0x13154c4; file offset: 0x13114c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_SideHasCoins_13114c4(PathElement *self,int direciton,void *runtimeMethod)

{
  bool bVar1;
  PathElement **ppPVar2;
  PathElement *x;
  
  if ((bRam0000000002b95108 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95108 = 1;
  }
  switch(direciton) {
  case 1:
    ppPVar2 = &self->PathNorth;
    break;
  case 2:
    ppPVar2 = &self->PathEast;
    break;
  case 3:
    ppPVar2 = &self->PathSouth;
    break;
  case 4:
    ppPVar2 = &self->PathWest;
    break;
  default:
    x = (PathElement *)0x0;
    goto LAB_01415548;
  }
  x = *ppPVar2;
LAB_01415548:
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar1 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar1) {
    if (x == (PathElement *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar1 = x->HasCoins != false;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

