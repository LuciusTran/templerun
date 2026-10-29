// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static BonusItem() { }
// Ghidra address: 013c032c; ELF VA: 0x12c032c; file offset: 0x12bc32c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BonusItem_BonusItem_12bc32c(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_029bf7e0;
  puVar2 = PTR_DAT_029bf7d8;
  puVar1 = PTR_DAT_029bf750;
  if ((bRam0000000002b94e4d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf750);
    NativeHelper_011df0b4(PTR_DAT_029bf7e0);
    NativeHelper_011df0b4(PTR_DAT_029bf7d8);
    bRam0000000002b94e4d = 1;
  }
  uVar4 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_0178bda4(uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar4;
  return;
}

