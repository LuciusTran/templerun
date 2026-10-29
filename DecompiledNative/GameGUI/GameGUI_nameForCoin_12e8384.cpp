// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private string nameForCoin(int coinValue) { }
// Ghidra address: 013ec384; ELF VA: 0x12ec384; file offset: 0x12e8384
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameGUI_nameForCoin_12e8384(GameGUI *self,int coinValue,void *runtimeMethod)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined8 *)PTR_DAT_029c09c8;
  puVar1 = (undefined8 *)PTR_DAT_029c09c0;
  puVar3 = PTR_DAT_029c09b8;
  if ((bRam0000000002b94fe5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c09b8);
    NativeHelper_011df0b4(PTR_DAT_029c09c8);
    NativeHelper_011df0b4(PTR_DAT_029c09c0);
    bRam0000000002b94fe5 = 1;
  }
  if (coinValue != 2) {
    puVar1 = (undefined8 *)puVar3;
  }
  if (coinValue != 3) {
    puVar2 = puVar1;
  }
  return (void *)*puVar2;
}

