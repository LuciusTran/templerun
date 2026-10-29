// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResumeMusic() { }
// Ghidra address: 013bf43c; ELF VA: 0x12bf43c; file offset: 0x12bb43c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_ResumeMusic_12bb43c(AudioManager *self,void *runtimeMethod)

{
  if (0.0 <= self->_ResumeMusicVolume) {
    AudioManager_set_MusicVolume_12bab60(self,self->_ResumeMusicVolume,runtimeMethod);
    self->_ResumeMusicVolume = -1.0;
  }
  return;
}

