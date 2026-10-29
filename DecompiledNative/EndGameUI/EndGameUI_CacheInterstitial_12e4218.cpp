// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CacheInterstitial(string inReason) { }
// Ghidra address: 013e8218; ELF VA: 0x12e8218; file offset: 0x12e4218
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_CacheInterstitial_12e4218(EndGameUI *self,void *inReason,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  long lVar3;
  void *pvVar4;
  Imangi_Ad_AdManager *x;
  ulong uVar5;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  RecordManager *self_00;
  
  puVar1 = PTR_DAT_029bdbe8;
  if ((bRam0000000002b94fc7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029bf1f0);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fc7 = 1;
    inReason = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,inReason);
    lVar3 = *(long *)puVar1;
  }
  self_00 = (RecordManager *)**(undefined8 **)(lVar3 + 0xb8);
  pvVar4 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if (pvVar4 != (void *)0x0) {
    inPlayerID = PlayerManager_GetActivePlayer_12ccc8c(pvVar4,(void *)0x0);
    if (self_00 != (RecordManager *)0x0) {
      bVar2 = RecordManager_GetNoAds_12b479c(self_00,inPlayerID,(void *)0x0);
      if (!bVar2) {
        if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        x = GameController_GetAdManager_128d9a0((void *)0x0);
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
        }
        bVar2 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
        if ((!bVar2) && (bVar2 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0), bVar2)) {
          pvVar4 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_00);
          if (x == (Imangi_Ad_AdManager *)0x0) goto LAB_013e83c8;
          uVar5 = (**(code **)(*(long *)x + 0x2d8))(x,1,pvVar4,*(undefined8 *)(*(long *)x + 0x2e0));
          if ((uVar5 & 1) == 0) {
            TRAnalyticsHelper_LogInterstitialAd_12b922c
                      ((void *)(ulong)*(uint *)&x->ActiveService,*(void **)PTR_DAT_029bf1f0,
                       *(void **)PTR_DAT_029c05c8,*(void **)PTR_DAT_029b8618,(void *)0x0);
            pvVar4 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
                    /* WARNING: Could not recover jumptable at 0x013e83c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)x + 0x2a8))(x,1,pvVar4,5,*(undefined8 *)(*(long *)x + 0x2b0));
            return;
          }
        }
      }
      return;
    }
  }
LAB_013e83c8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

