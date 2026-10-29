// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMaxVelocityY(float maxVelocity) { }
// Ghidra address: 0140d628; ELF VA: 0x130d628; file offset: 0x1309628
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetMaxVelocityY_1309628(MovingObject *self,float maxVelocity,void *runtimeMethod)

{
  self->LimitVelocity = true;
  self->MaxVelocityMagnitudeY = maxVelocity;
  return;
}

