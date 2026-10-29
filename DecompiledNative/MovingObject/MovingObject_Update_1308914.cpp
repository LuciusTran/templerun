// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override void Update() { }
// Ghidra address: 0140c914; ELF VA: 0x130c914; file offset: 0x1308914
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovingObject_Update_1308914(MovingObject *self,void *runtimeMethod)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  undefined8 *puVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar19;
  ulong uVar18;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  Recovered_Vector3 RVar30;
  Recovered_Vector3 RVar31;
  Recovered_Vector3 value;
  Recovered_Quaternion rotation;
  Recovered_Vector3 point;
  
  if ((bRam0000000002b950db & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1aa8);
    NativeHelper_011df0b4(PTR_DAT_029c1ab0);
    bRam0000000002b950db = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->HasForce != false) {
    uVar22 = (self->Velocity).component0;
    uVar23 = (self->Velocity).component1;
    fVar24 = (self->Velocity).component2;
    uVar25 = (self->Force).component0;
    uVar26 = (self->Force).component1;
    fVar27 = (self->Force).component2;
    fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    (self->Force).component0 = 0.0;
    (self->Force).component1 = 0.0;
    (self->Force).component2 = 0.0;
    (self->Velocity).component0 = (float)uVar22 + (float)uVar25 * fVar12;
    (self->Velocity).component1 = (float)uVar23 + (float)uVar26 * fVar12;
    (self->Velocity).component2 = fVar24 + fVar27 * fVar12;
    self->HasForce = false;
    runtimeMethod = extraout_x1_00;
  }
  bVar4 = MovingObject_IsMoving_1308f04(self,runtimeMethod);
  puVar2 = PTR_DAT_029b9368;
  if (!bVar4) {
    return;
  }
  if (((self->IsFollowingPath == false) || (self->FollowingPathNodes == (void *)0x0)) ||
     (*(int *)((long)self->FollowingPathNodes + 0x18) < 2)) {
    if (self->LimitVelocity != false) {
      if (0.0 <= self->MaxVelocityMagnitudeTotal) {
        if (cRam0000000002b945bd == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945bd = '\x01';
        }
        puVar3 = PTR_DAT_029b97c8;
        fVar27 = (self->Velocity).component0;
        fVar24 = (self->Velocity).component1;
        fVar12 = (self->Velocity).component2;
        if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        if (self->MaxVelocityMagnitudeTotal <
            SQRT(fVar27 * fVar27 + fVar24 * fVar24 + fVar12 * fVar12)) {
          fVar24 = (self->Velocity).component0;
          fVar27 = (self->Velocity).component1;
          fVar12 = (self->Velocity).component2;
          if (cRam0000000002b945c3 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b97c8);
            cRam0000000002b945c3 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          fVar12 = SQRT(fVar12 * fVar12 + fVar24 * fVar24 + fVar27 * fVar27);
          if (fVar12 <= _UNK_007a3c5c) {
            if (cRam0000000002b94510 == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b9368);
              cRam0000000002b94510 = '\x01';
            }
            puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            uVar17 = *puVar8;
            fVar12 = *(float *)(puVar8 + 1);
          }
          else {
            uVar13 = (self->Velocity).component0;
            uVar15 = (self->Velocity).component1;
            uVar17 = CONCAT44((float)uVar15 / fVar12,(float)uVar13 / fVar12);
            fVar12 = (self->Velocity).component2 / fVar12;
          }
          fVar24 = self->MaxVelocityMagnitudeTotal;
          (self->Velocity).component0 = (float)uVar17 * fVar24;
          (self->Velocity).component1 = (float)((ulong)uVar17 >> 0x20) * fVar24;
          (self->Velocity).component2 = fVar12 * fVar24;
        }
      }
      fVar12 = self->MaxVelocityMagnitudeX;
      if ((0.0 <= fVar12) && (fVar24 = (self->Velocity).component0, fVar12 < ABS(fVar24))) {
        if (fVar24 < 0.0) {
          (self->Velocity).component0 = -fVar12;
        }
        if (0.0 < fVar12) {
          (self->Velocity).component0 = fVar12;
        }
      }
      fVar12 = self->MaxVelocityMagnitudeY;
      if ((0.0 <= fVar12) && (fVar24 = (self->Velocity).component1, fVar12 < ABS(fVar24))) {
        if (fVar24 < 0.0) {
          (self->Velocity).component1 = -fVar12;
        }
        if (0.0 < fVar12) {
          (self->Velocity).component1 = fVar12;
        }
      }
      fVar12 = self->MaxVelocityMagnitudeZ;
      if ((0.0 <= fVar12) && (fVar24 = (self->Velocity).component2, fVar12 < ABS(fVar24))) {
        if (fVar24 < 0.0) {
          (self->Velocity).component2 = -fVar12;
        }
        if (0.0 < fVar12) {
          (self->Velocity).component2 = fVar12;
        }
      }
    }
    fVar24 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar12 = _UNK_007a3cac;
    fVar27 = (self->Velocity).component0;
    uVar28 = (self->Velocity).component1;
    uVar29 = (self->Velocity).component2;
    if (cRam0000000002b94510 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9368);
      cRam0000000002b94510 = '\x01';
    }
    if (fVar12 < fVar24) {
      fVar24 = fVar12;
    }
    pfVar9 = *(float **)(*(long *)puVar2 + 0xb8);
    uVar17 = *(undefined8 *)(pfVar9 + 1);
    fVar27 = fVar27 - *pfVar9;
    fVar12 = (float)uVar28 - (float)uVar17;
    fVar19 = (float)uVar29 - (float)((ulong)uVar17 >> 0x20);
    if (_UNK_007a3b60 <= fVar19 * fVar19 + fVar27 * fVar27 + fVar12 * fVar12) {
      pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar7 == (void *)0x0) goto LAB_0140cf00;
      RVar30.component2 = fVar24 * (self->Velocity).component2;
      RVar30.component1 = fVar24 * (self->Velocity).component1;
      RVar30.component0 = fVar24 * (self->Velocity).component0;
      UnityEngine_Transform_Translate_25171c0(pvVar7,RVar30,(void *)0x0,(void *)0x0);
    }
    if (self->AngularVelocity == 0.0) {
      return;
    }
    pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
    self_00 = (void *)NativeHelper_0260e1a8(self,0);
    if (self_00 != (void *)0x0) {
      RVar30 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0);
      if (pvVar7 != (void *)0x0) {
        uVar18 = (ulong)(uint)(self->RotationAxis).component0;
        uVar20 = (ulong)(uint)(self->RotationAxis).component1;
        fVar24 = fVar24 * self->AngularVelocity;
        uVar21 = (ulong)(uint)(self->RotationAxis).component2;
        RVar31 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
        rotation.component0 = NativeHelper_02607728(fVar24,0);
        point.component0 = RVar31.component0 - RVar30.component0;
        point.component1 = RVar31.component1 - RVar30.component1;
        point.component2 = RVar31.component2 - RVar30.component2;
        rotation.component1 = (undefined4)uVar18;
        rotation.component2 = (undefined4)uVar20;
        rotation.component3 = (undefined4)uVar21;
        RVar31 = UnityEngine_Quaternion_op_Multiply_25038ac(rotation,point,(void *)0x0);
        value.component0 = RVar30.component0 + RVar31.component0;
        value.component1 = RVar30.component1 + RVar31.component1;
        value.component2 = RVar30.component2 + RVar31.component2;
        UnityEngine_Transform_set_position_25167b0(pvVar7,value,runtimeMethod_00);
        fVar24 = fVar24 * _UNK_007a3c28;
        if (pcRam0000000002b9d308 == (code *)0x0) {
          pcRam0000000002b9d308 = (code *)NativeHelper_011df070(&UNK_007b61fe);
        }
        (*pcRam0000000002b9d308)(fVar24,pvVar7,&stack0xffffffffffffffd0);
        return;
      }
    }
    goto LAB_0140cf00;
  }
  fVar24 = self->TimeSinceFollowingPathStart;
  fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  pvVar7 = self->FollowingPathNodes;
  self->TimeSinceFollowingPathStart = fVar24 + fVar12;
  puVar2 = PTR_DAT_029c1ab0;
  if (pvVar7 == (void *)0x0) goto LAB_0140cf00;
  if (*(int *)((long)pvVar7 + 0x18) + -1 < 1) {
    lVar6 = 0;
LAB_0140cbb8:
    if (lVar6 == 0) goto LAB_0140cbdc;
LAB_0140cbbc:
    pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar7 == (void *)0x0) {
LAB_0140cf00:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar16 = *(undefined4 *)(lVar6 + 0x18);
    fVar12 = *(float *)(lVar6 + 0x1c);
    uVar14 = *(undefined4 *)(lVar6 + 0x14);
  }
  else {
    iVar10 = 0;
    lVar11 = 0;
    do {
      lVar5 = NativeHelper_01a2f750(pvVar7,iVar10,*(undefined8 *)puVar2);
      if (self->FollowingPathNodes == (void *)0x0) goto LAB_0140cf00;
      lVar6 = NativeHelper_01a2f750(self->FollowingPathNodes,iVar10 + 1,*(undefined8 *)puVar2);
      lVar1 = lVar5;
      if (iVar10 != 0) {
        lVar1 = lVar11;
      }
      if (lVar5 == 0) goto LAB_0140cf00;
      fVar12 = self->TimeSinceFollowingPathStart;
      if (*(float *)(lVar5 + 0x10) <= fVar12) {
        if (lVar6 == 0) goto LAB_0140cf00;
        if (fVar12 <= *(float *)(lVar6 + 0x10)) {
          lVar6 = NativeHelper_0260e1a8(self,0);
          if (lVar6 != 0) {
            if (pcRam0000000002b9d2b0 == (code *)0x0) {
              pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
            }
            (*pcRam0000000002b9d2b0)(lVar6,&stack0xffffffffffffffd0);
            return;
          }
          goto LAB_0140cf00;
        }
      }
      pvVar7 = self->FollowingPathNodes;
      if (pvVar7 == (void *)0x0) goto LAB_0140cf00;
      iVar10 = iVar10 + 1;
      lVar11 = lVar1;
    } while (iVar10 < *(int *)((long)pvVar7 + 0x18) + -1);
    if (lVar1 == 0) goto LAB_0140cbb8;
    if ((lVar6 != 0) && (*(float *)(lVar1 + 0x10) <= fVar12)) goto LAB_0140cbbc;
    pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar7 == (void *)0x0) goto LAB_0140cf00;
    uVar16 = *(undefined4 *)(lVar1 + 0x18);
    fVar12 = *(float *)(lVar1 + 0x1c);
    uVar14 = *(undefined4 *)(lVar1 + 0x14);
  }
  RVar31.component1 = (float)uVar16;
  RVar31.component0 = (float)uVar14;
  RVar31.component2 = fVar12;
  UnityEngine_Transform_set_position_25167b0(pvVar7,RVar31,(void *)0x0);
LAB_0140cbdc:
  self->IsFollowingPath = false;
  return;
}

