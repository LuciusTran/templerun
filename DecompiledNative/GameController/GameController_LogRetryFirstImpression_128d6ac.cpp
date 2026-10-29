// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void LogRetryFirstImpression() { }
// Ghidra address: 013916ac; ELF VA: 0x12916ac; file offset: 0x128d6ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_LogRetryFirstImpression_128d6ac(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *inFirst;
  void *pvVar4;
  Imangi_Analytics_EventParameter *pIVar5;
  long lVar6;
  void *inParameterValue;
  void *extraout_x0;
  undefined8 uVar7;
  void *extraout_x1;
  float fVar8;
  undefined1 auVar9 [16];
  int iStack_44;
  
  if ((bRam0000000002b94cdd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bddf0);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94cdd = 1;
  }
  puVar3 = PTR_DAT_029bdcb0;
  puVar2 = PTR_DAT_029bd9f0;
  puVar1 = PTR_DAT_029bd9e8;
  if (self->_WasRecoveredByRetry == false) {
    return;
  }
  self->_WasRecoveredByRetry = false;
  fVar8 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  fVar8 = fVar8 - self->_LaunchTime;
  inFirst = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,5);
  iStack_44 = -0x80000000;
  if (fVar8 != INFINITY) {
    iStack_44 = (int)fVar8;
  }
  pvVar4 = (void *)NativeHelper_01ffa318(&iStack_44,0);
  pIVar5 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  Imangi_Analytics_EventParameter_EventParameter_126b488(pIVar5,*(void **)puVar3,pvVar4,(void *)0x0)
  ;
  if (inFirst == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar5 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar6 = NativeHelper_011df1c0(pIVar5,*(undefined8 *)(*inFirst + 0x40)), lVar6 == 0)) {
LAB_01391990:
    uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,0);
  }
  puVar1 = PTR_DAT_029bdcd0;
  if ((int)inFirst[3] != 0) {
    inFirst[4] = (long)pIVar5;
    pvVar4 = (void *)NativeHelper_01ffa318(&self->_AdInitRetryCount,0);
    pIVar5 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar5,*(void **)puVar1,pvVar4,(void *)0x0);
    if ((pIVar5 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar6 = NativeHelper_011df1c0(pIVar5,*(undefined8 *)(*inFirst + 0x40)), lVar6 == 0))
    goto LAB_01391990;
    puVar1 = PTR_DAT_029b9758;
    if (1 < *(uint *)(inFirst + 3)) {
      inFirst[5] = (long)pIVar5;
      puVar3 = PTR_DAT_029bdce0;
      pvVar4 = *(void **)puVar1;
      if (*(int *)((long)pvVar4 + 0xe0) == 0) {
        pvVar4 = (void *)NativeHelper_011df1bc();
      }
      inParameterValue = GameController_CurrentNetworkState_12887f0(pvVar4);
      pIVar5 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
      Imangi_Analytics_EventParameter_EventParameter_126b488
                (pIVar5,*(void **)puVar3,inParameterValue,(void *)0x0);
      pvVar4 = extraout_x0;
      if ((pIVar5 != (Imangi_Analytics_EventParameter *)0x0) &&
         (pvVar4 = (void *)NativeHelper_011df1c0(pIVar5,*(undefined8 *)(*inFirst + 0x40)),
         pvVar4 == (void *)0x0)) goto LAB_01391990;
      if (2 < *(uint *)(inFirst + 3)) {
        inFirst[6] = (long)pIVar5;
        pIVar5 = GameController_AgeRestrictedParam_128887c(pvVar4);
        pvVar4 = (void *)0x0;
        if ((pIVar5 != (Imangi_Analytics_EventParameter *)0x0) &&
           (pvVar4 = (void *)NativeHelper_011df1c0(pIVar5,*(undefined8 *)(*inFirst + 0x40)),
           pvVar4 == (void *)0x0)) goto LAB_01391990;
        if (3 < *(uint *)(inFirst + 3)) {
          inFirst[7] = (long)pIVar5;
          pIVar5 = GameController_RegulationBranchParam_1288978(pvVar4);
          pvVar4 = extraout_x1;
          if (pIVar5 != (Imangi_Analytics_EventParameter *)0x0) {
            auVar9 = NativeHelper_011df1c0(pIVar5,*(undefined8 *)(*inFirst + 0x40));
            pvVar4 = auVar9._8_8_;
            if (auVar9._0_8_ == 0) goto LAB_01391990;
          }
          puVar2 = PTR_DAT_029bddf0;
          puVar1 = PTR_DAT_029bd9d0;
          if (4 < *(uint *)(inFirst + 3)) {
            inFirst[8] = (long)pIVar5;
            pvVar4 = GameController_AdServiceStateParams_1288a68(self,pvVar4);
            pvVar4 = GameController_Concat_12894a8(inFirst,pvVar4,inParameterValue);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar1);
            }
            TRAnalytics_LogEvent_12b7164(*(void **)puVar2,pvVar4,(void *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

