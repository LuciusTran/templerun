// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 013fb944; ELF VA: 0x12fb944; file offset: 0x12f7944
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PermaWingButton_Update_12f7944(PermaWingButton *self,void *runtimeMethod)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar5._8_8_ = runtimeMethod;
  auVar5._0_8_ = self;
  if ((bRam0000000002b9504e & 1) == 0) {
    auVar5 = NativeHelper_011df0b4(PTR_DAT_029c0b90);
    bRam0000000002b9504e = 1;
  }
  if (self->TweenStarted == false) {
    if (self->Controller == (GameController *)0x0) goto LAB_013fba34;
    if (self->Controller->IsIntroScene != false) {
      return;
    }
    self->TweenStarted = true;
    puVar2 = PTR_DAT_029c0b90;
    auVar7 = NativeHelper_014d0e0c(self,*(undefined8 *)PTR_DAT_029c0b90);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar7._8_8_;
    auVar5 = auVar6 << 0x40;
    if (auVar7._0_8_ == (UITweener *)0x0) goto LAB_013fba34;
    UITweener_Reset_120ae04(auVar7._0_8_,(void *)0x0);
    auVar6 = NativeHelper_014d0e0c(self,*(undefined8 *)puVar2);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar6._8_8_;
    auVar5 = auVar7 << 0x40;
    if (auVar6._0_8_ == (UITweener *)0x0) goto LAB_013fba34;
    UITweener_Play_120ada4(auVar6._0_8_,true,(void *)0x0);
    fVar4 = 5.0;
    self->TimeTillDisable = 5.0;
  }
  else {
    fVar4 = self->TimeTillDisable;
  }
  fVar3 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
  self->TimeTillDisable = fVar4 - fVar3;
  if (0.0 < fVar4 - fVar3) {
    return;
  }
  auVar6 = NativeHelper_0260e1e4(self,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar6._8_8_;
  auVar5 = auVar1 << 0x40;
  if (auVar6._0_8_ != 0) {
    if (pcRam0000000002b9cda0 == (code *)0x0) {
      pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
    }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9cda0)(auVar6._0_8_,0);
    return;
  }
LAB_013fba34:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(auVar5._0_8_,auVar5._8_8_);
}

