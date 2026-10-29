// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013921e4; ELF VA: 0x12921e4; file offset: 0x128e1e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_Start_128e1e4(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  GameGUI *pGVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_00;
  
  puVar1 = PTR_DAT_029bde40;
  if ((bRam0000000002b94ce3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde40);
    NativeHelper_011df0b4(PTR_DAT_029bcb60);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bde48);
    bRam0000000002b94ce3 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029bde48;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  puVar1 = PTR_DAT_029b9758;
  ErrorHandler_Initialize_1323ca8((void *)0x0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  TRRenderingManager_SetShaderKeywords_1323444((void *)0x0);
  lVar3 = *(long *)puVar1;
  pvVar4 = extraout_x1_00;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)puVar1;
    pvVar4 = extraout_x1_01;
  }
  **(undefined8 **)(lVar3 + 0xb8) = self;
  GameController_CreateRemoteConfigManager_128dd8c(self,pvVar4);
  GameController_LoadLevelInformation_128e344(self,runtimeMethod_00);
  if (self->Countdown != (UISprite *)0x0) {
    UnityEngine_Behaviour_set_enabled_250972c(self->Countdown,false,(void *)0x0);
    if (self->TutorialUIGameObjects != (void *)0x0) {
      NativeHelper_02610c54(self->TutorialUIGameObjects,0,0);
      pvVar4 = (void *)NativeHelper_01392f58(self);
      UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar4,(void *)0x0);
      puVar1 = PTR_DAT_029bcb60;
      pGVar5 = self->GameInterface;
      if (pGVar5 != (GameGUI *)0x0) {
        (**(code **)(*(long *)pGVar5 + 0x198))(pGVar5,*(undefined8 *)(*(long *)pGVar5 + 0x1a0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        Imangi_FirebasePlugin_FirebaseInit_Initialize_12660f0((void *)0x0,(void *)0x0);
        lVar3 = NativeHelper_01392fc0(self);
        if (lVar3 == 0) {
          NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
          uVar7 = NativeHelper_011df2d0();
          uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5930);
          NativeHelper_01ffed14(uVar7,uVar8,0);
        }
        else {
          if (pcRam0000000002b9ce48 == (code *)0x0) {
            pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
          }
          uVar6 = (*pcRam0000000002b9ce48)(self);
          if ((uVar6 & 1) != 0) {
            if (pcRam0000000002b9ce58 == (code *)0x0) {
              pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
            }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000002b9ce58)(self,lVar3);
            return;
          }
          NativeHelper_011df0c8(PTR_DAT_029baea0);
          uVar7 = NativeHelper_011df2d0();
          uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5920);
          NativeHelper_01f80968(uVar7,uVar8,0);
        }
        uVar8 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df1ac(uVar7,uVar8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

