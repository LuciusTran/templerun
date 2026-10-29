// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsPointOverTurnArea(Vector3 point, float radius) { }
// Ghidra address: 01414ad4; ELF VA: 0x1314ad4; file offset: 0x1310ad4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPointOverTurnArea_1310ad4
               (PathElement *self,Recovered_Vector3 point,float radius,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_register_00005064;
  Recovered_Vector3 RVar9;
  Recovered_Vector3 RVar10;
  
  uVar7 = (undefined4)((ulong)register0x00005040 >> 0x20);
  if ((bRam0000000002b95103 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b95103 = 1;
    runtimeMethod = extraout_x1;
  }
  bVar2 = PathElement_IsTurn_130b174(self,runtimeMethod);
  puVar1 = PTR_DAT_029bde80;
  if (!bVar2) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar3 != (void *)0x0) {
    RVar9 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1a8
                               (RVar9.component0,CONCAT44(uVar7,RVar9.component1),
                                CONCAT44(in_register_00005064,RVar9.component2),self,0);
    if (pvVar3 != (void *)0x0) {
      RVar10 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
      fVar8 = RVar9.component0 - radius;
      fVar5 = RVar10.component2 - radius;
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar6 = radius + radius;
      *(float *)(lVar4 + 0x68) = fVar8;
      *(float *)(lVar4 + 0x6c) = fVar5;
      *(float *)(lVar4 + 0x70) = fVar6;
      *(float *)(lVar4 + 0x74) = fVar6;
      if (point.component0 < fVar8) {
        return false;
      }
      if (fVar6 + fVar8 <= point.component0) {
        return false;
      }
      if (point.component2 < fVar5) {
        return false;
      }
      return point.component2 < fVar6 + fVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

