// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateWater() { }
// Ghidra address: 013dc070; ELF VA: 0x12dc070; file offset: 0x12d8070
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_UpdateWater_12d8070(GameCamera *self,void *runtimeMethod)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  Recovered_Vector3 RVar5;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  pvVar2 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar2 != (void *)0x0) {
    RVar5 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
    pvVar2 = self->Water;
    if (pvVar2 != (void *)0x0) {
      fVar3 = RVar5.component0 / 200.0;
      fVar4 = RVar5.component2 / 200.0;
      fVar1 = 0.0;
      if (fVar4 != INFINITY) {
        fVar1 = (float)((int)fVar4 * 200);
      }
      fVar4 = 0.0;
      if (fVar3 != INFINITY) {
        fVar4 = (float)((int)fVar3 * 200);
      }
      RVar5 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
      fStack_2c = RVar5.component1;
      fStack_30 = fVar4;
      fStack_28 = fVar1;
      if (pcRam0000000002b9d2b0 == (code *)0x0) {
        pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
      }
      (*pcRam0000000002b9d2b0)(pvVar2,&fStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

