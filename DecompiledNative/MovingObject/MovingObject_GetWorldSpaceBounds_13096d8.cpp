// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override Bounds GetWorldSpaceBounds() { }
// Ghidra address: 0140d6d8; ELF VA: 0x130d6d8; file offset: 0x13096d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * MovingObject_GetWorldSpaceBounds_13096d8(MovingObject *self,void *runtimeMethod)

{
  long lVar1;
  void *pvVar2;
  undefined8 *in_x8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000002b950dd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0360);
    bRam0000000002b950dd = 1;
  }
  lVar1 = NativeHelper_0260e1a8(self,0);
  if ((lVar1 != 0) &&
     (lVar1 = NativeHelper_014d0e0c(lVar1,*(undefined8 *)PTR_DAT_029c0360), lVar1 != 0)) {
    pvVar2 = (void *)NativeHelper_025f6840(&uStack_38,lVar1,0);
    in_x8[2] = uStack_28;
    in_x8[1] = uStack_30;
    *in_x8 = uStack_38;
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

