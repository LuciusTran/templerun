// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013d7838; ELF VA: 0x12d7838; file offset: 0x12d3838
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x012ff154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TouchInput_Awake_12d3838(TouchInput *self,void *runtimeMethod)

{
  void *pvVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  UISlider *self_00;
  void *pvVar7;
  void *extraout_x1;
  UIFilledSprite *pUVar8;
  UIWidget *pUVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  Recovered_Vector3 RVar14;
  Recovered_Vector3 value;
  float fStack_58;
  float fStack_54;
  float fStack_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_029c0298;
  if ((bRam0000000002b94f30 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0298);
    bRam0000000002b94f30 = 1;
  }
  fVar11 = UnityEngine_PlayerPrefs_GetFloat_2507930(*(void **)puVar3,0.5,(void *)0x0);
  self_00 = self->SensitivitySlider;
  self->_Sensitivity = fVar11;
  if (self_00 == (UISlider *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  pvVar7 = (void *)0x0;
  if ((bRam0000000002b945b3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029b9c48);
    bRam0000000002b945b3 = 1;
    pvVar7 = extraout_x1;
  }
  if (self_00->mInitDone == false) {
    UISlider_Init_11fb4cc(self_00,pvVar7);
  }
  fVar2 = _UNK_007a3d38;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  fVar13 = 0.0;
  if (_UNK_007a3d38 <= fVar11) {
    fVar13 = fVar11;
  }
  self_00->rawValue = fVar13;
  if (1 < self_00->numberOfSteps) {
    fVar13 = fVar13 * (float)(self_00->numberOfSteps + -1);
    dVar12 = (double)NativeHelper_028614b0((double)fVar13,&fStack_28);
    if (0.0 <= fVar13) {
      if (dVar12 == 0.5) {
        fVar11 = 1.0;
        goto code_r0x012ff1bc;
      }
      fVar13 = (float)(int)(fVar13 + 0.5);
    }
    else if (dVar12 == -0.5) {
      fVar11 = -1.0;
code_r0x012ff1bc:
      fVar13 = (float)(double)CONCAT44(uStack_24,fStack_28);
      if (((long)(double)CONCAT44(uStack_24,fStack_28) & 1U) != 0) {
        fVar13 = fVar13 + fVar11;
      }
    }
    else {
      fVar13 = (float)(int)(fVar13 + -0.5);
    }
    fVar13 = fVar13 / (float)(self_00->numberOfSteps + -1);
  }
  puVar3 = PTR_DAT_029b7f98;
  if (self_00->mStepValue == fVar13) {
    return;
  }
  self_00->mStepValue = fVar13;
  fVar10 = (self_00->fullSize).component0;
  fStack_58 = (self_00->fullSize).component1;
  pUVar8 = self_00->mFGFilled;
  fVar11 = fVar13 * fVar10;
  if (*(int *)&self_00->field_0x40 != 0) {
    fStack_58 = fVar13 * fStack_58;
    fVar11 = fVar10;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar8,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (self_00->mFGFilled == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
    UIFilledSprite_set_fillAmount_12112cc(self_00->mFGFilled,self_00->mStepValue,(void *)0x0);
  }
  else {
    pvVar7 = self_00->foreground;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (self_00->mFGTrans == (void *)0x0) goto code_r0x012ff4c8;
      RVar14.component1 = fStack_58;
      RVar14.component0 = fVar11;
      RVar14.component2 = 0.0;
      UnityEngine_Transform_set_localScale_2516e0c(self_00->mFGTrans,RVar14,(void *)0x0);
      pUVar9 = self_00->mFGWidget;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
      if (bVar4) {
        pUVar9 = self_00->mFGWidget;
        if (pUVar9 == (UIWidget *)0x0) goto code_r0x012ff4c8;
        if (fVar13 <= fVar2) {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,true,(void *)0x0);
          pUVar9 = self_00->mFGWidget;
          if (pUVar9 == (UIWidget *)0x0) goto code_r0x012ff4c8;
          (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,*(undefined8 *)(*(long *)pUVar9 + 0x1a0));
        }
      }
    }
  }
  pvVar7 = self_00->thumb;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (self_00->thumb == (void *)0x0) goto code_r0x012ff4c8;
    RVar14 = UnityEngine_Transform_get_localPosition_2515e38(self_00->thumb,(void *)0x0);
    value.component2 = RVar14.component2;
    fStack_54 = RVar14.component0;
    pUVar8 = self_00->mFGFilled;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar8,(void *)0x0,(void *)0x0);
    if (bVar4) {
      pUVar8 = self_00->mFGFilled;
      if (pUVar8 == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
      if (*(int *)&pUVar8->field_0xd8 == 1) {
        if (pUVar8->mInvert != false) {
          fStack_58 = (self_00->fullSize).component1 - fStack_58;
        }
      }
      else {
        fStack_58 = RVar14.component1;
        if (*(int *)&pUVar8->field_0xd8 == 0) {
          if (pUVar8->mInvert != false) {
            fVar11 = (self_00->fullSize).component0 - fVar11;
          }
          goto code_r0x012ff3c0;
        }
      }
    }
    else if (*(int *)&self_00->field_0x40 == 0) {
code_r0x012ff3c0:
      fStack_58 = RVar14.component1;
      fStack_54 = fVar11;
    }
    if (self_00->thumb == (void *)0x0) goto code_r0x012ff4c8;
    value.component1 = fStack_58;
    value.component0 = fStack_54;
    UnityEngine_Transform_set_localPosition_2515ec4(self_00->thumb,value,(void *)0x0);
  }
  pvVar7 = self_00->eventReceiver;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if ((bVar4) && (uVar5 = NativeHelper_01e9be28(self_00->functionName,0), (uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar5 = NativeHelper_025e9e10(0);
    puVar3 = PTR_DAT_029b9c48;
    if ((uVar5 & 1) != 0) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9c48 + 0xb8) = self_00;
      pvVar7 = self_00->eventReceiver;
      pvVar1 = self_00->functionName;
      fStack_28 = self_00->mStepValue;
      uVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8c58,&fStack_28);
      if (pvVar7 == (void *)0x0) {
code_r0x012ff4c8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_02610a00(pvVar7,pvVar1,uVar6,1,0);
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = 0;
    }
  }
  return;
}

