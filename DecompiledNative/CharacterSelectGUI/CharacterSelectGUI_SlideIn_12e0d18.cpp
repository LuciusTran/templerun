// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void SlideIn(BasePanel returnTo) { }
// Ghidra address: 013e4d18; ELF VA: 0x12e4d18; file offset: 0x12e0d18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterSelectGUI_SlideIn_12e0d18
               (CharacterSelectGUI *self,BasePanel *returnTo,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *pvVar23;
  UIPanel *self_00;
  UIStack *self_01;
  undefined8 uVar24;
  undefined8 uVar25;
  int iVar26;
  ulong uVar27;
  void *pvVar28;
  float fVar29;
  float fVar30;
  Recovered_Vector3 RVar31;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  Recovered_Vector4 value_01;
  undefined4 uStack_68;
  int iStack_64;
  
  if ((bRam0000000002b94faa & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0670);
    NativeHelper_011df0b4(PTR_DAT_029bafe8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b94faa = 1;
  }
  *(BasePanel **)&self->field_0x38 = returnTo;
  (**(code **)(*(long *)self + 0x188))(self,1,*(undefined8 *)(*(long *)self + 400));
  if (self->_FirstSlide != false) {
    if (self->Header == (void *)0x0) goto LAB_013e4fc0;
    fVar29 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
    fVar30 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
    pvVar23 = (void *)NativeHelper_02610b98(self->Header,0);
    if (pvVar23 == (void *)0x0) goto LAB_013e4fc0;
    RVar31 = UnityEngine_Transform_get_localPosition_2515e38(pvVar23,(void *)0x0);
    if ((self->Header == (void *)0x0) ||
       (pvVar23 = (void *)NativeHelper_02610b98(self->Header,0), pvVar23 == (void *)0x0))
    goto LAB_013e4fc0;
    fVar29 = fVar29 - fVar30;
    RVar31.component1 = fVar29 + RVar31.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar23,RVar31,(void *)0x0);
    if ((self->ScrollViewPanel == (UIPanel *)0x0) ||
       (pvVar23 = (void *)NativeHelper_0260e1a8(self->ScrollViewPanel,0), pvVar23 == (void *)0x0))
    goto LAB_013e4fc0;
    RVar31 = UnityEngine_Transform_get_localPosition_2515e38(pvVar23,(void *)0x0);
    value.component2 = RVar31.component2;
    value.component0 = RVar31.component0;
    if ((self->ScrollViewPanel == (UIPanel *)0x0) ||
       (pvVar23 = (void *)NativeHelper_0260e1a8(self->ScrollViewPanel,0), pvVar23 == (void *)0x0))
    goto LAB_013e4fc0;
    value.component1 = fVar29 * 0.5 + RVar31.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar23,value,(void *)0x0);
    if (self->ScrollContent == (void *)0x0) goto LAB_013e4fc0;
    RVar31 = UnityEngine_Transform_get_localPosition_2515e38(self->ScrollContent,(void *)0x0);
    value_00.component2 = RVar31.component2;
    value_00.component0 = RVar31.component0;
    if (self->ScrollContent == (void *)0x0) goto LAB_013e4fc0;
    value_00.component1 = fVar29 * 0.5 + RVar31.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(self->ScrollContent,value_00,(void *)0x0);
    self_00 = self->ScrollViewPanel;
    if (self_00 == (UIPanel *)0x0) goto LAB_013e4fc0;
    value_01.component2 = (self_00->mClipRange).component2;
    uVar1 = (self_00->mClipRange).component0;
    uVar2 = (self_00->mClipRange).component1;
    value_01.component1 = (float)uVar2;
    value_01.component0 = (float)uVar1;
    value_01.component3 = fVar29 + (self_00->mClipRange).component3;
    UIPanel_set_clipRange_12a360c(self_00,value_01,(void *)0x0);
    self->_FirstSlide = false;
  }
  puVar5 = PTR_DAT_029c0670;
  puVar4 = PTR_DAT_029bafe8;
  puVar3 = PTR_DAT_029b7f98;
  pvVar23 = self->CharactersObjects;
  if (pvVar23 != (void *)0x0) {
    uVar27 = 0;
    do {
      if ((int)*(uint *)((long)pvVar23 + 0x18) <= (int)(uint)uVar27) {
        if (self->ScrollContent == (void *)0x0) break;
        self_01 = UnityEngine_Component_GetComponent_13ccba8(self->ScrollContent,*(void **)puVar5);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar3);
        }
        bVar6 = UnityEngine_object_op_Inequality_250c8e4(self_01,(void *)0x0,(void *)0x0);
        if (bVar6) {
          if (self_01 == (UIStack *)0x0) break;
          UIStack_Reposition_13042d4(self_01,(void *)0x0);
        }
        pvVar23 = (void *)NativeHelper_013e4fc8(self);
        UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar23,(void *)0x0);
        if ((bRam0000000002b94fad & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b8bc0);
          NativeHelper_011df0b4(PTR_DAT_029c0680);
          NativeHelper_011df0b4(PTR_DAT_029c0688);
          bRam0000000002b94fad = 1;
        }
        if (self->PlayerManager != (void *)0x0) {
          iVar8 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
          if (self->RecordManager != (RecordManager *)0x0) {
            iVar9 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                              (self->RecordManager,iVar8,(void *)0x10,(void *)0x0);
            if (self->RecordManager != (RecordManager *)0x0) {
              iVar10 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                 (self->RecordManager,iVar8,(void *)0x11,(void *)0x0);
              if (self->RecordManager != (RecordManager *)0x0) {
                iVar11 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                   (self->RecordManager,iVar8,(void *)0x12,(void *)0x0);
                if (self->RecordManager != (RecordManager *)0x0) {
                  iVar12 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                     (self->RecordManager,iVar8,(void *)0x13,(void *)0x0);
                  if (self->RecordManager != (RecordManager *)0x0) {
                    iVar13 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                       (self->RecordManager,iVar8,(void *)0x14,(void *)0x0);
                    if (self->RecordManager != (RecordManager *)0x0) {
                      iVar14 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                         (self->RecordManager,iVar8,(void *)0x16,(void *)0x0);
                      if (self->RecordManager != (RecordManager *)0x0) {
                        iVar15 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                           (self->RecordManager,iVar8,(void *)0x1c,(void *)0x0);
                        if (self->RecordManager != (RecordManager *)0x0) {
                          iVar16 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                             (self->RecordManager,iVar8,(void *)0x1d,(void *)0x0);
                          if (self->RecordManager != (RecordManager *)0x0) {
                            iVar17 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                               (self->RecordManager,iVar8,(void *)0x1e,(void *)0x0);
                            if (self->RecordManager != (RecordManager *)0x0) {
                              iVar18 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                 (self->RecordManager,iVar8,(void *)0x1f,(void *)0x0
                                                 );
                              if (self->RecordManager != (RecordManager *)0x0) {
                                iVar19 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                   (self->RecordManager,iVar8,(void *)0x20,
                                                    (void *)0x0);
                                if (self->RecordManager != (RecordManager *)0x0) {
                                  iVar20 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                     (self->RecordManager,iVar8,(void *)0x21,
                                                      (void *)0x0);
                                  if (self->RecordManager != (RecordManager *)0x0) {
                                    iVar21 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                       (self->RecordManager,iVar8,(void *)0x22,
                                                        (void *)0x0);
                                    if (self->RecordManager != (RecordManager *)0x0) {
                                      iVar22 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                         (self->RecordManager,iVar8,(void *)0x23,
                                                          (void *)0x0);
                                      if (self->RecordManager != (RecordManager *)0x0) {
                                        iVar26 = 1;
                                        if (0 < iVar9) {
                                          iVar26 = 2;
                                        }
                                        if (0 < iVar10) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar11) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar12) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar13) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar14) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar15) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar16) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar17) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar18) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar19) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar20) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar21) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        if (0 < iVar22) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        iVar8 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                                          (self->RecordManager,iVar8,(void *)0x24,
                                                           (void *)0x0);
                                        if (0 < iVar8) {
                                          iVar26 = iVar26 + 1;
                                        }
                                        pvVar23 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0688,
                                                                      false,(void *)0x0);
                                        puVar3 = PTR_DAT_029b8bc0;
                                        iStack_64 = iVar26;
                                        uVar24 = NativeHelper_011df1c4
                                                           (*(undefined8 *)PTR_DAT_029b8bc0,
                                                            &iStack_64);
                                        uStack_68 = 0x10;
                                        uVar25 = NativeHelper_011df1c4
                                                           (*(undefined8 *)puVar3,&uStack_68);
                                        pvVar23 = (void *)NativeHelper_01e9c29c
                                                                    (*(undefined8 *)PTR_DAT_029c0680
                                                                     ,pvVar23,uVar24,uVar25,0);
                                        if (self->HeaderLabel != (UILabel *)0x0) {
                                          UILabel_set_text_129fea0
                                                    (self->HeaderLabel,pvVar23,(void *)0x0);
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
      if (*(uint *)((long)pvVar23 + 0x18) <= (uint)uVar27) {
LAB_013e4fc4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      if (self->DisplayOrder == (void *)0x0) break;
      pvVar28 = self->Names;
      pvVar23 = *(void **)((long)pvVar23 + uVar27 * 8 + 0x20);
      uVar7 = NativeHelper_01a154bc(self->DisplayOrder,uVar27 & 0xffffffff,*(undefined8 *)puVar4);
      if (pvVar28 == (void *)0x0) break;
      if (*(uint *)((long)pvVar28 + 0x18) <= uVar7) goto LAB_013e4fc4;
      if (pvVar23 == (void *)0x0) break;
      UnityEngine_object_set_name_2510254
                (pvVar23,*(void **)((long)pvVar28 + (long)(int)uVar7 * 8 + 0x20),(void *)0x0);
      pvVar23 = self->CharactersObjects;
      uVar27 = uVar27 + 1;
    } while (pvVar23 != (void *)0x0);
  }
LAB_013e4fc0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

