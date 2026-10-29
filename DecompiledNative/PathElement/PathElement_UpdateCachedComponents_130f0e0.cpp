// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateCachedComponents() { }
// Ghidra address: 014130e0; ELF VA: 0x13130e0; file offset: 0x130f0e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_UpdateCachedComponents_130f0e0(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  Recovered_Vector3 RVar3;
  Recovered_Vector3 RVar4;
  
  puVar1 = PTR_DAT_029c1ad8;
  if ((bRam0000000002b95100 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1ad8);
    bRam0000000002b95100 = 1;
  }
  pvVar2 = UnityEngine_Component_GetComponentsInChildren_13cd618(self,*(void **)puVar1);
  self->MyRenderers = pvVar2;
  pvVar2 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar2 != (void *)0x0) {
    RVar3 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
    pvVar2 = (void *)NativeHelper_0260e1a8
                               (RVar3.component0,RVar3.component1,RVar3.component2,self,0);
    if (pvVar2 != (void *)0x0) {
      RVar4 = UnityEngine_Transform_get_position_2516710(pvVar2,(void *)0x0);
      (self->Rectangle).component0 = RVar3.component0 + -30.0;
      (self->Rectangle).component1 = RVar4.component2 + -30.0;
      (self->Rectangle).component2 = 60.0;
      (self->Rectangle).component3 = 60.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

