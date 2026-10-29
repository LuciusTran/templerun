// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnAdOpened(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 01394124; ELF VA: 0x1294124; file offset: 0x1290124
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnAdOpened_1290124
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  void *extraout_x1;
  void *inService_00;
  
  inService_00 = (void *)((ulong)inService & 0xffffffff);
  if ((bRam0000000002b94cef & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bdf98);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94cef = 1;
    inService = extraout_x1;
  }
  GameController_LogRetryFirstImpression_128d6ac(self,inService);
  if ((int)inAdType == 0) {
    TRAnalyticsHelper_LogVideoAd_12b949c
              (inService_00,*(void **)PTR_DAT_029bdf98,*(void **)PTR_DAT_029b9680,
               *(void **)PTR_DAT_029b8618,(void *)0x0);
    self->IsShowingSaveMeVideo = true;
  }
  return;
}

