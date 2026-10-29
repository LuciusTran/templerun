// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ChangeLevel() { }
// Ghidra address: 0139b35c; ELF VA: 0x129b35c; file offset: 0x129735c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_ChangeLevel_129735c(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  undefined4 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_029bde80;
  if ((bRam0000000002b94d06 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    bRam0000000002b94d06 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
    lVar3 = *(long *)puVar1;
    runtimeMethod = extraout_x1_00;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
  iVar2 = *(int *)(lVar5 + 0x44);
  if (iVar2 == 3) {
    iVar2 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
    lVar3 = *(long *)puVar1;
    uVar4 = 1;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
LAB_0139b41c:
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar3 = *(long *)puVar1;
    }
  }
  else {
    if (iVar2 == 2) {
      iVar2 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
      lVar3 = *(long *)puVar1;
      uVar4 = 3;
      if (iVar2 == 0) {
        uVar4 = 1;
      }
      goto LAB_0139b41c;
    }
    if (iVar2 != 1) {
      return;
    }
    if (*(int *)(lVar3 + 0xe0) != 0) {
      uVar4 = 2;
      goto LAB_0139b440;
    }
    NativeHelper_011df1bc(lVar3,runtimeMethod);
    lVar3 = *(long *)puVar1;
    uVar4 = 2;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
LAB_0139b440:
  *(undefined4 *)(lVar5 + 0x44) = uVar4;
  return;
}

