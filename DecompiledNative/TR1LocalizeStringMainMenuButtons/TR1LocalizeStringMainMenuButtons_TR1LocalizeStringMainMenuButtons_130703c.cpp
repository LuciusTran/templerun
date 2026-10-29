// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public TR1LocalizeStringMainMenuButtons() { }
// Ghidra address: 0140b03c; ELF VA: 0x130b03c; file offset: 0x130703c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_TR1LocalizeStringMainMenuButtons_130703c
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  self->TextMultiplier = 2.0;
  puVar4 = PTR_DAT_029f1188;
  puVar3 = PTR_DAT_029f1180;
  puVar2 = PTR_DAT_029f1178;
  puVar1 = PTR_DAT_029f0ff8;
  if ((bRam0000000002b9b338 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029f1180,0);
    NativeHelper_011df0b4(PTR_DAT_029f1178);
    NativeHelper_011df0b4(PTR_DAT_029f0ff8);
    NativeHelper_011df0b4(PTR_DAT_029f1188);
    bRam0000000002b9b338 = 1;
  }
  uVar5 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  func_0x025212b4(uVar5,0);
  *(undefined8 *)&self->field_0x20 = uVar5;
  uVar5 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01a2f248(uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)&self->field_0x28 = uVar5;
  uVar5 = NativeHelper_011df2d0(*(undefined8 *)puVar4);
  func_0x0255bc00();
  *(undefined8 *)&self->field_0x30 = uVar5;
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

