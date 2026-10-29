// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameGUITotem() { }
// Ghidra address: 013ecf48; ELF VA: 0x12ecf48; file offset: 0x12e8f48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUITotem_GameGUITotem_12e8f48(GameGUITotem *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  self->lastCoinPercent = 2.0;
  self->testTime = 0.5;
  puVar1 = PTR_DAT_029b7f98;
  self->bl = 1;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

