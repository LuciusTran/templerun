// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameController() { }
// Ghidra address: 013a0a08; ELF VA: 0x12a0a08; file offset: 0x129ca08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_GameController_129ca08(GameController *self,void *runtimeMethod)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *extraout_x1;
  
  puVar5 = PTR_DAT_029be420;
  puVar7 = PTR_DAT_029be418;
  puVar6 = PTR_DAT_029be410;
  puVar4 = PTR_DAT_029b8708;
  if ((bRam0000000002b94d2c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be428);
    NativeHelper_011df0b4(PTR_DAT_029be430);
    NativeHelper_011df0b4(PTR_DAT_029be418);
    NativeHelper_011df0b4(PTR_DAT_029b8428);
    NativeHelper_011df0b4(PTR_DAT_029be438);
    NativeHelper_011df0b4(PTR_DAT_029be410);
    NativeHelper_011df0b4(PTR_DAT_029be440);
    NativeHelper_011df0b4(PTR_DAT_029b8430);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029be448);
    NativeHelper_011df0b4(PTR_DAT_029be450);
    NativeHelper_011df0b4(PTR_DAT_029be458);
    NativeHelper_011df0b4(PTR_DAT_029be460);
    NativeHelper_011df0b4(PTR_DAT_029be420);
    NativeHelper_011df0b4(PTR_DAT_029be468);
    NativeHelper_011df0b4(PTR_DAT_029be470);
    bRam0000000002b94d2c = 1;
    runtimeMethod = extraout_x1;
  }
  uVar10 = _UNK_007a4128;
  uVar2 = _UNK_007a4120;
  self->UseFriendMarkers = true;
  uVar11 = _UNK_007a4128;
  _UNK_007a4128 = (undefined4)uVar10;
  _UNK_007a412c = SUB84(uVar10,4);
  uVar3 = _UNK_007a412c;
  self->HeadStartBoostDistance = (float)_UNK_007a4128;
  _UNK_007a4128 = uVar11;
  uVar10 = _UNK_007a4120;
  self->HeadStartMegaBoostDistance = (float)uVar3;
  _UNK_007a4120 = (undefined4)uVar2;
  _UNK_007a4124 = SUB84(uVar2,4);
  uVar3 = _UNK_007a4124;
  self->HeadStartStartDistance = (float)_UNK_007a4120;
  _UNK_007a4120 = uVar10;
  self->HeadStartEndDistance = (float)uVar3;
  pvVar12 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar6,runtimeMethod);
  NativeHelper_01a2f248(pvVar12,*(undefined8 *)puVar7);
  self->FriendMarkers = pvVar12;
  self->_CurrentPlayerId = *(void **)puVar5;
  pvVar12 = (void *)NativeHelper_011df12c(*(undefined8 *)puVar4,6);
  if (pvVar12 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar12 + 0x18);
    if ((((uVar1 != 0) &&
         (*(undefined8 *)((long)pvVar12 + 0x20) = *(undefined8 *)PTR_DAT_029be448, uVar1 != 1)) &&
        (*(undefined8 *)((long)pvVar12 + 0x28) = *(undefined8 *)PTR_DAT_029be470, 2 < uVar1)) &&
       (((*(undefined8 *)((long)pvVar12 + 0x30) = *(undefined8 *)PTR_DAT_029be460, uVar1 != 3 &&
         (*(undefined8 *)((long)pvVar12 + 0x38) = *(undefined8 *)PTR_DAT_029be458, 4 < uVar1)) &&
        (*(undefined8 *)((long)pvVar12 + 0x40) = *(undefined8 *)PTR_DAT_029be468,
        puVar7 = PTR_DAT_029be440, puVar6 = PTR_DAT_029be428, puVar4 = PTR_DAT_029b8430, uVar1 != 5)
        ))) {
      *(undefined8 *)((long)pvVar12 + 0x48) = *(undefined8 *)PTR_DAT_029be450;
      self->_LeaderBoardNames = pvVar12;
      self->_IsVideoAvailableFirstCheck = true;
      self->EnemyCount = 8;
      puVar9 = PTR_DAT_029be438;
      puVar8 = PTR_DAT_029be430;
      puVar5 = PTR_DAT_029b8428;
      pvVar12 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar7);
      NativeHelper_01a2f248(pvVar12,*(undefined8 *)puVar6);
      uVar2 = _UNK_007a3510;
      self->Enemies = pvVar12;
      self->EnemyFollowDistance = 7.5;
      uVar10 = _UNK_007a3510;
      _UNK_007a3510 = (undefined4)uVar2;
      _UNK_007a3514 = SUB84(uVar2,4);
      uVar3 = _UNK_007a3514;
      self->EnemySpreadLeftRight = (float)_UNK_007a3510;
      _UNK_007a3510 = uVar10;
      self->EnemySpreadFrontBack = (float)uVar3;
      pvVar12 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
      NativeHelper_01a2f248(pvVar12,*(undefined8 *)puVar5);
      self->AwardedAchievements = pvVar12;
      pvVar12 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar9);
      NativeHelper_01a2f248(pvVar12,*(undefined8 *)puVar8);
      self->TimedCelebrationEntries = pvVar12;
      puVar4 = PTR_DAT_029b7f98;
      if ((bRam0000000002b9cd18 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
        bRam0000000002b9cd18 = 1;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

