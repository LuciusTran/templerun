// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AssignDeathDetails() { }
// Ghidra address: 013e88fc; ELF VA: 0x12e88fc; file offset: 0x12e48fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_AssignDeathDetails_12e48fc(EndGameUI *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *systemTypeInstance;
  long *plVar11;
  long *plVar12;
  void *extraout_x1;
  undefined8 *puVar13;
  UILabel *self_00;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_029b9758;
  if ((bRam0000000002b94fcb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0768);
    NativeHelper_011df0b4(PTR_DAT_029c0780);
    NativeHelper_011df0b4(PTR_DAT_029c0788);
    NativeHelper_011df0b4(PTR_DAT_029c0838);
    NativeHelper_011df0b4(PTR_DAT_029c0840);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8bc0);
    NativeHelper_011df0b4(PTR_DAT_029c0848);
    NativeHelper_011df0b4(PTR_DAT_029b9b20);
    NativeHelper_011df0b4(PTR_DAT_029b9b28);
    NativeHelper_011df0b4(PTR_DAT_029c0850);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029c0858);
    NativeHelper_011df0b4(PTR_DAT_029b8da8);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029c0860);
    NativeHelper_011df0b4(PTR_DAT_029c0868);
    NativeHelper_011df0b4(PTR_DAT_029c0870);
    NativeHelper_011df0b4(PTR_DAT_029c0598);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94fcb = 1;
    runtimeMethod = extraout_x1;
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar6,runtimeMethod);
    lVar6 = *(long *)puVar3;
  }
  if (((**(long **)(lVar6 + 0xb8) != 0) &&
      (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x80), lVar6 != 0)) &&
     (self->DeathDetails != (void *)0x0)) {
    uVar5 = *(undefined4 *)(lVar6 + 0xe0);
    uVar7 = NativeHelper_01769250(self->DeathDetails,uVar5,*(undefined8 *)PTR_DAT_029c0788);
    if (self->DeathDetails != (void *)0x0) {
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      lVar6 = NativeHelper_01768fbc(self->DeathDetails,uVar1,*(undefined8 *)PTR_DAT_029c0840);
      if (lVar6 == 0) {
        plVar11 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,1);
        uStack_34 = uVar5;
        lVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029c0768,&uStack_34);
        if (plVar11 != (long *)0x0) {
          if ((lVar6 == 0) ||
             (lVar8 = NativeHelper_011df1c0(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar8 != 0)) {
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar6;
              puVar13 = (undefined8 *)PTR_DAT_029c0870;
              if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                puVar13 = (undefined8 *)PTR_DAT_029c0870;
              }
LAB_013e8d90:
              Imangi_Utilities_ImangiLog_Error_12165d4
                        (*(void **)PTR_DAT_029c05c8,(void *)*puVar13,plVar11,(void *)0x0);
              return;
            }
            goto LAB_013e8df4;
          }
          goto LAB_013e8df8;
        }
      }
      else {
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar8 = *(long *)puVar3;
        }
        puVar3 = PTR_DAT_029c0838;
        if ((**(long **)(lVar8 + 0xb8) != 0) &&
           (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x80), lVar8 != 0)) {
          uVar2 = *(undefined4 *)(lVar8 + 0x188);
          uVar7 = NativeHelper_01757d54(lVar6,uVar2,*(undefined8 *)PTR_DAT_029c0780);
          uVar1 = uVar2;
          if ((uVar7 & 1) == 0) {
            uVar1 = 0;
          }
          lVar6 = NativeHelper_01757ac0(lVar6,uVar1,*(undefined8 *)puVar3);
          if (lVar6 == 0) {
            plVar11 = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
            uStack_38 = uVar5;
            lVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029c0768,&uStack_38);
            if (plVar11 != (long *)0x0) {
              if ((lVar6 != 0) &&
                 (lVar8 = NativeHelper_011df1c0(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)
                 ) {
LAB_013e8df8:
                uVar10 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df1ac(uVar10,0);
              }
              if ((int)plVar11[3] != 0) {
                plVar11[4] = lVar6;
                uStack_3c = uVar2;
                lVar6 = NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8bc0,&uStack_3c);
                if ((lVar6 != 0) &&
                   (lVar8 = NativeHelper_011df1c0(lVar6,*(undefined8 *)(*plVar11 + 0x40)),
                   lVar8 == 0)) goto LAB_013e8df8;
                if (1 < *(uint *)(plVar11 + 3)) {
                  plVar11[5] = lVar6;
                  puVar13 = (undefined8 *)PTR_DAT_029c0868;
                  if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    puVar13 = (undefined8 *)PTR_DAT_029c0868;
                  }
                  goto LAB_013e8d90;
                }
              }
LAB_013e8df4:
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2e4();
            }
          }
          else {
            iVar4 = UnityEngine_Random_Range_2507f84(0,*(int *)(lVar6 + 0x18),(void *)0x0);
            lVar6 = NativeHelper_01a2f750(lVar6,iVar4,*(undefined8 *)PTR_DAT_029c0850);
            if ((lVar6 != 0) && (lVar8 = *(long *)(lVar6 + 0x18), lVar8 != 0)) {
              iVar4 = UnityEngine_Random_Range_2507f84(0,*(int *)(lVar8 + 0x18),(void *)0x0);
              pvVar9 = (void *)NativeHelper_01a2f750(lVar8,iVar4,*(undefined8 *)PTR_DAT_029b9b28);
              self_00 = self->DeathCaption;
              pvVar9 = Strings_Txt_131380c(pvVar9,false,(void *)0x0);
              if (self_00 != (UILabel *)0x0) {
                UILabel_set_text_129fea0(self_00,pvVar9,(void *)0x0);
                if (*(long *)(lVar6 + 0x10) != 0) {
                  uVar10 = NativeHelper_01e9d6d8
                                     (*(long *)(lVar6 + 0x10),*(undefined8 *)PTR_DAT_029c0598,
                                      *(undefined8 *)PTR_DAT_029b8618,0);
                  pvVar9 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c0860,uVar10,0);
                  uVar10 = *(undefined8 *)PTR_DAT_029c0858;
                  if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
                    NativeHelper_011df1bc(*(long *)PTR_DAT_029b9db8);
                  }
                  systemTypeInstance = (void *)NativeHelper_0200afdc(uVar10,0);
                  plVar11 = UnityEngine_Resources_Load_2508040
                                      (pvVar9,systemTypeInstance,(void *)0x0);
                  if (plVar11 == (long *)0x0) {
                    plVar11 = (long *)0x0;
                  }
                  else if (*plVar11 != *(long *)PTR_DAT_029b8da8) {
                    plVar11 = (long *)0x0;
                  }
                  plVar12 = self->DeathIllustration;
                  if ((plVar12 != (long *)0x0) &&
                     (lVar6 = (**(code **)(*plVar12 + 0x178))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x180)), lVar6 != 0)) {
                    if ((bRam0000000002b9c653 & 1) == 0) {
                      NativeHelper_011df0b4(PTR_DAT_029f4488,plVar11,0);
                      bRam0000000002b9c653 = 1;
                    }
                    if (pcRam0000000002b9c658 == (code *)0x0) {
                      pcRam0000000002b9c658 = (code *)NativeHelper_011df070(&UNK_007c28e2);
                    }
                    iVar4 = (*pcRam0000000002b9c658)(lVar6,0x80);
                    if (iVar4 < 0) {
                      uVar10 = *(undefined8 *)PTR_DAT_029f4488;
                      if (pcRam0000000002b9c610 == (code *)0x0) {
                        pcRam0000000002b9c610 = (code *)NativeHelper_011df070(&UNK_007bbccc);
                      }
                      uVar5 = (*pcRam0000000002b9c610)(uVar10);
                      if (pcRam0000000002b9c6c8 == (code *)0x0) {
                        pcRam0000000002b9c6c8 = (code *)NativeHelper_011df070(&UNK_007beb34);
                      }
                    /* WARNING: Could not recover jumptable at 0x025f79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000002b9c6c8)(lVar6,uVar5,plVar11);
                      return;
                    }
                    if (pcRam0000000002b9c6c8 == (code *)0x0) {
                      pcRam0000000002b9c6c8 = (code *)NativeHelper_011df070(&UNK_007beb34);
                    }
                    /* WARNING: Could not recover jumptable at 0x025f78b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000002b9c6c8)(lVar6,iVar4,plVar11);
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

