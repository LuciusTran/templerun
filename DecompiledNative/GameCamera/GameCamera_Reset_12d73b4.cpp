// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Reset() { }
// Ghidra address: 013db3b4; ELF VA: 0x12db3b4; file offset: 0x12d73b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameCamera_Reset_12d73b4(GameCamera *self,void *runtimeMethod)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  float fVar9;
  undefined8 in_d1;
  undefined4 uVar10;
  float fVar11;
  undefined8 in_d2;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  Recovered_Vector3 RVar15;
  Recovered_Vector3 RVar16;
  Recovered_Vector3 RVar17;
  Recovered_Quaternion value;
  
  uVar12 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar10 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((bRam0000000002b94f61 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94f61 = 1;
  }
  MovingObject_ClearFollowingPath_1309140((MovingObject *)self,(void *)0x0);
  self->ShowMainMenuAfterFollow = false;
  self->IsCameraShaking = false;
  self->ShakeAfterDelay = false;
  self->CameraShakeMagnitude = 0.0;
  self->CameraShakeDuration = 0.0;
  self->TimeSinceCameraShakeStart = 0.0;
  uVar2 = _UNK_007a3a60;
  self->CameraShakeDamperRate = 0.0;
  self->CameraShakeFrequencyMultiplier = 1.0;
  uVar5 = _UNK_007a3a60;
  _UNK_007a3a60 = (undefined4)uVar2;
  _UNK_007a3a64 = SUB84(uVar2,4);
  uVar3 = _UNK_007a3a64;
  self->FollowHeight = (float)_UNK_007a3a60;
  _UNK_007a3a60 = uVar5;
  self->FollowDistance = (float)uVar3;
  self->FocusHeight = 14.0;
  if (self->MainCameraFocusPoint != (MovingObject *)0x0) {
    pvVar6 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
    if ((self->Player != (CommonPlayer *)0x0) &&
       (pvVar7 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar7 != (void *)0x0)) {
      RVar15 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
      if (self->Player != (CommonPlayer *)0x0) {
        fVar14 = self->FocusHeightRun;
        pvVar7 = (void *)NativeHelper_0260e1a8
                                   (RVar15.component0,CONCAT44(uVar10,RVar15.component1),
                                    CONCAT44(uVar12,RVar15.component2),self->Player,0);
        if (pvVar7 != (void *)0x0) {
          RVar16 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
          puVar4 = PTR_DAT_029b9758;
          if (pvVar6 != (void *)0x0) {
            RVar15.component1 = fVar14;
            RVar15.component2 = RVar16.component1;
            UnityEngine_Transform_set_position_25167b0(pvVar6,RVar15,(void *)0x0);
            lVar8 = *(long *)puVar4;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              NativeHelper_011df1bc();
              lVar8 = *(long *)puVar4;
            }
            if ((**(long **)(lVar8 + 0xb8) != 0) &&
               (self->MainCameraFocusPoint != (MovingObject *)0x0)) {
              cVar1 = *(char *)(**(long **)(lVar8 + 0xb8) + 0x12a);
              pvVar6 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
              if ((self->Player != (CommonPlayer *)0x0) &&
                 ((pvVar7 = (void *)NativeHelper_0260e1a8(self->Player,0), pvVar7 != (void *)0x0 &&
                  (value = UnityEngine_Transform_get_rotation_2516900(pvVar7,(void *)0x0),
                  pvVar6 != (void *)0x0)))) {
                UnityEngine_Transform_set_rotation_2516988(pvVar6,value,(void *)0x0);
                pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
                if (cVar1 == '\0') {
                  if ((self->MainCameraFocusPoint == (MovingObject *)0x0) ||
                     (pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0),
                     pvVar7 == (void *)0x0)) goto LAB_013db644;
                  RVar15 = UnityEngine_Transform_get_position_2516710(pvVar7,(void *)0x0);
                  if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013db644;
                  pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
                  if (pvVar7 == (void *)0x0) goto LAB_013db644;
                  RVar16 = UnityEngine_Transform_get_forward_2516be0(pvVar7,(void *)0x0);
                  if (self->MainCameraFocusPoint == (MovingObject *)0x0) goto LAB_013db644;
                  fVar14 = self->FollowDistanceRun;
                  pvVar7 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
                  if (pvVar7 == (void *)0x0) goto LAB_013db644;
                  RVar17 = UnityEngine_Transform_get_up_2516b64(pvVar7,(void *)0x0);
                  if (pvVar6 == (void *)0x0) goto LAB_013db644;
                  fVar13 = self->FollowHeight;
                  fVar11 = (RVar15.component2 - RVar16.component2 * fVar14) +
                           RVar17.component2 * fVar13;
                  fVar9 = (RVar15.component1 - RVar16.component1 * fVar14) +
                          RVar17.component1 * fVar13;
                  fVar14 = (RVar15.component0 - RVar16.component0 * fVar14) +
                           RVar17.component0 * fVar13;
                }
                else {
                  if (pvVar6 == (void *)0x0) goto LAB_013db644;
                  fVar9 = (self->EndLocation).component1;
                  fVar11 = (self->EndLocation).component2;
                  fVar14 = (self->EndLocation).component0;
                }
                RVar16.component1 = fVar9;
                RVar16.component0 = fVar14;
                RVar16.component2 = fVar11;
                UnityEngine_Transform_set_position_25167b0(pvVar6,RVar16,(void *)0x0);
                lVar8 = NativeHelper_0260e1a8(self,0);
                if ((self->MainCameraFocusPoint != (MovingObject *)0x0) &&
                   (pvVar6 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0),
                   pvVar6 != (void *)0x0)) {
                  UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
                  if (lVar8 != 0) {
                    if (cRam0000000002b94818 == '\0') {
                      NativeHelper_011df0b4(PTR_DAT_029b9368,0);
                      cRam0000000002b94818 = '\x01';
                    }
                    if (pcRam0000000002b9d310 == (code *)0x0) {
                      pcRam0000000002b9d310 = (code *)NativeHelper_011df070(&UNK_007c393d);
                    }
                    (*pcRam0000000002b9d310)
                              (lVar8,&stack0xffffffffffffffd0,&stack0xffffffffffffffc0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013db644:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

