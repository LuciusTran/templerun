// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool ISsPathTypeStraight(PathType type) { }
// Ghidra address: 0140fa0c; ELF VA: 0x130fa0c; file offset: 0x130ba0c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_ISsPathTypeStraight_130ba0c(int type,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  
  puVar1 = PTR_DAT_029bde80;
  if ((bRam0000000002b950ee & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b950ee = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
    runtimeMethod = extraout_x1_00;
  }
  if ((type - 1U < 0x25) && ((0x1c80fd1c01U >> ((ulong)(type - 1U) & 0x3f) & 1) != 0)) {
    bVar2 = true;
  }
  else {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar3,runtimeMethod);
    }
    if (type - 2U < 0x21) {
      bVar2 = (bool)((byte)(0x1bf817001 >> ((ulong)(type - 2U) & 0x3f)) & 1);
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

