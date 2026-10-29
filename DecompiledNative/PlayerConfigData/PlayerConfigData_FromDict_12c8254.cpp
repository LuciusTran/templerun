// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual bool FromDict(Dictionary<String, Object> inDict) { }
// Ghidra address: 013cc254; ELF VA: 0x12cc254; file offset: 0x12c8254
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 PlayerConfigData_FromDict_12c8254(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_029b9798;
  if ((bRam0000000002b94ed1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9798);
    NativeHelper_011df0b4(PTR_DAT_029bf308);
    NativeHelper_011df0b4(PTR_DAT_029bfd58);
    NativeHelper_011df0b4(PTR_DAT_029bfd60);
    NativeHelper_011df0b4(PTR_DAT_029bfd68);
    NativeHelper_011df0b4(PTR_DAT_029bfd70);
    NativeHelper_011df0b4(PTR_DAT_029bfd78);
    NativeHelper_011df0b4(PTR_DAT_029bfd80);
    NativeHelper_011df0b4(PTR_DAT_029bfd88);
    bRam0000000002b94ed1 = 1;
  }
  puVar6 = PTR_DAT_029bfd80;
  puVar5 = PTR_DAT_029bfd78;
  puVar4 = PTR_DAT_029bfd70;
  puVar3 = PTR_DAT_029bfd60;
  puVar2 = PTR_DAT_029bfd58;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  uVar8 = Imangi_Utilities_DictionaryHelper_ReadFloat_1227e30
                    (0x42c80000,param_2,*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  uVar8 = Imangi_Utilities_DictionaryHelper_ReadFloat_1227e30
                    (0x43520000,param_2,*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  uVar8 = _UNK_007a3cd0;
  uVar9 = Imangi_Utilities_DictionaryHelper_ReadFloat_1227e30
                    (_UNK_007a3cd0,param_2,*(undefined8 *)puVar3,0);
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  uVar8 = Imangi_Utilities_DictionaryHelper_ReadFloat_1227e30(uVar8,param_2,*(undefined8 *)puVar6,0)
  ;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  uVar8 = Imangi_Utilities_DictionaryHelper_ReadInt_12161a8(param_2,*(undefined8 *)puVar2,0x96,0);
  lVar7 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  puVar1 = PTR_DAT_029bfd68;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    Imangi_Utilities_DictionaryHelper_ReadIntList_1229074
              (param_2,*(undefined8 *)puVar1,(long *)(param_1 + 0x40),0);
    puVar1 = PTR_DAT_029bfd88;
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      Imangi_Utilities_DictionaryHelper_ReadIntList_1229074
                (param_2,*(undefined8 *)puVar1,(long *)(param_1 + 0x48),0);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

