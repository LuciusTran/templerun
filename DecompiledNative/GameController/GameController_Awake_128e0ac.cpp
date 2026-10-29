// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013920ac; ELF VA: 0x12920ac; file offset: 0x128e0ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_Awake_128e0ac(GameController *self,void *runtimeMethod)

{
  void *pvVar1;
  
  GameController_SetupDeeplinkTracker_128e100(self,runtimeMethod);
  pvVar1 = self->TimedCelebrationEntries;
  if (cRam0000000002b94d37 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029bde28);
    cRam0000000002b94d37 = '\x01';
  }
  **(undefined8 **)(*(long *)PTR_DAT_029bde28 + 0xb8) = pvVar1;
  return;
}

