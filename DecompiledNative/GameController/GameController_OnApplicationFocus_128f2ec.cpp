// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnApplicationFocus(bool focus) { }
// Ghidra address: 013932ec; ELF VA: 0x12932ec; file offset: 0x128f2ec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_OnApplicationFocus_128f2ec(GameController *self,bool focus,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  PauseMenu *pPVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  RecordManager *self_00;
  
  if ((bRam0000000002b94ce7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029bdf08);
    bRam0000000002b94ce7 = 1;
  }
  if (((focus) || (self->IsGameStarted == false)) || (self->IsGameOver != false)) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_029bdef8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  SavedGame_SaveGame_13200a0(false,*(void **)PTR_DAT_029bdf08,0x362,(void *)0x0);
  puVar1 = PTR_DAT_029b7f98;
  pPVar3 = self->PauseGameGUI;
  if (pPVar3 != (PauseMenu *)0x0) {
    if ((bRam0000000002b94f9a & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
      bRam0000000002b94f9a = 1;
    }
    (**(code **)(*(long *)pPVar3 + 0x1a8))(pPVar3,0,*(undefined8 *)(*(long *)pPVar3 + 0x1b0));
    pvVar6 = *(void **)&pPVar3->field_0x30;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    if (bVar2) {
      lVar4 = *(long *)&pPVar3->field_0x30;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((bRam0000000002b95097 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
        bRam0000000002b95097 = 1;
      }
      lVar4 = NativeHelper_0260e1e4(lVar4,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar5);
        lVar5 = *(long *)puVar1;
      }
      self_00 = (RecordManager *)**(undefined8 **)(lVar5 + 0xb8);
      pvVar6 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
      if (pvVar6 != (void *)0x0) {
        inPlayerID = PlayerManager_GetActivePlayer_12ccc8c(pvVar6,(void *)0x0);
        if (self_00 != (RecordManager *)0x0) {
          bVar2 = RecordManager_GetNoAds_12b479c(self_00,inPlayerID,(void *)0x0);
          if (lVar4 != 0) {
            if (pcRam0000000002b9cda0 == (code *)0x0) {
              pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
            }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000002b9cda0)(lVar4,~bVar2 & 1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

