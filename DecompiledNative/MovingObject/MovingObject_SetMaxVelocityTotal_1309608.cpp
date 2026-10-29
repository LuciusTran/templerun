// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMaxVelocityTotal(float maxVelocity) { }
// Ghidra address: 0140d608; ELF VA: 0x130d608; file offset: 0x1309608
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetMaxVelocityTotal_1309608
               (MovingObject *self,float maxVelocity,void *runtimeMethod)

{
  self->LimitVelocity = true;
  self->MaxVelocityMagnitudeTotal = maxVelocity;
  return;
}

