// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnRCFetchCompleteForAdInit(bool success) { }
// Ghidra address: 013915cc; ELF VA: 0x12915cc; file offset: 0x128d5cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x01419ed8) */

void GameController_OnRCFetchCompleteForAdInit_128d5cc
               (GameController *self,bool success,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  AdInitRetryConfigData *pAVar8;
  Imangi_Privacy_ImangiPrivacyManager *pIVar9;
  undefined8 uVar10;
  long lVar11;
  ConfigData *self_00;
  long *plVar12;
  UiLoadingSplashScreen *self_01;
  Imangi_Utilities_ImangiLocaleInfo *pIVar13;
  Imangi_Utilities_ImangiLocaleRequirements *self_02;
  void *runtimeMethod_00;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 uVar18;
  void *pvVar19;
  
  if ((bRam0000000002b94cd9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b94cd9 = 1;
  }
  puVar2 = PTR_DAT_029bbd80;
  if (success) {
    lVar11 = *(long *)PTR_DAT_029bbd80;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar11 = *(long *)puVar2;
    }
    self_00 = *(ConfigData **)(*(long *)(lVar11 + 0xb8) + 8);
    if (self_00 == (ConfigData *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    ConfigData_OverrideFromRemoteConfig_12c1134(self_00,(void *)0x0);
  }
  if ((bRam0000000002b94cda & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bddd8);
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    NativeHelper_011df0b4(PTR_DAT_029bdde0);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdde8);
    bRam0000000002b94cda = 1;
  }
  pAVar8 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  puVar1 = PTR_DAT_029bbd80;
  puVar2 = PTR_DAT_029ba770;
  if (pAVar8 == (AdInitRetryConfigData *)0x0) {
LAB_013915c8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (pAVar8->ConsentRescueEnabled != false) {
    if (*(int *)(*(long *)PTR_DAT_029bbd80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    PrivacyManager_BeginNetworkOptimisticCMPAttempt_13154f8((void *)0x0);
  }
  puVar3 = PTR_DAT_029bdde8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = FeatureManager_IsFeatureEnabled_12d634c(*(void **)puVar3,(void *)0x0);
  if (bVar5) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    PrivacyManager_Initialize_1312afc((void *)0x0);
    if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pIVar9 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    if (pIVar9 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto LAB_013915c8;
    bVar5 = Imangi_Privacy_ImangiPrivacyManager_ShouldShowConsentFlow_12483b4(pIVar9,(void *)0x0);
    if (bVar5) {
      uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
      NativeHelper_01f80268(uVar10,self,*(undefined8 *)PTR_DAT_029bdde0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar2 = PTR_DAT_029bbd80;
      if ((bRam0000000002b9511e & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b8c90,0,0);
        NativeHelper_011df0b4(PTR_DAT_029b9758);
        NativeHelper_011df0b4(PTR_DAT_029ba778);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        NativeHelper_011df0b4(PTR_DAT_029c1f90);
        NativeHelper_011df0b4(PTR_DAT_029bbd80);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bf170);
        NativeHelper_011df0b4(PTR_DAT_029c1f98);
        NativeHelper_011df0b4(PTR_DAT_029c1fa0);
        bRam0000000002b9511e = 1;
      }
      puVar1 = PTR_DAT_029b7f98;
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar11 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_029c1fa0;
      puVar3 = PTR_DAT_029bd9d0;
      pvVar19 = *(void **)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_029bf170;
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar19,(void *)0x0,(void *)0x0);
      Imangi_Utilities_ImangiAssert_Code_1223b44(bVar5,*(void **)puVar4,(void *)0x1,(void *)0x0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      TRAnalytics_LogEvent_12b6da0(*(void **)puVar1,(void *)0x0);
      puVar1 = PTR_DAT_029b8c90;
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar11 == 0) {
code_r0x01417244:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      *(undefined1 *)(lVar11 + 0x20) = 0;
      plVar12 = (long *)NativeHelper_02041514(*(undefined8 *)(lVar11 + 0x38),uVar10,0);
      if (plVar12 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x38) = 0;
      }
      else {
        lVar15 = *(long *)puVar1;
        if ((*plVar12 != lVar15) || (*(long **)(lVar11 + 0x38) = plVar12, *plVar12 != lVar15)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678();
        }
      }
      if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pIVar9 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
      puVar4 = PTR_DAT_029c1f98;
      puVar3 = PTR_DAT_029b9758;
      if (pIVar9 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto code_r0x01417244;
      lVar11 = Imangi_Privacy_ImangiPrivacyManager_GetMainConsentFlowGroups_1248e2c(pIVar9,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60) = lVar11;
      Imangi_Utilities_ImangiAssert_Code_1223b44
                (lVar11 != 0,*(void **)puVar4,(void *)0x1,(void *)0x0);
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar11 = *(long *)puVar3;
      }
      if (**(long **)(lVar11 + 0xb8) == 0) goto code_r0x01417244;
      bVar5 = UnityEngine_object_op_Inequality_250c8e4
                        (*(void **)(**(long **)(lVar11 + 0xb8) + 0x2b0),(void *)0x0,(void *)0x0);
      if (bVar5) {
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar11 = *(long *)puVar3;
        }
        if ((**(long **)(lVar11 + 0xb8) == 0) ||
           (self_01 = *(UiLoadingSplashScreen **)(**(long **)(lVar11 + 0xb8) + 0x2b0),
           self_01 == (UiLoadingSplashScreen *)0x0)) goto code_r0x01417244;
        UiLoadingSplashScreen_DontDestroyWhenComplete_130117c(self_01,(void *)0x0);
      }
      puVar3 = PTR_DAT_029c1f90;
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar11 = *(long *)puVar2;
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
      uVar10 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
      NativeHelper_01f80268(uVar10,uVar18,*(undefined8 *)puVar3,0);
      PrivacyManager_RegisterLanguageFileCallbacks_1312d08(0,0,uVar10);
      puVar3 = PTR_DAT_029c1f88;
      puVar1 = PTR_DAT_029bbd80;
      lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar11 == 0) goto code_r0x01417244;
      if ((bRam0000000002b9514c & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bbd80);
        NativeHelper_011df0b4(PTR_DAT_029c1f88);
        bRam0000000002b9514c = 1;
      }
      iVar7 = UnityEngine_PlayerPrefs_GetInt_2507854(*(void **)puVar3,-1,(void *)0x0);
      lVar15 = *(long *)puVar1;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar15);
        lVar15 = *(long *)puVar1;
      }
      iVar17 = *(int *)(*(long *)(lVar15 + 0xb8) + 0x98);
      if (iVar7 < iVar17) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar15);
          iVar17 = *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
        }
        if (*(int *)(lVar11 + 0x24) < iVar17) {
          lVar15 = NativeHelper_0141bdb0(lVar11);
          goto code_r0x01416f58;
        }
      }
      lVar15 = NativeHelper_0141be10(lVar11);
code_r0x01416f58:
      if (lVar15 == 0) {
        NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
        uVar18 = NativeHelper_011df2d0();
        uVar10 = NativeHelper_011df0c8(PTR_DAT_029f5930);
        NativeHelper_01ffed14(uVar18,uVar10,0);
      }
      else {
        if (pcRam0000000002b9ce48 == (code *)0x0) {
          pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
        }
        uVar14 = (*pcRam0000000002b9ce48)(lVar11);
        if ((uVar14 & 1) != 0) {
          if (pcRam0000000002b9ce58 == (code *)0x0) {
            pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
          }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000002b9ce58)(lVar11,lVar15);
          return;
        }
        NativeHelper_011df0c8(PTR_DAT_029baea0);
        uVar18 = NativeHelper_011df2d0();
        uVar10 = NativeHelper_011df0c8(PTR_DAT_029f5920);
        NativeHelper_01f80968(uVar18,uVar10,0);
      }
      uVar10 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar18,uVar10);
    }
  }
  puVar2 = PTR_DAT_029bddd8;
  lVar11 = *(long *)PTR_DAT_029bddd8;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar11 = *(long *)puVar2;
  }
  *(undefined2 *)(*(long *)(lVar11 + 0xb8) + 8) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bbd80;
  if ((bRam0000000002b95134 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b95134 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bbd80;
  if ((bRam0000000002b95135 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2098);
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029bddd8);
    NativeHelper_011df0b4(PTR_DAT_029c20a0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029ba9d0);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c20a8);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029c20b0);
    NativeHelper_011df0b4(PTR_DAT_029bbda0);
    NativeHelper_011df0b4(PTR_DAT_029c2078);
    NativeHelper_011df0b4(PTR_DAT_029c2000);
    NativeHelper_011df0b4(PTR_DAT_029c20b8);
    bRam0000000002b95135 = 1;
  }
  puVar1 = PTR_DAT_029bddd8;
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar11 = *(long *)puVar2;
  }
  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x58) = 0;
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar11 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 8) == '\0') {
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar11 = *(long *)puVar2;
    }
    lVar11 = *(long *)(lVar11 + 0xb8);
    *(undefined1 *)(lVar11 + 0x69) = 0;
code_r0x01419ed0:
    *(undefined8 *)(lVar11 + 0x58) = 0;
    return;
  }
  pAVar8 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  if (pAVar8 == (AdInitRetryConfigData *)0x0) goto code_r0x01419fb4;
  lVar11 = *(long *)puVar2;
  bVar5 = pAVar8->BootConsentRescueEnabled;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar11 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar11 + 0xb8) + 0x69) == '\0' && bVar5 == false) {
    if (*(int *)(*(long *)PTR_DAT_029ba5a8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar6 = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
    if (!bVar6) {
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar11 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 9) = 1;
      pvVar19 = *(void **)puVar2;
      if (*(int *)((long)pvVar19 + 0xe0) == 0) {
        pvVar19 = (void *)NativeHelper_011df1bc();
      }
      PrivacyManager_LogEndPrivacyConsentFlowEvent_1314e38(pvVar19);
      lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
      goto code_r0x01419ed0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_029ba9d0 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pIVar13 = Imangi_Utilities_ImangiLocaleManager_GetCurrentLocale_1233e18(false,(void *)0x0);
  if (pIVar13 == (Imangi_Utilities_ImangiLocaleInfo *)0x0) {
    lVar15 = *(long *)PTR_DAT_029b7fe8;
    lVar11 = *(long *)(lVar15 + 0x38);
    if (lVar11 == 0) {
      NativeHelper_011b5290(lVar15);
      lVar11 = *(long *)(lVar15 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar11 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = NativeHelper_011b5234();
    }
    pvVar19 = (void *)**(undefined8 **)(lVar11 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
    }
    Imangi_Utilities_ImangiLog_Error_12165d4
              (*(void **)PTR_DAT_029c2078,*(void **)PTR_DAT_029bbda0,pvVar19,(void *)0x0);
    puVar16 = (undefined8 *)PTR_DAT_029c20b8;
  }
  else {
    lVar11 = *(long *)puVar1;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar11 = *(long *)puVar1;
    }
    if ((**(long **)(lVar11 + 0xb8) == 0) ||
       (self_02 = *(Imangi_Utilities_ImangiLocaleRequirements **)(**(long **)(lVar11 + 0xb8) + 0x28)
       , self_02 == (Imangi_Utilities_ImangiLocaleRequirements *)0x0)) goto code_r0x01419fb4;
    bVar6 = Imangi_Utilities_ImangiLocaleRequirements_IsValid_123de64
                      (self_02,pIVar13,false,(void *)0x0);
    puVar16 = (undefined8 *)PTR_DAT_029c20b8;
    if (bVar6) {
      lVar11 = *(long *)puVar1;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar11 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_029ba778;
      if (**(long **)(lVar11 + 0xb8) == 0) goto code_r0x01419fb4;
      puVar16 = (undefined8 *)PTR_DAT_029c20b8;
      if (*(char *)(**(long **)(lVar11 + 0xb8) + 0x30) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pIVar9 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
        puVar3 = PTR_DAT_029b9758;
        lVar11 = *(long *)PTR_DAT_029b9758;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar11);
          lVar11 = *(long *)puVar3;
        }
        if (((GameController *)**(undefined8 **)(lVar11 + 0xb8) == (GameController *)0x0) ||
           (pIVar13 = GameController_get_CurrentLocale_128ca54
                                ((GameController *)**(undefined8 **)(lVar11 + 0xb8),(void *)0x0),
           pIVar9 == (Imangi_Privacy_ImangiPrivacyManager *)0x0)) goto code_r0x01419fb4;
        bVar6 = Imangi_Privacy_ImangiPrivacyManager_HasConsent_124871c
                          (pIVar9,(void *)0x4,pIVar13,(void *)0x0);
        puVar16 = (undefined8 *)PTR_DAT_029c20b0;
        if (bVar6) {
          lVar11 = *(long *)puVar2;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar11 = *(long *)puVar2;
          }
          *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28) = *(undefined8 *)PTR_DAT_029c2000;
          NativeHelper_01e417d8(1,0);
          if (cRam0000000002b94ca8 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029bd7e8);
            cRam0000000002b94ca8 = '\x01';
          }
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_029bd7e8 + 0xb8) + 0x10) = 1;
          lVar11 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c20a0);
          NativeHelper_01e46f64(lVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pIVar9 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
          if (pIVar9 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
code_r0x01419fb4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          bVar6 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(pIVar9,(void *)0x0);
          if (lVar11 == 0) goto code_r0x01419fb4;
          *(byte *)(lVar11 + 0x10) = ~bVar6 & 1;
          PrivacyManager_DisableInput_1315fb8((void *)(ulong)bVar6);
          pvVar19 = *(void **)puVar2;
          lVar15 = *(long *)((long)pvVar19 + 0xb8);
          *(undefined1 *)(lVar15 + 0x78) = 0;
          if (*(char *)(lVar15 + 0x69) == '\0') {
            if (bVar5 != false) {
              if (*(int *)((long)pvVar19 + 0xe0) == 0) {
                pvVar19 = (void *)NativeHelper_011df1bc();
                lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
              }
              *(undefined2 *)(lVar15 + 0x89) = 1;
              PrivacyManager_StartBootCMPWatchdog_131581c(pvVar19);
              lVar15 = *(long *)puVar3;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                lVar15 = *(long *)puVar3;
              }
              pvVar19 = (void *)**(undefined8 **)(lVar15 + 0xb8);
              if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
              }
              bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar19,(void *)0x0,(void *)0x0);
              if (bVar5) {
                lVar15 = *(long *)puVar3;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  lVar15 = *(long *)puVar3;
                }
                if ((GameController *)**(undefined8 **)(lVar15 + 0xb8) == (GameController *)0x0)
                goto code_r0x01419fb4;
                GameController_LogBootConsentAttempt_128bfec
                          ((GameController *)**(undefined8 **)(lVar15 + 0xb8),(void *)0x0);
              }
            }
          }
          else {
            if (*(int *)((long)pvVar19 + 0xe0) == 0) {
              pvVar19 = (void *)NativeHelper_011df1bc();
            }
            PrivacyManager_StartCMPInputWatchdog_1315688(pvVar19);
          }
          uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c2098);
          NativeHelper_01694ef4(uVar10,0,*(undefined8 *)PTR_DAT_029c20a8,0);
          NativeHelper_01e46904(lVar11,uVar10,0);
          goto code_r0x01419e70;
        }
      }
    }
  }
  pvVar19 = *(void **)puVar2;
  uVar10 = *puVar16;
  if (*(int *)((long)pvVar19 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    pvVar19 = *(void **)puVar2;
  }
  *(undefined8 *)(*(long *)((long)pvVar19 + 0xb8) + 0x28) = uVar10;
  PrivacyManager_DisableInput_1315fb8(pvVar19);
  PrivacyManager_CMPFlowFinished_1315014(runtimeMethod_00);
code_r0x01419e70:
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029ba778;
  if ((bRam0000000002b9512b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029c2030);
    NativeHelper_011df0b4(PTR_DAT_029b88d0);
    NativeHelper_011df0b4(PTR_DAT_029c2038);
    NativeHelper_011df0b4(PTR_DAT_029b8570);
    bRam0000000002b9512b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pIVar9 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
  puVar1 = PTR_DAT_029c2038;
  puVar2 = PTR_DAT_029b8308;
  if (pIVar9 != (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
    bVar5 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(pIVar9,(void *)0x0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar19 = (void *)NativeHelper_01f83748(&stack0xffffffffffffffcc,0);
    Imangi_Analytics_Analytics_SetUserProperty_126b420(*(void **)puVar1,pvVar19,(void *)0x0);
    if (cRam0000000002b951fa == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029bcb50);
      cRam0000000002b951fa = '\x01';
    }
    puVar4 = PTR_DAT_029bcb50;
    puVar3 = PTR_DAT_029bbd80;
    puVar1 = PTR_DAT_029b88d0;
    puVar16 = (undefined8 *)PTR_DAT_029b8570;
    lVar11 = *(long *)PTR_DAT_029bcb50;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar11 = *(long *)puVar4;
    }
    if ((~bVar5 & 1U) != 0) {
      puVar16 = (undefined8 *)puVar1;
    }
    Imangi_Analytics_Analytics_SetUserProperty_126b420
              (*(void **)(*(long *)(lVar11 + 0xb8) + 0x340),(void *)*puVar16,(void *)0x0);
    pvVar19 = *(void **)puVar3;
    if (*(int *)((long)pvVar19 + 0xe0) == 0) {
      pvVar19 = (void *)NativeHelper_011df1bc();
    }
    puVar1 = PTR_DAT_029c2030;
    PrivacyManager_PrivacyRestrictedUser_1314964(pvVar19);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar11);
    }
    pvVar19 = (void *)NativeHelper_01f83748(&stack0xffffffffffffffc8,0);
    Imangi_Analytics_Analytics_SetUserProperty_126b420(*(void **)puVar1,pvVar19,(void *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

