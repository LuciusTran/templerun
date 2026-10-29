// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddDefinedPath() { }
// Ghidra address: 01413e48; ELF VA: 0x1313e48; file offset: 0x130fe48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_AddDefinedPath_130fe48(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  PathElement *path;
  void *in_x2;
  void *in_x3;
  int iVar2;
  
  if ((bRam0000000002b950fa & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950fa = 1;
  }
  puVar1 = PTR_DAT_029bde80;
  iVar2 = 200;
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    path = PathElement_InstantiatePathElement_130a194(1,2,in_x2);
    if (self == (PathElement *)0x0) break;
    in_x2 = (void *)0x1;
    PathElement_SetPath_130fc48(self,path,1,in_x3);
    iVar2 = iVar2 + -1;
    self = path;
    if (iVar2 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

