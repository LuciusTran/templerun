// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected virtual void UpdateString(string value) { }
// Ghidra address: 0140aa08; ELF VA: 0x130aa08; file offset: 0x1306a08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_UpdateString_1306a08
               (TR1LocalizeStringMainMenuButtons *self,void *value,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  UILabel *pUVar4;
  float fVar5;
  Recovered_Vector3 value_00;
  Recovered_Vector3 value_01;
  Recovered_Vector3 value_02;
  Recovered_Vector3 value_03;
  Recovered_Vector3 value_04;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950cf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950cf = 1;
    value = extraout_x1;
  }
  pUVar4 = self->m_originalFont;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,value);
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(pUVar4,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar4 = self->m_originalFont;
  pvVar3 = Strings_Txt_131380c(self->EntryText,false,(void *)0x0);
  if (pUVar4 != (UILabel *)0x0) {
    UILabel_set_text_129fea0(pUVar4,pvVar3,(void *)0x0);
    if (self->m_originalFont != (UILabel *)0x0) {
      NativeHelper_0255c100(self,self->m_originalFont->mText,0);
      TR1LocalizeStringMainMenuButtons_AdjustVariablesForRussian_1306ad8(self,runtimeMethod_00);
      TR1LocalizeStringMainMenuButtons_ConvertTextToUpperCase_1306b84(self,runtimeMethod_01);
      TR1LocalizeStringMainMenuButtons_AdjustLabelSize_1306bc8(self,runtimeMethod_02);
      pvVar3 = self->collider;
      if (cRam0000000002b94510 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368);
        cRam0000000002b94510 = '\x01';
      }
      puVar1 = PTR_DAT_029b9368;
      if (pvVar3 != (void *)0x0) {
        fVar5 = (*(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8))->component1;
        UnityEngine_BoxCollider_set_center_2549184
                  (pvVar3,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0);
        pUVar4 = self->m_originalFont;
        if (pUVar4 != (UILabel *)0x0) {
          pvVar3 = self->collider;
          value_00.component0 =
               (**(code **)(*(long *)pUVar4 + 0x1c8))
                         (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
          pUVar4 = self->m_originalFont;
          if (pUVar4 != (UILabel *)0x0) {
            (**(code **)(*(long *)pUVar4 + 0x1c8))(pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
            if (pvVar3 != (void *)0x0) {
              value_00.component1 = fVar5;
              value_00.component2 = 0.0;
              UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_00,(void *)0x0);
              pUVar4 = self->m_originalFont;
              if (pUVar4 != (UILabel *)0x0) {
                if (*(int *)&pUVar4->field_0x38 == 4) {
                  pvVar3 = self->collider;
                  if (cRam0000000002b94510 == '\0') {
                    NativeHelper_011df0b4(PTR_DAT_029b9368);
                    cRam0000000002b94510 = '\x01';
                  }
                  if (pvVar3 == (void *)0x0) goto LAB_0140b038;
                  fVar5 = (*(Recovered_Vector3 **)(*(long *)puVar1 + 0xb8))->component1;
                  UnityEngine_BoxCollider_set_center_2549184
                            (pvVar3,**(Recovered_Vector3 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                  pvVar3 = self->collider;
                  value_01.component0 =
                       (**(code **)(*(long *)pUVar4 + 0x1c8))
                                 (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                  (**(code **)(*(long *)pUVar4 + 0x1c8))
                            (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  if (pvVar3 == (void *)0x0) goto LAB_0140b038;
                  value_01.component1 = fVar5;
                  value_01.component2 = 0.0;
                  UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_01,(void *)0x0);
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                }
                if (*(int *)&pUVar4->field_0x38 == 3) {
                  pvVar3 = self->collider;
                  value_02.component0 =
                       (**(code **)(*(long *)pUVar4 + 0x1c8))
                                 (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                  (**(code **)(*(long *)pUVar4 + 0x1c8))
                            (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  if (pvVar3 == (void *)0x0) goto LAB_0140b038;
                  value_02.component1 = fVar5;
                  value_02.component2 = 0.0;
                  UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_02,(void *)0x0);
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                  pvVar3 = self->collider;
                  fVar5 = (float)(**(code **)(*(long *)pUVar4 + 0x1c8))
                                           (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  if (pvVar3 == (void *)0x0) goto LAB_0140b038;
                  value_03.component0 = fVar5 * 0.5;
                  value_03.component1 = 0.0;
                  value_03.component2 = 0.0;
                  fVar5 = 0.0;
                  UnityEngine_BoxCollider_set_center_2549184(pvVar3,value_03,(void *)0x0);
                  pUVar4 = self->m_originalFont;
                  if (pUVar4 == (UILabel *)0x0) goto LAB_0140b038;
                }
                if (*(int *)&pUVar4->field_0x38 != 5) {
                  return;
                }
                pvVar3 = self->collider;
                value_04.component0 =
                     (**(code **)(*(long *)pUVar4 + 0x1c8))
                               (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                pUVar4 = self->m_originalFont;
                if (pUVar4 != (UILabel *)0x0) {
                  (**(code **)(*(long *)pUVar4 + 0x1c8))
                            (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                  if (pvVar3 != (void *)0x0) {
                    value_04.component1 = fVar5;
                    value_04.component2 = 0.0;
                    UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_04,(void *)0x0);
                    pUVar4 = self->m_originalFont;
                    if (pUVar4 != (UILabel *)0x0) {
                      pvVar3 = self->collider;
                      (**(code **)(*(long *)pUVar4 + 0x1c8))
                                (pUVar4,*(undefined8 *)(*(long *)pUVar4 + 0x1d0));
                      if (pvVar3 != (void *)0x0) {
                        if (pcRam0000000002b9dd00 == (code *)0x0) {
                          pcRam0000000002b9dd00 = (code *)NativeHelper_011df070(&UNK_007b53e0,0);
                        }
                        (*pcRam0000000002b9dd00)(pvVar3,&stack0xffffffffffffffd0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0140b038:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

