// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool InterstitialAdCooldownCompleted() { }
// Ghidra address: 013e7ed8; ELF VA: 0x12e7ed8; file offset: 0x12e3ed8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool EndGameUI_InterstitialAdCooldownCompleted_12e3ed8(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_029bd310;
  if ((bRam0000000002b94fd8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    bRam0000000002b94fd8 = 1;
  }
  fVar3 = UnityEngine_Time_get_time_25133ec((void *)0x0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    return 0.0 < (fVar3 - *(float *)(**(long **)(lVar2 + 0xb8) + 0x28)) -
                 self->LastInterstitialShownTime;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

