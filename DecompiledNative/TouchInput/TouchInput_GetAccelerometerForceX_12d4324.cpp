// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual float GetAccelerometerForceX() { }
// Ghidra address: 013d8324; ELF VA: 0x12d8324; file offset: 0x12d4324
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013d8354) */

float TouchInput_GetAccelerometerForceX_12d4324(TouchInput *self,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  float in_s2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = self->LowPassKernelWidthInSeconds;
  uVar3 = (self->LowPassValue).component0;
  uVar4 = (self->LowPassValue).component1;
  fVar5 = (self->LowPassValue).component2;
  fVar6 = self->AccelerometerUpdateInterval / fVar2;
  fVar1 = (float)NativeHelper_026480f4(0);
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  fVar1 = (float)uVar3 + (fVar1 - (float)uVar3) * fVar6;
  (self->LowPassValue).component0 = fVar1;
  (self->LowPassValue).component1 = (float)uVar4 + (fVar2 - (float)uVar4) * fVar6;
  (self->LowPassValue).component2 = fVar5 + fVar6 * (in_s2 - fVar5);
  return fVar1;
}

