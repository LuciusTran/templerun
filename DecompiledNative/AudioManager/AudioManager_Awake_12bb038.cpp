// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013bf038; ELF VA: 0x12bf038; file offset: 0x12bb038
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x012ff154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AudioManager_Awake_12bb038(AudioManager *self,void *runtimeMethod)

{
  void *pvVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  UISlider *self_00;
  void *pvVar8;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  UIFilledSprite *pUVar9;
  UIWidget *pUVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  Recovered_Vector3 RVar15;
  Recovered_Vector3 value;
  float fStack_58;
  float fStack_54;
  float fStack_28;
  undefined4 uStack_24;
  
  puVar4 = PTR_DAT_029bf698;
  puVar3 = PTR_DAT_029bf690;
  if ((bRam0000000002b94e44 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf690);
    NativeHelper_011df0b4(PTR_DAT_029bf698);
    bRam0000000002b94e44 = 1;
  }
  fVar12 = UnityEngine_PlayerPrefs_GetFloat_2507930(*(void **)puVar4,0.75,(void *)0x0);
  AudioManager_set_SoundVolume_12babdc(self,fVar12,runtimeMethod_00);
  fVar12 = UnityEngine_PlayerPrefs_GetFloat_2507930(*(void **)puVar3,0.5,(void *)0x0);
  AudioManager_set_MusicVolume_12bab60(self,fVar12,runtimeMethod_01);
  if (self->SoundVolumeSlider == (UISlider *)0x0) {
LAB_013bf0e8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  UISlider_set_sliderValue_11fb0b8(self->SoundVolumeSlider,self->_SoundVolume,(void *)0x0);
  self_00 = self->MusicVolumeSlider;
  if (self_00 == (UISlider *)0x0) goto LAB_013bf0e8;
  fVar12 = self->_MusicVolume;
  pvVar8 = (void *)0x0;
  if ((bRam0000000002b945b3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029b9c48);
    bRam0000000002b945b3 = 1;
    pvVar8 = extraout_x1;
  }
  if (self_00->mInitDone == false) {
    UISlider_Init_11fb4cc(self_00,pvVar8);
  }
  fVar2 = _UNK_007a3d38;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  fVar14 = 0.0;
  if (_UNK_007a3d38 <= fVar12) {
    fVar14 = fVar12;
  }
  self_00->rawValue = fVar14;
  if (1 < self_00->numberOfSteps) {
    fVar14 = fVar14 * (float)(self_00->numberOfSteps + -1);
    dVar13 = (double)NativeHelper_028614b0((double)fVar14,&fStack_28);
    if (0.0 <= fVar14) {
      if (dVar13 == 0.5) {
        fVar12 = 1.0;
        goto code_r0x012ff1bc;
      }
      fVar14 = (float)(int)(fVar14 + 0.5);
    }
    else if (dVar13 == -0.5) {
      fVar12 = -1.0;
code_r0x012ff1bc:
      fVar14 = (float)(double)CONCAT44(uStack_24,fStack_28);
      if (((long)(double)CONCAT44(uStack_24,fStack_28) & 1U) != 0) {
        fVar14 = fVar14 + fVar12;
      }
    }
    else {
      fVar14 = (float)(int)(fVar14 + -0.5);
    }
    fVar14 = fVar14 / (float)(self_00->numberOfSteps + -1);
  }
  puVar3 = PTR_DAT_029b7f98;
  if (self_00->mStepValue == fVar14) {
    return;
  }
  self_00->mStepValue = fVar14;
  fVar11 = (self_00->fullSize).component0;
  fStack_58 = (self_00->fullSize).component1;
  pUVar9 = self_00->mFGFilled;
  fVar12 = fVar14 * fVar11;
  if (*(int *)&self_00->field_0x40 != 0) {
    fStack_58 = fVar14 * fStack_58;
    fVar12 = fVar11;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
  if (bVar5) {
    if (self_00->mFGFilled == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
    UIFilledSprite_set_fillAmount_12112cc(self_00->mFGFilled,self_00->mStepValue,(void *)0x0);
  }
  else {
    pvVar8 = self_00->foreground;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
    if (bVar5) {
      if (self_00->mFGTrans == (void *)0x0) goto code_r0x012ff4c8;
      RVar15.component1 = fStack_58;
      RVar15.component0 = fVar12;
      RVar15.component2 = 0.0;
      UnityEngine_Transform_set_localScale_2516e0c(self_00->mFGTrans,RVar15,(void *)0x0);
      pUVar10 = self_00->mFGWidget;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar10,(void *)0x0,(void *)0x0);
      if (bVar5) {
        pUVar10 = self_00->mFGWidget;
        if (pUVar10 == (UIWidget *)0x0) goto code_r0x012ff4c8;
        if (fVar14 <= fVar2) {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
          pUVar10 = self_00->mFGWidget;
          if (pUVar10 == (UIWidget *)0x0) goto code_r0x012ff4c8;
          (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,*(undefined8 *)(*(long *)pUVar10 + 0x1a0))
          ;
        }
      }
    }
  }
  pvVar8 = self_00->thumb;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
  if (bVar5) {
    if (self_00->thumb == (void *)0x0) goto code_r0x012ff4c8;
    RVar15 = UnityEngine_Transform_get_localPosition_2515e38(self_00->thumb,(void *)0x0);
    value.component2 = RVar15.component2;
    fStack_54 = RVar15.component0;
    pUVar9 = self_00->mFGFilled;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pUVar9 = self_00->mFGFilled;
      if (pUVar9 == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
      if (*(int *)&pUVar9->field_0xd8 == 1) {
        if (pUVar9->mInvert != false) {
          fStack_58 = (self_00->fullSize).component1 - fStack_58;
        }
      }
      else {
        fStack_58 = RVar15.component1;
        if (*(int *)&pUVar9->field_0xd8 == 0) {
          if (pUVar9->mInvert != false) {
            fVar12 = (self_00->fullSize).component0 - fVar12;
          }
          goto code_r0x012ff3c0;
        }
      }
    }
    else if (*(int *)&self_00->field_0x40 == 0) {
code_r0x012ff3c0:
      fStack_58 = RVar15.component1;
      fStack_54 = fVar12;
    }
    if (self_00->thumb == (void *)0x0) goto code_r0x012ff4c8;
    value.component1 = fStack_58;
    value.component0 = fStack_54;
    UnityEngine_Transform_set_localPosition_2515ec4(self_00->thumb,value,(void *)0x0);
  }
  pvVar8 = self_00->eventReceiver;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
  if ((bVar5) && (uVar6 = NativeHelper_01e9be28(self_00->functionName,0), (uVar6 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar6 = NativeHelper_025e9e10(0);
    puVar3 = PTR_DAT_029b9c48;
    if ((uVar6 & 1) != 0) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9c48 + 0xb8) = self_00;
      pvVar8 = self_00->eventReceiver;
      pvVar1 = self_00->functionName;
      fStack_28 = self_00->mStepValue;
      uVar7 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8c58,&fStack_28);
      if (pvVar8 == (void *)0x0) {
code_r0x012ff4c8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_02610a00(pvVar8,pvVar1,uVar7,1,0);
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = 0;
    }
  }
  return;
}

