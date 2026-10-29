// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 013fba38; ELF VA: 0x12fba38; file offset: 0x12f7a38
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PermaWingButton_OnEnable_12f7a38(PermaWingButton *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  UITweener *self_00;
  UISprite *self_01;
  long lVar3;
  RecordManager *self_02;
  Recovered_Color value;
  
  puVar1 = PTR_DAT_029c0b98;
  if ((bRam0000000002b9504f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0b98);
    NativeHelper_011df0b4(PTR_DAT_029c0ba0);
    bRam0000000002b9504f = 1;
  }
  self_00 = UnityEngine_Component_GetComponentInChildren_13cd02c(self,true,*(void **)puVar1);
  puVar1 = PTR_DAT_029c0ba0;
  if (self_00 != (UITweener *)0x0) {
    UITweener_RealReset_120ae30(self_00,(void *)0x0);
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
        self_02 = self->RecordManager;
        iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
        if (self_02 != (RecordManager *)0x0) {
          iVar2 = RecordManager_GetPlayerLevelForUpgradeType_12b2f44
                            (self_02,iVar2,(void *)0x3,(void *)0x0);
          self->CurrentLevel = iVar2;
          if (self->Controller != (GameController *)0x0) {
            if (self->Controller->IsTutorialMode == false) {
              if (iVar2 != 0) {
                if (self->Sprite != (UISprite *)0x0) {
                  UIWidget_set_color_1206e5c
                            ((UIWidget *)self->Sprite,(Recovered_Color)ZEXT816(0),(void *)0x0);
                  lVar3 = NativeHelper_0260e1e4(self,0);
                  if (lVar3 != 0) {
                    NativeHelper_02610c54(lVar3,1,0);
                    self->TweenStarted = false;
                    return;
                  }
                }
                goto LAB_013fbb98;
              }
            }
            else {
              self->CurrentLevel = 0;
            }
            lVar3 = NativeHelper_0260e1e4(self,0);
            if (lVar3 != 0) {
              if (pcRam0000000002b9cda0 == (code *)0x0) {
                pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
              }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000002b9cda0)(lVar3,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_013fbb98:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

