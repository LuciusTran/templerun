// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013d9e7c; ELF VA: 0x12d9e7c; file offset: 0x12d5e7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Enemy_Start_12d5e7c(Enemy *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_029b99e0;
  if ((bRam0000000002b94f4a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b99e0);
    NativeHelper_011df0b4(PTR_DAT_029bf7f0);
    bRam0000000002b94f4a = 1;
  }
  MovingObject_SetY_130939c((MovingObject *)self,0.0,(void *)0x0);
  self->IsFalling = false;
  self->IsJumping = false;
  self->JumpAfterDelay = false;
  self->IsOverGround = false;
  self->JumpVelocity = 80.0;
  self->GroundHeight = 0.0;
  pvVar2 = (void *)NativeHelper_014d0e0c(self,*(undefined8 *)puVar1);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = UnityEngine_Animation_get_Item_24e0e70(pvVar2,*(void **)PTR_DAT_029bf7f0,(void *)0x0);
    uVar3 = NativeHelper_0260bf44(0,0x3f800000,0);
    if (pvVar2 != (void *)0x0) {
      if (pcRam0000000002b9be30 == (code *)0x0) {
        pcRam0000000002b9be30 = (code *)NativeHelper_011df070(&UNK_007b8ae3);
      }
                    /* WARNING: Could not recover jumptable at 0x025e5400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9be30)(uVar3,pvVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

