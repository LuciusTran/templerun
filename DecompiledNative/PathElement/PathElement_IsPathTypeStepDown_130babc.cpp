// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsPathTypeStepDown(PathType type) { }
// Ghidra address: 0140fabc; ELF VA: 0x130fabc; file offset: 0x130babc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPathTypeStepDown_130babc(int type,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  
  puVar3 = PTR_DAT_029c1e10;
  puVar2 = PTR_DAT_029c1e08;
  puVar1 = PTR_DAT_029c1e00;
  if ((bRam0000000002b950ef & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1e10);
    NativeHelper_011df0b4(PTR_DAT_029c1e00);
    NativeHelper_011df0b4(PTR_DAT_029c1e08);
    bRam0000000002b950ef = 1;
  }
  lVar4 = NativeHelper_011df12c(*(undefined8 *)puVar1,4);
  NativeHelper_01f3db6c(lVar4,*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar3;
  uVar5 = (ulong)(uint)type;
  if (*(long *)(lVar7 + 0x38) == 0) {
    uVar5 = NativeHelper_011b5290(lVar7);
  }
  if (lVar4 != 0) {
    bVar8 = 0 < *(int *)(lVar4 + 0x18);
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar9 = 0;
      do {
        plVar6 = (long *)func_0x014b08c8(**(undefined8 **)(lVar7 + 0x38));
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        uVar5 = 0;
        if (plVar6 == (long *)0x0) goto code_r0x01505b64;
        uVar5 = (**(code **)(*plVar6 + 0x1b8))
                          (plVar6,*(undefined4 *)(lVar4 + 0x20 + uVar9 * 4),(ulong)(uint)type,
                           *(undefined8 *)(*plVar6 + 0x1c0));
        if ((uVar5 & 1) != 0) {
          return bVar8;
        }
        uVar9 = uVar9 + 1;
        bVar8 = (long)uVar9 < (long)*(int *)(lVar4 + 0x18);
      } while ((long)uVar9 < (long)*(int *)(lVar4 + 0x18));
    }
    return bVar8;
  }
code_r0x01505b64:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(uVar5);
}

