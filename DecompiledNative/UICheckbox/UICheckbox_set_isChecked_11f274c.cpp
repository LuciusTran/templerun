// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_isChecked(bool value) { }
// Ghidra address: 012f674c; ELF VA: 0x11f674c; file offset: 0x11f274c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UICheckbox_set_isChecked_11f274c(UICheckbox *self,bool value,void *runtimeMethod)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  void *runtimeMethod_00;
  ulong uVar7;
  void *pvVar8;
  UISprite *pUVar9;
  UICheckbox *self_00;
  void *pvVar10;
  void *y;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  Recovered_Color color;
  undefined1 auStack_84 [4];
  
  puVar4 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9455e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9455e = 1;
  }
  pvVar8 = self->radioButtonRoot;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Equality_250d534(pvVar8,(void *)0x0,(void *)0x0);
  if ((((!bVar5) && (!value)) && (self->optionCanBeNone == false)) && (self->mStarted != false)) {
    return;
  }
  if ((bRam0000000002b94561 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b9a08);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9a10);
    bRam0000000002b94561 = 1;
  }
  puVar4 = PTR_DAT_029b7f98;
  if (self->mStarted == false) {
    self->mChecked = value;
    self->startsChecked = value;
    pUVar9 = self->checkSprite;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pUVar9 = self->checkSprite;
      if (pUVar9 != (UISprite *)0x0) {
        fVar2 = 1.0;
        if (!value) {
          fVar2 = 0.0;
        }
        fVar12 = *(float *)&pUVar9->field_0x28 - *(float *)&pUVar9->field_0x28;
        fVar13 = *(float *)&pUVar9->field_0x2c - *(float *)&pUVar9->field_0x2c;
        fVar14 = *(float *)&pUVar9->field_0x30 - *(float *)&pUVar9->field_0x30;
        fVar15 = *(float *)&pUVar9->field_0x34 - fVar2;
        if (_UNK_007a3b60 <= fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13)
        {
          *(float *)&pUVar9->field_0x28 = *(float *)&pUVar9->field_0x28;
          *(float *)&pUVar9->field_0x2c = *(float *)&pUVar9->field_0x2c;
          *(float *)&pUVar9->field_0x30 = *(float *)&pUVar9->field_0x30;
          *(float *)&pUVar9->field_0x34 = fVar2;
          pUVar9->field_0x58 = 1;
        }
        return;
      }
code_r0x012f6b50:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  else if (self->mChecked != value) {
    pvVar8 = self->radioButtonRoot;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
    if ((bVar5) && (value)) {
      if ((self->radioButtonRoot == (void *)0x0) ||
         (pvVar8 = UnityEngine_Component_GetComponentsInChildren_13cd694
                             (self->radioButtonRoot,true,*(void **)PTR_DAT_029b9a08),
         pvVar8 == (void *)0x0)) goto code_r0x012f6b50;
      if (0 < (int)*(ulong *)((long)pvVar8 + 0x18)) {
        uVar7 = *(ulong *)((long)pvVar8 + 0x18) & 0xffffffff;
        if (uVar7 != 0) {
          uVar11 = 0;
          do {
            self_00 = *(UICheckbox **)((long)pvVar8 + uVar11 * 8 + 0x20);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar5 = UnityEngine_object_op_Inequality_250c8e4(self_00,self,(void *)0x0);
            if (bVar5) {
              if (self_00 == (UICheckbox *)0x0) goto code_r0x012f6b50;
              pvVar10 = self_00->radioButtonRoot;
              y = self->radioButtonRoot;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              runtimeMethod_00 = (void *)0x0;
              bVar5 = UnityEngine_object_op_Equality_250d534(pvVar10,y,(void *)0x0);
              if (bVar5) {
                UICheckbox_Set_11f27ec(self_00,false,runtimeMethod_00);
              }
            }
            if (uVar7 - 1 == uVar11) goto code_r0x012f69e8;
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)((long)pvVar8 + 0x18));
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
code_r0x012f69e8:
    self->mChecked = value;
    pUVar9 = self->checkSprite;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pUVar9 = self->checkSprite;
      if (pUVar9 == (UISprite *)0x0) goto code_r0x012f6b50;
      uVar16 = *(undefined4 *)&pUVar9->field_0x30;
      uVar3 = 0;
      if (self->mChecked != false) {
        uVar3 = 0x3f800000;
      }
      pvVar8 = (void *)NativeHelper_0260e1e4(pUVar9,0);
      color.component3 = (float)uVar3;
      color.component2 = (float)uVar16;
      color.component0 = *(float *)&pUVar9->field_0x28;
      color.component1 = *(float *)&pUVar9->field_0x2c;
      TweenColor_Begin_1209c54(pvVar8,_UNK_007a3d00,color,(void *)0x0);
    }
    pvVar8 = self->eventReceiver;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
    if ((bVar5) && (uVar7 = NativeHelper_01e9be28(self->functionName,0), (uVar7 & 1) == 0)) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9a10 + 0xb8) = self;
      pvVar8 = self->eventReceiver;
      pvVar10 = self->functionName;
      auStack_84[0] = self->mChecked;
      uVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_84);
      if (pvVar8 == (void *)0x0) goto code_r0x012f6b50;
      NativeHelper_02610a00(pvVar8,pvVar10,uVar6,1,0);
    }
    pvVar8 = self->checkAnimation;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
    if (bVar5) {
      uVar1 = 0xffffffff;
      if (value) {
        uVar1 = 1;
      }
      ActiveAnimation_Play_11fdd10(self->checkAnimation,(void *)(ulong)uVar1,(void *)0x0);
    }
  }
  return;
}

