// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 0140a9b8; ELF VA: 0x130a9b8; file offset: 0x13069b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_Start_13069b8
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_DAT_029c19d0;
  if ((bRam0000000002b950ce & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c19d0);
    bRam0000000002b950ce = 1;
  }
  pvVar2 = UnityEngine_Component_GetComponent_13ccba8(self,*(void **)puVar1);
  self->collider = pvVar2;
  return;
}

