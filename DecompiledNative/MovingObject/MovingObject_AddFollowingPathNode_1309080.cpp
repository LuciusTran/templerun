// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddFollowingPathNode(float timeStamp, Vector3 location, bool ease) { }
// Ghidra address: 0140d080; ELF VA: 0x130d080; file offset: 0x1309080
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_AddFollowingPathNode_1309080
               (MovingObject *self,float timeStamp,Recovered_Vector3 location,bool ease,
               void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  puVar2 = PTR_DAT_029bdf50;
  if ((bRam0000000002b950d9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf50);
    bRam0000000002b950d9 = 1;
  }
  lVar3 = NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_0203e408(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  *(float *)(lVar3 + 0x10) = timeStamp;
  *(float *)(lVar3 + 0x14) = location.component0;
  *(float *)(lVar3 + 0x18) = location.component1;
  *(float *)(lVar3 + 0x1c) = location.component2;
  *(bool *)(lVar3 + 0x20) = ease;
  if ((bRam0000000002b950d8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1ab8);
    NativeHelper_011df0b4(PTR_DAT_029c1ac0);
    NativeHelper_011df0b4(PTR_DAT_029c1ac8);
    bRam0000000002b950d8 = 1;
  }
  pvVar6 = self->FollowingPathNodes;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c1ac8);
    NativeHelper_01a2f248(pvVar6,*(undefined8 *)PTR_DAT_029c1ac0);
    self->FollowingPathNodes = pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_0140d07c;
  }
  lVar4 = *(long *)((long)pvVar6 + 0x10);
  lVar5 = *(long *)PTR_DAT_029c1ab8;
  *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)((long)pvVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)((long)pvVar6 + 0x18) = uVar1 + 1;
      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
      return;
    }
    uVar1 = *(uint *)((long)pvVar6 + 0x18);
    func_0x01a2ffdc(pvVar6,uVar1 + 1,
                    *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ) + 0x20) + 0xc0) + 0x78));
    lVar4 = *(long *)((long)pvVar6 + 0x10);
    *(uint *)((long)pvVar6 + 0x18) = uVar1 + 1;
    if (lVar4 != 0) {
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
LAB_0140d07c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

