// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPathForward(PathDirection origin) { }
// Ghidra address: 0140fd88; ELF VA: 0x130fd88; file offset: 0x130bd88
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement * PathElement_GetPathForward_130bd88(PathElement *self,int origin,void *runtimeMethod)

{
  PathElement **ppPVar1;
  
  switch(origin) {
  case 1:
    ppPVar1 = &self->PathSouth;
    break;
  case 2:
    ppPVar1 = &self->PathWest;
    break;
  case 3:
    ppPVar1 = &self->PathNorth;
    break;
  case 4:
    ppPVar1 = &self->PathEast;
    break;
  default:
    return (PathElement *)0x0;
  }
  return *ppPVar1;
}

