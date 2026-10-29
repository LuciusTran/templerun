// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Setup() { }
// Ghidra address: 013e4ab8; ELF VA: 0x12e4ab8; file offset: 0x12e0ab8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterSelectGUI_Setup_12e0ab8(CharacterSelectGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_029c0650;
  puVar1 = PTR_DAT_029bf0e0;
  if ((bRam0000000002b94fa7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0650);
    NativeHelper_011df0b4(PTR_DAT_029bf0e0);
    bRam0000000002b94fa7 = 1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar1;
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
                    /* WARNING: Could not recover jumptable at 0x013e4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  return;
}

