// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMaxVelocityZ(float maxVelocity) { }
// Ghidra address: 0140d638; ELF VA: 0x130d638; file offset: 0x1309638
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetMaxVelocityZ_1309638(MovingObject *self,float maxVelocity,void *runtimeMethod)

{
  self->LimitVelocity = true;
  self->MaxVelocityMagnitudeZ = maxVelocity;
  return;
}

