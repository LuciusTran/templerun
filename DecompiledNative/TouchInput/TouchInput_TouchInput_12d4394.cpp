// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public TouchInput() { }
// Ghidra address: 013d8394; ELF VA: 0x12d8394; file offset: 0x12d4394
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TouchInput_TouchInput_12d4394(TouchInput *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *extraout_x1;
  undefined8 uVar3;
  float fVar4;
  Recovered_Vector2 RVar5;
  
  self->_Sensitivity = 0.5;
  if (cRam0000000002b945be == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9a40);
    cRam0000000002b945be = '\x01';
    runtimeMethod = extraout_x1;
  }
  RVar5 = **(Recovered_Vector2 **)(*(long *)PTR_DAT_029b9a40 + 0xb8);
  uVar1 = _UNK_007a359c;
  self->AccelerometerUpdateInterval = (float)_UNK_007a3598;
  self->LowPassKernelWidthInSeconds = (float)uVar1;
  self->LastSwipePoint = RVar5;
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368,runtimeMethod);
    cRam0000000002b94510 = '\x01';
  }
  uVar3 = **(undefined8 **)(*(long *)PTR_DAT_029b9368 + 0xb8);
  fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_029b9368 + 0xb8) + 1);
  (self->LowPassValue).component0 = (float)(int)uVar3;
  (self->LowPassValue).component1 = (float)(int)((ulong)uVar3 >> 0x20);
  (self->LowPassValue).component2 = fVar4;
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

