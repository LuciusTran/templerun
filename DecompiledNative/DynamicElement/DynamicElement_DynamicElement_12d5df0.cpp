// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static DynamicElement() { }
// Ghidra address: 013d9df0; ELF VA: 0x12d9df0; file offset: 0x12d5df0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void DynamicElement_DynamicElement_12d5df0(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_029c0358;
  puVar2 = PTR_DAT_029bf7e0;
  puVar1 = PTR_DAT_029bf7d8;
  if ((bRam0000000002b94f48 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf7e0);
    NativeHelper_011df0b4(PTR_DAT_029bf7d8);
    NativeHelper_011df0b4(PTR_DAT_029c0358);
    bRam0000000002b94f48 = 1;
  }
  uVar4 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  NativeHelper_0178bda4(uVar4,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar4;
  return;
}

