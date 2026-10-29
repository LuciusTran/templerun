// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void SetButtonState(GameObject inGameObject, bool inEnabled) { }
// Ghidra address: 013e7848; ELF VA: 0x12e7848; file offset: 0x12e3848
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_SetButtonState_12e3848
               (EndGameUI *self,void *inGameObject,bool inEnabled,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *x;
  long lVar3;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94fc1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0800);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fc1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(inGameObject,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if (inGameObject != (void *)0x0) {
    x = UnityEngine_GameObject_GetComponent_1402e6c(inGameObject,*(void **)PTR_DAT_029c0800);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar3);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      return;
    }
    if (x != (void *)0x0) {
      if (pcRam0000000002b9dce0 == (code *)0x0) {
        pcRam0000000002b9dce0 = (code *)NativeHelper_011df070(&UNK_007b0671);
      }
                    /* WARNING: Could not recover jumptable at 0x0264cfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9dce0)(x,inEnabled);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

