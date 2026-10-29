// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnClick() { }
// Ghidra address: 012f4d6c; ELF VA: 0x11f4d6c; file offset: 0x11f0d6c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIButtonMessage_OnClick_11f0d6c(UIButtonMessage *self,void *runtimeMethod)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  
  bVar1 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if ((!bVar1) || (*(int *)&self->field_0x30 != 0)) {
    return;
  }
  if ((bRam0000000002b9454c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b99d0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9454c = 1;
  }
  uVar2 = NativeHelper_01e9be28(self->functionName,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  pvVar6 = self->target;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar1 = UnityEngine_object_op_Equality_250d534(pvVar6,(void *)0x0,(void *)0x0);
  if (bVar1) {
    pvVar6 = (void *)NativeHelper_0260e1e4(self,0);
    self->target = pvVar6;
  }
  else {
    pvVar6 = self->target;
  }
  if (self->includeChildren == false) {
    pvVar7 = self->functionName;
    uVar4 = NativeHelper_0260e1e4(self,0);
    if (pvVar6 != (void *)0x0) {
      if (pcRam0000000002b9cdb8 == (code *)0x0) {
        pcRam0000000002b9cdb8 = (code *)NativeHelper_011df070(&UNK_007a5d0c,pvVar7,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x02610a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9cdb8)(pvVar6,pvVar7,uVar4,1);
      return;
    }
  }
  else if ((pvVar6 != (void *)0x0) &&
          (pvVar6 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                              (pvVar6,*(void **)PTR_DAT_029b99d0), pvVar6 != (void *)0x0)) {
    iVar5 = (int)*(undefined8 *)((long)pvVar6 + 0x18);
    if (iVar5 < 1) {
      return;
    }
    if (iVar5 != 0) {
      uVar8 = 0;
      do {
        lVar3 = *(long *)((long)pvVar6 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar3 == 0) goto code_r0x012f4d18;
        lVar3 = NativeHelper_0260e1e4(lVar3,0);
        pvVar7 = self->functionName;
        uVar4 = NativeHelper_0260e1e4(self,0);
        if (lVar3 == 0) goto code_r0x012f4d18;
        NativeHelper_02610a00(lVar3,pvVar7,uVar4,1,0);
        if (iVar5 - 1U == uVar8) {
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((long)pvVar6 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
code_r0x012f4d18:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

