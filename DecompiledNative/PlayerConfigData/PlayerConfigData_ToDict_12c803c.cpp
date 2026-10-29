// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual Dictionary<String, Object> ToDict() { }
// Ghidra address: 013cc03c; ELF VA: 0x12cc03c; file offset: 0x12c803c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 PlayerConfigData_ToDict_12c803c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_029b9798;
  puVar2 = PTR_DAT_029b8648;
  puVar1 = PTR_DAT_029b8640;
  if ((bRam0000000002b94ed0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9798);
    NativeHelper_011df0b4(PTR_DAT_029b8640);
    NativeHelper_011df0b4(PTR_DAT_029b8648);
    NativeHelper_011df0b4(PTR_DAT_029bfd58);
    NativeHelper_011df0b4(PTR_DAT_029bfd60);
    NativeHelper_011df0b4(PTR_DAT_029bfd68);
    NativeHelper_011df0b4(PTR_DAT_029bfd70);
    NativeHelper_011df0b4(PTR_DAT_029bfd78);
    NativeHelper_011df0b4(PTR_DAT_029bfd80);
    NativeHelper_011df0b4(PTR_DAT_029bfd88);
    bRam0000000002b94ed0 = 1;
  }
  puVar10 = PTR_DAT_029bfd88;
  puVar9 = PTR_DAT_029bfd80;
  puVar8 = PTR_DAT_029bfd78;
  puVar7 = PTR_DAT_029bfd70;
  puVar6 = PTR_DAT_029bfd68;
  puVar5 = PTR_DAT_029bfd60;
  puVar4 = PTR_DAT_029bfd58;
  uVar11 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_0178bda4(uVar11,*(undefined8 *)puVar1);
  uVar12 = *(undefined4 *)(param_1 + 0x28);
  uStack_68 = uVar11;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  Imangi_Utilities_DictionaryHelper_AddFloat_122d8d8
            (uVar12,0x42c80000,&uStack_68,*(undefined8 *)puVar8,1,0);
  Imangi_Utilities_DictionaryHelper_AddFloat_122d8d8
            (*(undefined4 *)(param_1 + 0x2c),0x43520000,&uStack_68,*(undefined8 *)puVar7,1,0);
  uVar12 = _UNK_007a3cd0;
  Imangi_Utilities_DictionaryHelper_AddFloat_122d8d8
            (*(undefined4 *)(param_1 + 0x30),_UNK_007a3cd0,&uStack_68,*(undefined8 *)puVar5,1,0);
  Imangi_Utilities_DictionaryHelper_AddFloat_122d8d8
            (*(undefined4 *)(param_1 + 0x34),uVar12,&uStack_68,*(undefined8 *)puVar9,1,0);
  Imangi_Utilities_DictionaryHelper_AddInt_1214f24
            (&uStack_68,*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x38),0x96,1,0);
  Imangi_Utilities_DictionaryHelper_AddIntList_122c2dc
            (&uStack_68,*(undefined8 *)puVar6,*(undefined8 *)(param_1 + 0x40),0);
  Imangi_Utilities_DictionaryHelper_AddIntList_122c2dc
            (&uStack_68,*(undefined8 *)puVar10,*(undefined8 *)(param_1 + 0x48),0);
  return uStack_68;
}

