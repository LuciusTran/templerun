// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Teleport(Vector3 pos) { }
// Ghidra address: 013c3738; ELF VA: 0x12c3738; file offset: 0x12bf738
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CommonPlayer_Teleport_12bf738(CommonPlayer *self,Recovered_Vector3 pos,void *runtimeMethod)

{
  void *self_00;
  
  self_00 = (void *)NativeHelper_0260e1a8(self,0);
  if (self_00 != (void *)0x0) {
    UnityEngine_Transform_set_position_25167b0(self_00,pos,(void *)0x0);
    (self->PreviousLocation).component0 = pos.component0;
    (self->PreviousLocation).component1 = pos.component1;
    (self->PreviousLocation).component2 = pos.component2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

