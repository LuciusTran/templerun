// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_sliderValue(float value) { }
// Ghidra address: 012ff0b8; ELF VA: 0x11ff0b8; file offset: 0x11fb0b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x012ff154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UISlider_set_sliderValue_11fb0b8(UISlider *self,float value,void *runtimeMethod)

{
  void *pvVar1;
  float fVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *extraout_x1;
  UIFilledSprite *pUVar8;
  UIWidget *pUVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  Recovered_Vector3 RVar14;
  Recovered_Vector3 value_00;
  float fStack_58;
  float fStack_54;
  float fStack_28;
  undefined4 uStack_24;
  
  pvVar7 = (void *)0x0;
  if ((bRam0000000002b945b3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029b9c48);
    bRam0000000002b945b3 = 1;
    pvVar7 = extraout_x1;
  }
  if (self->mInitDone == false) {
    UISlider_Init_11fb4cc(self,pvVar7);
  }
  fVar2 = _UNK_007a3d38;
  if (value < 0.0) {
    value = 0.0;
  }
  fVar12 = 0.0;
  if (_UNK_007a3d38 <= value) {
    fVar12 = value;
  }
  self->rawValue = fVar12;
  if (1 < self->numberOfSteps) {
    fVar12 = fVar12 * (float)(self->numberOfSteps + -1);
    dVar11 = (double)NativeHelper_028614b0((double)fVar12,&fStack_28);
    if (0.0 <= fVar12) {
      if (dVar11 == 0.5) {
        fVar13 = 1.0;
        goto code_r0x012ff1bc;
      }
      fVar12 = (float)(int)(fVar12 + 0.5);
    }
    else if (dVar11 == -0.5) {
      fVar13 = -1.0;
code_r0x012ff1bc:
      fVar12 = (float)(double)CONCAT44(uStack_24,fStack_28);
      if (((long)(double)CONCAT44(uStack_24,fStack_28) & 1U) != 0) {
        fVar12 = fVar12 + fVar13;
      }
    }
    else {
      fVar12 = (float)(int)(fVar12 + -0.5);
    }
    fVar12 = fVar12 / (float)(self->numberOfSteps + -1);
  }
  puVar3 = PTR_DAT_029b7f98;
  if (self->mStepValue == fVar12) {
    return;
  }
  self->mStepValue = fVar12;
  fVar10 = (self->fullSize).component0;
  fStack_58 = (self->fullSize).component1;
  pUVar8 = self->mFGFilled;
  fVar13 = fVar12 * fVar10;
  if (*(int *)&self->field_0x40 != 0) {
    fStack_58 = fVar12 * fStack_58;
    fVar13 = fVar10;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar8,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (self->mFGFilled == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
    UIFilledSprite_set_fillAmount_12112cc(self->mFGFilled,self->mStepValue,(void *)0x0);
  }
  else {
    pvVar7 = self->foreground;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (self->mFGTrans == (void *)0x0) goto code_r0x012ff4c8;
      RVar14.component1 = fStack_58;
      RVar14.component0 = fVar13;
      RVar14.component2 = 0.0;
      UnityEngine_Transform_set_localScale_2516e0c(self->mFGTrans,RVar14,(void *)0x0);
      pUVar9 = self->mFGWidget;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
      if (bVar4) {
        pUVar9 = self->mFGWidget;
        if (pUVar9 == (UIWidget *)0x0) goto code_r0x012ff4c8;
        if (fVar12 <= fVar2) {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,true,(void *)0x0);
          pUVar9 = self->mFGWidget;
          if (pUVar9 == (UIWidget *)0x0) goto code_r0x012ff4c8;
          (**(code **)(*(long *)pUVar9 + 0x198))(pUVar9,*(undefined8 *)(*(long *)pUVar9 + 0x1a0));
        }
      }
    }
  }
  pvVar7 = self->thumb;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (self->thumb == (void *)0x0) goto code_r0x012ff4c8;
    RVar14 = UnityEngine_Transform_get_localPosition_2515e38(self->thumb,(void *)0x0);
    value_00.component2 = RVar14.component2;
    fStack_54 = RVar14.component0;
    pUVar8 = self->mFGFilled;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pUVar8,(void *)0x0,(void *)0x0);
    if (bVar4) {
      pUVar8 = self->mFGFilled;
      if (pUVar8 == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
      if (*(int *)&pUVar8->field_0xd8 == 1) {
        if (pUVar8->mInvert != false) {
          fStack_58 = (self->fullSize).component1 - fStack_58;
        }
      }
      else {
        fStack_58 = RVar14.component1;
        if (*(int *)&pUVar8->field_0xd8 == 0) {
          if (pUVar8->mInvert != false) {
            fVar13 = (self->fullSize).component0 - fVar13;
          }
          goto code_r0x012ff3c0;
        }
      }
    }
    else if (*(int *)&self->field_0x40 == 0) {
code_r0x012ff3c0:
      fStack_58 = RVar14.component1;
      fStack_54 = fVar13;
    }
    if (self->thumb == (void *)0x0) goto code_r0x012ff4c8;
    value_00.component1 = fStack_58;
    value_00.component0 = fStack_54;
    UnityEngine_Transform_set_localPosition_2515ec4(self->thumb,value_00,(void *)0x0);
  }
  pvVar7 = self->eventReceiver;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if ((bVar4) && (uVar5 = NativeHelper_01e9be28(self->functionName,0), (uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar5 = NativeHelper_025e9e10(0);
    puVar3 = PTR_DAT_029b9c48;
    if ((uVar5 & 1) != 0) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9c48 + 0xb8) = self;
      pvVar7 = self->eventReceiver;
      pvVar1 = self->functionName;
      fStack_28 = self->mStepValue;
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

