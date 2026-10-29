// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Vector2 GetPosition2D() { }
// Ghidra address: 0140d760; ELF VA: 0x130d760; file offset: 0x1309760
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Vector2 MovingObject_GetPosition2D_1309760(MovingObject *self,void *runtimeMethod)

{
  void *pvVar1;
  undefined8 in_d1;
  undefined4 uVar2;
  Recovered_Vector3 RVar3;
  Recovered_Vector2 RVar4;
  
  uVar2 = (undefined4)((ulong)in_d1 >> 0x20);
  pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar1 != (void *)0x0) {
    RVar3 = UnityEngine_Transform_get_position_2516710(pvVar1,(void *)0x0);
    RVar4.component0 = RVar3.component0;
    pvVar1 = (void *)NativeHelper_0260e1a8
                               (RVar4.component0,CONCAT44(uVar2,RVar3.component1),RVar3.component2,
                                self,0);
    if (pvVar1 != (void *)0x0) {
      RVar3 = UnityEngine_Transform_get_position_2516710(pvVar1,(void *)0x0);
      RVar4.component1 = RVar3.component2;
      return RVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

