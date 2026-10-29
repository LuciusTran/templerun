// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Setup() { }
// Ghidra address: 013fa294; ELF VA: 0x12fa294; file offset: 0x12f6294
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PauseMenu_Setup_12f6294(PauseMenu *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029c0ee0;
  if ((bRam0000000002b95043 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0ee0);
    bRam0000000002b95043 = 1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar1;
                    /* WARNING: Could not recover jumptable at 0x013fa2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  return;
}

