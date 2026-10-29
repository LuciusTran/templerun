// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 012f6b54; ELF VA: 0x11f6b54; file offset: 0x11f2b54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UICheckbox_Awake_11f2b54(UICheckbox *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  UISprite *x;
  float value;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9455f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9455f = 1;
  }
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  self->mTrans = pvVar3;
  x = self->checkSprite;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->checkSprite == (UISprite *)0x0) goto LAB_012f6c38;
    value = 0.0;
    if (self->startsChecked != false) {
      value = 1.0;
    }
    UIWidget_set_alpha_1206ebc((UIWidget *)self->checkSprite,value,(void *)0x0);
  }
  if (self->option != false) {
    self->option = false;
    pvVar3 = self->radioButtonRoot;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Equality_250d534(pvVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (self->mTrans == (void *)0x0) {
LAB_012f6c38:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar3 = UnityEngine_Transform_get_parent_2516614(self->mTrans,(void *)0x0);
      self->radioButtonRoot = pvVar3;
    }
  }
  return;
}

