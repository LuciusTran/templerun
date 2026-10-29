// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static string CurrentNetworkState() { }
// Ghidra address: 0138c7f0; ELF VA: 0x128c7f0; file offset: 0x12887f0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_CurrentNetworkState_12887f0(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_029b7f80;
  if ((bRam0000000002b94cbc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029bb340);
    bRam0000000002b94cbc = 1;
  }
  puVar2 = PTR_DAT_029bb340;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uStack_28 = NativeHelper_025ea16c(0);
  uStack_38 = *(undefined8 *)puVar2;
  uStack_30 = 0xffffffffffffffff;
  pvVar3 = (void *)NativeHelper_02031f7c(&uStack_38,0);
  return pvVar3;
}

