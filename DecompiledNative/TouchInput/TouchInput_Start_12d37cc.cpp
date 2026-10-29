// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013d77cc; ELF VA: 0x12d77cc; file offset: 0x12d37cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TouchInput_Start_12d37cc(TouchInput *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_029be0b8;
  if ((bRam0000000002b94f2f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be0b8);
    bRam0000000002b94f2f = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = self;
  UnityEngine_Behaviour_set_enabled_250972c(self,true,(void *)0x0);
  if (*(long *)&self->field_0x40 != 0) {
    *(TouchInput **)(*(long *)&self->field_0x40 + 0x88) = self;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

