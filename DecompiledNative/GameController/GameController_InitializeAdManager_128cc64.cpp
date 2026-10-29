// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void InitializeAdManager() { }
// Ghidra address: 01390c64; ELF VA: 0x1290c64; file offset: 0x128cc64
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_InitializeAdManager_128cc64(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar2 = PTR_DAT_029bbd80;
  if ((bRam0000000002b94cd6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bb308);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029bdce8);
    NativeHelper_011df0b4(PTR_DAT_029bddb8);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029bbd80);
    bRam0000000002b94cd6 = 1;
  }
  fVar11 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
  self->_LaunchTime = fVar11;
  lVar6 = *(long *)puVar2;
  pvVar5 = extraout_x1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
    pvVar5 = extraout_x1_00;
  }
  lVar9 = *(long *)(lVar6 + 0xb8);
  if (*(char *)(lVar9 + 0x20) == '\0') {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
    }
    puVar1 = PTR_DAT_029b8c90;
    uVar10 = *(undefined8 *)(lVar9 + 0x48);
    uVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
    NativeHelper_01f80268(uVar8,self,*(undefined8 *)PTR_DAT_029bdce8,0);
    plVar7 = (long *)NativeHelper_02041514(uVar10,uVar8,0);
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = 0;
    }
    else {
      lVar6 = *(long *)puVar1;
      if (*plVar7 != lVar6) {
LAB_01390d90:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678();
      }
      *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = plVar7;
      if (*plVar7 != lVar6) goto LAB_01390d90;
    }
  }
  else {
    GameController_InitAdServices_128b4a8(self,pvVar5);
  }
  puVar1 = PTR_DAT_029bddb8;
  puVar2 = PTR_DAT_029ba5a8;
  uVar8 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb308);
  NativeHelper_01698c44(uVar8,self,*(undefined8 *)puVar1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029ba5a8;
  if ((bRam0000000002b9483b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fe8,0);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bb330);
    bRam0000000002b9483b = 1;
  }
  pvVar5 = *(void **)puVar2;
  if (*(int *)((long)pvVar5 + 0xe0) == 0) {
    pvVar5 = (void *)NativeHelper_011df1bc();
  }
  Imangi_Utilities_ImangiNetworkHelper_GetInstance_1234b70(pvVar5);
  lVar6 = *(long *)puVar2;
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x18) == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    pvVar5 = (void *)**(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
    }
    runtimeMethod_00 = (void *)0x0;
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      lVar9 = *(long *)PTR_DAT_029b7fe8;
      lVar6 = *(long *)(lVar9 + 0x38);
      if (lVar6 == 0) {
        NativeHelper_011b5290(lVar9);
        lVar6 = *(long *)(lVar9 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = NativeHelper_011b5234();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = NativeHelper_011b5234();
      }
      pvVar5 = (void *)**(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar2);
      }
      Imangi_Utilities_ImangiNetworkHelper_ImangiNetworkHelper_LogMessageForced_12349f4
                (*(void **)PTR_DAT_029bb330,pvVar5,runtimeMethod_00);
      if ((void *)**(undefined8 **)(*(long *)puVar2 + 0xb8) != (void *)0x0) {
        UnityEngine_Behaviour_set_enabled_250972c
                  ((void *)**(undefined8 **)(*(long *)puVar2 + 0xb8),true,(void *)0x0);
        lVar6 = *(long *)puVar2;
        if (**(long **)(lVar6 + 0xb8) != 0) {
          *(undefined4 *)(**(long **)(lVar6 + 0xb8) + 0x20) = 0x3f800000;
          goto code_r0x01338f68;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    lVar6 = *(long *)puVar2;
  }
code_r0x01338f68:
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar2 = PTR_DAT_029ba5a8;
  if ((bRam0000000002b94833 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bb308);
    NativeHelper_011df0b4(PTR_DAT_029ba5a8);
    bRam0000000002b94833 = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_029bb308;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  do {
    lVar9 = NativeHelper_02041514(lVar6,uVar8,0);
    if (lVar9 == 0) {
      lVar4 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar1;
      lVar4 = NativeHelper_011df1c0(lVar9,uVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df678(lVar9,uVar10);
      }
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar9 = *(long *)puVar2;
    }
    lVar9 = func_0x0123a7a8(*(long *)(lVar9 + 0xb8) + 0x18,lVar4,lVar6);
    bVar3 = lVar6 != lVar9;
    lVar6 = lVar9;
  } while (bVar3);
  return;
}

