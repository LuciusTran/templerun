// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnRemoteConfigManagerInitializeFetchComplete(bool inSuccess) { }
// Ghidra address: 01392050; ELF VA: 0x1292050; file offset: 0x128e050
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_OnRemoteConfigManagerInitializeFetchComplete_128e050
               (GameController *self,bool inSuccess,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94ce2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758,inSuccess);
    bRam0000000002b94ce2 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x10) = 1;
  return;
}

