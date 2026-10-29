// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual string get_Keyword() { }
// Ghidra address: 013c787c; ELF VA: 0x12c787c; file offset: 0x12c387c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * CoinSpawnConfigData_get_Keyword_12c387c(CoinSpawnConfigData *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029be3f0;
  if ((bRam0000000002b94ea1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be3f0);
    bRam0000000002b94ea1 = 1;
  }
  return *(void **)puVar1;
}

