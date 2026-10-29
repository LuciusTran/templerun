// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void TweetButtonClicked() { }
// Ghidra address: 013e9630; ELF VA: 0x12e9630; file offset: 0x12e5630
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_TweetButtonClicked_12e5630(EndGameUI *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  Imangi_Analytics_EventParameter *pIVar7;
  long lVar8;
  void *inEventId;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *inParameterName;
  void *extraout_x1_07;
  void *extraout_x1_08;
  void *extraout_x1_09;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  UILabel *pUVar17;
  AlertView *self_00;
  long lVar18;
  ulong uVar19;
  
  if ((bRam0000000002b94fce & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde40);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bdbb8);
    bRam0000000002b94fce = 1;
    runtimeMethod = extraout_x1_07;
  }
  if (self->_ShowingInterstitial != false) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
  }
  pvVar9 = GameController_CheckFeatureState_128798c(*(void **)PTR_DAT_029bdbb8,(void *)0x0);
  puVar3 = PTR_DAT_029c08d8;
  if ((int)pvVar9 == 1) {
    if (*(int *)(*(long *)PTR_DAT_029bde40 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar5 = PTR_DAT_029bffc8;
    puVar3 = PTR_DAT_029bde40;
    pvVar9 = (void *)0x0;
    if ((bRam0000000002b951d6 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029bffc8,0,0);
      NativeHelper_011df0b4(PTR_DAT_029bde40);
      NativeHelper_011df0b4(PTR_DAT_029b8bc0);
      NativeHelper_011df0b4(PTR_DAT_029b8e18);
      NativeHelper_011df0b4(PTR_DAT_029b98a8);
      bRam0000000002b951d6 = 1;
      pvVar9 = extraout_x1_08;
    }
    puVar4 = PTR_DAT_029b98a8;
    puVar2 = PTR_DAT_029b8bc0;
    self_00 = (AlertView *)**(undefined8 **)(*(long *)puVar5 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      pvVar9 = extraout_x1_09;
    }
    pvVar9 = ErrorHandler_GetTitleString_13240d4(0x232a,pvVar9);
    uVar10 = ErrorHandler_GetErrorString_13241e4(0x232a,0);
    uVar11 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&stack0xffffffffffffffbc);
    pvVar12 = (void *)NativeHelper_01e9c258(*(undefined8 *)puVar4,uVar10,uVar11,0);
    if (self_00 != (AlertView *)0x0) {
      AlertView_ShowAlert_12cd2ec
                (self_00,pvVar9,pvVar12,*(void **)PTR_DAT_029b8e18,(void *)0x0,true,(void *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((bRam0000000002b94fd0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bffc8);
    NativeHelper_011df0b4(PTR_DAT_029c08d8);
    bRam0000000002b94fd0 = 1;
  }
  pvVar9 = Strings_Txt_131380c(*(void **)puVar3,false,(void *)0x0);
  puVar3 = PTR_DAT_029bffc8;
  if (self->ScoreLabel != (UILabel *)0x0) {
    pvVar9 = (void *)NativeHelper_01e9c258(pvVar9,self->ScoreLabel->mText,self->TwitterLink,0);
    plVar15 = (long *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
    if (plVar15 != (long *)0x0) {
      if ((bRam0000000002b94f86 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b8c90);
        NativeHelper_011df0b4(PTR_DAT_029c0550);
        NativeHelper_011df0b4(PTR_DAT_029bd9d0);
        NativeHelper_011df0b4(PTR_DAT_029bbf28);
        NativeHelper_011df0b4(PTR_DAT_029bf1b8);
        NativeHelper_011df0b4(PTR_DAT_029c0558);
        NativeHelper_011df0b4(PTR_DAT_029c0560);
        NativeHelper_011df0b4(PTR_DAT_029c0568);
        bRam0000000002b94f86 = 1;
      }
      (**(code **)(*plVar15 + 0x188))(plVar15,1,*(undefined8 *)(*plVar15 + 400));
      if (plVar15[0xb] != 0) {
        NativeHelper_02610c54(plVar15[0xb],0,0);
        if (plVar15[0xc] != 0) {
          NativeHelper_02610c54(plVar15[0xc],0,0);
          if (plVar15[0xd] != 0) {
            NativeHelper_02610c54(plVar15[0xd],0,0);
            if ((UIInput *)plVar15[0x18] != (UIInput *)0x0) {
              UIInput_set_text_129fbfc((UIInput *)plVar15[0x18],pvVar9,(void *)0x0);
              if (plVar15[0xf] != 0) {
                NativeHelper_02610c54(plVar15[0xf],0,0);
                if ((UILabel *)plVar15[0x14] != (UILabel *)0x0) {
                  UILabel_set_text_129fea0
                            ((UILabel *)plVar15[0x14],*(void **)PTR_DAT_029c0560,(void *)0x0);
                  if ((void *)plVar15[0x14] != (void *)0x0) {
                    UnityEngine_Behaviour_set_enabled_250972c
                              ((void *)plVar15[0x14],false,(void *)0x0);
                    if ((void *)plVar15[0x15] != (void *)0x0) {
                      UnityEngine_Behaviour_set_enabled_250972c
                                ((void *)plVar15[0x15],false,(void *)0x0);
                      if ((void *)plVar15[0x17] != (void *)0x0) {
                        UnityEngine_Behaviour_set_enabled_250972c
                                  ((void *)plVar15[0x17],false,(void *)0x0);
                        puVar3 = PTR_DAT_029c0558;
                        if (plVar15[0x16] != 0) {
                          NativeHelper_02610c54(plVar15[0x16],1,0);
                          plVar15[0x19] = 0;
                          pUVar17 = (UILabel *)plVar15[0x11];
                          pvVar9 = Strings_Txt_131380c(*(void **)puVar3,false,(void *)0x0);
                          puVar3 = PTR_DAT_029c0568;
                          if (pUVar17 != (UILabel *)0x0) {
                            UILabel_set_text_129fea0(pUVar17,pvVar9,(void *)0x0);
                            pUVar17 = (UILabel *)plVar15[0x13];
                            pvVar9 = Strings_Txt_131380c(*(void **)puVar3,false,(void *)0x0);
                            puVar5 = PTR_DAT_029c0550;
                            puVar3 = PTR_DAT_029b8c90;
                            if (pUVar17 != (UILabel *)0x0) {
                              UILabel_set_text_129fea0(pUVar17,pvVar9,(void *)0x0);
                              lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
                              NativeHelper_01f80268(lVar8,plVar15,*(undefined8 *)puVar5,0);
                              plVar15[0x1a] = lVar8;
                              puVar5 = PTR_DAT_029bf1b8;
                              puVar3 = PTR_DAT_029bbf28;
                              if (plVar15[0x14] != 0) {
                                pvVar9 = *(void **)(plVar15[0x14] + 0x98);
                                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                }
                                puVar2 = PTR_DAT_029bd9d0;
                                inEventId = *(void **)puVar5;
                                inParameterName = *(void **)puVar3;
                                pvVar12 = inParameterName;
                                if ((bRam0000000002b94e08 & 1) == 0) {
                                  NativeHelper_011df0b4(PTR_DAT_029bd9d0,inParameterName,pvVar9,0);
                                  bRam0000000002b94e08 = 1;
                                  pvVar12 = extraout_x1_01;
                                }
                                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  pvVar12 = extraout_x1_02;
                                }
                                bVar6 = TRAnalytics_IsEventEnabled_12b6e24(inEventId,pvVar12);
                                if (!bVar6) {
                                  return;
                                }
                                Imangi_Analytics_Analytics_LogEvent_126af14
                                          (inEventId,inParameterName,pvVar9,(void *)0x0);
                                pvVar9 = extraout_x1_03;
                                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  pvVar9 = extraout_x1_04;
                                }
                                puVar3 = PTR_DAT_029bd9d0;
                                if ((bRam0000000002b94e0d & 1) == 0) {
                                  NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                  bRam0000000002b94e0d = 1;
                                  pvVar9 = extraout_x1;
                                }
                                lVar8 = *(long *)puVar3;
                                if (*(int *)(lVar8 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  lVar8 = *(long *)puVar3;
                                  pvVar9 = extraout_x1_00;
                                }
                                lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                  NativeHelper_011df2dc();
                                }
                                if ((bRam0000000002b94e34 & 1) == 0) {
                                  NativeHelper_011df0b4(PTR_DAT_029bd9e8);
                                  NativeHelper_011df0b4(PTR_DAT_029bd9f0);
                                  NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                  NativeHelper_011df0b4(PTR_DAT_029bf150);
                                  bRam0000000002b94e34 = 1;
                                  pvVar9 = extraout_x1_05;
                                }
                                puVar3 = PTR_DAT_029bf150;
                                if (*(char *)(lVar8 + 0x30) != '\0') {
                                  if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                                    NativeHelper_011df1bc();
                                    pvVar9 = extraout_x1_06;
                                  }
                                  bVar6 = TRAnalytics_IsEventEnabled_12b6e24
                                                    (*(void **)puVar3,pvVar9);
                                  if (bVar6) {
                                    if ((*(long *)(lVar8 + 0x10) != 0) &&
                                       (*(long *)(lVar8 + 0x20) != 0)) {
                                      plVar15 = (long *)NativeHelper_011df12c
                                                                  (*(undefined8 *)PTR_DAT_029bd9e8,
                                                                   *(int *)(*(long *)(lVar8 + 0x20)
                                                                           + 0x18) +
                                                                   *(int *)(*(long *)(lVar8 + 0x10)
                                                                           + 0x18));
                                      puVar5 = PTR_DAT_029bd9f0;
                                      lVar14 = *(long *)(lVar8 + 0x10);
                                      if (lVar14 != 0) {
                                        lVar18 = 4;
                                        do {
                                          uVar19 = lVar18 - 4;
                                          if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar19) {
                                            lVar14 = *(long *)(lVar8 + 0x20);
                                            if (lVar14 != 0) {
                                              uVar19 = 0;
                                              goto code_r0x013bb368;
                                            }
                                            break;
                                          }
                                          if (*(uint *)(lVar14 + 0x18) <= uVar19)
                                          goto code_r0x013bb438;
                                          lVar16 = *(long *)(lVar8 + 0x18);
                                          if (lVar16 == 0) break;
                                          if (*(uint *)(lVar16 + 0x18) <= uVar19)
                                          goto code_r0x013bb438;
                                          pvVar9 = *(void **)(lVar14 + lVar18 * 8);
                                          pvVar12 = *(void **)(lVar16 + lVar18 * 8);
                                          pIVar7 = (Imangi_Analytics_EventParameter *)
                                                   NativeHelper_011df2d0(*(undefined8 *)puVar5);
                                          Imangi_Analytics_EventParameter_EventParameter_126b488
                                                    (pIVar7,pvVar9,pvVar12,(void *)0x0);
                                          if (plVar15 == (long *)0x0) break;
                                          if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
                                             (lVar14 = NativeHelper_011df1c0
                                                                 (pIVar7,*(undefined8 *)
                                                                          (*plVar15 + 0x40)),
                                             lVar14 == 0)) goto code_r0x013bb43c;
                                          if (*(uint *)(plVar15 + 3) <= uVar19)
                                          goto code_r0x013bb438;
                                          plVar15[lVar18] = (long)pIVar7;
                                          lVar14 = *(long *)(lVar8 + 0x10);
                                          lVar18 = lVar18 + 1;
                                        } while (lVar14 != 0);
                                      }
                                    }
                                    goto code_r0x013bb408;
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
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
code_r0x013bb368:
  do {
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar19) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar3,plVar15,(void *)0x0);
      *(undefined1 *)(lVar8 + 0x30) = 0;
      return;
    }
    lVar18 = *(long *)(lVar8 + 0x10);
    if (lVar18 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar19) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar16 = *(long *)(lVar8 + 0x28);
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x013bb438;
    pvVar9 = *(void **)(lVar14 + uVar19 * 8 + 0x20);
    iVar1 = *(int *)(lVar16 + uVar19 * 4 + 0x20);
    pIVar7 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar5);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar7,pvVar9,(long)iVar1,(void *)0x0);
    if (plVar15 == (long *)0x0) break;
    if ((pIVar7 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar14 = NativeHelper_011df1c0(pIVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0)) {
code_r0x013bb43c:
      uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar10,0);
    }
    uVar13 = (int)uVar19 + (int)*(undefined8 *)(lVar18 + 0x18);
    if (*(uint *)(plVar15 + 3) <= uVar13) goto code_r0x013bb438;
    plVar15[(long)(int)uVar13 + 4] = (long)pIVar7;
    lVar14 = *(long *)(lVar8 + 0x20);
    uVar19 = uVar19 + 1;
  } while (lVar14 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

