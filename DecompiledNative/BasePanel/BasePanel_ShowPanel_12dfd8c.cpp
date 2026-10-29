// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowPanel() { }
// Ghidra address: 013e3d8c; ELF VA: 0x12e3d8c; file offset: 0x12dfd8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BasePanel_ShowPanel_12dfd8c(BasePanel *self,void *runtimeMethod)

{
  UIPanel *pUVar1;
  
  pUVar1 = self->Panel;
  if (pUVar1 != (UIPanel *)0x0) {
    if (pcRam0000000002b9ccc0 == (code *)0x0) {
      pcRam0000000002b9ccc0 = (code *)NativeHelper_011df070(&UNK_007b2109);
    }
                    /* WARNING: Could not recover jumptable at 0x0260d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9ccc0)(pUVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

