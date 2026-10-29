// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float get_alpha() { }
// Ghidra address: 0130aeb4; ELF VA: 0x120aeb4; file offset: 0x1206eb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float UIWidget_get_alpha_1206eb4(UIWidget *self,void *runtimeMethod)

{
  return (self->mColor).component3;
}

