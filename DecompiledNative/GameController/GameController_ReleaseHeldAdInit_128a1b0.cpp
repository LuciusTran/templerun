// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ReleaseHeldAdInit(string inTrigger) { }
// Ghidra address: 0138e1b0; ELF VA: 0x128e1b0; file offset: 0x128a1b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_ReleaseHeldAdInit_128a1b0
               (GameController *self,void *inTrigger,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *paramList;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_029b8078;
  if ((bRam0000000002b94cc9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029bdc38);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bdd20);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    bRam0000000002b94cc9 = 1;
  }
  paramList = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,2);
  if (paramList == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((inTrigger != (void *)0x0) &&
     (lVar4 = NativeHelper_011df1c0(inTrigger,*(undefined8 *)(*paramList + 0x40)), lVar4 == 0)) {
LAB_0138e320:
    uVar7 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar7,0);
  }
  puVar1 = PTR_DAT_029b9758;
  if ((int)paramList[3] != 0) {
    paramList[4] = (long)inTrigger;
    puVar2 = PTR_DAT_029bdc38;
    pvVar5 = *(void **)puVar1;
    if (*(int *)((long)pvVar5 + 0xe0) == 0) {
      pvVar5 = (void *)NativeHelper_011df1bc();
    }
    pvVar5 = GameController_CurrentRegulationType_1288fd0(pvVar5);
    uStack_24 = SUB84(pvVar5,0);
    lVar4 = NativeHelper_011df1c4(*(undefined8 *)puVar2,&uStack_24);
    if ((lVar4 != 0) &&
       (lVar6 = NativeHelper_011df1c0(lVar4,*(undefined8 *)(*paramList + 0x40)), lVar6 == 0))
    goto LAB_0138e320;
    puVar1 = PTR_DAT_029b9638;
    if (1 < *(uint *)(paramList + 3)) {
      paramList[5] = lVar4;
      puVar3 = PTR_DAT_029bdd20;
      puVar2 = PTR_DAT_029bdc20;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      Imangi_Utilities_ImangiLog_ForceLog_121fae8
                (*(void **)puVar2,*(void **)puVar3,paramList,(void *)0x0);
      GameController_PostGamePrivacyFlow_128953c(self,(void *)0x0,paramList);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

