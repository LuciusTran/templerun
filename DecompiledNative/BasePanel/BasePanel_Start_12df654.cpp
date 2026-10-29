// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override void Start() { }
// Ghidra address: 013e3654; ELF VA: 0x12e3654; file offset: 0x12df654
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BasePanel_Start_12df654(BasePanel *self,void *runtimeMethod)

{
  undefined *puVar1;
  UIPanel *pUVar2;
  
  puVar1 = PTR_DAT_029b9a60;
  if ((bRam0000000002b94f97 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9a60);
    bRam0000000002b94f97 = 1;
  }
  pUVar2 = UnityEngine_Component_GetComponent_13ccba8(self,*(void **)puVar1);
  self->Panel = pUVar2;
  return;
}

