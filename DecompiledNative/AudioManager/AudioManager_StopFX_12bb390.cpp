// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopFX() { }
// Ghidra address: 013bf390; ELF VA: 0x12bf390; file offset: 0x12bb390
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_StopFX_12bb390(AudioManager *self,void *runtimeMethod)

{
  void *pvVar1;
  
  pvVar1 = self->SoundEffects;
  if (pvVar1 != (void *)0x0) {
    if (pcRam0000000002b9bf50 == (code *)0x0) {
      pcRam0000000002b9bf50 = (code *)NativeHelper_011df070(&UNK_007bca3a,0);
    }
                    /* WARNING: Could not recover jumptable at 0x025e7ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9bf50)(pvVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

