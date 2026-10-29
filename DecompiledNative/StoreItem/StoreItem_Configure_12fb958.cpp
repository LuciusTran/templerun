// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Configure() { }
// Ghidra address: 013ff958; ELF VA: 0x12ff958; file offset: 0x12fb958
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_Configure_12fb958(StoreItem *self,void *runtimeMethod)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *runtimeMethod_00;
  UILabel *self_00;
  undefined8 uVar4;
  
  if ((bRam0000000002b95073 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c10b0);
    bRam0000000002b95073 = 1;
    runtimeMethod = extraout_x1;
  }
  StoreItem_UpdateClass_12fbba0(self,runtimeMethod);
  pvVar3 = extraout_x1_00;
  if (*(int *)&self->field_0x24 == *(int *)&self->field_0xb4) goto LAB_013ffa8c;
  if (self->DescriptionLabel == (UILabel *)0x0) goto LAB_013ffb30;
  UILabel_set_lineWidth_12a0e8c(self->DescriptionLabel,0x14a,(void *)0x0);
  pvVar3 = extraout_x1_01;
  switch(*(undefined4 *)&self->field_0x24) {
  case 1:
    if ((self->ProgressBar == (void *)0x0) ||
       (lVar2 = NativeHelper_0260e1e4(self->ProgressBar,0), lVar2 == 0)) goto LAB_013ffb30;
    uVar4 = 1;
    goto code_r0x013ffa0c;
  case 2:
    if ((self->ProgressBar == (void *)0x0) ||
       (lVar2 = NativeHelper_0260e1e4(self->ProgressBar,0), lVar2 == 0)) goto LAB_013ffb30;
    NativeHelper_02610c54(lVar2,0,0);
    if ((self->Counter == (void *)0x0) ||
       (lVar2 = NativeHelper_0260e1e4(self->Counter,0), lVar2 == 0)) goto LAB_013ffb30;
    NativeHelper_02610c54(lVar2,1,0);
    if (self->DescriptionLabel == (UILabel *)0x0) goto LAB_013ffb30;
    UILabel_set_lineWidth_12a0e8c(self->DescriptionLabel,0x104,(void *)0x0);
    pvVar3 = extraout_x1_03;
    break;
  case 3:
  case 4:
    if ((self->ProgressBar == (void *)0x0) ||
       (lVar2 = NativeHelper_0260e1e4(self->ProgressBar,0), lVar2 == 0)) goto LAB_013ffb30;
    uVar4 = 0;
code_r0x013ffa0c:
    NativeHelper_02610c54(lVar2,uVar4,0);
    if ((self->Counter == (void *)0x0) ||
       (lVar2 = NativeHelper_0260e1e4(self->Counter,0), lVar2 == 0)) goto LAB_013ffb30;
    NativeHelper_02610c54(lVar2,0,0);
    pvVar3 = extraout_x1_02;
  }
LAB_013ffa8c:
  if (*(int *)&self->field_0x20 != *(int *)&self->LastType) {
    StoreItem_SetIcon_12fbc24(self,pvVar3);
    pvVar3 = extraout_x1_04;
  }
  StoreItem_UpdatePrice_12fbcdc(self,pvVar3);
  iVar1 = self->Price;
  pvVar3 = extraout_x1_05;
  if (iVar1 != self->LastPrice) {
    self_00 = self->CostLabel;
    if (iVar1 == 0) {
      pvVar3 = Strings_Txt_131380c(*(void **)PTR_DAT_029c10b0,false,(void *)0x0);
    }
    else {
      pvVar3 = (void *)NativeHelper_01ffa318(&self->Price,0);
    }
    if (self_00 == (UILabel *)0x0) {
LAB_013ffb30:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    UILabel_set_text_129fea0(self_00,pvVar3,(void *)0x0);
    pvVar3 = extraout_x1_06;
  }
  StoreItem_UpdateDescription_12fc418(self,pvVar3);
  StoreItem_UpdateBar_12fcde8(self,runtimeMethod_00);
  uVar4 = NEON_rev64(*(undefined8 *)&self->field_0x24,4);
  *(undefined4 *)&self->LastType = *(undefined4 *)&self->field_0x20;
  *(undefined8 *)&self->LastPrice = uVar4;
  return;
}

