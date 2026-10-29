// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ApplyForce(Vector3 force) { }
// Ghidra address: 0140d1b0; ELF VA: 0x130d1b0; file offset: 0x13091b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_ApplyForce_13091b0(MovingObject *self,Recovered_Vector3 force,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (self->Force).component0;
  uVar2 = (self->Force).component1;
  (self->Force).component0 = force.component0 + (float)uVar1;
  (self->Force).component1 = force.component1 + (float)uVar2;
  (self->Force).component2 = force.component2 + (self->Force).component2;
  self->HasForce = true;
  return;
}

