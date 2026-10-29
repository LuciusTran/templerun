// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HideMainMenuButtons() { }
// Ghidra address: 013f642c; ELF VA: 0x12f642c; file offset: 0x12f242c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainMenu_HideMainMenuButtons_12f242c(MainMenu *self,void *runtimeMethod)

{
  void *pvVar1;
  
  pvVar1 = self->MainMenuRowNew;
  if (pvVar1 != (void *)0x0) {
    if (pcRam0000000002b9cda0 == (code *)0x0) {
      pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
    }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9cda0)(pvVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

