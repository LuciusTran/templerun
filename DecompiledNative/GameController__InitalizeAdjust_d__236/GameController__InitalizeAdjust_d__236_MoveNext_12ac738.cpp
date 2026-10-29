// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013b0738; ELF VA: 0x12b0738; file offset: 0x12ac738
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController__InitalizeAdjust_d__236_MoveNext_12ac738
               (GameController__InitalizeAdjust_d__236 *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  Imangi_Privacy_ImangiPrivacyManager *self_00;
  undefined8 uVar4;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  int iVar5;
  long lVar6;
  GameController *pGVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 auStack_24 [2];
  
  if ((bRam0000000002b94dbd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bcdc8);
    NativeHelper_011df0b4(PTR_DAT_029be798);
    NativeHelper_011df0b4(PTR_DAT_029bcb60);
    NativeHelper_011df0b4(PTR_DAT_029be7a0);
    NativeHelper_011df0b4(PTR_DAT_029be7a8);
    NativeHelper_011df0b4(PTR_DAT_029be7b0);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029b7f88);
    NativeHelper_011df0b4(PTR_DAT_029be7b8);
    NativeHelper_011df0b4(PTR_DAT_029be7c0);
    NativeHelper_011df0b4(PTR_DAT_029bdc98);
    NativeHelper_011df0b4(PTR_DAT_029be7c8);
    bRam0000000002b94dbd = 1;
    runtimeMethod = extraout_x1;
  }
  switch(self->__1__state) {
  case 0:
    self->__1__state = -1;
    puVar1 = PTR_DAT_029bdc98;
    lVar6 = *(long *)PTR_DAT_029bdc98;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar6,runtimeMethod);
      lVar6 = *(long *)puVar1;
      runtimeMethod = extraout_x1_00;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar6,runtimeMethod);
        lVar6 = *(long *)puVar1;
      }
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7a0);
      NativeHelper_018f0c10(lVar8,uVar4,*(undefined8 *)PTR_DAT_029be7b8,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar8;
    }
    pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7c8);
    UnityEngine_WaitUntil_WaitUntil_2512878(pvVar3,lVar8,0);
    self->__2__current = pvVar3;
    self->__1__state = 1;
    return true;
  case 1:
    self->__1__state = -1;
    puVar1 = PTR_DAT_029bdc98;
    lVar6 = *(long *)PTR_DAT_029bdc98;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar6,runtimeMethod);
      lVar6 = *(long *)puVar1;
      runtimeMethod = extraout_x1_01;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar6,runtimeMethod);
        lVar6 = *(long *)puVar1;
      }
      uVar4 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7a0);
      NativeHelper_018f0c10(lVar8,uVar4,*(undefined8 *)PTR_DAT_029be7c0,0);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar8;
    }
    pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7c8);
    UnityEngine_WaitUntil_WaitUntil_2512878(pvVar3,lVar8,0);
    iVar5 = 2;
    self->__2__current = pvVar3;
    break;
  case 2:
    self->__1__state = -1;
    pGVar7 = self->__4__this;
    uVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7a0);
    NativeHelper_018f0c10(uVar4,pGVar7,*(undefined8 *)PTR_DAT_029be7b0,0);
    pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be7c8);
    UnityEngine_WaitUntil_WaitUntil_2512878(pvVar3,uVar4,0);
    self->__2__current = pvVar3;
    iVar5 = 3;
    break;
  case 3:
    self->__1__state = -1;
    if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029ba778,runtimeMethod);
    }
    self_00 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
    if (self_00 == (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar2 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(self_00,(void *)0x0);
    puVar1 = PTR_DAT_029bcb60;
    lVar6 = *(long *)PTR_DAT_029bcb60;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar9 = **(undefined8 **)(lVar6 + 0xb8);
    uVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bcdc8);
    NativeHelper_01694ef4(uVar4,0,*(undefined8 *)PTR_DAT_029be7a8,0);
    Imangi_AdjustSDK_AdjustManager_Initialize_126b86c(uVar9,uVar4,0);
    if (!bVar2) {
      auStack_24[0] = 0;
      NativeHelper_01b29e1c(auStack_24,0,*(undefined8 *)PTR_DAT_029b7f88);
      uVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029be798);
      NativeHelper_012d696c(uVar4,auStack_24[0],0);
      NativeHelper_012cbf24(uVar4,0);
    }
  default:
    return false;
  }
  self->__1__state = iVar5;
  return true;
}

