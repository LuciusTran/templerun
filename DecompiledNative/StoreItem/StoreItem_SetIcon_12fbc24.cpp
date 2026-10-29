// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetIcon() { }
// Ghidra address: 013ffc24; ELF VA: 0x12ffc24; file offset: 0x12fbc24
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void StoreItem_SetIcon_12fbc24(StoreItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  UISprite *pUVar3;
  void *extraout_x1;
  uint uVar4;
  
  if ((bRam0000000002b95074 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c10b8);
    bRam0000000002b95074 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029c10b8;
  uVar4 = *(uint *)&self->field_0x20;
  if (uVar4 == 0x25) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_029c10b8;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
    uVar4 = *(uint *)&self->field_0x20;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
    if (self->Icon != (UISprite *)0x0) {
      UISprite_set_spriteName_12a2d48
                (self->Icon,*(void **)(lVar2 + (long)(int)uVar4 * 8 + 0x20),(void *)0x0);
      pUVar3 = self->Icon;
      if (pUVar3 != (UISprite *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013ffcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pUVar3 + 0x1a8))(pUVar3,*(undefined8 *)(*(long *)pUVar3 + 0x1b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

