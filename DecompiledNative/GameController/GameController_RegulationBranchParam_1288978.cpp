// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static EventParameter RegulationBranchParam() { }
// Ghidra address: 0138c978; ELF VA: 0x128c978; file offset: 0x1288978
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Imangi_Analytics_EventParameter * GameController_RegulationBranchParam_1288978(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  Imangi_Analytics_EventParameter *self;
  void *inParameterValue;
  
  puVar1 = PTR_DAT_029bbd80;
  if ((bRam0000000002b94cbe & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    NativeHelper_011df0b4(PTR_DAT_029bdc30);
    bRam0000000002b94cbe = 1;
  }
  puVar3 = PTR_DAT_029bdc30;
  puVar2 = PTR_DAT_029bd9f0;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar4 = *(long *)puVar1;
  }
  inParameterValue = *(void **)(*(long *)(lVar4 + 0xb8) + 0x28);
  self = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  Imangi_Analytics_EventParameter_EventParameter_126b488
            (self,*(void **)puVar3,inParameterValue,(void *)0x0);
  return self;
}

