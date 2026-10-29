// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void InitializeGameCenter() { }
// Ghidra address: 0138b900; ELF VA: 0x128b900; file offset: 0x1287900
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_InitializeGameCenter_1287900(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *x;
  void *pvVar4;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cb7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    bRam0000000002b94cb7 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar4 = *(void **)puVar2;
  if (*(int *)((long)pvVar4 + 0xe0) == 0) {
    pvVar4 = (void *)NativeHelper_011df1bc(pvVar4,runtimeMethod);
  }
  bVar3 = GameController_AreGameServicesAvailable_1287aec(pvVar4);
  if (!bVar3) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bc558;
  if ((bRam0000000002b94a06 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc558,0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94a06 = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  pvVar4 = *(void **)puVar2;
  if (*(int *)((long)pvVar4 + 0xe0) == 0) {
    pvVar4 = (void *)NativeHelper_011df1bc();
  }
  x = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84(pvVar4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (x != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0135c360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*x + 0x1a8))(x,1,*(undefined8 *)(*x + 0x1b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  return;
}

