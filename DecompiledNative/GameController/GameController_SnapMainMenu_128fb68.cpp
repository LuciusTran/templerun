// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SnapMainMenu() { }
// Ghidra address: 01393b68; ELF VA: 0x1293b68; file offset: 0x128fb68
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SnapMainMenu_128fb68(GameController *self,void *runtimeMethod)

{
  GameGUI *pGVar1;
  AudioManager *pAVar2;
  void *pvVar3;
  
  GameController_RestartGame_128fbbc(self,runtimeMethod);
  pGVar1 = self->GameInterface;
  if (pGVar1 != (GameGUI *)0x0) {
    (**(code **)(*(long *)pGVar1 + 0x198))(pGVar1,*(undefined8 *)(*(long *)pGVar1 + 0x1a0));
    self->IsIntroScene = true;
    if (self->MainCamera != (GameCamera *)0x0) {
      GameCamera_SetMainMenuAniatmion_12d7f20(self->MainCamera,true,(void *)0x0);
      pAVar2 = self->Audio;
      if (pAVar2 != (AudioManager *)0x0) {
        if (pAVar2->Music != (void *)0x0) {
          UnityEngine_AudioSource_Stop_24e3e6c(pAVar2->Music,(void *)0x0);
          if (pAVar2->Music != (void *)0x0) {
            UnityEngine_AudioSource_set_clip_24e3ce4
                      (pAVar2->Music,pAVar2->MainMenuMusic,(void *)0x0);
            pvVar3 = pAVar2->Music;
            if (pvVar3 != (void *)0x0) {
              if (pcRam0000000002b9bf40 == (code *)0x0) {
                pcRam0000000002b9bf40 = (code *)NativeHelper_011df070(&UNK_007acce7,0);
              }
                    /* WARNING: Could not recover jumptable at 0x025e7d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000002b9bf40)(pvVar3,0);
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

