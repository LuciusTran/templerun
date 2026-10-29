// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnPostGamePrivacyFlow() { }
// Ghidra address: 013916a0; ELF VA: 0x12916a0; file offset: 0x128d6a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0138dae8) */

void GameController_OnPostGamePrivacyFlow_128d6a0(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  Imangi_Analytics_EventParameter *pIVar8;
  void *extraout_x0;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *inParameterValue;
  int *piVar9;
  float fVar10;
  undefined1 auVar11 [16];
  int iStack_54;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  self->_OnGameOverForAdInit = (void *)0x0;
  puVar1 = PTR_DAT_029bdca0;
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
  iStack_44 = 0;
  lVar3 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  GameController___c__DisplayClass46_0___c__DisplayClass46_0_12ac63c(lVar3,0);
  if (lVar3 != 0) {
    *(GameController **)(lVar3 + 0x18) = self;
    if (self->_privacyFlowInProgress != false) {
      return;
    }
    piVar9 = &self->_AdInitRetryCount;
    self->_privacyFlowInProgress = true;
    *piVar9 = *piVar9 + 1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    puVar1 = PTR_DAT_029b8c90;
    uVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar4,lVar3,*(undefined8 *)PTR_DAT_029bdca8,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    puVar2 = PTR_DAT_029bbd80;
    lVar5 = *(long *)PTR_DAT_029bbd80;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar2;
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    plVar6 = (long *)NativeHelper_02041514(*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),uVar4,0);
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = 0;
    }
    else {
      lVar3 = *(long *)puVar1;
      if ((*plVar6 != lVar3) ||
         (*(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = plVar6, *plVar6 != lVar3)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678();
      }
    }
    plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
    auStack_48[0] = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0);
    lVar3 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8308,auStack_48);
    if (plVar6 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar5 = NativeHelper_011df1c0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
code_r0x0138db18:
        uVar4 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar4,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar3;
        iStack_54 = *piVar9;
        lVar3 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_54);
        if ((lVar3 != 0) &&
           (lVar5 = NativeHelper_011df1c0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
        goto code_r0x0138db18;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = lVar3;
          if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          Imangi_Utilities_ImangiLog_ForceLog_121fae8
                    (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdcb8,plVar6,(void *)0x0);
          fVar10 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
          fVar10 = fVar10 - self->_LaunchTime;
          plVar6 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
          iStack_44 = -0x80000000;
          if (fVar10 != INFINITY) {
            iStack_44 = (int)fVar10;
          }
          pvVar7 = (void *)NativeHelper_01ffa318(&iStack_44,0);
          puVar1 = PTR_DAT_029bd9f0;
          pIVar8 = (Imangi_Analytics_EventParameter *)
                   NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar8,*(void **)PTR_DAT_029bdcb0,pvVar7,(void *)0x0);
          if (plVar6 == (long *)0x0) goto code_r0x0138db24;
          if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar3 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
          goto code_r0x0138db18;
          if ((int)plVar6[3] != 0) {
            plVar6[4] = (long)pIVar8;
            pvVar7 = (void *)NativeHelper_01ffa318(piVar9,0);
            pIVar8 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar1)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar8,*(void **)PTR_DAT_029bdcd0,pvVar7,(void *)0x0);
            if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar3 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
            goto code_r0x0138db18;
            if (1 < *(uint *)(plVar6 + 3)) {
              plVar6[5] = (long)pIVar8;
              pvVar7 = *(void **)PTR_DAT_029b9758;
              if (*(int *)((long)pvVar7 + 0xe0) == 0) {
                pvVar7 = (void *)NativeHelper_011df1bc();
              }
              pvVar7 = GameController_CurrentNetworkState_12887f0(pvVar7);
              pIVar8 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)puVar1);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar8,*(void **)PTR_DAT_029bdce0,pvVar7,(void *)0x0);
              if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar3 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)
                 ) goto code_r0x0138db18;
              if (2 < *(uint *)(plVar6 + 3)) {
                plVar6[6] = (long)pIVar8;
                pIVar8 = (Imangi_Analytics_EventParameter *)
                         NativeHelper_011df2d0(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_029bdcd8;
                inParameterValue = *(void **)PTR_DAT_029bdcd8;
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar8,*(void **)PTR_DAT_029bdcc0,inParameterValue,(void *)0x0);
                pvVar7 = extraout_x0;
                if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (pvVar7 = (void *)NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40)),
                   pvVar7 == (void *)0x0)) goto code_r0x0138db18;
                if (3 < *(uint *)(plVar6 + 3)) {
                  plVar6[7] = (long)pIVar8;
                  pIVar8 = GameController_AgeRestrictedParam_128887c(pvVar7);
                  pvVar7 = (void *)0x0;
                  if ((pIVar8 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (pvVar7 = (void *)NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40))
                     , pvVar7 == (void *)0x0)) goto code_r0x0138db18;
                  if (4 < *(uint *)(plVar6 + 3)) {
                    plVar6[8] = (long)pIVar8;
                    pIVar8 = GameController_RegulationBranchParam_1288978(pvVar7);
                    pvVar7 = extraout_x1;
                    if (pIVar8 != (Imangi_Analytics_EventParameter *)0x0) {
                      auVar11 = NativeHelper_011df1c0(pIVar8,*(undefined8 *)(*plVar6 + 0x40));
                      pvVar7 = auVar11._8_8_;
                      if (auVar11._0_8_ == 0) goto code_r0x0138db18;
                    }
                    if (5 < *(uint *)(plVar6 + 3)) {
                      plVar6[9] = (long)pIVar8;
                      pvVar7 = GameController_AdServiceStateParams_1288a68(self,pvVar7);
                      pvVar7 = GameController_Concat_12894a8(plVar6,pvVar7,inParameterValue);
                      if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                        NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                      }
                      TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar7,(void *)0x0);
                      self->_needsPrivacyFlowAfterGame = false;
                      GameController_TriggerPrivacyFlowForAdInit_1289b28(self,runtimeMethod_00);
                      pvVar7 = (void *)NativeHelper_0138deb8(fVar10,self,*(undefined8 *)puVar1);
                      UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar7,(void *)0x0);
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

