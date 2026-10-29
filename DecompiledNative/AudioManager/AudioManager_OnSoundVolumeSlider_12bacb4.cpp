// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnSoundVolumeSlider(float v) { }
// Ghidra address: 013becb4; ELF VA: 0x12becb4; file offset: 0x12bacb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_OnSoundVolumeSlider_12bacb4(AudioManager *self,float v,void *runtimeMethod)

{
  void *extraout_x1;
  UISlider *pUVar1;
  void *pvVar2;
  
  if ((bRam0000000002b94e40 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94e40 = 1;
    runtimeMethod = extraout_x1;
  }
  pUVar1 = self->SoundVolumeSlider;
  if (pUVar1 != (UISlider *)0x0) {
    pvVar2 = pUVar1->functionName;
    pUVar1->functionName = *(void **)PTR_DAT_029b8618;
    AudioManager_set_SoundVolume_12babdc(self,v,runtimeMethod);
    if (self->SoundVolumeSlider != (UISlider *)0x0) {
      self->SoundVolumeSlider->functionName = pvVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

