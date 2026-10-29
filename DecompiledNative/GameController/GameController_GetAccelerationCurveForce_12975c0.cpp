// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static float GetAccelerationCurveForce(int index) { }
// Ghidra address: 0139b5c0; ELF VA: 0x129b5c0; file offset: 0x12975c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float GameController_GetAccelerationCurveForce_12975c0(int index,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *extraout_x1;
  float fVar4;
  
  if ((bRam0000000002b94d2b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bafe8);
    bRam0000000002b94d2b = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b9758;
  fVar4 = 0.0;
  if ((uint)index < 4) {
    lVar3 = *(long *)PTR_DAT_029b9758;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar3,runtimeMethod);
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    iVar2 = NativeHelper_01a154bc(lVar3,index,*(undefined8 *)PTR_DAT_029bafe8);
    fVar4 = (float)iVar2 / 100.0;
  }
  return fVar4;
}

