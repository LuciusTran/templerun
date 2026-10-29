// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopFollowingPath() { }
// Ghidra address: 0140d138; ELF VA: 0x130d138; file offset: 0x1309138
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_StopFollowingPath_1309138(MovingObject *self,void *runtimeMethod)

{
  self->IsFollowingPath = false;
  return;
}

