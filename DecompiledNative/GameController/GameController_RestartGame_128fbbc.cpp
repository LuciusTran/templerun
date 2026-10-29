// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RestartGame() { }
// Ghidra address: 01393bbc; ELF VA: 0x1293bbc; file offset: 0x128fbbc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_RestartGame_128fbbc(GameController *self,void *runtimeMethod)

{
  void *pvVar1;
  MovingObject *pMVar2;
  void *runtimeMethod_00;
  Recovered_Vector3 value;
  
  if (self->Countdown != (UISprite *)0x0) {
    UnityEngine_Behaviour_set_enabled_250972c(self->Countdown,false,(void *)0x0);
    self->NearestElement = (PathElement *)0x0;
    self->LastNearestElement = (PathElement *)0x0;
    self->LastLevel = 2;
    self->TimeSinceGameStart = 0.0;
    if (self->GameInterface != (GameGUI *)0x0) {
      GameGUI_Reset_12e7c14(self->GameInterface,(void *)0x0);
      GameController_LoadLevelInformation_128e344(self,runtimeMethod_00);
      if (self->MainCamera != (GameCamera *)0x0) {
        GameCamera_Reset_12d73b4(self->MainCamera,(void *)0x0);
        if (self->MainCameraFocusPoint != (MovingObject *)0x0) {
          pvVar1 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0);
          if (cRam0000000002b94510 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b9368);
            cRam0000000002b94510 = '\x01';
          }
          if (pvVar1 != (void *)0x0) {
            UnityEngine_Transform_set_position_25167b0
                      (pvVar1,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0
                      );
            if (self->IsIntroScene != false) {
              if (self->MainCamera == (GameCamera *)0x0) goto LAB_01393ce4;
              MovingObject_ClearFollowingPath_1309140((MovingObject *)self->MainCamera,(void *)0x0);
              if (((self->MainCamera == (GameCamera *)0x0) ||
                  (pMVar2 = self->MainCamera->MainCameraFocusPoint, pMVar2 == (MovingObject *)0x0))
                 || (pvVar1 = (void *)NativeHelper_0260e1a8(pMVar2,0), pvVar1 == (void *)0x0))
              goto LAB_01393ce4;
              value.component2 = 150.0;
              value.component0 = 0.0;
              value.component1 = 10.0;
              UnityEngine_Transform_set_position_25167b0(pvVar1,value,(void *)0x0);
            }
            if (self->Scenery != (SceneryManager *)0x0) {
              SceneryManager_Reset_132234c(self->Scenery,(void *)0x0);
              self->AutoRestart = false;
              self->IsInCountdown = false;
              self->IsPaused = false;
              self->IsGameStarted = false;
              self->IsGameOver = false;
              self->IsGameOverFinished = false;
              return;
            }
          }
        }
      }
    }
  }
LAB_01393ce4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

