// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void HideInGameBannerAdsIfDisabled() { }
// Ghidra address: 013eba78; ELF VA: 0x12eba78; file offset: 0x12e7a78
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_HideInGameBannerAdsIfDisabled_12e7a78(GameGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  Imangi_Ad_AdManager *pIVar6;
  ulong uVar7;
  long lVar8;
  RecordManager_cPlayerRecord *pRVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  RecordManager *self_00;
  undefined1 auVar10 [16];
  
  puVar1 = PTR_DAT_029bd310;
  if ((bRam0000000002b94fe1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd310);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029c0600);
    bRam0000000002b94fe1 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029c0600;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar4 = AdManager_ConfigData_BannerAdPlacementEnabled_12ac2b0(*(void **)puVar2,(void *)0x0);
  puVar3 = PTR_DAT_029bdbe8;
  puVar2 = PTR_DAT_029b9770;
  if (!bVar4) {
    if ((bRam0000000002b94f9d & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b9770);
      NativeHelper_011df0b4(PTR_DAT_029b7f98);
      NativeHelper_011df0b4(PTR_DAT_029bd9c0);
      bRam0000000002b94f9d = 1;
    }
    puVar1 = PTR_DAT_029b7f98;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pIVar6,(void *)0x0,(void *)0x0);
    if (!bVar4) {
      return;
    }
    if (pIVar6 == (Imangi_Ad_AdManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
                    /* WARNING: Could not recover jumptable at 0x013e3be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pIVar6 + 0x2c8))
              (pIVar6,2,*(undefined8 *)PTR_DAT_029bd9c0,*(undefined8 *)(*(long *)pIVar6 + 0x2d0));
    return;
  }
  lVar8 = *(long *)PTR_DAT_029bdbe8;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar8 = *(long *)puVar3;
  }
  self_00 = (RecordManager *)**(undefined8 **)(lVar8 + 0xb8);
  if ((self_00 != (RecordManager *)0x0) && (self_00->PlayerManager != (void *)0x0)) {
    iVar5 = PlayerManager_GetActivePlayer_12ccc8c(self_00->PlayerManager,(void *)0x0);
    pRVar9 = RecordManager_FindOrCreatePlayerRecord_12b2aac(self_00,iVar5,(void *)0x0);
    auVar10 = (**(code **)(*(long *)self + 0x1e8))(self,*(undefined8 *)(*(long *)self + 0x1f0));
    runtimeMethod_00 = auVar10._8_8_;
    if ((auVar10._0_8_ & 1) == 0) {
      return;
    }
    if (pRVar9 != (RecordManager_cPlayerRecord *)0x0) {
      lVar8 = *(long *)puVar1;
      iVar5 = pRVar9->lifetimePlays;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar8 = *(long *)puVar1;
        runtimeMethod_00 = extraout_x1_00;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        if (iVar5 <= *(int *)(lVar8 + 0x2c)) {
          return;
        }
        BasePanel_HookBannerAdEvents_12df854((BasePanel *)self,runtimeMethod_00);
        puVar1 = PTR_DAT_029bd310;
        if ((bRam0000000002b94f9c & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bd310);
          NativeHelper_011df0b4(PTR_DAT_029b9770);
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          NativeHelper_011df0b4(PTR_DAT_029bd9c0);
          bRam0000000002b94f9c = 1;
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar8 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_029b7f98;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) {
code_r0x013e3b20:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if (*(char *)(lVar8 + 0x28) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar1);
          }
          bVar4 = UnityEngine_object_op_Inequality_250c8e4(pIVar6,(void *)0x0,(void *)0x0);
          puVar1 = PTR_DAT_029bd9c0;
          if (bVar4) {
            if (pIVar6 != (Imangi_Ad_AdManager *)0x0) {
              uVar7 = (**(code **)(*(long *)pIVar6 + 0x2d8))
                                (pIVar6,2,*(undefined8 *)PTR_DAT_029bd9c0,
                                 *(undefined8 *)(*(long *)pIVar6 + 0x2e0));
              if ((uVar7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x013e3b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)pIVar6 + 0x2a8))
                          (pIVar6,2,*(undefined8 *)puVar1,1,*(undefined8 *)(*(long *)pIVar6 + 0x2b0)
                          );
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x013e3ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)pIVar6 + 0x2f8))
                        (pIVar6,2,*(undefined8 *)puVar1,*(undefined8 *)&self->field_0x48,
                         *(undefined8 *)(*(long *)pIVar6 + 0x300));
              return;
            }
            goto code_r0x013e3b20;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

