// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Stumble(float delay = 0) { }
// Ghidra address: 013c15ac; ELF VA: 0x12c15ac; file offset: 0x12bd5ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013bf2b4) */
/* WARNING: Removing unreachable block (ram,0x013bf2b8) */
/* WARNING: Removing unreachable block (ram,0x013bf2bc) */
/* WARNING: Removing unreachable block (ram,0x013bf2c0) */
/* WARNING: Removing unreachable block (ram,0x013bf2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_Stumble_12bd5ac(CharacterPlayer *self,float delay,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  AudioManager *pAVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined8 uVar11;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  void *in_x2;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  
  if ((bRam0000000002b94e55 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bf7f0);
    NativeHelper_011df0b4(PTR_DAT_029bf7f8);
    bRam0000000002b94e55 = 1;
    runtimeMethod = extraout_x1;
  }
  if (0.0 < delay) {
    self->StumbleAfterDelay = true;
    self->StumbleDelay = delay;
    return;
  }
  self->DidStumble = true;
  self->StumbleAfterDelay = false;
  if (10.0 <= self->StumbleKillTimer) {
    uVar11 = *(undefined8 *)&self->field_0x34;
    fVar17 = *(float *)&self->field_0x3c;
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    fVar16 = GameController_get_StumbleSlowDownPercent_129c9a4((void *)0x0);
    *(ulong *)&self->field_0x34 =
         CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar16,(float)uVar11 * fVar16);
    *(float *)&self->field_0x3c = fVar17 * fVar16;
    self->IsStumbling = true;
    self->TimeSinceStumbleStart = 0.0;
    fVar16 = CharacterPlayer_GetRunVelocity_12bdeac(self,runtimeMethod_00);
    fVar17 = _UNK_007a3d3c;
    self->BonusLevel = 1;
    self->CoinCountForBonus = 0;
    self->StumbleDuration = fVar16 * fVar17;
    if (0.5 < fVar16 * fVar17) {
      self->StumbleDuration = 0.5;
    }
    self->StumbleKillTimer = 0.0;
    if (self->Audio != (AudioManager *)0x0) {
      AudioManager_PlayFX_12bb190(self->Audio,(void *)0x10,1.0,in_x2);
      if (self->Audio != (AudioManager *)0x0) {
        AudioManager_PlayFX_12bb190(self->Audio,(void *)0x14,1.0,in_x2);
        if (self->AnimateObject != (void *)0x0) {
          NativeHelper_025e4fc0(self->AnimateObject,*(undefined8 *)PTR_DAT_029bf7f8,0);
          pvVar5 = self->AnimateObject;
          if (pvVar5 != (void *)0x0) {
            uVar11 = *(undefined8 *)PTR_DAT_029bf7f0;
            if (pcRam0000000002b9bdf8 == (code *)0x0) {
              pcRam0000000002b9bdf8 = (code *)NativeHelper_011df070(&UNK_007a4aa8,uVar11,0);
            }
                    /* WARNING: Could not recover jumptable at 0x025e50a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000002b9bdf8)(pvVar5,uVar11,0,0);
            return;
          }
        }
      }
    }
  }
  else {
    CharacterPlayer_Kill_12bda84(self,(void *)0x6,in_x2);
    fVar17 = _UNK_007a3bec;
    pAVar8 = self->Audio;
    if (pAVar8 != (AudioManager *)0x0) {
      if ((bRam0000000002b94e46 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bf6d0);
        NativeHelper_011df0b4(PTR_DAT_029bf6d8);
        NativeHelper_011df0b4(PTR_DAT_029bf6e0);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94e46 = 1;
      }
      puVar2 = PTR_DAT_029b7f98;
      if ((pAVar8->GamePlayer != (CharacterPlayer *)0x0) && (pAVar8->Sounds != (void *)0x0)) {
        pvVar5 = (void *)NativeHelper_01768fbc(pAVar8->Sounds,0x13,*(undefined8 *)PTR_DAT_029bf6d0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar2);
        }
        bVar4 = UnityEngine_object_op_Implicit_2510034(pvVar5,(void *)0x0);
        if (!bVar4) {
          return;
        }
        if (pAVar8->StartedThisFrame != (void *)0x0) {
          uVar6 = NativeHelper_01a2fd9c
                            (pAVar8->StartedThisFrame,pvVar5,*(undefined8 *)PTR_DAT_029bf6e0);
          if ((uVar6 & 1) != 0) {
            return;
          }
          pvVar7 = pAVar8->StartedThisFrame;
          if (pvVar7 != (void *)0x0) {
            lVar12 = *(long *)((long)pvVar7 + 0x10);
            lVar13 = *(long *)PTR_DAT_029bf6d8;
            *(int *)((long)pvVar7 + 0x1c) = *(int *)((long)pvVar7 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)((long)pvVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)((long)pvVar7 + 0x18) = uVar1 + 1;
                *(void **)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = pvVar5;
              }
              else {
                NativeHelper_01a2fa14
                          (pvVar7,pvVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_029b7f98;
              pvVar7 = pAVar8->SoundEffects;
              if (pvVar7 != (void *)0x0) {
                fVar16 = pAVar8->_SoundVolume;
                if ((bRam0000000002b9bf78 & 1) == 0) {
                  NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar5,0);
                  NativeHelper_011df0b4(PTR_DAT_029b7f98);
                  NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                  bRam0000000002b9bf78 = 1;
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                bVar4 = UnityEngine_object_op_Equality_250d534(pvVar5,(void *)0x0,(void *)0x0);
                puVar2 = PTR_DAT_029f4ee0;
                if (!bVar4) {
                  if (pcRam0000000002b9bf48 == (code *)0x0) {
                    pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                  }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000002b9bf48)(fVar16 * fVar17,pvVar7,pvVar5);
                  return;
                }
                if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                puVar3 = PTR_DAT_029b7fb8;
                uVar9 = *(undefined8 *)puVar2;
                uVar11 = 0;
                if ((bRam0000000002b9c302 & 1) == 0) {
                  NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
                  NativeHelper_011df0b4(PTR_DAT_029f2e60);
                  bRam0000000002b9c302 = 1;
                  uVar11 = extraout_x1_00;
                }
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  uVar11 = extraout_x1_01;
                }
                if (cRam0000000002b9b5c7 == '\0') {
                  NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar11);
                  cRam0000000002b9b5c7 = '\x01';
                }
                lVar12 = *(long *)puVar3;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  lVar12 = *(long *)puVar3;
                }
                plVar15 = *(long **)(*(long *)(lVar12 + 0xb8) + 8);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_011df2dc();
                }
                lVar12 = *plVar15;
                uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar6 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_029f2e60) {
                      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                      goto code_r0x025ee880;
                    }
                    uVar6 = uVar6 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar6 != 0);
                }
                puVar10 = (undefined8 *)NativeHelper_011b5528(plVar15,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar10)(plVar15,2,uVar9,puVar10[1]);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

