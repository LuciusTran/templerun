// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddSafteyNet(PathElement newPath, PathDirection origin) { }
// Ghidra address: 01412c0c; ELF VA: 0x1312c0c; file offset: 0x130ec0c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathElement_AddSafteyNet_130ec0c
               (PathElement *self,PathElement *newPath,int origin,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  void *pvVar8;
  UISprite *pUVar9;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  Recovered_Vector3 RVar18;
  Recovered_Vector3 RVar19;
  undefined1 auVar20 [16];
  
  puVar2 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950f7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be000);
    NativeHelper_011df0b4(PTR_DAT_029c05f8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029be020);
    NativeHelper_011df0b4(PTR_DAT_029be038);
    bRam0000000002b950f7 = 1;
  }
  pvVar11 = self->SafteyNet;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar5 = PTR_DAT_029be038;
  puVar4 = PTR_DAT_029be020;
  puVar3 = PTR_DAT_029be000;
  bVar6 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
  if (bVar6) {
    pvVar11 = self->SafteyNet;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    NativeHelper_02614ce0(pvVar11,0);
    self->SafteyNet = (void *)0x0;
    PathElement_UpdateCachedComponents_130f0e0(self,runtimeMethod_00);
  }
  iVar10 = self->Obstacles;
  uVar7 = NativeHelper_011df12c(*(undefined8 *)puVar4,3);
  NativeHelper_01f3db6c(uVar7,*(undefined8 *)puVar5,0);
  auVar20 = NativeHelper_01505ab4(iVar10,uVar7,*(undefined8 *)puVar3);
  if ((auVar20._0_8_ & 1) == 0) {
    if (newPath == (PathElement *)0x0) goto LAB_01412f0c;
    if ((newPath->Obstacles != 7) || (iVar10 = self->Level, iVar10 == 3)) {
      return;
    }
  }
  else {
    iVar10 = self->Level;
  }
  uVar12 = 0x41600000;
  if (iVar10 != 3) {
    uVar12 = 0xbf800000;
  }
  uVar1 = 0xc1800000;
  if (iVar10 != 1) {
    uVar1 = uVar12;
  }
  uVar17 = (ulong)uVar1;
  pvVar11 = PathElement_InstantiateSafteynet_130f18c(self,auVar20._8_8_);
  bVar6 = PathElement_IsStraightHorz_130b618(self,runtimeMethod_01);
  if (bVar6) {
    if ((pvVar11 == (void *)0x0) ||
       (pvVar8 = (void *)NativeHelper_02610b98(pvVar11,0), pvVar8 == (void *)0x0))
    goto LAB_01412f0c;
    UnityEngine_Transform_Rotate_2517540(pvVar8,0.0,0.0,90.0,(void *)0x0);
  }
  if (newPath == (PathElement *)0x0) goto LAB_01412f0c;
  iVar10 = self->Level;
  fVar13 = 15.0;
  if (iVar10 != 3) {
    fVar13 = 0.0;
  }
  fVar14 = -15.0;
  if (iVar10 != 1) {
    fVar14 = fVar13;
  }
  fVar13 = 15.0;
  if (newPath->Level != 3) {
    fVar13 = 0.0;
  }
  fVar15 = -15.0;
  if (newPath->Level != 1) {
    fVar15 = fVar13;
  }
  if (fVar15 <= fVar14) {
    if (fVar15 < fVar14) {
      uVar12 = 0x40d00000;
      if (iVar10 != 3) {
        uVar12 = 0xc1080000;
      }
      uVar1 = 0xc1bc0000;
      if (iVar10 != 1) {
        uVar1 = uVar12;
      }
      uVar17 = (ulong)uVar1;
      if ((origin != 4) && (origin != 1)) goto LAB_01412e78;
      goto LAB_01412e58;
    }
    if (pvVar11 == (void *)0x0) goto LAB_01412f0c;
  }
  else {
    uVar17 = (ulong)(uint)(fVar14 + 6.5);
    if ((origin == 4) || (origin == 1)) {
LAB_01412e78:
      if (pvVar11 == (void *)0x0) goto LAB_01412f0c;
      pvVar8 = (void *)NativeHelper_02610b98(pvVar11,0);
      fVar13 = _UNK_007a3c8c;
    }
    else {
LAB_01412e58:
      if (pvVar11 == (void *)0x0) goto LAB_01412f0c;
      pvVar8 = (void *)NativeHelper_02610b98(pvVar11,0);
      fVar13 = _UNK_007a3d04;
    }
    if (pvVar8 == (void *)0x0) goto LAB_01412f0c;
    UnityEngine_Transform_Rotate_2517540(pvVar8,fVar13,0.0,0.0,(void *)0x0);
  }
  pvVar8 = (void *)NativeHelper_02610b98(pvVar11,0);
  puVar2 = PTR_DAT_029c05f8;
  if (pvVar8 != (void *)0x0) {
    RVar18.component2 = 0.0;
    RVar18.component0 = (float)(int)(uVar17 << 0x20);
    RVar18.component1 = (float)(int)((uVar17 << 0x20) >> 0x20);
    uVar16 = 0;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar8,RVar18,(void *)0x0);
    self->SafteyNet = pvVar11;
    pUVar9 = (UISprite *)NativeHelper_015070d0(pvVar11,*(undefined8 *)puVar2);
    self->MySafteyNetSprite = pUVar9;
    puVar2 = PTR_DAT_029c1ad8;
    if ((bRam0000000002b95100 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029c1ad8);
      bRam0000000002b95100 = 1;
    }
    pvVar11 = UnityEngine_Component_GetComponentsInChildren_13cd618(self,*(void **)puVar2);
    self->MyRenderers = pvVar11;
    pvVar11 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar11 != (void *)0x0) {
      RVar18 = UnityEngine_Transform_get_position_2516710(pvVar11,(void *)0x0);
      pvVar11 = (void *)NativeHelper_0260e1a8
                                  (RVar18.component0,CONCAT44(uVar16,RVar18.component1),
                                   RVar18.component2,self,0);
      if (pvVar11 != (void *)0x0) {
        RVar19 = UnityEngine_Transform_get_position_2516710(pvVar11,(void *)0x0);
        (self->Rectangle).component0 = RVar18.component0 + -30.0;
        (self->Rectangle).component1 = RVar19.component2 + -30.0;
        (self->Rectangle).component2 = 60.0;
        (self->Rectangle).component3 = 60.0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_01412f0c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

