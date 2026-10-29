// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveMeVideo_Skip() { }
// Ghidra address: 0139465c; ELF VA: 0x129465c; file offset: 0x129065c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SaveMeVideo_Skip_129065c(GameController *self,void *runtimeMethod)

{
  self->SkippedSaveMeVideo = true;
  self->SaveMePromptTimedOut = false;
  self->ClosedSaveMeVideo = false;
  self->WatchedSavedMeVideo = false;
  return;
}

