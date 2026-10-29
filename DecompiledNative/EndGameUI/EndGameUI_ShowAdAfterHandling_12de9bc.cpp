// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowAdAfterHandling() { }
// Ghidra address: 013e29bc; ELF VA: 0x12e29bc; file offset: 0x12de9bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_ShowAdAfterHandling_12de9bc(EndGameUI *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Imangi_Ad_AdManager *self_00;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Imangi_Privacy_ImangiPrivacyManager *self_01;
  void *inError;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  byte abStack_34 [4];
  
  if ((bRam0000000002b94fc4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bcb50);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bcda0);
    NativeHelper_011df0b4(PTR_DAT_029bcdb0);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdc30);
    NativeHelper_011df0b4(PTR_DAT_029bdc28);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029c05d0);
    NativeHelper_011df0b4(PTR_DAT_029b88d0);
    NativeHelper_011df0b4(PTR_DAT_029bf1f8);
    NativeHelper_011df0b4(PTR_DAT_029c05d8);
    NativeHelper_011df0b4(PTR_DAT_029c05e0);
    NativeHelper_011df0b4(PTR_DAT_029bf200);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fc4 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029b7f98;
  abStack_34[0] = 0;
  if (self->_ShowingInterstitial != false) {
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    self_00 = GameController_GetAdManager_128d9a0((void *)0x0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar2);
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(self_00,(void *)0x0,(void *)0x0);
    if (bVar4) {
      pvVar5 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_00);
      if (self_00 == (Imangi_Ad_AdManager *)0x0) {
LAB_013e2ee8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      (**(code **)(*(long *)self_00 + 0x2a8))
                (self_00,1,pvVar5,5,*(undefined8 *)(*(long *)self_00 + 0x2b0));
      pvVar5 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
      uVar6 = (**(code **)(*(long *)self_00 + 0x2d8))
                        (self_00,1,pvVar5,*(undefined8 *)(*(long *)self_00 + 0x2e0));
      puVar2 = PTR_DAT_029c05c8;
      if ((uVar6 & 1) != 0) {
        pvVar5 = *(void **)PTR_DAT_029c05c8;
        TRAnalyticsHelper_LogInterstitialAd_12b922c
                  ((void *)(ulong)*(uint *)&self_00->ActiveService,*(void **)PTR_DAT_029bf200,pvVar5
                   ,*(void **)PTR_DAT_029b8618,(void *)0x0);
        if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) !=
            (AudioManager *)0x0) {
          AudioManager_StopMusic_12bb174
                    ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x0
                    );
          EndGameUI_HookAdEvents_12e292c(self,self_00,pvVar5);
          pvVar5 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_02);
          (**(code **)(*(long *)self_00 + 0x2f8))
                    (self_00,1,pvVar5,*(undefined8 *)puVar2,
                     *(undefined8 *)(*(long *)self_00 + 0x300));
          UIInputBlocking_DisableInput_1300d04((void *)0x0);
          return;
        }
        goto LAB_013e2ee8;
      }
      self->WatchedInterstitialAd = false;
      uVar1 = *(uint *)&self_00->ActiveService;
      pvVar5 = Imangi_Ad_AdManager_GetLastAdLoadError_127d544(self_00,(void *)0x1,(void *)0x0);
      inError = TRAnalyticsHelper_SanitizeEventAttributeLength_12b997c(pvVar5,(void *)0x0);
      pvVar5 = *(void **)PTR_DAT_029c05c8;
      TRAnalyticsHelper_LogInterstitialAd_12b922c
                ((void *)(ulong)uVar1,*(void **)PTR_DAT_029bf1f8,pvVar5,inError,(void *)0x0);
    }
    else {
      plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029bcda0,4);
      puVar2 = PTR_DAT_029bcdb0;
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bcdb0);
      NativeHelper_0142d90c(lVar8,*(undefined8 *)PTR_DAT_029c05d8,*(undefined8 *)PTR_DAT_029b88d0,0)
      ;
      if (plVar7 == (long *)0x0) goto LAB_013e2ee8;
      if ((lVar8 != 0) &&
         (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_013e2eec:
        uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar10,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_013e2ee4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      plVar7[4] = lVar8;
      if (*(int *)(*(long *)PTR_DAT_029ba5a8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      abStack_34[0] = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_029b8308 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)PTR_DAT_029b8308);
      }
      uVar10 = NativeHelper_01f83748(abStack_34,0);
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
      NativeHelper_0142d90c(lVar8,*(undefined8 *)PTR_DAT_029c05e0,uVar10,0);
      if ((lVar8 != 0) &&
         (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_013e2eec;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_013e2ee4;
      plVar7[5] = lVar8;
      if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      self_01 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
      if (self_01 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto LAB_013e2ee8;
      bVar4 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(self_01,(void *)0x0);
      abStack_34[0] = ~bVar4 & 1;
      uVar10 = NativeHelper_01f83748(abStack_34,0);
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
      NativeHelper_0142d90c(lVar8,*(undefined8 *)PTR_DAT_029bdc28,uVar10,0);
      if ((lVar8 != 0) &&
         (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_013e2eec;
      if (*(uint *)(plVar7 + 3) < 3) goto LAB_013e2ee4;
      plVar7[6] = lVar8;
      puVar3 = PTR_DAT_029bbd80;
      lVar8 = *(long *)PTR_DAT_029bbd80;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar8 = *(long *)puVar3;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28);
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
      NativeHelper_0142d90c(lVar8,*(undefined8 *)PTR_DAT_029bdc30,uVar10,0);
      if ((lVar8 != 0) &&
         (lVar9 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_013e2eec;
      if (*(uint *)(plVar7 + 3) < 4) goto LAB_013e2ee4;
      plVar7[7] = lVar8;
      if (*(int *)(*(long *)PTR_DAT_029bcb50 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar5 = (void *)0x0;
      NativeHelper_0142c468(*(undefined8 *)PTR_DAT_029c05d0,plVar7);
    }
    UIInputBlocking_EnableInput_1300bfc((void *)0x0);
    self->_ShowingInterstitial = false;
    EndGameUI_SetButtonState_12e392c(self,true,pvVar5);
  }
  return;
}

