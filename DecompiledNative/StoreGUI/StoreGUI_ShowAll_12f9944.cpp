// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void ShowAll(bool inShowBannerAds = true) { }
// Ghidra address: 013fd944; ELF VA: 0x12fd944; file offset: 0x12f9944
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreGUI_ShowAll_12f9944(StoreGUI *self,bool inShowBannerAds,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Imangi_Ad_AdManager *inAdMngr;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_01;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  
  if ((bRam0000000002b95060 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0650);
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029c01a8);
    bRam0000000002b95060 = 1;
  }
  BasePanel_ShowAll_12df6a4((BasePanel *)self,inShowBannerAds,(void *)0x0);
  StoreGUI_ReconfigureStoreItems_12f9b84(self,runtimeMethod_00);
  puVar1 = PTR_DAT_029b7f98;
  pvVar7 = self->Disabled;
  if (pvVar7 != (void *)0x0) {
    runtimeMethod_01 = extraout_x1;
    if (0 < (int)*(ulong *)((long)pvVar7 + 0x18)) {
      uVar8 = 0;
      uVar5 = *(ulong *)((long)pvVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar8) goto LAB_013fdb7c;
        uVar6 = *(undefined8 *)((long)pvVar7 + uVar8 * 8 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        NativeHelper_02614ce0(uVar6,0);
        uVar5 = (ulong)*(uint *)((long)pvVar7 + 0x18);
        uVar8 = uVar8 + 1;
        runtimeMethod_01 = extraout_x1_00;
      } while ((long)uVar8 < (long)(int)*(uint *)((long)pvVar7 + 0x18));
    }
    puVar3 = PTR_DAT_029c01a8;
    puVar2 = PTR_DAT_029ba770;
    StoreGUI_AdjustCoins_12f9bfc(self,runtimeMethod_01);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = FeatureManager_IsFeatureEnabled_12d634c(*(void **)puVar3,(void *)0x0);
    if (bVar4) {
      if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      inAdMngr = GameController_GetAdManager_128d9a0((void *)0x0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      pvVar7 = (void *)0x0;
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(inAdMngr,(void *)0x0,(void *)0x0);
      if (bVar4) {
        StoreGUI_HookVideoAdEvents_12f9cd0(self,inAdMngr,pvVar7);
        if (inAdMngr == (Imangi_Ad_AdManager *)0x0) goto LAB_013fdb80;
        (**(code **)(*(long *)inAdMngr + 0x2a8))
                  (inAdMngr,0,*(undefined8 *)PTR_DAT_029b9680,5,
                   *(undefined8 *)(*(long *)inAdMngr + 0x2b0));
      }
    }
    if ((CharacterSelectGUI *)**(undefined8 **)(*(long *)PTR_DAT_029c0650 + 0xb8) !=
        (CharacterSelectGUI *)0x0) {
      bVar4 = CharacterSelectGUI_IsNewCharacterSelectEnabled_12e141c
                        ((CharacterSelectGUI *)**(undefined8 **)(*(long *)PTR_DAT_029c0650 + 0xb8),
                         (void *)0x0);
      if (bVar4) {
        pvVar7 = self->CharacterObjects;
        if (pvVar7 == (void *)0x0) goto LAB_013fdb80;
        if (0 < (int)*(ulong *)((long)pvVar7 + 0x18)) {
          uVar8 = 0;
          uVar5 = *(ulong *)((long)pvVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar8) {
LAB_013fdb7c:
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2e4();
            }
            uVar6 = *(undefined8 *)((long)pvVar7 + uVar8 * 8 + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            NativeHelper_02614ce0(uVar6,0);
            uVar5 = (ulong)*(uint *)((long)pvVar7 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)*(uint *)((long)pvVar7 + 0x18));
        }
      }
      return;
    }
  }
LAB_013fdb80:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

