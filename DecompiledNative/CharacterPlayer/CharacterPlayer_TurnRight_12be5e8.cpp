// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TurnRight() { }
// Ghidra address: 013c25e8; ELF VA: 0x12c25e8; file offset: 0x12be5e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013bf2b4) */
/* WARNING: Removing unreachable block (ram,0x013bf2b8) */
/* WARNING: Removing unreachable block (ram,0x013bf2bc) */
/* WARNING: Removing unreachable block (ram,0x013bf2c0) */
/* WARNING: Removing unreachable block (ram,0x013bf2c4) */

void CharacterPlayer_TurnRight_12be5e8(CharacterPlayer *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  AudioManager *pAVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  float fVar16;
  
  pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar7 != (void *)0x0) {
    UnityEngine_Transform_Rotate_2517540(pvVar7,0.0,90.0,0.0,(void *)0x0);
    fVar16 = *(float *)&self->field_0x34;
    *(undefined4 *)&self->field_0x34 = *(undefined4 *)&self->field_0x3c;
    *(float *)&self->field_0x3c = -fVar16;
    MovingObject_ResetForce_13091d8((MovingObject *)self,(void *)0x0);
    if (self->IsJumping != false) {
      return;
    }
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
        pvVar7 = (void *)NativeHelper_01768fbc(pAVar8->Sounds,0xb,*(undefined8 *)PTR_DAT_029bf6d0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar2);
        }
        bVar4 = UnityEngine_object_op_Implicit_2510034(pvVar7,(void *)0x0);
        if (!bVar4) {
          return;
        }
        if (pAVar8->StartedThisFrame != (void *)0x0) {
          uVar5 = NativeHelper_01a2fd9c
                            (pAVar8->StartedThisFrame,pvVar7,*(undefined8 *)PTR_DAT_029bf6e0);
          if ((uVar5 & 1) != 0) {
            return;
          }
          pvVar6 = pAVar8->StartedThisFrame;
          if (pvVar6 != (void *)0x0) {
            lVar12 = *(long *)((long)pvVar6 + 0x10);
            lVar13 = *(long *)PTR_DAT_029bf6d8;
            *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar1 = *(uint *)((long)pvVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)((long)pvVar6 + 0x18) = uVar1 + 1;
                *(void **)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = pvVar7;
              }
              else {
                NativeHelper_01a2fa14
                          (pvVar6,pvVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = PTR_DAT_029b7f98;
              pvVar6 = pAVar8->SoundEffects;
              if (pvVar6 != (void *)0x0) {
                fVar16 = pAVar8->_SoundVolume;
                if ((bRam0000000002b9bf78 & 1) == 0) {
                  NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar7,0);
                  NativeHelper_011df0b4(PTR_DAT_029b7f98);
                  NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                  bRam0000000002b9bf78 = 1;
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                }
                bVar4 = UnityEngine_object_op_Equality_250d534(pvVar7,(void *)0x0,(void *)0x0);
                puVar2 = PTR_DAT_029f4ee0;
                if (!bVar4) {
                  if (pcRam0000000002b9bf48 == (code *)0x0) {
                    pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                  }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000002b9bf48)(fVar16 * 1.0,pvVar6,pvVar7);
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
                  uVar11 = extraout_x1;
                }
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  NativeHelper_011df1bc();
                  uVar11 = extraout_x1_00;
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
                uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar5 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_029f2e60) {
                      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                      goto code_r0x025ee880;
                    }
                    uVar5 = uVar5 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar5 != 0);
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

