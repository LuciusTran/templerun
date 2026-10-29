// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void SlideIn(BasePanel returnTo) { }
// Ghidra address: 013f5690; ELF VA: 0x12f5690; file offset: 0x12f1690
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainMenu_SlideIn_12f1690(MainMenu *self,BasePanel *returnTo,void *runtimeMethod)

{
  void *x;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  RecordManager_cPlayerRecord *pRVar11;
  GCLocalNotificationsManager *self_00;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  RecordManager *pRVar16;
  void *pvVar17;
  undefined8 *puVar18;
  
  puVar3 = PTR_DAT_029c0650;
  if ((bRam0000000002b9501b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0650);
    NativeHelper_011df0b4(PTR_DAT_029bfb10);
    NativeHelper_011df0b4(PTR_DAT_029ba708);
    NativeHelper_011df0b4(PTR_DAT_029bfcc8);
    NativeHelper_011df0b4(PTR_DAT_029c0dc8);
    NativeHelper_011df0b4(PTR_DAT_029c0828);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029c0ad0);
    bRam0000000002b9501b = 1;
  }
  if ((CharacterSelectGUI *)**(undefined8 **)(*(long *)puVar3 + 0xb8) == (CharacterSelectGUI *)0x0)
  goto LAB_013f5f14;
  bVar5 = CharacterSelectGUI_IsNewCharacterSelectEnabled_12e141c
                    ((CharacterSelectGUI *)**(undefined8 **)(*(long *)puVar3 + 0xb8),(void *)0x0);
  if (bVar5) {
    if (self->NoAdsButtonAnchor == (UIAnchor *)0x0) goto LAB_013f5f14;
    (self->NoAdsButtonAnchor->relativeOffset).component1 = self->NoAdsButtonAnchorOffsetY;
  }
  puVar3 = PTR_DAT_029bdbe8;
  *(BasePanel **)&self->field_0x38 = returnTo;
  BasePanel_FadeIn_12dfdcc((BasePanel *)self,0.0,0.5,(void *)0x0);
  pvVar9 = (void *)NativeHelper_013f5f1c();
  UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar9,(void *)0x0);
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)puVar3;
  }
  pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
  if (pRVar16 == (RecordManager *)0x0) goto LAB_013f5f14;
  pRVar16->IsInGameFirstTime = true;
  if (pRVar16->PlayerManager == (void *)0x0) goto LAB_013f5f14;
  iVar6 = PlayerManager_GetActivePlayer_12ccc8c(pRVar16->PlayerManager,(void *)0x0);
  pRVar11 = RecordManager_FindOrCreatePlayerRecord_12b2aac(pRVar16,iVar6,(void *)0x0);
  puVar4 = PTR_DAT_029bfcc8;
  puVar2 = PTR_DAT_029bfb10;
  if ((pRVar11 == (RecordManager_cPlayerRecord *)0x0) ||
     (**(long **)(*(long *)PTR_DAT_029bfb10 + 0xb8) == 0)) goto LAB_013f5f14;
  if (*(int *)(**(long **)(*(long *)PTR_DAT_029bfb10 + 0xb8) + 0x38) <= pRVar11->lifetimePlays) {
    if (*(int *)(*(long *)PTR_DAT_029c0dc8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    LocalNotificationSchedulingManager_ScheduleNotifications_130782c((void *)0x0);
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_029b7f98;
  lVar14 = **(long **)(lVar10 + 0xb8);
  if (lVar14 == 0) {
LAB_013f5dc0:
    if (self->GlobalChallengesButton == (void *)0x0) goto LAB_013f5f14;
    NativeHelper_02610c54(self->GlobalChallengesButton,0,0);
    pvVar9 = self->GlobalChallengesCTA;
    if (pvVar9 == (void *)0x0) goto LAB_013f5f14;
LAB_013f5ddc:
    uVar12 = 0;
  }
  else {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar14 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar14 == 0) goto LAB_013f5f14;
    }
    if (*(long *)(lVar14 + 0x30) == 0) goto LAB_013f5f14;
    iVar6 = *(int *)(*(long *)(lVar14 + 0x30) + 0x10);
    if (0 < iVar6) {
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = *(long *)puVar3;
      }
      pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      iVar7 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0(pRVar16,iVar7,(void *)0x0);
      if (iVar6 == iVar7) {
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar10 = *(long *)puVar3;
        }
        pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
        pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
        if ((pvVar9 == (void *)0x0) ||
           (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
           pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
        RecordManager_SetGlobalChallengeFTUE_Status_12b4ac8(pRVar16,iVar7,true,(void *)0x0);
        pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
        pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
        if ((pvVar9 == (void *)0x0) ||
           (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
           pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
        RecordManager_SetGlobalChallengeStartPromoShown_12b4a84(pRVar16,iVar7,true,(void *)0x0);
      }
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar3;
    }
    pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
    pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
    if ((pvVar9 == (void *)0x0) ||
       (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
       pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
    iVar7 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0(pRVar16,iVar7,(void *)0x0);
    if (iVar7 < iVar6) {
      lVar10 = *(long *)puVar3;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = *(long *)puVar3;
      }
      pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengeStartLN_Status_12b4980(pRVar16,iVar7,false,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengeEndLN_Status_12b4a08(pRVar16,iVar7,false,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengeMidLN_Status_12b49c4(pRVar16,iVar7,false,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengesMidLN_ID_12b4a44(pRVar16,iVar7,0,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengeStartPromoShown_12b4a84(pRVar16,iVar7,false,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengesRewardNoToGive_12b4b04(pRVar16,iVar7,0,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengesPreviousRewardNoGiven_12b4b3c(pRVar16,iVar7,0,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengesCurrentValue_12b4878(pRVar16,iVar7,0.0,(void *)0x0);
      pRVar16 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar9 == (void *)0x0) ||
         (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
         pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
      RecordManager_SetGlobalChallengesCurrentIndex_12b48b8(pRVar16,iVar7,iVar6,(void *)0x0);
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_013f5f14;
      if (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x38) <= pRVar11->lifetimePlays) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        self_00 = UnityEngine_object_FindObjectOfType_142ad18(*(void **)PTR_DAT_029c0828);
        if (self_00 == (GCLocalNotificationsManager *)0x0) goto LAB_013f5f14;
        GCLocalNotificationsManager_Initialize_12d913c(self_00,(void *)0x0);
      }
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar3;
    }
    pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
    pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
    if ((pvVar9 == (void *)0x0) ||
       (iVar7 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
       pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
    iVar7 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0(pRVar16,iVar7,(void *)0x0);
    puVar2 = PTR_DAT_029ba708;
    if (iVar6 < iVar7) goto LAB_013f5dc0;
    if (*(int *)(*(long *)PTR_DAT_029ba708 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar12 = NativeHelper_01fde6f8(0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar10);
      lVar10 = *(long *)puVar4;
    }
    if (((**(long **)(lVar10 + 0xb8) == 0) ||
        (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x30), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_013f5f14;
    uVar13 = NativeHelper_01fe0210(uVar12,*(undefined8 *)(lVar10 + 0x18),0);
    if ((uVar13 & 1) == 0) goto LAB_013f5dc0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar12 = NativeHelper_01fde6f8(0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar10);
      lVar10 = *(long *)puVar4;
    }
    if (((**(long **)(lVar10 + 0xb8) == 0) ||
        (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x30), lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_013f5f14;
    uVar13 = NativeHelper_01fe0138(uVar12,*(undefined8 *)(lVar10 + 0x20),0);
    if ((uVar13 & 1) == 0) goto LAB_013f5dc0;
    if (self->GlobalChallengesButton == (void *)0x0) goto LAB_013f5f14;
    NativeHelper_02610c54(self->GlobalChallengesButton,1,0);
    puVar2 = PTR_DAT_029c0ad0;
    UnityEngine_MonoBehaviour_CancelInvoke_250d934(self,*(void **)PTR_DAT_029c0ad0,(void *)0x0);
    UnityEngine_MonoBehaviour_InvokeRepeating_250d804(self,*(void **)puVar2,0.0,60.0,(void *)0x0);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar3;
    }
    pRVar16 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
    pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
    if ((pvVar9 == (void *)0x0) ||
       (iVar6 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
       pRVar16 == (RecordManager *)0x0)) goto LAB_013f5f14;
    bVar5 = RecordManager_GetGlobalChallengeFTUE_Status_12b4aa8(pRVar16,iVar6,(void *)0x0);
    pvVar9 = self->GlobalChallengesCTA;
    if (pvVar9 == (void *)0x0) goto LAB_013f5f14;
    if (bVar5) goto LAB_013f5ddc;
    uVar12 = 1;
  }
  NativeHelper_02610c54(pvVar9,uVar12,0);
  if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  SavedGame_DeleteSavedGame_1320688((void *)0x0);
  if (self->MainMenuRowNew != (void *)0x0) {
    NativeHelper_02610c54(self->MainMenuRowNew,1,0);
    if (self->MainMenuRowOld != (void *)0x0) {
      NativeHelper_02610c54(self->MainMenuRowOld,0,0);
      if (self->NewOptionsButton != (void *)0x0) {
        NativeHelper_02610c54(self->NewOptionsButton,1,0);
        pvVar9 = TimedCelebrationEvents_get_ActiveEventName_13231e4((void *)0x0);
        pvVar17 = self->EventBanners;
        if (pvVar17 != (void *)0x0) {
          if (0 < (int)*(ulong *)((long)pvVar17 + 0x18)) {
            uVar13 = 0;
            uVar15 = *(ulong *)((long)pvVar17 + 0x18) & 0xffffffff;
            puVar18 = (undefined8 *)((long)pvVar17 + 0x28);
            do {
              if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2e4();
              }
              uVar12 = puVar18[-1];
              x = (void *)*puVar18;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              bVar5 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
              if (!bVar5) {
                uVar15 = NativeHelper_01e9be28(pvVar9,0);
                if ((uVar15 & 1) == 0) {
                  uVar8 = NativeHelper_01343edc(pvVar9,uVar12,0);
                  uVar8 = uVar8 & 1;
                }
                else {
                  uVar8 = 0;
                }
                if (x == (void *)0x0) goto LAB_013f5f14;
                NativeHelper_02610c54(x,uVar8,0);
              }
              uVar15 = (ulong)*(uint *)((long)pvVar17 + 0x18);
              uVar13 = uVar13 + 1;
              puVar18 = puVar18 + 2;
            } while ((long)uVar13 < (long)(int)*(uint *)((long)pvVar17 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_013f5f14:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

