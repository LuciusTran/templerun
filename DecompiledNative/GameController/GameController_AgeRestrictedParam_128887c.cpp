// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static EventParameter AgeRestrictedParam() { }
// Ghidra address: 0138c87c; ELF VA: 0x128c87c; file offset: 0x128887c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Imangi_Analytics_EventParameter * GameController_AgeRestrictedParam_128887c(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Imangi_Privacy_ImangiPrivacyManager *self;
  void *inParameterValue;
  Imangi_Analytics_EventParameter *self_00;
  byte abStack_24 [4];
  
  puVar1 = PTR_DAT_029ba778;
  if ((bRam0000000002b94cbd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029bd9f0);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bdc28);
    bRam0000000002b94cbd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  self = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
  puVar3 = PTR_DAT_029bdc28;
  puVar2 = PTR_DAT_029bd9f0;
  puVar1 = PTR_DAT_029b8308;
  if (self != (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
    bVar4 = Imangi_Privacy_ImangiPrivacyManager_IsOfAgeToConsent_1248710(self,(void *)0x0);
    abStack_24[0] = ~bVar4 & 1;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    inParameterValue = (void *)NativeHelper_01f83748(abStack_24,0);
    self_00 = (Imangi_Analytics_EventParameter *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    Imangi_Analytics_EventParameter_EventParameter_126b488
              (self_00,*(void **)puVar3,inParameterValue,(void *)0x0);
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

