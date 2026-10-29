// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateClass() { }
// Ghidra address: 013ffba0; ELF VA: 0x12ffba0; file offset: 0x12fbba0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_UpdateClass_12fbba0(StoreItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029c10b8;
  if ((bRam0000000002b95075 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c10b8);
    bRam0000000002b95075 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)&self->field_0x20 < *(uint *)(lVar2 + 0x18)) {
      *(undefined4 *)&self->field_0x24 =
           *(undefined4 *)(lVar2 + (long)(int)*(uint *)&self->field_0x20 * 4 + 0x20);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

