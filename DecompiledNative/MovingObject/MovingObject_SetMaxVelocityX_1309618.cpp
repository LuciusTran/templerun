// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMaxVelocityX(float maxVelocity) { }
// Ghidra address: 0140d618; ELF VA: 0x130d618; file offset: 0x1309618
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetMaxVelocityX_1309618(MovingObject *self,float maxVelocity,void *runtimeMethod)

{
  self->LimitVelocity = true;
  self->MaxVelocityMagnitudeX = maxVelocity;
  return;
}

