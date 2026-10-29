// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void EndGame_OnAdDismissed(AdService inService, AdType inAdType, string inAdSpaceName, bool inCompleted) { }
// Ghidra address: 013ea148; ELF VA: 0x12ea148; file offset: 0x12e6148
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_EndGame_OnAdDismissed_12e6148
               (EndGameUI *self,void *inService,void *inAdType,void *inAdSpaceName,bool inCompleted,
               void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  Imangi_Ad_AdManager *pIVar6;
  AudioManager *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *runtimeMethod_00;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *runtimeMethod_01;
  void *extraout_x1_05;
  void *pvVar7;
  void *pvVar8;
  RecordManager *pRVar9;
  float fVar10;
  
  iVar4 = (int)inAdType;
  pvVar8 = (void *)((ulong)inService & 0xffffffff);
  if ((bRam0000000002b94fd6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdff0);
    NativeHelper_011df0b4(PTR_DAT_029bf140);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029c0918);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029bdff8);
    bRam0000000002b94fd6 = 1;
  }
  puVar2 = PTR_DAT_029b9770;
  UIInputBlocking_EnableInput_1300bfc((void *)0x0);
  if (iVar4 == 0) {
    EndGameUI_SetDoubleButtonState_12e39e0(self,false,inAdType);
    if (inCompleted) {
      TRAnalyticsHelper_LogVideoAd_12b949c
                (pvVar8,*(void **)PTR_DAT_029bdff0,*(void **)PTR_DAT_029c05c8,
                 *(void **)PTR_DAT_029b8618,(void *)0x0);
      EndGameUI_GiveRewardForAd_12e64c4(self,runtimeMethod_00);
      pvVar7 = extraout_x1_03;
    }
    else {
      TRAnalyticsHelper_LogVideoAd_12b949c
                (pvVar8,*(void **)PTR_DAT_029bdff8,*(void **)PTR_DAT_029c05c8,
                 *(void **)PTR_DAT_029b8618,(void *)0x0);
      pvVar7 = extraout_x1_04;
    }
  }
  else {
    pvVar7 = extraout_x1;
    if (iVar4 == 1) {
      pvVar7 = *(void **)PTR_DAT_029c05c8;
      TRAnalyticsHelper_LogInterstitialAd_12b922c
                (pvVar8,*(void **)PTR_DAT_029bf140,pvVar7,*(void **)PTR_DAT_029b8618,(void *)0x0);
      self->_ShowingInterstitial = false;
      EndGameUI_SetButtonState_12e392c(self,true,pvVar7);
      pvVar8 = extraout_x1_00;
      if (inCompleted) {
        fVar10 = UnityEngine_Time_get_time_25133ec((void *)0x0);
        self->LastInterstitialShownTime = fVar10;
        pvVar8 = extraout_x1_01;
      }
      puVar1 = PTR_DAT_029bd310;
      lVar5 = *(long *)PTR_DAT_029bd310;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar5 = *(long *)puVar1;
        pvVar8 = extraout_x1_02;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_013ea4c0;
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x31) == '\0') {
        bVar3 = EndGameUI_InterstitialAdCooldownCompleted_12e3ed8(self,pvVar8);
        if (bVar3) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
          pvVar8 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
          if (pIVar6 == (Imangi_Ad_AdManager *)0x0) goto LAB_013ea4c0;
          (**(code **)(*(long *)pIVar6 + 0x2a8))
                    (pIVar6,1,pvVar8,5,*(undefined8 *)(*(long *)pIVar6 + 0x2b0));
        }
      }
      else {
        EndGameUI_CacheInterstitial_12e4218(self,pvVar8,pvVar7);
      }
      lVar5 = *(long *)&self->field_0x20;
      if ((lVar5 == 0) || (*(void **)(lVar5 + 200) == (void *)0x0)) goto LAB_013ea4c0;
      pRVar9 = *(RecordManager **)(lVar5 + 0xc0);
      iVar4 = PlayerManager_GetActivePlayer_12ccc8c(*(void **)(lVar5 + 200),(void *)0x0);
      if (pRVar9 == (RecordManager *)0x0) goto LAB_013ea4c0;
      RecordManager_IncrimentInterstitialAdsSeenCount_12b47f8(pRVar9,iVar4,(void *)0x0);
      if ((*(long *)&self->field_0x20 == 0) ||
         (pRVar9 = *(RecordManager **)(*(long *)&self->field_0x20 + 0xc0),
         pRVar9 == (RecordManager *)0x0)) goto LAB_013ea4c0;
      RecordManager_SaveRecords_12b3350(pRVar9,(void *)0x0);
      lVar5 = *(long *)&self->field_0x20;
      if ((lVar5 == 0) || (*(void **)(lVar5 + 200) == (void *)0x0)) goto LAB_013ea4c0;
      pRVar9 = *(RecordManager **)(lVar5 + 0xc0);
      iVar4 = PlayerManager_GetActivePlayer_12ccc8c(*(void **)(lVar5 + 200),(void *)0x0);
      if (pRVar9 == (RecordManager *)0x0) goto LAB_013ea4c0;
      iVar4 = RecordManager_GetInterstitialAdsSeenCount_12b47e0(pRVar9,iVar4,(void *)0x0);
      RecordManager_SendIntersitialAdSeenMilestoneEvent_12ae9fc(pRVar9,iVar4,(void *)0x0);
      pvVar7 = extraout_x1_05;
    }
  }
  puVar1 = PTR_DAT_029b7f98;
  EndGameUI_UnhookAdEvents_12e2bb0(self,pvVar7);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pIVar6,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    if (pIVar6 == (Imangi_Ad_AdManager *)0x0) goto LAB_013ea4c0;
    (**(code **)(*(long *)pIVar6 + 0x2a8))
              (pIVar6,0,*(undefined8 *)PTR_DAT_029b9680,5,*(undefined8 *)(*(long *)pIVar6 + 0x2b0));
  }
  self_00 = (AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8);
  if (self_00 != (AudioManager *)0x0) {
    if (0.0 <= self_00->_ResumeMusicVolume) {
      AudioManager_set_MusicVolume_12bab60(self_00,self_00->_ResumeMusicVolume,(void *)0x0);
      self_00->_ResumeMusicVolume = -1.0;
    }
    return;
  }
LAB_013ea4c0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

