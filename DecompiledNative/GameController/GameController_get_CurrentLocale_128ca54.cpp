// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public ImangiLocaleInfo get_CurrentLocale() { }
// Ghidra address: 01390a54; ELF VA: 0x1290a54; file offset: 0x128ca54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Imangi_Utilities_ImangiLocaleInfo *
GameController_get_CurrentLocale_128ca54(GameController *self,void *runtimeMethod)

{
  Imangi_Utilities_ImangiLocaleInfo *pIVar1;
  void *extraout_x1;
  
  if ((bRam0000000002b94cd1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba9d0);
    bRam0000000002b94cd1 = 1;
    runtimeMethod = extraout_x1;
  }
  pIVar1 = self->_CurrentLocale;
  if (pIVar1 == (Imangi_Utilities_ImangiLocaleInfo *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_029ba9d0 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029ba9d0,runtimeMethod);
    }
    pIVar1 = Imangi_Utilities_ImangiLocaleManager_GetCurrentLocale_1233e18(false,(void *)0x0);
    self->_CurrentLocale = pIVar1;
  }
  return pIVar1;
}

