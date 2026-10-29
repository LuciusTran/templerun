// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013c09dc; ELF VA: 0x12c09dc; file offset: 0x12bc9dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_Start_12bc9dc(CharacterPlayer *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *extraout_x1;
  float fVar6;
  
  puVar3 = PTR_DAT_029b9758;
  if ((bRam0000000002b94e51 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde50);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94e51 = 1;
    runtimeMethod = extraout_x1;
  }
  self->BaseAnimationFPS = 24.0;
  puVar4 = PTR_DAT_029bde50;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3,runtimeMethod);
  }
  fVar6 = GameController_get_StartRunVelocity_129c8dc((void *)0x0);
  self->StartRunVelocity = fVar6;
  self->DeathRunVelocity = 0.0;
  fVar6 = GameController_get_MaxRunVelocity_129c940((void *)0x0);
  uVar1 = _UNK_007a3a10;
  self->MaxRunVelocity = fVar6;
  uVar5 = _UNK_007a3a10;
  _UNK_007a3a10 = (undefined4)uVar1;
  _UNK_007a3a14 = SUB84(uVar1,4);
  uVar2 = _UNK_007a3a14;
  self->StumbleKillTimer = (float)_UNK_007a3a10;
  _UNK_007a3a10 = uVar5;
  self->StumbleKillVelocityPercent = (float)uVar2;
  self->BonusLevel = 1;
  self->CoinCountTotal = 0;
  self->CoinCountForBonus = 0;
  self->CoinCountForBonusThreshold = 100;
  self->HasVacuum = false;
  self->IsGroundHeightChangeHigher = false;
  self->AreWingsPermanent = false;
  self->HasAngelWings = false;
  self->HasBoost = false;
  self->TimeSinceLastPowerup = 0.0;
  self->HasInvincibility = false;
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = self;
                    /* WARNING: Could not recover jumptable at 0x013c0ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x1a8))(self,*(undefined8 *)(*(long *)self + 0x1b0));
  return;
}

