// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DestroySelf() { }
// Ghidra address: 013d9ce8; ELF VA: 0x12d9ce8; file offset: 0x12d5ce8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void DynamicElement_DestroySelf_12d5ce8(DynamicElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *extraout_x1;
  void *pvVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94f47 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94f47 = 1;
    runtimeMethod = extraout_x1;
  }
  self->primaryRenderer = (void *)0x0;
  lVar5 = *(long *)puVar1;
  pvVar8 = self->Pool;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar5,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar8,(void *)0x0,(void *)0x0);
  if (bVar3) {
    uVar6 = NativeHelper_0260e1e4(self,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar5);
    }
    puVar1 = PTR_DAT_029b7f98;
    if ((bRam0000000002b9cef0 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7f98,0);
      bRam0000000002b9cef0 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (pcRam0000000002b9cee8 == (code *)0x0) {
      pcRam0000000002b9cee8 = (code *)NativeHelper_011df070(&UNK_007b7e82);
    }
                    /* WARNING: Could not recover jumptable at 0x02614d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000002b9cee8)(0,uVar6);
    return;
  }
  pvVar8 = (void *)NativeHelper_0260e1a8(self,0);
  if ((self->Pool != (void *)0x0) &&
     (pvVar7 = (void *)NativeHelper_0260e1a8(self->Pool,0), pvVar8 != (void *)0x0)) {
    UnityEngine_Transform_set_parent_2516ee0(pvVar8,pvVar7,(void *)0x0);
    pvVar7 = self->Pool;
    pvVar8 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar7 != (void *)0x0) {
      if ((bRam0000000002b944e5 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar8,0);
        NativeHelper_011df0b4(PTR_DAT_029b9278);
        NativeHelper_011df0b4(PTR_DAT_029b9280);
        NativeHelper_011df0b4(PTR_DAT_029b9288);
        NativeHelper_011df0b4(PTR_DAT_029b93e0);
        NativeHelper_011df0b4(PTR_DAT_029b9298);
        NativeHelper_011df0b4(PTR_DAT_029b93e8);
        NativeHelper_011df0b4(PTR_DAT_029b93f0);
        NativeHelper_011df0b4(PTR_DAT_029b93f8);
        bRam0000000002b944e5 = 1;
      }
      puVar2 = PTR_DAT_029b93e0;
      puVar1 = PTR_DAT_029b9280;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_40 = 0;
      if (*(long *)((long)pvVar7 + 0x60) != 0) {
        NativeHelper_01a30500
                  (&uStack_68,*(long *)((long)pvVar7 + 0x60),*(undefined8 *)PTR_DAT_029b9298);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        while( true ) {
          uVar4 = NativeHelper_0182184c(&uStack_50,*(undefined8 *)puVar1);
          lVar5 = lStack_40;
          if ((uVar4 & 1) == 0) {
            NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
            if (pvVar8 != (void *)0x0) {
              uVar6 = *(undefined8 *)((long)pvVar7 + 0x20);
              pvVar8 = UnityEngine_object_get_name_25101a4(pvVar8,(void *)0x0);
              pvVar8 = (void *)NativeHelper_01e9c258(*(undefined8 *)PTR_DAT_029b93f0,uVar6,pvVar8,0)
              ;
              if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)PTR_DAT_029b7fb8);
              }
              UnityEngine_Debug_LogError_24ea230(pvVar8,(void *)0x0);
              return;
            }
            goto code_r0x012eb944;
          }
          if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          if (*(long *)(lStack_40 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          uVar4 = NativeHelper_01a2fd9c(*(long *)(lStack_40 + 0x50),pvVar8,*(undefined8 *)puVar2);
          if ((uVar4 & 1) != 0) break;
          lVar5 = *(long *)(lVar5 + 0x58);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          uVar4 = NativeHelper_01a2fd9c(lVar5,pvVar8,*(undefined8 *)puVar2);
          if ((uVar4 & 1) != 0) {
            if (pvVar8 != (void *)0x0) {
              uVar6 = *(undefined8 *)((long)pvVar7 + 0x20);
              pvVar8 = UnityEngine_object_get_name_25101a4(pvVar8,(void *)0x0);
              pvVar8 = (void *)NativeHelper_01e9c258(*(undefined8 *)PTR_DAT_029b93f8,uVar6,pvVar8,0)
              ;
              if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              UnityEngine_Debug_LogError_24ea230(pvVar8,(void *)0x0);
              NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
              return;
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
        }
        func_0x012eb9e4(lVar5,pvVar8);
        NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
        if (*(long *)((long)pvVar7 + 0x68) != 0) {
          NativeHelper_01a30f28
                    (*(long *)((long)pvVar7 + 0x68),pvVar8,*(undefined8 *)PTR_DAT_029b93e8);
          return;
        }
      }
code_r0x012eb944:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

