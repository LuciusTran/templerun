// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Start() { }
// Ghidra address: 013f9f80; ELF VA: 0x12f9f80; file offset: 0x12f5f80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PauseMenu_Start_12f5f80(PauseMenu *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int playerId;
  ulong uVar4;
  RecordManager_cPlayerRecord *pRVar5;
  undefined8 uVar6;
  void *runtimeMethod_00;
  void *pvVar7;
  RecordManager *self_00;
  UILabel *pUVar8;
  float fVar9;
  float fVar10;
  Recovered_Vector3 RVar11;
  Recovered_Vector3 value;
  
  puVar2 = PTR_DAT_029c0978;
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b95042 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c0978);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    NativeHelper_011df0b4(PTR_DAT_029c0830);
    bRam0000000002b95042 = 1;
  }
  BasePanel_Start_12df654((BasePanel *)self,(void *)0x0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
  pvVar7 = self->DebugButton;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar3) {
    pvVar7 = self->DebugButton;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    NativeHelper_02614ce0(pvVar7,0);
  }
  if (self->Header != (void *)0x0) {
    fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
    fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
    pvVar7 = (void *)NativeHelper_02610b98(self->Header,0);
    if (pvVar7 != (void *)0x0) {
      RVar11 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
      if ((self->Header != (void *)0x0) &&
         (pvVar7 = (void *)NativeHelper_02610b98(self->Header,0), pvVar7 != (void *)0x0)) {
        fVar9 = fVar9 - fVar10;
        RVar11.component1 = fVar9 + RVar11.component1;
        UnityEngine_Transform_set_localPosition_2515ec4(pvVar7,RVar11,(void *)0x0);
        if ((self->Content != (void *)0x0) &&
           (pvVar7 = (void *)NativeHelper_02610b98(self->Content,0), pvVar7 != (void *)0x0)) {
          RVar11 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
          value.component2 = RVar11.component2;
          value.component0 = RVar11.component0;
          if ((self->Content != (void *)0x0) &&
             (pvVar7 = (void *)NativeHelper_02610b98(self->Content,0), pvVar7 != (void *)0x0)) {
            value.component1 = fVar9 * 0.5 + RVar11.component1;
            UnityEngine_Transform_set_localPosition_2515ec4(pvVar7,value,(void *)0x0);
            if ((self->MainMenuButton != (void *)0x0) &&
               (pvVar7 = (void *)NativeHelper_02610b98(self->MainMenuButton,0),
               pvVar7 != (void *)0x0)) {
              RVar11 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
              pvVar7 = self->ResumeButton;
              (self->menuButtonPos).component0 = RVar11.component0;
              (self->menuButtonPos).component1 = RVar11.component1;
              (self->menuButtonPos).component2 = RVar11.component2;
              if (pvVar7 != (void *)0x0) {
                pvVar7 = (void *)NativeHelper_02610b98(pvVar7,0);
                if (pvVar7 != (void *)0x0) {
                  RVar11 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
                  pvVar7 = self->NewGameButton;
                  (self->resumeButtonPos).component0 = RVar11.component0;
                  (self->resumeButtonPos).component1 = RVar11.component1;
                  (self->resumeButtonPos).component2 = RVar11.component2;
                  if ((pvVar7 != (void *)0x0) &&
                     (pvVar7 = (void *)NativeHelper_02610b98(pvVar7,0), pvVar7 != (void *)0x0)) {
                    RVar11 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
                    (self->newButtonPos).component0 = RVar11.component0;
                    (self->newButtonPos).component1 = RVar11.component1;
                    (self->newButtonPos).component2 = RVar11.component2;
                    PauseMenu_Setup_12f6294(self,runtimeMethod_00);
                    if (self->PlayerManager != (void *)0x0) {
                      self_00 = self->RecordManager;
                      playerId = PlayerManager_GetActivePlayer_12ccc8c
                                           (self->PlayerManager,(void *)0x0);
                      if (self_00 != (RecordManager *)0x0) {
                        pRVar5 = RecordManager_FindOrCreatePlayerRecord_12b2aac
                                           (self_00,playerId,(void *)0x0);
                        if (pRVar5 == (RecordManager_cPlayerRecord *)0x0) {
                          return;
                        }
                        pUVar8 = self->lifeTimeConis;
                        pvVar7 = (void *)NativeHelper_01ffa318(&pRVar5->lifetimeCoins,0);
                        puVar1 = PTR_DAT_029c0830;
                        if (pUVar8 != (UILabel *)0x0) {
                          UILabel_set_text_129fea0(pUVar8,pvVar7,(void *)0x0);
                          pUVar8 = self->lifeTimeDistance;
                          pvVar7 = Strings_Txt_131380c(*(void **)puVar1,false,(void *)0x0);
                          uVar6 = NativeHelper_01ffa318(&pRVar5->lifetimeDistance,0);
                          pvVar7 = (void *)NativeHelper_01e9390c(pvVar7,uVar6,0);
                          if (pUVar8 != (UILabel *)0x0) {
                            UILabel_set_text_129fea0(pUVar8,pvVar7,(void *)0x0);
                            pUVar8 = self->lifeTimeRuns;
                            pvVar7 = (void *)NativeHelper_01ffa318(&pRVar5->lifetimePlays,0);
                            if (pUVar8 != (UILabel *)0x0) {
                              if ((pvVar7 != (void *)0x0) &&
                                 (uVar4 = NativeHelper_01e9b7a0(pUVar8->mText,pvVar7,0),
                                 (uVar4 & 1) != 0)) {
                                pUVar8->mText = pvVar7;
                                pUVar8->field_0x58 = 1;
                                pUVar8->mShouldBeProcessed = true;
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
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

