// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static void ResetItem(BonusItem item1) { }
// Ghidra address: 014155e4; ELF VA: 0x13155e4; file offset: 0x13115e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_ResetItem_13115e4(BonusItem *item1,void *runtimeMethod)

{
  if (item1 != (BonusItem *)0x0) {
    *(undefined4 *)&item1->field_0x68 = 0;
    item1->field_0x64 = 0;
    item1->field_0x24 = 0;
    *(undefined8 *)&item1->field_0x30 = 0;
    *(undefined8 *)&item1->field_0x38 = 0;
    *(undefined8 *)&item1->field_0x28 = 0;
    if (pcRam0000000002b9ccc0 == (code *)0x0) {
      pcRam0000000002b9ccc0 = (code *)NativeHelper_011df070(&UNK_007b2109);
    }
                    /* WARNING: Could not recover jumptable at 0x0260d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9ccc0)(item1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

