// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPath(PathDirection direction) { }
// Ghidra address: 0140fd38; ELF VA: 0x130fd38; file offset: 0x130bd38
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement * PathElement_GetPath_130bd38(PathElement *self,int direction,void *runtimeMethod)

{
  PathElement **ppPVar1;
  
  switch(direction) {
  case 1:
    ppPVar1 = &self->PathNorth;
    break;
  case 2:
    ppPVar1 = &self->PathEast;
    break;
  case 3:
    ppPVar1 = &self->PathSouth;
    break;
  case 4:
    ppPVar1 = &self->PathWest;
    break;
  default:
    return (PathElement *)0x0;
  }
  return *ppPVar1;
}

