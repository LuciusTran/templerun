// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsACoin() { }
// Ghidra address: 013bfc44; ELF VA: 0x12bfc44; file offset: 0x12bbc44
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool BonusItem_IsACoin_12bbc44(BonusItem *self,void *runtimeMethod)

{
  return *(int *)&self->field_0x78 - 1U < 3;
}

