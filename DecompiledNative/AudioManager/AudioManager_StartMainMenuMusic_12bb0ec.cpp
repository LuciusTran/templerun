// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartMainMenuMusic() { }
// Ghidra address: 013bf0ec; ELF VA: 0x12bf0ec; file offset: 0x12bb0ec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_StartMainMenuMusic_12bb0ec(AudioManager *self,void *runtimeMethod)

{
  void *pvVar1;
  
  if (self->Music != (void *)0x0) {
    UnityEngine_AudioSource_Stop_24e3e6c(self->Music,(void *)0x0);
    if (self->Music != (void *)0x0) {
      UnityEngine_AudioSource_set_clip_24e3ce4(self->Music,self->MainMenuMusic,(void *)0x0);
      pvVar1 = self->Music;
      if (pvVar1 != (void *)0x0) {
        if (pcRam0000000002b9bf40 == (code *)0x0) {
          pcRam0000000002b9bf40 = (code *)NativeHelper_011df070(&UNK_007acce7,0);
        }
                    /* WARNING: Could not recover jumptable at 0x025e7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9bf40)(pvVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

