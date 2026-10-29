// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static BonusItem Instantiate(BonusItemType type) { }
// Ghidra address: 013bfc58; ELF VA: 0x12bfc58; file offset: 0x12bbc58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


BonusItem * BonusItem_Instantiate_12bbc58(void *type,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  BonusItem *self;
  void *pvVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_44;
  
  puVar2 = PTR_DAT_029bf740;
  if ((bRam0000000002b94e4a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf748);
    NativeHelper_011df0b4(PTR_DAT_029bf750);
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029bf758);
    NativeHelper_011df0b4(PTR_DAT_029bf760);
    NativeHelper_011df0b4(PTR_DAT_029bf768);
    NativeHelper_011df0b4(PTR_DAT_029bf770);
    NativeHelper_011df0b4(PTR_DAT_029b9ef8);
    NativeHelper_011df0b4(PTR_DAT_029b9110);
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029bf778);
    NativeHelper_011df0b4(PTR_DAT_029bf780);
    NativeHelper_011df0b4(PTR_DAT_029bf788);
    NativeHelper_011df0b4(PTR_DAT_029bf790);
    NativeHelper_011df0b4(PTR_DAT_029bf798);
    NativeHelper_011df0b4(PTR_DAT_029bf740);
    NativeHelper_011df0b4(PTR_DAT_029bf7a0);
    NativeHelper_011df0b4(PTR_DAT_029bf7a8);
    NativeHelper_011df0b4(PTR_DAT_029bf7b0);
    NativeHelper_011df0b4(PTR_DAT_029bf7b8);
    NativeHelper_011df0b4(PTR_DAT_029bf7c0);
    NativeHelper_011df0b4(PTR_DAT_029bf7c8);
    NativeHelper_011df0b4(PTR_DAT_029bf7d0);
    bRam0000000002b94e4a = 1;
  }
  puVar4 = PTR_DAT_029bf778;
  puVar3 = PTR_DAT_029bf750;
  uVar13 = *(undefined8 *)puVar2;
  iVar10 = (int)type + -1;
  iStack_44 = 0;
  switch(iVar10) {
  case 0:
    puVar11 = (undefined8 *)PTR_DAT_029bf7b0;
    break;
  case 1:
    puVar11 = (undefined8 *)PTR_DAT_029bf7a0;
    break;
  case 2:
    puVar11 = (undefined8 *)PTR_DAT_029bf7a8;
    break;
  case 3:
    puVar11 = (undefined8 *)PTR_DAT_029bf7c8;
    break;
  case 4:
    puVar11 = (undefined8 *)PTR_DAT_029bf798;
    break;
  case 5:
    puVar11 = (undefined8 *)PTR_DAT_029bf780;
    break;
  case 6:
    puVar11 = (undefined8 *)PTR_DAT_029bf7d0;
    break;
  default:
    uStack_60 = *(undefined8 *)PTR_DAT_029bf748;
    uStack_58 = 0xffffffffffffffff;
    iStack_50 = (int)type;
    uVar5 = NativeHelper_02031f7c(&uStack_60,0);
    pvVar6 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029bf7c0,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7fb8);
    }
    UnityEngine_Debug_LogError_24ea230(pvVar6,(void *)0x0);
    goto LAB_013bfebc;
  }
  uVar13 = NativeHelper_01e92d00(uVar13,*puVar11,0);
LAB_013bfebc:
  pvVar6 = (void *)NativeHelper_01e92d00(uVar13,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar12);
    lVar12 = *(long *)puVar3;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) {
LAB_013c018c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  uVar7 = NativeHelper_0178c8d0(lVar12,pvVar6,*(undefined8 *)PTR_DAT_029bf760);
  if ((uVar7 & 1) == 0) {
    uVar13 = *(undefined8 *)PTR_DAT_029b9ef8;
    if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar9 = (void *)NativeHelper_0200afdc(uVar13,0);
    plVar8 = UnityEngine_Resources_Load_2508040(pvVar6,pvVar9,(void *)0x0);
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_029b9110)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df678(plVar8);
    }
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar12 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_013c018c;
    NativeHelper_0178c6dc(lVar12,pvVar6,plVar8,*(undefined8 *)PTR_DAT_029bf758);
  }
  else {
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar12 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_013c018c;
    plVar8 = (long *)NativeHelper_0178c65c(lVar12,pvVar6,*(undefined8 *)PTR_DAT_029bf768);
  }
  puVar2 = PTR_DAT_029b90f0;
  lVar12 = *(long *)PTR_DAT_029b90f0;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar12 = *(long *)puVar2;
  }
  if ((((**(long **)(lVar12 + 0xb8) == 0) ||
       (lVar12 = NativeHelper_012e8f84(**(long **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_029bf788,0)
       , plVar8 == (long *)0x0)) || (uVar13 = NativeHelper_02610b98(plVar8,0), lVar12 == 0)) ||
     (((lVar12 = NativeHelper_012eb62c(lVar12,uVar13,0), lVar12 == 0 ||
       (pvVar6 = (void *)NativeHelper_0260e1e4(lVar12,0), pvVar6 == (void *)0x0)) ||
      (self = UnityEngine_GameObject_GetComponent_1402e6c(pvVar6,*(void **)PTR_DAT_029bf770),
      puVar2 = PTR_DAT_029bf7b8, puVar11 = (undefined8 *)PTR_DAT_029bf790, self == (BonusItem *)0x0)
      ))) goto LAB_013c018c;
  lVar12 = *(long *)puVar3;
  iVar1 = *(int *)&self->field_0x78;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar12 = *(long *)puVar3;
  }
  iStack_44 = **(int **)(lVar12 + 0xb8);
  **(int **)(lVar12 + 0xb8) = iStack_44 + 1;
  uVar13 = NativeHelper_01ffa318(&iStack_44,0);
  if (2 < iVar1 - 1U) {
    puVar11 = (undefined8 *)puVar2;
  }
  pvVar9 = (void *)NativeHelper_01e92d00(*puVar11,uVar13,0);
  UnityEngine_object_set_name_2510254(pvVar6,pvVar9,(void *)0x0);
  switch(iVar10) {
  case 0:
    iVar10 = 5;
    break;
  case 1:
    iVar10 = 10;
    break;
  case 2:
    iVar10 = 0xf;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    self->Value = 0x19;
  default:
    goto LAB_013c0138;
  }
  self->Value = iVar10;
  *(float *)&self->field_0x4c = -257.0;
LAB_013c0138:
  MovingObject_SetMaxVelocityTotal_1309608((MovingObject *)self,500.0,(void *)0x0);
  UnityEngine_Behaviour_set_enabled_250972c(self,true,(void *)0x0);
  (**(code **)(*(long *)self + 0x188))(self,1,*(undefined8 *)(*(long *)self + 400));
  return self;
}

