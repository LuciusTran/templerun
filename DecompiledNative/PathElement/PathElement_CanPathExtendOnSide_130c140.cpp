// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool CanPathExtendOnSide(PathDirection direction) { }
// Ghidra address: 01410140; ELF VA: 0x1310140; file offset: 0x130c140
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_CanPathExtendOnSide_130c140(PathElement *self,int direction,void *runtimeMethod)

{
  bool bVar1;
  void *runtimeMethod_00;
  uint uVar2;
  
  bVar1 = PathElement_IsStraightVert_130b59c(self,(void *)(ulong)(uint)direction);
  if (bVar1) {
    if ((direction | 2U) != 3) {
      return false;
    }
    return true;
  }
  bVar1 = PathElement_IsStraightHorz_130b618(self,runtimeMethod_00);
  if (bVar1) {
    bVar1 = direction == 2;
code_r0x0141017c:
    if (bVar1) {
      return true;
    }
    if (direction != 4) {
      return false;
    }
    return true;
  }
  switch(self->Type) {
  case 3:
    uVar2 = direction - 3;
    goto code_r0x014101f4;
  case 4:
    if ((direction & 0xfffffffeU) == 2) {
      return true;
    }
    return false;
  case 5:
    bVar1 = direction == 1;
    goto code_r0x0141017c;
  case 6:
    uVar2 = direction - 1;
code_r0x014101f4:
    if (uVar2 < 2) {
      return true;
    }
    break;
  case 7:
    if (direction - 1U < 4) {
      uVar2 = 0xd;
code_r0x0141023c:
      return (bool)((byte)(uVar2 >> (ulong)(direction - 1U & 0xf)) & 1);
    }
    break;
  case 8:
    if (direction - 1U < 3) {
      return true;
    }
    break;
  case 9:
    if (direction - 1U < 4) {
      uVar2 = 0xb;
      goto code_r0x0141023c;
    }
    break;
  default:
    if ((direction - 2U < 3) && (self->Type == 10)) {
      return true;
    }
  }
  return false;
}

