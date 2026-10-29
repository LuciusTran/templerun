// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopAllAnimation() { }
// Ghidra address: 013c2918; ELF VA: 0x12c2918; file offset: 0x12be918
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_StopAllAnimation_12be918(CharacterPlayer *self,void *runtimeMethod)

{
  void *pvVar1;
  
  pvVar1 = self->AnimateObject;
  if (pvVar1 != (void *)0x0) {
    if (pcRam0000000002b9bdc8 == (code *)0x0) {
      pcRam0000000002b9bdc8 = (code *)NativeHelper_011df070(&UNK_007b8ac5);
    }
                    /* WARNING: Could not recover jumptable at 0x025e4db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9bdc8)(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

