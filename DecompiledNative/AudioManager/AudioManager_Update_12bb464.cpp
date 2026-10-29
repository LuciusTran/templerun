// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 013bf464; ELF VA: 0x12bf464; file offset: 0x12bb464
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AudioManager_Update_12bb464(AudioManager *self,void *runtimeMethod)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  GameController *pGVar8;
  long lVar9;
  void **ppvVar10;
  CharacterPlayer *pCVar11;
  uint uVar12;
  void *y;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000002b94e47 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf6e8);
    NativeHelper_011df0b4(PTR_DAT_029bf6f0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94e47 = 1;
  }
  pGVar8 = self->Controller;
  if (pGVar8 == (GameController *)0x0) goto LAB_013bf834;
  if ((pGVar8->IsPaused == false) && (pGVar8->IsGameOver == false)) {
    pCVar11 = self->GamePlayer;
    if (pCVar11 == (CharacterPlayer *)0x0) goto LAB_013bf834;
    if (((pCVar11->Hold != false) || (pCVar11->IsDead != false)) || (pGVar8->IsInCountdown != false)
       ) goto LAB_013bf4e8;
    if (((pCVar11->IsJumping != false) || (pCVar11->IsSliding != false)) ||
       (pCVar11->IsOverGround == false)) {
      uVar12 = 0;
      goto LAB_013bf4ec;
    }
    if (pGVar8->LastLevel == 3) {
      ppvVar10 = &self->FootStepsCliff;
      fVar13 = _UNK_007a3d5c;
    }
    else if (pGVar8->LastLevel == 1) {
      ppvVar10 = &self->FootStepsPlank;
      fVar13 = _UNK_007a3c08;
    }
    else {
      ppvVar10 = &self->FootStepsTemple;
      fVar13 = _UNK_007a3b64;
    }
    if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
    y = *ppvVar10;
    pvVar6 = UnityEngine_AudioSource_get_clip_24e3ca8(self->FootSteps,(void *)0x0);
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,y,(void *)0x0);
    if (bVar3) {
      if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
      UnityEngine_AudioSource_set_clip_24e3ce4(self->FootSteps,y,(void *)0x0);
    }
    if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
    UnityEngine_AudioSource_set_volume_24e3c10
              (self->FootSteps,fVar13 * self->_SoundVolume,(void *)0x0);
    if ((self->GamePlayer == (CharacterPlayer *)0x0) || (self->FootSteps == (void *)0x0))
    goto LAB_013bf834;
    fVar13 = 1.25;
    if (self->GamePlayer->HasBoost != false) {
      fVar13 = 2.0;
    }
    UnityEngine_AudioSource_set_pitch_24e3c5c(self->FootSteps,fVar13,(void *)0x0);
    if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
    uVar7 = NativeHelper_025e7eac(self->FootSteps,0);
    if ((uVar7 & 1) == 0) {
      if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
      NativeHelper_025e7d28(self->FootSteps,0);
    }
    uVar12 = 0;
  }
  else {
LAB_013bf4e8:
    uVar12 = 1;
LAB_013bf4ec:
    if (self->FootSteps == (void *)0x0) goto LAB_013bf834;
    UnityEngine_AudioSource_Stop_24e3e6c(self->FootSteps,(void *)0x0);
  }
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    uVar1 = 0;
    if (self->GamePlayer->HasVacuum != false) {
      uVar1 = uVar12 ^ 1;
    }
    if (self->Magnet != (void *)0x0) {
      uVar5 = NativeHelper_025e7eac(self->Magnet,0);
      if (uVar1 != (uVar5 & 1)) {
        if (self->Magnet == (void *)0x0) goto LAB_013bf834;
        if (uVar1 == 0) {
          UnityEngine_AudioSource_Stop_24e3e6c(self->Magnet,(void *)0x0);
        }
        else {
          NativeHelper_025e7d28();
        }
      }
      if (self->GamePlayer != (CharacterPlayer *)0x0) {
        uVar1 = 0;
        if (self->GamePlayer->HasInvincibility != false) {
          uVar1 = uVar12 ^ 1;
        }
        if (self->Invincible != (void *)0x0) {
          uVar5 = NativeHelper_025e7eac(self->Invincible,0);
          if (uVar1 != (uVar5 & 1)) {
            if (self->Invincible == (void *)0x0) goto LAB_013bf834;
            if (uVar1 == 0) {
              UnityEngine_AudioSource_Stop_24e3e6c(self->Invincible,(void *)0x0);
            }
            else {
              NativeHelper_025e7d28();
            }
          }
          pCVar11 = self->GamePlayer;
          if (pCVar11 != (CharacterPlayer *)0x0) {
            if (pCVar11->BoostSlowdownDistance <= pCVar11->BoostDistanceLeft) {
              pvVar6 = self->Boost;
              if (pvVar6 == (void *)0x0) goto LAB_013bf834;
              fVar13 = self->_SoundVolume * _UNK_007a3cf8;
            }
            else {
              if (((**(long **)(*(long *)PTR_DAT_029bf6e8 + 0xb8) == 0) ||
                  (lVar9 = *(long *)(**(long **)(*(long *)PTR_DAT_029bf6e8 + 0xb8) + 0x40),
                  lVar9 == 0)) || (pvVar6 = self->Boost, pvVar6 == (void *)0x0)) goto LAB_013bf834;
              fVar13 = 0.0;
              if (_UNK_007a3d00 <= *(float *)(lVar9 + 0x34)) {
                fVar13 = (pCVar11->BoostDistanceLeft / pCVar11->BoostSlowdownDistance) *
                         _UNK_007a3d5c + _UNK_007a3c08;
              }
              fVar13 = self->_SoundVolume * fVar13;
            }
            UnityEngine_AudioSource_set_volume_24e3c10(pvVar6,fVar13,(void *)0x0);
            pCVar11 = self->GamePlayer;
            if (pCVar11 != (CharacterPlayer *)0x0) {
              if ((pCVar11->HasBoost == false) && (pCVar11->IsMegaBoost == false)) {
                bVar3 = false;
              }
              else {
                bVar3 = uVar12 == 0;
              }
              if (self->Boost != (void *)0x0) {
                bVar4 = NativeHelper_025e7eac(self->Boost,0);
                if (bVar3 != (bool)(bVar4 & 1)) {
                  if (self->Boost == (void *)0x0) goto LAB_013bf834;
                  if (bVar3 == false) {
                    UnityEngine_AudioSource_Stop_24e3e6c(self->Boost,(void *)0x0);
                  }
                  else {
                    NativeHelper_025e7d28();
                  }
                }
                pvVar6 = self->StartedThisFrame;
                if (pvVar6 != (void *)0x0) {
                  iVar2 = *(int *)((long)pvVar6 + 0x18);
                  *(undefined4 *)((long)pvVar6 + 0x18) = 0;
                  *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
                  if (0 < iVar2) {
                    NativeHelper_0201ea34(*(undefined8 *)((long)pvVar6 + 0x10),0,iVar2,0);
                  }
                  fVar13 = self->AllowScreamIn;
                  if (0.0 < fVar13) {
                    fVar14 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
                    self->AllowScreamIn = fVar13 - fVar14;
                  }
                  fVar14 = self->TimeSinceLastCoin;
                  fVar13 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
                  self->TimeSinceLastCoin = fVar14 + fVar13;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013bf834:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

