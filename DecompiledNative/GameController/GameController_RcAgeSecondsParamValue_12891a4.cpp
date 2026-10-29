// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static string RcAgeSecondsParamValue() { }
// Ghidra address: 0138d1a4; ELF VA: 0x128d1a4; file offset: 0x12891a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_RcAgeSecondsParamValue_12891a4(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  float fVar4;
  int iStack_24;
  
  puVar1 = PTR_DAT_029bdc88;
  if ((bRam0000000002b94cc2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdc88);
    NativeHelper_011df0b4(PTR_DAT_029bbd78);
    bRam0000000002b94cc2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (cRam0000000002b94d35 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029bdc88);
    cRam0000000002b94d35 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  if (0.0 <= *(float *)(*(long *)(lVar2 + 0xb8) + 4)) {
    fVar4 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (cRam0000000002b94d35 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029bdc88);
      cRam0000000002b94d35 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar2 = *(long *)puVar1;
    }
    fVar4 = fVar4 - *(float *)(*(long *)(lVar2 + 0xb8) + 4);
    iStack_24 = -0x80000000;
    if (fVar4 != INFINITY) {
      iStack_24 = (int)fVar4;
    }
    pvVar3 = (void *)NativeHelper_01ffa318(&iStack_24,0);
  }
  else {
    pvVar3 = *(void **)PTR_DAT_029bbd78;
  }
  return pvVar3;
}

