// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Setup() { }
// Ghidra address: 013e6ed8; ELF VA: 0x12e6ed8; file offset: 0x12e2ed8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_Setup_12e2ed8(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_029c0750;
  if ((bRam0000000002b94fc0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9f38);
    NativeHelper_011df0b4(PTR_DAT_029c0750);
    bRam0000000002b94fc0 = 1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar1;
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  puVar1 = PTR_DAT_029b9f38;
  plVar4 = self->DeathIllustration;
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    uVar3 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_025f72b0(uVar3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x013e6f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x188))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

