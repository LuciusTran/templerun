// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013dacec; ELF VA: 0x12dacec; file offset: 0x12d6cec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PlayerManager_Start_12d6cec(void *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029bffb0;
  if ((bRam0000000002b94f55 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bffb0);
    bRam0000000002b94f55 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = self;
  return;
}

