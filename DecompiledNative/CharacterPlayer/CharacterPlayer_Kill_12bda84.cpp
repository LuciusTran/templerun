// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Kill(DeathTypes deathType) { }
// Ghidra address: 013c1a84; ELF VA: 0x12c1a84; file offset: 0x12bda84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_Kill_12bda84(CharacterPlayer *self,void *deathType,void *runtimeMethod)

{
  int iVar1;
  void *pvVar2;
  AudioManager *self_00;
  float fVar3;
  
  iVar1 = (int)deathType;
  self->IsDead = true;
  *(int *)&self->field_0xe0 = iVar1;
  fVar3 = CharacterPlayer_GetRunVelocity_12bdeac(self,deathType);
  self->DeathRunVelocity = fVar3;
  *(undefined8 *)&self->field_0x38 = 0;
  *(undefined4 *)&self->field_0x34 = 0;
  if ((self->Audio == (AudioManager *)0x0) ||
     (pvVar2 = self->Audio->SoundEffects, pvVar2 == (void *)0x0)) {
LAB_013c1b38:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  UnityEngine_AudioSource_Stop_24e3e6c(pvVar2,(void *)0x0);
  if (iVar1 == 1) {
    self_00 = self->Audio;
    if (self_00 == (AudioManager *)0x0) goto LAB_013c1b38;
    pvVar2 = (void *)0x1c;
  }
  else {
    if (iVar1 == 6) goto LAB_013c1b1c;
    if (iVar1 == 5) {
      self_00 = self->Audio;
      if (self_00 == (AudioManager *)0x0) goto LAB_013c1b38;
      pvVar2 = (void *)0x1a;
    }
    else {
      self_00 = self->Audio;
      if (self_00 == (AudioManager *)0x0) goto LAB_013c1b38;
      pvVar2 = (void *)0x1d;
    }
  }
  AudioManager_PlayFX_12bb190(self_00,pvVar2,1.0,runtimeMethod);
LAB_013c1b1c:
                    /* WARNING: Could not recover jumptable at 0x013c1b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x188))(self,0,*(undefined8 *)(*(long *)self + 400));
  return;
}

