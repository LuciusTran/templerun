// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void ResetIsVideoAvailableFirstCheck() { }
// Ghidra address: 01391ccc; ELF VA: 0x1291ccc; file offset: 0x128dccc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_ResetIsVideoAvailableFirstCheck_128dccc(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *x;
  
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
  x = (void *)**(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
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

