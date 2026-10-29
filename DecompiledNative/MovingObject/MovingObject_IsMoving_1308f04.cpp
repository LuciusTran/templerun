// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsMoving() { }
// Ghidra address: 0140cf04; ELF VA: 0x130cf04; file offset: 0x1308f04
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MovingObject_IsMoving_1308f04(MovingObject *self,void *runtimeMethod)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000002b950d7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1aa8);
    bRam0000000002b950d7 = 1;
  }
  if ((((self->IsFollowingPath == false) || (self->FollowingPathNodes == (void *)0x0)) ||
      (*(int *)((long)self->FollowingPathNodes + 0x18) < 2)) &&
     ((fVar2 = (self->Velocity).component0, fVar3 = (self->Velocity).component1,
      fVar4 = (self->Velocity).component2, fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 == 0.0 &&
      (self->AngularVelocity == 0.0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

