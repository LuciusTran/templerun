// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static GameObject Instantiate(PathType type, PathLevel level = 2) { }
// Ghidra address: 0140e21c; ELF VA: 0x130e21c; file offset: 0x130a21c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * PathElement_Instantiate_130a21c(int type,int level,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  PathElement *self;
  void *value;
  void *runtimeMethod_00;
  void *pvVar9;
  
  puVar3 = PTR_DAT_029bde80;
  if ((bRam0000000002b950e5 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde70);
    NativeHelper_011df0b4(PTR_DAT_029b9110);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029c1b08);
    NativeHelper_011df0b4(PTR_DAT_029c1b10);
    NativeHelper_011df0b4(PTR_DAT_029c1b18);
    bRam0000000002b950e5 = 1;
  }
  puVar2 = PTR_DAT_029b7f98;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar5 = *(long *)puVar3;
  }
  pvVar9 = *(void **)(*(long *)(lVar5 + 0xb8) + 0x60);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2);
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pvVar9,(void *)0x0,(void *)0x0);
  if (bVar4) {
    plVar6 = UnityEngine_Resources_Load_25085b0(*(void **)PTR_DAT_029c1b10,(void *)0x0);
    if (plVar6 == (long *)0x0) goto LAB_0140e468;
    if (*plVar6 != *(long *)PTR_DAT_029b9110) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df678();
    }
    uVar7 = NativeHelper_02610b98(plVar6,0);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar5);
      lVar5 = *(long *)puVar3;
    }
    *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60) = uVar7;
  }
  puVar2 = PTR_DAT_029b90f0;
  lVar5 = *(long *)PTR_DAT_029b90f0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar5 = *(long *)puVar2;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    lVar5 = NativeHelper_012e8f84(**(long **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_029c1b08,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar3);
    }
    if ((((lVar5 != 0) &&
         (lVar8 = NativeHelper_012eb62c
                            (lVar5,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60),0),
         lVar8 != 0)) && (pvVar9 = (void *)NativeHelper_0260e1e4(lVar8,0), pvVar9 != (void *)0x0))
       && (self = UnityEngine_GameObject_GetComponent_1402e6c(pvVar9,*(void **)PTR_DAT_029bde70),
          puVar2 = PTR_DAT_029c1b18, self != (PathElement *)0x0)) {
      *(long *)&self->field_0x20 = lVar5;
      self->Type = type;
      self->Level = level;
      PathElement_SetupTerrain_130a4dc(self,runtimeMethod_00);
      iVar1 = **(int **)(*(long *)puVar3 + 0xb8) + 1;
      **(int **)(*(long *)puVar3 + 0xb8) = iVar1;
      self->TileIndex = iVar1;
      uVar7 = NativeHelper_01ffa318(&self->TileIndex,0);
      value = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar2,uVar7,0);
      UnityEngine_object_set_name_2510254(pvVar9,value,(void *)0x0);
      return pvVar9;
    }
  }
LAB_0140e468:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

