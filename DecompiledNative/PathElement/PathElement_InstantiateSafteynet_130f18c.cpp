// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameObject InstantiateSafteynet() { }
// Ghidra address: 0141318c; ELF VA: 0x131318c; file offset: 0x130f18c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * PathElement_InstantiateSafteynet_130f18c(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *self_00;
  void *value;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar3;
  
  puVar1 = PTR_DAT_029b9758;
  if ((bRam0000000002b950f6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950f6 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar2,runtimeMethod);
    lVar2 = *(long *)puVar1;
    runtimeMethod = extraout_x1_00;
  }
  puVar1 = PTR_DAT_029b9ec8;
  if (**(long **)(lVar2 + 0xb8) != 0) {
    pvVar3 = *(void **)(**(long **)(lVar2 + 0xb8) + 0x278);
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98,runtimeMethod);
    }
    pvVar3 = UnityEngine_object_Instantiate_142b1bc(pvVar3,*(void **)puVar1);
    if (pvVar3 != (void *)0x0) {
      self_00 = (void *)NativeHelper_02610b98(pvVar3,0);
      value = (void *)NativeHelper_0260e1a8(self,0);
      if (self_00 != (void *)0x0) {
        UnityEngine_Transform_set_parent_2516ee0(self_00,value,(void *)0x0);
        return pvVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

