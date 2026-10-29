// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013b1224; ELF VA: 0x12b1224; file offset: 0x12ad224
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController__LogStartupAdInitAttemptDeferred_d__53_MoveNext_12ad224
               (GameController__LogStartupAdInitAttemptDeferred_d__53 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  Imangi_Ad_AdManager *pIVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  Imangi_Analytics_EventParameter *pIVar9;
  undefined8 uVar10;
  GameController *self_00;
  int iStack_44;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000002b94dc0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bd1f0);
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029be7e8);
    NativeHelper_011df0b4(PTR_DAT_029be7f0);
    NativeHelper_011df0b4(PTR_DAT_029bdcb0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc0);
    NativeHelper_011df0b4(PTR_DAT_029bdcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdcd0);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdce0);
    bRam0000000002b94dc0 = 1;
  }
  iStack_34 = 0;
  iVar1 = self->__1__state;
  if (iVar1 == 2) {
    bVar3 = false;
    self->__1__state = -1;
  }
  else {
    if (iVar1 == 1) {
      self->__1__state = -1;
      self_00 = self->__4__this;
      plVar4 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
      if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)PTR_DAT_029b9770);
      }
      pIVar5 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
      if (pIVar5 != (Imangi_Ad_AdManager *)0x0) {
        uStack_38 = *(undefined4 *)&pIVar5->ActiveService;
        lVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029bd1f0,&uStack_38);
        if (plVar4 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar7 = NativeHelper_011df1c0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_013b1758:
            uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df1ac(uVar10,0);
          }
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar6;
            iStack_44 = -0x80000000;
            if (self->secondsSinceLaunch != INFINITY) {
              iStack_44 = (int)self->secondsSinceLaunch;
            }
            lVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&iStack_44);
            if ((lVar6 != 0) &&
               (lVar7 = NativeHelper_011df1c0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
            goto LAB_013b1758;
            if (1 < *(uint *)(plVar4 + 3)) {
              plVar4[5] = lVar6;
              if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              Imangi_Utilities_ImangiLog_ForceLog_121fae8
                        (*(void **)PTR_DAT_029bdc20,*(void **)PTR_DAT_029be7f0,plVar4,(void *)0x0);
              plVar4 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bd9e8,6);
              iStack_34 = -0x80000000;
              if (self->secondsSinceLaunch != INFINITY) {
                iStack_34 = (int)self->secondsSinceLaunch;
              }
              pvVar8 = (void *)NativeHelper_01ffa318(&iStack_34,0);
              puVar2 = PTR_DAT_029bd9f0;
              pIVar9 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bd9f0);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar9,*(void **)PTR_DAT_029bdcb0,pvVar8,(void *)0x0);
              if (plVar4 == (long *)0x0) goto LAB_013b1764;
              if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)
                 ) goto LAB_013b1758;
              if ((int)plVar4[3] == 0) goto LAB_013b1754;
              plVar4[4] = (long)pIVar9;
              if (self_00 == (GameController *)0x0) goto LAB_013b1764;
              pvVar8 = (void *)NativeHelper_01ffa318(&self_00->_AdInitRetryCount,0);
              pIVar9 = (Imangi_Analytics_EventParameter *)
                       NativeHelper_011df2d0(*(undefined8 *)puVar2);
              Imangi_Analytics_EventParameter_EventParameter_126b488
                        (pIVar9,*(void **)PTR_DAT_029bdcd0,pvVar8,(void *)0x0);
              if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                 (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)
                 ) goto LAB_013b1758;
              if (1 < *(uint *)(plVar4 + 3)) {
                plVar4[5] = (long)pIVar9;
                if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                pvVar8 = GameController_CurrentNetworkState_12887f0((void *)0x0);
                pIVar9 = (Imangi_Analytics_EventParameter *)
                         NativeHelper_011df2d0(*(undefined8 *)puVar2);
                Imangi_Analytics_EventParameter_EventParameter_126b488
                          (pIVar9,*(void **)PTR_DAT_029bdce0,pvVar8,(void *)0x0);
                if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                   (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)),
                   lVar6 == 0)) goto LAB_013b1758;
                if (2 < *(uint *)(plVar4 + 3)) {
                  plVar4[6] = (long)pIVar9;
                  pIVar9 = (Imangi_Analytics_EventParameter *)
                           NativeHelper_011df2d0(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_029be7e8;
                  Imangi_Analytics_EventParameter_EventParameter_126b488
                            (pIVar9,*(void **)PTR_DAT_029bdcc0,*(void **)PTR_DAT_029be7e8,
                             (void *)0x0);
                  if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                     (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)),
                     lVar6 == 0)) goto LAB_013b1758;
                  if (3 < *(uint *)(plVar4 + 3)) {
                    plVar4[7] = (long)pIVar9;
                    pIVar9 = GameController_AgeRestrictedParam_128887c((void *)0x0);
                    if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                       (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_013b1758;
                    if (4 < *(uint *)(plVar4 + 3)) {
                      plVar4[8] = (long)pIVar9;
                      pIVar9 = GameController_RegulationBranchParam_1288978((void *)0x0);
                      if ((pIVar9 != (Imangi_Analytics_EventParameter *)0x0) &&
                         (lVar6 = NativeHelper_011df1c0(pIVar9,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar6 == 0)) goto LAB_013b1758;
                      if (5 < *(uint *)(plVar4 + 3)) {
                        plVar4[9] = (long)pIVar9;
                        pvVar8 = GameController_AdServiceStateParams_1288a68(self_00,(void *)0x0);
                        pvVar8 = GameController_Concat_12894a8(plVar4,pvVar8,(void *)0x0);
                        if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                          NativeHelper_011df1bc(*(long *)PTR_DAT_029bd9d0);
                        }
                        TRAnalytics_LogEvent_12b7164(*(void **)PTR_DAT_029bdcc8,pvVar8,(void *)0x0);
                        pvVar8 = (void *)NativeHelper_0138f368
                                                   (self->secondsSinceLaunch,self_00,
                                                    *(undefined8 *)puVar2,0,0);
                        self->__2__current = pvVar8;
                        self->__1__state = 2;
                        return true;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_013b1754:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
      }
LAB_013b1764:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar3 = false;
    if (iVar1 == 0) {
      bVar3 = true;
      self->__2__current = (void *)0x0;
      self->__1__state = 1;
    }
  }
  return bVar3;
}

