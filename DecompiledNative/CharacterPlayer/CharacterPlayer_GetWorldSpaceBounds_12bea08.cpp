// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual Bounds GetWorldSpaceBounds() { }
// Ghidra address: 013c2a08; ELF VA: 0x12c2a08; file offset: 0x12bea08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * CharacterPlayer_GetWorldSpaceBounds_12bea08(CharacterPlayer *self,void *runtimeMethod)

{
  void *self_00;
  void *extraout_x0;
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Recovered_Vector3 RVar7;
  
  self_00 = (void *)NativeHelper_0260e1a8(self,0);
  if (self_00 != (void *)0x0) {
    RVar7 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0);
    fVar4 = RVar7.component0 + (float)_UNK_007a3590;
    fVar5 = RVar7.component1 + (float)((ulong)_UNK_007a3590 >> 0x20);
    fVar6 = RVar7.component2 + _UNK_007a3ce8;
    fVar1 = ((RVar7.component0 + (float)_UNK_007a3a18) - fVar4) * 0.5;
    fVar2 = ((RVar7.component1 + (float)((ulong)_UNK_007a3a18 >> 0x20)) - fVar5) * 0.5;
    fVar3 = ((RVar7.component2 + _UNK_007a3c78) - fVar6) * 0.5;
    *(ulong *)((long)in_x8 + 0xc) = CONCAT44(fVar2,fVar1);
    *in_x8 = CONCAT44(fVar5 + fVar2,fVar4 + fVar1);
    *(float *)(in_x8 + 1) = fVar6 + fVar3;
    *(float *)((long)in_x8 + 0x14) = fVar3;
    return extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

