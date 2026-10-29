// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static float get_ResurrectionSlowDownPercent() { }
// Ghidra address: 0139acd4; ELF VA: 0x129acd4; file offset: 0x1296cd4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float GameController_get_ResurrectionSlowDownPercent_1296cd4(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d28 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d28 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  if (lVar2 != 0) {
    return *(float *)(lVar2 + 0x34);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

