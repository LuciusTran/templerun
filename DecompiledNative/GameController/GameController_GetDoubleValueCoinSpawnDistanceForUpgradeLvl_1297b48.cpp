// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static int GetDoubleValueCoinSpawnDistanceForUpgradeLvl(int lvl) { }
// Ghidra address: 0139bb48; ELF VA: 0x129bb48; file offset: 0x1297b48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int GameController_GetDoubleValueCoinSpawnDistanceForUpgradeLvl_1297b48(int lvl,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  
  if ((bRam0000000002b94d1d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bafe8);
    bRam0000000002b94d1d = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b9758;
  if (5 < (uint)lvl) {
    return 999999999;
  }
  lVar2 = *(long *)PTR_DAT_029b9758;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)lvl) {
      func_0x0201d274(0,lvl,*(undefined8 *)PTR_DAT_029bafe8);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      if ((uint)lvl < *(uint *)(lVar2 + 0x18)) {
        return *(int *)(lVar2 + (long)lvl * 4 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

