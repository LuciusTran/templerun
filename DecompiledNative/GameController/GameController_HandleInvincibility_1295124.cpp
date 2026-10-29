// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleInvincibility() { }
// Ghidra address: 01399124; ELF VA: 0x1299124; file offset: 0x1295124
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleInvincibility_1295124(GameController *self,void *runtimeMethod)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000002b94cff & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b94cff = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029bde80;
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    bVar1 = self->GamePlayer->HasInvincibility;
    lVar3 = *(long *)PTR_DAT_029bde80;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar3,runtimeMethod);
      lVar3 = *(long *)puVar2;
      runtimeMethod = extraout_x1_00;
    }
    lVar4 = *(long *)(lVar3 + 0xb8);
    if (bVar1 == false) {
      fVar6 = 1.0;
      *(undefined1 *)(lVar4 + 4) = 0;
    }
    else {
      *(undefined1 *)(lVar4 + 4) = 1;
      if (self->GamePlayer == (CharacterPlayer *)0x0) goto LAB_01399240;
      if (self->GamePlayer->InvincibilityTimeLeft <= 2.5) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar3,runtimeMethod);
          lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        fVar6 = *(float *)(lVar4 + 0x58);
        fVar5 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
        lVar3 = *(long *)puVar2;
        fVar6 = fVar6 - (fVar5 + fVar5);
        if (fVar6 <= 0.0) {
          fVar6 = 1.0;
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar3 = *(long *)puVar2;
        }
        lVar4 = *(long *)(lVar3 + 0xb8);
      }
      else {
        fVar6 = 1.0;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar3,runtimeMethod);
          fVar6 = 1.0;
          lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
        }
      }
    }
    *(ulong *)(lVar4 + 0x54) = CONCAT44(fVar6,fVar6);
    *(ulong *)(lVar4 + 0x4c) = CONCAT44(fVar6,fVar6);
    return;
  }
LAB_01399240:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

