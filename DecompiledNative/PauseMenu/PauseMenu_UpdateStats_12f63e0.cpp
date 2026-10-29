// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateStats() { }
// Ghidra address: 013fa3e0; ELF VA: 0x12fa3e0; file offset: 0x12f63e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PauseMenu_UpdateStats_12f63e0(PauseMenu *self,void *runtimeMethod)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int playerId;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  RecordManager_cAchievement *pRVar14;
  ObjectiveItem *self_00;
  void *extraout_x1;
  long lVar15;
  void *in_x4;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  UILabel *pUVar20;
  RecordManager *self_01;
  float fVar21;
  undefined1 auVar22 [12];
  int iStack_44;
  
  if ((bRam0000000002b95045 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0ef0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029c05b0);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b86b8);
    NativeHelper_011df0b4(PTR_DAT_029b97e0);
    NativeHelper_011df0b4(PTR_DAT_029c0ef8);
    NativeHelper_011df0b4(PTR_DAT_029b97d8);
    NativeHelper_011df0b4(PTR_DAT_029b97d0);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b97e8);
    NativeHelper_011df0b4(PTR_DAT_029c0f00);
    NativeHelper_011df0b4(PTR_DAT_029c0f08);
    NativeHelper_011df0b4(PTR_DAT_029c0830);
    NativeHelper_011df0b4(PTR_DAT_029c0668);
    NativeHelper_011df0b4(PTR_DAT_029c0610);
    bRam0000000002b95045 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_029c0668;
  if ((*(long *)&self->field_0x20 != 0) &&
     (lVar16 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar16 != 0)) {
    pUVar20 = self->ScoreLabel;
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    pvVar8 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
    pvVar8 = (void *)NativeHelper_01ffa4f4(lVar16 + 0x138,*(undefined8 *)puVar3,pvVar8,0);
    if (pUVar20 != (UILabel *)0x0) {
      UILabel_set_text_129fea0(pUVar20,pvVar8,(void *)0x0);
      if (*(long *)&self->field_0x20 != 0) {
        fVar21 = *(float *)(*(long *)&self->field_0x20 + 0x148);
        iStack_44 = -0x80000000;
        if (fVar21 != INFINITY) {
          iStack_44 = (int)fVar21;
        }
        pUVar20 = self->DistanceLabel;
        pvVar8 = Strings_Txt_131380c(*(void **)PTR_DAT_029c0830,false,(void *)0x0);
        pvVar9 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
        uVar10 = NativeHelper_01ffa4f4(&iStack_44,*(undefined8 *)puVar3,pvVar9,0);
        pvVar8 = (void *)NativeHelper_01e9390c(pvVar8,uVar10,0);
        if (pUVar20 != (UILabel *)0x0) {
          UILabel_set_text_129fea0(pUVar20,pvVar8,(void *)0x0);
          if ((*(long *)&self->field_0x20 != 0) &&
             (lVar16 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar16 != 0)) {
            pUVar20 = self->CoinsLabel;
            pvVar8 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
            pvVar8 = (void *)NativeHelper_01ffa4f4(lVar16 + 0x148,*(undefined8 *)puVar3,pvVar8,0);
            puVar4 = PTR_DAT_029c0610;
            if (pUVar20 != (UILabel *)0x0) {
              UILabel_set_text_129fea0(pUVar20,pvVar8,(void *)0x0);
              pUVar20 = self->MultiplierLabel;
              pvVar8 = Strings_Txt_131380c(*(void **)puVar4,false,(void *)0x0);
              if ((*(long *)&self->field_0x20 != 0) &&
                 (lVar16 = *(long *)(*(long *)&self->field_0x20 + 0x80), lVar16 != 0)) {
                pvVar9 = GameController_get_CurrentCultureInfo_128cabc((void *)0x0);
                uVar10 = NativeHelper_01ffa4f4(lVar16 + 0x13c,*(undefined8 *)puVar3,pvVar9,0);
                pvVar8 = (void *)NativeHelper_01e9390c(pvVar8,uVar10,0);
                puVar4 = PTR_DAT_029b97d8;
                puVar3 = PTR_DAT_029b97d0;
                if (pUVar20 != (UILabel *)0x0) {
                  UILabel_set_text_129fea0(pUVar20,pvVar8,(void *)0x0);
                  lVar16 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
                  NativeHelper_01a2f248(lVar16,*(undefined8 *)puVar4);
                  puVar3 = PTR_DAT_029b8028;
                  if (self->NextObjectivePlate != (void *)0x0) {
                    plVar11 = UnityEngine_Transform_GetEnumerator_2517d48
                                        (self->NextObjectivePlate,(void *)0x0);
                    puVar6 = PTR_DAT_029b97e8;
                    puVar5 = PTR_DAT_029b97e0;
                    puVar4 = PTR_DAT_029b86b8;
                    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_011df2dc();
                    }
                    do {
                      lVar17 = *plVar11;
                      lVar15 = *(long *)puVar4;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar15) {
                            puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_013fa72c;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar12 = (undefined8 *)NativeHelper_011b5528(plVar11,lVar15,0);
LAB_013fa72c:
                      uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                      if ((uVar18 & 1) == 0) {
                        lVar15 = 0;
                        goto LAB_013fa830;
                      }
                      lVar17 = *plVar11;
                      lVar15 = *(long *)puVar4;
                      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar15) {
                            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                            goto LAB_013fa78c;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar12 = (undefined8 *)NativeHelper_011b5528(plVar11,lVar15,1);
LAB_013fa78c:
                      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df2dc();
                      }
                      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
                      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df678();
                      }
                      uVar10 = NativeHelper_0260e1e4(plVar13,0);
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df2dc();
                      }
                      lVar15 = *(long *)(lVar16 + 0x10);
                      lVar17 = *(long *)puVar5;
                      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_011df2dc();
                      }
                      uVar2 = *(uint *)(lVar16 + 0x18);
                      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                        *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
                      }
                      else {
                        NativeHelper_01a2fa14
                                  (lVar16,uVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013fab1c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013fa830:
  plVar13 = (long *)NativeHelper_011df1c0(plVar11,*(undefined8 *)puVar3);
  if (plVar13 != (long *)0x0) {
    lVar17 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_013fa890;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)NativeHelper_011b5528(plVar13,*(long *)puVar3,0);
LAB_013fa890:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
    plVar11 = plVar13;
  }
  puVar4 = PTR_DAT_029c0f08;
  if (lVar15 == 0) {
    lVar15 = *(long *)PTR_DAT_029c0f08;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar15);
      lVar15 = *(long *)puVar4;
    }
    lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
    if (lVar17 == 0) {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar15);
        lVar15 = *(long *)puVar4;
      }
      uVar10 = **(undefined8 **)(lVar15 + 0xb8);
      lVar17 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c0ef0);
      NativeHelper_01694ef4(lVar17,uVar10,*(undefined8 *)PTR_DAT_029c0f00,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar17;
    }
    if (lVar16 == 0) goto LAB_013fab1c;
    NativeHelper_01a30448(lVar16,lVar17,*(undefined8 *)PTR_DAT_029c0ef8);
    if (self->PlayerManager == (void *)0x0) goto LAB_013fab1c;
    self_01 = self->RecordManager;
    playerId = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
    puVar3 = PTR_DAT_029b7f98;
    if (self_01 == (RecordManager *)0x0) goto LAB_013fab1c;
    pRVar14 = RecordManager_GetNextAchievement_12b2c6c(self_01,playerId,(void *)0x0);
    puVar4 = PTR_DAT_029b9ec8;
    if (pRVar14 == (RecordManager_cAchievement *)0x0) {
      pvVar8 = self->NextObjectiveSlotSprite;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
      if (bVar7) {
        if ((self->NextObjectiveSlotSprite == (void *)0x0) ||
           (lVar16 = NativeHelper_0260e1e4(self->NextObjectiveSlotSprite,0), lVar16 == 0))
        goto LAB_013fab1c;
        NativeHelper_02610c54(lVar16,0,0);
      }
      pvVar8 = self->NextObjectiveText;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar8,(void *)0x0,(void *)0x0);
      if (bVar7) {
        if ((self->NextObjectiveText == (void *)0x0) ||
           (lVar16 = NativeHelper_0260e1e4(self->NextObjectiveText,0), lVar16 == 0))
        goto LAB_013fab1c;
        NativeHelper_02610c54(lVar16,0,0);
      }
    }
    else {
      if (self->RecordManager == (RecordManager *)0x0) goto LAB_013fab1c;
      pRVar14 = RecordManager_FindAchievement_12b2640
                          (self->RecordManager,pRVar14->achievementId,(void *)0x0);
      pvVar8 = self->ObjectiveItemPrefab;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      pvVar8 = UnityEngine_object_Instantiate_142b1bc(pvVar8,*(void **)puVar4);
      if (pvVar8 == (void *)0x0) goto LAB_013fab1c;
      self_00 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar8,*(void **)PTR_DAT_029c05b0);
      pvVar9 = (void *)NativeHelper_02610b98(pvVar8,0);
      if (pvVar9 == (void *)0x0) goto LAB_013fab1c;
      UnityEngine_Transform_set_parent_2516ee0(pvVar9,self->NextObjectivePlate,(void *)0x0);
      pvVar8 = (void *)NativeHelper_02610b98(pvVar8,0);
      if (cRam0000000002b94510 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368);
        cRam0000000002b94510 = '\x01';
      }
      if ((pvVar8 == (void *)0x0) ||
         (UnityEngine_Transform_set_localPosition_2515ec4
                    (pvVar8,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0),
         self_00 == (ObjectiveItem *)0x0)) goto LAB_013fab1c;
      ObjectiveItem_Setup_12f4150(self_00,pRVar14,false,false,in_x4);
    }
    return;
  }
  auVar22 = NativeHelper_011df2d4(lVar15);
  if (auVar22._8_4_ != 1) goto LAB_013fab6c;
  plVar13 = (long *)NativeHelper_02861460();
  lVar15 = *plVar13;
  NativeHelper_02861470();
  goto LAB_013fa830;
LAB_013fab6c:
  plVar11 = (long *)NativeHelper_011df1c0(plVar11,*(undefined8 *)puVar3);
  if (plVar11 != (long *)0x0) {
    lVar16 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_013fabcc;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)NativeHelper_011b5528(plVar11,*(long *)puVar3,0);
LAB_013fabcc:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  NativeHelper_012c28d8(auVar22._0_8_);
  NativeHelper_011df2d4(0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_010689ac();
}

