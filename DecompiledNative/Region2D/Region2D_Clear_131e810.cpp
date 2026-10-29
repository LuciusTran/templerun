// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Clear() { }
// Ghidra address: 01422810; ELF VA: 0x1322810; file offset: 0x131e810
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Region2D_Clear_131e810(Region2D *self,void *runtimeMethod)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = runtimeMethod;
  auVar2._0_8_ = self;
  if ((bRam0000000002b95195 & 1) == 0) {
    auVar2 = NativeHelper_011df0b4(PTR_DAT_029c2420);
    bRam0000000002b95195 = 1;
  }
  pvVar1 = self->Points;
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((long)pvVar1 + 0x18) = 0;
    *(int *)((long)pvVar1 + 0x1c) = *(int *)((long)pvVar1 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(auVar2._0_8_,auVar2._8_8_);
}

