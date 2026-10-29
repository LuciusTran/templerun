// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RetryAdServiceInit() { }
// Ghidra address: 0138e330; ELF VA: 0x128e330; file offset: 0x128a330
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_RetryAdServiceInit_128a330(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Imangi_Ad_AdManager *mgr;
  GameController *self_00;
  AdInitRetryConfigData *pAVar5;
  long *plVar6;
  Imangi_Analytics_EventParameter *pIVar7;
  void *extraout_x0;
  undefined8 uVar8;
  void *extraout_x1;
  void *inReason;
  void *extraout_x1_00;
  void *pvVar9;
  void *inParameterValue;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  Imangi_Ad_ImangiAdServiceHandler *x;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  puVar3 = PTR_DAT_029b9770;
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
    runtimeMethod = extraout_x1;
  }
  iStack_54 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  mgr = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
  if (mgr == (Imangi_Ad_AdManager *)0x0) goto LAB_0138eba8;
  x = mgr->ActiveServiceHandler;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar9 = (void *)0x0;
  bVar4 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
  if (bVar4) {
    lVar12 = *(long *)PTR_DAT_029b7fe8;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      NativeHelper_011b5290(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    pvVar9 = (void *)**(undefined8 **)(lVar10 + 0xb8);
    puVar11 = (undefined8 *)PTR_DAT_029bdd48;
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
      puVar11 = (undefined8 *)PTR_DAT_029bdd48;
    }
LAB_0138e5e8:
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)PTR_DAT_029bdc20,(void *)*puVar11,pvVar9,(void *)0x0);
    return;
  }
  if (*(int *)&mgr->ActiveService == 2) {
    lVar12 = *(long *)PTR_DAT_029b7fe8;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      NativeHelper_011b5290(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    pvVar9 = (void *)**(undefined8 **)(lVar10 + 0xb8);
    puVar11 = (undefined8 *)PTR_DAT_029bdd38;
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
      puVar11 = (undefined8 *)PTR_DAT_029bdd38;
    }
    goto LAB_0138e5e8;
  }
  self->_adServiceRetryInFlight = true;
  fVar13 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  fVar14 = self->_LaunchTime;
  GameController_RefreshRcReachability_12892e0(self_00,inReason,pvVar9);
  puVar3 = PTR_DAT_029b9758;
  if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pAVar5 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  if (pAVar5 != (AdInitRetryConfigData *)0x0) {
    iVar1 = pAVar5->MaxAppLovinRetries;
    fVar13 = fVar13 - fVar14;
    if ((iVar1 < 0) || (self->_appLovinRetryCount < iVar1)) {
      self->_appLovinRetryCount = self->_appLovinRetryCount + 1;
      plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,4);
      puVar2 = PTR_DAT_029b8bc0;
      iStack_58 = self->_appLovinRetryCount;
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_58);
      if (plVar6 == (long *)0x0) goto LAB_0138eba8;
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if ((int)plVar6[3] == 0) goto LAB_0138eba4;
      plVar6[4] = lVar10;
      iStack_5c = iVar1;
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_5c);
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_0138eba4;
      plVar6[5] = lVar10;
      pvVar9 = *(void **)puVar3;
      if (*(int *)((long)pvVar9 + 0xe0) == 0) {
        pvVar9 = (void *)NativeHelper_011df1bc();
      }
      auStack_60[0] = GameController_MaxSdkInitialized_1288a18(pvVar9);
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_60);
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_0138eba4;
      plVar6[6] = lVar10;
      iStack_64 = -0x80000000;
      if (fVar13 != INFINITY) {
        iStack_64 = (int)fVar13;
      }
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_64);
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_0138eba4;
      plVar6[7] = lVar10;
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd28,plVar6,(void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_029bd248 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_01e47a60(0,0);
    }
    else {
      plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
      puVar2 = PTR_DAT_029b8bc0;
      iStack_58 = self->_appLovinRetryCount;
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_58);
      if (plVar6 == (long *)0x0) goto LAB_0138eba8;
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if ((int)plVar6[3] == 0) goto LAB_0138eba4;
      plVar6[4] = lVar10;
      iStack_5c = iVar1;
      lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_5c);
      if ((lVar10 != 0) &&
         (lVar12 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar12 == 0))
      goto LAB_0138ebac;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_0138eba4;
      plVar6[5] = lVar10;
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd40,plVar6,(void *)0x0);
      self->_switchedToAdMob = true;
      GameController_SwitchToAdMob_128b2c8(self,mgr,plVar6);
    }
    plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
    iStack_54 = -0x80000000;
    if (fVar13 != INFINITY) {
      iStack_54 = (int)fVar13;
    }
    pvVar9 = (void *)NativeHelper_01ffa318(&iStack_54,0);
    puVar2 = PTR_DAT_029bd9f0;
    pIVar7 = (Imangi_Analytics_EventParameter *)
             NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar7,*(void **)PTR_DAT_029bdcb0,pvVar9,(void *)0x0);
    if (plVar6 != (long *)0x0) {
      if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar10 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
LAB_0138ebac:
        uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar8,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = (long)pIVar7;
        pvVar9 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
        pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar7,*(void **)PTR_DAT_029bdcd0,pvVar9,(void *)0x0);
        if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar10 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
        goto LAB_0138ebac;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = (long)pIVar7;
          pvVar9 = *(void **)puVar3;
          if (*(int *)((long)pvVar9 + 0xe0) == 0) {
            pvVar9 = (void *)NativeHelper_011df1bc();
          }
          pvVar9 = GameController_CurrentNetworkState_12887f0(pvVar9);
          pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar7,*(void **)PTR_DAT_029bdce0,pvVar9,(void *)0x0);
          if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar10 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto LAB_0138ebac;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = (long)pIVar7;
            pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2)
            ;
            puVar3 = PTR_DAT_029bdd30;
            inParameterValue = *(void **)PTR_DAT_029bdd30;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar7,*(void **)PTR_DAT_029bdcc0,inParameterValue,(void *)0x0);
            pvVar9 = extraout_x0;
            if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
               (pvVar9 = (void *)NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
               pvVar9 == (void *)0x0)) goto LAB_0138ebac;
            if (3 < *(uint *)(plVar6 + 3)) {
              plVar6[7] = (long)pIVar7;
              pIVar7 = GameController_AgeRestrictedParam_128887c(pvVar9);
              pvVar9 = (void *)0x0;
              if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (pvVar9 = (void *)NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40)),
                 pvVar9 == (void *)0x0)) goto LAB_0138ebac;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = (long)pIVar7;
                pIVar7 = GameController_RegulationBranchParam_1288978(pvVar9);
                pvVar9 = extraout_x1_00;
                if (pIVar7 != (Imangi_Analytics_EventParameter *)0x0) {
                  auVar15 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar6 + 0x40));
                  pvVar9 = auVar15._8_8_;
                  if (auVar15._0_8_ == 0) goto LAB_0138ebac;
                }
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = (long)pIVar7;
                  pvVar9 = GameController_AdServiceStateParams_1288a68(self,pvVar9);
                  pvVar9 = GameController_Concat_12894a8(plVar6,pvVar9,inParameterValue);
                  if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                  }
                  TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar9,(void *)0x0);
                  pvVar9 = (void *)NativeHelper_0138f368(fVar13,self,*(undefined8 *)puVar3,1);
                  UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar9,(void *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
LAB_0138eba4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
LAB_0138eba8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

