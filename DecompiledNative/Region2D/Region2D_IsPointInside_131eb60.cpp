// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsPointInside(Vector3 point) { }
// Ghidra address: 01422b60; ELF VA: 0x1322b60; file offset: 0x131eb60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Region2D_IsPointInside_131eb60(Region2D *self,Recovered_Vector3 point,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar13;
  Recovered_Vector3 RVar14;
  float fVar6;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  
  RVar14.component2 = point.component2;
  RVar14.component0 = point.component0;
  if ((bRam0000000002b95197 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2428);
    NativeHelper_011df0b4(PTR_DAT_029c2430);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95197 = 1;
  }
  if (self->Points != (void *)0x0) {
    iVar5 = *(int *)((long)self->Points + 0x18) + -1;
    if (iVar5 < 2) {
      return false;
    }
    pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar3 != (void *)0x0) {
      RVar14.component1 = 0.0;
      RVar14 = UnityEngine_Transform_InverseTransformPoint_25179c4(pvVar3,RVar14,(void *)0x0);
      fVar12 = RVar14.component2;
      uVar10 = (ulong)(uint)RVar14.component1;
      fVar6 = RVar14.component0;
      pvVar3 = self->TestPoint;
      if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar3,(void *)0x0,(void *)0x0);
      if (bVar2) {
        pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar3 == (void *)0x0) goto code_r0x01422d34;
        RVar14 = UnityEngine_Transform_TransformPoint_2517908(pvVar3,RVar14,(void *)0x0);
        (self->testProjectedPoint).component0 = RVar14.component0;
        (self->testProjectedPoint).component1 = RVar14.component1;
        (self->testProjectedPoint).component2 = RVar14.component2;
        pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar3 == (void *)0x0) goto code_r0x01422d34;
        RVar14 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
        uVar10 = (ulong)(uint)RVar14.component1;
        (self->testProjectedPoint).component1 = RVar14.component1;
      }
      puVar1 = PTR_DAT_029c2430;
      pvVar3 = self->Points;
      if (pvVar3 != (void *)0x0) {
        bVar2 = false;
        iVar4 = 0;
        do {
          if (*(int *)((long)pvVar3 + 0x18) <= iVar4) {
            return bVar2;
          }
          fVar7 = (float)NativeHelper_01a74fd8(pvVar3,iVar4,*(undefined8 *)puVar1);
          if (self->Points == (void *)0x0) break;
          uVar11 = uVar10;
          fVar8 = (float)NativeHelper_01a74fd8(self->Points,iVar5,*(undefined8 *)puVar1);
          fVar13 = (float)uVar10;
          fVar9 = (float)uVar11;
          if ((((fVar13 < fVar12) && (fVar12 <= fVar9)) || ((fVar12 <= fVar13 && (fVar9 < fVar12))))
             && (((fVar7 <= fVar6 || (fVar8 < fVar6)) &&
                 (fVar9 = (fVar12 - fVar13) / (fVar9 - fVar13), uVar11 = (ulong)(uint)fVar9,
                 fVar7 + (fVar8 - fVar7) * fVar9 < fVar6)))) {
            bVar2 = (bool)(bVar2 ^ 1);
          }
          pvVar3 = self->Points;
          uVar10 = uVar11;
          iVar5 = iVar4;
          iVar4 = iVar4 + 1;
        } while (pvVar3 != (void *)0x0);
      }
    }
  }
code_r0x01422d34:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

