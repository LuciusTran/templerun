// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayFX(Effects effect, float volumeScale = 1) { }
// Ghidra address: 013bf190; ELF VA: 0x12bf190; file offset: 0x12bb190
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_PlayFX_12bb190
               (AudioManager *self,void *effect,float volumeScale,void *runtimeMethod)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *exists;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  float fVar15;
  
  uVar14 = (ulong)effect & 0xffffffff;
  if ((bRam0000000002b94e46 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf6d0);
    NativeHelper_011df0b4(PTR_DAT_029bf6d8);
    NativeHelper_011df0b4(PTR_DAT_029bf6e0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94e46 = 1;
  }
  puVar3 = PTR_DAT_029b7f98;
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    uVar2 = self->GamePlayer->ActiveCharacterId;
    if ((uVar2 < 0x10) && ((1 << (ulong)(uVar2 & 0x1f) & 0xa48aU) != 0)) {
      uVar2 = 0x11;
      if ((uint)effect != 0x10) {
        uVar2 = (uint)effect;
      }
      uVar1 = 0xd;
      if (uVar2 != 0xc) {
        uVar1 = uVar2;
      }
      uVar2 = 0xf;
      if (uVar1 != 0xe) {
        uVar2 = uVar1;
      }
      uVar1 = 0x1e;
      if (uVar2 != 0x1d) {
        uVar1 = uVar2;
      }
      uVar2 = 0x18;
      if (uVar1 != 0x17) {
        uVar2 = uVar1;
      }
      uVar1 = 0x21;
      if (uVar2 != 0x20) {
        uVar1 = uVar2;
      }
      uVar14 = (ulong)uVar1;
    }
    if (self->Sounds != (void *)0x0) {
      exists = (void *)NativeHelper_01768fbc(self->Sounds,uVar14,*(undefined8 *)PTR_DAT_029bf6d0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar3);
      }
      bVar5 = UnityEngine_object_op_Implicit_2510034(exists,(void *)0x0);
      if (!bVar5) {
        return;
      }
      if ((int)uVar14 - 0x17U < 2) {
        if (0.0 < self->AllowScreamIn) {
          return;
        }
        if (exists == (void *)0x0) goto LAB_013bf38c;
        fVar15 = UnityEngine_AudioClip_get_length_24e38e0(exists,(void *)0x0);
        self->AllowScreamIn = fVar15;
      }
      if (self->StartedThisFrame != (void *)0x0) {
        uVar14 = NativeHelper_01a2fd9c
                           (self->StartedThisFrame,exists,*(undefined8 *)PTR_DAT_029bf6e0);
        if ((uVar14 & 1) != 0) {
          return;
        }
        pvVar6 = self->StartedThisFrame;
        if (pvVar6 != (void *)0x0) {
          lVar10 = *(long *)((long)pvVar6 + 0x10);
          lVar11 = *(long *)PTR_DAT_029bf6d8;
          *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar2 = *(uint *)((long)pvVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)((long)pvVar6 + 0x18) = uVar2 + 1;
              *(void **)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = exists;
            }
            else {
              NativeHelper_01a2fa14
                        (pvVar6,exists,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            puVar3 = PTR_DAT_029b7f98;
            pvVar6 = self->SoundEffects;
            if (pvVar6 != (void *)0x0) {
              fVar15 = self->_SoundVolume;
              if ((bRam0000000002b9bf78 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029b7fb8,exists,0);
                NativeHelper_011df0b4(PTR_DAT_029b7f98);
                NativeHelper_011df0b4(PTR_DAT_029f4ee0);
                bRam0000000002b9bf78 = 1;
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              bVar5 = UnityEngine_object_op_Equality_250d534(exists,(void *)0x0,(void *)0x0);
              puVar3 = PTR_DAT_029f4ee0;
              if (!bVar5) {
                if (pcRam0000000002b9bf48 == (code *)0x0) {
                  pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
                }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000002b9bf48)(fVar15 * volumeScale,pvVar6,exists);
                return;
              }
              if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              puVar4 = PTR_DAT_029b7fb8;
              uVar7 = *(undefined8 *)puVar3;
              uVar9 = 0;
              if ((bRam0000000002b9c302 & 1) == 0) {
                NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
                NativeHelper_011df0b4(PTR_DAT_029f2e60);
                bRam0000000002b9c302 = 1;
                uVar9 = extraout_x1;
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                uVar9 = extraout_x1_00;
              }
              if (cRam0000000002b9b5c7 == '\0') {
                NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar9);
                cRam0000000002b9b5c7 = '\x01';
              }
              lVar10 = *(long *)puVar4;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                NativeHelper_011df1bc();
                lVar10 = *(long *)puVar4;
              }
              plVar13 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_011df2dc();
              }
              lVar10 = *plVar13;
              uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar14 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_029f2e60) {
                    puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                    goto code_r0x025ee880;
                  }
                  uVar14 = uVar14 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar14 != 0);
              }
              puVar8 = (undefined8 *)NativeHelper_011b5528(plVar13,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar8)(plVar13,2,uVar7,puVar8[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_013bf38c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

