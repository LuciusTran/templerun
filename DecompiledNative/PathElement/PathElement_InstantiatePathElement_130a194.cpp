// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static PathElement InstantiatePathElement(PathType type, PathLevel level = 2) { }
// Ghidra address: 0140e194; ELF VA: 0x130e194; file offset: 0x130a194
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement * PathElement_InstantiatePathElement_130a194(int type,int level,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_029bde80;
  if ((bRam0000000002b950e4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde70);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950e4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar2 = PathElement_Instantiate_130a21c(type,level,runtimeMethod);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)PTR_DAT_029bde70;
    lVar4 = *(long *)(lVar3 + 0x38);
    if (lVar4 == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b9db8);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 == 0) {
        NativeHelper_011b5290(lVar3);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
    }
    uStack_28 = 0;
    uVar5 = *(undefined8 *)(lVar4 + 8);
    if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar5 = NativeHelper_0200afdc(uVar5,0);
    NativeHelper_02610740(pvVar2,uVar5,&uStack_28,0);
    return (PathElement *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

