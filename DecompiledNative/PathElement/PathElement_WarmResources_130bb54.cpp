// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void WarmResources() { }
// Ghidra address: 0140fb54; ELF VA: 0x130fb54; file offset: 0x130bb54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_WarmResources_130bb54(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  ulong uVar9;
  void *systemTypeInstance;
  void *in_x2;
  int type;
  int level;
  undefined8 uVar10;
  int iVar11;
  int iStack_64;
  
  puVar6 = PTR_DAT_029c1e18;
  if ((bRam0000000002b950f0 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9ef8);
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029c1e18);
    NativeHelper_011df0b4(PTR_DAT_029c1e20);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029c0350);
    bRam0000000002b950f0 = 1;
  }
  puVar7 = PTR_DAT_029c1e20;
  puVar5 = PTR_DAT_029c0350;
  puVar4 = PTR_DAT_029bde80;
  puVar3 = PTR_DAT_029b9ef8;
  puVar2 = PTR_DAT_029b9db8;
  puVar1 = PTR_DAT_029b8618;
  DebugEx_Log_13222f4(*(void **)puVar6,(void *)0x0);
  iVar11 = 0;
  type = 0;
  iStack_64 = 0;
  do {
    level = 0;
    do {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar8 = PathElement_GetPrefabNameForType_130a7a0(type,level,in_x2);
      if (pvVar8 != (void *)0x0) {
        in_x2 = (void *)0x0;
        uVar9 = NativeHelper_01e9b7a0(pvVar8,*(undefined8 *)puVar1);
        if ((uVar9 & 1) != 0) {
          iVar11 = iVar11 + 1;
          iStack_64 = iVar11;
          pvVar8 = (void *)NativeHelper_01e9390c(*(undefined8 *)puVar5,pvVar8,0);
          uVar10 = *(undefined8 *)puVar3;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            NativeHelper_011df1bc(*(long *)puVar2);
          }
          systemTypeInstance = (void *)NativeHelper_0200afdc(uVar10,0);
          in_x2 = (void *)0x0;
          UnityEngine_Resources_Load_2508040(pvVar8,systemTypeInstance,(void *)0x0);
        }
      }
      level = level + 1;
    } while (level != 4);
    type = type + 1;
  } while (type != 0x26);
  uVar10 = NativeHelper_01ffa318(&iStack_64,0);
  pvVar8 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar7,uVar10,0);
  DebugEx_Log_13222f4(pvVar8,(void *)0x0);
  return;
}

