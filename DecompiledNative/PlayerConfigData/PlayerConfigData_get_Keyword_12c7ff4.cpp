// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual string get_Keyword() { }
// Ghidra address: 013cbff4; ELF VA: 0x12cbff4; file offset: 0x12c7ff4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * PlayerConfigData_get_Keyword_12c7ff4(PlayerConfigData *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029be3e0;
  if ((bRam0000000002b94ecf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be3e0);
    bRam0000000002b94ecf = 1;
  }
  return *(void **)puVar1;
}

