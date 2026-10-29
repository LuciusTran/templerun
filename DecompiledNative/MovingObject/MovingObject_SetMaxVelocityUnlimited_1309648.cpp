// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMaxVelocityUnlimited() { }
// Ghidra address: 0140d648; ELF VA: 0x130d648; file offset: 0x1309648
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetMaxVelocityUnlimited_1309648(MovingObject *self,void *runtimeMethod)

{
  self->LimitVelocity = false;
  self->MaxVelocityMagnitudeY = 0.0;
  self->MaxVelocityMagnitudeZ = 0.0;
  self->MaxVelocityMagnitudeTotal = 0.0;
  self->MaxVelocityMagnitudeX = 0.0;
  return;
}

