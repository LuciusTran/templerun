// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override void ShowAll(bool inShowBannerAds = true) { }
// Ghidra address: 013e36a4; ELF VA: 0x12e36a4; file offset: 0x12df6a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BasePanel_ShowAll_12df6a4(BasePanel *self,bool inShowBannerAds,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  void *inScreenClass;
  long lVar5;
  RecordManager_cPlayerRecord *pRVar6;
  void *extraout_x1;
  void *runtimeMethod_00;
  long lVar7;
  RecordManager *pRVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000002b94f98 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    bRam0000000002b94f98 = 1;
  }
  puVar1 = PTR_DAT_029bdbe8;
  pvVar4 = (void *)NativeHelper_0260e1e4(self,0);
  Imangi_Utilities_GameObjectHelper_SetActiveRecursively_12318b8(pvVar4,true,(void *)0x0);
  if (self->_LogSceneAnalytics != false) {
    pvVar4 = UnityEngine_object_get_name_25101a4(self,(void *)0x0);
    inScreenClass = UnityEngine_object_get_name_25101a4(self,(void *)0x0);
    Imangi_Analytics_Analytics_SetCurrentScreen_126b2f0(pvVar4,inScreenClass,(void *)0x0);
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar5 = *(long *)puVar1;
  }
  pRVar8 = (RecordManager *)**(undefined8 **)(lVar5 + 0xb8);
  if ((pRVar8 == (RecordManager *)0x0) || (pRVar8->PlayerManager == (void *)0x0)) goto LAB_013e3850;
  iVar3 = PlayerManager_GetActivePlayer_12ccc8c(pRVar8->PlayerManager,(void *)0x0);
  pRVar6 = RecordManager_FindOrCreatePlayerRecord_12b2aac(pRVar8,iVar3,(void *)0x0);
  auVar9 = (**(code **)(*(long *)self + 0x1e8))(self,*(undefined8 *)(*(long *)self + 0x1f0));
  puVar1 = PTR_DAT_029bd310;
  pvVar4 = auVar9._8_8_;
  if (((auVar9._0_8_ & 1) == 0) || (!inShowBannerAds)) {
LAB_013e37f0:
    BasePanel_HideBannerAd_12dfb24(auVar9._0_8_,auVar9._8_8_);
  }
  else {
    if (pRVar6 == (RecordManager_cPlayerRecord *)0x0) goto LAB_013e3850;
    iVar3 = pRVar6->lifetimePlays;
    lVar5 = *(long *)PTR_DAT_029bd310;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
      pvVar4 = extraout_x1;
    }
    auVar9._8_8_ = pvVar4;
    auVar9._0_8_ = lVar5;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_013e3850;
    if (iVar3 <= *(int *)(lVar5 + 0x2c)) goto LAB_013e37f0;
    BasePanel_HookBannerAdEvents_12df854(self,pvVar4);
    BasePanel_ShowBannerAd_12df9c4(self,runtimeMethod_00);
  }
  pvVar4 = self->NoAds;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar4,(void *)0x0,(void *)0x0);
  puVar1 = PTR_DAT_029bdbe8;
  if (!bVar2) {
    return;
  }
  pvVar4 = self->NoAds;
  if (pvVar4 != (void *)0x0) {
    if ((bRam0000000002b95097 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
      bRam0000000002b95097 = 1;
    }
    lVar5 = NativeHelper_0260e1e4(pvVar4,0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar7);
      lVar7 = *(long *)puVar1;
    }
    pRVar8 = (RecordManager *)**(undefined8 **)(lVar7 + 0xb8);
    pvVar4 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
    if (pvVar4 != (void *)0x0) {
      iVar3 = PlayerManager_GetActivePlayer_12ccc8c(pvVar4,(void *)0x0);
      if (pRVar8 != (RecordManager *)0x0) {
        bVar2 = RecordManager_GetNoAds_12b479c(pRVar8,iVar3,(void *)0x0);
        if (lVar5 != 0) {
          if (pcRam0000000002b9cda0 == (code *)0x0) {
            pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
          }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000002b9cda0)(lVar5,~bVar2 & 1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_013e3850:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

