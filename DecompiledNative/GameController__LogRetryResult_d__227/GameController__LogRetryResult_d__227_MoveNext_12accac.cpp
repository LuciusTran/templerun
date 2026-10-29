// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013b0cac; ELF VA: 0x12b0cac; file offset: 0x12accac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController__LogRetryResult_d__227_MoveNext_12accac
               (GameController__LogRetryResult_d__227 *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  GameController__LogRetryResult_d__227 *runtimeMethod_00;
  long *inFirst;
  void *pvVar3;
  Imangi_Analytics_EventParameter *pIVar4;
  long lVar5;
  undefined8 uVar6;
  GameController *self_00;
  float fVar7;
  int iStack_38;
  char acStack_34 [4];
  
  runtimeMethod_00 = self;
  if ((bRam0000000002b94dbf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bb308);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bddb8);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bb638);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdd80);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdd90);
    runtimeMethod_00 =
         (GameController__LogRetryResult_d__227 *)NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94dbf = 1;
  }
  iStack_38 = 0;
  self_00 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    fVar7 = self->_elapsed_5__2 + 1.0;
    self->_elapsed_5__2 = fVar7;
    if (fVar7 < 20.0) goto LAB_013b0dd8;
  }
  else {
    runtimeMethod_00 = (GameController__LogRetryResult_d__227 *)0x0;
    if (self->__1__state != 0) goto LAB_013b1188;
    self->__1__state = -1;
    self->_elapsed_5__2 = 0.0;
LAB_013b0dd8:
    bVar2 = AdInitStatus_IsAdServiceReady_12abc64(runtimeMethod_00);
    runtimeMethod_00 = (GameController__LogRetryResult_d__227 *)(ulong)bVar2;
    if (!bVar2) {
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb638);
      UnityEngine_WaitForSeconds_WaitForSeconds_2512710(pvVar3,1.0,(void *)0x0);
      runtimeMethod_00 = (GameController__LogRetryResult_d__227 *)0x1;
      self->__2__current = pvVar3;
      self->__1__state = 1;
      goto LAB_013b1188;
    }
  }
  acStack_34[0] = AdInitStatus_IsAdServiceReady_12abc64(runtimeMethod_00);
  inFirst = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,7);
  if (*(int *)(*(long *)PTR_DAT_029b8308 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b8308);
  }
  pvVar3 = (void *)NativeHelper_01f83748(acStack_34,0);
  puVar1 = PTR_DAT_029bd9f0;
  pIVar4 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0)
  ;
  Imangi_Analytics_EventParameter_EventParameter_126b488
            (pIVar4,*(void **)PTR_DAT_029bdd80,pvVar3,(void *)0x0);
  if (inFirst == (long *)0x0) {
LAB_013b11ac:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
     (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0)) {
LAB_013b11a0:
    uVar6 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar6,0);
  }
  if ((int)inFirst[3] != 0) {
    inFirst[4] = (long)pIVar4;
    iStack_38 = -0x80000000;
    if (self->secondsSinceLaunch != INFINITY) {
      iStack_38 = (int)self->secondsSinceLaunch;
    }
    pvVar3 = (void *)NativeHelper_01ffa318(&iStack_38,0);
    pIVar4 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (pIVar4,*(void **)PTR_DAT_029bdcb0,pvVar3,(void *)0x0);
    if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0))
    goto LAB_013b11a0;
    if (1 < *(uint *)(inFirst + 3)) {
      inFirst[5] = (long)pIVar4;
      if (self_00 == (GameController *)0x0) goto LAB_013b11ac;
      pvVar3 = (void *)NativeHelper_01ffa318(&self_00->_AdInitRetryCount,0);
      pIVar4 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Analytics_EventParameter_EventParameter_126b488
                (pIVar4,*(void **)PTR_DAT_029bdcd0,pvVar3,(void *)0x0);
      if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
         (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0))
      goto LAB_013b11a0;
      if (2 < *(uint *)(inFirst + 3)) {
        inFirst[6] = (long)pIVar4;
        if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar3 = GameController_CurrentNetworkState_12887f0((void *)0x0);
        pIVar4 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
        Imangi_Analytics_EventParameter_EventParameter_126b488
                  (pIVar4,*(void **)PTR_DAT_029bdce0,pvVar3,(void *)0x0);
        if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
           (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0))
        goto LAB_013b11a0;
        if (3 < *(uint *)(inFirst + 3)) {
          inFirst[7] = (long)pIVar4;
          pvVar3 = self->trigger;
          pIVar4 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
          Imangi_Analytics_EventParameter_EventParameter_126b488
                    (pIVar4,*(void **)PTR_DAT_029bdcc0,pvVar3,(void *)0x0);
          if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
             (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0))
          goto LAB_013b11a0;
          if (4 < *(uint *)(inFirst + 3)) {
            inFirst[8] = (long)pIVar4;
            pIVar4 = GameController_AgeRestrictedParam_128887c((void *)0x0);
            if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
               (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0))
            goto LAB_013b11a0;
            if (5 < *(uint *)(inFirst + 3)) {
              inFirst[9] = (long)pIVar4;
              pIVar4 = GameController_RegulationBranchParam_1288978((void *)0x0);
              if ((pIVar4 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar5 = NativeHelper_011df1c0(pIVar4,*(undefined8 *)(*inFirst + 0x40)), lVar5 == 0
                 )) goto LAB_013b11a0;
              if (6 < *(uint *)(inFirst + 3)) {
                inFirst[10] = (long)pIVar4;
                pvVar3 = GameController_AdServiceStateParams_1288a68(self_00,(void *)0x0);
                pvVar3 = GameController_Concat_12894a8(inFirst,pvVar3,(void *)0x0);
                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                  NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                }
                TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdd90,pvVar3,(void *)0x0);
                self_00->_privacyFlowInProgress = false;
                if (acStack_34[0] != '\0') {
                  self_00->_WasRecoveredByRetry = true;
                  uVar6 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb308);
                  NativeHelper_01698c44(uVar6,self_00,*(undefined8 *)PTR_DAT_029bddb8,0);
                  if (*(int *)(*(long *)PTR_DAT_029ba5a8 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  Imangi_Utilities_ImangiNetworkHelper_RemoveOnNetworkReachabilityChangedDelegate_1234f88
                            (uVar6,0);
                }
                runtimeMethod_00 = (GameController__LogRetryResult_d__227 *)0x0;
LAB_013b1188:
                return SUB81(runtimeMethod_00,0);
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

