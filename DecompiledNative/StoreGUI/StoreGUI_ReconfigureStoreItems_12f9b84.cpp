// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ReconfigureStoreItems() { }
// Ghidra address: 013fdb84; ELF VA: 0x12fdb84; file offset: 0x12f9b84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreGUI_ReconfigureStoreItems_12f9b84(StoreGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_029c0658;
  if ((bRam0000000002b95064 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0658);
    NativeHelper_011df0b4(PTR_DAT_029c0660);
    bRam0000000002b95064 = 1;
  }
  DebugEx_Log_13222f4(*(void **)puVar1,(void *)0x0);
  pvVar2 = self->ScrollContent;
  if (pvVar2 != (void *)0x0) {
    uVar3 = *(undefined8 *)PTR_DAT_029c0660;
    if (pcRam0000000002b9cd10 == (code *)0x0) {
      pcRam0000000002b9cd10 = (code *)NativeHelper_011df070(&UNK_007a6c36,uVar3,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0260e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9cd10)(pvVar2,uVar3,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

