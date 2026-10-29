// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static PlayerManager get_Instance() { }
// Ghidra address: 013d0bc8; ELF VA: 0x12d0bc8; file offset: 0x12ccbc8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * PlayerManager_get_Instance_12ccbc8(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  
  puVar2 = PTR_DAT_029bffb0;
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94f54 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bffb8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bffb0);
    bRam0000000002b94f54 = 1;
  }
  pvVar5 = (void *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pvVar5,(void *)0x0,(void *)0x0);
  puVar3 = PTR_DAT_029bffb8;
  if (bVar4) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pvVar5 = UnityEngine_object_FindObjectOfType_142ad18(*(void **)puVar3);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = pvVar5;
  }
  return (void *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
}

