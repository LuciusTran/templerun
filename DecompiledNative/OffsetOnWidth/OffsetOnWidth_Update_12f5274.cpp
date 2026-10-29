// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 013f9274; ELF VA: 0x12f9274; file offset: 0x12f5274
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void OffsetOnWidth_Update_12f5274(OffsetOnWidth *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  UIPanel *pUVar4;
  void *pvVar5;
  void *extraout_x1;
  UILabel *pUVar6;
  float fVar7;
  float fVar8;
  Recovered_Vector3 RVar9;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b95039 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95039 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  pUVar6 = self->Label;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(pUVar6,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return;
  }
  if (self->Label != (UILabel *)0x0) {
    pUVar4 = UIWidget_get_panel_12072fc((UIWidget *)self->Label,(void *)0x0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar3);
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pUVar4,(void *)0x0,(void *)0x0);
    if (bVar2) {
      return;
    }
    if ((self->Label != (UILabel *)0x0) &&
       (pUVar4 = UIWidget_get_panel_12072fc((UIWidget *)self->Label,(void *)0x0),
       pUVar4 != (UIPanel *)0x0)) {
      bVar2 = UnityEngine_Behaviour_get_enabled_25096f0(pUVar4,(void *)0x0);
      if (!bVar2) {
        return;
      }
      if ((self->Label != (UILabel *)0x0) &&
         (pvVar5 = (void *)NativeHelper_0260e1a8(self->Label,0), pvVar5 != (void *)0x0)) {
        UnityEngine_Transform_get_localPosition_2515e38(pvVar5,(void *)0x0);
        RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar5,(void *)0x0);
        pUVar6 = self->Label;
        if (pUVar6 != (UILabel *)0x0) {
          fVar7 = (float)(**(code **)(*(long *)pUVar6 + 0x1c8))
                                   (RVar9.component0,RVar9.component1,RVar9.component2,pUVar6,
                                    *(undefined8 *)(*(long *)pUVar6 + 0x1d0));
          if (self->Label != (UILabel *)0x0) {
            bVar2 = self->OffsetToRight;
            fVar7 = RVar9.component0 * fVar7;
            fVar8 = fVar7 * 0.5;
            if (*(int *)&self->Label->field_0x38 != 4) {
              fVar8 = fVar7;
            }
            pvVar5 = (void *)NativeHelper_0260e1a8(self,0);
            if (pvVar5 != (void *)0x0) {
              RVar9 = UnityEngine_Transform_get_localPosition_2515e38(pvVar5,(void *)0x0);
              if (bVar2 == false) {
                fVar8 = -fVar8;
              }
              if (RVar9.component0 == fVar8) {
                return;
              }
              lVar3 = NativeHelper_0260e1a8
                                (RVar9.component0,RVar9.component1,RVar9.component2,self,0);
              if (lVar3 != 0) {
                if (pcRam0000000002b9d2c0 == (code *)0x0) {
                  pcRam0000000002b9d2c0 = (code *)NativeHelper_011df070(&UNK_007b1453,0);
                }
                (*pcRam0000000002b9d2c0)(lVar3,&stack0xffffffffffffffd0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

