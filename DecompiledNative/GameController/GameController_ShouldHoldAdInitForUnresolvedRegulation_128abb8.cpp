// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool ShouldHoldAdInitForUnresolvedRegulation() { }
// Ghidra address: 0138ebb8; ELF VA: 0x128ebb8; file offset: 0x128abb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_ShouldHoldAdInitForUnresolvedRegulation_128abb8
               (GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  AdInitRetryConfigData *pAVar5;
  void *pvVar6;
  Imangi_Privacy_ImangiPrivacyManager *self_00;
  long *plVar7;
  long lVar8;
  long lVar9;
  Imangi_Analytics_EventParameter *pIVar10;
  void *extraout_x0;
  undefined8 uVar11;
  void *extraout_x1;
  void *inParameterValue;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  int iStack_58;
  uint uStack_54;
  uint uStack_38;
  int iStack_34;
  
  if ((bRam0000000002b94cc8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bdd50);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bdc38);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdd58);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdd60);
    NativeHelper_011df0b4(PTR_DAT_029bdcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdd68);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cc8 = 1;
  }
  iStack_34 = 0;
  pAVar5 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  puVar2 = PTR_DAT_029b9758;
  if (pAVar5 == (AdInitRetryConfigData *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (pAVar5->HoldAdInitOnUnresolvedRegulation == false) {
    uVar12 = 0xffffffff;
    if (self->_adInitHeldForRegulation == false) {
      return false;
    }
    uVar4 = 0xffffffff;
  }
  else {
    pvVar6 = *(void **)PTR_DAT_029b9758;
    if (*(int *)((long)pvVar6 + 0xe0) == 0) {
      pvVar6 = (void *)NativeHelper_011df1bc();
    }
    pvVar6 = GameController_CurrentRegulationType_1288fd0(pvVar6);
    uVar12 = (uint)pvVar6;
    if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    self_00 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    if (self_00 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pvVar6 = Imangi_Privacy_ImangiPrivacyManager_GetConsentState_1248b6c
                       (self_00,(void *)0x1,(void *)0x0);
    uVar4 = (uint)pvVar6;
    if ((uVar4 & uVar12) == 0xffffffff) {
      if (self->_adInitHeldForRegulation != false) {
        return true;
      }
      self->_adInitHeldForRegulation = true;
      fVar13 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
      fVar14 = self->_LaunchTime;
      plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,3);
      uStack_38 = uVar12;
      lVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bdc38,&uStack_38);
      if (plVar7 == (long *)0x0) goto LAB_0138f230;
      if ((lVar8 != 0) &&
         (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_0138f220;
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar8;
        uStack_54 = uVar4;
        lVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bdd50,&uStack_54);
        if ((lVar8 != 0) &&
           (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_0138f220;
        if (1 < *(uint *)(plVar7 + 3)) {
          plVar7[5] = lVar8;
          fVar13 = fVar13 - fVar14;
          iVar1 = -0x80000000;
          if (fVar13 != INFINITY) {
            iVar1 = (int)fVar13;
          }
          iStack_58 = iVar1;
          lVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_58);
          if ((lVar8 != 0) &&
             (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
          goto LAB_0138f220;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = lVar8;
            if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            Imangi_Utilities_ImangiLog_ForceLog_121fae8
                      (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd60,plVar7,(void *)0x0);
            plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
            iStack_34 = iVar1;
            pvVar6 = (void *)NativeHelper_01ffa318(&iStack_34,0);
            puVar3 = PTR_DAT_029bd9f0;
            pIVar10 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar10,*(void **)PTR_DAT_029bdcb0,pvVar6,(void *)0x0);
            if (plVar7 == (long *)0x0) goto LAB_0138f230;
            if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar8 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_0138f220;
            if ((int)plVar7[3] != 0) {
              plVar7[4] = (long)pIVar10;
              pvVar6 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
              pIVar10 = (Imangi_Analytics_EventParameter *)
                        NativeHelper_011df2d0(*(undefined8 *)puVar3);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar10,*(void **)PTR_DAT_029bdcd0,pvVar6,(void *)0x0);
              if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar8 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0
                 )) goto LAB_0138f220;
              if (1 < *(uint *)(plVar7 + 3)) {
                plVar7[5] = (long)pIVar10;
                pvVar6 = *(void **)puVar2;
                if (*(int *)((long)pvVar6 + 0xe0) == 0) {
                  pvVar6 = (void *)NativeHelper_011df1bc();
                }
                pvVar6 = GameController_CurrentNetworkState_12887f0(pvVar6);
                pIVar10 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar3);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar10,*(void **)PTR_DAT_029bdce0,pvVar6,(void *)0x0);
                if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar8 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar7 + 0x40)),
                   lVar8 == 0)) goto LAB_0138f220;
                if (2 < *(uint *)(plVar7 + 3)) {
                  plVar7[6] = (long)pIVar10;
                  pIVar10 = (Imangi_Analytics_EventParameter *)
                            NativeHelper_011df2d0(*(undefined8 *)puVar3);
                  inParameterValue = *(void **)PTR_DAT_029bdd58;
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar10,*(void **)PTR_DAT_029bdcc0,inParameterValue,(void *)0x0);
                  pvVar6 = extraout_x0;
                  if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (pvVar6 = (void *)NativeHelper_011df1c0
                                                 (pIVar10,*(undefined8 *)(*plVar7 + 0x40)),
                     pvVar6 == (void *)0x0)) goto LAB_0138f220;
                  if (3 < *(uint *)(plVar7 + 3)) {
                    plVar7[7] = (long)pIVar10;
                    pIVar10 = GameController_AgeRestrictedParam_128887c(pvVar6);
                    pvVar6 = (void *)0x0;
                    if ((pIVar10 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (pvVar6 = (void *)NativeHelper_011df1c0
                                                   (pIVar10,*(undefined8 *)(*plVar7 + 0x40)),
                       pvVar6 == (void *)0x0)) goto LAB_0138f220;
                    if (4 < *(uint *)(plVar7 + 3)) {
                      plVar7[8] = (long)pIVar10;
                      pIVar10 = GameController_RegulationBranchParam_1288978(pvVar6);
                      pvVar6 = extraout_x1;
                      if (pIVar10 != (Imangi_Analytics_EventParameter *)0x0) {
                        auVar15 = NativeHelper_011df1c0(pIVar10,*(undefined8 *)(*plVar7 + 0x40));
                        pvVar6 = auVar15._8_8_;
                        if (auVar15._0_8_ == 0) goto LAB_0138f220;
                      }
                      if (5 < *(uint *)(plVar7 + 3)) {
                        plVar7[9] = (long)pIVar10;
                        pvVar6 = GameController_AdServiceStateParams_1288a68(self,pvVar6);
                        pvVar6 = GameController_Concat_12894a8(plVar7,pvVar6,inParameterValue);
                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                          NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                        }
                        TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar6,(void *)0x0);
                        return true;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0138f21c;
    }
    if (self->_adInitHeldForRegulation == false) {
      return false;
    }
  }
  self->_adInitHeldForRegulation = false;
  plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
  uStack_38 = uVar12;
  lVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bdc38,&uStack_38);
  if (plVar7 == (long *)0x0) {
LAB_0138f230:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((lVar8 != 0) &&
     (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_0138f220:
    uVar11 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar11,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar8;
    uStack_54 = uVar4;
    lVar8 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bdd50,&uStack_54);
    if ((lVar8 != 0) &&
       (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto LAB_0138f220;
    if (1 < *(uint *)(plVar7 + 3)) {
      plVar7[5] = lVar8;
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029bdd68,plVar7,(void *)0x0);
      return false;
    }
  }
LAB_0138f21c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

