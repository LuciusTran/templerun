// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnPrivacyFlowCompleteForAdInit() { }
// Ghidra address: 01391644; ELF VA: 0x1291644; file offset: 0x128d644
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_OnPrivacyFlowCompleteForAdInit_128d644(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029bddd8;
  if ((bRam0000000002b94cdb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bddd8);
    bRam0000000002b94cdb = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
  }
  *(undefined2 *)(*(long *)(lVar2 + 0xb8) + 8) = 1;
  return;
}

