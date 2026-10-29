// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static int EffectiveMaxAppLovinRetries() { }
// Ghidra address: 0138cfb0; ELF VA: 0x128cfb0; file offset: 0x1288fb0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int GameController_EffectiveMaxAppLovinRetries_1288fb0(void *runtimeMethod)

{
  AdInitRetryConfigData *pAVar1;
  
  pAVar1 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
  if (pAVar1 != (AdInitRetryConfigData *)0x0) {
    return pAVar1->MaxAppLovinRetries;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

