// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResetForce() { }
// Ghidra address: 0140d1d8; ELF VA: 0x130d1d8; file offset: 0x13091d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_ResetForce_13091d8(MovingObject *self,void *runtimeMethod)

{
  (self->Force).component0 = 0.0;
  (self->Force).component1 = 0.0;
  (self->Force).component2 = 0.0;
  self->HasForce = false;
  return;
}

