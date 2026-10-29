// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void EndOfRunAdInitRetryGate() { }
// Ghidra address: 0138df3c; ELF VA: 0x128df3c; file offset: 0x1289f3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0138dae8) */

void GameController_EndOfRunAdInitRetryGate_1289f3c(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  void *extraout_x0;
  long *plVar8;
  undefined8 uVar9;
  Imangi_Ad_AdManager *mgr;
  GameController *self_00;
  AdInitRetryConfigData *pAVar10;
  Imangi_Analytics_EventParameter *pIVar11;
  void *extraout_x0_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *inReason;
  void *extraout_x1_03;
  void *pvVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  void *pvVar16;
  int *piVar17;
  Imangi_Ad_ImangiAdServiceHandler *x;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((bRam0000000002b94cc6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdd08);
    NativeHelper_011df0b4(PTR_DAT_029bdd10);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdd18);
    bRam0000000002b94cc6 = 1;
    runtimeMethod = extraout_x1_00;
  }
  puVar6 = PTR_DAT_029bdc20;
  puVar4 = PTR_DAT_029b9638;
  puVar2 = PTR_DAT_029b7fe8;
  if (self->_OnGameOverForAdInit != (void *)0x0) {
    lVar15 = *(long *)PTR_DAT_029b7fe8;
    lVar13 = *(long *)(lVar15 + 0x38);
    if (lVar13 == 0) {
      NativeHelper_011b5290(lVar15,runtimeMethod);
      lVar13 = *(long *)(lVar15 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    puVar2 = PTR_DAT_029bdd10;
    lVar15 = *(long *)puVar4;
    pvVar16 = (void *)**(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar15);
    }
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)puVar6,*(void **)puVar2,pvVar16,(void *)0x0);
    pvVar16 = self->_OnGameOverForAdInit;
    if (pvVar16 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0138e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((long)pvVar16 + 0x18))
                (*(undefined8 *)((long)pvVar16 + 0x40),*(undefined8 *)((long)pvVar16 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  bVar7 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0);
  puVar3 = PTR_DAT_029bbd80;
  if ((bVar7) || (self->_adServiceRetryInFlight != false)) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_029bbd80;
  pvVar16 = extraout_x1_01;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar13 = *(long *)puVar3;
    pvVar16 = extraout_x1_02;
  }
  puVar5 = PTR_DAT_029b9770;
  puVar3 = PTR_DAT_029b8078;
  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x20) == '\0') {
    bVar7 = GameController_ShouldRetryAdInitNow_12887ac(self,pvVar16);
    if (!bVar7) {
      return;
    }
    lVar15 = *(long *)puVar2;
    lVar13 = *(long *)(lVar15 + 0x38);
    if (lVar13 == 0) {
      NativeHelper_011b5290(lVar15);
      lVar13 = *(long *)(lVar15 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    lVar15 = *(long *)puVar4;
    pvVar16 = (void *)**(undefined8 **)(lVar13 + 0xb8);
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar15);
    }
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)puVar6,*(void **)PTR_DAT_029bdd18,pvVar16,(void *)0x0);
    puVar2 = PTR_DAT_029bdca0;
    if ((bRam0000000002b94cc5 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b8c90);
      NativeHelper_011df0b4(PTR_DAT_029b8308);
      NativeHelper_011df0b4(PTR_DAT_029bd9e8);
      NativeHelper_011df0b4(PTR_DAT_029bd9f0);
      NativeHelper_011df0b4(PTR_DAT_029b9758);
      NativeHelper_011df0b4(PTR_DAT_029b9638);
      NativeHelper_011df0b4(PTR_DAT_029b8bc0);
      NativeHelper_011df0b4(PTR_DAT_029b8078);
      NativeHelper_011df0b4(PTR_DAT_029bbd80);
      NativeHelper_011df0b4(PTR_DAT_029bd9d0);
      NativeHelper_011df0b4(PTR_DAT_029bdca8);
      NativeHelper_011df0b4(PTR_DAT_029bdca0);
      NativeHelper_011df0b4(PTR_DAT_029bdcb0);
      NativeHelper_011df0b4(PTR_DAT_029bdcb8);
      NativeHelper_011df0b4(PTR_DAT_029bdcc0);
      NativeHelper_011df0b4(PTR_DAT_029bdcc8);
      NativeHelper_011df0b4(PTR_DAT_029bdcd0);
      NativeHelper_011df0b4(PTR_DAT_029bdcd8);
      NativeHelper_011df0b4(PTR_DAT_029bdc20);
      NativeHelper_011df0b4(PTR_DAT_029bdce0);
      bRam0000000002b94cc5 = 1;
    }
    lVar13 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
    GameController___c__DisplayClass46_0___c__DisplayClass46_0_12ac63c(lVar13,0);
    if (lVar13 != 0) {
      *(GameController **)(lVar13 + 0x18) = self;
      if (self->_privacyFlowInProgress != false) {
        return;
      }
      piVar17 = &self->_AdInitRetryCount;
      self->_privacyFlowInProgress = true;
      *piVar17 = *piVar17 + 1;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      puVar2 = PTR_DAT_029b8c90;
      uVar9 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
      NativeHelper_01f80268(uVar9,lVar13,*(undefined8 *)PTR_DAT_029bdca8,0);
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
      puVar4 = PTR_DAT_029bbd80;
      lVar15 = *(long *)PTR_DAT_029bbd80;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar15 = *(long *)puVar4;
        uVar9 = *(undefined8 *)(lVar13 + 0x10);
      }
      plVar8 = (long *)NativeHelper_02041514
                                 (*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x48),uVar9,0);
      if (plVar8 == (long *)0x0) {
        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = 0;
      }
      else {
        lVar13 = *(long *)puVar2;
        if ((*plVar8 != lVar13) ||
           (*(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = plVar8, *plVar8 != lVar13)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df678();
        }
      }
      plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
      AdInitStatus_IsAdServiceReady_12abc64((void *)0x0);
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,&stack0xffffffffffffffb8);
      if (plVar8 != (long *)0x0) {
        if ((lVar13 != 0) &&
           (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
code_r0x0138db18:
          uVar9 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df1ac(uVar9,0);
        }
        if ((int)plVar8[3] != 0) {
          plVar8[4] = lVar13;
          iStack_54 = *piVar17;
          lVar13 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_54);
          if ((lVar13 != 0) &&
             (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
          goto code_r0x0138db18;
          if (1 < *(uint *)(plVar8 + 3)) {
            plVar8[5] = lVar13;
            if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            Imangi_Utilities_ImangiLog_ForceLog_121fae8
                      (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdcb8,plVar8,(void *)0x0);
            fVar18 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
            fVar19 = self->_LaunchTime;
            plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
            pvVar16 = (void *)NativeHelper_01ffa318(&stack0xffffffffffffffbc,0);
            puVar2 = PTR_DAT_029bd9f0;
            pIVar11 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar11,*(void **)PTR_DAT_029bdcb0,pvVar16,(void *)0x0);
            if (plVar8 == (long *)0x0) goto code_r0x0138db24;
            if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0
               )) goto code_r0x0138db18;
            if ((int)plVar8[3] != 0) {
              plVar8[4] = (long)pIVar11;
              pvVar16 = (void *)NativeHelper_01ffa318(piVar17,0);
              pIVar11 = (Imangi_Analytics_EventParameter *)
                        NativeHelper_011df2d0(*(undefined8 *)puVar2);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar11,*(void **)PTR_DAT_029bdcd0,pvVar16,(void *)0x0);
              if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
                 lVar13 == 0)) goto code_r0x0138db18;
              if (1 < *(uint *)(plVar8 + 3)) {
                plVar8[5] = (long)pIVar11;
                pvVar16 = *(void **)PTR_DAT_029b9758;
                if (*(int *)((long)pvVar16 + 0xe0) == 0) {
                  pvVar16 = (void *)NativeHelper_011df1bc();
                }
                pvVar16 = GameController_CurrentNetworkState_12887f0(pvVar16);
                pIVar11 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar11,*(void **)PTR_DAT_029bdce0,pvVar16,(void *)0x0);
                if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
                   lVar13 == 0)) goto code_r0x0138db18;
                if (2 < *(uint *)(plVar8 + 3)) {
                  plVar8[6] = (long)pIVar11;
                  pIVar11 = (Imangi_Analytics_EventParameter *)
                            NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_029bdcd8;
                  pvVar12 = *(void **)PTR_DAT_029bdcd8;
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar11,*(void **)PTR_DAT_029bdcc0,pvVar12,(void *)0x0);
                  pvVar16 = extraout_x0;
                  if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (pvVar16 = (void *)NativeHelper_011df1c0
                                                  (pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
                     pvVar16 == (void *)0x0)) goto code_r0x0138db18;
                  if (3 < *(uint *)(plVar8 + 3)) {
                    plVar8[7] = (long)pIVar11;
                    pIVar11 = GameController_AgeRestrictedParam_128887c(pvVar16);
                    pvVar16 = (void *)0x0;
                    if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (pvVar16 = (void *)NativeHelper_011df1c0
                                                    (pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
                       pvVar16 == (void *)0x0)) goto code_r0x0138db18;
                    if (4 < *(uint *)(plVar8 + 3)) {
                      plVar8[8] = (long)pIVar11;
                      pIVar11 = GameController_RegulationBranchParam_1288978(pvVar16);
                      pvVar16 = extraout_x1;
                      if (pIVar11 != (Imangi_Analytics_EventParameter *)0x0) {
                        auVar20 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40));
                        pvVar16 = auVar20._8_8_;
                        if (auVar20._0_8_ == 0) goto code_r0x0138db18;
                      }
                      if (5 < *(uint *)(plVar8 + 3)) {
                        plVar8[9] = (long)pIVar11;
                        pvVar16 = GameController_AdServiceStateParams_1288a68(self,pvVar16);
                        pvVar16 = GameController_Concat_12894a8(plVar8,pvVar16,pvVar12);
                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                          NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                        }
                        TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar16,(void *)0x0)
                        ;
                        self->_needsPrivacyFlowAfterGame = false;
                        GameController_TriggerPrivacyFlowForAdInit_1289b28(self,runtimeMethod_00);
                        pvVar16 = (void *)NativeHelper_0138deb8
                                                    (fVar18 - fVar19,self,*(undefined8 *)puVar2);
                        UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar16,(void *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
code_r0x0138db24:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (self->_adInitHeldForRegulation != false) {
    if (self->_privacyFlowInProgress != false) {
      return;
    }
    lVar13 = *(long *)PTR_DAT_029bdd08;
    if ((bRam0000000002b94cc9 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b9758);
      NativeHelper_011df0b4(PTR_DAT_029b9638);
      NativeHelper_011df0b4(PTR_DAT_029bdc38);
      NativeHelper_011df0b4(PTR_DAT_029b8078);
      NativeHelper_011df0b4(PTR_DAT_029bdd20);
      NativeHelper_011df0b4(PTR_DAT_029bdc20);
      bRam0000000002b94cc9 = 1;
    }
    plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,2);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if ((lVar13 != 0) &&
       (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
code_r0x0138e320:
      uVar9 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar9,0);
    }
    puVar2 = PTR_DAT_029b9758;
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar13;
      puVar4 = PTR_DAT_029bdc38;
      pvVar16 = *(void **)puVar2;
      if (*(int *)((long)pvVar16 + 0xe0) == 0) {
        pvVar16 = (void *)NativeHelper_011df1bc();
      }
      GameController_CurrentRegulationType_1288fd0(pvVar16);
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)puVar4,&stack0xffffffffffffffdc);
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138e320;
      puVar2 = PTR_DAT_029b9638;
      if (1 < *(uint *)(plVar8 + 3)) {
        plVar8[5] = lVar13;
        puVar6 = PTR_DAT_029bdd20;
        puVar4 = PTR_DAT_029bdc20;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        Imangi_Utilities_ImangiLog_ForceLog_121fae8
                  (*(void **)puVar4,*(void **)puVar6,plVar8,(void *)0x0);
        GameController_PostGamePrivacyFlow_128953c(self,(void *)0x0,plVar8);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
  if ((bRam0000000002b94cca & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029bd248);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdd28);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdd30);
    NativeHelper_011df0b4(PTR_DAT_029bdd38);
    NativeHelper_011df0b4(PTR_DAT_029bdd40);
    NativeHelper_011df0b4(PTR_DAT_029bdd48);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cca = 1;
  }
  iStack_54 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  mgr = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
  if (mgr == (Imangi_Ad_AdManager *)0x0) goto code_r0x0138eba8;
  x = mgr->ActiveServiceHandler;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar16 = (void *)0x0;
  bVar7 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  if (bVar7) {
    lVar15 = *(long *)PTR_DAT_029b7fe8;
    lVar13 = *(long *)(lVar15 + 0x38);
    if (lVar13 == 0) {
      NativeHelper_011b5290(lVar15);
      lVar13 = *(long *)(lVar15 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    pvVar16 = (void *)**(undefined8 **)(lVar13 + 0xb8);
    puVar14 = (undefined8 *)PTR_DAT_029bdd48;
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
      puVar14 = (undefined8 *)PTR_DAT_029bdd48;
    }
code_r0x0138e5e8:
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)PTR_DAT_029bdc20,(void *)*puVar14,pvVar16,(void *)0x0);
    return;
  }
  if (*(int *)&mgr->ActiveService == 2) {
    lVar15 = *(long *)PTR_DAT_029b7fe8;
    lVar13 = *(long *)(lVar15 + 0x38);
    if (lVar13 == 0) {
      NativeHelper_011b5290(lVar15);
      lVar13 = *(long *)(lVar15 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = NativeHelper_011b5234();
    }
    pvVar16 = (void *)**(undefined8 **)(lVar13 + 0xb8);
    puVar14 = (undefined8 *)PTR_DAT_029bdd38;
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
      puVar14 = (undefined8 *)PTR_DAT_029bdd38;
    }
    goto code_r0x0138e5e8;
  }
  self->_adServiceRetryInFlight = true;
  fVar18 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  fVar19 = self->_LaunchTime;
  GameController_RefreshRcReachability_12892e0(self_00,inReason,pvVar16);
  puVar2 = PTR_DAT_029b9758;
  if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pAVar10 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  if (pAVar10 != (AdInitRetryConfigData *)0x0) {
    iVar1 = pAVar10->MaxAppLovinRetries;
    fVar18 = fVar18 - fVar19;
    if ((iVar1 < 0) || (self->_appLovinRetryCount < iVar1)) {
      self->_appLovinRetryCount = self->_appLovinRetryCount + 1;
      plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,4);
      puVar4 = PTR_DAT_029b8bc0;
      iStack_58 = self->_appLovinRetryCount;
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_58);
      if (plVar8 == (long *)0x0) goto code_r0x0138eba8;
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if ((int)plVar8[3] == 0) goto code_r0x0138eba4;
      plVar8[4] = lVar13;
      iStack_5c = iVar1;
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)puVar4,&iStack_5c);
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if (*(uint *)(plVar8 + 3) < 2) goto code_r0x0138eba4;
      plVar8[5] = lVar13;
      pvVar16 = *(void **)puVar2;
      if (*(int *)((long)pvVar16 + 0xe0) == 0) {
        pvVar16 = (void *)NativeHelper_011df1bc();
      }
      auStack_60[0] = GameController_MaxSdkInitialized_1288a18(pvVar16);
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_60);
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if (*(uint *)(plVar8 + 3) < 3) goto code_r0x0138eba4;
      plVar8[6] = lVar13;
      iStack_64 = -0x80000000;
      if (fVar18 != INFINITY) {
        iStack_64 = (int)fVar18;
      }
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)puVar4,&iStack_64);
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if (*(uint *)(plVar8 + 3) < 4) goto code_r0x0138eba4;
      plVar8[7] = lVar13;
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd28,plVar8,(void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_029bd248 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_01e47a60(0,0);
    }
    else {
      plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
      puVar4 = PTR_DAT_029b8bc0;
      iStack_58 = self->_appLovinRetryCount;
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_58);
      if (plVar8 == (long *)0x0) goto code_r0x0138eba8;
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if ((int)plVar8[3] == 0) goto code_r0x0138eba4;
      plVar8[4] = lVar13;
      iStack_5c = iVar1;
      lVar13 = NativeHelper_011df1c4(*(undefined8 *)puVar4,&iStack_5c);
      if ((lVar13 != 0) &&
         (lVar15 = NativeHelper_011df1c0(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
      goto code_r0x0138ebac;
      if (*(uint *)(plVar8 + 3) < 2) goto code_r0x0138eba4;
      plVar8[5] = lVar13;
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd40,plVar8,(void *)0x0);
      self->_switchedToAdMob = true;
      GameController_SwitchToAdMob_128b2c8(self,mgr,plVar8);
    }
    plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
    iStack_54 = -0x80000000;
    if (fVar18 != INFINITY) {
      iStack_54 = (int)fVar18;
    }
    pvVar16 = (void *)NativeHelper_01ffa318(&iStack_54,0);
    puVar4 = PTR_DAT_029bd9f0;
    pIVar11 = (Imangi_Analytics_EventParameter *)
              NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar11,*(void **)PTR_DAT_029bdcb0,pvVar16,(void *)0x0);
    if (plVar8 != (long *)0x0) {
      if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
code_r0x0138ebac:
        uVar9 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar9,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = (long)pIVar11;
        pvVar16 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
        pIVar11 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar11,*(void **)PTR_DAT_029bdcd0,pvVar16,(void *)0x0);
        if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
        goto code_r0x0138ebac;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = (long)pIVar11;
          pvVar16 = *(void **)puVar2;
          if (*(int *)((long)pvVar16 + 0xe0) == 0) {
            pvVar16 = (void *)NativeHelper_011df1bc();
          }
          pvVar16 = GameController_CurrentNetworkState_12887f0(pvVar16);
          pIVar11 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar11,*(void **)PTR_DAT_029bdce0,pvVar16,(void *)0x0);
          if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar13 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
          goto code_r0x0138ebac;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = (long)pIVar11;
            pIVar11 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar4);
            puVar2 = PTR_DAT_029bdd30;
            pvVar12 = *(void **)PTR_DAT_029bdd30;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar11,*(void **)PTR_DAT_029bdcc0,pvVar12,(void *)0x0);
            pvVar16 = extraout_x0_00;
            if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
               (pvVar16 = (void *)NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
               pvVar16 == (void *)0x0)) goto code_r0x0138ebac;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = (long)pIVar11;
              pIVar11 = GameController_AgeRestrictedParam_128887c(pvVar16);
              pvVar16 = (void *)0x0;
              if ((pIVar11 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (pvVar16 = (void *)NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40)),
                 pvVar16 == (void *)0x0)) goto code_r0x0138ebac;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = (long)pIVar11;
                pIVar11 = GameController_RegulationBranchParam_1288978(pvVar16);
                pvVar16 = extraout_x1_03;
                if (pIVar11 != (Imangi_Analytics_EventParameter *)0x0) {
                  auVar20 = NativeHelper_011df1c0(pIVar11,*(undefined8 *)(*plVar8 + 0x40));
                  pvVar16 = auVar20._8_8_;
                  if (auVar20._0_8_ == 0) goto code_r0x0138ebac;
                }
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = (long)pIVar11;
                  pvVar16 = GameController_AdServiceStateParams_1288a68(self,pvVar16);
                  pvVar16 = GameController_Concat_12894a8(plVar8,pvVar16,pvVar12);
                  if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                  }
                  TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar16,(void *)0x0);
                  pvVar16 = (void *)NativeHelper_0138f368(fVar18,self,*(undefined8 *)puVar2,1);
                  UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar16,(void *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
code_r0x0138eba4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
code_r0x0138eba8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

