// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013ea910; ELF VA: 0x12ea910; file offset: 0x12e6910
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool EndGameUI__SlideInAnimation_d__61_MoveNext_12e6910
               (EndGameUI__SlideInAnimation_d__61 *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  Imangi_Ad_AdManager *pIVar7;
  undefined8 uVar8;
  UISprite *self_00;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  TweenPosition *pTVar12;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *in_x2;
  void *runtimeMethod_03;
  int iVar13;
  long lVar14;
  EndGameUI *self_01;
  RecordManager *self_02;
  float fVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 pos;
  
  if ((bRam0000000002b94fdb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029ba708);
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bdf70);
    NativeHelper_011df0b4(PTR_DAT_029c05f8);
    NativeHelper_011df0b4(PTR_DAT_029bfcc8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029c01a8);
    NativeHelper_011df0b4(PTR_DAT_029bdb88);
    bRam0000000002b94fdb = 1;
    runtimeMethod = extraout_x1;
  }
  if ((uint)self->__1__state < 6) {
    self_01 = self->__4__this;
    switch(self->__1__state) {
    case 0:
      self->__1__state = -1;
      if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar5 = GameController_IsVideoAdAvailable_128da40((void *)0x0);
      puVar1 = PTR_DAT_029b9770;
      if (!bVar5) {
        if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pIVar7 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
        }
        in_x2 = (void *)0x0;
        bVar4 = UnityEngine_object_op_Inequality_250c8e4(pIVar7,(void *)0x0,(void *)0x0);
        if (bVar4) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pIVar7 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
          if (pIVar7 == (Imangi_Ad_AdManager *)0x0) goto code_r0x013eb598;
          in_x2 = *(void **)PTR_DAT_029b9680;
          (**(code **)(*(long *)pIVar7 + 0x2a8))
                    (pIVar7,0,in_x2,5,*(undefined8 *)(*(long *)pIVar7 + 0x2b0));
        }
      }
      if (*(int *)(*(long *)PTR_DAT_029ba770 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = FeatureManager_IsFeatureEnabled_12d634c(*(void **)PTR_DAT_029c01a8,(void *)0x0);
      if (bVar4) {
        if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
        if (self_01->WatchedRewardedAd != false) goto code_r0x013eb048;
        if ((*(long *)&self_01->field_0x20 == 0) ||
           (lVar10 = *(long *)(*(long *)&self_01->field_0x20 + 0x80), lVar10 == 0))
        goto code_r0x013eb598;
        iVar13 = *(int *)(lVar10 + 0x148);
        iVar6 = RewardedAdManager_get_MinDoubleAmount_12d6d40((void *)0x0);
        if (iVar13 <= iVar6) goto code_r0x013eb048;
        if ((*(long *)&self_01->field_0x20 == 0) ||
           (lVar10 = *(long *)(*(long *)&self_01->field_0x20 + 0x80), lVar10 == 0))
        goto code_r0x013eb598;
        iVar13 = *(int *)(lVar10 + 0x148);
        iVar6 = RewardedAdManager_get_MaxDoubleAmount_12d6d98((void *)0x0);
        bVar5 = bVar5 && iVar13 < iVar6;
      }
      else {
        if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
code_r0x013eb048:
        bVar5 = false;
      }
      EndGameUI_SetDoubleButtonState_12e39e0(self_01,bVar5,in_x2);
      self->_decideInterstitialAfterSlideIn_5__2 = false;
      pvVar9 = *(void **)&self_01->field_0x38;
      if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      runtimeMethod_03 = (void *)0x0;
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
      if (bVar5) {
        self->_decideInterstitialAfterSlideIn_5__2 = (bool)(self_01->WatchedInterstitialAd ^ 1);
        EndGameUI_UpdateStats_12e43cc(self_01,runtimeMethod_01);
        *(undefined8 *)&self_01->field_0x38 = 0;
      }
      if (self->_decideInterstitialAfterSlideIn_5__2 == false) {
        EndGameUI_SetButtonState_12e392c
                  (self_01,self_01->_ShowingInterstitial == false,runtimeMethod_03);
        EndGameUI_ShowAdAfterHandling_12de9bc(self_01,runtimeMethod_02);
      }
      else {
        EndGameUI_SetButtonState_12e392c(self_01,false,runtimeMethod_03);
      }
      puVar1 = PTR_DAT_029ba1d0;
      if (self_01->SlideInOffset != (void *)0x0) {
        fVar15 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
        fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
        pvVar9 = (void *)NativeHelper_02610b98(self_01->SlideInOffset,0);
        if (pvVar9 != (void *)0x0) {
          fVar15 = fVar15 - fVar16;
          RVar17.component2 = -40.0;
          RVar17.component0 = (float)(int)((ulong)_UNK_007a3c30 << 0x20);
          RVar17.component1 = (float)(int)(((ulong)_UNK_007a3c30 << 0x20) >> 0x20);
          UnityEngine_Transform_set_localPosition_2515ec4(pvVar9,RVar17,(void *)0x0);
          lVar10 = (ulong)(uint)-fVar15 << 0x20;
          pos.component2 = -40.0;
          pos.component0 = (float)(int)lVar10;
          pos.component1 = (float)(int)((ulong)lVar10 >> 0x20);
          pTVar12 = TweenPosition_Begin_1209e6c(self_01->SlideInOffset,0.5,pos,(void *)0x0);
          if (pTVar12 != (TweenPosition *)0x0) {
            *(undefined4 *)&pTVar12->field_0x2c = 1;
            if ((self_01->MainMenuButton != (void *)0x0) &&
               (pvVar9 = (void *)NativeHelper_02610b98(self_01->MainMenuButton,0),
               pvVar9 != (void *)0x0)) {
              RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0);
              (self->_mm_5__3).component0 = RVar17.component0;
              (self->_mm_5__3).component1 = RVar17.component1;
              (self->_mm_5__3).component2 = RVar17.component2;
              if ((self_01->RunAgainButton != (void *)0x0) &&
                 (pvVar9 = (void *)NativeHelper_02610b98(self_01->RunAgainButton,0),
                 pvVar9 != (void *)0x0)) {
                RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0);
                (self->_ra_5__4).component0 = RVar17.component0;
                (self->_ra_5__4).component1 = RVar17.component1;
                (self->_ra_5__4).component2 = RVar17.component2;
                if ((*(long *)&self_01->field_0x30 != 0) &&
                   (pvVar9 = (void *)NativeHelper_0260e1a8(*(long *)&self_01->field_0x30,0),
                   pvVar9 != (void *)0x0)) {
                  RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0);
                  (self->_na_5__5).component0 = RVar17.component0;
                  (self->_na_5__5).component1 = RVar17.component1;
                  (self->_na_5__5).component2 = RVar17.component2;
                  if ((self_01->StoreButton != (void *)0x0) &&
                     (pvVar9 = (void *)NativeHelper_02610b98(self_01->StoreButton,0),
                     pvVar9 != (void *)0x0)) {
                    RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0);
                    (self->_sb_5__6).component0 = RVar17.component0;
                    (self->_sb_5__6).component1 = RVar17.component1;
                    (self->_sb_5__6).component2 = RVar17.component2;
                    if ((self_01->FreeCoinsButton != (void *)0x0) &&
                       (pvVar9 = (void *)NativeHelper_02610b98(self_01->FreeCoinsButton,0),
                       pvVar9 != (void *)0x0)) {
                      RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0);
                      (self->_fb_5__7).component0 = RVar17.component0;
                      (self->_fb_5__7).component1 = RVar17.component1;
                      (self->_fb_5__7).component2 = RVar17.component2;
                      if ((self_01->StatsButton != (void *)0x0) &&
                         (pvVar9 = (void *)NativeHelper_02610b98(self_01->StatsButton,0),
                         pvVar9 != (void *)0x0)) {
                        RVar17 = UnityEngine_Transform_get_localPosition_2515e38(pvVar9,(void *)0x0)
                        ;
                        (self->_gb_5__8).component0 = RVar17.component0;
                        (self->_gb_5__8).component1 = RVar17.component1;
                        (self->_gb_5__8).component2 = RVar17.component2;
                        if ((self_01->TweetButton != (void *)0x0) &&
                           (pvVar9 = (void *)NativeHelper_02610b98(self_01->TweetButton,0),
                           pvVar9 != (void *)0x0)) {
                          RVar17 = UnityEngine_Transform_get_localPosition_2515e38
                                             (pvVar9,(void *)0x0);
                          (self->_tb_5__9).component0 = RVar17.component0;
                          (self->_tb_5__9).component1 = RVar17.component1;
                          (self->_tb_5__9).component2 = RVar17.component2;
                          if ((self_01->GCButton != (void *)0x0) &&
                             (pvVar9 = (void *)NativeHelper_02610b98(self_01->GCButton,0),
                             pvVar9 != (void *)0x0)) {
                            RVar17 = UnityEngine_Transform_get_localPosition_2515e38
                                               (pvVar9,(void *)0x0);
                            (self->_gcb_5__10).component0 = RVar17.component0;
                            (self->_gcb_5__10).component1 = RVar17.component1;
                            (self->_gcb_5__10).component2 = RVar17.component2;
                            puVar2 = PTR_DAT_029bdf70;
                            if ((self_01->MainMenuButton != (void *)0x0) &&
                               (pvVar9 = (void *)NativeHelper_015070d0
                                                           (self_01->MainMenuButton,
                                                            *(undefined8 *)PTR_DAT_029bdf70),
                               pvVar9 != (void *)0x0)) {
                              UnityEngine_Behaviour_set_enabled_250972c(pvVar9,false,(void *)0x0);
                              puVar3 = PTR_DAT_029c05f8;
                              if ((self_01->MainMenuButton != (void *)0x0) &&
                                 (pvVar9 = (void *)NativeHelper_015070d0
                                                             (self_01->MainMenuButton,
                                                              *(undefined8 *)PTR_DAT_029c05f8),
                                 pvVar9 != (void *)0x0)) {
                                UnityEngine_Behaviour_set_enabled_250972c(pvVar9,false,(void *)0x0);
                                if ((self_01->MainMenuButton != (void *)0x0) &&
                                   (pvVar9 = (void *)NativeHelper_02610b98
                                                               (self_01->MainMenuButton,0),
                                   pvVar9 != (void *)0x0)) {
                                  UnityEngine_Transform_Translate_25172b0
                                            (pvVar9,0.0,-200.0,0.0,(void *)0x0);
                                  if ((self_01->RunAgainButton != (void *)0x0) &&
                                     (pvVar9 = (void *)NativeHelper_015070d0
                                                                 (self_01->RunAgainButton,
                                                                  *(undefined8 *)puVar2),
                                     pvVar9 != (void *)0x0)) {
                                    UnityEngine_Behaviour_set_enabled_250972c
                                              (pvVar9,false,(void *)0x0);
                                    if ((self_01->RunAgainButton != (void *)0x0) &&
                                       (pvVar9 = (void *)NativeHelper_015070d0
                                                                   (self_01->RunAgainButton,
                                                                    *(undefined8 *)puVar3),
                                       pvVar9 != (void *)0x0)) {
                                      UnityEngine_Behaviour_set_enabled_250972c
                                                (pvVar9,false,(void *)0x0);
                                      if ((self_01->RunAgainButton != (void *)0x0) &&
                                         (pvVar9 = (void *)NativeHelper_02610b98
                                                                     (self_01->RunAgainButton,0),
                                         pvVar9 != (void *)0x0)) {
                                        UnityEngine_Transform_Translate_25172b0
                                                  (pvVar9,0.0,-200.0,0.0,(void *)0x0);
                                        if ((*(long *)&self_01->field_0x30 != 0) &&
                                           (pvVar9 = (void *)NativeHelper_0260e1a8
                                                                       (*(long *)&self_01->
                                                  field_0x30,0), pvVar9 != (void *)0x0)) {
                                          fVar15 = fVar15 + 600.0;
                                          UnityEngine_Transform_Translate_25172b0
                                                    (pvVar9,0.0,
                                                     fVar15 + *(float *)(*(long *)(*(long *)puVar1 +
                                                                                  0xb8) + 0x1c),0.0,
                                                     (void *)0x0);
                                          if ((self_01->StoreButton != (void *)0x0) &&
                                             (pvVar9 = (void *)NativeHelper_02610b98
                                                                         (self_01->StoreButton,0),
                                             pvVar9 != (void *)0x0)) {
                                            UnityEngine_Transform_Translate_25172b0
                                                      (pvVar9,0.0,
                                                       fVar15 + *(float *)(*(long *)(*(long *)puVar1
                                                                                    + 0xb8) + 0x1c),
                                                       0.0,(void *)0x0);
                                            if ((self_01->FreeCoinsButton != (void *)0x0) &&
                                               (pvVar9 = (void *)NativeHelper_02610b98
                                                                           (self_01->FreeCoinsButton
                                                                            ,0),
                                               pvVar9 != (void *)0x0)) {
                                              UnityEngine_Transform_Translate_25172b0
                                                        (pvVar9,0.0,
                                                         fVar15 + *(float *)(*(long *)(*(long *)
                                                  puVar1 + 0xb8) + 0x1c),0.0,(void *)0x0);
                                              if ((self_01->StatsButton != (void *)0x0) &&
                                                 (pvVar9 = (void *)NativeHelper_02610b98
                                                                             (self_01->StatsButton,0
                                                                             ),
                                                 pvVar9 != (void *)0x0)) {
                                                UnityEngine_Transform_Translate_25172b0
                                                          (pvVar9,0.0,
                                                           fVar15 + *(float *)(*(long *)(*(long *)
                                                  puVar1 + 0xb8) + 0x1c),0.0,(void *)0x0);
                                                if ((self_01->TweetButton != (void *)0x0) &&
                                                   (pvVar9 = (void *)NativeHelper_02610b98
                                                                               (self_01->TweetButton
                                                                                ,0),
                                                   pvVar9 != (void *)0x0)) {
                                                  UnityEngine_Transform_Translate_25172b0
                                                            (pvVar9,0.0,
                                                             fVar15 + *(float *)(*(long *)(*(long *)
                                                  puVar1 + 0xb8) + 0x1c),0.0,(void *)0x0);
                                                  if ((self_01->GCButton != (void *)0x0) &&
                                                     (pvVar9 = (void *)NativeHelper_02610b98
                                                                                 (self_01->GCButton,
                                                                                  0),
                                                     pvVar9 != (void *)0x0)) {
                                                    UnityEngine_Transform_Translate_25172b0
                                                              (pvVar9,0.0,
                                                               fVar15 + *(float *)(*(long *)(*(long 
                                                  *)puVar1 + 0xb8) + 0x1c),0.0,(void *)0x0);
                                                  pvVar9 = (void *)NativeHelper_012ec778
                                                                             (0x3f400000,0);
                                                  pvVar9 = 
                                                  UnityEngine_MonoBehaviour_StartCoroutine_250dbe8
                                                            (self_01,pvVar9,(void *)0x0);
                                                  self->__2__current = pvVar9;
                                                  self->__1__state = 1;
                                                  return true;
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
code_r0x013eb598:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    case 1:
      self->__1__state = -1;
      if (self->_decideInterstitialAfterSlideIn_5__2 == false) {
        if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
      }
      else {
        if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
        EndGameUI_HandleAds_12de7c0(self_01,runtimeMethod);
        EndGameUI_SetButtonState_12e392c(self_01,self_01->_ShowingInterstitial == false,in_x2);
        EndGameUI_ShowAdAfterHandling_12de9bc(self_01,runtimeMethod_00);
      }
      if ((self_01->RunAgainButton == (void *)0x0) ||
         (pvVar9 = (void *)NativeHelper_015070d0
                                     (self_01->RunAgainButton,*(undefined8 *)PTR_DAT_029bdf70),
         pvVar9 == (void *)0x0)) goto code_r0x013eb598;
      UnityEngine_Behaviour_set_enabled_250972c(pvVar9,true,(void *)0x0);
      if ((self_01->RunAgainButton == (void *)0x0) ||
         (pvVar9 = (void *)NativeHelper_015070d0
                                     (self_01->RunAgainButton,*(undefined8 *)PTR_DAT_029c05f8),
         pvVar9 == (void *)0x0)) goto code_r0x013eb598;
      UnityEngine_Behaviour_set_enabled_250972c(pvVar9,true,(void *)0x0);
      TweenPosition_Begin_1209e6c(self_01->RunAgainButton,0.25,self->_ra_5__4,(void *)0x0);
      if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) == (AudioManager *)0x0
         ) goto code_r0x013eb598;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x1f,
                 1.0,(void *)0x0);
      pvVar9 = (void *)NativeHelper_012ec778(0x3e800000,0);
      pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self_01,pvVar9,(void *)0x0);
      iVar13 = 2;
      self->__2__current = pvVar9;
      break;
    case 2:
      self->__1__state = -1;
      if (((self_01 == (EndGameUI *)0x0) || (self_01->MainMenuButton == (void *)0x0)) ||
         (pvVar9 = (void *)NativeHelper_015070d0
                                     (self_01->MainMenuButton,*(undefined8 *)PTR_DAT_029bdf70),
         pvVar9 == (void *)0x0)) goto code_r0x013eb598;
      UnityEngine_Behaviour_set_enabled_250972c(pvVar9,true,(void *)0x0);
      if ((self_01->MainMenuButton == (void *)0x0) ||
         (pvVar9 = (void *)NativeHelper_015070d0
                                     (self_01->MainMenuButton,*(undefined8 *)PTR_DAT_029c05f8),
         pvVar9 == (void *)0x0)) goto code_r0x013eb598;
      UnityEngine_Behaviour_set_enabled_250972c(pvVar9,true,(void *)0x0);
      TweenPosition_Begin_1209e6c(self_01->MainMenuButton,0.25,self->_mm_5__3,(void *)0x0);
      if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) == (AudioManager *)0x0
         ) goto code_r0x013eb598;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x1f,
                 1.0,(void *)0x0);
      pvVar9 = (void *)NativeHelper_012ec778(0x3e800000,0);
      pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self_01,pvVar9,(void *)0x0);
      self->__2__current = pvVar9;
      iVar13 = 3;
      break;
    case 3:
      self->__1__state = -1;
      if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
      TweenPosition_Begin_1209e6c(self_01->FreeCoinsButton,0.25,self->_fb_5__7,(void *)0x0);
      if (self_01->ShowTweetButton != false) {
        TweenPosition_Begin_1209e6c(self_01->TweetButton,0.25,self->_tb_5__9,(void *)0x0);
      }
      puVar1 = PTR_DAT_029bfcc8;
      lVar10 = *(long *)PTR_DAT_029bfcc8;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = *(long *)puVar1;
      }
      lVar14 = **(long **)(lVar10 + 0xb8);
      if (lVar14 != 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar14 == 0) goto code_r0x013eb598;
        }
        puVar2 = PTR_DAT_029bdbe8;
        if (*(long *)(lVar14 + 0x30) == 0) goto code_r0x013eb598;
        iVar13 = *(int *)(*(long *)(lVar14 + 0x30) + 0x10);
        lVar10 = *(long *)PTR_DAT_029bdbe8;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar10 = *(long *)puVar2;
        }
        self_02 = (RecordManager *)**(undefined8 **)(lVar10 + 0xb8);
        pvVar9 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
        if ((pvVar9 == (void *)0x0) ||
           (iVar6 = PlayerManager_GetActivePlayer_12ccc8c(pvVar9,(void *)0x0),
           self_02 == (RecordManager *)0x0)) goto code_r0x013eb598;
        iVar6 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0(self_02,iVar6,(void *)0x0);
        puVar2 = PTR_DAT_029ba708;
        if (iVar6 <= iVar13) {
          if (*(int *)(*(long *)PTR_DAT_029ba708 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          uVar8 = NativeHelper_01fde6f8(0);
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            NativeHelper_011df1bc(lVar10);
            lVar10 = *(long *)puVar1;
          }
          if (((**(long **)(lVar10 + 0xb8) == 0) ||
              (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x30), lVar10 == 0)) ||
             (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto code_r0x013eb598;
          uVar11 = NativeHelper_01fe0210(uVar8,*(undefined8 *)(lVar10 + 0x18),0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            uVar8 = NativeHelper_01fde6f8(0);
            lVar10 = *(long *)puVar1;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              NativeHelper_011df1bc(lVar10);
              lVar10 = *(long *)puVar1;
            }
            if (((**(long **)(lVar10 + 0xb8) == 0) ||
                (lVar10 = *(long *)(**(long **)(lVar10 + 0xb8) + 0x30), lVar10 == 0)) ||
               (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto code_r0x013eb598;
            uVar11 = NativeHelper_01fe0138(uVar8,*(undefined8 *)(lVar10 + 0x20),0);
            if ((uVar11 & 1) != 0) {
              TweenPosition_Begin_1209e6c(self_01->GCButton,0.25,self->_gcb_5__10,(void *)0x0);
            }
          }
        }
      }
      if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) == (AudioManager *)0x0
         ) goto code_r0x013eb598;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x1f,
                 1.0,(void *)0x0);
      pvVar9 = (void *)NativeHelper_012ec778(0x3e800000,0);
      pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self_01,pvVar9,(void *)0x0);
      self->__2__current = pvVar9;
      iVar13 = 4;
      break;
    case 4:
      self->__1__state = -1;
      if (self_01 == (EndGameUI *)0x0) goto code_r0x013eb598;
      TweenPosition_Begin_1209e6c(self_01->StoreButton,0.25,self->_sb_5__6,(void *)0x0);
      if (self_01->ShowStatsButton != false) {
        if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pvVar9 = GameController_CheckFeatureState_128798c(*(void **)PTR_DAT_029bdb88,(void *)0x0);
        if ((int)pvVar9 != 0) {
          uVar11 = NativeHelper_01e9be28(self_01->StatsSpriteName,0);
          if ((uVar11 & 1) == 0) {
            if (self_01->StatsButton == (void *)0x0) goto code_r0x013eb598;
            self_00 = (UISprite *)
                      NativeHelper_015070d0(self_01->StatsButton,*(undefined8 *)PTR_DAT_029c05f8);
            if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
            }
            bVar5 = UnityEngine_object_op_Inequality_250c8e4(self_00,(void *)0x0,(void *)0x0);
            if (bVar5) {
              if (self_00 == (UISprite *)0x0) goto code_r0x013eb598;
              UISprite_set_spriteName_12a2d48(self_00,self_01->StatsSpriteName,(void *)0x0);
            }
          }
          TweenPosition_Begin_1209e6c(self_01->StatsButton,0.25,self->_gb_5__8,(void *)0x0);
        }
      }
      if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) == (AudioManager *)0x0
         ) goto code_r0x013eb598;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x1f,
                 1.0,(void *)0x0);
      pvVar9 = (void *)NativeHelper_012ec778(0x3e800000,0);
      pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self_01,pvVar9,(void *)0x0);
      self->__2__current = pvVar9;
      iVar13 = 5;
      break;
    case 5:
      self->__1__state = -1;
      if ((self_01 == (EndGameUI *)0x0) || (*(long *)&self_01->field_0x30 == 0))
      goto code_r0x013eb598;
      pvVar9 = (void *)NativeHelper_0260e1e4(*(long *)&self_01->field_0x30,0);
      TweenPosition_Begin_1209e6c(pvVar9,0.25,self->_na_5__5,(void *)0x0);
      if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) == (AudioManager *)0x0
         ) goto code_r0x013eb598;
      AudioManager_PlayFX_12bb190
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x1f,
                 1.0,(void *)0x0);
      if ((self_01->DoubleCoinsButton == (UISprite *)0x0) ||
         (lVar10 = NativeHelper_0260e1e4(self_01->DoubleCoinsButton,0), lVar10 == 0))
      goto code_r0x013eb598;
      uVar11 = NativeHelper_02610cd4(lVar10,0);
      if ((uVar11 & 1) != 0) {
        pvVar9 = (void *)NativeHelper_013e8190(self_01);
        UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self_01,pvVar9,(void *)0x0);
      }
      goto LAB_013eb03c;
    }
    self->__1__state = iVar13;
    bVar5 = true;
  }
  else {
LAB_013eb03c:
    bVar5 = false;
  }
  return bVar5;
}

