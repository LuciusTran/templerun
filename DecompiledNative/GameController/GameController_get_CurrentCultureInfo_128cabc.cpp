// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static CultureInfo get_CurrentCultureInfo() { }
// Ghidra address: 01390abc; ELF VA: 0x1290abc; file offset: 0x128cabc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * GameController_get_CurrentCultureInfo_128cabc(void *runtimeMethod)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  
  puVar4 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cd2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8688);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94cd2 = 1;
  }
  puVar3 = PTR_DAT_029b7f98;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar4;
  }
  pvVar7 = (void *)**(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar3);
  }
  bVar5 = UnityEngine_object_op_Implicit_2510034(pvVar7,(void *)0x0);
  if (bVar5) {
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar4;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    pvVar7 = *(void **)(**(long **)(lVar6 + 0xb8) + 0x2d0);
    if (pvVar7 != (void *)0x0) {
      return pvVar7;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_029b8688 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar4 = PTR_DAT_029b8688;
  if ((bRam0000000002b9812a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8688);
    bRam0000000002b9812a = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  puVar4 = PTR_DAT_029b8688;
  if ((bRam0000000002b98120 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8688);
    NativeHelper_011df0b4(PTR_DAT_029d0ae0);
    bRam0000000002b98120 = 1;
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_029d0ae0;
  pvVar7 = *(void **)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(lVar6 + 0xe0) != 0) {
      return pvVar7;
    }
    NativeHelper_011df1bc();
    return *(void **)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_029d0ae0 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  if (cRam0000000002b98055 == '\0') {
    NativeHelper_011df0b4(PTR_DAT_029d0ae0);
    cRam0000000002b98055 = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar3;
  }
  cVar1 = **(char **)(lVar6 + 0xb8);
  plVar2 = (long *)PTR_DAT_029b8688;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar4);
    plVar2 = (long *)PTR_DAT_029b8688;
  }
  PTR_DAT_029b8688 = (undefined *)plVar2;
  if (cVar1 != '\0') {
    if ((bRam0000000002b9811f & 1) == 0) {
      NativeHelper_011df0b4(plVar2);
      bRam0000000002b9811f = 1;
    }
    lVar6 = *plVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *plVar2;
    }
    pvVar7 = (void *)**(undefined8 **)(lVar6 + 0xb8);
    NativeHelper_011df104();
    return pvVar7;
  }
  lVar6 = func_0x0123a314();
  if (lVar6 != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar7 = (void *)func_0x01fc1478(lVar6);
    if (pvVar7 != (void *)0x0) {
      *(undefined1 *)((long)pvVar7 + 0x10) = 1;
      *(undefined1 *)((long)pvVar7 + 0x28) = 1;
      goto code_r0x01fc1414;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  pvVar7 = (void *)NativeHelper_01fc11f0();
code_r0x01fc1414:
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar4;
  }
  *(void **)(*(long *)(lVar6 + 0xb8) + 0x10) = pvVar7;
  return pvVar7;
}

