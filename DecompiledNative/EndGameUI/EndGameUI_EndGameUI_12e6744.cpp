// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public EndGameUI() { }
// Ghidra address: 013ea744; ELF VA: 0x12ea744; file offset: 0x12e6744
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_EndGameUI_12e6744(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  puVar2 = PTR_DAT_029c0948;
  puVar1 = PTR_DAT_029b8710;
  if ((bRam0000000002b94fd9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8710);
    NativeHelper_011df0b4(PTR_DAT_029c0948);
    bRam0000000002b94fd9 = 1;
  }
  self->ShowTweetButton = true;
  self->ShowStatsButton = true;
  pvVar3 = (void *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  self->_FirstSlide = true;
  self->scoreAnimationAdditionAmount = 1;
  self->StatsSpriteName = pvVar3;
  pvVar3 = *(void **)puVar2;
  self->field_0x40 = 1;
  self->TwitterLink = pvVar3;
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b9cd18 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
    bRam0000000002b9cd18 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  return;
}

