// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool get_AllowSwipeToStrafe() { }
// Ghidra address: 013a0814; ELF VA: 0x12a0814; file offset: 0x129c814
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_get_AllowSwipeToStrafe_129c814(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d22 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d22 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    return (bool)*(undefined1 *)(lVar2 + 0x2b);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

