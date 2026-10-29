// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetupEnemy() { }
// Ghidra address: 0139b958; ELF VA: 0x129b958; file offset: 0x1297958
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SetupEnemy_1297958(GameController *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  long lVar11;
  int iVar12;
  
  if ((bRam0000000002b94d0c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be188);
    NativeHelper_011df0b4(PTR_DAT_029be190);
    NativeHelper_011df0b4(PTR_DAT_029be198);
    NativeHelper_011df0b4(PTR_DAT_029be130);
    NativeHelper_011df0b4(PTR_DAT_029be138);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d0c = 1;
    runtimeMethod = extraout_x1;
  }
  puVar7 = PTR_DAT_029be190;
  puVar6 = PTR_DAT_029be188;
  puVar5 = PTR_DAT_029be138;
  puVar4 = PTR_DAT_029b9ec8;
  puVar3 = PTR_DAT_029b7f98;
  pvVar8 = self->Enemies;
  if (pvVar8 != (void *)0x0) {
    iVar12 = 0;
    do {
      iVar1 = *(int *)((long)pvVar8 + 0x18);
      if (iVar1 <= iVar12) {
        *(undefined4 *)((long)pvVar8 + 0x18) = 0;
        *(int *)((long)pvVar8 + 0x1c) = *(int *)((long)pvVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          NativeHelper_0201ea34(*(undefined8 *)((long)pvVar8 + 0x10),0,iVar1,0);
          runtimeMethod = extraout_x1_01;
        }
        if (self->EnemyCount < 1) {
          return;
        }
        iVar12 = 0;
        goto LAB_0139ba98;
      }
      lVar9 = NativeHelper_01a2f750(pvVar8,iVar12,*(undefined8 *)puVar5);
      if (lVar9 == 0) break;
      uVar10 = NativeHelper_0260e1e4(lVar9,0);
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        NativeHelper_011df1bc(lVar9);
      }
      NativeHelper_02614ce0(uVar10,0);
      pvVar8 = self->Enemies;
      iVar12 = iVar12 + 1;
      runtimeMethod = extraout_x1_00;
    } while (pvVar8 != (void *)0x0);
  }
LAB_0139ba60:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_0139ba98:
  lVar9 = *(long *)puVar3;
  pvVar8 = self->EnemyPrefab;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar9,runtimeMethod);
  }
  pvVar8 = UnityEngine_object_Instantiate_142b1bc(pvVar8,*(void **)puVar4);
  if (pvVar8 == (void *)0x0) goto LAB_0139ba60;
  runtimeMethod = UnityEngine_GameObject_GetComponent_1402e6c(pvVar8,*(void **)puVar6);
  pvVar8 = self->Enemies;
  if (pvVar8 == (void *)0x0) goto LAB_0139ba60;
  lVar9 = *(long *)((long)pvVar8 + 0x10);
  lVar11 = *(long *)puVar7;
  *(int *)((long)pvVar8 + 0x1c) = *(int *)((long)pvVar8 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_0139ba60;
  uVar2 = *(uint *)((long)pvVar8 + 0x18);
  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)((long)pvVar8 + 0x18) = uVar2 + 1;
    *(void **)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = runtimeMethod;
  }
  else {
    NativeHelper_01a2fa14
              (pvVar8,runtimeMethod,
               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    runtimeMethod = extraout_x1_02;
  }
  iVar12 = iVar12 + 1;
  if (self->EnemyCount <= iVar12) {
    return;
  }
  goto LAB_0139ba98;
}

