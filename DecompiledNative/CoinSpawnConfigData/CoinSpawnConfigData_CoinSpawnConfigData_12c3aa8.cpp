// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public CoinSpawnConfigData() { }
// Ghidra address: 013c7aa8; ELF VA: 0x12c7aa8; file offset: 0x12c3aa8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CoinSpawnConfigData_CoinSpawnConfigData_12c3aa8(CoinSpawnConfigData *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  void *extraout_x1;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_029b9870;
  puVar3 = PTR_DAT_029b9868;
  if ((bRam0000000002b94ea4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9858);
    NativeHelper_011df0b4(PTR_DAT_029b9868);
    NativeHelper_011df0b4(PTR_DAT_029b9870);
    bRam0000000002b94ea4 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar5 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar4,runtimeMethod);
  NativeHelper_01a14fb4(pvVar5,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_029b9858;
  if (pvVar5 != (void *)0x0) {
    lVar6 = *(long *)((long)pvVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_029b9858;
    *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 999999999;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,999999999,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_013c8008;
      }
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x5dc;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,0x5dc,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_013c8008;
      }
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 1000;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,1000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_013c8008;
      }
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 1000;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,1000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_013c8008;
      }
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 1000;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,1000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_013c8008;
      }
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 1000;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar5,1000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      self->DoubleValueCoinSpawnLvl = pvVar5;
      pvVar5 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar4);
      NativeHelper_01a14fb4(pvVar5,*(undefined8 *)puVar3);
      if (pvVar5 != (void *)0x0) {
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 999999999;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,999999999,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_013c8008;
          }
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 999999999;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,999999999,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_013c8008;
          }
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 999999999;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,999999999,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_013c8008;
          }
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 3000;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,3000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_013c8008;
          }
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x9c4;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,0x9c4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            lVar7 = *(long *)puVar2;
            *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_013c8008;
          }
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 2000;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar5,2000,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
          }
          self->TripleValueCoinSpawnLvl = pvVar5;
          self->field_0x10 = 1;
          return;
        }
      }
    }
  }
LAB_013c8008:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

