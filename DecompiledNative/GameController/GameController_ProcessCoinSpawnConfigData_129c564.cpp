// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static bool ProcessCoinSpawnConfigData(ConfigData inConfigData) { }
// Ghidra address: 013a0564; ELF VA: 0x12a0564; file offset: 0x129c564
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_ProcessCoinSpawnConfigData_129c564(ConfigData *inConfigData,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d1a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be3f8);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d1a = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  if (inConfigData == (ConfigData *)0x0) {
    *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_029be3f8 + 0x130);
    if (*(byte *)(*(long *)inConfigData + 0x130) < bVar1) {
      inConfigData = (ConfigData *)0x0;
    }
    else if (*(long *)(*(long *)(*(long *)inConfigData + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_029be3f8) {
      inConfigData = (ConfigData *)0x0;
    }
    *(ConfigData **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = inConfigData;
  }
  return true;
}

