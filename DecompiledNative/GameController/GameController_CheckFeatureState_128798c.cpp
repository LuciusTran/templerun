// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static FeatureToggleStatus CheckFeatureState(string inFeatureName) { }
// Ghidra address: 0138b98c; ELF VA: 0x128b98c; file offset: 0x128798c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_CheckFeatureState_128798c(void *inFeatureName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  Imangi_Privacy_ImangiPrivacyManager *self;
  void *extraout_x1;
  void *pvVar4;
  
  puVar1 = PTR_DAT_029ba770;
  if ((bRam0000000002b94cb5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bdbb8);
    NativeHelper_011df0b4(PTR_DAT_029bdb88);
    NativeHelper_011df0b4(PTR_DAT_029ba780);
    bRam0000000002b94cb5 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = FeatureManager_IsFeatureEnabled_12d634c(inFeatureName,(void *)0x0);
  if (!bVar2) {
    return (void *)0x0;
  }
  uVar3 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)PTR_DAT_029bdb88,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)PTR_DAT_029ba780,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)PTR_DAT_029bdbb8,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        self = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
        if (self == (Imangi_Privacy_ImangiPrivacyManager *)0x0) goto LAB_0138bae8;
        pvVar4 = (void *)0x7;
        goto LAB_0138bac0;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      self = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
      if (self == (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
LAB_0138bae8:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar4 = (void *)0x8;
LAB_0138bac0:
      bVar2 = Imangi_Privacy_ImangiPrivacyManager_HasConsent_124871c
                        (self,pvVar4,(Imangi_Utilities_ImangiLocaleInfo *)0x0,(void *)0x0);
      if (bVar2) goto LAB_0138bad0;
    }
    pvVar4 = (void *)0x1;
  }
  else {
LAB_0138bad0:
    pvVar4 = (void *)0x2;
  }
  return pvVar4;
}

