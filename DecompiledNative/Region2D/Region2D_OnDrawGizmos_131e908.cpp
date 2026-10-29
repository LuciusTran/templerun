// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmos() { }
// Ghidra address: 01422908; ELF VA: 0x1322908; file offset: 0x131e908
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Region2D_OnDrawGizmos_131e908(Region2D *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  int iVar4;
  float fVar5;
  float fVar6;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  Recovered_Vector2 lastPoint;
  Recovered_Vector2 lastPoint_00;
  Recovered_Vector2 worldPoint;
  Recovered_Vector2 nextPoint;
  Recovered_Vector2 nextPoint_00;
  Recovered_Vector3 RVar14;
  Recovered_Color value;
  Recovered_Color value_00;
  Recovered_Color value_01;
  Recovered_Color value_02;
  ulong uVar7;
  
  if ((bRam0000000002b95196 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2428);
    NativeHelper_011df0b4(PTR_DAT_029c2430);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95196 = 1;
  }
  value.component2 = 1.0;
  value.component3 = 0.5;
  value.component0 = 1.0;
  value.component1 = 0.0;
  uVar7 = 0;
  UnityEngine_Gizmos_set_color_24f05e0(value,(void *)0x0);
  puVar1 = PTR_DAT_029c2430;
  pvVar3 = self->Points;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)((long)pvVar3 + 0x18) < 2) {
LAB_01422a18:
      puVar1 = PTR_DAT_029b7f98;
      pvVar3 = self->TestPoint;
      if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar3,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        return;
      }
      pvVar3 = self->TestPoint;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar3,(void *)0x0,(void *)0x0);
      if (bVar2) {
        if (self->TestPoint == (void *)0x0) goto LAB_014229f4;
        RVar14 = UnityEngine_Transform_get_position_2516710(self->TestPoint,(void *)0x0);
        worldPoint.component0 = RVar14.component0;
        worldPoint.component1 = RVar14.component2;
        bVar2 = Region2D_IsPointInside_131eb68(self,worldPoint,runtimeMethod_02);
        self->testIsIn = bVar2;
      }
      uVar11 = 0x3f800000;
      uVar12 = 0;
      value_00.component2 = 0.0;
      value_00.component3 = 0.5;
      value_00.component0 = 1.0;
      value_00.component1 = 0.0;
      uVar10 = 0;
      uVar9 = 0;
      UnityEngine_Gizmos_set_color_24f05e0(value_00,(void *)0x0);
      if (self->TestPoint != (void *)0x0) {
        RVar14 = UnityEngine_Transform_get_position_2516710(self->TestPoint,(void *)0x0);
        NativeHelper_025f44ac
                  (RVar14.component0,CONCAT44(uVar9,RVar14.component1),
                   CONCAT44(uVar10,RVar14.component2),0x3f800000,0);
        if (self->testIsIn != false) {
          uVar11 = 0;
          uVar12 = 0x3f800000;
        }
        value_01.component1 = (float)uVar12;
        value_01.component0 = (float)uVar11;
        value_01.component2 = 0.0;
        value_01.component3 = 0.5;
        UnityEngine_Gizmos_set_color_24f05e0(value_01,(void *)0x0);
        NativeHelper_025f44ac
                  ((self->testProjectedPoint).component0,(self->testProjectedPoint).component1,
                   (self->testProjectedPoint).component2,0x3f800000,0);
        value_02.component2 = 1.0;
        value_02.component3 = 0.5;
        value_02.component0 = 0.0;
        value_02.component1 = 0.25;
        UnityEngine_Gizmos_set_color_24f05e0(value_02,(void *)0x0);
        if (self->TestPoint != (void *)0x0) {
          UnityEngine_Transform_get_position_2516710(self->TestPoint,(void *)0x0);
          if (pcRam0000000002b9c3b8 == (code *)0x0) {
            pcRam0000000002b9c3b8 = (code *)NativeHelper_011df070(&UNK_007a4bbc);
          }
          (*pcRam0000000002b9c3b8)(&stack0xffffffffffffffe0,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      fVar5 = (float)NativeHelper_01a74fd8(pvVar3,0,*(undefined8 *)PTR_DAT_029c2430);
      pvVar3 = self->Points;
      if (pvVar3 != (void *)0x0) {
        iVar4 = 1;
        uVar13 = uVar7;
        do {
          uVar8 = uVar7;
          lastPoint.component1 = (float)uVar13;
          if (*(int *)((long)pvVar3 + 0x18) <= iVar4) {
            fVar6 = (float)NativeHelper_01a74fd8(pvVar3,0,*(undefined8 *)puVar1);
            lastPoint_00.component1 = lastPoint.component1;
            lastPoint_00.component0 = fVar5;
            nextPoint_00.component1 = (float)uVar8;
            nextPoint_00.component0 = fVar6;
            Region2D_DrawLine_131e860(self,lastPoint_00,nextPoint_00,runtimeMethod_01);
            goto LAB_01422a18;
          }
          fVar6 = (float)NativeHelper_01a74fd8(pvVar3,iVar4,*(undefined8 *)puVar1);
          lastPoint.component0 = fVar5;
          uVar7 = uVar13 & 0xffffffff;
          nextPoint.component1 = (float)uVar8;
          nextPoint.component0 = fVar6;
          Region2D_DrawLine_131e860(self,lastPoint,nextPoint,runtimeMethod_00);
          pvVar3 = self->Points;
          iVar4 = iVar4 + 1;
          uVar13 = uVar8;
          fVar5 = fVar6;
        } while (pvVar3 != (void *)0x0);
      }
    }
  }
LAB_014229f4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

