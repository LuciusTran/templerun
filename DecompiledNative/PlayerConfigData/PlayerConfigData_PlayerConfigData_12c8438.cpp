// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PlayerConfigData() { }
// Ghidra address: 013cc438; ELF VA: 0x12cc438; file offset: 0x12c8438
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerConfigData_PlayerConfigData_12c8438(PlayerConfigData *self,void *runtimeMethod)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *extraout_x1;
  long lVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_029b9870;
  puVar5 = PTR_DAT_029b9868;
  if ((bRam0000000002b94ed2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9858);
    NativeHelper_011df0b4(PTR_DAT_029b9868);
    NativeHelper_011df0b4(PTR_DAT_029b9870);
    bRam0000000002b94ed2 = 1;
    runtimeMethod = extraout_x1;
  }
  uVar7 = _UNK_007a4468;
  uVar2 = _UNK_007a4460;
  self->ResurrectionBoostDistance = 0x96;
  uVar8 = _UNK_007a4468;
  _UNK_007a4468 = (undefined4)uVar7;
  _UNK_007a446c = SUB84(uVar7,4);
  uVar3 = _UNK_007a446c;
  self->StumbleSlowDownPercent = (float)_UNK_007a4468;
  _UNK_007a4468 = uVar8;
  uVar7 = _UNK_007a4460;
  self->ResurrectionSlowDownPercent = (float)uVar3;
  _UNK_007a4460 = (undefined4)uVar2;
  _UNK_007a4464 = SUB84(uVar2,4);
  uVar3 = _UNK_007a4464;
  self->StartRunVelocity = (float)_UNK_007a4460;
  _UNK_007a4460 = uVar7;
  self->MaxRunVelocity = (float)uVar3;
  pvVar9 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar6,runtimeMethod);
  NativeHelper_01a14fb4(pvVar9,*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_029b9858;
  if (pvVar9 != (void *)0x0) {
    lVar10 = *(long *)((long)pvVar9 + 0x10);
    lVar11 = *(long *)PTR_DAT_029b9858;
    *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)((long)pvVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x32;
        *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar9,0x32,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar10 = *(long *)((long)pvVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_013cc7a8;
      }
      uVar1 = *(uint *)((long)pvVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x41;
        *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar9,0x41,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        lVar10 = *(long *)((long)pvVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_013cc7a8;
      }
      uVar1 = *(uint *)((long)pvVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x55;
      }
      else {
        NativeHelper_01a157ac
                  (pvVar9,0x55,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      self->AccCurveThresholds = pvVar9;
      pvVar9 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar6);
      NativeHelper_01a14fb4(pvVar9,*(undefined8 *)puVar5);
      if (pvVar9 != (void *)0x0) {
        lVar10 = *(long *)((long)pvVar9 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3000;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar9,3000,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            lVar10 = *(long *)((long)pvVar9 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_013cc7a8;
          }
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 1000;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar9,1000,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            lVar10 = *(long *)((long)pvVar9 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_013cc7a8;
          }
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x96;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar9,0x96,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            lVar10 = *(long *)((long)pvVar9 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_013cc7a8;
          }
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)((long)pvVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x32;
          }
          else {
            NativeHelper_01a157ac
                      (pvVar9,0x32,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          self->AccCurveForces = pvVar9;
          self->field_0x10 = 1;
          return;
        }
      }
    }
  }
LAB_013cc7a8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

