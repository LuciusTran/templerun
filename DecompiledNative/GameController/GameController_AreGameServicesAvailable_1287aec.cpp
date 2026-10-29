// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool AreGameServicesAvailable() { }
// Ghidra address: 0138baec; ELF VA: 0x128baec; file offset: 0x1287aec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_AreGameServicesAvailable_1287aec(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  bool bVar4;
  void *runtimeMethod_00;
  long *x;
  
  puVar2 = PTR_DAT_029ba5a8;
  if ((bRam0000000002b94cb6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    bRam0000000002b94cb6 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = Imangi_Utilities_ImangiNetworkHelper_CheckNetworkStatus_1234d00((void *)0x0);
  if (!bVar4) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029bc558;
  if ((bRam0000000002b94a03 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94a03 = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  runtimeMethod_00 = *(void **)puVar2;
  if (*(int *)((long)runtimeMethod_00 + 0xe0) == 0) {
    runtimeMethod_00 = (void *)NativeHelper_011df1bc();
  }
  x = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84(runtimeMethod_00);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar4 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (x != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0135c134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*x + 0x188))(x,*(undefined8 *)(*x + 400));
      return (bool)uVar3;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  return false;
}

