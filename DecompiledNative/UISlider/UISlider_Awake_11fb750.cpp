// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 012ff750; ELF VA: 0x11ff750; file offset: 0x11fb750
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UISlider_Awake_11fb750(UISlider *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_029b99a0;
  if ((bRam0000000002b945b0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9c68);
    NativeHelper_011df0b4(PTR_DAT_029b99a0);
    bRam0000000002b945b0 = 1;
  }
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  self->mTrans = pvVar3;
  plVar4 = UnityEngine_Component_GetComponent_13ccba8(self,*(void **)puVar2);
  if (plVar4 == (long *)0x0) {
    self->mCol = (void *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_029b9c68 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_029b9c68) {
      plVar4 = (long *)0x0;
    }
    self->mCol = plVar4;
  }
  return;
}

