// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveMeVideo_TimedOut() { }
// Ghidra address: 01394c04; ELF VA: 0x1294c04; file offset: 0x1290c04
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SaveMeVideo_TimedOut_1290c04(GameController *self,void *runtimeMethod)

{
  self->SkippedSaveMeVideo = false;
  self->SaveMePromptTimedOut = true;
  self->ClosedSaveMeVideo = false;
  self->WatchedSavedMeVideo = false;
  self->CancelledSaveMeVideo = false;
  return;
}

