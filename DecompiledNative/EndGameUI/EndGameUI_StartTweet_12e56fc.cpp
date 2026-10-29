// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartTweet() { }
// Ghidra address: 013e96fc; ELF VA: 0x12e96fc; file offset: 0x12e56fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_StartTweet_12e56fc(EndGameUI *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  Imangi_Analytics_EventParameter *pIVar6;
  undefined8 uVar7;
  long lVar8;
  void *inEventId;
  void *pvVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *inParameterName;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  UILabel *pUVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  
  puVar2 = PTR_DAT_029c08d8;
  if ((bRam0000000002b94fd0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bffc8);
    NativeHelper_011df0b4(PTR_DAT_029c08d8);
    bRam0000000002b94fd0 = 1;
  }
  pvVar9 = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
  puVar2 = PTR_DAT_029bffc8;
  if (self->ScoreLabel != (UILabel *)0x0) {
    pvVar9 = (void *)NativeHelper_01e9c258(pvVar9,self->ScoreLabel->mText,self->TwitterLink,0);
    plVar12 = (long *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (plVar12 != (long *)0x0) {
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
      (**(code **)(*plVar12 + 0x188))(plVar12,1,*(undefined8 *)(*plVar12 + 400));
      if (plVar12[0xb] != 0) {
        NativeHelper_02610c54(plVar12[0xb],0,0);
        if (plVar12[0xc] != 0) {
          NativeHelper_02610c54(plVar12[0xc],0,0);
          if (plVar12[0xd] != 0) {
            NativeHelper_02610c54(plVar12[0xd],0,0);
            if ((UIInput *)plVar12[0x18] != (UIInput *)0x0) {
              UIInput_set_text_129fbfc((UIInput *)plVar12[0x18],pvVar9,(void *)0x0);
              if (plVar12[0xf] != 0) {
                NativeHelper_02610c54(plVar12[0xf],0,0);
                if ((UILabel *)plVar12[0x14] != (UILabel *)0x0) {
                  UILabel_set_text_129fea0
                            ((UILabel *)plVar12[0x14],*(void **)PTR_DAT_029c0560,(void *)0x0);
                  if ((void *)plVar12[0x14] != (void *)0x0) {
                    UnityEngine_Behaviour_set_enabled_250972c
                              ((void *)plVar12[0x14],false,(void *)0x0);
                    if ((void *)plVar12[0x15] != (void *)0x0) {
                      UnityEngine_Behaviour_set_enabled_250972c
                                ((void *)plVar12[0x15],false,(void *)0x0);
                      if ((void *)plVar12[0x17] != (void *)0x0) {
                        UnityEngine_Behaviour_set_enabled_250972c
                                  ((void *)plVar12[0x17],false,(void *)0x0);
                        puVar2 = PTR_DAT_029c0558;
                        if (plVar12[0x16] != 0) {
                          NativeHelper_02610c54(plVar12[0x16],1,0);
                          plVar12[0x19] = 0;
                          pUVar14 = (UILabel *)plVar12[0x11];
                          pvVar9 = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
                          puVar2 = PTR_DAT_029c0568;
                          if (pUVar14 != (UILabel *)0x0) {
                            UILabel_set_text_129fea0(pUVar14,pvVar9,(void *)0x0);
                            pUVar14 = (UILabel *)plVar12[0x13];
                            pvVar9 = Strings_Txt_131380c(*(void **)puVar2,false,(void *)0x0);
                            puVar4 = PTR_DAT_029c0550;
                            puVar2 = PTR_DAT_029b8c90;
                            if (pUVar14 != (UILabel *)0x0) {
                              UILabel_set_text_129fea0(pUVar14,pvVar9,(void *)0x0);
                              lVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
                              NativeHelper_01f80268(lVar8,plVar12,*(undefined8 *)puVar4,0);
                              plVar12[0x1a] = lVar8;
                              puVar4 = PTR_DAT_029bf1b8;
                              puVar2 = PTR_DAT_029bbf28;
                              if (plVar12[0x14] != 0) {
                                pvVar9 = *(void **)(plVar12[0x14] + 0x98);
                                if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                }
                                puVar3 = PTR_DAT_029bd9d0;
                                inEventId = *(void **)puVar4;
                                inParameterName = *(void **)puVar2;
                                pvVar15 = inParameterName;
                                if ((bRam0000000002b94e08 & 1) == 0) {
                                  NativeHelper_011df0b4(PTR_DAT_029bd9d0,inParameterName,pvVar9,0);
                                  bRam0000000002b94e08 = 1;
                                  pvVar15 = extraout_x1_01;
                                }
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  pvVar15 = extraout_x1_02;
                                }
                                bVar5 = TRAnalytics_IsEventEnabled_12b6e24(inEventId,pvVar15);
                                if (!bVar5) {
                                  return;
                                }
                                Imangi_Analytics_Analytics_LogEvent_126af14
                                          (inEventId,inParameterName,pvVar9,(void *)0x0);
                                pvVar9 = extraout_x1_03;
                                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  pvVar9 = extraout_x1_04;
                                }
                                puVar2 = PTR_DAT_029bd9d0;
                                if ((bRam0000000002b94e0d & 1) == 0) {
                                  NativeHelper_011df0b4(PTR_DAT_029bd9d0);
                                  bRam0000000002b94e0d = 1;
                                  pvVar9 = extraout_x1;
                                }
                                lVar8 = *(long *)puVar2;
                                if (*(int *)(lVar8 + 0xe0) == 0) {
                                  NativeHelper_011df1bc();
                                  lVar8 = *(long *)puVar2;
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
                                puVar2 = PTR_DAT_029bf150;
                                if (*(char *)(lVar8 + 0x30) != '\0') {
                                  if (*(int *)(*(long *)PTR_DAT_029bd9d0 + 0xe0) == 0) {
                                    NativeHelper_011df1bc();
                                    pvVar9 = extraout_x1_06;
                                  }
                                  bVar5 = TRAnalytics_IsEventEnabled_12b6e24
                                                    (*(void **)puVar2,pvVar9);
                                  if (bVar5) {
                                    if ((*(long *)(lVar8 + 0x10) != 0) &&
                                       (*(long *)(lVar8 + 0x20) != 0)) {
                                      plVar12 = (long *)NativeHelper_011df12c
                                                                  (*(undefined8 *)PTR_DAT_029bd9e8,
                                                                   *(int *)(*(long *)(lVar8 + 0x20)
                                                                           + 0x18) +
                                                                   *(int *)(*(long *)(lVar8 + 0x10)
                                                                           + 0x18));
                                      puVar4 = PTR_DAT_029bd9f0;
                                      lVar11 = *(long *)(lVar8 + 0x10);
                                      if (lVar11 != 0) {
                                        lVar16 = 4;
                                        do {
                                          uVar17 = lVar16 - 4;
                                          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar17) {
                                            lVar11 = *(long *)(lVar8 + 0x20);
                                            if (lVar11 != 0) {
                                              uVar17 = 0;
                                              goto code_r0x013bb368;
                                            }
                                            break;
                                          }
                                          if (*(uint *)(lVar11 + 0x18) <= uVar17)
                                          goto code_r0x013bb438;
                                          lVar13 = *(long *)(lVar8 + 0x18);
                                          if (lVar13 == 0) break;
                                          if (*(uint *)(lVar13 + 0x18) <= uVar17)
                                          goto code_r0x013bb438;
                                          pvVar9 = *(void **)(lVar11 + lVar16 * 8);
                                          pvVar15 = *(void **)(lVar13 + lVar16 * 8);
                                          pIVar6 = (Imangi_Analytics_EventParameter *)
                                                   NativeHelper_011df2d0(*(undefined8 *)puVar4);
                                          Imangi_Analytics_EventParameter_EventParameter_126b488
                                                    (pIVar6,pvVar9,pvVar15,(void *)0x0);
                                          if (plVar12 == (long *)0x0) break;
                                          if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
                                             (lVar11 = NativeHelper_011df1c0
                                                                 (pIVar6,*(undefined8 *)
                                                                          (*plVar12 + 0x40)),
                                             lVar11 == 0)) goto code_r0x013bb43c;
                                          if (*(uint *)(plVar12 + 3) <= uVar17)
                                          goto code_r0x013bb438;
                                          plVar12[lVar16] = (long)pIVar6;
                                          lVar11 = *(long *)(lVar8 + 0x10);
                                          lVar16 = lVar16 + 1;
                                        } while (lVar11 != 0);
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
    if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar17) {
      Imangi_Analytics_Analytics_LogEvent_126b0dc(*(void **)puVar2,plVar12,(void *)0x0);
      *(undefined1 *)(lVar8 + 0x30) = 0;
      return;
    }
    lVar16 = *(long *)(lVar8 + 0x10);
    if (lVar16 == 0) break;
    if (*(uint *)(lVar11 + 0x18) <= uVar17) {
code_r0x013bb438:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    lVar13 = *(long *)(lVar8 + 0x28);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x013bb438;
    pvVar9 = *(void **)(lVar11 + uVar17 * 8 + 0x20);
    iVar1 = *(int *)(lVar13 + uVar17 * 4 + 0x20);
    pIVar6 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
    Imangi_Analytics_EventParameter_EventParameter_126b5b4(pIVar6,pvVar9,(long)iVar1,(void *)0x0);
    if (plVar12 == (long *)0x0) break;
    if ((pIVar6 != (Imangi_Analytics_EventParameter *)0x0) &&
       (lVar11 = NativeHelper_011df1c0(pIVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar11 == 0)) {
code_r0x013bb43c:
      uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar7,0);
    }
    uVar10 = (int)uVar17 + (int)*(undefined8 *)(lVar16 + 0x18);
    if (*(uint *)(plVar12 + 3) <= uVar10) goto code_r0x013bb438;
    plVar12[(long)(int)uVar10 + 4] = (long)pIVar6;
    lVar11 = *(long *)(lVar8 + 0x20);
    uVar17 = uVar17 + 1;
  } while (lVar11 != 0);
code_r0x013bb408:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

