// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private FriendMarker GetUnusedFriendMarker() { }
// Ghidra address: 0139abe8; ELF VA: 0x129abe8; file offset: 0x1296be8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


FriendMarker *
GameController_GetUnusedFriendMarker_1296be8(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  FriendMarker *pFVar2;
  void *extraout_x1;
  int iVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000002b94cf9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be148);
    bRam0000000002b94cf9 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029be148;
  if (0 < self->FriendScoresCount) {
    iVar3 = 0;
    do {
      if (self->FriendMarkers == (void *)0x0) {
LAB_0139ac6c:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc(0,runtimeMethod);
      }
      auVar4 = NativeHelper_01a2f750(self->FriendMarkers,iVar3,*(undefined8 *)puVar1);
      runtimeMethod = auVar4._8_8_;
      pFVar2 = auVar4._0_8_;
      if (pFVar2 == (FriendMarker *)0x0) goto LAB_0139ac6c;
      if (pFVar2->_Passed == false) {
        return pFVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < self->FriendScoresCount);
  }
  return (FriendMarker *)0x0;
}

