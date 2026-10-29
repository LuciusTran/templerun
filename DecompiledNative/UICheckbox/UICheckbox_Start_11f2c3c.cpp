// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 012f6c3c; ELF VA: 0x11f6c3c; file offset: 0x11f2c3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UICheckbox_Start_11f2c3c(UICheckbox *self,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  void *extraout_x1;
  void *runtimeMethod_00;
  ulong uVar9;
  void *pvVar10;
  UISprite *pUVar11;
  UICheckbox *self_00;
  void *pvVar12;
  void *y;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  Recovered_Color color;
  undefined1 auStack_84 [4];
  
  puVar5 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94560 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94560 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar10 = self->eventReceiver;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar5,runtimeMethod);
  }
  bVar7 = UnityEngine_object_op_Equality_250d534(pvVar10,(void *)0x0,(void *)0x0);
  if (bVar7) {
    pvVar10 = (void *)NativeHelper_0260e1e4(self,0);
    self->eventReceiver = pvVar10;
  }
  bVar2 = self->startsChecked;
  self->mStarted = true;
  self->mChecked = (bool)(bVar2 ^ 1);
  bVar7 = (bool)(bVar2 & 1);
  if ((bRam0000000002b94561 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b9a08);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9a10);
    bRam0000000002b94561 = 1;
  }
  puVar5 = PTR_DAT_029b7f98;
  if (self->mStarted == false) {
    self->mChecked = bVar7;
    self->startsChecked = bVar7;
    pUVar11 = self->checkSprite;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pUVar11,(void *)0x0,(void *)0x0);
    if (bVar7) {
      pUVar11 = self->checkSprite;
      if (pUVar11 != (UISprite *)0x0) {
        fVar3 = 1.0;
        if ((bVar2 & 1U) == 0) {
          fVar3 = 0.0;
        }
        fVar14 = *(float *)&pUVar11->field_0x28 - *(float *)&pUVar11->field_0x28;
        fVar15 = *(float *)&pUVar11->field_0x2c - *(float *)&pUVar11->field_0x2c;
        fVar16 = *(float *)&pUVar11->field_0x30 - *(float *)&pUVar11->field_0x30;
        fVar17 = *(float *)&pUVar11->field_0x34 - fVar3;
        if (_UNK_007a3b60 <= fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15)
        {
          *(float *)&pUVar11->field_0x28 = *(float *)&pUVar11->field_0x28;
          *(float *)&pUVar11->field_0x2c = *(float *)&pUVar11->field_0x2c;
          *(float *)&pUVar11->field_0x30 = *(float *)&pUVar11->field_0x30;
          *(float *)&pUVar11->field_0x34 = fVar3;
          pUVar11->field_0x58 = 1;
        }
        return;
      }
code_r0x012f6b50:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  else if (self->mChecked != bVar7) {
    pvVar10 = self->radioButtonRoot;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar6 = UnityEngine_object_op_Inequality_250c8e4(pvVar10,(void *)0x0,(void *)0x0);
    if ((bVar6) && ((bVar2 & 1U) != 0)) {
      if ((self->radioButtonRoot == (void *)0x0) ||
         (pvVar10 = UnityEngine_Component_GetComponentsInChildren_13cd694
                              (self->radioButtonRoot,true,*(void **)PTR_DAT_029b9a08),
         pvVar10 == (void *)0x0)) goto code_r0x012f6b50;
      if (0 < (int)*(ulong *)((long)pvVar10 + 0x18)) {
        uVar9 = *(ulong *)((long)pvVar10 + 0x18) & 0xffffffff;
        if (uVar9 != 0) {
          uVar13 = 0;
          do {
            self_00 = *(UICheckbox **)((long)pvVar10 + uVar13 * 8 + 0x20);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar6 = UnityEngine_object_op_Inequality_250c8e4(self_00,self,(void *)0x0);
            if (bVar6) {
              if (self_00 == (UICheckbox *)0x0) goto code_r0x012f6b50;
              pvVar12 = self_00->radioButtonRoot;
              y = self->radioButtonRoot;
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              runtimeMethod_00 = (void *)0x0;
              bVar6 = UnityEngine_object_op_Equality_250d534(pvVar12,y,(void *)0x0);
              if (bVar6) {
                UICheckbox_Set_11f27ec(self_00,false,runtimeMethod_00);
              }
            }
            if (uVar9 - 1 == uVar13) goto code_r0x012f69e8;
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)((long)pvVar10 + 0x18));
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
code_r0x012f69e8:
    self->mChecked = bVar7;
    pUVar11 = self->checkSprite;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pUVar11,(void *)0x0,(void *)0x0);
    if (bVar7) {
      pUVar11 = self->checkSprite;
      if (pUVar11 == (UISprite *)0x0) goto code_r0x012f6b50;
      uVar18 = *(undefined4 *)&pUVar11->field_0x30;
      uVar4 = 0;
      if (self->mChecked != false) {
        uVar4 = 0x3f800000;
      }
      pvVar10 = (void *)NativeHelper_0260e1e4(pUVar11,0);
      color.component3 = (float)uVar4;
      color.component2 = (float)uVar18;
      color.component0 = *(float *)&pUVar11->field_0x28;
      color.component1 = *(float *)&pUVar11->field_0x2c;
      TweenColor_Begin_1209c54(pvVar10,_UNK_007a3d00,color,(void *)0x0);
    }
    pvVar10 = self->eventReceiver;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar10,(void *)0x0,(void *)0x0);
    if ((bVar7) && (uVar9 = NativeHelper_01e9be28(self->functionName,0), (uVar9 & 1) == 0)) {
      **(undefined8 **)(*(long *)PTR_DAT_029b9a10 + 0xb8) = self;
      pvVar10 = self->eventReceiver;
      pvVar12 = self->functionName;
      auStack_84[0] = self->mChecked;
      uVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_84);
      if (pvVar10 == (void *)0x0) goto code_r0x012f6b50;
      NativeHelper_02610a00(pvVar10,pvVar12,uVar8,1,0);
    }
    pvVar10 = self->checkAnimation;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar10,(void *)0x0,(void *)0x0);
    if (bVar7) {
      uVar1 = 0xffffffff;
      if ((bVar2 & 1U) != 0) {
        uVar1 = 1;
      }
      ActiveAnimation_Play_11fdd10(self->checkAnimation,(void *)(ulong)uVar1,(void *)0x0);
    }
  }
  return;
}

