// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetupDeeplinkTracker() { }
// Ghidra address: 01392100; ELF VA: 0x1292100; file offset: 0x128e100
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SetupDeeplinkTracker_128e100(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  void *extraout_x1;
  
  puVar3 = PTR_DAT_029bde30;
  puVar2 = PTR_DAT_029b7f80;
  puVar1 = PTR_DAT_029b7f68;
  if ((bRam0000000002b94d18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f68);
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029bde30);
    NativeHelper_011df0b4(PTR_DAT_029bde38);
    bRam0000000002b94d18 = 1;
    runtimeMethod = extraout_x1;
  }
  uVar4 = NativeHelper_011df2d0(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_01694ef4(uVar4,self,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  NativeHelper_025ea754(uVar4,0);
  uVar4 = NativeHelper_025e9f00(0);
  uVar5 = NativeHelper_01e9be28(uVar4,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar6 = (void *)NativeHelper_025e9f00(0);
    self->_DeeplinkUrl_k__BackingField = pvVar6;
  }
  return;
}

