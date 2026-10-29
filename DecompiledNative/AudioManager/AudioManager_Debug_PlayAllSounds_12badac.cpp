// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Debug_PlayAllSounds() { }
// Ghidra address: 013bedac; ELF VA: 0x12bedac; file offset: 0x12badac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_Debug_PlayAllSounds_12badac(AudioManager *self,void *runtimeMethod)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = NativeHelper_013bedcc();
  if (lVar1 == 0) {
    NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
    uVar3 = NativeHelper_011df2d0();
    uVar4 = NativeHelper_011df0c8(PTR_DAT_029f5930);
    NativeHelper_01ffed14(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000002b9ce48 == (code *)0x0) {
      pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
    }
    uVar2 = (*pcRam0000000002b9ce48)(self);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000002b9ce58 == (code *)0x0) {
        pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
      }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9ce58)(self,lVar1);
      return;
    }
    NativeHelper_011df0c8(PTR_DAT_029baea0);
    uVar3 = NativeHelper_011df2d0();
    uVar4 = NativeHelper_011df0c8(PTR_DAT_029f5920);
    NativeHelper_01f80968(uVar3,uVar4,0);
  }
  uVar4 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df1ac(uVar3,uVar4);
}

