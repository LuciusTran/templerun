// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsPointOverTurnArea(Vector2 point, float radius) { }
// Ghidra address: 01414ae0; ELF VA: 0x1314ae0; file offset: 0x1310ae0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPointOverTurnArea_1310ae0
               (PathElement *self,Recovered_Vector2 point,float radius,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Recovered_Vector3 RVar8;
  Recovered_Vector3 RVar9;
  
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
    RVar8 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1a8
                               (RVar8.component0,RVar8.component1,RVar8.component2,self,0);
    if (pvVar3 != (void *)0x0) {
      RVar9 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
      fVar7 = RVar8.component0 - radius;
      fVar5 = RVar9.component2 - radius;
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar6 = radius + radius;
      *(float *)(lVar4 + 0x68) = fVar7;
      *(float *)(lVar4 + 0x6c) = fVar5;
      *(float *)(lVar4 + 0x70) = fVar6;
      *(float *)(lVar4 + 0x74) = fVar6;
      if (point.component0 < fVar7) {
        return false;
      }
      if (fVar6 + fVar7 <= point.component0) {
        return false;
      }
      if (point.component1 < fVar5) {
        return false;
      }
      return point.component1 < fVar6 + fVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

