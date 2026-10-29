// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013c36a0; ELF VA: 0x12c36a0; file offset: 0x12bf6a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CommonPlayer_Start_12bf6a0(CommonPlayer *self,void *runtimeMethod)

{
  void *self_00;
  Recovered_Vector3 RVar1;
  
  self_00 = (void *)NativeHelper_0260e1a8(self,0);
  if (self_00 != (void *)0x0) {
    RVar1 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0);
    (self->PreviousLocation).component0 = RVar1.component0;
    (self->PreviousLocation).component1 = RVar1.component1;
    (self->PreviousLocation).component2 = RVar1.component2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

