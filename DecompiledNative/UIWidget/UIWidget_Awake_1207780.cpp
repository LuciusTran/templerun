// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 0130b780; ELF VA: 0x120b780; file offset: 0x1207780
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIWidget_Awake_1207780(UIWidget *self,void *runtimeMethod)

{
  undefined *puVar1;
  byte bVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029b7f80;
  if ((bRam0000000002b94619 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    bRam0000000002b94619 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = NativeHelper_025e9e10(0);
  self->mPlayMode = (bool)(bVar2 & 1);
  return;
}

