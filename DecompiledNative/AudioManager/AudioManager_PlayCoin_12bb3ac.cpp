// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayCoin() { }
// Ghidra address: 013bf3ac; ELF VA: 0x12bf3ac; file offset: 0x12bb3ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AudioManager_PlayCoin_12bb3ac(AudioManager *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *x;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  void *self_00;
  long *plVar11;
  
  if (self->TimeSinceLastCoin <= 0.25) {
    iVar8 = self->CoinSequenceID + 1;
  }
  else {
    iVar8 = 0;
  }
  self->TimeSinceLastCoin = 0.0;
  self->CoinSequenceID = iVar8;
  if (self->Coins != (void *)0x0) {
    UnityEngine_AudioSource_set_pitch_24e3c5c
              (self->Coins,(float)iVar8 / 10.0 + _UNK_007a3c08,(void *)0x0);
    self_00 = self->Coins;
    if (self_00 != (void *)0x0) {
      x = UnityEngine_AudioSource_get_clip_24e3ca8(self_00,(void *)0x0);
      puVar1 = PTR_DAT_029b7f98;
      if ((bRam0000000002b9bf78 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7fb8,x,0);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        NativeHelper_011df0b4(PTR_DAT_029f4ee0);
        bRam0000000002b9bf78 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
      puVar1 = PTR_DAT_029f4ee0;
      if (!bVar3) {
        if (pcRam0000000002b9bf48 == (code *)0x0) {
          pcRam0000000002b9bf48 = (code *)NativeHelper_011df070(&UNK_007b6c81);
        }
                    /* WARNING: Could not recover jumptable at 0x025e7e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9bf48)(0x3f800000,self_00,x);
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar2 = PTR_DAT_029b7fb8;
      uVar4 = *(undefined8 *)puVar1;
      uVar7 = 0;
      if ((bRam0000000002b9c302 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7fb8,0);
        NativeHelper_011df0b4(PTR_DAT_029f2e60);
        bRam0000000002b9c302 = 1;
        uVar7 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        uVar7 = extraout_x1_00;
      }
      if (cRam0000000002b9b5c7 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b7fb8,uVar7);
        cRam0000000002b9b5c7 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar5 = *(long *)puVar2;
      }
      plVar11 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      lVar5 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_029f2e60) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto code_r0x025ee880;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)NativeHelper_011b5528(plVar11,*(long *)PTR_DAT_029f2e60,3);
code_r0x025ee880:
                    /* WARNING: Could not recover jumptable at 0x025ee898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar11,2,uVar4,puVar6[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

