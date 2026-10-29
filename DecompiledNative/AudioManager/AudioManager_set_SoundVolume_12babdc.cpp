// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_SoundVolume(float value) { }
// Ghidra address: 013bebdc; ELF VA: 0x12bebdc; file offset: 0x12babdc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_set_SoundVolume_12babdc(AudioManager *self,float value,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 in_register_00005004;
  
  puVar1 = PTR_DAT_029bf698;
  if ((bRam0000000002b94e3f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf698);
    bRam0000000002b94e3f = 1;
  }
  self->_SoundVolume = value;
  UnityEngine_PlayerPrefs_SetFloat_2507898(*(void **)puVar1,value,(void *)0x0);
  if (self->SoundEffects != (void *)0x0) {
    UnityEngine_AudioSource_set_volume_24e3c10(self->SoundEffects,value,(void *)0x0);
    if (self->FootSteps != (void *)0x0) {
      UnityEngine_AudioSource_set_volume_24e3c10(self->FootSteps,value,(void *)0x0);
      if (self->Boost != (void *)0x0) {
        UnityEngine_AudioSource_set_volume_24e3c10(self->Boost,value,(void *)0x0);
        if (self->Coins != (void *)0x0) {
          UnityEngine_AudioSource_set_volume_24e3c10(self->Coins,value,(void *)0x0);
          if (self->Magnet != (void *)0x0) {
            UnityEngine_AudioSource_set_volume_24e3c10(self->Magnet,value,(void *)0x0);
            pvVar2 = self->Invincible;
            if (pvVar2 != (void *)0x0) {
              if (pcRam0000000002b9bf60 == (code *)0x0) {
                pcRam0000000002b9bf60 = (code *)NativeHelper_011df070(&UNK_007c09b3);
              }
                    /* WARNING: Could not recover jumptable at 0x025e7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000002b9bf60)(CONCAT44(in_register_00005004,value),pvVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

