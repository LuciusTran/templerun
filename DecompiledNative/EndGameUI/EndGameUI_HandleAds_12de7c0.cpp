// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void HandleAds() { }
// Ghidra address: 013e27c0; ELF VA: 0x12e27c0; file offset: 0x12de7c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_HandleAds_12de7c0(EndGameUI *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  Imangi_Ad_AdManager *x;
  RecordManager_cPlayerRecord *pRVar6;
  void *pvVar7;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar8;
  RecordManager *pRVar9;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94fc6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    bRam0000000002b94fc6 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_029bd310;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  x = GameController_GetAdManager_128d9a0((void *)0x0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar8);
    lVar8 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_029bdbe8;
  if (**(long **)(lVar8 + 0xb8) != 0) {
    iVar1 = *(int *)(**(long **)(lVar8 + 0xb8) + 0x2c);
    lVar8 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar3;
    }
    pRVar9 = (RecordManager *)**(undefined8 **)(lVar8 + 0xb8);
    if ((pRVar9 != (RecordManager *)0x0) && (pRVar9->PlayerManager != (void *)0x0)) {
      iVar5 = PlayerManager_GetActivePlayer_12ccc8c(pRVar9->PlayerManager,(void *)0x0);
      pRVar6 = RecordManager_FindOrCreatePlayerRecord_12b2aac(pRVar9,iVar5,(void *)0x0);
      pRVar9 = (RecordManager *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      pvVar7 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if ((pvVar7 != (void *)0x0) &&
         (iVar5 = PlayerManager_GetActivePlayer_12ccc8c(pvVar7,(void *)0x0),
         pRVar9 != (RecordManager *)0x0)) {
        bVar4 = RecordManager_GetNoAds_12b479c(pRVar9,iVar5,(void *)0x0);
        if (!bVar4) {
          if (pRVar6 == (RecordManager_cPlayerRecord *)0x0) goto LAB_013e29b8;
          if (iVar1 <= pRVar6->lifetimePlays) {
            bVar4 = EndGameUI_InterstitialAdCooldownCompleted_12e3ed8(self,runtimeMethod_00);
            if (bVar4) {
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                lVar8 = *(long *)puVar2;
              }
              if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_013e29b8;
              if (*(char *)(**(long **)(lVar8 + 0xb8) + 0x20b) == '\0') {
                self->_ShowingInterstitial = true;
                return;
              }
            }
            if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
            if (bVar4) {
              pvVar7 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
              if (x != (Imangi_Ad_AdManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013e2998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)x + 0x2a8))(x,1,pvVar7,5,*(undefined8 *)(*(long *)x + 0x2b0));
                return;
              }
              goto LAB_013e29b8;
            }
          }
        }
        return;
      }
    }
  }
LAB_013e29b8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

