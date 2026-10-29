// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static <>c() { }
// Ghidra address: 013b04d4; ELF VA: 0x12b04d4; file offset: 0x12ac4d4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController___c___c_12ac4d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_029bdc98;
  if ((bRam0000000002b94db9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdc98);
    bRam0000000002b94db9 = 1;
  }
  uVar2 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  NativeHelper_0203e408(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  return;
}

