// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResetTutorial() { }
// Ghidra address: 01393ce8; ELF VA: 0x1293ce8; file offset: 0x128fce8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_ResetTutorial_128fce8(GameController *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  UIWidget *pUVar12;
  void *pvVar13;
  void *extraout_x1;
  uint uVar14;
  uint uVar15;
  Recovered_Color value;
  Recovered_Color value_00;
  undefined8 uStack_98;
  undefined8 uStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  
  if ((bRam0000000002b94ced & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf58);
    NativeHelper_011df0b4(PTR_DAT_029bdf60);
    NativeHelper_011df0b4(PTR_DAT_029bdf68);
    NativeHelper_011df0b4(PTR_DAT_029bdf70);
    NativeHelper_011df0b4(PTR_DAT_029bdf78);
    NativeHelper_011df0b4(PTR_DAT_029bdf80);
    NativeHelper_011df0b4(PTR_DAT_029bdf88);
    bRam0000000002b94ced = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  pvStack_70 = (void *)0x0;
  if (self->IsTutorialMode != false) {
    GameController_SendTutorialExitedEvent_1286e28(self,runtimeMethod);
  }
  self->TutorialID = 0;
  self->IsTutorialMode = false;
  lVar9 = NativeHelper_012f0488(self->TutorialUIGameObjects,0);
  puVar8 = PTR_DAT_029bdf88;
  puVar7 = PTR_DAT_029bdf78;
  puVar6 = PTR_DAT_029bdf70;
  puVar5 = PTR_DAT_029bdf60;
  puVar4 = PTR_DAT_029bdf58;
  if (lVar9 != 0) {
    NativeHelper_01a30500(&uStack_98,lVar9,*(undefined8 *)PTR_DAT_029bdf80);
    uVar3 = _UNK_007a3ca8;
    uVar2 = _UNK_007a3c84;
    uVar1 = _UNK_007a3bd4;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    pvStack_70 = pvStack_88;
    while (uVar10 = NativeHelper_0182184c(&uStack_80,*(undefined8 *)puVar5), pvVar13 = pvStack_70,
          (uVar10 & 1) != 0) {
      if (pvStack_70 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar11 = UnityEngine_object_get_name_25101a4(pvStack_70,(void *)0x0);
      uVar10 = NativeHelper_01e9b79c(pvVar11,*(undefined8 *)puVar8,0);
      if ((uVar10 & 1) == 0) {
        NativeHelper_02610c54(pvVar13,0,0);
      }
      else {
        NativeHelper_02610c54(pvVar13,1,0);
        self->CurrentTutorialUIGameObject = pvVar13;
      }
      pUVar12 = (UIWidget *)NativeHelper_015070d0(pvVar13,*(undefined8 *)puVar6);
      if (pUVar12 == (UIWidget *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      value.component1 = (float)uVar3;
      value.component0 = (float)uVar2;
      value.component2 = (float)uVar1;
      value.component3 = 0.0;
      UIWidget_set_color_1206e5c(pUVar12,value,(void *)0x0);
      pvVar13 = UnityEngine_GameObject_GetComponentsInChildren_1403a90(pvVar13,*(void **)puVar7);
      if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      uVar14 = *(uint *)((long)pvVar13 + 0x18);
      if (0 < (int)uVar14) {
        uVar15 = 0;
        do {
          if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pUVar12 = *(UIWidget **)((long)pvVar13 + (long)(int)uVar15 * 8 + 0x20);
          if (pUVar12 == (UIWidget *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          UIWidget_set_color_1206e5c(pUVar12,(Recovered_Color)ZEXT416(0),(void *)0x0);
          uVar14 = *(uint *)((long)pvVar13 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar14);
      }
    }
    NativeHelper_01821848(&uStack_80,*(undefined8 *)puVar4);
    if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
       (pUVar12 = (UIWidget *)
                  NativeHelper_015070d0(self->CurrentTutorialUIGameObject,*(undefined8 *)puVar6),
       pUVar12 != (UIWidget *)0x0)) {
      value_00.component1 = (float)uVar3;
      value_00.component0 = (float)uVar2;
      value_00.component2 = (float)uVar1;
      value_00.component3 = 0.0;
      UIWidget_set_color_1206e5c(pUVar12,value_00,(void *)0x0);
      if ((self->CurrentTutorialUIGameObject != (void *)0x0) &&
         (pvVar13 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                              (self->CurrentTutorialUIGameObject,*(void **)puVar7),
         pvVar13 != (void *)0x0)) {
        uVar14 = *(uint *)((long)pvVar13 + 0x18);
        if (0 < (int)uVar14) {
          uVar15 = 0;
          do {
            if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2e4();
            }
            pUVar12 = *(UIWidget **)((long)pvVar13 + (long)(int)uVar15 * 8 + 0x20);
            if (pUVar12 == (UIWidget *)0x0) goto LAB_01393fc8;
            UIWidget_set_color_1206e5c(pUVar12,(Recovered_Color)ZEXT416(0),(void *)0x0);
            uVar14 = *(uint *)((long)pvVar13 + 0x18);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar14);
        }
        self->TutorialDeathCount = 0;
        return;
      }
    }
  }
LAB_01393fc8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

