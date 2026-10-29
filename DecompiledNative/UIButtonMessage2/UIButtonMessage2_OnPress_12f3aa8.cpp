// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnPress(bool isPressed) { }
// Ghidra address: 013f7aa8; ELF VA: 0x12f7aa8; file offset: 0x12f3aa8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIButtonMessage2_OnPress_12f3aa8(UIButtonMessage2 *self,bool isPressed,void *runtimeMethod)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *x;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  
  if (isPressed) {
    if (*(int *)&self->field_0x38 != 3) {
      return;
    }
  }
  else if (*(int *)&self->field_0x38 != 4) {
    return;
  }
  if ((bRam0000000002b9502a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b99d0);
    NativeHelper_011df0b4(PTR_DAT_029c0e78);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9502a = 1;
  }
  bVar4 = UnityEngine_Behaviour_get_enabled_25096f0(self,(void *)0x0);
  if (!bVar4) {
    return;
  }
  lVar5 = NativeHelper_0260e1e4(self,0);
  if (lVar5 == 0) goto code_r0x013f7aa0;
  uVar6 = NativeHelper_02610cd4(lVar5,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = NativeHelper_01e9be28(self->functionName,0);
  puVar3 = PTR_DAT_029b7f98;
  if ((uVar6 & 1) != 0) {
    return;
  }
  pvVar8 = self->target;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pvVar8,(void *)0x0,(void *)0x0);
  if (bVar4) {
    pvVar8 = (void *)NativeHelper_0260e1e4(self,0);
    self->target = pvVar8;
  }
  uVar6 = NativeHelper_01e9be28(self->EnableComponent,0);
  if ((uVar6 & 1) == 0) {
    if (self->target == (void *)0x0) goto code_r0x013f7aa0;
    x = UnityEngine_GameObject_GetComponent_250c7d8(self->target,self->EnableComponent,(void *)0x0);
    if (x == (long *)0x0) {
code_r0x013f7998:
      x = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_029c0e78 + 0x130);
      if (*(byte *)(*x + 0x130) < bVar2) goto code_r0x013f7998;
      if (*(long *)(*(long *)(*x + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_029c0e78) {
        x = (long *)0x0;
      }
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (x == (long *)0x0) goto code_r0x013f7aa0;
      UnityEngine_Behaviour_set_enabled_250972c(x,true,(void *)0x0);
    }
  }
  if (self->target != (void *)0x0) {
    NativeHelper_02610c54(self->target,1,0);
    pvVar8 = self->target;
    if (self->includeChildren == false) {
      if (pvVar8 != (void *)0x0) {
        pvVar7 = self->functionName;
        if (pcRam0000000002b9cdb8 == (code *)0x0) {
          pcRam0000000002b9cdb8 = (code *)NativeHelper_011df070(&UNK_007a5d0c,pvVar7,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x026109fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9cdb8)(pvVar8,pvVar7,0,1);
        return;
      }
    }
    else if ((pvVar8 != (void *)0x0) &&
            (pvVar8 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                                (pvVar8,*(void **)PTR_DAT_029b99d0), pvVar8 != (void *)0x0)) {
      uVar1 = *(uint *)((long)pvVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          lVar5 = *(long *)((long)pvVar8 + (long)(int)uVar9 * 8 + 0x20);
          if ((lVar5 == 0) ||
             (pvVar7 = (void *)NativeHelper_0260e1e4(lVar5,0), pvVar7 == (void *)0x0))
          goto code_r0x013f7aa0;
          UnityEngine_GameObject_SendMessage_250c9a8
                    (pvVar7,self->functionName,(void *)0x1,(void *)0x0);
          uVar1 = *(uint *)((long)pvVar8 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      return;
    }
  }
code_r0x013f7aa0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

