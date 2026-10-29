// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DisableIntroScene() { }
// Ghidra address: 01396884; ELF VA: 0x1296884; file offset: 0x1292884
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_DisableIntroScene_1292884(GameController *self,void *runtimeMethod)

{
  self->IsIntroScene = false;
  return;
}

