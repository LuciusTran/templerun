// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool get_AllowTiltToTurn() { }
// Ghidra address: 0139ade4; ELF VA: 0x129ade4; file offset: 0x1296de4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_get_AllowTiltToTurn_1296de4(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94d24 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94d24 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    return (bool)*(undefined1 *)(lVar2 + 0x2d);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

