// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void FinishGivingRewardForAd() { }
// Ghidra address: 013ea724; ELF VA: 0x12ea724; file offset: 0x12e6724
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EndGameUI_FinishGivingRewardForAd_12e6724(EndGameUI *self,void *runtimeMethod)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UILabel *x;
  
  puVar3 = PTR_DAT_029b7f98;
  uVar2 = _UNK_007a3cf8;
  x = self->CoinsLabel;
  iVar1 = self->_RewardAmount;
  if ((bRam0000000002b951ed & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,iVar1,iVar1 << 1,0);
    bRam0000000002b951ed = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar4) {
    lVar5 = NativeHelper_0142a9fc(uVar2,x,iVar1,iVar1 << 1);
    if (x == (UILabel *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if (lVar5 == 0) {
      NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
      uVar7 = NativeHelper_011df2d0();
      uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5930);
      NativeHelper_01ffed14(uVar7,uVar8,0);
    }
    else {
      if (pcRam0000000002b9ce48 == (code *)0x0) {
        pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
      }
      uVar6 = (*pcRam0000000002b9ce48)(x);
      if ((uVar6 & 1) != 0) {
        if (pcRam0000000002b9ce58 == (code *)0x0) {
          pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
        }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9ce58)(x,lVar5);
        return;
      }
      NativeHelper_011df0c8(PTR_DAT_029baea0);
      uVar7 = NativeHelper_011df2d0();
      uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5920);
      NativeHelper_01f80968(uVar7,uVar8,0);
    }
    uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,uVar8);
  }
  return;
}

