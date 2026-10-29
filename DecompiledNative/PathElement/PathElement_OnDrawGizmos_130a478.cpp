// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmos() { }
// Ghidra address: 0140e478; ELF VA: 0x130e478; file offset: 0x130a478
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_OnDrawGizmos_130a478(PathElement *self,void *runtimeMethod)

{
  undefined4 uVar1;
  Recovered_Color value;
  float afStack_30 [4];
  float afStack_20 [4];
  
  uVar1 = 0;
  if (self->IsInView != false) {
    uVar1 = 0x3f800000;
  }
  value.component1 = (float)uVar1;
  value.component0 = 1.0;
  value.component3 = 1.0;
  value.component2 = (float)uVar1;
  UnityEngine_Gizmos_set_color_24f05e0(value,(void *)0x0);
  afStack_30[0] = (self->Rectangle).component2;
  afStack_30[2] = (self->Rectangle).component3;
  afStack_20[0] = (self->Rectangle).component0 + afStack_30[0] * 0.5;
  afStack_20[2] = (self->Rectangle).component1 + afStack_30[2] * 0.5;
  afStack_20[1] = 0.0;
  afStack_30[1] = 0.0;
  if (pcRam0000000002b9c3d0 == (code *)0x0) {
    pcRam0000000002b9c3d0 = (code *)NativeHelper_011df070(&UNK_007bd85c);
  }
  (*pcRam0000000002b9c3d0)(afStack_20,afStack_30);
  return;
}

