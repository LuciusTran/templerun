// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void EmitAdInitRetryResult(float secondsSinceLaunch, string trigger) { }
// Ghidra address: 0138f9b0; ELF VA: 0x128f9b0; file offset: 0x128b9b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_EmitAdInitRetryResult_128b9b0
               (GameController *self,float secondsSinceLaunch,void *trigger,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  Imangi_Ad_AdManager *pIVar11;
  void *pvVar12;
  Imangi_Analytics_EventParameter *pIVar13;
  void *extraout_x0;
  void *extraout_x0_00;
  undefined8 uVar14;
  void *extraout_x1;
  undefined1 auVar15 [16];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  int iStack_48;
  char acStack_44 [4];
  
  puVar1 = PTR_DAT_029b8078;
  if ((bRam0000000002b94cce & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bd1f0);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdd80);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdd88);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdd90);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cce = 1;
  }
  iStack_48 = 0;
  bVar7 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0);
  acStack_44[0] = bVar7;
  plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,6);
  if (plVar8 == (long *)0x0) {
LAB_0138ffe8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((trigger != (void *)0x0) &&
     (lVar9 = NativeHelper_011df1c0(trigger,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_0138ffdc:
    uVar14 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar14,0);
  }
  puVar1 = PTR_DAT_029b8308;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = (long)trigger;
    auStack_54[0] = bVar7;
    lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar1,auStack_54);
    if ((lVar9 != 0) &&
       (lVar10 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_0138ffdc;
    puVar2 = PTR_DAT_029b9770;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar9;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pIVar11 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
      if (pIVar11 == (Imangi_Ad_AdManager *)0x0) goto LAB_0138ffe8;
      uStack_58 = *(undefined4 *)&pIVar11->ActiveService;
      lVar9 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bd1f0,&uStack_58);
      if ((lVar9 != 0) &&
         (lVar10 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_0138ffdc;
      puVar2 = PTR_DAT_029b8bc0;
      if (2 < *(uint *)(plVar8 + 3)) {
        plVar8[6] = lVar9;
        iStack_5c = self->_appLovinRetryCount;
        lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_5c);
        if ((lVar9 != 0) &&
           (lVar10 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_0138ffdc;
        if (3 < *(uint *)(plVar8 + 3)) {
          plVar8[7] = lVar9;
          auStack_60[0] = self->_switchedToAdMob;
          lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar1,auStack_60);
          if ((lVar9 != 0) &&
             (lVar10 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0138ffdc;
          puVar2 = PTR_DAT_029b9758;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = lVar9;
            pvVar12 = *(void **)puVar2;
            if (*(int *)((long)pvVar12 + 0xe0) == 0) {
              pvVar12 = (void *)NativeHelper_011df1bc();
            }
            auStack_64[0] = GameController_MaxSdkInitialized_1288a18(pvVar12);
            lVar9 = NativeHelper_011df1c4(*(undefined8 *)puVar1,auStack_64);
            if ((lVar9 != 0) &&
               (lVar10 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_0138ffdc;
            puVar2 = PTR_DAT_029b9638;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              puVar6 = PTR_DAT_029bdd88;
              puVar4 = PTR_DAT_029bdc20;
              puVar3 = PTR_DAT_029bd9e8;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              puVar5 = PTR_DAT_029bdd80;
              puVar2 = PTR_DAT_029bd9f0;
              Imangi_Utilities_ImangiLog_ForceLog_121fae8
                        (*(void **)puVar4,*(void **)puVar6,plVar8,(void *)0x0);
              plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,7);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)puVar1);
              }
              pvVar12 = (void *)NativeHelper_01f83748(acStack_44,0);
              pIVar13 = (Imangi_Analytics_EventParameter *)
                        NativeHelper_011df2d0(*(undefined8 *)puVar2);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar13,*(void **)puVar5,pvVar12,(void *)0x0);
              if (plVar8 == (long *)0x0) goto LAB_0138ffe8;
              if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar9 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                 )) goto LAB_0138ffdc;
              puVar1 = PTR_DAT_029bdcb0;
              if ((int)plVar8[3] != 0) {
                iStack_48 = -0x80000000;
                if (secondsSinceLaunch != INFINITY) {
                  iStack_48 = (int)secondsSinceLaunch;
                }
                plVar8[4] = (long)pIVar13;
                pvVar12 = (void *)NativeHelper_01ffa318(&iStack_48,0);
                pIVar13 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar13,*(void **)puVar1,pvVar12,(void *)0x0);
                if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar9 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar8 + 0x40)),
                   lVar9 == 0)) goto LAB_0138ffdc;
                puVar1 = PTR_DAT_029bdcd0;
                if (1 < *(uint *)(plVar8 + 3)) {
                  plVar8[5] = (long)pIVar13;
                  pvVar12 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
                  pIVar13 = (Imangi_Analytics_EventParameter *)
                            NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar13,*(void **)puVar1,pvVar12,(void *)0x0);
                  pvVar12 = extraout_x0;
                  if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (pvVar12 = (void *)NativeHelper_011df1c0
                                                  (pIVar13,*(undefined8 *)(*plVar8 + 0x40)),
                     pvVar12 == (void *)0x0)) goto LAB_0138ffdc;
                  puVar1 = PTR_DAT_029bdce0;
                  if (2 < *(uint *)(plVar8 + 3)) {
                    plVar8[6] = (long)pIVar13;
                    pvVar12 = GameController_CurrentNetworkState_12887f0(pvVar12);
                    pIVar13 = (Imangi_Analytics_EventParameter *)
                              NativeHelper_011df2d0(*(undefined8 *)puVar2);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar13,*(void **)puVar1,pvVar12,(void *)0x0);
                    if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar9 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_0138ffdc;
                    if (3 < *(uint *)(plVar8 + 3)) {
                      plVar8[7] = (long)pIVar13;
                      puVar1 = PTR_DAT_029bdcc0;
                      pIVar13 = (Imangi_Analytics_EventParameter *)
                                NativeHelper_011df2d0(*(undefined8 *)puVar2);
                      Imangi_Analytics_EventParameter_EventParameter_126b488
                                (pIVar13,*(void **)puVar1,trigger,(void *)0x0);
                      pvVar12 = extraout_x0_00;
                      if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (pvVar12 = (void *)NativeHelper_011df1c0
                                                      (pIVar13,*(undefined8 *)(*plVar8 + 0x40)),
                         pvVar12 == (void *)0x0)) goto LAB_0138ffdc;
                      if (4 < *(uint *)(plVar8 + 3)) {
                        plVar8[8] = (long)pIVar13;
                        pIVar13 = GameController_AgeRestrictedParam_128887c(pvVar12);
                        pvVar12 = (void *)0x0;
                        if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                           (pvVar12 = (void *)NativeHelper_011df1c0
                                                        (pIVar13,*(undefined8 *)(*plVar8 + 0x40)),
                           pvVar12 == (void *)0x0)) goto LAB_0138ffdc;
                        if (5 < *(uint *)(plVar8 + 3)) {
                          plVar8[9] = (long)pIVar13;
                          pIVar13 = GameController_RegulationBranchParam_1288978(pvVar12);
                          pvVar12 = extraout_x1;
                          if (pIVar13 != (Imangi_Analytics_EventParameter *)0x0) {
                            auVar15 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar8 + 0x40))
                            ;
                            pvVar12 = auVar15._8_8_;
                            if (auVar15._0_8_ == 0) goto LAB_0138ffdc;
                          }
                          puVar2 = PTR_DAT_029bdd90;
                          puVar1 = PTR_DAT_029bd9d0;
                          if (6 < *(uint *)(plVar8 + 3)) {
                            plVar8[10] = (long)pIVar13;
                            pvVar12 = GameController_AdServiceStateParams_1288a68(self,pvVar12);
                            pvVar12 = GameController_Concat_12894a8(plVar8,pvVar12,trigger);
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              NativeHelper_011df1bc(*(long *)puVar1);
                            }
                            TRAnalytics_LogEvent_12b7164(*(void **)puVar2,pvVar12,(void *)0x0);
                            if (acStack_44[0] != '\0') {
                              self->_WasRecoveredByRetry = true;
                            }
                            return;
                          }
                        }
                      }
                    }
                  }
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

