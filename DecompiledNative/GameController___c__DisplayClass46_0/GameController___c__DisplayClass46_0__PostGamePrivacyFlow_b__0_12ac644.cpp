// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <PostGamePrivacyFlow>b__0() { }
// Ghidra address: 013b0644; ELF VA: 0x12b0644; file offset: 0x12ac644
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController___c__DisplayClass46_0__PostGamePrivacyFlow_b__0_12ac644(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_029bbd80;
  if ((bRam0000000002b94dbc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b94dbc = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  plVar3 = (long *)NativeHelper_0204170c
                             (*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48),
                              *(undefined8 *)(param_1 + 0x10),0);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_029b8c90;
    if (*plVar3 == lVar2) {
      *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = plVar3;
      if (*plVar3 == lVar2) goto LAB_013b06f0;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df678();
  }
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = 0;
LAB_013b06f0:
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

