// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateStats() { }
// Ghidra address: 013e83cc; ELF VA: 0x12e83cc; file offset: 0x12e43cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_UpdateStats_12e43cc(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  GCLocalNotificationsManager *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  long lVar11;
  long lVar12;
  GCGUI *pGVar13;
  UILabel *pUVar14;
  RecordManager *pRVar15;
  float fVar16;
  int iStack_34;
  
  if ((bRam0000000002b94fc8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba708);
    NativeHelper_011df0b4(PTR_DAT_029c0820);
    NativeHelper_011df0b4(PTR_DAT_029c0530);
    NativeHelper_011df0b4(PTR_DAT_029c0538);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bfcc8);
    NativeHelper_011df0b4(PTR_DAT_029c0828);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029c0830);
    NativeHelper_011df0b4(PTR_DAT_029c0668);
    NativeHelper_011df0b4(PTR_DAT_029c0610);
    bRam0000000002b94fc8 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_029c0668;
  if ((*(long *)&self->field_0x20 != 0) &&
     (lVar11 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar11 != 0)) {
    pUVar14 = self->ScoreLabel;
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    pvVar7 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
    pvVar7 = (void *)NativeHelper_01ffa4f4(lVar11 + 0x138,*(undefined8 *)puVar3,pvVar7,0);
    if (pUVar14 != (UILabel *)0x0) {
      UILabel_set_text_129fea0(pUVar14,pvVar7,(void *)0x0);
      if (*(long *)&self->field_0x20 != 0) {
        fVar16 = *(float *)(*(long *)&self->field_0x20 + 0x148);
        iStack_34 = -0x80000000;
        if (fVar16 != INFINITY) {
          iStack_34 = (int)fVar16;
        }
        pUVar14 = self->DistanceLabel;
        pvVar7 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0830,false,(void *)0x0);
        pvVar8 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
        uVar9 = NativeHelper_01ffa4f4(&iStack_34,*(undefined8 *)puVar3,pvVar8,0);
        pvVar7 = (void *)NativeHelper_01e9390c(pvVar7,uVar9,0);
        if (pUVar14 != (UILabel *)0x0) {
          UILabel_set_text_129fea0(pUVar14,pvVar7,(void *)0x0);
          if ((*(long *)&self->field_0x20 != 0) &&
             (lVar11 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar11 != 0)) {
            pUVar14 = self->CoinsLabel;
            pvVar7 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
            pvVar7 = (void *)NativeHelper_01ffa4f4(lVar11 + 0x148,*(undefined8 *)puVar3,pvVar7,0);
            puVar2 = PTR_DAT_029c0610;
            if (pUVar14 != (UILabel *)0x0) {
              UILabel_set_text_129fea0(pUVar14,pvVar7,(void *)0x0);
              pUVar14 = self->MultiplierLabel;
              pvVar7 = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
              if ((*(long *)&self->field_0x20 != 0) &&
                 (lVar11 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar11 != 0)) {
                pvVar8 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
                uVar9 = NativeHelper_01ffa4f4(lVar11 + 0x13c,*(undefined8 *)puVar3,pvVar8,0);
                pvVar7 = (void *)NativeHelper_01e9390c(pvVar7,uVar9,0);
                puVar3 = PTR_DAT_029bfcc8;
                if (pUVar14 != (UILabel *)0x0) {
                  UILabel_set_text_129fea0(pUVar14,pvVar7,(void *)0x0);
                  EndGameUI_AssignDeathDetails_12e48fc(self,runtimeMethod_00);
                  lVar11 = *(long *)puVar3;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    lVar11 = *(long *)puVar3;
                  }
                  lVar12 = **(long **)(lVar11 + 0xb8);
                  if (lVar12 != 0) {
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      NativeHelper_011df1bc();
                      lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
                      if (lVar12 == 0) goto LAB_013e88f8;
                    }
                    puVar2 = PTR_DAT_029bdbe8;
                    if (*(long *)(lVar12 + 0x30) == 0) goto LAB_013e88f8;
                    iVar6 = *(int *)(*(long *)(lVar12 + 0x30) + 0x10);
                    lVar11 = *(long *)PTR_DAT_029bdbe8;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      NativeHelper_011df1bc();
                      lVar11 = *(long *)puVar2;
                    }
                    pRVar15 = (RecordManager *)**(undefined8 **)(lVar11 + 0xb8);
                    pvVar7 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
                    if ((pvVar7 == (void *)0x0) ||
                       (iVar5 = PlayerManager_GetActivePlayer_12ccc8c(pvVar7,(void *)0x0),
                       pRVar15 == (RecordManager *)0x0)) goto LAB_013e88f8;
                    iVar5 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0
                                      (pRVar15,iVar5,(void *)0x0);
                    puVar1 = PTR_DAT_029ba708;
                    if (iVar5 <= iVar6) {
                      if (*(int *)(*(long *)PTR_DAT_029ba708 + 0xe0) == 0) {
                        NativeHelper_011df1bc();
                      }
                      uVar9 = NativeHelper_01fde6f8(0);
                      lVar11 = *(long *)puVar3;
                      if (*(int *)(lVar11 + 0xe0) == 0) {
                        NativeHelper_011df1bc(lVar11);
                        lVar11 = *(long *)puVar3;
                      }
                      if (((**(long **)(lVar11 + 0xb8) == 0) ||
                          (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x30), lVar11 == 0)) ||
                         (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto LAB_013e88f8;
                      uVar10 = NativeHelper_01fe0210(uVar9,*(undefined8 *)(lVar11 + 0x18),0);
                      if ((uVar10 & 1) != 0) {
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          NativeHelper_011df1bc();
                        }
                        uVar9 = NativeHelper_01fde6f8(0);
                        lVar11 = *(long *)puVar3;
                        if (*(int *)(lVar11 + 0xe0) == 0) {
                          NativeHelper_011df1bc(lVar11);
                          lVar11 = *(long *)puVar3;
                        }
                        if (((**(long **)(lVar11 + 0xb8) == 0) ||
                            (lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x30), lVar11 == 0)) ||
                           (lVar11 = *(long *)(lVar11 + 0x18), lVar11 == 0)) goto LAB_013e88f8;
                        uVar10 = NativeHelper_01fe0138(uVar9,*(undefined8 *)(lVar11 + 0x20),0);
                        if ((uVar10 & 1) != 0) {
                          if (self->gcProgressObject != (void *)0x0) {
                            NativeHelper_02610c54(self->gcProgressObject,1,0);
                            lVar11 = *(long *)puVar2;
                            if (*(int *)(lVar11 + 0xe0) == 0) {
                              NativeHelper_011df1bc();
                              lVar11 = *(long *)puVar2;
                            }
                            pRVar15 = (RecordManager *)**(undefined8 **)(lVar11 + 0xb8);
                            pvVar7 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
                            if ((pvVar7 != (void *)0x0) &&
                               (iVar6 = PlayerManager_GetActivePlayer_12ccc8c(pvVar7,(void *)0x0),
                               pRVar15 != (RecordManager *)0x0)) {
                              pvVar7 = (void *)0x0;
                              bVar4 = RecordManager_GetGlobalChallengeMilestoneAchievedInRun_12b4b5c
                                                (pRVar15,iVar6,(void *)0x0);
                              if (bVar4) {
                                pGVar13 = self->GCInterface;
                                if (pGVar13 == (GCGUI *)0x0) goto LAB_013e88f8;
                                EndGameUI_GCTierCompletedCallback_12e3f68
                                          (self,pGVar13->rewardClaimedCount,
                                           pGVar13->rewardClaimOverflowAmount,pvVar7);
                              }
                              else {
                                pvVar7 = (void *)NativeHelper_011df2d0
                                                           (*(undefined8 *)PTR_DAT_029c0538);
                                GCTierComepled_GCTierComepled_12db6e8
                                          (pvVar7,self,*(void **)PTR_DAT_029c0820,(void *)0x0);
                                if (*(int *)(*(long *)PTR_DAT_029c0530 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                }
                                NativeHelper_013df850(pvVar7,0);
                                lVar11 = *(long *)&self->field_0x20;
                                if ((lVar11 == 0) ||
                                   (lVar12 = *(long *)(lVar11 + 0x80), lVar12 == 0))
                                goto LAB_013e88f8;
                                GCProgressTracker_UpdateAfterGameStats_12dba00
                                          (*(float *)(lVar11 + 0x148),*(int *)(lVar12 + 0x148),
                                           *(int *)(lVar12 + 0x138),(void *)0x0);
                              }
                              if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
                                NativeHelper_011df1bc();
                              }
                              self_00 = UnityEngine_object_FindObjectOfType_142ad18
                                                  (*(void **)PTR_DAT_029c0828);
                              if (self_00 != (GCLocalNotificationsManager *)0x0) {
                                GCLocalNotificationsManager_CheckAndCancelMidGC_Notification_12d9f28
                                          (self_00,(void *)0x0);
                                return;
                              }
                            }
                          }
                          goto LAB_013e88f8;
                        }
                      }
                    }
                  }
                  if (self->gcProgressObject != (void *)0x0) {
                    NativeHelper_02610c54(self->gcProgressObject,0,0);
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
LAB_013e88f8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

