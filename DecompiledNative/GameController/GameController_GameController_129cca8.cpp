// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static GameController() { }
// Ghidra address: 013a0ca8; ELF VA: 0x12a0ca8; file offset: 0x129cca8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_129cca8(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  CoinSpawnConfigData *self;
  ControlsConfigData *self_00;
  PlayerConfigData *self_01;
  
  puVar4 = PTR_DAT_029be408;
  puVar3 = PTR_DAT_029be400;
  puVar2 = PTR_DAT_029be3f8;
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d2d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be3f8);
    NativeHelper_011df0b4(PTR_DAT_029be400);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029be408);
    bRam0000000002b94d2d = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
  *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = 0;
  self = (CoinSpawnConfigData *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  CoinSpawnConfigData_CoinSpawnConfigData_12c3aa8(self,(void *)0x0);
  *(CoinSpawnConfigData **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = self;
  self_00 = (ControlsConfigData *)NativeHelper_011df2d0(*(undefined8 *)puVar3);
  ControlsConfigData_ControlsConfigData_12c4b14(self_00,(void *)0x0);
  *(ControlsConfigData **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = self_00;
  self_01 = (PlayerConfigData *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
  PlayerConfigData_PlayerConfigData_12c8438(self_01,(void *)0x0);
  *(PlayerConfigData **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = self_01;
  return;
}

