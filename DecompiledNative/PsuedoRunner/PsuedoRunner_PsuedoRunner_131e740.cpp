// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PsuedoRunner() { }
// Ghidra address: 01422740; ELF VA: 0x1322740; file offset: 0x131e740
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PsuedoRunner_PsuedoRunner_131e740(PsuedoRunner *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  self->Direction = 3;
  uVar1 = _UNK_007a38a8;
  self->NodeToNodeTime = 0.5;
  auVar3 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)&self->field_0x48 = 0;
  *(undefined4 *)&self->field_0x20 = 0x3f800000;
  *(undefined8 *)&self->field_0x40 = uVar1;
  *(long *)&self->field_0x5c = auVar3._8_8_;
  *(long *)&self->field_0x54 = auVar3._0_8_;
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

