// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void InitAdServices() { }
// Ghidra address: 0138f4a8; ELF VA: 0x128f4a8; file offset: 0x128b4a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_InitAdServices_128b4a8(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  Imangi_Ad_AdManager *x;
  long lVar11;
  Imangi_Privacy_ImangiPrivacyManager *self_00;
  Imangi_Utilities_ImangiLocaleInfo *pIVar12;
  Imangi_Privacy_ImangiPrivacyManager *self_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *runtimeMethod_00;
  void *extraout_x1_06;
  void *extraout_x1_07;
  long lVar13;
  GameController *pGVar14;
  long lVar15;
  void *pvVar16;
  undefined8 uVar17;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cd5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bdce8);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029b9678);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bd9c0);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94cd5 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar8,runtimeMethod);
    lVar8 = *(long *)puVar2;
    runtimeMethod = extraout_x1_00;
  }
  lVar13 = *(long *)puVar1;
  pvVar16 = (void *)**(undefined8 **)(lVar8 + 0xb8);
  if (*(int *)(lVar13 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar13,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar16,(void *)0x0,(void *)0x0);
  if (!bVar4) {
    return;
  }
  lVar8 = *(long *)puVar2;
  pvVar16 = extraout_x1_01;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar8 = *(long *)puVar2;
    pvVar16 = extraout_x1_02;
  }
  pGVar14 = (GameController *)**(long **)(lVar8 + 0xb8);
  if (pGVar14 == (GameController *)0x0) goto LAB_0138f9a8;
  if (pGVar14->_InitializedAdManager != false) {
    return;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pGVar14 = (GameController *)**(long **)(*(long *)puVar2 + 0xb8);
    pvVar16 = extraout_x1_03;
    if (pGVar14 == (GameController *)0x0) goto LAB_0138f9a8;
  }
  bVar4 = GameController_ShouldHoldAdInitForUnresolvedRegulation_128abb8(pGVar14,pvVar16);
  puVar3 = PTR_DAT_029bbd80;
  if (bVar4) {
    lVar8 = *(long *)PTR_DAT_029bbd80;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_029b8c90;
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar9,self,*(undefined8 *)PTR_DAT_029bdce8,0);
    plVar10 = (long *)NativeHelper_0204170c(uVar17,uVar9,0);
    if (plVar10 == (long *)0x0) {
      lVar8 = *(long *)puVar3;
LAB_0138f980:
      *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48) = 0;
      return;
    }
    lVar8 = *(long *)puVar2;
    if (*plVar10 != lVar8) goto LAB_0138f970;
    lVar13 = *(long *)puVar3;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    x = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar8);
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b8708;
    if (!bVar4) {
      return;
    }
    lVar8 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,1);
    if (lVar8 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0138f9ac:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_029b9680;
    lVar13 = NativeHelper_011df12c(*(undefined8 *)puVar1,1);
    if (lVar13 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0138f9ac;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_029b9678;
    lVar11 = NativeHelper_011df12c(*(undefined8 *)puVar1,1);
    if (lVar11 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0138f9ac;
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_029bd9c0;
    if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    self_00 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    lVar15 = *(long *)puVar2;
    pvVar16 = extraout_x1_04;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar15);
      lVar15 = *(long *)puVar2;
      pvVar16 = extraout_x1_05;
    }
    if (((GameController *)**(undefined8 **)(lVar15 + 0xb8) == (GameController *)0x0) ||
       (pIVar12 = GameController_get_CurrentLocale_128ca54
                            ((GameController *)**(undefined8 **)(lVar15 + 0xb8),pvVar16),
       self_00 == (Imangi_Privacy_ImangiPrivacyManager *)0x0)) {
LAB_0138f9a8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar4 = Imangi_Privacy_ImangiPrivacyManager_IsConsentRequiredForCountry_1248498
                      (self_00,pIVar12,(void *)0x0);
    self_01 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    if (self_01 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto LAB_0138f9a8;
    pvVar16 = Imangi_Privacy_ImangiPrivacyManager_GetRegulationType_1247e5c
                        (self_01,(Imangi_Utilities_ImangiLocaleInfo *)0x0,(void *)0x0);
    if ((GameController *)**(undefined8 **)(*(long *)puVar2 + 0xb8) == (GameController *)0x0)
    goto LAB_0138f9a8;
    pIVar12 = GameController_get_CurrentLocale_128ca54
                        ((GameController *)**(undefined8 **)(*(long *)puVar2 + 0xb8),
                         runtimeMethod_00);
    bVar5 = Imangi_Privacy_ImangiPrivacyManager_HasConsent_124871c
                      (self_00,(void *)0x4,pIVar12,(void *)0x0);
    bVar6 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(self_00,(void *)0x0);
    puVar1 = PTR_DAT_029bbd80;
    if (*(int *)(*(long *)PTR_DAT_029bbd80 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029bbd80);
    }
    bVar7 = PrivacyManager_get_IsAdMobInitialized_13127cc((void *)0x0);
    if (x == (Imangi_Ad_AdManager *)0x0) goto LAB_0138f9a8;
    (**(code **)(*(long *)x + 0x188))
              (x,1,bVar4,bVar5,!bVar6,(int)pvVar16 == 1,lVar8,lVar13,lVar11,
               *(undefined8 *)PTR_DAT_029b8618,1,bVar7,*(undefined8 *)(*(long *)x + 400));
    lVar8 = *(long *)puVar2;
    pGVar14 = (GameController *)**(long **)(lVar8 + 0xb8);
    if (pGVar14 == (GameController *)0x0) goto LAB_0138f9a8;
    pGVar14->_InitializedAdManager = true;
    if (pGVar14->_adInitOutcomeLogged == false) {
      pvVar16 = extraout_x1_06;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar8);
        pGVar14 = (GameController *)**(long **)(*(long *)puVar2 + 0xb8);
        pvVar16 = extraout_x1_07;
        if (pGVar14 == (GameController *)0x0) goto LAB_0138f9a8;
      }
      pGVar14->_adInitOutcomeLogged = true;
      GameController_LogStartupAdInitAttempt_128b3fc(pGVar14,pvVar16);
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_029b8c90;
    uVar17 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x48);
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar9,self,*(undefined8 *)PTR_DAT_029bdce8,0);
    plVar10 = (long *)NativeHelper_0204170c(uVar17,uVar9,0);
    if (plVar10 == (long *)0x0) {
      lVar8 = *(long *)puVar1;
      goto LAB_0138f980;
    }
    lVar8 = *(long *)puVar2;
    if (*plVar10 != lVar8) goto LAB_0138f970;
    lVar13 = *(long *)puVar1;
  }
  *(long **)(*(long *)(lVar13 + 0xb8) + 0x48) = plVar10;
  if (*plVar10 == lVar8) {
    return;
  }
LAB_0138f970:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df678();
}

