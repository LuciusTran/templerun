// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual float GetAccelerometerForceX() { }
// Ghidra address: 013d77ac; ELF VA: 0x12d77ac; file offset: 0x12d37ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float PCInput_GetAccelerometerForceX_12d37ac(PCInput *self,void *runtimeMethod)

{
  return self->SimulatedTiltAmount;
}

