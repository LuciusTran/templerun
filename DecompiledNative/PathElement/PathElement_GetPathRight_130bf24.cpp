// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PathElement GetPathRight(PathDirection origin) { }
// Ghidra address: 0140ff24; ELF VA: 0x130ff24; file offset: 0x130bf24
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement * PathElement_GetPathRight_130bf24(PathElement *self,int origin,void *runtimeMethod)

{
  bool bVar1;
  PathElement *pPVar2;
  
  bVar1 = PathElement_IsTurn_130b174(self,(void *)(ulong)(uint)origin);
  if (bVar1) {
    switch(origin) {
    case 1:
      pPVar2 = (PathElement *)0x0;
      if (((uint)self->Type < 10) && ((1 << (ulong)(self->Type & 0x1f) & 0x2a0U) != 0)) {
        pPVar2 = self->PathWest;
      }
      break;
    case 2:
      pPVar2 = (PathElement *)0x0;
      if (((uint)self->Type < 10) && ((1 << (ulong)(self->Type & 0x1f) & 0x340U) != 0)) {
        pPVar2 = self->PathNorth;
      }
      break;
    case 3:
      pPVar2 = (PathElement *)0x0;
      if (((uint)self->Type < 0xb) && ((1 << (ulong)(self->Type & 0x1f) & 0x510U) != 0)) {
        pPVar2 = self->PathEast;
      }
      break;
    case 4:
      pPVar2 = (PathElement *)0x0;
      if (((uint)self->Type < 0xb) && ((1 << (ulong)(self->Type & 0x1f) & 0x488U) != 0)) {
        pPVar2 = self->PathSouth;
      }
      break;
    default:
      goto LAB_0140ff8c;
    }
  }
  else {
LAB_0140ff8c:
    pPVar2 = (PathElement *)0x0;
  }
  return pPVar2;
}

