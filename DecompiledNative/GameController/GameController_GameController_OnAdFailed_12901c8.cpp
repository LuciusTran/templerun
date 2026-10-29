// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnAdFailed(AdService inService, AdType inAdType, string inAdSpaceName, string inError) { }
// Ghidra address: 013941c8; ELF VA: 0x12941c8; file offset: 0x12901c8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnAdFailed_12901c8
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *inError,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *paramList;
  long lVar7;
  void *runtimeMethod_00;
  void *format;
  void *runtimeMethod_01;
  uint uVar8;
  
  if ((bRam0000000002b94cf0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bdfa8);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    NativeHelper_011df0b4(PTR_DAT_029bdfb0);
    bRam0000000002b94cf0 = 1;
  }
  if ((int)inAdType != 0) {
    return;
  }
  pvVar6 = TRAnalyticsHelper_SanitizeEventAttributeLength_12b997c(inError,(void *)0x0);
  runtimeMethod_01 = (void *)0x0;
  TRAnalyticsHelper_LogVideoAd_12b949c
            ((void *)((ulong)inService & 0xffffffff),*(void **)PTR_DAT_029bdfb0,
             *(void **)PTR_DAT_029b9680,pvVar6,(void *)0x0);
  self->IsShowingSaveMeVideo = false;
  self->ClosedSaveMeVideo = true;
  self->WatchedSavedMeVideo = false;
  GameController_UnhookAdEvents_12903b0(self,runtimeMethod_00);
  self->SkippedSaveMeVideo = true;
  self->SaveMePromptTimedOut = false;
  self->ClosedSaveMeVideo = false;
  self->WatchedSavedMeVideo = false;
  if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) != (AudioManager *)0x0) {
    AudioManager_StartGameMusic_12bb130
              ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x0);
    UIInputBlocking_EnableInput_1300bfc((void *)0x0);
    paramList = (long *)NativeHelper_011df12c(*(undefined8 *)PTR_DAT_029b8078,2);
    if (paramList != (long *)0x0) {
      if ((inAdSpaceName != (void *)0x0) &&
         (lVar7 = NativeHelper_011df1c0(inAdSpaceName,*(undefined8 *)(*paramList + 0x40)),
         lVar7 == 0)) {
LAB_013943a4:
        uVar5 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar5,0);
      }
      uVar8 = *(uint *)(paramList + 3);
      if (uVar8 != 0) {
        paramList[4] = (long)inAdSpaceName;
        if (inError != (void *)0x0) {
          lVar7 = NativeHelper_011df1c0(inError,*(undefined8 *)(*paramList + 0x40));
          if (lVar7 == 0) goto LAB_013943a4;
          uVar8 = *(uint *)(paramList + 3);
        }
        if (1 < uVar8) {
          paramList[5] = (long)inError;
          if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          puVar2 = PTR_DAT_029b9638;
          pvVar6 = *(void **)PTR_DAT_029bdc20;
          format = *(void **)PTR_DAT_029bdfa8;
          if ((bRam0000000002b9472c & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029b9638,format,paramList,0);
            NativeHelper_011df0b4(PTR_DAT_029ba678);
            bRam0000000002b9472c = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          if (cRam0000000002b94817 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b9638);
            cRam0000000002b94817 = '\x01';
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar7 = *(long *)puVar2;
          }
          puVar2 = PTR_DAT_029ba678;
          if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x10) == '\0') {
            return;
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          pvVar6 = Imangi_Utilities_ImangiLog_GetOSString_121f50c
                             (pvVar6,*(void **)puVar2,format,paramList,runtimeMethod_01);
          puVar4 = PTR_DAT_029baa58;
          puVar3 = PTR_DAT_029b9638;
          puVar2 = PTR_DAT_029b7f68;
          if ((bRam0000000002b9471a & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029b7f68);
            NativeHelper_011df0b4(PTR_DAT_029baa58);
            NativeHelper_011df0b4(PTR_DAT_029b9638);
            bRam0000000002b9471a = 1;
          }
          lVar7 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
          NativeHelper_01694ef4(lVar7,0,*(undefined8 *)puVar4,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          if (pvVar6 != (void *)0x0) {
            iVar1 = *(int *)((long)pvVar6 + 0x10);
            while (0x3ff < iVar1) {
              uVar5 = NativeHelper_01e9d468(pvVar6,0,0x3ff,0);
              if (lVar7 == 0) goto code_r0x01322758;
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),uVar5,*(undefined8 *)(lVar7 + 0x28));
              pvVar6 = (void *)NativeHelper_01e9f644(pvVar6,0x3ff,0);
              if (pvVar6 == (void *)0x0) goto code_r0x01322758;
              iVar1 = *(int *)((long)pvVar6 + 0x10);
            }
            if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01322754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),pvVar6,*(undefined8 *)(lVar7 + 0x28));
              return;
            }
          }
code_r0x01322758:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

