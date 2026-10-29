// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AdjustCultureinfoForLanguageSetting(string languageName) { }
// Ghidra address: 013a0330; ELF VA: 0x12a0330; file offset: 0x129c330
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_AdjustCultureinfoForLanguageSetting_129c330
               (GameController *self,void *languageName,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  
  if ((bRam0000000002b94d16 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8688);
    bRam0000000002b94d16 = 1;
  }
  puVar1 = PTR_DAT_029b8688;
  if (languageName != (void *)0x0) {
    if (2 < *(int *)((long)languageName + 0x10)) {
      languageName = (void *)NativeHelper_01e9d468(languageName,0,2,0);
    }
    pvVar2 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
    NativeHelper_01fc1c28(pvVar2,languageName,0);
    self->currentCultureInfo = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

