// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmosSelected() { }
// Ghidra address: 013dc10c; ELF VA: 0x12dc10c; file offset: 0x12d810c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_OnDrawGizmosSelected_12d810c(GameCamera *self,void *runtimeMethod)

{
  void *self_00;
  Recovered_Vector3 RVar1;
  Recovered_Color value;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  value.component2 = 1.0;
  value.component3 = 1.0;
  value.component0 = 1.0;
  value.component1 = 1.0;
  UnityEngine_Gizmos_set_color_24f05e0(value,(void *)0x0);
  NativeHelper_025f440c
            ((self->TargetCameraLocation).component0,(self->TargetCameraLocation).component1,
             (self->TargetCameraLocation).component2,0x3f800000,0);
  self_00 = (void *)NativeHelper_0260e1a8(self,0);
  if (self_00 != (void *)0x0) {
    RVar1 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0);
    fStack_18 = RVar1.component2;
    fStack_1c = RVar1.component1;
    fStack_20 = RVar1.component0;
    fStack_30 = (self->TargetCameraLocation).component0;
    fStack_2c = (self->TargetCameraLocation).component1;
    fStack_28 = (self->TargetCameraLocation).component2;
    if (pcRam0000000002b9c3b8 == (code *)0x0) {
      pcRam0000000002b9c3b8 = (code *)NativeHelper_011df070(&UNK_007a4bbc);
    }
    (*pcRam0000000002b9c3b8)(&fStack_20,&fStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

