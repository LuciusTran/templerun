// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckHittingScenery() { }
// Ghidra address: 0139924c; ELF VA: 0x129924c; file offset: 0x129524c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013d7664) */

void GameController_CheckHittingScenery_129524c(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  SceneryElement *x;
  CharacterPlayer *pCVar5;
  GameCamera *pGVar6;
  Recovered_Vector3 RVar7;
  
  if ((bRam0000000002b94d01 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d01 = 1;
  }
  if ((self->GamePlayer != (CharacterPlayer *)0x0) &&
     (pvVar4 = (void *)NativeHelper_0260e1a8(self->GamePlayer,0), pvVar4 != (void *)0x0)) {
    RVar7 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
    puVar2 = PTR_DAT_029b7f98;
    if (self->Scenery != (SceneryManager *)0x0) {
      RVar7.component1 = RVar7.component1 + 3.0;
      x = SceneryManager_GetSceneryElementIntersectingSphere_13223bc
                    (self->Scenery,RVar7,1.0,(void *)0x0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar2);
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
      if (!bVar3) {
        return;
      }
      if (x != (SceneryElement *)0x0) {
        iVar1 = *(int *)&x->field_0x28;
        if ((iVar1 == 3) || (iVar1 == 2)) {
          pCVar5 = self->GamePlayer;
          if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01399384;
          pvVar4 = (void *)0x9;
        }
        else if (iVar1 == 1) {
          pCVar5 = self->GamePlayer;
          if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01399384;
          pvVar4 = (void *)0x2;
        }
        else {
          pCVar5 = self->GamePlayer;
          if (pCVar5 == (CharacterPlayer *)0x0) goto LAB_01399384;
          pvVar4 = (void *)0x0;
        }
        CharacterPlayer_Kill_12bda84(pCVar5,pvVar4,(void *)0x0);
        pCVar5 = self->GamePlayer;
        if (pCVar5 != (CharacterPlayer *)0x0) {
          (**(code **)(*(long *)pCVar5 + 0x188))(pCVar5,0,*(undefined8 *)(*(long *)pCVar5 + 400));
          pGVar6 = self->MainCamera;
          if (pGVar6 != (GameCamera *)0x0) {
            if (pGVar6->IsCameraShaking == false) {
              pGVar6->IsCameraShaking = true;
            }
            pGVar6->ShakeAfterDelay = false;
            pGVar6->TimeSinceCameraShakeStart = 0.0;
            pGVar6->CameraShakeMagnitude = 1.0;
            pGVar6->CameraShakeDuration = 1.0;
            pGVar6->CameraShakeDamperRate = 1.0;
            pGVar6->CameraShakeFrequencyMultiplier = 1.0;
            return;
          }
        }
      }
    }
  }
LAB_01399384:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

