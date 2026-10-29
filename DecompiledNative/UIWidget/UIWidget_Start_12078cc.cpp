// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 0130b8cc; ELF VA: 0x120b8cc; file offset: 0x12078cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIWidget_Start_12078cc(UIWidget *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  UIPanel *pUVar6;
  
  (**(code **)(*(long *)self + 0x1e8))(self,*(undefined8 *)(*(long *)self + 0x1f0));
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94616 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9a90);
    bRam0000000002b94616 = 1;
  }
  pUVar6 = self->mPanel;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(pUVar6,(void *)0x0,(void *)0x0);
  if ((bVar2) && (bVar2 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0), bVar2)) {
    lVar3 = NativeHelper_0260e1e4(self,0);
    if (lVar3 == 0) {
code_r0x0130b238:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar4 = NativeHelper_02610cd4(lVar3,0);
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)(**(code **)(*(long *)self + 0x178))
                                 (self,*(undefined8 *)(*(long *)self + 0x180));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
      if (bVar2) {
        pvVar5 = UIWidget_get_cachedTransform_12015ac(self,runtimeMethod_00);
        if (*(int *)(*(long *)PTR_DAT_029b9a90 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b9a90);
        }
        pUVar6 = UIPanel_Find_12a62c4(pvVar5,(void *)0x0);
        self->mPanel = pUVar6;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pUVar6,(void *)0x0,(void *)0x0);
        if (bVar2) {
          UIWidget_CheckLayer_12074ec(self,runtimeMethod_01);
          if (self->mPanel == (UIPanel *)0x0) goto code_r0x0130b238;
          UIPanel_AddWidget_12a423c(self->mPanel,self,(void *)0x0);
          self->mChanged = true;
        }
      }
    }
  }
  return;
}

