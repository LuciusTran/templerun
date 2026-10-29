// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool ACertainTypeCheck(PathType currentType, PathType parentType) { }
// Ghidra address: 014106b8; ELF VA: 0x13106b8; file offset: 0x130c6b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_ACertainTypeCheck_130c6b8
               (PathElement *self,int currentType,int parentType,void *runtimeMethod)

{
  uint uVar1;
  
  switch(parentType) {
  case 0x13:
  case 0x14:
  case 0x15:
    uVar1 = currentType - 0x13;
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    uVar1 = currentType - 0x16;
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar1 = currentType - 0x19;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    uVar1 = currentType - 0x1c;
    break;
  default:
    return false;
  }
  return uVar1 < 3;
}

