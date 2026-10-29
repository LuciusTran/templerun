// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AdjustBoxCollider() { }
// Ghidra address: 0140adb8; ELF VA: 0x130adb8; file offset: 0x1306db8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TR1LocalizeStringMainMenuButtons_AdjustBoxCollider_1306db8
               (TR1LocalizeStringMainMenuButtons *self,void *runtimeMethod)

{
  undefined *puVar1;
  UILabel *pUVar2;
  void *pvVar3;
  float fVar4;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Vector3 value_01;
  Recovered_Vector3 value_02;
  Recovered_Vector3 value_03;
  
  pvVar3 = self->collider;
  if (cRam0000000002b94510 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029b9368);
    cRam0000000002b94510 = '\x01';
  }
  puVar1 = PTR_DAT_029b9368;
  if (pvVar3 != (void *)0x0) {
    fVar4 = (*(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8))->component1;
    UnityEngine_BoxCollider_set_center_2549184
              (pvVar3,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0);
    pUVar2 = self->m_originalFont;
    if (pUVar2 != (UILabel *)0x0) {
      pvVar3 = self->collider;
      value.component0 =
           (**(code **)(*(long *)pUVar2 + 0x1c8))(pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
      pUVar2 = self->m_originalFont;
      if (pUVar2 != (UILabel *)0x0) {
        (**(code **)(*(long *)pUVar2 + 0x1c8))(pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
        if (pvVar3 != (void *)0x0) {
          value.component1 = fVar4;
          value.component2 = 0.0;
          UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value,(void *)0x0);
          pUVar2 = self->m_originalFont;
          if (pUVar2 != (UILabel *)0x0) {
            if (*(int *)&pUVar2->field_0x38 == 4) {
              pvVar3 = self->collider;
              if (cRam0000000002b94510 == '\0') {
                NativeHelper_011df0b4(PTR_DAT_029b9368);
                cRam0000000002b94510 = '\x01';
              }
              if (pvVar3 == (void *)0x0) goto LAB_0140b038;
              fVar4 = (*(Recovered_Vector3 **)(*(long *)puVar1 + 0xb8))->component1;
              UnityEngine_BoxCollider_set_center_2549184
                        (pvVar3,**(Recovered_Vector3 **)(*(long *)puVar1 + 0xb8),(void *)0x0);
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
              pvVar3 = self->collider;
              value_00.component0 =
                   (**(code **)(*(long *)pUVar2 + 0x1c8))
                             (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
              (**(code **)(*(long *)pUVar2 + 0x1c8))
                        (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              if (pvVar3 == (void *)0x0) goto LAB_0140b038;
              value_00.component1 = fVar4;
              value_00.component2 = 0.0;
              UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_00,(void *)0x0);
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
            }
            if (*(int *)&pUVar2->field_0x38 == 3) {
              pvVar3 = self->collider;
              value_01.component0 =
                   (**(code **)(*(long *)pUVar2 + 0x1c8))
                             (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
              (**(code **)(*(long *)pUVar2 + 0x1c8))
                        (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              if (pvVar3 == (void *)0x0) goto LAB_0140b038;
              value_01.component1 = fVar4;
              value_01.component2 = 0.0;
              UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_01,(void *)0x0);
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
              pvVar3 = self->collider;
              fVar4 = (float)(**(code **)(*(long *)pUVar2 + 0x1c8))
                                       (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              if (pvVar3 == (void *)0x0) goto LAB_0140b038;
              value_02.component0 = fVar4 * 0.5;
              value_02.component1 = 0.0;
              value_02.component2 = 0.0;
              fVar4 = 0.0;
              UnityEngine_BoxCollider_set_center_2549184(pvVar3,value_02,(void *)0x0);
              pUVar2 = self->m_originalFont;
              if (pUVar2 == (UILabel *)0x0) goto LAB_0140b038;
            }
            if (*(int *)&pUVar2->field_0x38 != 5) {
              return;
            }
            pvVar3 = self->collider;
            value_03.component0 =
                 (**(code **)(*(long *)pUVar2 + 0x1c8))
                           (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
            pUVar2 = self->m_originalFont;
            if (pUVar2 != (UILabel *)0x0) {
              (**(code **)(*(long *)pUVar2 + 0x1c8))
                        (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
              if (pvVar3 != (void *)0x0) {
                value_03.component1 = fVar4;
                value_03.component2 = 0.0;
                UnityEngine_BoxCollider_set_size_25492bc(pvVar3,value_03,(void *)0x0);
                pUVar2 = self->m_originalFont;
                if (pUVar2 != (UILabel *)0x0) {
                  pvVar3 = self->collider;
                  (**(code **)(*(long *)pUVar2 + 0x1c8))
                            (pUVar2,*(undefined8 *)(*(long *)pUVar2 + 0x1d0));
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

