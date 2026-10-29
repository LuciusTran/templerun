// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnDespawned() { }
// Ghidra address: 013c0198; ELF VA: 0x12c0198; file offset: 0x12bc198
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BonusItem_OnDespawned_12bc198(BonusItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  long *context;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_029b90f0;
  if ((bRam0000000002b94e4b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029bf788);
    bRam0000000002b94e4b = 1;
  }
  self->isMagnetized = false;
  context = (long *)NativeHelper_0260e1a8(self,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3);
    lVar3 = *(long *)puVar1;
  }
  if (((**(long **)(lVar3 + 0xb8) != 0) &&
      (lVar3 = NativeHelper_012e8f84(**(long **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_029bf788,0),
      lVar3 != 0)) && (uVar2 = NativeHelper_0260e1a8(lVar3,0), context != (long *)0x0)) {
    if ((bRam0000000002b9d250 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar2,0);
      NativeHelper_011df0b4(PTR_DAT_029f18c8);
      NativeHelper_011df0b4(PTR_DAT_029f5bb8);
      bRam0000000002b9d250 = 1;
    }
    if ((context != (long *)0x0) && (*context == *(long *)PTR_DAT_029f18c8)) {
      if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      UnityEngine_Debug_LogWarning_24ea8a0(*(void **)PTR_DAT_029f5bb8,context,(void *)0x0);
    }
    if (pcRam0000000002b9d260 == (code *)0x0) {
      pcRam0000000002b9d260 = (code *)NativeHelper_011df070(&UNK_007bbf4e);
    }
                    /* WARNING: Could not recover jumptable at 0x0261afa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9d260)(context,uVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

