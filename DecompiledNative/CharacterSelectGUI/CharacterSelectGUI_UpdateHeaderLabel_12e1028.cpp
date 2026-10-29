// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateHeaderLabel() { }
// Ghidra address: 013e5028; ELF VA: 0x12e5028; file offset: 0x12e1028
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterSelectGUI_UpdateHeaderLabel_12e1028(CharacterSelectGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 uStack_68;
  int iStack_64;
  
  if ((bRam0000000002b94fad & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029c0680);
    NativeHelper_011df0b4(PTR_DAT_029c0688);
    bRam0000000002b94fad = 1;
  }
  if (self->PlayerManager != (void *)0x0) {
    iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    if (self->RecordManager != (RecordManager *)0x0) {
      iVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                        (self->RecordManager,iVar2,(void *)0x10,(void *)0x0);
      if (self->RecordManager != (RecordManager *)0x0) {
        iVar4 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                          (self->RecordManager,iVar2,(void *)0x11,(void *)0x0);
        if (self->RecordManager != (RecordManager *)0x0) {
          iVar5 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                            (self->RecordManager,iVar2,(void *)0x12,(void *)0x0);
          if (self->RecordManager != (RecordManager *)0x0) {
            iVar6 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                              (self->RecordManager,iVar2,(void *)0x13,(void *)0x0);
            if (self->RecordManager != (RecordManager *)0x0) {
              iVar7 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                (self->RecordManager,iVar2,(void *)0x14,(void *)0x0);
              if (self->RecordManager != (RecordManager *)0x0) {
                iVar8 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                  (self->RecordManager,iVar2,(void *)0x16,(void *)0x0);
                if (self->RecordManager != (RecordManager *)0x0) {
                  iVar9 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                    (self->RecordManager,iVar2,(void *)0x1c,(void *)0x0);
                  if (self->RecordManager != (RecordManager *)0x0) {
                    iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                       (self->RecordManager,iVar2,(void *)0x1d,(void *)0x0);
                    if (self->RecordManager != (RecordManager *)0x0) {
                      iVar11 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                         (self->RecordManager,iVar2,(void *)0x1e,(void *)0x0);
                      if (self->RecordManager != (RecordManager *)0x0) {
                        iVar12 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                           (self->RecordManager,iVar2,(void *)0x1f,(void *)0x0);
                        if (self->RecordManager != (RecordManager *)0x0) {
                          iVar13 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                             (self->RecordManager,iVar2,(void *)0x20,(void *)0x0);
                          if (self->RecordManager != (RecordManager *)0x0) {
                            iVar14 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                               (self->RecordManager,iVar2,(void *)0x21,(void *)0x0);
                            if (self->RecordManager != (RecordManager *)0x0) {
                              iVar15 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                 (self->RecordManager,iVar2,(void *)0x22,(void *)0x0
                                                 );
                              if (self->RecordManager != (RecordManager *)0x0) {
                                iVar16 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                   (self->RecordManager,iVar2,(void *)0x23,
                                                    (void *)0x0);
                                if (self->RecordManager != (RecordManager *)0x0) {
                                  iVar20 = 1;
                                  if (0 < iVar3) {
                                    iVar20 = 2;
                                  }
                                  if (0 < iVar4) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar5) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar6) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar7) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar8) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar9) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar10) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar11) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar12) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar13) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar14) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar15) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  if (0 < iVar16) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  iVar2 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                    (self->RecordManager,iVar2,(void *)0x24,
                                                     (void *)0x0);
                                  if (0 < iVar2) {
                                    iVar20 = iVar20 + 1;
                                  }
                                  pvVar17 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0688,false,
                                                                (void *)0x0);
                                  puVar1 = PTR_DAT_029b8bc0;
                                  iStack_64 = iVar20;
                                  uVar18 = NativeHelper_011df1c4
                                                     (*(undefined8 *)PTR_DAT_029b8bc0,&iStack_64);
                                  uStack_68 = 0x10;
                                  uVar19 = NativeHelper_011df1c4(*(undefined8 *)puVar1,&uStack_68);
                                  pvVar17 = (void *)NativeHelper_01e9c29c
                                                              (*(undefined8 *)PTR_DAT_029c0680,
                                                               pvVar17,uVar18,uVar19,0);
                                  if (self->HeaderLabel != (UILabel *)0x0) {
                                    UILabel_set_text_129fea0(self->HeaderLabel,pvVar17,(void *)0x0);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

