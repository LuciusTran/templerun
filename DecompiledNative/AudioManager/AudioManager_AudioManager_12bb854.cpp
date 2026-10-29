// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public AudioManager() { }
// Ghidra address: 013bf854; ELF VA: 0x12bf854; file offset: 0x12bb854
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AudioManager_AudioManager_12bb854(AudioManager *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *extraout_x1;
  
  puVar6 = PTR_DAT_029bf710;
  puVar5 = PTR_DAT_029bf708;
  puVar4 = PTR_DAT_029bf700;
  puVar3 = PTR_DAT_029bf6f8;
  if ((bRam0000000002b94e48 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf710);
    NativeHelper_011df0b4(PTR_DAT_029bf708);
    NativeHelper_011df0b4(PTR_DAT_029bf700);
    NativeHelper_011df0b4(PTR_DAT_029bf6f8);
    bRam0000000002b94e48 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar3,runtimeMethod);
  NativeHelper_01a2f248(pvVar8,*(undefined8 *)puVar4);
  uVar1 = _UNK_007a3570;
  self->StartedThisFrame = pvVar8;
  self->_ResumeMusicVolume = -1.0;
  uVar7 = _UNK_007a3570;
  _UNK_007a3570 = (undefined4)uVar1;
  _UNK_007a3574 = SUB84(uVar1,4);
  uVar2 = _UNK_007a3574;
  self->_MusicVolume = (float)_UNK_007a3570;
  _UNK_007a3570 = uVar7;
  self->_SoundVolume = (float)uVar2;
  pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar5);
  NativeHelper_01768700(pvVar8,*(undefined8 *)puVar6);
  self->Sounds = pvVar8;
  puVar3 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

