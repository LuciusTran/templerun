// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 0130b8ec; ELF VA: 0x120b8ec; file offset: 0x12078ec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIWidget_Update_12078ec(UIWidget *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  UIPanel *x;
  Recovered_Vector3 RVar4;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9461b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9461b = 1;
    runtimeMethod = extraout_x1;
  }
  UIWidget_CheckLayer_12074ec(self,runtimeMethod);
  x = self->mPanel;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  pvVar3 = runtimeMethod_00;
  if (bVar2) {
    UIWidget_CreatePanel_12070d8(self,runtimeMethod_00);
    pvVar3 = extraout_x1_00;
  }
  pvVar3 = UIWidget_get_cachedTransform_12015ac(self,pvVar3);
  if (pvVar3 != (void *)0x0) {
    RVar4 = UnityEngine_Transform_get_localScale_2516d6c(pvVar3,(void *)0x0);
    fStack_2c = RVar4.component1;
    fStack_30 = RVar4.component0;
    if (RVar4.component2 == 1.0) {
      return;
    }
    pvVar3 = self->mTrans;
    if (pvVar3 != (void *)0x0) {
      uStack_28 = 0x3f800000;
      if (pcRam0000000002b9d2f0 == (code *)0x0) {
        pcRam0000000002b9d2f0 = (code *)NativeHelper_011df070(&UNK_007bef4d,0);
      }
      (*pcRam0000000002b9d2f0)(pvVar3,&fStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

