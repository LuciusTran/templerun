// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Obstacle() { }
// Ghidra address: 0140ddc4; ELF VA: 0x130ddc4; file offset: 0x1309dc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Obstacle_Obstacle_1309dc4(Obstacle *self,void *runtimeMethod)

{
  undefined *puVar1;
  
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

