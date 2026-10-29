// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SnapStartGame() { }
// Ghidra address: 013dc170; ELF VA: 0x12dc170; file offset: 0x12d8170
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_SnapStartGame_12d8170(GameCamera *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Recovered_Vector3 RVar5;
  
  self->ShowMainMenuAfterFollow = false;
  MovingObject_StopFollowingPath_1309138((MovingObject *)self,(void *)0x0);
  MovingObject_ClearFollowingPath_1309140((MovingObject *)self,(void *)0x0);
  pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar1 != (void *)0x0) {
    uVar4 = 0;
    uVar3 = 0;
    UnityEngine_Transform_set_position_25167b0(pvVar1,self->EndLocation,(void *)0x0);
    if (self->GamePlayer != (CharacterPlayer *)0x0) {
      self->GroundHeight = self->GamePlayer->GroundHeight;
      if (self->MainCameraFocusPoint != (MovingObject *)0x0) {
        lVar2 = NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
        if ((self->Player != (CommonPlayer *)0x0) &&
           (pvVar1 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar1 != (void *)0x0)) {
          RVar5 = UnityEngine_Transform_get_position_2516710(pvVar1,(void *)0x0);
          if (self->Player != (CommonPlayer *)0x0) {
            pvVar1 = (void *)NativeHelper_0260e1a8
                                       (RVar5.component0,CONCAT44(uVar3,RVar5.component1),
                                        CONCAT44(uVar4,RVar5.component2),self->Player,0);
            if (pvVar1 != (void *)0x0) {
              UnityEngine_Transform_get_position_2516710(pvVar1,(void *)0x0);
              if (lVar2 != 0) {
                if (pcRam0000000002b9d2b0 == (code *)0x0) {
                  pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
                }
                (*pcRam0000000002b9d2b0)(lVar2,&stack0xffffffffffffffd0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

