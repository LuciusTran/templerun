// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SwitchToAdMob(AdManager mgr) { }
// Ghidra address: 0138f2c8; ELF VA: 0x128f2c8; file offset: 0x128b2c8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SwitchToAdMob_128b2c8
               (GameController *self,Imangi_Ad_AdManager *mgr,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  Imangi_Ad_ImangiAdServiceHandler *pIVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  Imangi_Ad_AdManager *x;
  long lVar12;
  Imangi_Privacy_ImangiPrivacyManager *self_00;
  Imangi_Utilities_ImangiLocaleInfo *pIVar13;
  Imangi_Privacy_ImangiPrivacyManager *self_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *runtimeMethod_00;
  void *extraout_x1_04;
  void *extraout_x1_05;
  long lVar14;
  GameController *pGVar15;
  long lVar16;
  void *pvVar17;
  undefined8 uVar18;
  
  if ((bRam0000000002b94ccc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94ccc = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if ((mgr == (Imangi_Ad_AdManager *)0x0) ||
     (pIVar8 = mgr->ActiveServiceHandler, pIVar8 == (Imangi_Ad_ImangiAdServiceHandler *)0x0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  (**(code **)(*(long *)pIVar8 + 0x1d8))(pIVar8,mgr,*(undefined8 *)(*(long *)pIVar8 + 0x1e0));
  pIVar8 = mgr->ActiveServiceHandler;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  NativeHelper_02614ce0(pIVar8,0);
  mgr->ActiveServiceHandler = (Imangi_Ad_ImangiAdServiceHandler *)0x0;
  Imangi_Ad_AdManager_ForceActiveService_127bf90(mgr,(void *)0x2,(void *)0x0);
  self->_InitializedAdManager = false;
  puVar1 = PTR_DAT_029b9758;
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
  }
  puVar2 = PTR_DAT_029b7f98;
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar9 = *(long *)puVar1;
  }
  lVar14 = *(long *)puVar2;
  pvVar17 = (void *)**(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(lVar14 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar14);
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar17,(void *)0x0,(void *)0x0);
  if (!bVar4) {
    return;
  }
  lVar9 = *(long *)puVar1;
  pvVar17 = extraout_x1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar9 = *(long *)puVar1;
    pvVar17 = extraout_x1_00;
  }
  pGVar15 = (GameController *)**(long **)(lVar9 + 0xb8);
  if (pGVar15 == (GameController *)0x0) goto LAB_0138f9a8;
  if (pGVar15->_InitializedAdManager != false) {
    return;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pGVar15 = (GameController *)**(long **)(*(long *)puVar1 + 0xb8);
    pvVar17 = extraout_x1_01;
    if (pGVar15 == (GameController *)0x0) goto LAB_0138f9a8;
  }
  bVar4 = GameController_ShouldHoldAdInitForUnresolvedRegulation_128abb8(pGVar15,pvVar17);
  puVar3 = PTR_DAT_029bbd80;
  if (bVar4) {
    lVar9 = *(long *)PTR_DAT_029bbd80;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_029b8c90;
    uVar18 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48);
    uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar10,self,*(undefined8 *)PTR_DAT_029bdce8,0);
    plVar11 = (long *)NativeHelper_0204170c(uVar18,uVar10,0);
    if (plVar11 == (long *)0x0) {
      lVar9 = *(long *)puVar3;
LAB_0138f980:
      *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48) = 0;
      return;
    }
    lVar9 = *(long *)puVar1;
    if (*plVar11 != lVar9) goto LAB_0138f970;
    lVar14 = *(long *)puVar3;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    x = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar9);
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    puVar2 = PTR_DAT_029b8708;
    if (!bVar4) {
      return;
    }
    lVar9 = NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8708,1);
    if (lVar9 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0138f9ac:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_029b9680;
    lVar14 = NativeHelper_011df12c(*(undefined8 *)puVar2,1);
    if (lVar14 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0138f9ac;
    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)PTR_DAT_029b9678;
    lVar12 = NativeHelper_011df12c(*(undefined8 *)puVar2,1);
    if (lVar12 == 0) goto LAB_0138f9a8;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_0138f9ac;
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_029bd9c0;
    if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    self_00 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    lVar16 = *(long *)puVar1;
    pvVar17 = extraout_x1_02;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar16);
      lVar16 = *(long *)puVar1;
      pvVar17 = extraout_x1_03;
    }
    if (((GameController *)**(undefined8 **)(lVar16 + 0xb8) == (GameController *)0x0) ||
       (pIVar13 = GameController_get_CurrentLocale_128ca54
                            ((GameController *)**(undefined8 **)(lVar16 + 0xb8),pvVar17),
       self_00 == (Imangi_Privacy_ImangiPrivacyManager *)0x0)) {
LAB_0138f9a8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar4 = Imangi_Privacy_ImangiPrivacyManager_IsConsentRequiredForCountry_1248498
                      (self_00,pIVar13,(void *)0x0);
    self_01 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    if (self_01 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto LAB_0138f9a8;
    pvVar17 = Imangi_Privacy_ImangiPrivacyManager_GetRegulationType_1247e5c
                        (self_01,(Imangi_Utilities_ImangiLocaleInfo *)0x0,(void *)0x0);
    if ((GameController *)**(undefined8 **)(*(long *)puVar1 + 0xb8) == (GameController *)0x0)
    goto LAB_0138f9a8;
    pIVar13 = GameController_get_CurrentLocale_128ca54
                        ((GameController *)**(undefined8 **)(*(long *)puVar1 + 0xb8),
                         runtimeMethod_00);
    bVar5 = Imangi_Privacy_ImangiPrivacyManager_HasConsent_124871c
                      (self_00,(void *)0x4,pIVar13,(void *)0x0);
    bVar6 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(self_00,(void *)0x0);
    puVar2 = PTR_DAT_029bbd80;
    if (*(int *)(*(long *)PTR_DAT_029bbd80 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029bbd80);
    }
    bVar7 = PrivacyManager_get_IsAdMobInitialized_13127cc((void *)0x0);
    if (x == (Imangi_Ad_AdManager *)0x0) goto LAB_0138f9a8;
    (**(code **)(*(long *)x + 0x188))
              (x,1,bVar4,bVar5,!bVar6,(int)pvVar17 == 1,lVar9,lVar14,lVar12,
               *(undefined8 *)PTR_DAT_029b8618,1,bVar7,*(undefined8 *)(*(long *)x + 400));
    lVar9 = *(long *)puVar1;
    pGVar15 = (GameController *)**(long **)(lVar9 + 0xb8);
    if (pGVar15 == (GameController *)0x0) goto LAB_0138f9a8;
    pGVar15->_InitializedAdManager = true;
    if (pGVar15->_adInitOutcomeLogged == false) {
      pvVar17 = extraout_x1_04;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar9);
        pGVar15 = (GameController *)**(long **)(*(long *)puVar1 + 0xb8);
        pvVar17 = extraout_x1_05;
        if (pGVar15 == (GameController *)0x0) goto LAB_0138f9a8;
      }
      pGVar15->_adInitOutcomeLogged = true;
      GameController_LogStartupAdInitAttempt_128b3fc(pGVar15,pvVar17);
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_029b8c90;
    uVar18 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x48);
    uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar10,self,*(undefined8 *)PTR_DAT_029bdce8,0);
    plVar11 = (long *)NativeHelper_0204170c(uVar18,uVar10,0);
    if (plVar11 == (long *)0x0) {
      lVar9 = *(long *)puVar2;
      goto LAB_0138f980;
    }
    lVar9 = *(long *)puVar1;
    if (*plVar11 != lVar9) goto LAB_0138f970;
    lVar14 = *(long *)puVar2;
  }
  *(long **)(*(long *)(lVar14 + 0xb8) + 0x48) = plVar11;
  if (*plVar11 == lVar9) {
    return;
  }
LAB_0138f970:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df678();
}

