// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static PathElement() { }
// Ghidra address: 0141566c; ELF VA: 0x131566c; file offset: 0x131166c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathElement_PathElement_131166c(void *runtimeMethod)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar2 = PTR_DAT_029bde80;
  if ((bRam0000000002b9510c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b9510c = 1;
  }
  lVar3 = *(long *)puVar2;
  puVar4 = *(undefined4 **)(lVar3 + 0xb8);
  *(undefined8 *)(puVar4 + 0xb) = _UNK_007a3a50;
  uVar1 = _UNK_007a33c0;
  *(undefined1 *)((long)puVar4 + 6) = 1;
  puVar4[6] = 0x32;
  *(undefined8 *)(puVar4 + 0xd) = 6;
  *(undefined8 *)(puVar4 + 0xf) = uVar1;
  auVar6 = NEON_fmov(0x3f800000,4);
  *puVar4 = 0;
  *(undefined2 *)(puVar4 + 1) = 0;
  *(undefined8 *)((long)puVar4 + 0xf) = 0;
  *(undefined8 *)((long)puVar4 + 7) = 0;
  puVar4[0x11] = 2;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  *(long *)(puVar4 + 0x15) = auVar6._8_8_;
  *(long *)(puVar4 + 0x13) = auVar6._0_8_;
  lVar5 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  return;
}

