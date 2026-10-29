// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameObject SetDataModelReference(string prefabName, string poolName = null) { }
// Ghidra address: 013d94e4; ELF VA: 0x12d94e4; file offset: 0x12d54e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * DynamicElement_SetDataModelReference_12d54e4
                 (DynamicElement *self,void *prefabName,void *poolName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *x;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  void *value;
  void *extraout_x1;
  long lVar9;
  
  puVar2 = PTR_DAT_029c0358;
  puVar1 = PTR_DAT_029c0350;
  pvVar4 = prefabName;
  if ((bRam0000000002b94f45 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0360);
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029bf758);
    NativeHelper_011df0b4(PTR_DAT_029bf760);
    NativeHelper_011df0b4(PTR_DAT_029bf768);
    NativeHelper_011df0b4(PTR_DAT_029c0358);
    NativeHelper_011df0b4(PTR_DAT_029c0368);
    NativeHelper_011df0b4(PTR_DAT_029c0370);
    NativeHelper_011df0b4(PTR_DAT_029b9ef8);
    NativeHelper_011df0b4(PTR_DAT_029b9110);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029c0378);
    NativeHelper_011df0b4(PTR_DAT_029c0350);
    bRam0000000002b94f45 = 1;
    pvVar4 = extraout_x1;
  }
  DynamicElement_ClearAllChildren_12d593c(self,pvVar4);
  pvVar4 = (void *)NativeHelper_01e9390c(*(undefined8 *)puVar1,prefabName,0);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar9);
    lVar9 = *(long *)puVar2;
  }
  if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_013d9930;
  uVar5 = NativeHelper_0178c8d0(**(long **)(lVar9 + 0xb8),pvVar4,*(undefined8 *)PTR_DAT_029bf760);
  if ((uVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)PTR_DAT_029b9ef8;
    if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar8 = (void *)NativeHelper_0200afdc(uVar6,0);
    x = UnityEngine_Resources_Load_2508040(pvVar4,pvVar8,(void *)0x0);
    if ((x != (long *)0x0) && (*x != *(long *)PTR_DAT_029b9110)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df678(x);
    }
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
    if (bVar3) {
      pvVar4 = (void *)NativeHelper_01e92d00(*(undefined8 *)PTR_DAT_029c0378,prefabName,0);
      if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)PTR_DAT_029b7fb8);
      }
      UnityEngine_Debug_LogError_24ea338(pvVar4,self,(void *)0x0);
      return (void *)0x0;
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar2;
    }
    if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_013d9930;
    NativeHelper_0178c6dc(**(long **)(lVar9 + 0xb8),pvVar4,x,*(undefined8 *)PTR_DAT_029bf758);
    if (poolName != (void *)0x0) goto LAB_013d9678;
LAB_013d9868:
    self->Pool = (void *)0x0;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar4 = UnityEngine_object_Instantiate_142b1bc(x,*(void **)PTR_DAT_029b9ec8);
    if (pvVar4 == (void *)0x0) goto LAB_013d9930;
  }
  else {
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar2;
    }
    if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_013d9930;
    x = (long *)NativeHelper_0178c65c
                          (**(long **)(lVar9 + 0xb8),pvVar4,*(undefined8 *)PTR_DAT_029bf768);
    if (poolName == (void *)0x0) goto LAB_013d9868;
LAB_013d9678:
    puVar1 = PTR_DAT_029b90f0;
    lVar9 = *(long *)PTR_DAT_029b90f0;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar1;
    }
    if ((((**(long **)(lVar9 + 0xb8) == 0) ||
         (lVar9 = NativeHelper_012e8f84(**(long **)(lVar9 + 0xb8),poolName,0), x == (long *)0x0)) ||
        (uVar6 = NativeHelper_02610b98(x,0), lVar9 == 0)) ||
       ((lVar7 = NativeHelper_012eb62c(lVar9,uVar6,0), lVar7 == 0 ||
        (pvVar4 = (void *)NativeHelper_0260e1e4(lVar7,0), pvVar4 == (void *)0x0))))
    goto LAB_013d9930;
    pvVar8 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar4,*(void **)PTR_DAT_029c0370);
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(pvVar8,(void *)0x0,(void *)0x0);
    if (bVar3) {
      pvVar8 = UnityEngine_GameObject_AddComponent_1402d84(pvVar4,*(void **)PTR_DAT_029c0368);
    }
    if (pvVar8 == (void *)0x0) goto LAB_013d9930;
    *(long *)((long)pvVar8 + 0x20) = lVar9;
  }
  pvVar8 = (void *)NativeHelper_02610b98(pvVar4,0);
  value = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar8 != (void *)0x0) {
    UnityEngine_Transform_set_parent_2516ee0(pvVar8,value,(void *)0x0);
    pvVar8 = (void *)NativeHelper_02610b98(pvVar4,0);
    if (pvVar8 != (void *)0x0) {
      UnityEngine_Transform_set_localPosition_2515ec4
                (pvVar8,(Recovered_Vector3)ZEXT812(0),(void *)0x0);
      lVar9 = NativeHelper_0260e1a8(self,0);
      if (lVar9 != 0) {
        pvVar8 = (void *)NativeHelper_014d0e0c(lVar9,*(undefined8 *)PTR_DAT_029c0360);
        self->primaryRenderer = pvVar8;
        return pvVar4;
      }
    }
  }
LAB_013d9930:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

