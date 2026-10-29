// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartFollowingPath() { }
// Ghidra address: 0140d128; ELF VA: 0x130d128; file offset: 0x1309128
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_StartFollowingPath_1309128(MovingObject *self,void *runtimeMethod)

{
  self->TimeSinceFollowingPathStart = 0.0;
  self->IsFollowingPath = true;
  return;
}

