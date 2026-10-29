// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Update() { }
// Ghidra address: 013d9f80; ELF VA: 0x12d9f80; file offset: 0x12d5f80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Enemy_Update_12d5f80(Enemy *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  void *extraout_x1;
  float fVar4;
  float fVar5;
  Recovered_Vector3 RVar6;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b94f49 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94f49 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x80), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x1b0) == '\0') {
      pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar3 == (void *)0x0) goto LAB_013da108;
      RVar6 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
      if (-40.0 <= RVar6.component1) {
        if (self->JumpAfterDelay != false) {
          fVar5 = self->JumpDelay;
          fVar4 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
          fVar5 = fVar5 - fVar4;
          self->JumpDelay = fVar5;
          if (((fVar5 <= 0.0) && (self->IsJumping == false)) && (self->IsFalling == false)) {
            self->IsJumping = true;
            self->JumpAfterDelay = false;
            *(float *)&self->field_0x38 = self->JumpVelocity;
          }
        }
        MovingObject_ApplyForce_13091b0
                  ((MovingObject *)self,(Recovered_Vector3)ZEXT812(0xc37a000000000000),(void *)0x0);
        MovingObject_Update_1308914((MovingObject *)self,(void *)0x0);
        if (self->IsOverGround != false) {
          pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
          if (pvVar3 == (void *)0x0) goto LAB_013da108;
          RVar6 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
          if ((RVar6.component1 < self->GroundHeight) && (self->IsFalling == false)) {
            MovingObject_SetY_130939c((MovingObject *)self,self->GroundHeight,(void *)0x0);
            *(undefined4 *)&self->field_0x38 = 0;
            self->IsJumping = false;
          }
        }
        pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar3 == (void *)0x0) goto LAB_013da108;
        RVar6 = UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0);
        if (RVar6.component1 < self->GroundHeight + -2.0) {
          self->IsFalling = true;
        }
      }
    }
    return;
  }
LAB_013da108:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

