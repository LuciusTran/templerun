// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnMusicVolumeSlider(float v) { }
// Ghidra address: 013bed30; ELF VA: 0x12bed30; file offset: 0x12bad30
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_OnMusicVolumeSlider_12bad30(AudioManager *self,float v,void *runtimeMethod)

{
  void *extraout_x1;
  UISlider *pUVar1;
  void *pvVar2;
  
  if ((bRam0000000002b94e41 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94e41 = 1;
    runtimeMethod = extraout_x1;
  }
  pUVar1 = self->MusicVolumeSlider;
  if (pUVar1 != (UISlider *)0x0) {
    pvVar2 = pUVar1->functionName;
    pUVar1->functionName = *(void **)PTR_DAT_029b8618;
    AudioManager_set_MusicVolume_12bab60(self,v,runtimeMethod);
    if (self->MusicVolumeSlider != (UISlider *)0x0) {
      self->MusicVolumeSlider->functionName = pvVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

