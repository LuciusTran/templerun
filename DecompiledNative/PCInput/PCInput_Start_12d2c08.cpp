// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013d6c08; ELF VA: 0x12d6c08; file offset: 0x12d2c08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PCInput_Start_12d2c08(PCInput *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029be0b0;
  if ((bRam0000000002b94f2d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be0b0);
    bRam0000000002b94f2d = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = self;
  UnityEngine_Behaviour_set_enabled_250972c(self,false,(void *)0x0);
  self->JoystickMode = false;
  return;
}

