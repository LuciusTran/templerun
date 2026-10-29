// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void BoostPlayer(float distance, bool isMega = false) { }
// Ghidra address: 0139ae48; ELF VA: 0x129ae48; file offset: 0x1296e48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013bf2b4) */
/* WARNING: Removing unreachable block (ram,0x013bf2b8) */
/* WARNING: Removing unreachable block (ram,0x013bf2bc) */
/* WARNING: Removing unreachable block (ram,0x013bf2c0) */
/* WARNING: Removing unreachable block (ram,0x013bf2c4) */

void GameController_BoostPlayer_1296e48
               (GameController *self,float distance,bool isMega,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  AudioManager *pAVar5;
  void *exists;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  float fVar15;
  
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    CharacterPlayer_StartBoost_12be89c(self->GamePlayer,distance,isMega,(void *)0x0);
    if (self->MainCamera != (GameCamera *)0x0) {
      fVar15 = 175.0;
      if (!isMega) {
        fVar15 = 100.0;
      }
      GameCamera_Shake_12d364c(self->MainCamera,0.75,distance / fVar15,2.0,0.0,(void *)0x0);
      pAVar5 = self->Audio;
      if (pAVar5 != (AudioManager *)0x0) {
        if ((bRam0000000002b94e46 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bf6d0,3,0);
          NativeHelper_011df0b4(PTR_DAT_029bf6d8);
          NativeHelper_011df0b4(PTR_DAT_029bf6e0);
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          bRam0000000002b94e46 = 1;
        }
        puVar2 = PTR_DAT_029b7f98;
        if ((pAVar5->GamePlayer != (CharacterPlayer *)0x0) && (pAVar5->Sounds != (void *)0x0)) {
          exists = (void *)NativeHelper_01768fbc(pAVar5->Sounds,3,*(undefined8 *)PTR_DAT_029bf6d0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar2);
          }
          bVar4 = UnityEngine_object_op_Implicit_2510034(exists,(void *)0x0);
          if (!bVar4) {
            return;
          }
          if (pAVar5->StartedThisFrame != (void *)0x0) {
            uVar6 = NativeHelper_01a2fd9c
                              (pAVar5->StartedThisFrame,exists,*(undefined8 *)PTR_DAT_029bf6e0);
            if ((uVar6 & 1) != 0) {
              return;
            }
            pvVar7 = pAVar5->StartedThisFrame;
            if (pvVar7 != (void *)0x0) {
              lVar11 = *(long *)((long)pvVar7 + 0x10);
              lVar12 = *(long *)PTR_DAT_029bf6d8;
              *(int *)((long)pvVar7 + 0x1c) = *(int *)((long)pvVar7 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar1 = *(uint *)((long)pvVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)((long)pvVar7 + 0x18) = uVar1 + 1;
                  *(void **)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = exists;
                }
                else {
                  NativeHelper_01a2fa14
                            (pvVar7,exists,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                puVar2 = PTR_DAT_029b7f98;
                pvVar7 = pAVar5->SoundEffects;
                if (pvVar7 != (void *)0x0) {
                  fVar15 = pAVar5->_SoundVolume;
                  if ((bRam0000000002b9bf78 & 1) == 0) {
                    NativeHelper_011df0b4(PTR_DAT_029b7fb8,exists,0);
                    NativeHelper_011df0b4(PTR_DAT_029b7f98);
                    NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                    bRam0000000002b9bf78 = 1;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  bVar4 = UnityEngine_object_op_Equality_250d534(exists,(void *)0x0,(void *)0x0);
                  puVar2 = PTR_DAT_029f4ee0;
                  if (!bVar4) {
                    if (pcRam0000000002b9bf48 == (code *)0x0) {
                      pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                    }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000002b9bf48)(fVar15 * 1.0,pvVar7,exists);
                    return;
                  }
                  if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  puVar3 = PTR_DAT_029b7fb8;
                  uVar8 = *(undefined8 *)puVar2;
                  uVar10 = 0;
                  if ((bRam0000000002b9c302 & 1) == 0) {
                    NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
                    NativeHelper_011df0b4(PTR_DAT_029f2e60);
                    bRam0000000002b9c302 = 1;
                    uVar10 = extraout_x1;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    uVar10 = extraout_x1_00;
                  }
                  if (cRam0000000002b9b5c7 == '\0') {
                    NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar10);
                    cRam0000000002b9b5c7 = '\x01';
                  }
                  lVar11 = *(long *)puVar3;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                    lVar11 = *(long *)puVar3;
                  }
                  plVar14 = *(long **)(*(long *)(lVar11 + 0xb8) + 8);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_011df2dc();
                  }
                  lVar11 = *plVar14;
                  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar6 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_029f2e60) {
                        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                        goto code_r0x025ee880;
                      }
                      uVar6 = uVar6 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar9 = (undefined8 *)NativeHelper_011b5528(plVar14,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar9)(plVar14,2,uVar8,puVar9[1]);
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
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

