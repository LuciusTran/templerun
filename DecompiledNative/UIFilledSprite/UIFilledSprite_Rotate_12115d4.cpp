// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Rotate(Vector2[] v, int offset) { }
// Ghidra address: 013155d4; ELF VA: 0x12155d4; file offset: 0x12115d4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIFilledSprite_Rotate_12115d4(UIFilledSprite *self,void *v,int offset,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (0 < offset) {
    if (v == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    do {
      if (*(uint *)((long)v + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      offset = offset + -1;
      uVar1 = NEON_rev64(*(undefined8 *)((long)v + 0x38),4);
      uVar2 = NEON_rev64(*(undefined8 *)((long)v + 0x30),4);
      auVar3 = NEON_rev64(*(undefined1 (*) [16])((long)v + 0x20),4);
      *(undefined8 *)((long)v + 0x38) = uVar2;
      *(long *)((long)v + 0x30) = auVar3._8_8_;
      *(long *)((long)v + 0x28) = auVar3._0_8_;
      *(undefined8 *)((long)v + 0x20) = uVar1;
    } while (offset != 0);
  }
  return;
}

