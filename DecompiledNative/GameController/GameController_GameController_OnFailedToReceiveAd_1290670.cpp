// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnFailedToReceiveAd(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 01394670; ELF VA: 0x1294670; file offset: 0x1290670
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnFailedToReceiveAd_1290670
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  if ((int)inAdType != 0) {
    return;
  }
  self->SkippedSaveMeVideo = true;
  return;
}

