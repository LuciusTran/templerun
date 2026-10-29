// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResetSimulation() { }
// Ghidra address: 0140d1e8; ELF VA: 0x130d1e8; file offset: 0x13091e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_ResetSimulation_13091e8(MovingObject *self,void *runtimeMethod)

{
  self->TimeSinceFollowingPathStart = 0.0;
  self->IsFollowingPath = false;
  self->HasForce = false;
  self->AngularVelocity = 0.0;
  *(undefined8 *)&(self->Force).component2 = 0;
  (self->Velocity).component1 = 0.0;
  (self->Velocity).component2 = 0.0;
  (self->Force).component0 = 0.0;
  (self->Force).component1 = 0.0;
  return;
}

