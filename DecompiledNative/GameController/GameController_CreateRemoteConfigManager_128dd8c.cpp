// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CreateRemoteConfigManager() { }
// Ghidra address: 01391d8c; ELF VA: 0x1291d8c; file offset: 0x128dd8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_CreateRemoteConfigManager_128dd8c(GameController *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *channel;
  void *extraout_x1;
  void *extraout_x1_00;
  void *format;
  void *in_x4;
  long lVar9;
  void *pvVar10;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94ce1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba718);
    NativeHelper_011df0b4(PTR_DAT_029b7fe8);
    NativeHelper_011df0b4(PTR_DAT_029bde08);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029bde10);
    NativeHelper_011df0b4(PTR_DAT_029b9638);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bde18);
    NativeHelper_011df0b4(PTR_DAT_029bde20);
    NativeHelper_011df0b4(PTR_DAT_029bdc20);
    bRam0000000002b94ce1 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_029b7f98;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar6,runtimeMethod);
    lVar6 = *(long *)puVar2;
    runtimeMethod = extraout_x1_00;
  }
  puVar4 = PTR_DAT_029bde20;
  lVar9 = *(long *)puVar3;
  pvVar10 = *(void **)(*(long *)(lVar6 + 0xb8) + 8);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar9,runtimeMethod);
  }
  bVar5 = UnityEngine_object_op_Equality_250d534(pvVar10,(void *)0x0,(void *)0x0);
  Imangi_Utilities_ImangiAssert_Code_1223b44(bVar5,*(void **)puVar4,(void *)0x1,(void *)0x0);
  bVar5 = UnityEngine_object_op_Equality_250d534
                    (*(void **)(*(long *)(*(long *)puVar2 + 0xb8) + 8),(void *)0x0,(void *)0x0);
  if (!bVar5) {
    return;
  }
  pvVar10 = (void *)NativeHelper_0260e1e4(self,0);
  if (pvVar10 != (void *)0x0) {
    pvVar10 = UnityEngine_GameObject_AddComponent_1402d84(pvVar10,*(void **)PTR_DAT_029bde10);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar6);
      lVar6 = *(long *)puVar2;
    }
    *(void **)(*(long *)(lVar6 + 0xb8) + 8) = pvVar10;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar10,(void *)0x0,(void *)0x0);
    if (!bVar5) {
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
      pvVar10 = (void *)**(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_029b9638 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)PTR_DAT_029b9638);
      }
      puVar2 = PTR_DAT_029b9638;
      channel = *(void **)PTR_DAT_029bdc20;
      format = *(void **)PTR_DAT_029bde18;
      if ((bRam0000000002b9472c & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b9638,format,pvVar10,0);
        NativeHelper_011df0b4(PTR_DAT_029ba678);
        bRam0000000002b9472c = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      if (cRam0000000002b94817 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9638);
        cRam0000000002b94817 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar6 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_029ba678;
      if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x10) == '\0') {
        return;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar10 = Imangi_Utilities_ImangiLog_GetOSString_121f50c
                          (channel,*(void **)puVar2,format,pvVar10,in_x4);
      puVar4 = PTR_DAT_029baa58;
      puVar3 = PTR_DAT_029b9638;
      puVar2 = PTR_DAT_029b7f68;
      if ((bRam0000000002b9471a & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7f68);
        NativeHelper_011df0b4(PTR_DAT_029baa58);
        NativeHelper_011df0b4(PTR_DAT_029b9638);
        bRam0000000002b9471a = 1;
      }
      lVar6 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
      NativeHelper_01694ef4(lVar6,0,*(undefined8 *)puVar4,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      if (pvVar10 != (void *)0x0) {
        iVar1 = *(int *)((long)pvVar10 + 0x10);
        while (0x3ff < iVar1) {
          uVar7 = NativeHelper_01e9d468(pvVar10,0,0x3ff,0);
          if (lVar6 == 0) goto code_r0x01322758;
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),uVar7,*(undefined8 *)(lVar6 + 0x28));
          pvVar10 = (void *)NativeHelper_01e9f644(pvVar10,0x3ff,0);
          if (pvVar10 == (void *)0x0) goto code_r0x01322758;
          iVar1 = *(int *)((long)pvVar10 + 0x10);
        }
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01322754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),pvVar10,*(undefined8 *)(lVar6 + 0x28));
          return;
        }
      }
code_r0x01322758:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar7 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029ba718);
    NativeHelper_01693bd4(uVar7,self,*(undefined8 *)PTR_DAT_029bde08,0);
    if (lVar6 != 0) {
      uVar8 = RemoteConfigManager_Initialize_131f4e8(lVar6,uVar7,0);
      if ((uVar8 & 1) != 0) {
        return;
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar6 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x10) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

