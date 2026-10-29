// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HandleDelayedJumping() { }
// Ghidra address: 01398304; ELF VA: 0x1298304; file offset: 0x1294304
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HandleDelayedJumping_1294304(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  Enemy *self_00;
  bool bVar3;
  CharacterPlayer *self_01;
  ulong uVar4;
  GameInput *pGVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Recovered_Vector2 RVar9;
  Recovered_Vector2 RVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  Enemy *pEStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Enemy *pEStack_70;
  
  if ((bRam0000000002b94cfd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde58);
    NativeHelper_011df0b4(PTR_DAT_029bde60);
    NativeHelper_011df0b4(PTR_DAT_029bde68);
    NativeHelper_011df0b4(PTR_DAT_029bde78);
    bRam0000000002b94cfd = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  pEStack_70 = (Enemy *)0x0;
  if (self->GameInput != (GameInput *)0x0) {
    if (self->GameInput->ShouldJump == false) {
      return;
    }
    self_01 = self->GamePlayer;
    if (self_01 != (CharacterPlayer *)0x0) {
      if (self_01->IsDead != false) {
        return;
      }
      bVar3 = CharacterPlayer_Jump_12bd754(self_01,0.0,(void *)0x0);
      if (!bVar3) {
        return;
      }
      if (self->Enemies != (void *)0x0) {
        NativeHelper_01a30500(&uStack_98,self->Enemies,*(undefined8 *)PTR_DAT_029bde78);
        puVar2 = PTR_DAT_029bde60;
        puVar1 = PTR_DAT_029b97c8;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        pEStack_70 = pEStack_88;
        while (uVar4 = NativeHelper_0182184c(&uStack_80,*(undefined8 *)puVar2), self_00 = pEStack_70
              , (uVar4 & 1) != 0) {
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar9 = MovingObject_GetPosition2D_1309760((MovingObject *)self->GamePlayer,(void *)0x0);
          if (self_00 == (Enemy *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          RVar10 = MovingObject_GetPosition2D_1309760((MovingObject *)self_00,(void *)0x0);
          if (cRam0000000002b94d38 == '\0') {
            NativeHelper_011df0b4(puVar1);
            cRam0000000002b94d38 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          if (self->GamePlayer == (CharacterPlayer *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          fVar6 = CharacterPlayer_GetRunVelocity_12bdeac(self->GamePlayer,(void *)0x0);
          fVar7 = RVar9.component0 - RVar10.component0;
          fVar8 = RVar9.component1 - RVar10.component1;
          Enemy_Jump_12d5f40(self_00,SQRT(fVar7 * fVar7 + fVar8 * fVar8) / fVar6,(void *)0x0);
        }
        NativeHelper_01821848(&uStack_80,*(undefined8 *)PTR_DAT_029bde58);
        pGVar5 = self->GameInput;
        if (pGVar5 != (GameInput *)0x0) {
          pGVar5->ShouldJump = false;
          pGVar5->TimeSinceShouldJump = 0.0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

