// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float GetPathHeight() { }
// Ghidra address: 0140fd10; ELF VA: 0x130fd10; file offset: 0x130bd10
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float PathElement_GetPathHeight_130bd10(PathElement *self,void *runtimeMethod)

{
  float fVar1;
  
  if (self->Level == 1) {
    return -15.0;
  }
  fVar1 = 15.0;
  if (self->Level != 3) {
    fVar1 = 0.0;
  }
  return fVar1;
}

