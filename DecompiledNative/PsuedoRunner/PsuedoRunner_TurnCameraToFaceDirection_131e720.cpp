// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void TurnCameraToFaceDirection(PathDirection direction) { }
// Ghidra address: 01422720; ELF VA: 0x1322720; file offset: 0x131e720
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PsuedoRunner_TurnCameraToFaceDirection_131e720
               (PsuedoRunner *self,int direction,void *runtimeMethod)

{
  if (direction - 1U < 4) {
    self->DesiredCameraY = *(float *)(&UNK_007a3e00 + (long)(int)(direction - 1U) * 4);
  }
  return;
}

