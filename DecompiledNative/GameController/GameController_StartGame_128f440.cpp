// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartGame() { }
// Ghidra address: 01393440; ELF VA: 0x1293440; file offset: 0x128f440
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_StartGame_128f440(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  TRUserAttributes *self_00;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GameGUI *pGVar12;
  AudioManager *pAVar13;
  void *pvVar14;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *in_x2;
  UiLoadingSplashScreen *pUVar15;
  undefined8 *puVar16;
  
  puVar1 = PTR_DAT_029bd9d0;
  if ((bRam0000000002b94cea & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf10);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bdf18);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdf20);
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029bd9d0);
    NativeHelper_011df0b4(PTR_DAT_029bdf28);
    NativeHelper_011df0b4(PTR_DAT_029bdf30);
    NativeHelper_011df0b4(PTR_DAT_029bdf38);
    NativeHelper_011df0b4(PTR_DAT_029bdbb8);
    NativeHelper_011df0b4(PTR_DAT_029bdb88);
    NativeHelper_011df0b4(PTR_DAT_029ba780);
    bRam0000000002b94cea = 1;
    runtimeMethod = extraout_x1;
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar8,runtimeMethod);
    lVar8 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_029bdbb8;
  puVar3 = PTR_DAT_029bdb88;
  puVar2 = PTR_DAT_029ba780;
  puVar1 = PTR_DAT_029b7f98;
  self_00 = *(TRUserAttributes **)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (self_00 == (TRUserAttributes *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  TRUserAttributes_Update_12b9e78(self_00,(void *)0x0);
  GameController_SetFeature_1287588(self,*(void **)puVar3,in_x2);
  GameController_SetFeature_1287588(self,*(void **)puVar2,in_x2);
  GameController_SetFeature_1287588(self,*(void **)puVar4,in_x2);
  pUVar15 = self->LoadingScreenComponent;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bdf20;
  puVar16 = (undefined8 *)PTR_DAT_029bdf18;
  puVar1 = PTR_DAT_029b8c90;
  bVar7 = UnityEngine_object_op_Inequality_250c8e4(pUVar15,(void *)0x0,(void *)0x0);
  if (bVar7) {
    pUVar15 = self->LoadingScreenComponent;
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    puVar6 = PTR_DAT_029bdf38;
    NativeHelper_01f80268(uVar9,pUVar15,*(undefined8 *)PTR_DAT_029bdf38,0);
    puVar3 = PTR_DAT_029bdf10;
    pUVar15 = self->LoadingScreenComponent;
    uVar10 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf10);
    puVar5 = PTR_DAT_029bdf30;
    NativeHelper_016955d8(uVar10,pUVar15,*(undefined8 *)PTR_DAT_029bdf30,0);
    pUVar15 = self->LoadingScreenComponent;
    uVar11 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    puVar4 = PTR_DAT_029bdf28;
    NativeHelper_01f80268(uVar11,pUVar15,*(undefined8 *)PTR_DAT_029bdf28,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Promotion_UnregisterCallbacks_131d71c(uVar9,uVar10,uVar11,0,0);
    pUVar15 = self->LoadingScreenComponent;
    uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01f80268(uVar9,pUVar15,*(undefined8 *)puVar6,0);
    pUVar15 = self->LoadingScreenComponent;
    uVar10 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
    NativeHelper_016955d8(uVar10,pUVar15,*(undefined8 *)puVar5,0);
    pUVar15 = self->LoadingScreenComponent;
    uVar11 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01f80268(uVar11,pUVar15,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)PTR_DAT_029bbd80 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    PrivacyManager_UnregisterLanguageFileCallbacks_13134f4(uVar9,uVar10,uVar11,0);
    puVar16 = (undefined8 *)PTR_DAT_029bdf18;
  }
  puVar3 = PTR_DAT_029bdef8;
  uVar9 = NativeHelper_011df2d0(*(undefined8 *)puVar1);
  NativeHelper_01f80268(uVar9,self,*puVar16,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  Promotion_UnregisterCallbacks_131d71c(0,0,0,uVar9,0);
  GameController_InitializeAdManager_128cc64(self,runtimeMethod_00);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar7 = SavedGame_LoadGame_13209bc((void *)0x0);
  if (bVar7) {
    return;
  }
  pGVar12 = self->GameInterface;
  if (pGVar12 != (GameGUI *)0x0) {
    (**(code **)(*(long *)pGVar12 + 0x198))(pGVar12,*(undefined8 *)(*(long *)pGVar12 + 0x1a0));
    if (self->MainCamera != (GameCamera *)0x0) {
      GameCamera_SetMainMenuAniatmion_12d7f20(self->MainCamera,false,(void *)0x0);
      pAVar13 = self->Audio;
      if (pAVar13 != (AudioManager *)0x0) {
        if (pAVar13->Music != (void *)0x0) {
          UnityEngine_AudioSource_Stop_24e3e6c(pAVar13->Music,(void *)0x0);
          if (pAVar13->Music != (void *)0x0) {
            UnityEngine_AudioSource_set_clip_24e3ce4
                      (pAVar13->Music,pAVar13->MainMenuMusic,(void *)0x0);
            pvVar14 = pAVar13->Music;
            if (pvVar14 != (void *)0x0) {
              if (pcRam0000000002b9bf40 == (code *)0x0) {
                pcRam0000000002b9bf40 = (code *)NativeHelper_011df070(&UNK_007acce7,0);
              }
                    /* WARNING: Could not recover jumptable at 0x025e7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000002b9bf40)(pvVar14,0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

