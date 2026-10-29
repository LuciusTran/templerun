// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private EventParameter[] AdServiceStateParams() { }
// Ghidra address: 0138ca68; ELF VA: 0x128ca68; file offset: 0x1288a68
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_AdServiceStateParams_1288a68(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  Imangi_Ad_AdManager *pIVar5;
  void *pvVar6;
  Imangi_Analytics_EventParameter *pIVar7;
  long lVar8;
  AdInitRetryConfigData *pAVar9;
  void *extraout_x0;
  void *extraout_x0_00;
  void *extraout_x0_01;
  void *extraout_x0_02;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  puVar1 = PTR_DAT_029bd9e8;
  puVar2 = PTR_DAT_029b9770;
  if ((bRam0000000002b94cc0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bd1f0);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bdc38);
    NativeHelper_011df0b4(PTR_DAT_029bdc40);
    NativeHelper_011df0b4(PTR_DAT_029bdc48);
    NativeHelper_011df0b4(PTR_DAT_029bdc50);
    NativeHelper_011df0b4(PTR_DAT_029bdc58);
    NativeHelper_011df0b4(PTR_DAT_029bdc60);
    NativeHelper_011df0b4(PTR_DAT_029bdc68);
    NativeHelper_011df0b4(PTR_DAT_029bdc70);
    NativeHelper_011df0b4(PTR_DAT_029bdc78);
    NativeHelper_011df0b4(PTR_DAT_029bdc80);
    bRam0000000002b94cc0 = 1;
  }
  iStack_34 = 0;
  auStack_38[0] = 0;
  plVar4 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,9);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2);
  }
  pIVar5 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
  puVar1 = PTR_DAT_029bdc40;
  puVar2 = PTR_DAT_029bd9f0;
  if (pIVar5 != (Imangi_Ad_AdManager *)0x0) {
    uStack_58 = *(undefined8 *)PTR_DAT_029bd1f0;
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = *(undefined4 *)&pIVar5->ActiveService;
    pvVar6 = (void *)NativeHelper_02031f7c(&uStack_58,0);
    pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
    if (plVar4 != (long *)0x0) {
      if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar8 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
LAB_0138cfa0:
        uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar10,0);
      }
      puVar1 = PTR_DAT_029bdc80;
      if ((int)plVar4[3] != 0) {
        plVar4[4] = (long)pIVar7;
        pvVar6 = (void *)NativeHelper_01ffa318(&self->_appLovinRetryCount,0);
        pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
        if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar8 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
        goto LAB_0138cfa0;
        puVar1 = PTR_DAT_029b8308;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = (long)pIVar7;
          puVar3 = PTR_DAT_029bdc78;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pvVar6 = (void *)NativeHelper_01f83748(&self->_switchedToAdMob,0);
          pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar7,*(void **)puVar3,pvVar6,(void *)0x0);
          if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar8 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
          goto LAB_0138cfa0;
          puVar1 = PTR_DAT_029b9758;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = (long)pIVar7;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            pAVar9 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
            puVar1 = PTR_DAT_029bdc70;
            if (pAVar9 == (AdInitRetryConfigData *)0x0) goto LAB_0138cfac;
            iStack_34 = pAVar9->MaxAppLovinRetries;
            pvVar6 = (void *)NativeHelper_01ffa318(&iStack_34,0);
            pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2)
            ;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
            pvVar6 = extraout_x0;
            if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
               (pvVar6 = (void *)NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)),
               pvVar6 == (void *)0x0)) goto LAB_0138cfa0;
            puVar1 = PTR_DAT_029bdc60;
            if (3 < *(uint *)(plVar4 + 3)) {
              plVar4[7] = (long)pIVar7;
              auStack_38[0] = GameController_MaxSdkInitialized_1288a18(pvVar6);
              pvVar6 = (void *)NativeHelper_01f83748(auStack_38,0);
              pIVar7 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)puVar2);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
              pvVar6 = extraout_x0_00;
              if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (pvVar6 = (void *)NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)),
                 pvVar6 == (void *)0x0)) goto LAB_0138cfa0;
              puVar3 = PTR_DAT_029bdc50;
              puVar1 = PTR_DAT_029bdc38;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = (long)pIVar7;
                pvVar6 = GameController_CurrentRegulationType_1288fd0(pvVar6);
                uStack_70 = *(undefined8 *)puVar1;
                uStack_60 = SUB84(pvVar6,0);
                uStack_68 = 0xffffffffffffffff;
                pvVar6 = (void *)NativeHelper_02031f7c(&uStack_70,0);
                pIVar7 = (Imangi_Analytics_EventParameter *)
                         NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar7,*(void **)puVar3,pvVar6,(void *)0x0);
                if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar8 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)),
                   lVar8 == 0)) goto LAB_0138cfa0;
                puVar1 = PTR_DAT_029bdc68;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = (long)pIVar7;
                  pvVar6 = (void *)NativeHelper_01f83748(&self->_adInitHeldForRegulation,0);
                  pIVar7 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
                  pvVar6 = extraout_x0_01;
                  if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (pvVar6 = (void *)NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40))
                     , pvVar6 == (void *)0x0)) goto LAB_0138cfa0;
                  puVar1 = PTR_DAT_029bdc48;
                  if (6 < *(uint *)(plVar4 + 3)) {
                    plVar4[10] = (long)pIVar7;
                    pvVar6 = GameController_RcReachableParamValue_1289084(pvVar6);
                    pIVar7 = (Imangi_Analytics_EventParameter *)
                             NativeHelper_011df2d0(*(undefined8 *)puVar2);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
                    pvVar6 = extraout_x0_02;
                    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (pvVar6 = (void *)NativeHelper_011df1c0
                                                   (pIVar7,*(undefined8 *)(*plVar4 + 0x40)),
                       pvVar6 == (void *)0x0)) goto LAB_0138cfa0;
                    puVar1 = PTR_DAT_029bdc58;
                    if (7 < *(uint *)(plVar4 + 3)) {
                      plVar4[0xb] = (long)pIVar7;
                      pvVar6 = GameController_RcAgeSecondsParamValue_12891a4(pvVar6);
                      pIVar7 = (Imangi_Analytics_EventParameter *)
                               NativeHelper_011df2d0(*(undefined8 *)puVar2);
                      Imangi_Analytics_EventParameter_EventParameter_126b488
                                (pIVar7,*(void **)puVar1,pvVar6,(void *)0x0);
                      if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (lVar8 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar8 == 0)) goto LAB_0138cfa0;
                      if (8 < *(uint *)(plVar4 + 3)) {
                        plVar4[0xc] = (long)pIVar7;
                        return plVar4;
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
  }
LAB_0138cfac:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

