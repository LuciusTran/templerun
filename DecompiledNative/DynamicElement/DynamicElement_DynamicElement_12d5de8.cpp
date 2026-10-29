// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public DynamicElement() { }
// Ghidra address: 013d9de8; ELF VA: 0x12d9de8; file offset: 0x12d5de8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void DynamicElement_DynamicElement_12d5de8(DynamicElement *self,void *runtimeMethod)

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

