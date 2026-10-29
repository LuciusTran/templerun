// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LocalPlayerAuthenticated(ImangiGameCenterPlayer inPlayer) { }
// Ghidra address: 0138bb7c; ELF VA: 0x128bb7c; file offset: 0x1287b7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_LocalPlayerAuthenticated_1287b7c
               (GameController *self,Imangi_GameCenter_ImangiGameCenterPlayer *inPlayer,
               void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  void *runtimeMethod_00;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000002b94cb8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc758);
    NativeHelper_011df0b4(PTR_DAT_029b7f68);
    NativeHelper_011df0b4(PTR_DAT_029bc760);
    NativeHelper_011df0b4(PTR_DAT_029bdbc0);
    NativeHelper_011df0b4(PTR_DAT_029bdbc8);
    NativeHelper_011df0b4(PTR_DAT_029bdbd0);
    NativeHelper_011df0b4(PTR_DAT_029bc6b8);
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    bRam0000000002b94cb8 = 1;
  }
  puVar1 = PTR_DAT_029bc760;
  if (inPlayer != (Imangi_GameCenter_ImangiGameCenterPlayer *)0x0) {
    self->_CurrentPlayerId = inPlayer->PlayerID;
    puVar4 = PTR_DAT_029bdbc0;
    puVar3 = PTR_DAT_029bc6b8;
    puVar2 = PTR_DAT_029bc558;
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01694ef4(uVar9,self,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar5 = PTR_DAT_029bdbd0;
    puVar4 = PTR_DAT_029bdbc8;
    puVar3 = PTR_DAT_029bc758;
    puVar1 = PTR_DAT_029b7f68;
    NativeHelper_013618d8(uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Imangi_GameServices_ImangiGameServicesManager_GetCompletedAchievements_1258c68((void *)0x0);
    self->_CurrentLeaderboardIdx = 0;
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
    NativeHelper_01694ef4(uVar9,self,*(undefined8 *)puVar4,0);
    NativeHelper_0136122c(uVar9,0);
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
    NativeHelper_01694ef4(uVar9,self,*(undefined8 *)puVar4,0);
    NativeHelper_01361138(uVar9,0);
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01694ef4(uVar9,self,*(undefined8 *)puVar5,0);
    NativeHelper_01361414(uVar9,0);
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01694ef4(uVar9,self,*(undefined8 *)puVar5,0);
    NativeHelper_01361320(uVar9,0);
    puVar1 = PTR_DAT_029b8078;
    pvVar11 = self->_LeaderBoardNames;
    if (pvVar11 != (void *)0x0) {
      if (*(uint *)((long)pvVar11 + 0x18) <= (uint)self->_CurrentLeaderboardIdx) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      lVar10 = *(long *)((long)pvVar11 + (long)self->_CurrentLeaderboardIdx * 8 + 0x20);
      pvVar11 = (void *)0x0;
      if ((bRam0000000002b94a0d & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bc558);
        NativeHelper_011df0b4(PTR_DAT_029bc580);
        NativeHelper_011df0b4(PTR_DAT_029b8078);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        NativeHelper_011df0b4(PTR_DAT_029bc590);
        bRam0000000002b94a0d = 1;
      }
      plVar7 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar1,2);
      if (plVar7 == (long *)0x0) {
code_r0x0135ca24:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if ((lVar10 != 0) &&
         (lVar8 = NativeHelper_011df1c0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
code_r0x0135ca28:
        uVar9 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar9,0);
      }
      puVar1 = PTR_DAT_029bc580;
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar10;
        auVar12 = NativeHelper_011df1c4(*(undefined8 *)puVar1,&stack0xffffffffffffffdc);
        uVar9 = auVar12._8_8_;
        lVar8 = auVar12._0_8_;
        if ((lVar8 != 0) &&
           (auVar12 = NativeHelper_011df1c0(lVar8,*(undefined8 *)(*plVar7 + 0x40)),
           uVar9 = auVar12._8_8_, auVar12._0_8_ == 0)) goto code_r0x0135ca28;
        puVar1 = PTR_DAT_029bc558;
        if (1 < *(uint *)(plVar7 + 3)) {
          plVar7[5] = lVar8;
          puVar2 = PTR_DAT_029b7f98;
          auVar12._8_8_ = uVar9;
          auVar12._0_8_ = *(long *)puVar1;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            auVar12 = NativeHelper_011df1bc();
          }
          Imangi_GameServices_ImangiGameServicesManager_ImangiGameServices_LogMessage_1257d90
                    (auVar12._0_8_,auVar12._8_8_,pvVar11);
          plVar7 = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84
                             (runtimeMethod_00);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar2);
          }
          bVar6 = UnityEngine_object_op_Inequality_250c8e4(plVar7,(void *)0x0,(void *)0x0);
          if (bVar6) {
            if (plVar7 == (long *)0x0) goto code_r0x0135ca24;
            (**(code **)(*plVar7 + 0x1f8))(plVar7,lVar10,2,*(undefined8 *)(*plVar7 + 0x200));
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

