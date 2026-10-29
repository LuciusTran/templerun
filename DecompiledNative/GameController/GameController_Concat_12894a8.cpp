// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static EventParameter[] Concat(EventParameter[] inFirst, EventParameter[] inSecond) { }
// Ghidra address: 0138d4a8; ELF VA: 0x128d4a8; file offset: 0x12894a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_Concat_12894a8(void *inFirst,void *inSecond,void *runtimeMethod)

{
  void *pvVar1;
  
  if ((bRam0000000002b94cc4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bd9e8);
    bRam0000000002b94cc4 = 1;
  }
  if ((inFirst != (void *)0x0) && (inSecond != (void *)0x0)) {
    pvVar1 = (void *)NativeHelper_011df12c
                               (*(undefined8 *)PTR_DAT_029bd9e8,
                                *(int *)((long)inSecond + 0x18) + *(int *)((long)inFirst + 0x18));
    NativeHelper_0201ec34(inFirst,pvVar1,0,0);
    NativeHelper_0201ec34(inSecond,pvVar1,*(undefined4 *)((long)inFirst + 0x18),0);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

