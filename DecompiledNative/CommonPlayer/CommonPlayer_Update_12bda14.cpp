// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013c1a14; ELF VA: 0x12c1a14; file offset: 0x12bda14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CommonPlayer_Update_12bda14(CommonPlayer *self,void *runtimeMethod)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  undefined8 *puVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar16;
  ulong uVar15;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  Recovered_Vector3 RVar23;
  Recovered_Vector3 RVar24;
  Recovered_Vector3 value;
  Recovered_Quaternion rotation;
  Recovered_Vector3 point;
  
  iVar5 = CommonPlayer_TravelingDirection_12bf6d0(self,runtimeMethod);
  self->Facing = iVar5;
  pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  RVar23 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
  (self->PreviousLocation).component0 = RVar23.component0;
  (self->PreviousLocation).component1 = RVar23.component1;
  (self->PreviousLocation).component2 = RVar23.component2;
  pvVar6 = (void *)0x0;
  if ((bRam0000000002b950db & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1aa8);
    NativeHelper_011df0b4(PTR_DAT_029c1ab0);
    bRam0000000002b950db = 1;
    pvVar6 = extraout_x1;
  }
  if (self->field_0x24 != '\0') {
    uVar19 = *(undefined8 *)&self->field_0x34;
    fVar20 = *(float *)&self->field_0x3c;
    uVar21 = *(undefined8 *)&self->field_0x28;
    fVar22 = *(float *)&self->field_0x30;
    fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    *(undefined8 *)&self->field_0x28 = 0;
    *(undefined4 *)&self->field_0x30 = 0;
    *(ulong *)&self->field_0x34 =
         CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar12,
                  (float)uVar19 + (float)uVar21 * fVar12);
    *(float *)&self->field_0x3c = fVar20 + fVar22 * fVar12;
    self->field_0x24 = 0;
    pvVar6 = extraout_x1_00;
  }
  bVar4 = MovingObject_IsMoving_1308f04((MovingObject *)self,pvVar6);
  puVar2 = PTR_DAT_029b9368;
  if (!bVar4) {
    return;
  }
  if (((self->field_0x64 == '\0') || (*(long *)&self->field_0x70 == 0)) ||
     (*(int *)(*(long *)&self->field_0x70 + 0x18) < 2)) {
    if (self->field_0x50 != '\0') {
      if (0.0 <= *(float *)&self->field_0x54) {
        if (cRam0000000002b945bd == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945bd = '\x01';
        }
        puVar3 = PTR_DAT_029b97c8;
        fVar22 = *(float *)&self->field_0x34;
        fVar20 = *(float *)&self->field_0x38;
        fVar12 = *(float *)&self->field_0x3c;
        if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        if (*(float *)&self->field_0x54 < SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar12 * fVar12))
        {
          fVar20 = *(float *)&self->field_0x34;
          fVar22 = *(float *)&self->field_0x38;
          fVar12 = *(float *)&self->field_0x3c;
          if (cRam0000000002b945c3 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b97c8);
            cRam0000000002b945c3 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          fVar12 = SQRT(fVar12 * fVar12 + fVar20 * fVar20 + fVar22 * fVar22);
          if (fVar12 <= _UNK_007a3c5c) {
            if (cRam0000000002b94510 == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b9368);
              cRam0000000002b94510 = '\x01';
            }
            puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            uVar19 = *puVar9;
            fVar12 = *(float *)(puVar9 + 1);
          }
          else {
            uVar19 = CONCAT44((float)((ulong)*(undefined8 *)&self->field_0x34 >> 0x20) / fVar12,
                              (float)*(undefined8 *)&self->field_0x34 / fVar12);
            fVar12 = *(float *)&self->field_0x3c / fVar12;
          }
          fVar20 = *(float *)&self->field_0x54;
          *(ulong *)&self->field_0x34 =
               CONCAT44((float)((ulong)uVar19 >> 0x20) * fVar20,(float)uVar19 * fVar20);
          *(float *)&self->field_0x3c = fVar12 * fVar20;
        }
      }
      fVar12 = *(float *)&self->field_0x58;
      if ((0.0 <= fVar12) && (fVar12 < ABS(*(float *)&self->field_0x34))) {
        if (*(float *)&self->field_0x34 < 0.0) {
          *(float *)&self->field_0x34 = -fVar12;
        }
        if (0.0 < fVar12) {
          *(float *)&self->field_0x34 = fVar12;
        }
      }
      fVar12 = *(float *)&self->field_0x5c;
      if ((0.0 <= fVar12) && (fVar12 < ABS(*(float *)&self->field_0x38))) {
        if (*(float *)&self->field_0x38 < 0.0) {
          *(float *)&self->field_0x38 = -fVar12;
        }
        if (0.0 < fVar12) {
          *(float *)&self->field_0x38 = fVar12;
        }
      }
      fVar12 = *(float *)&self->field_0x60;
      if ((0.0 <= fVar12) && (fVar12 < ABS(*(float *)&self->field_0x3c))) {
        if (*(float *)&self->field_0x3c < 0.0) {
          *(float *)&self->field_0x3c = -fVar12;
        }
        if (0.0 < fVar12) {
          *(float *)&self->field_0x3c = fVar12;
        }
      }
    }
    fVar20 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
    fVar12 = _UNK_007a3cac;
    fVar22 = *(float *)&self->field_0x34;
    uVar19 = *(undefined8 *)&self->field_0x38;
    if (cRam0000000002b94510 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9368);
      cRam0000000002b94510 = '\x01';
    }
    if (fVar12 < fVar20) {
      fVar20 = fVar12;
    }
    pfVar10 = *(float **)(*(long *)puVar2 + 0xb8);
    uVar21 = *(undefined8 *)(pfVar10 + 1);
    fVar22 = fVar22 - *pfVar10;
    fVar12 = (float)uVar19 - (float)uVar21;
    fVar16 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
    if (_UNK_007a3b60 <= fVar16 * fVar16 + fVar22 * fVar22 + fVar12 * fVar12) {
      pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar6 == (void *)0x0) goto code_r0x0140cf00;
      RVar23.component2 = fVar20 * *(float *)&self->field_0x3c;
      RVar23.component1 = fVar20 * *(float *)&self->field_0x38;
      RVar23.component0 = fVar20 * *(float *)&self->field_0x34;
      UnityEngine_Transform_Translate_25171c0(pvVar6,RVar23,(void *)0x0,(void *)0x0);
    }
    if (*(float *)&self->field_0x4c == 0.0) {
      return;
    }
    pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
    self_00 = (void *)NativeHelper_0260e1a8(self,0);
    if (self_00 != (void *)0x0) {
      RVar23 = UnityEngine_Transform_get_position_2516710(self_00,(void *)0x0);
      if (pvVar6 != (void *)0x0) {
        uVar15 = (ulong)*(uint *)&self->field_0x40;
        uVar17 = (ulong)*(uint *)&self->field_0x44;
        fVar20 = fVar20 * *(float *)&self->field_0x4c;
        uVar18 = (ulong)*(uint *)&self->field_0x48;
        RVar24 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
        rotation.component0 = NativeHelper_02607728(fVar20,0);
        point.component0 = RVar24.component0 - RVar23.component0;
        point.component1 = RVar24.component1 - RVar23.component1;
        point.component2 = RVar24.component2 - RVar23.component2;
        rotation.component1 = (undefined4)uVar15;
        rotation.component2 = (undefined4)uVar17;
        rotation.component3 = (undefined4)uVar18;
        RVar24 = UnityEngine_Quaternion_op_Multiply_25038ac(rotation,point,(void *)0x0);
        value.component0 = RVar23.component0 + RVar24.component0;
        value.component1 = RVar23.component1 + RVar24.component1;
        value.component2 = RVar23.component2 + RVar24.component2;
        UnityEngine_Transform_set_position_25167b0(pvVar6,value,runtimeMethod_00);
        fVar20 = fVar20 * _UNK_007a3c28;
        if (pcRam0000000002b9d308 == (code *)0x0) {
          pcRam0000000002b9d308 = (code *)NativeHelper_011df070(&UNK_007b61fe);
        }
        (*pcRam0000000002b9d308)(fVar20,pvVar6,&stack0xffffffffffffffd0);
        return;
      }
    }
    goto code_r0x0140cf00;
  }
  fVar20 = *(float *)&self->field_0x68;
  fVar12 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  lVar7 = *(long *)&self->field_0x70;
  *(float *)&self->field_0x68 = fVar20 + fVar12;
  puVar2 = PTR_DAT_029c1ab0;
  if (lVar7 == 0) goto code_r0x0140cf00;
  if (*(int *)(lVar7 + 0x18) + -1 < 1) {
    lVar8 = 0;
code_r0x0140cbb8:
    if (lVar8 == 0) goto code_r0x0140cbdc;
code_r0x0140cbbc:
    pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar6 == (void *)0x0) {
code_r0x0140cf00:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar14 = *(undefined4 *)(lVar8 + 0x18);
    fVar12 = *(float *)(lVar8 + 0x1c);
    uVar13 = *(undefined4 *)(lVar8 + 0x14);
  }
  else {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar7 = NativeHelper_01a2f750(lVar7,iVar5,*(undefined8 *)puVar2);
      if (*(long *)&self->field_0x70 == 0) goto code_r0x0140cf00;
      lVar8 = NativeHelper_01a2f750(*(long *)&self->field_0x70,iVar5 + 1,*(undefined8 *)puVar2);
      lVar1 = lVar7;
      if (iVar5 != 0) {
        lVar1 = lVar11;
      }
      if (lVar7 == 0) goto code_r0x0140cf00;
      fVar12 = *(float *)&self->field_0x68;
      if (*(float *)(lVar7 + 0x10) <= fVar12) {
        if (lVar8 == 0) goto code_r0x0140cf00;
        if (fVar12 <= *(float *)(lVar8 + 0x10)) {
          lVar7 = NativeHelper_0260e1a8(self,0);
          if (lVar7 != 0) {
            if (pcRam0000000002b9d2b0 == (code *)0x0) {
              pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
            }
            (*pcRam0000000002b9d2b0)(lVar7,&stack0xffffffffffffffd0);
            return;
          }
          goto code_r0x0140cf00;
        }
      }
      lVar7 = *(long *)&self->field_0x70;
      if (lVar7 == 0) goto code_r0x0140cf00;
      iVar5 = iVar5 + 1;
      lVar11 = lVar1;
    } while (iVar5 < *(int *)(lVar7 + 0x18) + -1);
    if (lVar1 == 0) goto code_r0x0140cbb8;
    if ((lVar8 != 0) && (*(float *)(lVar1 + 0x10) <= fVar12)) goto code_r0x0140cbbc;
    pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar6 == (void *)0x0) goto code_r0x0140cf00;
    uVar14 = *(undefined4 *)(lVar1 + 0x18);
    fVar12 = *(float *)(lVar1 + 0x1c);
    uVar13 = *(undefined4 *)(lVar1 + 0x14);
  }
  RVar24.component1 = (float)uVar14;
  RVar24.component0 = (float)uVar13;
  RVar24.component2 = fVar12;
  UnityEngine_Transform_set_position_25167b0(pvVar6,RVar24,(void *)0x0);
code_r0x0140cbdc:
  self->field_0x64 = 0;
  return;
}

