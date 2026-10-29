// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013b17dc; ELF VA: 0x12b17dc; file offset: 0x12ad7dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController__WaitAndWarmResources_d__240_MoveNext_12ad7dc
               (GameController__WaitAndWarmResources_d__240 *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  Promotion *self_00;
  undefined8 uVar9;
  undefined8 uVar10;
  void *extraout_x1;
  int iVar11;
  GameController *pGVar12;
  UiLoadingSplashScreen *pUVar13;
  void *pvVar14;
  
  if ((bRam0000000002b94dc1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf10);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bdf18);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdf20);
    NativeHelper_011df0b4(PTR_DAT_029bdf28);
    NativeHelper_011df0b4(PTR_DAT_029bdf30);
    NativeHelper_011df0b4(PTR_DAT_029bdf38);
    NativeHelper_011df0b4(PTR_DAT_029be800);
    NativeHelper_011df0b4(PTR_DAT_029bb638);
    bRam0000000002b94dc1 = 1;
    runtimeMethod = extraout_x1;
  }
  if (3 < (uint)self->__1__state) {
    return false;
  }
  pGVar12 = self->__4__this;
  switch(self->__1__state) {
  case 0:
    self->__1__state = -1;
    puVar2 = PTR_DAT_029b7f98;
    if (pGVar12 == (GameController *)0x0) goto code_r0x013b1cd0;
    pvVar14 = pGVar12->LoadingScreenPrefab;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar14,(void *)0x0,(void *)0x0);
    if (bVar7) {
      pUVar13 = pGVar12->LoadingScreenComponent;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar7 = UnityEngine_object_op_Equality_250d534(pUVar13,(void *)0x0,(void *)0x0);
      if (bVar7) {
        pUVar13 = (UiLoadingSplashScreen *)
                  UIUtilities_ShowScreen_1316cbc
                            (pGVar12->UiRoot,pGVar12->LoadingScreenPrefab,(void *)0x0);
        if (pUVar13 == (UiLoadingSplashScreen *)0x0) {
          pGVar12->LoadingScreenComponent = (UiLoadingSplashScreen *)0x0;
          goto code_r0x013b1cd0;
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_029be800 + 0x130);
        if (*(byte *)(*(long *)pUVar13 + 0x130) < bVar1) {
          pUVar13 = (UiLoadingSplashScreen *)0x0;
        }
        else if (*(long *)(*(long *)(*(long *)pUVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_029be800) {
          pUVar13 = (UiLoadingSplashScreen *)0x0;
        }
        pGVar12->LoadingScreenComponent = pUVar13;
      }
      else {
        pUVar13 = pGVar12->LoadingScreenComponent;
      }
      if (pUVar13 != (UiLoadingSplashScreen *)0x0) {
        UiLoadingSplashScreen_SetLoadingCount_1301184(pUVar13,4,(void *)0x0);
        puVar2 = PTR_DAT_029b8c90;
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
        puVar6 = PTR_DAT_029bdf38;
        NativeHelper_01f80268(uVar8,pUVar13,*(undefined8 *)PTR_DAT_029bdf38,0);
        puVar3 = PTR_DAT_029bdf10;
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar9 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf10);
        puVar5 = PTR_DAT_029bdf30;
        NativeHelper_016955d8(uVar9,pUVar13,*(undefined8 *)PTR_DAT_029bdf30,0);
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar10 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
        puVar4 = PTR_DAT_029bdf28;
        NativeHelper_01f80268(uVar10,pUVar13,*(undefined8 *)PTR_DAT_029bdf28,0);
        if (*(int *)(*(long *)PTR_DAT_029bdf20 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        Promotion_RegisterCallbacks_131d694(uVar8,uVar9,uVar10,0,0);
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
        NativeHelper_01f80268(uVar8,pUVar13,*(undefined8 *)puVar6,0);
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
        NativeHelper_016955d8(uVar9,pUVar13,*(undefined8 *)puVar5,0);
        pUVar13 = pGVar12->LoadingScreenComponent;
        uVar10 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
        NativeHelper_01f80268(uVar10,pUVar13,*(undefined8 *)puVar4,0);
        if (*(int *)(*(long *)PTR_DAT_029bbd80 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        PrivacyManager_RegisterLanguageFileCallbacks_1312d08(uVar8,uVar9,uVar10,0);
        if (pGVar12->LoadingScreenComponent != (UiLoadingSplashScreen *)0x0) {
          BasePanel_SlideIn_12def74((BasePanel *)pGVar12->LoadingScreenComponent,(void *)0x0);
          pvVar14 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb638);
          UnityEngine_WaitForSeconds_WaitForSeconds_2512710(pvVar14,0.5,(void *)0x0);
          self->__2__current = pvVar14;
          self->__1__state = 1;
          return true;
        }
      }
      goto code_r0x013b1cd0;
    }
    break;
  case 1:
    self->__1__state = -1;
    if (pGVar12 == (GameController *)0x0) goto code_r0x013b1cd0;
    break;
  case 2:
    self->__1__state = -1;
    if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    PathElement_WarmResources_130bb54((void *)0x0);
    if (pGVar12 == (GameController *)0x0) goto code_r0x013b1cd0;
    pUVar13 = pGVar12->LoadingScreenComponent;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pUVar13,(void *)0x0,(void *)0x0);
    if (bVar7) {
      if (pGVar12->LoadingScreenComponent == (UiLoadingSplashScreen *)0x0) goto code_r0x013b1cd0;
      UiLoadingSplashScreen_OnLoadingEnded_13011dc(pGVar12->LoadingScreenComponent,(void *)0x0);
    }
    self->__2__current = (void *)0x0;
    iVar11 = 3;
    goto code_r0x013b1af4;
  case 3:
    self->__1__state = -1;
    uVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90,runtimeMethod);
    NativeHelper_01f80268(uVar8,pGVar12,*(undefined8 *)PTR_DAT_029bdf18,0);
    puVar2 = PTR_DAT_029bdf20;
    if (*(int *)(*(long *)PTR_DAT_029bdf20 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Promotion_RegisterCallbacks_131d694(0,0,0,uVar8,0);
    self_00 = *(Promotion **)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (self_00 != (Promotion *)0x0) {
      Promotion_LoadPromo_131da64(self_00,true,false,(void *)0x0);
      return false;
    }
    goto code_r0x013b1cd0;
  }
  puVar2 = PTR_DAT_029b7f98;
  pvVar14 = pGVar12->AllShaderVariants;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar14,(void *)0x0,(void *)0x0);
  if (bVar7) {
    if (pGVar12->AllShaderVariants == (void *)0x0) goto code_r0x013b1cd0;
    NativeHelper_026168f4(pGVar12->AllShaderVariants,0);
  }
  pUVar13 = pGVar12->LoadingScreenComponent;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar7 = UnityEngine_object_op_Inequality_250c8e4(pUVar13,(void *)0x0,(void *)0x0);
  if (bVar7) {
    if (pGVar12->LoadingScreenComponent == (UiLoadingSplashScreen *)0x0) {
code_r0x013b1cd0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    UiLoadingSplashScreen_OnLoadingEnded_13011dc(pGVar12->LoadingScreenComponent,(void *)0x0);
  }
  iVar11 = 2;
  self->__2__current = (void *)0x0;
code_r0x013b1af4:
  self->__1__state = iVar11;
  return true;
}

