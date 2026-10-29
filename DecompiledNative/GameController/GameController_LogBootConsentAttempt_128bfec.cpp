// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void LogBootConsentAttempt() { }
// Ghidra address: 0138ffec; ELF VA: 0x128ffec; file offset: 0x128bfec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_LogBootConsentAttempt_128bfec(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *paramList;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  Imangi_Analytics_EventParameter *pIVar12;
  void *extraout_x0;
  void *extraout_x0_00;
  undefined8 uVar13;
  void *extraout_x1;
  void *inParameterValue;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  int iStack_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_029b9758;
  puVar2 = PTR_DAT_029b8078;
  if ((bRam0000000002b94ccf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdd98);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdda0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94ccf = 1;
  }
  iStack_44 = 0;
  fVar14 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  fVar15 = self->_LaunchTime;
  paramList = (long *)NativeHelper_011df12c(*(undefined8 *)puVar2,2);
  plVar8 = paramList;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    plVar8 = (long *)NativeHelper_011df1bc(*(long *)puVar3);
  }
  pvVar9 = GameController_CurrentNetworkState_12887f0(plVar8);
  if (paramList == (long *)0x0) {
LAB_0139044c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pvVar9 != (void *)0x0) &&
     (lVar10 = NativeHelper_011df1c0(pvVar9,*(undefined8 *)(*paramList + 0x40)), lVar10 == 0)) {
LAB_01390440:
    uVar13 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar13,0);
  }
  puVar2 = PTR_DAT_029b8bc0;
  if ((int)paramList[3] != 0) {
    paramList[4] = (long)pvVar9;
    fVar14 = fVar14 - fVar15;
    iVar1 = -0x80000000;
    if (fVar14 != INFINITY) {
      iVar1 = (int)fVar14;
    }
    iStack_48 = iVar1;
    lVar10 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&iStack_48);
    if ((lVar10 != 0) &&
       (lVar11 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*paramList + 0x40)), lVar11 == 0))
    goto LAB_01390440;
    puVar2 = PTR_DAT_029b9638;
    if (1 < *(uint *)(paramList + 3)) {
      paramList[5] = lVar10;
      puVar7 = PTR_DAT_029bdda0;
      puVar6 = PTR_DAT_029bdcb0;
      puVar5 = PTR_DAT_029bdc20;
      puVar4 = PTR_DAT_029bd9f0;
      puVar3 = PTR_DAT_029bd9e8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)puVar5,*(void **)puVar7,paramList,(void *)0x0);
      plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,6);
      iStack_44 = iVar1;
      pvVar9 = (void *)NativeHelper_01ffa318(&iStack_44,0);
      pIVar12 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
      Imangi_Analytics_EventParameter_EventParameter_126b488
                (pIVar12,*(void **)puVar6,pvVar9,(void *)0x0);
      if (plVar8 == (long *)0x0) goto LAB_0139044c;
      if ((pIVar12 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar10 = NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01390440;
      puVar2 = PTR_DAT_029bdcd0;
      if ((int)plVar8[3] != 0) {
        plVar8[4] = (long)pIVar12;
        pvVar9 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
        pIVar12 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar12,*(void **)puVar2,pvVar9,(void *)0x0);
        pvVar9 = extraout_x0;
        if ((pIVar12 != (Imangi_Analytics_EventParameter *)0x0) &&
           (pvVar9 = (void *)NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40)),
           pvVar9 == (void *)0x0)) goto LAB_01390440;
        puVar2 = PTR_DAT_029bdce0;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = (long)pIVar12;
          pvVar9 = GameController_CurrentNetworkState_12887f0(pvVar9);
          pIVar12 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar12,*(void **)puVar2,pvVar9,(void *)0x0);
          if ((pIVar12 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar10 = NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_01390440;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = (long)pIVar12;
            puVar3 = PTR_DAT_029bdd98;
            puVar2 = PTR_DAT_029bdcc0;
            pIVar12 = (Imangi_Analytics_EventParameter *)
                      NativeHelper_011df2d0(*(undefined8 *)puVar4);
            inParameterValue = *(void **)puVar3;
            Imangi_Analytics_EventParameter_EventParameter_126b488
                      (pIVar12,*(void **)puVar2,inParameterValue,(void *)0x0);
            pvVar9 = extraout_x0_00;
            if ((pIVar12 != (Imangi_Analytics_EventParameter *)0x0) &&
               (pvVar9 = (void *)NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40)),
               pvVar9 == (void *)0x0)) goto LAB_01390440;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = (long)pIVar12;
              pIVar12 = GameController_AgeRestrictedParam_128887c(pvVar9);
              pvVar9 = (void *)0x0;
              if ((pIVar12 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (pvVar9 = (void *)NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40)),
                 pvVar9 == (void *)0x0)) goto LAB_01390440;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = (long)pIVar12;
                pIVar12 = GameController_RegulationBranchParam_1288978(pvVar9);
                pvVar9 = extraout_x1;
                if (pIVar12 != (Imangi_Analytics_EventParameter *)0x0) {
                  auVar16 = NativeHelper_011df1c0(pIVar12,*(undefined8 *)(*plVar8 + 0x40));
                  pvVar9 = auVar16._8_8_;
                  if (auVar16._0_8_ == 0) goto LAB_01390440;
                }
                puVar3 = PTR_DAT_029bdcc8;
                puVar2 = PTR_DAT_029bd9d0;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = (long)pIVar12;
                  pvVar9 = GameController_AdServiceStateParams_1288a68(self,pvVar9);
                  pvVar9 = GameController_Concat_12894a8(plVar8,pvVar9,inParameterValue);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)puVar2);
                  }
                  TRAnalytics_LogEvent_12b7164(*(void **)puVar3,pvVar9,(void *)0x0);
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

