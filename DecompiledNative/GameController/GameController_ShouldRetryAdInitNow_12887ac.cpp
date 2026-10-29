// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool ShouldRetryAdInitNow() { }
// Ghidra address: 0138c7ac; ELF VA: 0x128c7ac; file offset: 0x12887ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_ShouldRetryAdInitNow_12887ac(GameController *self,void *runtimeMethod)

{
  bool bVar1;
  AdInitRetryConfigData *pAVar2;
  
  if ((self->_privacyFlowInProgress != false) ||
     (bVar1 = AdInitStatus_IsAdServiceReady_12abc64((void *)0x0), bVar1)) {
    bVar1 = false;
  }
  else {
    pAVar2 = AdInitRetryConfigData_get_Instance_12c0ec4((void *)0x0);
    if (pAVar2 == (AdInitRetryConfigData *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar1 = pAVar2->ConsentRescueEnabled != false;
  }
  return bVar1;
}

