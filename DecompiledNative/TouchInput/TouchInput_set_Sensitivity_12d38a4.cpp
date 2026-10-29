// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_Sensitivity(float value) { }
// Ghidra address: 013d78a4; ELF VA: 0x12d78a4; file offset: 0x12d38a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TouchInput_set_Sensitivity_12d38a4(TouchInput *self,float value,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *self_00;
  void *error;
  void *in_x2;
  undefined4 in_register_00005004;
  
  puVar1 = PTR_DAT_029c0298;
  if ((bRam0000000002b94f31 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0298);
    bRam0000000002b94f31 = 1;
  }
  self->_Sensitivity = value;
  uVar2 = *(undefined8 *)puVar1;
  if (pcRam0000000002b9cba0 == (code *)0x0) {
    pcRam0000000002b9cba0 = (code *)NativeHelper_011df070(&UNK_007b2087,0);
  }
  uVar3 = (*pcRam0000000002b9cba0)(CONCAT44(in_register_00005004,value),uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  NativeHelper_011df0c8(PTR_DAT_029f5688);
  self_00 = (void *)NativeHelper_011df2d0();
  error = (void *)NativeHelper_011df0c8(PTR_DAT_029f5690);
  UnityEngine_PlayerPrefsException_PlayerPrefsException_2507688(self_00,error,in_x2);
  uVar2 = NativeHelper_011df0c8(PTR_DAT_029f56a0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df1ac(self_00,uVar2);
}

