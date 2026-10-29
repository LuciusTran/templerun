// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 01310160; ELF VA: 0x1210160; file offset: 0x120c160
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UIAnchor_Start_120c160(UIAnchor *self,void *runtimeMethod)

{
  void *pvVar1;
  
  if ((bRam0000000002b94650 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba1c8);
    bRam0000000002b94650 = 1;
  }
  if (self->stretchToFill != false) {
    self->stretchToFill = false;
    pvVar1 = (void *)NativeHelper_0260e1e4(self,0);
    if ((pvVar1 == (void *)0x0) ||
       (pvVar1 = UnityEngine_GameObject_AddComponent_1402d84(pvVar1,*(void **)PTR_DAT_029ba1c8),
       pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    *(undefined4 *)((long)pvVar1 + 0x28) = 3;
    *(void **)((long)pvVar1 + 0x20) = self->uiCamera;
  }
  return;
}

