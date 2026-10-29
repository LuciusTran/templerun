// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 01404ad0; ELF VA: 0x1304ad0; file offset: 0x1300ad0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIGrowByAspectRatio_Start_1300ad0(UIGrowByAspectRatio *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_029ba1d0;
  if ((bRam0000000002b9508f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b9508f = 1;
  }
  puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) + (float)((ulong)puVar2[3] >> 0x20) * -0.5,
                     (float)*puVar2 + (float)puVar2[3] * -0.5);
  return;
}

