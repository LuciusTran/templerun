// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddPoint(Vector2 p) { }
// Ghidra address: 01422758; ELF VA: 0x1322758; file offset: 0x131e758
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Region2D_AddPoint_131e758(Region2D *self,Recovered_Vector2 p,void *runtimeMethod)

{
  uint uVar1;
  void *pvVar2;
  void *extraout_x1;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000002b95194 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2418);
    bRam0000000002b95194 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar2 = self->Points;
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)((long)pvVar2 + 0x10);
    lVar4 = *(long *)PTR_DAT_029c2418;
    *(int *)((long)pvVar2 + 0x1c) = *(int *)((long)pvVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)((long)pvVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 8;
        *(uint *)((long)pvVar2 + 0x18) = uVar1 + 1;
        *(float *)(lVar3 + 0x20) = p.component0;
        *(float *)(lVar3 + 0x24) = p.component1;
        return;
      }
      uVar1 = *(uint *)((long)pvVar2 + 0x18);
      func_0x01a75890(pvVar2,uVar1 + 1,
                      *(undefined8 *)
                       (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) +
                                                     0x70) + 0x20) + 0xc0) + 0x78));
      lVar3 = *(long *)((long)pvVar2 + 0x10);
      *(uint *)((long)pvVar2 + 0x18) = uVar1 + 1;
      if (lVar3 != 0) {
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)uVar1 * 8;
          *(float *)(lVar3 + 0x20) = p.component0;
          *(float *)(lVar3 + 0x24) = p.component1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(pvVar2,runtimeMethod);
}

