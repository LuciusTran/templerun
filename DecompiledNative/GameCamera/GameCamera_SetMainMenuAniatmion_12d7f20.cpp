// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetMainMenuAniatmion(bool SnapToEnd = false) { }
// Ghidra address: 013dbf20; ELF VA: 0x12dbf20; file offset: 0x12d7f20
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_SetMainMenuAniatmion_12d7f20(GameCamera *self,bool SnapToEnd,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  MainMenu *pMVar5;
  void *pvVar6;
  MovingObject_MovingObjectPathNode *pMVar7;
  void *extraout_x1;
  Recovered_Vector3 RVar8;
  
  pvVar6 = (void *)(ulong)SnapToEnd;
  if ((bRam0000000002b94f62 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf50);
    bRam0000000002b94f62 = 1;
    pvVar6 = extraout_x1;
  }
  if (SnapToEnd) {
    GameCamera_SnapStartGame_12d8170(self,pvVar6);
    pMVar5 = self->MainMenuGUI;
    if (pMVar5 != (MainMenu *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013dbf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pMVar5 + 0x1a8))(pMVar5,0,*(undefined8 *)(*(long *)pMVar5 + 0x1b0));
      return;
    }
  }
  else {
    pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar6 != (void *)0x0) {
      UnityEngine_Transform_set_position_25167b0(pvVar6,self->StartLocation,(void *)0x0);
      MovingObject_ClearFollowingPath_1309140((MovingObject *)self,(void *)0x0);
      puVar4 = PTR_DAT_029bdf50;
      pMVar7 = (MovingObject_MovingObjectPathNode *)
               NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf50);
      MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar7,(void *)0x0);
      if (pMVar7 != (MovingObject_MovingObjectPathNode *)0x0) {
        pMVar7->TimeStamp = 0.0;
        pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar6 != (void *)0x0) {
          RVar8 = UnityEngine_Transform_get_position_2516710(pvVar6,(void *)0x0);
          (pMVar7->Location).component0 = RVar8.component0;
          (pMVar7->Location).component1 = RVar8.component1;
          (pMVar7->Location).component2 = RVar8.component2;
          pMVar7->Ease = true;
          MovingObject_AddFollowingPathNode_1308f94((MovingObject *)self,pMVar7,(void *)0x0);
          pMVar7 = (MovingObject_MovingObjectPathNode *)NativeHelper_011df2d0(*(undefined8 *)puVar4)
          ;
          MovingObject_MovingObjectPathNode_MovingObjectPathNode_1309120(pMVar7,(void *)0x0);
          if (pMVar7 != (MovingObject_MovingObjectPathNode *)0x0) {
            pMVar7->TimeStamp = self->IntroDuration;
            fVar1 = (self->EndLocation).component2;
            fVar2 = (self->EndLocation).component0;
            fVar3 = (self->EndLocation).component1;
            pMVar7->Ease = true;
            (pMVar7->Location).component2 = fVar1;
            (pMVar7->Location).component0 = fVar2;
            (pMVar7->Location).component1 = fVar3;
            MovingObject_AddFollowingPathNode_1308f94((MovingObject *)self,pMVar7,(void *)0x0);
            MovingObject_StartFollowingPath_1309128((MovingObject *)self,(void *)0x0);
            self->ShowMainMenuAfterFollow = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

