// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RetrievedScoresFromGameCenter(List<ImangiGameCenterScore> inScores) { }
// Ghidra address: 0138bf3c; ELF VA: 0x128bf3c; file offset: 0x1287f3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_RetrievedScoresFromGameCenter_1287f3c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int playerId;
  long *plVar8;
  void *runtimeMethod;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  RecordManager_cPlayerRecord *pRVar12;
  void *x;
  TRUserAttributes *pTVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  RecordManager *self;
  undefined1 auVar18 [16];
  
  if ((bRam0000000002b94cba & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc758);
    NativeHelper_011df0b4(PTR_DAT_029b7f68);
    NativeHelper_011df0b4(PTR_DAT_029bdbc8);
    NativeHelper_011df0b4(PTR_DAT_029bdbd0);
    NativeHelper_011df0b4(PTR_DAT_029bdbf0);
    NativeHelper_011df0b4(PTR_DAT_029bc6b8);
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029bdbf8);
    NativeHelper_011df0b4(PTR_DAT_029bdc00);
    NativeHelper_011df0b4(PTR_DAT_029bdc08);
    NativeHelper_011df0b4(PTR_DAT_029bdc10);
    NativeHelper_011df0b4(PTR_DAT_029bc9f8);
    NativeHelper_011df0b4(PTR_DAT_029bca00);
    NativeHelper_011df0b4(PTR_DAT_029bca08);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    bRam0000000002b94cba = 1;
  }
  if (*(int *)(param_1 + 0x200) == 0) {
    lVar9 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bca08);
    NativeHelper_01a2f364(lVar9,param_2,*(undefined8 *)PTR_DAT_029bdc10);
    *(long *)(param_1 + 0x1e8) = lVar9;
    if (lVar9 == 0) goto LAB_0138c5b4;
    lVar15 = *(long *)(param_1 + 0x1d8);
    *(int *)(param_1 + 0x1e0) = *(int *)(lVar9 + 0x18) + -1;
    if (lVar15 == 0) goto LAB_0138c5b4;
    iVar1 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (0 < iVar1) {
      NativeHelper_0201ea34(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
    }
  }
  puVar6 = PTR_DAT_029bdbe8;
  puVar5 = PTR_DAT_029bd9d0;
  puVar4 = PTR_DAT_029bca00;
  puVar3 = PTR_DAT_029b7f98;
  if (param_2 == 0) {
LAB_0138c5b4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 < 1) {
LAB_0138c440:
    iVar1 = *(int *)(param_1 + 0x200) + 1;
    *(int *)(param_1 + 0x200) = iVar1;
    puVar3 = PTR_DAT_029bc758;
    if (*(long *)(param_1 + 0x1f8) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x1f8) + 0x18) <= iVar1) {
        return;
      }
      uVar14 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bc758);
      puVar4 = PTR_DAT_029bdbc8;
      NativeHelper_01694ef4(uVar14,param_1,*(undefined8 *)PTR_DAT_029bdbc8,0);
      if (*(int *)(*(long *)PTR_DAT_029bc6b8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_0136122c(uVar14,0);
      uVar14 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
      NativeHelper_01694ef4(uVar14,param_1,*(undefined8 *)puVar4,0);
      NativeHelper_01361138(uVar14,0);
      puVar3 = PTR_DAT_029b7f68;
      uVar14 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b7f68);
      puVar4 = PTR_DAT_029bdbd0;
      NativeHelper_01694ef4(uVar14,param_1,*(undefined8 *)PTR_DAT_029bdbd0,0);
      NativeHelper_01361414(uVar14,0);
      uVar14 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
      NativeHelper_01694ef4(uVar14,param_1,*(undefined8 *)puVar4,0);
      NativeHelper_01361320(uVar14,0);
      lVar9 = *(long *)(param_1 + 0x1f8);
      if (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x200)) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x200) * 8 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar3 = PTR_DAT_029b8078;
        pvVar11 = (void *)0x0;
        if ((bRam0000000002b94a0d & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bc558);
          NativeHelper_011df0b4(PTR_DAT_029bc580);
          NativeHelper_011df0b4(PTR_DAT_029b8078);
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          NativeHelper_011df0b4(PTR_DAT_029bc590);
          bRam0000000002b94a0d = 1;
        }
        plVar8 = (long *)NativeHelper_011df12c(*(undefined8 *)puVar3,2);
        if (plVar8 == (long *)0x0) {
code_r0x0135ca24:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if ((lVar9 != 0) &&
           (lVar15 = NativeHelper_011df1c0(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
code_r0x0135ca28:
          uVar14 = NativeHelper_011df300();
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df1ac(uVar14,0);
        }
        puVar3 = PTR_DAT_029bc580;
        if ((int)plVar8[3] != 0) {
          plVar8[4] = lVar9;
          auVar18 = NativeHelper_011df1c4(*(undefined8 *)puVar3,&stack0xffffffffffffffdc);
          uVar14 = auVar18._8_8_;
          lVar15 = auVar18._0_8_;
          if (lVar15 != 0) {
            auVar18 = NativeHelper_011df1c0(lVar15,*(undefined8 *)(*plVar8 + 0x40));
            uVar14 = auVar18._8_8_;
            if (auVar18._0_8_ == 0) goto code_r0x0135ca28;
          }
          puVar3 = PTR_DAT_029bc558;
          if (1 < *(uint *)(plVar8 + 3)) {
            plVar8[5] = lVar15;
            puVar4 = PTR_DAT_029b7f98;
            auVar18._8_8_ = uVar14;
            auVar18._0_8_ = *(long *)puVar3;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              auVar18 = NativeHelper_011df1bc();
            }
            Imangi_GameServices_ImangiGameServicesManager_ImangiGameServices_LogMessage_1257d90
                      (auVar18._0_8_,auVar18._8_8_,pvVar11);
            plVar8 = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84
                               (runtimeMethod);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar4);
            }
            bVar7 = UnityEngine_object_op_Inequality_250c8e4(plVar8,(void *)0x0,(void *)0x0);
            if (bVar7) {
              if (plVar8 == (long *)0x0) goto code_r0x0135ca24;
              (**(code **)(*plVar8 + 0x1f8))(plVar8,lVar9,2,*(undefined8 *)(*plVar8 + 0x200));
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
    goto LAB_0138c5b4;
  }
  iVar17 = 0;
LAB_0138c0f4:
  lVar9 = NativeHelper_01a2f750(param_2,iVar17,*(undefined8 *)puVar4);
  if (lVar9 == 0) goto LAB_0138c5b4;
  uVar10 = NativeHelper_01e9b79c(*(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(lVar9 + 0x28),0);
  if ((uVar10 & 1) == 0) {
    if (*(int *)(param_1 + 0x200) != 0) goto LAB_0138c3f8;
    pvVar11 = *(void **)(param_1 + 0x1c8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar11 = UnityEngine_object_Instantiate_142b1bc(pvVar11,*(void **)PTR_DAT_029b9ec8);
    bVar7 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
    if (bVar7) {
      if (pvVar11 == (void *)0x0) goto LAB_0138c5b4;
      x = UnityEngine_GameObject_GetComponent_1402e6c(pvVar11,*(void **)PTR_DAT_029bdbf0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      bVar7 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
      if (bVar7) {
        NativeHelper_02610c54(pvVar11,0,0);
        lVar9 = *(long *)(param_1 + 0x1d8);
        if (lVar9 == 0) goto LAB_0138c5b4;
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar16 = *(long *)PTR_DAT_029bdbf8;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_0138c5b4;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(void **)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = x;
        }
        else {
          NativeHelper_01a2fa14
                    (lVar9,x,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        NativeHelper_02614ce0(pvVar11,0);
      }
    }
    goto LAB_0138c3f8;
  }
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = *(long *)puVar6;
  }
  self = (RecordManager *)**(undefined8 **)(lVar15 + 0xb8);
  pvVar11 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if ((pvVar11 == (void *)0x0) ||
     (playerId = PlayerManager_GetActivePlayer_12ccc8c(pvVar11,(void *)0x0),
     self == (RecordManager *)0x0)) goto LAB_0138c5b4;
  pRVar12 = RecordManager_FindOrCreatePlayerRecord_12b2aac(self,playerId,(void *)0x0);
  switch(*(undefined4 *)(param_1 + 0x200)) {
  case 0:
    if ((*(long *)(param_1 + 0x1e8) != 0) &&
       (NativeHelper_01a311c8(*(long *)(param_1 + 0x1e8),iVar17,*(undefined8 *)PTR_DAT_029bdc08),
       pRVar12 != (RecordManager_cPlayerRecord *)0x0)) {
      if (*(long *)(lVar9 + 0x48) <= (long)pRVar12->bestScore) goto LAB_0138c3f8;
      pRVar12->bestScore = (int)*(long *)(lVar9 + 0x48);
      goto code_r0x0138c3c0;
    }
    goto LAB_0138c5b4;
  case 1:
    if (pRVar12 == (RecordManager_cPlayerRecord *)0x0) goto LAB_0138c5b4;
    lVar15 = *(long *)(lVar9 + 0x48);
    if (lVar15 <= pRVar12->bestDistanceScore) break;
    pRVar12->bestDistanceScore = (int)lVar15;
code_r0x0138c374:
    if (*(RecordManager **)(param_1 + 0xc0) == (RecordManager *)0x0) goto LAB_0138c5b4;
    RecordManager_SaveRecords_12b3350(*(RecordManager **)(param_1 + 0xc0),(void *)0x0);
    lVar15 = *(long *)puVar5;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar15 = *(long *)puVar5;
    }
    pTVar13 = *(TRUserAttributes **)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (pTVar13 == (TRUserAttributes *)0x0) goto LAB_0138c5b4;
    TRUserAttributes_Update_12b9e78(pTVar13,(void *)0x0);
    lVar15 = *(long *)(lVar9 + 0x48);
    break;
  case 2:
    if (pRVar12 == (RecordManager_cPlayerRecord *)0x0) goto LAB_0138c5b4;
    lVar15 = *(long *)(lVar9 + 0x48);
    if (lVar15 <= pRVar12->bestCoinScore) goto code_r0x0138c348;
    pRVar12->bestCoinScore = (int)lVar15;
code_r0x0138c30c:
    if (*(RecordManager **)(param_1 + 0xc0) == (RecordManager *)0x0) goto LAB_0138c5b4;
    RecordManager_SaveRecords_12b3350(*(RecordManager **)(param_1 + 0xc0),(void *)0x0);
    lVar15 = *(long *)puVar5;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar15 = *(long *)puVar5;
    }
    pTVar13 = *(TRUserAttributes **)(*(long *)(lVar15 + 0xb8) + 0x10);
    if (pTVar13 == (TRUserAttributes *)0x0) goto LAB_0138c5b4;
    TRUserAttributes_Update_12b9e78(pTVar13,(void *)0x0);
    lVar15 = *(long *)(lVar9 + 0x48);
    goto code_r0x0138c348;
  case 3:
    if (pRVar12 == (RecordManager_cPlayerRecord *)0x0) goto LAB_0138c5b4;
    if ((long)pRVar12->SaveMeBestScore < *(long *)(lVar9 + 0x48)) {
      pRVar12->SaveMeBestScore = (int)*(long *)(lVar9 + 0x48);
      goto code_r0x0138c3c0;
    }
    goto LAB_0138c3f8;
  case 4:
    if (pRVar12 == (RecordManager_cPlayerRecord *)0x0) goto LAB_0138c5b4;
    lVar15 = *(long *)(lVar9 + 0x48);
    if (pRVar12->SaveMeBestCoinScore < lVar15) {
      pRVar12->SaveMeBestCoinScore = (int)lVar15;
      goto code_r0x0138c30c;
    }
code_r0x0138c348:
    if (lVar15 <= pRVar12->lifetimeCoins) goto LAB_0138c3f8;
    pRVar12->lifetimeCoins = (int)lVar15;
    goto code_r0x0138c3c0;
  case 5:
    if (pRVar12 == (RecordManager_cPlayerRecord *)0x0) goto LAB_0138c5b4;
    lVar15 = *(long *)(lVar9 + 0x48);
    if (pRVar12->SaveMeBestDistanceScore < lVar15) {
      pRVar12->SaveMeBestDistanceScore = (int)lVar15;
      goto code_r0x0138c374;
    }
    break;
  default:
    goto LAB_0138c3f8;
  }
  if (pRVar12->lifetimeDistance < lVar15) {
    pRVar12->lifetimeDistance = (int)lVar15;
code_r0x0138c3c0:
    if (*(RecordManager **)(param_1 + 0xc0) == (RecordManager *)0x0) goto LAB_0138c5b4;
    RecordManager_SaveRecords_12b3350(*(RecordManager **)(param_1 + 0xc0),(void *)0x0);
    lVar9 = *(long *)puVar5;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar5;
    }
    pTVar13 = *(TRUserAttributes **)(*(long *)(lVar9 + 0xb8) + 0x10);
    if (pTVar13 == (TRUserAttributes *)0x0) goto LAB_0138c5b4;
    TRUserAttributes_Update_12b9e78(pTVar13,(void *)0x0);
  }
LAB_0138c3f8:
  iVar17 = iVar17 + 1;
  if (iVar1 == iVar17) goto LAB_0138c440;
  goto LAB_0138c0f4;
}

