// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 012ff804; ELF VA: 0x11ff804; file offset: 0x11fb804
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x012ff154) */
/* WARNING: Removing unreachable block (ram,0x012ff204) */
/* WARNING: Removing unreachable block (ram,0x012ff208) */
/* WARNING: Removing unreachable block (ram,0x012ff20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UISlider_Start_11fb804(UISlider *self,void *runtimeMethod)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  UIEventListener *pUVar6;
  long *plVar7;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar8;
  UIFilledSprite *pUVar9;
  UIWidget *pUVar10;
  void *pvVar11;
  void *pvVar12;
  double unaff_x23;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 value;
  float fStack_58;
  float fStack_54;
  
  puVar2 = PTR_DAT_029b7f80;
  if ((bRam0000000002b945b1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b9b78);
    NativeHelper_011df0b4(PTR_DAT_029b99a0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9c70);
    NativeHelper_011df0b4(PTR_DAT_029b9c78);
    NativeHelper_011df0b4(PTR_DAT_029b9c40);
    bRam0000000002b945b1 = 1;
    runtimeMethod = extraout_x1_00;
  }
  UISlider_Init_11fb4cc(self,runtimeMethod);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar5 = NativeHelper_025e9e10(0);
  puVar2 = PTR_DAT_029b7f98;
  if ((uVar5 & 1) != 0) {
    pvVar11 = self->thumb;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if (self->thumb == (void *)0x0) goto LAB_012ffa30;
      pvVar11 = UnityEngine_Component_GetComponent_13ccba8(self->thumb,*(void **)PTR_DAT_029b99a0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar2);
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
      if (bVar3) {
        if (self->thumb == (void *)0x0) {
LAB_012ffa30:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        pvVar11 = (void *)NativeHelper_0260e1e4(self->thumb,0);
        pUVar6 = UIEventListener_Get_1205acc(pvVar11,(void *)0x0);
        puVar2 = PTR_DAT_029b9b78;
        if (pUVar6 == (UIEventListener *)0x0) goto LAB_012ffa30;
        pvVar12 = pUVar6->onPress;
        pvVar11 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9b78);
        UIEventListener_BoolDelegate_BoolDelegate_1205c74
                  (pvVar11,self,*(void **)PTR_DAT_029b9c78,(void *)0x0);
        plVar7 = (long *)NativeHelper_02041514(pvVar12,pvVar11,0);
        if (plVar7 == (long *)0x0) {
          pUVar6->onPress = (void *)0x0;
        }
        else {
          lVar8 = *(long *)puVar2;
          if ((*plVar7 != lVar8) || (pUVar6->onPress = plVar7, *plVar7 != lVar8)) goto LAB_012ffa0c;
        }
        puVar2 = PTR_DAT_029b9c40;
        pvVar12 = pUVar6->onDrag;
        pvVar11 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9c40);
        UIEventListener_VectorDelegate_VectorDelegate_1205f24
                  (pvVar11,self,*(void **)PTR_DAT_029b9c70,(void *)0x0);
        plVar7 = (long *)NativeHelper_02041514(pvVar12,pvVar11,0);
        if (plVar7 == (long *)0x0) {
          pUVar6->onDrag = (void *)0x0;
        }
        else {
          lVar8 = *(long *)puVar2;
          if ((*plVar7 != lVar8) || (pUVar6->onDrag = plVar7, *plVar7 != lVar8)) {
LAB_012ffa0c:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df678();
          }
        }
      }
    }
  }
  fVar14 = self->rawValue;
  pvVar11 = (void *)0x1;
  if ((bRam0000000002b945b3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029b9c48);
    bRam0000000002b945b3 = 1;
    pvVar11 = extraout_x1;
  }
  if (self->mInitDone == false) {
    UISlider_Init_11fb4cc(self,pvVar11);
  }
  fVar1 = _UNK_007a3d38;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  fVar16 = 0.0;
  if (_UNK_007a3d38 <= fVar14) {
    fVar16 = fVar14;
  }
  self->rawValue = fVar16;
  if (1 < self->numberOfSteps) {
    fVar16 = fVar16 * (float)(self->numberOfSteps + -1);
    dVar15 = (double)NativeHelper_028614b0((double)fVar16,&stack0xffffffffffffffd8);
    if (0.0 <= fVar16) {
      if (dVar15 == 0.5) {
        fVar14 = 1.0;
        goto code_r0x012ff1bc;
      }
      fVar16 = (float)(int)(fVar16 + 0.5);
    }
    else if (dVar15 == -0.5) {
      fVar14 = -1.0;
code_r0x012ff1bc:
      fVar16 = (float)unaff_x23;
      if (((long)unaff_x23 & 1U) != 0) {
        fVar16 = (float)unaff_x23 + fVar14;
      }
    }
    else {
      fVar16 = (float)(int)(fVar16 + -0.5);
    }
    fVar16 = fVar16 / (float)(self->numberOfSteps + -1);
  }
  puVar2 = PTR_DAT_029b7f98;
  self->mStepValue = fVar16;
  fVar13 = (self->fullSize).component0;
  fStack_58 = (self->fullSize).component1;
  pUVar9 = self->mFGFilled;
  fVar14 = fVar16 * fVar13;
  if (*(int *)&self->field_0x40 != 0) {
    fStack_58 = fVar16 * fStack_58;
    fVar14 = fVar13;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (self->mFGFilled == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
    UIFilledSprite_set_fillAmount_12112cc(self->mFGFilled,self->mStepValue,(void *)0x0);
  }
  else {
    pvVar11 = self->foreground;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if (self->mFGTrans == (void *)0x0) goto code_r0x012ff4c8;
      RVar17.component1 = fStack_58;
      RVar17.component0 = fVar14;
      RVar17.component2 = 0.0;
      UnityEngine_Transform_set_localScale_2516e0c(self->mFGTrans,RVar17,(void *)0x0);
      pUVar10 = self->mFGWidget;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar10,(void *)0x0,(void *)0x0);
      if (bVar3) {
        pUVar10 = self->mFGWidget;
        if (pUVar10 == (UIWidget *)0x0) goto code_r0x012ff4c8;
        if (fVar16 <= fVar1) {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
          pUVar10 = self->mFGWidget;
          if (pUVar10 == (UIWidget *)0x0) goto code_r0x012ff4c8;
          (**(code **)(*(long *)pUVar10 + 0x198))(pUVar10,*(undefined8 *)(*(long *)pUVar10 + 0x1a0))
          ;
        }
      }
    }
  }
  pvVar11 = self->thumb;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (self->thumb == (void *)0x0) goto code_r0x012ff4c8;
    RVar17 = UnityEngine_Transform_get_localPosition_2515e38(self->thumb,(void *)0x0);
    value.component2 = RVar17.component2;
    fStack_54 = RVar17.component0;
    pUVar9 = self->mFGFilled;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
    if (bVar3) {
      pUVar9 = self->mFGFilled;
      if (pUVar9 == (UIFilledSprite *)0x0) goto code_r0x012ff4c8;
      if (*(int *)&pUVar9->field_0xd8 == 1) {
        if (pUVar9->mInvert != false) {
          fStack_58 = (self->fullSize).component1 - fStack_58;
        }
      }
      else {
        fStack_58 = RVar17.component1;
        if (*(int *)&pUVar9->field_0xd8 == 0) {
          if (pUVar9->mInvert != false) {
            fVar14 = (self->fullSize).component0 - fVar14;
          }
          goto code_r0x012ff3c0;
        }
      }
    }
    else if (*(int *)&self->field_0x40 == 0) {
code_r0x012ff3c0:
      fStack_58 = RVar17.component1;
      fStack_54 = fVar14;
    }
    if (self->thumb == (void *)0x0) goto code_r0x012ff4c8;
    value.component1 = fStack_58;
    value.component0 = fStack_54;
    UnityEngine_Transform_set_localPosition_2515ec4(self->thumb,value,(void *)0x0);
  }
  pvVar11 = self->eventReceiver;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
  if ((bVar3) && (uVar5 = NativeHelper_01e9be28(self->functionName,0), (uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar5 = NativeHelper_025e9e10(0);
    puVar2 = PTR_DAT_029b9c48;
    if ((uVar5 & 1) != 0) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9c48 + 0xb8) = self;
      pvVar11 = self->eventReceiver;
      pvVar12 = self->functionName;
      uVar4 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8c58,&stack0xffffffffffffffd8);
      if (pvVar11 == (void *)0x0) {
code_r0x012ff4c8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_02610a00(pvVar11,pvVar12,uVar4,1,0);
      **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    }
  }
  return;
}

