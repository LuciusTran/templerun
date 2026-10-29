// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static float get_StumbleSlowDownPercent() { }
// Ghidra address: 013a09a4; ELF VA: 0x12a09a4; file offset: 0x129c9a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float GameController_get_StumbleSlowDownPercent_129c9a4(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d27 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d27 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar2 != 0) {
    return *(float *)(lVar2 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

