// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 01421f8c; ELF VA: 0x1321f8c; file offset: 0x131df8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x014220f8) */

void PsuedoRunner_Update_131df8c(PsuedoRunner *self,void *runtimeMethod)

{
  uint uVar1;
  undefined1 auVar2 [12];
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  void *pvVar6;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  PathElement *pPVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Recovered_Vector3 RVar12;
  Recovered_Vector3 RVar13;
  Recovered_Vector3 RVar14;
  Recovered_Vector3 value;
  
  if ((bRam0000000002b95191 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95191 = 1;
  }
  pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
  puVar3 = PTR_DAT_029b7f98;
  if (pvVar5 == (void *)0x0) goto LAB_01422284;
  RVar12 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
  pPVar7 = self->OnPath;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pPVar7,(void *)0x0,(void *)0x0);
  if (bVar4) {
    PsuedoRunner_SnapToFirstPathElemeent_131e288(self,runtimeMethod_00);
  }
  pPVar7 = self->OnPath;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar7,(void *)0x0,(void *)0x0);
  if (bVar4) {
    pPVar7 = self->NextPath;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar7,(void *)0x0,(void *)0x0);
    if (bVar4) {
      fVar10 = self->TimeSinceLastNode;
      fVar8 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar10 = fVar10 + fVar8;
      self->TimeSinceLastNode = fVar10;
      fVar10 = fVar10 / self->NodeToNodeTime;
      pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
      if (1.0 <= fVar10) {
        if (((self->NextPath == (PathElement *)0x0) ||
            (pvVar6 = (void *)NativeHelper_0260e1a8(self->NextPath,0), pvVar6 == (void *)0x0)) ||
           (RVar13 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0),
           pvVar5 == (void *)0x0)) goto LAB_01422284;
        UnityEngine_Transform_set_position_25167b0(pvVar5,RVar13,(void *)0x0);
        self->OnPath = self->NextPath;
        PsuedoRunner_PicknNextPathElement_131e308(self,runtimeMethod_01);
        uVar1 = self->Direction - 1;
        if (uVar1 < 4) {
          self->DesiredCameraY = *(float *)(&UNK_007a3e00 + (long)(int)uVar1 * 4);
        }
        pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar5 == (void *)0x0) goto LAB_01422284;
        auVar2._4_8_ = 0;
        auVar2._0_4_ = self->DesiredCameraY;
        UnityEngine_Transform_set_localEulerAngles_2516a64
                  (pvVar5,(Recovered_Vector3)(auVar2 << 0x20),(void *)0x0);
        self->TimeSinceLastNode = self->TimeSinceLastNode - self->NodeToNodeTime;
      }
      else {
        if ((self->OnPath == (PathElement *)0x0) ||
           (pvVar6 = (void *)NativeHelper_0260e1a8(self->OnPath,0), pvVar6 == (void *)0x0))
        goto LAB_01422284;
        RVar13 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
        if ((self->NextPath == (PathElement *)0x0) ||
           (pvVar6 = (void *)NativeHelper_0260e1a8(self->NextPath,0), pvVar6 == (void *)0x0))
        goto LAB_01422284;
        RVar14 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        if (pvVar5 == (void *)0x0) goto LAB_01422284;
        value.component2 = RVar13.component2 + fVar10 * (RVar14.component2 - RVar13.component2);
        value.component1 = RVar13.component1 + fVar10 * (RVar14.component1 - RVar13.component1);
        value.component0 = RVar13.component0 + fVar10 * (RVar14.component0 - RVar13.component0);
        UnityEngine_Transform_set_position_25167b0(pvVar5,value,(void *)0x0);
      }
    }
  }
  pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar5 != (void *)0x0) {
    RVar13 = UnityEngine_Transform_get_position_2516710(pvVar5,(void *)0x0);
    fVar11 = RVar13.component0 - RVar12.component0;
    fVar9 = RVar13.component1 - RVar12.component1;
    fVar10 = RVar13.component2 - RVar12.component2;
    fVar8 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    (self->CalculatedVelocityVector).component0 = fVar11 / fVar8;
    (self->CalculatedVelocityVector).component1 = fVar9 / fVar8;
    (self->CalculatedVelocityVector).component2 = fVar10 / fVar8;
    if (cRam0000000002b945bd == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b97c8);
      cRam0000000002b945bd = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    fVar8 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    self->CalculatedVelocity = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9) / fVar8;
    return;
  }
LAB_01422284:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

