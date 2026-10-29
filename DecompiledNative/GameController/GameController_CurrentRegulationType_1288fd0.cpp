// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static ImangiRegulationType CurrentRegulationType() { }
// Ghidra address: 0138cfd0; ELF VA: 0x128cfd0; file offset: 0x1288fd0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_CurrentRegulationType_1288fd0(void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_029bbd80;
  if ((bRam0000000002b94cc7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b94cc7 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    return (void *)0xffffffff;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0138d080;
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
    return (void *)0xffffffff;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_0138d080;
  }
  if (*(long *)(lVar3 + 0x28) != 0) {
    return (void *)(ulong)*(uint *)(*(long *)(lVar3 + 0x28) + 0x10);
  }
LAB_0138d080:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

