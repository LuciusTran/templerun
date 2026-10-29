// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DestroySelf() { }
// Ghidra address: 013c0250; ELF VA: 0x12c0250; file offset: 0x12bc250
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BonusItem_DestroySelf_12bc250(BonusItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *value;
  void *extraout_x1;
  undefined8 uVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_029b90f0;
  if ((bRam0000000002b94e4c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029bf788);
    bRam0000000002b94e4c = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar5,runtimeMethod);
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    lVar5 = NativeHelper_012e8f84(**(long **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_029bf788,0);
    pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
    if ((lVar5 != 0) && (value = (void *)NativeHelper_0260e1a8(lVar5,0), pvVar6 != (void *)0x0)) {
      UnityEngine_Transform_set_parent_2516ee0(pvVar6,value,(void *)0x0);
      pvVar6 = (void *)NativeHelper_0260e1a8(self,0);
      if ((bRam0000000002b944e5 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7fb8,pvVar6,0);
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
      if (*(long *)(lVar5 + 0x60) != 0) {
        NativeHelper_01a30500(&uStack_68,*(long *)(lVar5 + 0x60),*(undefined8 *)PTR_DAT_029b9298);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        while( true ) {
          uVar3 = NativeHelper_0182184c(&uStack_50,*(undefined8 *)puVar1);
          lVar4 = lStack_40;
          if ((uVar3 & 1) == 0) {
            NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
            if (pvVar6 != (void *)0x0) {
              uVar7 = *(undefined8 *)(lVar5 + 0x20);
              pvVar6 = UnityEngine_object_get_name_25101a4(pvVar6,(void *)0x0);
              pvVar6 = (void *)NativeHelper_01e9c258(*(undefined8 *)PTR_DAT_029b93f0,uVar7,pvVar6,0)
              ;
              if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                NativeHelper_011df1bc(*(long *)PTR_DAT_029b7fb8);
              }
              UnityEngine_Debug_LogError_24ea230(pvVar6,(void *)0x0);
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
          uVar3 = NativeHelper_01a2fd9c(*(long *)(lStack_40 + 0x50),pvVar6,*(undefined8 *)puVar2);
          if ((uVar3 & 1) != 0) break;
          lVar4 = *(long *)(lVar4 + 0x58);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          uVar3 = NativeHelper_01a2fd9c(lVar4,pvVar6,*(undefined8 *)puVar2);
          if ((uVar3 & 1) != 0) {
            if (pvVar6 != (void *)0x0) {
              uVar7 = *(undefined8 *)(lVar5 + 0x20);
              pvVar6 = UnityEngine_object_get_name_25101a4(pvVar6,(void *)0x0);
              pvVar6 = (void *)NativeHelper_01e9c258(*(undefined8 *)PTR_DAT_029b93f8,uVar7,pvVar6,0)
              ;
              if (*(int *)(*(long *)PTR_DAT_029b7fb8 + 0xe0) == 0) {
                NativeHelper_011df1bc();
              }
              UnityEngine_Debug_LogError_24ea230(pvVar6,(void *)0x0);
              NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
              return;
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
        }
        func_0x012eb9e4(lVar4,pvVar6);
        NativeHelper_01821848(&uStack_50,*(undefined8 *)PTR_DAT_029b9278);
        if (*(long *)(lVar5 + 0x68) != 0) {
          NativeHelper_01a30f28(*(long *)(lVar5 + 0x68),pvVar6,*(undefined8 *)PTR_DAT_029b93e8);
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

