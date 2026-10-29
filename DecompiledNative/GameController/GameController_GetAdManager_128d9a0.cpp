// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static AdManager GetAdManager() { }
// Ghidra address: 013919a0; ELF VA: 0x12919a0; file offset: 0x128d9a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Imangi_Ad_AdManager * GameController_GetAdManager_128d9a0(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar4 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cde & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    bRam0000000002b94cde = 1;
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)puVar4;
  }
  if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (*(char *)(**(long **)(lVar10 + 0xb8) + 0x2d8) == '\0') {
    return (Imangi_Ad_AdManager *)0x0;
  }
  if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar4 = PTR_DAT_029b9770;
  if ((bRam0000000002b94c30 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029bd1b8);
    NativeHelper_011df0b4(PTR_DAT_029b9110);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bd1c0);
    NativeHelper_011df0b4(PTR_DAT_029bd1c8);
    NativeHelper_011df0b4(PTR_DAT_029bd1d0);
    NativeHelper_011df0b4(PTR_DAT_029bd1d8);
    bRam0000000002b94c30 = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)puVar4;
  }
  pvVar11 = *(void **)(*(long *)(lVar10 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  bVar8 = UnityEngine_object_op_Equality_250d534(pvVar11,(void *)0x0,(void *)0x0);
  if (bVar8) {
    lVar12 = *(long *)PTR_DAT_029b7fe8;
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 == 0) {
      NativeHelper_011b5290(lVar12);
      lVar10 = *(long *)(lVar12 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    puVar3 = PTR_DAT_029b9638;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = NativeHelper_011b5234();
    }
    puVar7 = PTR_DAT_029bd1d8;
    puVar6 = PTR_DAT_029bd1d0;
    puVar5 = PTR_DAT_029bd1c8;
    puVar2 = PTR_DAT_029b9110;
    pvVar11 = (void *)**(undefined8 **)(lVar10 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar3);
    }
    Imangi_Utilities_ImangiLog_ForceLog_121fae8
              (*(void **)puVar5,*(void **)puVar7,pvVar11,(void *)0x0);
    pvVar11 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
    UnityEngine_GameObject_GameObject_250cd10(pvVar11,*(void **)puVar6,(void *)0x0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar10 = *(long *)puVar4;
    }
    *(void **)(*(long *)(lVar10 + 0xb8) + 0x10) = pvVar11;
    if (pvVar11 == (void *)0x0) {
code_r0x01378288:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pvVar11 = UnityEngine_GameObject_AddComponent_1402d84(pvVar11,*(void **)PTR_DAT_029bd1b8);
    *(void **)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = pvVar11;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar8 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
    if (bVar8) {
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = *(long *)puVar4;
      }
      pvVar11 = *(void **)(*(long *)(lVar10 + 0xb8) + 8);
      if (pvVar11 == (void *)0x0) goto code_r0x01378288;
      UnityEngine_object_set_hideFlags_2511024(pvVar11,(void *)0x34,(void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_029b7f80 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      uVar9 = NativeHelper_025e9e10(0);
      if ((uVar9 & 1) == 0) {
        Imangi_Utilities_ImangiAssert_Code_1213b84
                  (*(void **)PTR_DAT_029bd1c0,(void *)0x1,(void *)0x0);
        pvVar11 = extraout_x1_00;
      }
      else {
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar10 = *(long *)puVar4;
        }
        uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar1);
        }
        NativeHelper_02614fac(uVar13,0);
        pvVar11 = extraout_x1;
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = *(long *)puVar4;
        pvVar11 = extraout_x1_01;
      }
      Imangi_Ad_AdManager_SetVerboseLogging_127ade8
                (*(bool *)(*(long *)(lVar10 + 0xb8) + 0x1a),pvVar11);
    }
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar10 = *(long *)puVar4;
  }
  return *(Imangi_Ad_AdManager **)(*(long *)(lVar10 + 0xb8) + 8);
}

