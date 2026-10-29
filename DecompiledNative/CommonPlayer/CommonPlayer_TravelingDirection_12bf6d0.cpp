// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathDirection TravelingDirection() { }
// Ghidra address: 013c36d0; ELF VA: 0x12c36d0; file offset: 0x12bf6d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int CommonPlayer_TravelingDirection_12bf6d0(CommonPlayer *self,void *runtimeMethod)

{
  int iVar1;
  void *self_00;
  int iVar2;
  Recovered_Vector3 RVar3;
  
  self_00 = (void *)NativeHelper_0260e1a8(self,0);
  if (self_00 != (void *)0x0) {
    RVar3 = UnityEngine_Transform_get_localEulerAngles_25169dc(self_00,(void *)0x0);
    iVar1 = -0x80000000;
    if (RVar3.component1 != INFINITY) {
      iVar1 = (int)RVar3.component1;
    }
    if (iVar1 < 5) {
      iVar2 = 1;
    }
    else if (iVar1 < 0x5f) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
      if (0xb8 < iVar1) {
        iVar2 = 4;
      }
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

