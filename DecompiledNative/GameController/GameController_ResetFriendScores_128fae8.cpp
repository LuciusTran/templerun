// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetFriendScores() { }
// Ghidra address: 01393ae8; ELF VA: 0x1293ae8; file offset: 0x128fae8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_ResetFriendScores_128fae8(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *extraout_x1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000002b94cf8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bca00);
    bRam0000000002b94cf8 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029bca00;
  if (0 < self->FriendScoresCount) {
    iVar2 = 0;
    do {
      if ((self->FriendScores == (void *)0x0) ||
         (auVar3 = NativeHelper_01a2f750(self->FriendScores,iVar2,*(undefined8 *)puVar1),
         runtimeMethod = auVar3._8_8_, auVar3._0_8_ == 0)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc(0,runtimeMethod);
      }
      *(undefined1 *)(auVar3._0_8_ + 0x50) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < self->FriendScoresCount);
  }
  return;
}

