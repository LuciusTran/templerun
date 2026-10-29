// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void set_RemoteConfigReady(bool value) { }
// Ghidra address: 01390c04; ELF VA: 0x1290c04; file offset: 0x128cc04
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_set_RemoteConfigReady_128cc04(bool value,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cd4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94cd4 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
  }
  *(bool *)(*(long *)(lVar2 + 0xb8) + 0x10) = value;
  return;
}

