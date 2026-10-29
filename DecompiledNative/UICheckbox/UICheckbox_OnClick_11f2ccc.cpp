// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnClick() { }
// Ghidra address: 012f6ccc; ELF VA: 0x11f6ccc; file offset: 0x11f2ccc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UICheckbox_OnClick_11f2ccc(UICheckbox *self,void *runtimeMethod)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  void *runtimeMethod_00;
  ulong uVar8;
  void *pvVar9;
  UISprite *pUVar10;
  UICheckbox *self_00;
  void *pvVar11;
  void *y;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  Recovered_Color color;
  undefined1 auStack_84 [4];
  
  bVar6 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  puVar4 = PTR_DAT_029b7f98;
  if (!bVar6) {
    return;
  }
  bVar6 = self->mChecked == false;
  if ((bRam0000000002b9455e & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9455e = 1;
  }
  pvVar9 = self->radioButtonRoot;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Equality_250d534(pvVar9,(void *)0x0,(void *)0x0);
  if ((((!bVar5) && (!bVar6)) && (self->optionCanBeNone == false)) && (self->mStarted != false)) {
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
    self->mChecked = bVar6;
    self->startsChecked = bVar6;
    pUVar10 = self->checkSprite;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar10,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pUVar10 = self->checkSprite;
      if (pUVar10 != (UISprite *)0x0) {
        fVar2 = 1.0;
        if (!bVar6) {
          fVar2 = 0.0;
        }
        fVar13 = *(float *)&pUVar10->field_0x28 - *(float *)&pUVar10->field_0x28;
        fVar14 = *(float *)&pUVar10->field_0x2c - *(float *)&pUVar10->field_0x2c;
        fVar15 = *(float *)&pUVar10->field_0x30 - *(float *)&pUVar10->field_0x30;
        fVar16 = *(float *)&pUVar10->field_0x34 - fVar2;
        if (_UNK_007a3b60 <= fVar16 * fVar16 + fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14)
        {
          *(float *)&pUVar10->field_0x28 = *(float *)&pUVar10->field_0x28;
          *(float *)&pUVar10->field_0x2c = *(float *)&pUVar10->field_0x2c;
          *(float *)&pUVar10->field_0x30 = *(float *)&pUVar10->field_0x30;
          *(float *)&pUVar10->field_0x34 = fVar2;
          pUVar10->field_0x58 = 1;
        }
        return;
      }
code_r0x012f6b50:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  else if (self->mChecked != bVar6) {
    pvVar9 = self->radioButtonRoot;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
    if ((bVar5) && (bVar6)) {
      if ((self->radioButtonRoot == (void *)0x0) ||
         (pvVar9 = UnityEngine_Component_GetComponentsInChildren_13cd694
                             (self->radioButtonRoot,true,*(void **)PTR_DAT_029b9a08),
         pvVar9 == (void *)0x0)) goto code_r0x012f6b50;
      if (0 < (int)*(ulong *)((long)pvVar9 + 0x18)) {
        uVar8 = *(ulong *)((long)pvVar9 + 0x18) & 0xffffffff;
        if (uVar8 != 0) {
          uVar12 = 0;
          do {
            self_00 = *(UICheckbox **)((long)pvVar9 + uVar12 * 8 + 0x20);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar5 = UnityEngine_object_op_Inequality_250c8e4(self_00,self,(void *)0x0);
            if (bVar5) {
              if (self_00 == (UICheckbox *)0x0) goto code_r0x012f6b50;
              pvVar11 = self_00->radioButtonRoot;
              y = self->radioButtonRoot;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              runtimeMethod_00 = (void *)0x0;
              bVar5 = UnityEngine_object_op_Equality_250d534(pvVar11,y,(void *)0x0);
              if (bVar5) {
                UICheckbox_Set_11f27ec(self_00,false,runtimeMethod_00);
              }
            }
            if (uVar8 - 1 == uVar12) goto code_r0x012f69e8;
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)((long)pvVar9 + 0x18));
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
code_r0x012f69e8:
    self->mChecked = bVar6;
    pUVar10 = self->checkSprite;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pUVar10,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pUVar10 = self->checkSprite;
      if (pUVar10 == (UISprite *)0x0) goto code_r0x012f6b50;
      uVar17 = *(undefined4 *)&pUVar10->field_0x30;
      uVar3 = 0;
      if (self->mChecked != false) {
        uVar3 = 0x3f800000;
      }
      pvVar9 = (void *)NativeHelper_0260e1e4(pUVar10,0);
      color.component3 = (float)uVar3;
      color.component2 = (float)uVar17;
      color.component0 = *(float *)&pUVar10->field_0x28;
      color.component1 = *(float *)&pUVar10->field_0x2c;
      TweenColor_Begin_1209c54(pvVar9,_UNK_007a3d00,color,(void *)0x0);
    }
    pvVar9 = self->eventReceiver;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
    if ((bVar5) && (uVar8 = NativeHelper_01e9be28(self->functionName,0), (uVar8 & 1) == 0)) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9a10 + 0xb8) = self;
      pvVar9 = self->eventReceiver;
      pvVar11 = self->functionName;
      auStack_84[0] = self->mChecked;
      uVar7 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_84);
      if (pvVar9 == (void *)0x0) goto code_r0x012f6b50;
      NativeHelper_02610a00(pvVar9,pvVar11,uVar7,1,0);
    }
    pvVar9 = self->checkAnimation;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
    if (bVar5) {
      uVar1 = 0xffffffff;
      if (bVar6) {
        uVar1 = 1;
      }
      ActiveAnimation_Play_11fdd10(self->checkAnimation,(void *)(ulong)uVar1,(void *)0x0);
    }
  }
  return;
}

