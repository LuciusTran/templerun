// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RetrievingScoresFailed(string inError) { }
// Ghidra address: 0138c5bc; ELF VA: 0x128c5bc; file offset: 0x12885bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_RetrievingScoresFailed_12885bc
               (GameController *self,void *inError,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *paramList;
  long lVar9;
  void *pvVar10;
  void *format;
  void *in_x4;
  
  puVar6 = PTR_DAT_029bdbc8;
  puVar5 = PTR_DAT_029bc758;
  puVar2 = PTR_DAT_029bc6b8;
  if ((bRam0000000002b94cbb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc758);
    NativeHelper_011df0b4(PTR_DAT_029b7f68);
    NativeHelper_011df0b4(PTR_DAT_029bdbc8);
    NativeHelper_011df0b4(PTR_DAT_029bdbd0);
    NativeHelper_011df0b4(PTR_DAT_029bc6b8);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b8078);
    NativeHelper_011df0b4(PTR_DAT_029bdc18);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    bRam0000000002b94cbb = 1;
  }
  puVar7 = PTR_DAT_029bdbd0;
  puVar4 = PTR_DAT_029b8078;
  puVar3 = PTR_DAT_029b7f68;
  uVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar5);
  NativeHelper_01694ef4(uVar8,self,*(undefined8 *)puVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  NativeHelper_0136122c(uVar8,0);
  uVar8 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
  NativeHelper_01694ef4(uVar8,self,*(undefined8 *)puVar7,0);
  NativeHelper_01361414(uVar8,0);
  paramList = (long *)NativeHelper_011df12c(*(undefined8 *)puVar4,1);
  if (paramList == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((inError != (void *)0x0) &&
     (lVar9 = NativeHelper_011df1c0(inError,*(undefined8 *)(*paramList + 0x40)), lVar9 == 0)) {
    uVar8 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar8,0);
  }
  puVar2 = PTR_DAT_029b9638;
  if ((int)paramList[3] == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
  paramList[4] = (long)inError;
  puVar6 = PTR_DAT_029bdc20;
  puVar5 = PTR_DAT_029bdc18;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029b9638;
  pvVar10 = *(void **)puVar6;
  format = *(void **)puVar5;
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
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar9 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_029ba678;
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x10) == '\0') {
    return;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar10 = Imangi_Utilities_ImangiLog_GetOSString_121f50c
                      (pvVar10,*(void **)puVar2,format,paramList,in_x4);
  puVar6 = PTR_DAT_029baa58;
  puVar5 = PTR_DAT_029b9638;
  puVar2 = PTR_DAT_029b7f68;
  if ((bRam0000000002b9471a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f68);
    NativeHelper_011df0b4(PTR_DAT_029baa58);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    bRam0000000002b9471a = 1;
  }
  lVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01694ef4(lVar9,0,*(undefined8 *)puVar6,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (pvVar10 != (void *)0x0) {
    iVar1 = *(int *)((long)pvVar10 + 0x10);
    while (0x3ff < iVar1) {
      uVar8 = NativeHelper_01e9d468(pvVar10,0,0x3ff,0);
      if (lVar9 == 0) goto code_r0x01322758;
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar8,*(undefined8 *)(lVar9 + 0x28))
      ;
      pvVar10 = (void *)NativeHelper_01e9f644(pvVar10,0x3ff,0);
      if (pvVar10 == (void *)0x0) goto code_r0x01322758;
      iVar1 = *(int *)((long)pvVar10 + 0x10);
    }
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01322754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),pvVar10,*(undefined8 *)(lVar9 + 0x28));
      return;
    }
  }
code_r0x01322758:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

