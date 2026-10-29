// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <InitalizeAdjust>b__236_1() { }
// Ghidra address: 013b05b8; ELF VA: 0x12b05b8; file offset: 0x12ac5b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController___c__InitalizeAdjust_b__236_1_12ac5b8(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_029bbd80;
  if ((bRam0000000002b94dbb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b94dbb = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar4 + 0x20) == '\0') {
    bVar2 = false;
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    bVar2 = *(char *)(lVar4 + 0x51) != '\0';
  }
  return bVar2;
}

