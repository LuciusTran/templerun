// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static string RcReachableParamValue() { }
// Ghidra address: 0138d084; ELF VA: 0x128d084; file offset: 0x1289084
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_RcReachableParamValue_1289084(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  byte abStack_18 [4];
  ushort auStack_14 [2];
  
  puVar1 = PTR_DAT_029bdc88;
  if ((bRam0000000002b94cc1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b8040);
    NativeHelper_011df0b4(PTR_DAT_029b8060);
    NativeHelper_011df0b4(PTR_DAT_029bdc88);
    NativeHelper_011df0b4(PTR_DAT_029b86a8);
    bRam0000000002b94cc1 = 1;
  }
  auStack_14[0] = 0;
  abStack_18[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (cRam0000000002b94d34 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029bdc88);
    cRam0000000002b94d34 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_029b8308;
  auStack_14[0] = **(ushort **)(lVar2 + 0xb8);
  if ((auStack_14[0] & 0xff) == 0) {
    pvVar3 = *(void **)PTR_DAT_029b86a8;
  }
  else {
    abStack_18[0] = NativeHelper_01b29e38(auStack_14,*(undefined8 *)PTR_DAT_029b8060);
    abStack_18[0] = abStack_18[0] & 1;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    pvVar3 = (void *)NativeHelper_01f83748(abStack_18,0);
  }
  return pvVar3;
}

