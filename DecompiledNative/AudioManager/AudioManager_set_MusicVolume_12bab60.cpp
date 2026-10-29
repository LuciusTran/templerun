// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_MusicVolume(float value) { }
// Ghidra address: 013beb60; ELF VA: 0x12beb60; file offset: 0x12bab60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_set_MusicVolume_12bab60(AudioManager *self,float value,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 in_register_00005004;
  
  puVar1 = PTR_DAT_029bf690;
  if ((bRam0000000002b94e3e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf690);
    bRam0000000002b94e3e = 1;
  }
  self->_MusicVolume = value;
  UnityEngine_PlayerPrefs_SetFloat_2507898(*(void **)puVar1,value,(void *)0x0);
  pvVar2 = self->Music;
  if (pvVar2 != (void *)0x0) {
    if (pcRam0000000002b9bf60 == (code *)0x0) {
      pcRam0000000002b9bf60 = (code *)NativeHelper_011df070(&UNK_007c09b3);
    }
                    /* WARNING: Could not recover jumptable at 0x025e7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9bf60)(CONCAT44(in_register_00005004,value),pvVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

