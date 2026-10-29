// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AdjustVariablesForRussian() { }
// Ghidra address: 0140aad8; ELF VA: 0x130aad8; file offset: 0x1306ad8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_AdjustVariablesForRussian_1306ad8
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *extraout_x1;
  int *piVar5;
  bool bVar6;
  
  if ((bRam0000000002b950d0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0e38);
    bRam0000000002b950d0 = 1;
    runtimeMethod = extraout_x1;
  }
  plVar2 = (long *)NativeHelper_0255188c(0,runtimeMethod);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      if ((self->SpecialTreatRussian == false) ||
         (uVar4 = NativeHelper_01e9b79c(uVar3,*(undefined8 *)PTR_DAT_029c0e38,0), (uVar4 & 1) == 0))
      {
        if (self->OrignalString == (void *)0x0) goto LAB_0140ab80;
        piVar5 = (int *)((long)self->OrignalString + 0x10);
        bVar6 = true;
      }
      else {
        bVar6 = false;
        piVar5 = &self->SpecialTreatRussianFactor;
      }
      iVar1 = *piVar5;
      self->ConvertToUpperCase = bVar6;
      self->OriganlStringLength = iVar1;
      return;
    }
  }
LAB_0140ab80:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

