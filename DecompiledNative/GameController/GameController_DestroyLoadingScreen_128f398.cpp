// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DestroyLoadingScreen() { }
// Ghidra address: 01393398; ELF VA: 0x1293398; file offset: 0x128f398
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_DestroyLoadingScreen_128f398(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  void *extraout_x1;
  UiLoadingSplashScreen *x;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94ce9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94ce9 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  x = self->LoadingScreenComponent;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->LoadingScreenComponent != (UiLoadingSplashScreen *)0x0) {
      uVar4 = NativeHelper_0260e1e4(self->LoadingScreenComponent,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar3);
      }
      puVar1 = PTR_DAT_029b7f98;
      if ((bRam0000000002b9cef0 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
        bRam0000000002b9cef0 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      if (pcRam0000000002b9cee8 == (code *)0x0) {
        pcRam0000000002b9cee8 = (code *)NativeHelper_011df070(&UNK_007b7e82);
      }
                    /* WARNING: Could not recover jumptable at 0x02614d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000002b9cee8)(0,uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  return;
}

