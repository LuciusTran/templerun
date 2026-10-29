// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 013f13d8; ELF VA: 0x12f13d8; file offset: 0x12ed3d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HeadStartButton_OnEnable_12ed3d8(HeadStartButton *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  UITweener *self_00;
  UISprite *self_01;
  long lVar4;
  undefined4 uVar5;
  RecordManager *pRVar6;
  Recovered_Color value;
  
  puVar1 = PTR_DAT_029c0b98;
  if ((bRam0000000002b94ffb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0b98);
    NativeHelper_011df0b4(PTR_DAT_029c0ba0);
    bRam0000000002b94ffb = 1;
  }
  self_00 = UnityEngine_Component_GetComponentInChildren_13cd02c(self,true,*(void **)puVar1);
  if ((self_00 != (UITweener *)0x0) &&
     (UITweener_RealReset_120ae30(self_00,(void *)0x0), puVar1 = PTR_DAT_029c0ba0,
     self != (HeadStartButton *)0x0)) {
    uVar5 = 1;
    if (self->MegaHeadStart != false) {
      uVar5 = 2;
    }
    *(undefined4 *)&self->Type = uVar5;
    self_01 = UnityEngine_Component_GetComponentInChildren_13cd02c(self,true,*(void **)puVar1);
    self->Sprite = self_01;
    if (self_01 != (UISprite *)0x0) {
      value.component2 = 1.0;
      value.component3 = 1.0;
      value.component0 = 1.0;
      value.component1 = 1.0;
      UIWidget_set_color_1206e5c((UIWidget *)self_01,value,(void *)0x0);
      UnityEngine_Behaviour_set_enabled_250972c(self_00,false,(void *)0x0);
      if (self->PlayerManager != (void *)0x0) {
        pRVar6 = self->RecordManager;
        iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
        if (pRVar6 != (RecordManager *)0x0) {
          iVar2 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                            (pRVar6,iVar2,(void *)0x1,(void *)0x0);
          if (self->PlayerManager != (void *)0x0) {
            pRVar6 = self->RecordManager;
            iVar3 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
            if (pRVar6 != (RecordManager *)0x0) {
              iVar3 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                                (pRVar6,iVar3,(void *)0x2,(void *)0x0);
              if (*(int *)&self->Type != 2) {
                iVar3 = iVar2;
              }
              self->CurrentLevel = iVar3;
              if (self->Controller != (GameController *)0x0) {
                if (self->Controller->IsTutorialMode == false) {
                  if (iVar3 != 0) {
                    if (self->Sprite != (UISprite *)0x0) {
                      UIWidget_set_color_1206e5c
                                ((UIWidget *)self->Sprite,(Recovered_Color)ZEXT816(0),(void *)0x0);
                      lVar4 = NativeHelper_0260e1e4(self,0);
                      if (lVar4 != 0) {
                        NativeHelper_02610c54(lVar4,1,0);
                        self->TweenStarted = false;
                        return;
                      }
                    }
                    goto LAB_013f1590;
                  }
                }
                else {
                  self->CurrentLevel = 0;
                }
                lVar4 = NativeHelper_0260e1e4(self,0);
                if (lVar4 != 0) {
                  if (pcRam0000000002b9cda0 == (code *)0x0) {
                    pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
                  }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000002b9cda0)(lVar4,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013f1590:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

