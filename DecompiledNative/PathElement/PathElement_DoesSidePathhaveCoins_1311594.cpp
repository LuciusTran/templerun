// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool DoesSidePathhaveCoins() { }
// Ghidra address: 01415594; ELF VA: 0x1315594; file offset: 0x1311594
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x01415528) */
/* WARNING: Removing unreachable block (ram,0x01415554) */
/* WARNING: Removing unreachable block (ram,0x01415558) */
/* WARNING: Removing unreachable block (ram,0x01415580) */
/* WARNING: Removing unreachable block (ram,0x0141556c) */
/* WARNING: Removing unreachable block (ram,0x01415590) */
/* WARNING: Removing unreachable block (ram,0x01415570) */
/* WARNING: Removing unreachable block (ram,0x01415584) */

bool PathElement_DoesSidePathhaveCoins_1311594(PathElement *self,void *runtimeMethod)

{
  undefined1 uVar1;
  bool bVar2;
  void *in_x2;
  
  bVar2 = PathElement_SideHasCoins_13114c4(self,1,in_x2);
  if (((!bVar2) && (bVar2 = PathElement_SideHasCoins_13114c4(self,2,in_x2), !bVar2)) &&
     (bVar2 = PathElement_SideHasCoins_13114c4(self,3,in_x2), !bVar2)) {
    if ((bRam0000000002b95108 & 1) == 0) {
      self = (PathElement *)NativeHelper_011df0b4(PTR_DAT_029b7f98);
      bRam0000000002b95108 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0141551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)UNK_007c45c5 * 4 + 0x1415520))(self);
    return (bool)uVar1;
  }
  return true;
}

