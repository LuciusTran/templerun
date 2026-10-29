// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetPriceForUpgradeType(StoreItemType itemType, int currentLevel) { }
// Ghidra address: 013b7654; ELF VA: 0x12b7654; file offset: 0x12b3654
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int RecordManager_GetPriceForUpgradeType_12b3654
              (RecordManager *self,void *itemType,int currentLevel,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int iStack_34;

  puVar1 = PTR_DAT_029bf080;
  if ((bRam0000000002b94de3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bafe0);
    NativeHelper_011df0b4(PTR_DAT_029bafe8);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029bf088);
    NativeHelper_011df0b4(PTR_DAT_029bf090);
    NativeHelper_011df0b4(PTR_DAT_029bf098);
    NativeHelper_011df0b4(PTR_DAT_029bf0a0);
    NativeHelper_011df0b4(PTR_DAT_029bf0a8);
    NativeHelper_011df0b4(PTR_DAT_029bf0b0);
    NativeHelper_011df0b4(PTR_DAT_029bf080);
    bRam0000000002b94de3 = 1;
  }
  iStack_34 = currentLevel;
  uVar3 = NativeHelper_01ffa318(&iStack_34,0);
  pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar1,uVar3,0);
  DebugEx_Log_13222f4(pvVar4,(void *)0x0);
  puVar1 = PTR_DAT_029bdbe8;
  iVar2 = 500;
  switch((ulong)itemType & 0xffffffff) {
  case 0:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x50);
    goto joined_r0x013b7b28;
  case 1:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x50);
    goto joined_r0x013b7ba8;
  case 2:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x50);
    goto joined_r0x013b7a44;
  case 3:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x50);
    goto joined_r0x013b7b68;
  case 4:
    goto LAB_013b8050;
  case 5:
    if (5 < (uint)currentLevel) goto LAB_013b7940;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x30);
    goto joined_r0x013b8038;
  case 6:
    if (5 < (uint)currentLevel) goto LAB_013b7940;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x38);
    goto joined_r0x013b8038;
  case 7:
    if (5 < (uint)currentLevel) goto LAB_013b7940;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x28);
    goto joined_r0x013b8038;
  case 8:
    if (5 < (uint)currentLevel) goto LAB_013b7940;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x48);
    goto joined_r0x013b8038;
  case 9:
    if (5 < (uint)currentLevel) goto LAB_013b7940;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x40);
joined_r0x013b8038:
    if (lVar5 == 0) {
code_r0x013b8064:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if ((uint)currentLevel < 6) {
      return *(int *)(&UNK_007c4394 + (long)currentLevel * 4);
    }
  default:
LAB_013b7940:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf090,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    return 0;
  case 0x10:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x58);
    goto joined_r0x013b7b28;
  case 0x11:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x58);
    goto joined_r0x013b7b68;
  case 0x12:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x58);
    goto joined_r0x013b7ba8;
  case 0x13:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x58);
joined_r0x013b7a44:
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 3;
    break;
  case 0x14:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 4;
    break;
  case 0x15:
    if (self->PlayerManager != (void *)0x0) {
      iVar2 = PlayerManager_GetActivePlayer_12ccc8c(self->PlayerManager,(void *)0x0);
      iVar2 = RecordManager_GetRecordFlagValue_12b3354(self,iVar2,(void *)0x18,runtimeMethod);
      return iVar2;
    }
    goto code_r0x013b8064;
  case 0x16:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 5;
    break;
  case 0x17:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x60);
joined_r0x013b7b28:
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 0;
    break;
  case 0x18:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x60);
joined_r0x013b7b68:
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 1;
    break;
  case 0x19:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto code_r0x013b8064;
    lVar5 = *(long *)(lVar5 + 0x60);
joined_r0x013b7ba8:
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 2;
    break;
  case 0x1a:
  case 0x1b:
    return 5000;
  case 0x1c:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 6;
    break;
  case 0x1d:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 7;
    break;
  case 0x1e:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 8;
    break;
  case 0x1f:
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto code_r0x013b8064;
    currentLevel = 9;
    break;
  case 0x20:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf0b0,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto code_r0x013b8064;
    if (*(int *)(*(long *)(lVar6 + 0x58) + 0x18) + -1 < 0xb) {
      return 25000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x013b8064;
    }
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 10;
    break;
  case 0x21:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf088,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto code_r0x013b8064;
    if (*(int *)(*(long *)(lVar6 + 0x58) + 0x18) + -1 < 0xc) {
      return 25000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x013b8064;
    }
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 0xb;
    break;
  case 0x22:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf0a8,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto code_r0x013b8064;
    if (*(int *)(*(long *)(lVar6 + 0x58) + 0x18) + -1 < 0xc) {
      return 25000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x013b8064;
    }
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 0xc;
    break;
  case 0x23:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf098,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto code_r0x013b8064;
    if (*(int *)(*(long *)(lVar6 + 0x58) + 0x18) + -1 < 0xe) {
      return 25000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x013b8064;
    }
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 0xd;
    break;
  case 0x24:
    iStack_34 = currentLevel;
    uVar3 = NativeHelper_01ffa318(&iStack_34,0);
    pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf0a0,uVar3,0);
    DebugEx_Log_13222f4(pvVar4,(void *)0x0);
    puVar1 = PTR_DAT_029bdbe8;
    lVar5 = *(long *)PTR_DAT_029bdbe8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto code_r0x013b8064;
    if (*(int *)(*(long *)(lVar6 + 0x58) + 0x18) + -1 < 0xf) {
      return 25000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x013b8064;
    }
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) goto code_r0x013b8064;
    currentLevel = 0xe;
  }
  iVar2 = NativeHelper_01a154bc(lVar5,currentLevel,*(undefined8 *)PTR_DAT_029bafe8);
LAB_013b8050:
  return iVar2;
}
