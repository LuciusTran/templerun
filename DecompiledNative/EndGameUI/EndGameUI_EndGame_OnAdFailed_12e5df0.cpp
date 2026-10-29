// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void EndGame_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }
// Ghidra address: 013e9df0; ELF VA: 0x12e9df0; file offset: 0x12e5df0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_EndGame_OnAdFailed_12e5df0
               (EndGameUI *self,void *inService,void *inAdType,void *inAdSpaceName,void *inError,
               void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *inError_00;
  long lVar5;
  long *paramList;
  Imangi_Ad_AdManager *pIVar6;
  undefined8 uVar7;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *inReason;
  void *inLocation;
  uint uVar8;
  
  iVar1 = (int)inAdType;
  if ((bRam0000000002b94fd5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c0910);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029bdfa8);
    NativeHelper_011df0b4(PTR_DAT_029bf178);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bdfb0);
    bRam0000000002b94fd5 = 1;
  }
  UIInputBlocking_EnableInput_1300bfc((void *)0x0);
  inError_00 = TRAnalyticsHelper_SanitizeEventAttributeLength_12b997c(inError,(void *)0x0);
  if (iVar1 == 0) {
    EndGameUI_SetDoubleButtonState_12e39e0(self,false,inAdType);
    paramList = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
    if (paramList == (long *)0x0) goto LAB_013ea0f0;
    if ((inAdSpaceName != (void *)0x0) &&
       (lVar5 = NativeHelper_011df1c0(inAdSpaceName,*(undefined8 *)(*paramList + 0x40)), lVar5 == 0)
       ) {
LAB_013ea0f8:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar8 = *(uint *)(paramList + 3);
    if (uVar8 == 0) {
LAB_013ea0f4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    paramList[4] = (long)inAdSpaceName;
    if (inError != (void *)0x0) {
      lVar5 = NativeHelper_011df1c0(inError,*(undefined8 *)(*paramList + 0x40));
      if (lVar5 == 0) goto LAB_013ea0f8;
      uVar8 = *(uint *)(paramList + 3);
    }
    if (uVar8 < 2) goto LAB_013ea0f4;
    paramList[5] = (long)inError;
    if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar2 = PTR_DAT_029c05c8;
    Imangi_Utilities_ImangiLog_Error_12165d4
              (*(void **)PTR_DAT_029c05c8,*(void **)PTR_DAT_029bdfa8,paramList,(void *)0x0);
    TRAnalyticsHelper_LogVideoAd_12b949c
              ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bdfb0,*(void **)puVar2,
               inError_00,(void *)0x0);
    inReason = extraout_x1_03;
  }
  else {
    inReason = extraout_x1;
    if (iVar1 == 1) {
      self->_ShowingInterstitial = false;
      EndGameUI_SetButtonState_12e392c(self,true,inAdType);
      self->WatchedInterstitialAd = false;
      inLocation = *(void **)PTR_DAT_029c05c8;
      TRAnalyticsHelper_LogInterstitialAd_12b922c
                ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bf178,inLocation,
                 inError_00,(void *)0x0);
      puVar2 = PTR_DAT_029bd310;
      lVar5 = *(long *)PTR_DAT_029bd310;
      inReason = extraout_x1_00;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar5 = *(long *)puVar2;
        inReason = extraout_x1_01;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_013ea0f0;
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x31) != '\0') {
        EndGameUI_CacheInterstitial_12e4218(self,inReason,inLocation);
        inReason = extraout_x1_02;
      }
    }
  }
  puVar3 = PTR_DAT_029b9770;
  puVar2 = PTR_DAT_029b7f98;
  EndGameUI_UnhookAdEvents_12e2bb0(self,inReason);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2);
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(pIVar6,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    if (pIVar6 == (Imangi_Ad_AdManager *)0x0) goto LAB_013ea0f0;
    (**(code **)(*(long *)pIVar6 + 0x2a8))
              (pIVar6,0,*(undefined8 *)PTR_DAT_029b9680,5,*(undefined8 *)(*(long *)pIVar6 + 0x2b0));
  }
  lVar5 = **(long **)(*(long *)PTR_DAT_029bdfa0 + 0xb8);
  if (lVar5 != 0) {
    if (*(void **)(lVar5 + 0x20) != (void *)0x0) {
      UnityEngine_AudioSource_Stop_24e3e6c(*(void **)(lVar5 + 0x20),(void *)0x0);
      if (*(void **)(lVar5 + 0x20) != (void *)0x0) {
        UnityEngine_AudioSource_set_clip_24e3ce4
                  (*(void **)(lVar5 + 0x20),*(void **)(lVar5 + 0x60),(void *)0x0);
        lVar5 = *(long *)(lVar5 + 0x20);
        if (lVar5 != 0) {
          if (pcRam0000000002b9bf40 == (code *)0x0) {
            pcRam0000000002b9bf40 = (code *)NativeHelper_011df070(&UNK_007acce7,0);
          }
                    /* WARNING: Could not recover jumptable at 0x025e7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000002b9bf40)(lVar5,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_013ea0f0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

