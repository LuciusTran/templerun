// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateBar() { }
// Ghidra address: 01400de8; ELF VA: 0x1300de8; file offset: 0x12fcde8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_UpdateBar_12fcde8(StoreItem *self,void *runtimeMethod)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  RecordManager *self_00;
  undefined8 uVar7;
  undefined8 uVar8;
  UISprite *pUVar9;
  
  if ((bRam0000000002b95078 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c13a0);
    NativeHelper_011df0b4(PTR_DAT_029c13a8);
    NativeHelper_011df0b4(PTR_DAT_029c13b0);
    NativeHelper_011df0b4(PTR_DAT_029c13b8);
    NativeHelper_011df0b4(PTR_DAT_029c13c0);
    NativeHelper_011df0b4(PTR_DAT_029c13c8);
    NativeHelper_011df0b4(PTR_DAT_029c13d0);
    NativeHelper_011df0b4(PTR_DAT_029b8de0);
    NativeHelper_011df0b4(PTR_DAT_029c13d8);
    NativeHelper_011df0b4(PTR_DAT_029c13e0);
    bRam0000000002b95078 = 1;
  }
  if (*(int *)&self->field_0x24 != 1) {
    return;
  }
  if (self->PlayerManager != (void *)0x0) {
    self_00 = self->RecordManager;
    iVar4 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (self_00 != (RecordManager *)0x0) {
      iVar4 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                        (self_00,iVar4,(void *)(ulong)*(uint *)&self->field_0x20,(void *)0x0);
      if (self->Bar1 != (UISprite *)0x0) {
        UnityEngine_Behaviour_set_enabled_250972c(self->Bar1,0 < iVar4,(void *)0x0);
        if (self->Bar2 != (UISprite *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c(self->Bar2,1 < iVar4,(void *)0x0);
          if (self->Bar3 != (UISprite *)0x0) {
            UnityEngine_Behaviour_set_enabled_250972c(self->Bar3,2 < iVar4,(void *)0x0);
            if (self->Bar4 != (UISprite *)0x0) {
              UnityEngine_Behaviour_set_enabled_250972c(self->Bar4,3 < iVar4,(void *)0x0);
              if (self->Bar5 != (UISprite *)0x0) {
                UnityEngine_Behaviour_set_enabled_250972c(self->Bar5,4 < iVar4,(void *)0x0);
                puVar3 = PTR_DAT_029c13c8;
                pUVar9 = self->Bar1;
                puVar1 = (undefined8 *)PTR_DAT_029c13d8;
                puVar2 = (undefined8 *)PTR_DAT_029c13c0;
                if (iVar4 < 7) {
                  puVar1 = (undefined8 *)PTR_DAT_029c13d0;
                  puVar2 = (undefined8 *)PTR_DAT_029c13a8;
                }
                uVar8 = *puVar2;
                uVar7 = *puVar1;
                pvVar6 = (void *)NativeHelper_01e9be48
                                           (*(undefined8 *)PTR_DAT_029c13c8,uVar8,
                                            *(undefined8 *)PTR_DAT_029b8de0,uVar7,0);
                if (pUVar9 != (UISprite *)0x0) {
                  UISprite_set_spriteName_12a2d48(pUVar9,pvVar6,(void *)0x0);
                  pUVar9 = self->Bar2;
                  pvVar6 = (void *)NativeHelper_01e9be48
                                             (*(undefined8 *)puVar3,uVar8,
                                              *(undefined8 *)PTR_DAT_029c13b0,uVar7,0);
                  if (pUVar9 != (UISprite *)0x0) {
                    UISprite_set_spriteName_12a2d48(pUVar9,pvVar6,(void *)0x0);
                    pUVar9 = self->Bar3;
                    pvVar6 = (void *)NativeHelper_01e9be48
                                               (*(undefined8 *)puVar3,uVar8,
                                                *(undefined8 *)PTR_DAT_029c13a0,uVar7,0);
                    if (pUVar9 != (UISprite *)0x0) {
                      UISprite_set_spriteName_12a2d48(pUVar9,pvVar6,(void *)0x0);
                      pUVar9 = self->Bar4;
                      pvVar6 = (void *)NativeHelper_01e9be48
                                                 (*(undefined8 *)puVar3,uVar8,
                                                  *(undefined8 *)PTR_DAT_029c13b8,uVar7,0);
                      if (pUVar9 != (UISprite *)0x0) {
                        UISprite_set_spriteName_12a2d48(pUVar9,pvVar6,(void *)0x0);
                        pUVar9 = self->Bar5;
                        pvVar6 = (void *)NativeHelper_01e9be48
                                                   (*(undefined8 *)puVar3,uVar8,
                                                    *(undefined8 *)PTR_DAT_029c13e0,uVar7,0);
                        if (pUVar9 != (UISprite *)0x0) {
                          if ((bRam0000000002b94d93 & 1) == 0) {
                            NativeHelper_011df0b4(PTR_DAT_029b8618,pvVar6,0);
                            bRam0000000002b94d93 = 1;
                          }
                          uVar5 = NativeHelper_01e9be28(pvVar6,0);
                          if ((uVar5 & 1) == 0) {
                            uVar5 = NativeHelper_01e9b7a0(pUVar9->mSpriteName,pvVar6,0);
                            if ((uVar5 & 1) != 0) {
                              pUVar9->mSpriteName = pvVar6;
                              pUVar9->mSprite = (UIAtlas_Sprite *)0x0;
                              pUVar9->field_0x58 = 1;
                            }
                          }
                          else {
                            uVar5 = NativeHelper_01e9be28(pUVar9->mSpriteName,0);
                            if ((uVar5 & 1) == 0) {
                              pvVar6 = *(void **)PTR_DAT_029b8618;
                              pUVar9->field_0x58 = 1;
                              pUVar9->mSpriteName = pvVar6;
                              pUVar9->mSprite = (UIAtlas_Sprite *)0x0;
                            }
                          }
                          return;
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

