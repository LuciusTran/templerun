// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveMeVideo_Watch() { }
// Ghidra address: 01394ad4; ELF VA: 0x1294ad4; file offset: 0x1290ad4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SaveMeVideo_Watch_1290ad4(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  Imangi_Ad_AdManager *inAdMngr;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cf4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    bRam0000000002b94cf4 = 1;
    runtimeMethod = extraout_x1;
  }
  self->CancelledSaveMeVideo = false;
  self->SkippedSaveMeVideo = false;
  puVar1 = PTR_DAT_029b7f98;
  self->SaveMePromptTimedOut = false;
  self->ClosedSaveMeVideo = false;
  self->WatchedSavedMeVideo = false;
  pvVar5 = *(void **)puVar2;
  if (*(int *)((long)pvVar5 + 0xe0) == 0) {
    pvVar5 = (void *)NativeHelper_011df1bc(pvVar5,runtimeMethod);
  }
  inAdMngr = GameController_GetAdManager_128d9a0(pvVar5);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  pvVar5 = (void *)0x0;
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(inAdMngr,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return;
  }
  if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) != (AudioManager *)0x0) {
    AudioManager_StopMusic_12bb174
              ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x0);
    GameController_HookAdEvents_1290850(self,inAdMngr,pvVar5);
    if (inAdMngr != (Imangi_Ad_AdManager *)0x0) {
      (**(code **)(*(long *)inAdMngr + 0x2f8))
                (inAdMngr,0,*(undefined8 *)PTR_DAT_029b9680,*(undefined8 *)PTR_DAT_029b9680,
                 *(undefined8 *)(*(long *)inAdMngr + 0x300));
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar2 = PTR_DAT_029b9758;
      if ((bRam0000000002b94ce0 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b9758);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94ce0 = 1;
      }
      puVar1 = PTR_DAT_029b7f98;
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar4 = *(long *)puVar2;
      }
      pvVar5 = (void *)**(undefined8 **)(lVar4 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
      if (bVar3) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar4 = *(long *)puVar2;
        }
        if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        *(undefined1 *)(**(long **)(lVar4 + 0xb8) + 0x21e) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

