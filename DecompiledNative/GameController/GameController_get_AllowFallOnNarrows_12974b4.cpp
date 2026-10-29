// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool get_AllowFallOnNarrows() { }
// Ghidra address: 0139b4b4; ELF VA: 0x129b4b4; file offset: 0x12974b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_get_AllowFallOnNarrows_12974b4(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d20 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d20 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    return (bool)*(undefined1 *)(lVar2 + 0x29);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

