// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected string get_InterstitalName() { }
// Ghidra address: 013e68c0; ELF VA: 0x12e68c0; file offset: 0x12e28c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * EndGameUI_get_InterstitalName_12e28c0(EndGameUI *self,void *runtimeMethod)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_029b9688;
  puVar1 = (undefined8 *)PTR_DAT_029b9678;
  if ((bRam0000000002b94fbc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9678);
    NativeHelper_011df0b4(PTR_DAT_029b9688);
    bRam0000000002b94fbc = 1;
  }
  if (self->InterstitialTestMode != false) {
    puVar1 = (undefined8 *)puVar2;
  }
  return (void *)*puVar1;
}

