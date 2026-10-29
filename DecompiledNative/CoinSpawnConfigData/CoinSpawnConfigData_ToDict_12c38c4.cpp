// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual Dictionary<String, Object> ToDict() { }
// Ghidra address: 013c78c4; ELF VA: 0x12c78c4; file offset: 0x12c38c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


undefined8 CoinSpawnConfigData_ToDict_12c38c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_029b9798;
  puVar2 = PTR_DAT_029b8648;
  puVar1 = PTR_DAT_029b8640;
  if ((bRam0000000002b94ea2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9798);
    NativeHelper_011df0b4(PTR_DAT_029b8640);
    NativeHelper_011df0b4(PTR_DAT_029b8648);
    NativeHelper_011df0b4(PTR_DAT_029bb6b0);
    NativeHelper_011df0b4(PTR_DAT_029bb810);
    bRam0000000002b94ea2 = 1;
  }
  puVar5 = PTR_DAT_029bb810;
  puVar4 = PTR_DAT_029bb6b0;
  uVar6 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_0178bda4(uVar6,*(undefined8 *)puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar6;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  Imangi_Utilities_DictionaryHelper_AddIntList_122c2dc(&uStack_38,*(undefined8 *)puVar5,uVar7,0);
  Imangi_Utilities_DictionaryHelper_AddIntList_122c2dc
            (&uStack_38,*(undefined8 *)puVar4,*(undefined8 *)(param_1 + 0x30),0);
  return uStack_38;
}

