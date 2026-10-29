// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_alpha(float value) { }
// Ghidra address: 0130aebc; ELF VA: 0x120aebc; file offset: 0x1206ebc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UIWidget_set_alpha_1206ebc(UIWidget *self,float value,void *runtimeMethod)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (self->mColor).component0;
  fVar1 = (self->mColor).component1;
  fVar2 = (self->mColor).component2;
  fVar4 = (self->mColor).component0 - fVar3;
  fVar5 = (self->mColor).component1 - fVar1;
  fVar6 = (self->mColor).component2 - fVar2;
  fVar7 = (self->mColor).component3 - value;
  if (_UNK_007a3b60 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
    (self->mColor).component0 = fVar3;
    (self->mColor).component1 = fVar1;
    (self->mColor).component2 = fVar2;
    (self->mColor).component3 = value;
    self->mChanged = true;
  }
  return;
}

