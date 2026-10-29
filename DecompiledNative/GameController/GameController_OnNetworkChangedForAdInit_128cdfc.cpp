// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnNetworkChangedForAdInit(NetworkReachability oldState, NetworkReachability newState) { }
// Ghidra address: 01390dfc; ELF VA: 0x1290dfc; file offset: 0x128cdfc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_OnNetworkChangedForAdInit_128cdfc
               (GameController *self,void *oldState,void *newState,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  Imangi_Analytics_EventParameter *pIVar9;
  void *extraout_x0;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_00;
  void *inParameterValue;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  int iStack_54;
  int iStack_38;
  int iStack_34;
  
  iVar1 = (int)newState;
  if ((bRam0000000002b94cd7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bb308);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bddb8);
    NativeHelper_011df0b4(PTR_DAT_029bddc0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bddc8);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bddd0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cd7 = 1;
  }
  iStack_34 = 0;
  if (iVar1 != 0) {
    bVar3 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0);
    puVar2 = PTR_DAT_029bbd80;
    if (bVar3) {
      uVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb308);
      NativeHelper_01698c44(uVar4,self,*(undefined8 *)PTR_DAT_029bddb8,0);
      if (*(int *)(*(long *)PTR_DAT_029ba5a8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiNetworkHelper_RemoveOnNetworkReachabilityChangedDelegate_1234f88
                (uVar4,0);
    }
    else {
      lVar5 = *(long *)PTR_DAT_029bbd80;
      pvVar8 = extraout_x1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar5 = *(long *)puVar2;
        pvVar8 = extraout_x1_00;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x20) == '\0') {
        if ((self->IsGameStarted == false) || (self->IsGameOver != false)) {
          GameController_TriggerPrivacyFlowForAdInit_1289b28(self,pvVar8);
        }
        else if (self->_needsPrivacyFlowAfterGame == false) {
          self->_needsPrivacyFlowAfterGame = true;
          pvVar8 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
          NativeHelper_01f80268(pvVar8,self,*(undefined8 *)PTR_DAT_029bddc0,0);
          self->_OnGameOverForAdInit = pvVar8;
        }
      }
      else {
        if (self->_adInitHeldForRegulation == false) {
          piVar10 = &self->_AdInitRetryCount;
          *piVar10 = *piVar10 + 1;
          fVar11 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
          fVar12 = self->_LaunchTime;
          plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
          puVar2 = PTR_DAT_029b8bc0;
          iStack_38 = *piVar10;
          lVar5 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_38);
          if (plVar6 == (long *)0x0) {
LAB_01391408:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if ((lVar5 != 0) &&
             (lVar7 = NativeHelper_011df1c0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_013913fc:
            uVar4 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df1ac(uVar4,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar5;
            fVar11 = fVar11 - fVar12;
            iVar1 = -0x80000000;
            if (fVar11 != INFINITY) {
              iVar1 = (int)fVar11;
            }
            iStack_54 = iVar1;
            lVar5 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_54);
            if ((lVar5 != 0) &&
               (lVar7 = NativeHelper_011df1c0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_013913fc;
            if (1 < *(uint *)(plVar6 + 3)) {
              plVar6[5] = lVar5;
              if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              Imangi_Utilities_ImangiLog_ForceLog_121fae8
                        (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bddd0,plVar6,(void *)0x0);
              plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
              iStack_34 = iVar1;
              pvVar8 = (void *)NativeHelper_01ffa318(&iStack_34,0);
              puVar2 = PTR_DAT_029bd9f0;
              pIVar9 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar9,*(void **)PTR_DAT_029bdcb0,pvVar8,(void *)0x0);
              if (plVar6 == (long *)0x0) goto LAB_01391408;
              if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar5 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)
                 ) goto LAB_013913fc;
              if ((int)plVar6[3] != 0) {
                plVar6[4] = (long)pIVar9;
                pvVar8 = (void *)NativeHelper_01ffa318(piVar10,0);
                pIVar9 = (Imangi_Analytics_EventParameter *)
                         NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar9,*(void **)PTR_DAT_029bdcd0,pvVar8,(void *)0x0);
                if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar5 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar6 + 0x40)),
                   lVar5 == 0)) goto LAB_013913fc;
                if (1 < *(uint *)(plVar6 + 3)) {
                  plVar6[5] = (long)pIVar9;
                  pvVar8 = *(void **)PTR_DAT_029b9758;
                  if (*(int *)((long)pvVar8 + 0xe0) == 0) {
                    pvVar8 = (void *)NativeHelper_011df1bc();
                  }
                  pvVar8 = GameController_CurrentNetworkState_12887f0(pvVar8);
                  pIVar9 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar9,*(void **)PTR_DAT_029bdce0,pvVar8,(void *)0x0);
                  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar5 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar6 + 0x40)),
                     lVar5 == 0)) goto LAB_013913fc;
                  if (2 < *(uint *)(plVar6 + 3)) {
                    plVar6[6] = (long)pIVar9;
                    pIVar9 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar2);
                    puVar2 = PTR_DAT_029bddc8;
                    inParameterValue = *(void **)PTR_DAT_029bddc8;
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar9,*(void **)PTR_DAT_029bdcc0,inParameterValue,(void *)0x0);
                    pvVar8 = extraout_x0;
                    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (pvVar8 = (void *)NativeHelper_011df1c0
                                                   (pIVar9,*(undefined8 *)(*plVar6 + 0x40)),
                       pvVar8 == (void *)0x0)) goto LAB_013913fc;
                    if (3 < *(uint *)(plVar6 + 3)) {
                      plVar6[7] = (long)pIVar9;
                      pIVar9 = GameController_AgeRestrictedParam_128887c(pvVar8);
                      pvVar8 = (void *)0x0;
                      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (pvVar8 = (void *)NativeHelper_011df1c0
                                                     (pIVar9,*(undefined8 *)(*plVar6 + 0x40)),
                         pvVar8 == (void *)0x0)) goto LAB_013913fc;
                      if (4 < *(uint *)(plVar6 + 3)) {
                        plVar6[8] = (long)pIVar9;
                        pIVar9 = GameController_RegulationBranchParam_1288978(pvVar8);
                        pvVar8 = extraout_x1_01;
                        if (pIVar9 != (Imangi_Analytics_EventParameter *)0x0) {
                          auVar13 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar6 + 0x40));
                          pvVar8 = auVar13._8_8_;
                          if (auVar13._0_8_ == 0) goto LAB_013913fc;
                        }
                        if (5 < *(uint *)(plVar6 + 3)) {
                          plVar6[9] = (long)pIVar9;
                          pvVar8 = GameController_AdServiceStateParams_1288a68(self,pvVar8);
                          pvVar8 = GameController_Concat_12894a8(plVar6,pvVar8,inParameterValue);
                          if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                            NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                          }
                          TRAnalytics_LogEvent_12b7164
                                    (*(void **)PTR_DAT_029bdcc8,pvVar8,(void *)0x0);
                          GameController_InitAdServices_128b4a8(self,runtimeMethod_00);
                          pvVar8 = (void *)NativeHelper_0138deb8(fVar11,self,*(undefined8 *)puVar2);
                          UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar8,(void *)0x0);
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
        if ((self->IsGameStarted == false) || (self->IsGameOver != false)) {
          GameController_ReleaseHeldAdInit_128a1b0(self,*(void **)PTR_DAT_029bddc8,newState);
        }
      }
    }
  }
  return;
}

