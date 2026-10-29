// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnSpawned() { }
// Ghidra address: 014141e4; ELF VA: 0x13141e4; file offset: 0x13101e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_OnSpawned_13101e4(PathElement *self,void *runtimeMethod)

{
  *(undefined4 *)&self->LastRenderState = 0;
  self->IsInView = false;
  self->Type = 0;
  self->Level = 0;
  self->Obstacles = 0;
  self->HasObstacles = false;
  self->HasCoins = false;
  self->HasBonusItems = false;
  self->SkippedBonusItems = false;
  self->IsTutorialObstacle = false;
  self->IsTutorialEnd = false;
  self->CoinLocationStart = 0;
  self->CoinLocationEnd = 0;
  self->IsCoinRunInAir = false;
  self->SpacesSinceLastTurn = 0;
  self->SpacesSinceLastObstacle = 0;
  self->BackToBackObstacleCount = 0;
  self->SpacesSinceLastCoinRun = 0;
  self->TileIndex = 0;
  self->SpacesSinceLastBonusItem = 0;
  self->CoinRunCount = 0;
  return;
}

