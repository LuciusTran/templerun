// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void LogBootConsentOutcome(string inOutcome) { }
// Ghidra address: 01390450; ELF VA: 0x1290450; file offset: 0x128c450
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_LogBootConsentOutcome_128c450
               (GameController *self,void *inOutcome,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  Imangi_Analytics_EventParameter *pIVar13;
  void *extraout_x0;
  void *extraout_x0_00;
  undefined8 uVar14;
  void *extraout_x1;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  int iStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  
  puVar2 = PTR_DAT_029b8078;
  if ((bRam0000000002b94cd0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdda8);
    NativeHelper_011df0b4(PTR_DAT_029bdd98);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdd80);
    NativeHelper_011df0b4(PTR_DAT_029bddb0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdd90);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cd0 = 1;
  }
  iStack_64 = 0;
  fVar15 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  fVar16 = self->_LaunchTime;
  plVar9 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,4);
  if (plVar9 == (long *)0x0) {
LAB_01390a40:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((inOutcome != (void *)0x0) &&
     (lVar10 = NativeHelper_011df1c0(inOutcome,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_01390a34:
    uVar14 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar14,0);
  }
  puVar2 = PTR_DAT_029bbd80;
  if ((int)plVar9[3] != 0) {
    plVar9[4] = (long)inOutcome;
    puVar3 = PTR_DAT_029b8308;
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar2;
    }
    auStack_68[0] = *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 0x20);
    lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar3,auStack_68);
    if ((lVar10 != 0) &&
       (lVar11 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_01390a34;
    puVar4 = PTR_DAT_029b9758;
    if (1 < *(uint *)(plVar9 + 3)) {
      plVar9[5] = lVar10;
      pvVar12 = *(void **)puVar4;
      if (*(int *)((long)pvVar12 + 0xe0) == 0) {
        pvVar12 = (void *)NativeHelper_011df1bc();
      }
      pvVar12 = GameController_CurrentNetworkState_12887f0(pvVar12);
      if ((pvVar12 != (void *)0x0) &&
         (lVar10 = NativeHelper_011df1c0(pvVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_01390a34;
      puVar4 = PTR_DAT_029b8bc0;
      if (2 < *(uint *)(plVar9 + 3)) {
        plVar9[6] = (long)pvVar12;
        fVar15 = fVar15 - fVar16;
        iVar1 = -0x80000000;
        if (fVar15 != INFINITY) {
          iVar1 = (int)fVar15;
        }
        iStack_6c = iVar1;
        lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar4,&iStack_6c);
        if ((lVar10 != 0) &&
           (lVar11 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_01390a34;
        puVar4 = PTR_DAT_029b9638;
        if (3 < *(uint *)(plVar9 + 3)) {
          plVar9[7] = lVar10;
          puVar8 = PTR_DAT_029bddb0;
          puVar6 = PTR_DAT_029bdc20;
          puVar5 = PTR_DAT_029bd9e8;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          puVar7 = PTR_DAT_029bdd80;
          puVar4 = PTR_DAT_029bd9f0;
          Imangi_Utilities_ImangiLog_ForceLog_121fae8
                    (*(void **)puVar6,*(void **)puVar8,plVar9,(void *)0x0);
          plVar9 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar5,8);
          lVar10 = *(long *)puVar3;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            NativeHelper_011df1bc(lVar10);
          }
          pvVar12 = (void *)NativeHelper_01f83748(*(long *)(*(long *)puVar2 + 0xb8) + 0x20,0);
          pIVar13 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar13,*(void **)puVar7,pvVar12,(void *)0x0);
          if (plVar9 == (long *)0x0) goto LAB_01390a40;
          if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar10 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
          goto LAB_01390a34;
          puVar2 = PTR_DAT_029bdcb0;
          if ((int)plVar9[3] != 0) {
            plVar9[4] = (long)pIVar13;
            iStack_64 = iVar1;
            pvVar12 = (void *)NativeHelper_01ffa318(&iStack_64,0);
            pIVar13 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar4);
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar13,*(void **)puVar2,pvVar12,(void *)0x0);
            if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar10 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0
               )) goto LAB_01390a34;
            puVar2 = PTR_DAT_029bdcd0;
            if (1 < *(uint *)(plVar9 + 3)) {
              plVar9[5] = (long)pIVar13;
              pvVar12 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
              pIVar13 = (Imangi_Analytics_EventParameter *)
                        NativeHelper_011df2d0(*(undefined8 *)puVar4);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar13,*(void **)puVar2,pvVar12,(void *)0x0);
              pvVar12 = extraout_x0;
              if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (pvVar12 = (void *)NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40)),
                 pvVar12 == (void *)0x0)) goto LAB_01390a34;
              puVar2 = PTR_DAT_029bdce0;
              if (2 < *(uint *)(plVar9 + 3)) {
                plVar9[6] = (long)pIVar13;
                pvVar12 = GameController_CurrentNetworkState_12887f0(pvVar12);
                pIVar13 = (Imangi_Analytics_EventParameter *)
                          NativeHelper_011df2d0(*(undefined8 *)puVar4);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar13,*(void **)puVar2,pvVar12,(void *)0x0);
                if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar10 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40)),
                   lVar10 == 0)) goto LAB_01390a34;
                if (3 < *(uint *)(plVar9 + 3)) {
                  plVar9[7] = (long)pIVar13;
                  puVar3 = PTR_DAT_029bdd98;
                  puVar2 = PTR_DAT_029bdcc0;
                  pIVar13 = (Imangi_Analytics_EventParameter *)
                            NativeHelper_011df2d0(*(undefined8 *)puVar4);
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar13,*(void **)puVar2,*(void **)puVar3,(void *)0x0);
                  if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar10 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar10 == 0)) goto LAB_01390a34;
                  if (4 < *(uint *)(plVar9 + 3)) {
                    plVar9[8] = (long)pIVar13;
                    puVar2 = PTR_DAT_029bdda8;
                    pIVar13 = (Imangi_Analytics_EventParameter *)
                              NativeHelper_011df2d0(*(undefined8 *)puVar4);
                    Imangi_Analytics_EventParameter_EventParameter_126b488
                              (pIVar13,*(void **)puVar2,inOutcome,(void *)0x0);
                    pvVar12 = extraout_x0_00;
                    if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (pvVar12 = (void *)NativeHelper_011df1c0
                                                    (pIVar13,*(undefined8 *)(*plVar9 + 0x40)),
                       pvVar12 == (void *)0x0)) goto LAB_01390a34;
                    if (5 < *(uint *)(plVar9 + 3)) {
                      plVar9[9] = (long)pIVar13;
                      pIVar13 = GameController_AgeRestrictedParam_128887c(pvVar12);
                      pvVar12 = (void *)0x0;
                      if ((pIVar13 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (pvVar12 = (void *)NativeHelper_011df1c0
                                                      (pIVar13,*(undefined8 *)(*plVar9 + 0x40)),
                         pvVar12 == (void *)0x0)) goto LAB_01390a34;
                      if (6 < *(uint *)(plVar9 + 3)) {
                        plVar9[10] = (long)pIVar13;
                        pIVar13 = GameController_RegulationBranchParam_1288978(pvVar12);
                        pvVar12 = extraout_x1;
                        if (pIVar13 != (Imangi_Analytics_EventParameter *)0x0) {
                          auVar17 = NativeHelper_011df1c0(pIVar13,*(undefined8 *)(*plVar9 + 0x40));
                          pvVar12 = auVar17._8_8_;
                          if (auVar17._0_8_ == 0) goto LAB_01390a34;
                        }
                        puVar3 = PTR_DAT_029bdd90;
                        puVar2 = PTR_DAT_029bd9d0;
                        if (7 < *(uint *)(plVar9 + 3)) {
                          plVar9[0xb] = (long)pIVar13;
                          pvVar12 = GameController_AdServiceStateParams_1288a68(self,pvVar12);
                          pvVar12 = GameController_Concat_12894a8(plVar9,pvVar12,inOutcome);
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            NativeHelper_011df1bc(*(long *)puVar2);
                          }
                          TRAnalytics_LogEvent_12b7164(*(void **)puVar3,pvVar12,(void *)0x0);
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

