// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayAnimation(string anim, bool queued = false) { }
// Ghidra address: 013c1a58; ELF VA: 0x12c1a58; file offset: 0x12bda58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_PlayAnimation_12bda58
               (CharacterPlayer *self,void *anim,bool queued,void *runtimeMethod)

{
  void *pvVar1;
  
  pvVar1 = self->AnimateObject;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (queued) {
    if (pcRam0000000002b9bdf8 == (code *)0x0) {
      pcRam0000000002b9bdf8 = (code *)NativeHelper_011df070(&UNK_007a4aa8,anim,0);
    }
                    /* WARNING: Could not recover jumptable at 0x025e50a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9bdf8)(pvVar1,anim,0,0);
    return;
  }
  if (pcRam0000000002b9bdf0 == (code *)0x0) {
    pcRam0000000002b9bdf0 = (code *)NativeHelper_011df070(&UNK_007c3671,anim,0);
  }
                    /* WARNING: Could not recover jumptable at 0x025e5004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000002b9bdf0)(pvVar1,anim,0);
  return;
}

