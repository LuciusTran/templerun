// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void AttributionChangedCallback(AdjustAttribution attributionData) { }
// Ghidra address: 01393028; ELF VA: 0x1293028; file offset: 0x128f028
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_AttributionChangedCallback_128f028(void *attributionData,void *runtimeMethod)

{
  undefined *puVar1;
  void *inProperty;
  undefined1 auVar2 [16];
  ulong uStack_30;
  undefined8 uStack_28;
  
  auVar2._8_8_ = runtimeMethod;
  auVar2._0_8_ = attributionData;
  if ((bRam0000000002b94ce5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdec8);
    NativeHelper_011df0b4(PTR_DAT_029b8190);
    NativeHelper_011df0b4(PTR_DAT_029bded0);
    NativeHelper_011df0b4(PTR_DAT_029bded8);
    NativeHelper_011df0b4(PTR_DAT_029bdee0);
    NativeHelper_011df0b4(PTR_DAT_029bdee8);
    auVar2 = NativeHelper_011df0b4(PTR_DAT_029bdef0);
    bRam0000000002b94ce5 = 1;
  }
  if (attributionData != (void *)0x0) {
    if (*(void **)((long)attributionData + 0x20) != (void *)0x0) {
      Imangi_Analytics_Analytics_SetUserProperty_126b420
                (*(void **)PTR_DAT_029bdef0,*(void **)((long)attributionData + 0x20),(void *)0x0);
    }
    if (*(void **)((long)attributionData + 0x28) != (void *)0x0) {
      Imangi_Analytics_Analytics_SetUserProperty_126b420
                (*(void **)PTR_DAT_029bded0,*(void **)((long)attributionData + 0x28),(void *)0x0);
    }
    if (*(void **)((long)attributionData + 0x30) != (void *)0x0) {
      Imangi_Analytics_Analytics_SetUserProperty_126b420
                (*(void **)PTR_DAT_029bded8,*(void **)((long)attributionData + 0x30),(void *)0x0);
    }
    puVar1 = PTR_DAT_029bdee0;
    uStack_30 = *(ulong *)((long)attributionData + 0x50);
    uStack_28 = *(undefined8 *)((long)attributionData + 0x58);
    if ((uStack_30 & 0xff) != 0) {
      inProperty = (void *)NativeHelper_01b2c76c(&uStack_30,*(undefined8 *)PTR_DAT_029bdec8);
      Imangi_Analytics_Analytics_SetUserProperty_126b420(*(void **)puVar1,inProperty,(void *)0x0);
    }
    if (*(void **)((long)attributionData + 0x48) != (void *)0x0) {
      Imangi_Analytics_Analytics_SetUserProperty_126b420
                (*(void **)PTR_DAT_029bdee8,*(void **)((long)attributionData + 0x48),(void *)0x0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(auVar2._0_8_,auVar2._8_8_);
}

