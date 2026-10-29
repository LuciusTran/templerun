// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_color(Color value) { }
// Ghidra address: 0130ae5c; ELF VA: 0x120ae5c; file offset: 0x1206e5c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIWidget_set_color_1206e5c(UIWidget *self,Recovered_Color value,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (self->mColor).component0 - value.component0;
  fVar2 = (self->mColor).component1 - value.component1;
  fVar3 = (self->mColor).component2 - value.component2;
  fVar4 = (self->mColor).component3 - value.component3;
  if (_UNK_007a3b60 <= fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) {
    (self->mColor).component0 = value.component0;
    (self->mColor).component1 = value.component1;
    (self->mColor).component2 = value.component2;
    (self->mColor).component3 = value.component3;
    self->mChanged = true;
  }
  return;
}

