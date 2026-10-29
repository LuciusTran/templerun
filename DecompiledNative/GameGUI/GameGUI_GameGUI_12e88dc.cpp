// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameGUI() { }
// Ghidra address: 013ec8dc; ELF VA: 0x12ec8dc; file offset: 0x12e88dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_GameGUI_12e88dc(GameGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  self->field_0x40 = 1;
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

