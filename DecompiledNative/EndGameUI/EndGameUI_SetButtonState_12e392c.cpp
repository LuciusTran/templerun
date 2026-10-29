// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void SetButtonState(bool inEnabled) { }
// Ghidra address: 013e792c; ELF VA: 0x12e792c; file offset: 0x12e392c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_SetButtonState_12e392c(EndGameUI *self,bool inEnabled,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  EndGameUI *pEVar4;
  EndGameUI *self_00;
  EndGameUI *self_01;
  EndGameUI *self_02;
  EndGameUI *self_03;
  EndGameUI *self_04;
  void *pvVar5;
  void *in_x3;
  
  lVar3 = NativeHelper_0260e1e4(self,0);
  if (lVar3 != 0) {
    pEVar4 = (EndGameUI *)NativeHelper_02610cd4(lVar3,0);
    if (((ulong)pEVar4 & 1) == 0) {
      return;
    }
    EndGameUI_SetButtonState_12e3848(pEVar4,self->MainMenuButton,inEnabled,in_x3);
    EndGameUI_SetButtonState_12e3848(self_00,self->RunAgainButton,inEnabled,in_x3);
    if (*(long *)&self->field_0x30 != 0) {
      pEVar4 = (EndGameUI *)NativeHelper_0260e1e4(*(long *)&self->field_0x30,0);
      EndGameUI_SetButtonState_12e3848(pEVar4,pEVar4,inEnabled,in_x3);
      EndGameUI_SetButtonState_12e3848(self_01,self->StoreButton,inEnabled,in_x3);
      EndGameUI_SetButtonState_12e3848(self_02,self->FreeCoinsButton,inEnabled,in_x3);
      EndGameUI_SetButtonState_12e3848(self_03,self->StatsButton,inEnabled,in_x3);
      EndGameUI_SetButtonState_12e3848(self_04,self->TweetButton,inEnabled,in_x3);
      puVar1 = PTR_DAT_029b7f98;
      pvVar5 = self->GCButton;
      if ((bRam0000000002b94fc1 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029c0800);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94fc1 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        return;
      }
      if (pvVar5 != (void *)0x0) {
        pvVar5 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar5,*(void **)PTR_DAT_029c0800);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar3);
        }
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
        if (!bVar2) {
          return;
        }
        if (pvVar5 != (void *)0x0) {
          if (pcRam0000000002b9dce0 == (code *)0x0) {
            pcRam0000000002b9dce0 = (code *)NativeHelper_011df070(&UNK_007b0671);
          }
                    /* WARNING: Could not recover jumptable at 0x0264cfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000002b9dce0)(pvVar5,inEnabled);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

