// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Jump(float delay = 0) { }
// Ghidra address: 013d9f40; ELF VA: 0x12d9f40; file offset: 0x12d5f40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Enemy_Jump_12d5f40(Enemy *self,float delay,void *runtimeMethod)

{
  if ((self->IsJumping == false) && (self->IsFalling == false)) {
    if (0.0 < delay) {
      self->JumpAfterDelay = true;
      self->JumpDelay = delay;
      return;
    }
    self->IsJumping = true;
    self->JumpAfterDelay = false;
    *(float *)&self->field_0x38 = self->JumpVelocity;
    return;
  }
  return;
}

