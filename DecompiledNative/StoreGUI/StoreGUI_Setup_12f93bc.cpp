// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Setup() { }
// Ghidra address: 013fd3bc; ELF VA: 0x12fd3bc; file offset: 0x12f93bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreGUI_Setup_12f93bc(StoreGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_029c0fd8;
  puVar1 = PTR_DAT_029bf0e0;
  if ((bRam0000000002b9505f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0fd8);
    NativeHelper_011df0b4(PTR_DAT_029bf0e0);
    bRam0000000002b9505f = 1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar1;
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
                    /* WARNING: Could not recover jumptable at 0x013fd434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  return;
}

