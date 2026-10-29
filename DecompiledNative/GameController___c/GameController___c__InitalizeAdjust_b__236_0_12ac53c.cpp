// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <InitalizeAdjust>b__236_0() { }
// Ghidra address: 013b053c; ELF VA: 0x12b053c; file offset: 0x12ac53c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


uint GameController___c__InitalizeAdjust_b__236_0_12ac53c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_029bcb60;
  if ((bRam0000000002b94dba & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bcb60);
    NativeHelper_011df0b4(PTR_DAT_029b8710);
    bRam0000000002b94dba = 1;
  }
  puVar1 = PTR_DAT_029b8710;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar4 = *(long *)puVar2;
  }
  uVar3 = func_0x01e9b4b0(**(undefined8 **)(lVar4 + 0xb8),**(undefined8 **)(*(long *)puVar1 + 0xb8),
                          0);
  return ~uVar3 & 1;
}

