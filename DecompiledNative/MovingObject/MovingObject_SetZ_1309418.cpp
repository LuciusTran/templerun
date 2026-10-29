// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetZ(float z) { }
// Ghidra address: 0140d418; ELF VA: 0x130d418; file offset: 0x1309418
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetZ_1309418(MovingObject *self,float z,void *runtimeMethod)

{
  long lVar1;
  void *pvVar2;
  ulong extraout_d0;
  ulong extraout_d0_00;
  ulong uVar3;
  undefined8 in_d2;
  undefined4 uVar4;
  Recovered_Vector3 RVar5;
  
  uVar4 = (undefined4)((ulong)in_d2 >> 0x20);
  lVar1 = NativeHelper_0260e1a8(self,0);
  pvVar2 = (void *)NativeHelper_0260e1a8(self,0);
  uVar3 = extraout_d0;
  if (pvVar2 != (void *)0x0) {
    RVar5 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
    pvVar2 = (void *)NativeHelper_0260e1a8
                               (RVar5.component0,RVar5.component1,CONCAT44(uVar4,RVar5.component2),
                                self,0);
    uVar3 = extraout_d0_00;
    if (pvVar2 != (void *)0x0) {
      RVar5 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
      uVar3 = (ulong)(uint)RVar5.component0;
      if (lVar1 != 0) {
        if (pcRam0000000002b9d2b0 == (code *)0x0) {
          pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
        }
        (*pcRam0000000002b9d2b0)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(uVar3);
}

