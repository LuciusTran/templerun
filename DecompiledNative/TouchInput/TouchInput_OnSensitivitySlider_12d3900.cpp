// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnSensitivitySlider(float v) { }
// Ghidra address: 013d7900; ELF VA: 0x12d7900; file offset: 0x12d3900
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TouchInput_OnSensitivitySlider_12d3900(TouchInput *self,float v,void *runtimeMethod)

{
  void *extraout_x1;
  UISlider *pUVar1;
  void *pvVar2;
  
  if ((bRam0000000002b94f32 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    bRam0000000002b94f32 = 1;
    runtimeMethod = extraout_x1;
  }
  pUVar1 = self->SensitivitySlider;
  if (pUVar1 != (UISlider *)0x0) {
    pvVar2 = pUVar1->functionName;
    pUVar1->functionName = *(void **)PTR_DAT_029b8618;
    TouchInput_set_Sensitivity_12d38a4(self,v,runtimeMethod);
    if (self->SensitivitySlider != (UISlider *)0x0) {
      self->SensitivitySlider->functionName = pvVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

