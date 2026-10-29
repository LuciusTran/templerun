// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool CanPathExtendOnSide2(PathDirection direction) { }
// Ghidra address: 01410514; ELF VA: 0x1310514; file offset: 0x130c514
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_CanPathExtendOnSide2_130c514(PathElement *self,int direction,void *runtimeMethod)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  void *message;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  puVar4 = PTR_DAT_029c1e48;
  puVar3 = PTR_DAT_029b8708;
  if ((bRam0000000002b950f3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1e50);
    NativeHelper_011df0b4(PTR_DAT_029c1e48);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029b9e18);
    NativeHelper_011df0b4(PTR_DAT_029c1e58);
    NativeHelper_011df0b4(PTR_DAT_029c1e60);
    NativeHelper_011df0b4(PTR_DAT_029c1e68);
    bRam0000000002b950f3 = 1;
  }
  bVar5 = PathElement_CanPathExtendOnSide2_130c514(self,direction,runtimeMethod);
  lVar6 = NativeHelper_011df12c(*(undefined8 *)puVar3,5);
  uStack_48 = *(undefined8 *)puVar4;
  uStack_40 = 0xffffffffffffffff;
  iStack_38 = self->Type;
  uVar7 = NativeHelper_02031f7c(&uStack_48,0);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (((uVar2 != 0) && (*(undefined8 *)(lVar6 + 0x20) = uVar7, uVar2 != 1)) &&
       (*(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_029b9e18, 2 < uVar2)) {
      puVar1 = (undefined8 *)PTR_DAT_029c1e68;
      if (!bVar5) {
        puVar1 = (undefined8 *)PTR_DAT_029c1e60;
      }
      *(undefined8 *)(lVar6 + 0x30) = *puVar1;
      puVar3 = PTR_DAT_029c1e50;
      if (uVar2 != 3) {
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_029c1e58;
        uStack_48 = *(undefined8 *)puVar3;
        uStack_40 = 0xffffffffffffffff;
        iStack_38 = direction;
        uVar7 = NativeHelper_02031f7c(&uStack_48,0);
        if (4 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x40) = uVar7;
          message = (void *)NativeHelper_01e9bf50(lVar6,0);
          DebugEx_Log_13222f4(message,(void *)0x0);
          return bVar5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2e4();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

