// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual bool FromDict(Dictionary<String, Object> inDict) { }
// Ghidra address: 013c79bc; ELF VA: 0x12c79bc; file offset: 0x12c39bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


undefined8 CoinSpawnConfigData_FromDict_12c39bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000002b94ea3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9798);
    NativeHelper_011df0b4(PTR_DAT_029bf308);
    NativeHelper_011df0b4(PTR_DAT_029bb6b0);
    NativeHelper_011df0b4(PTR_DAT_029bb810);
    bRam0000000002b94ea3 = 1;
  }
  puVar1 = PTR_DAT_029b9798;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    puVar2 = PTR_DAT_029bb810;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Imangi_Utilities_DictionaryHelper_ReadIntList_1229074
              (param_2,*(undefined8 *)puVar2,(long *)(param_1 + 0x28),0);
    puVar1 = PTR_DAT_029bb6b0;
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      Imangi_Utilities_DictionaryHelper_ReadIntList_1229074
                (param_2,*(undefined8 *)puVar1,(long *)(param_1 + 0x30),0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

