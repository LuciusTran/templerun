// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddFollowingPathNode(MovingObjectPathNode node) { }
// Ghidra address: 0140cf94; ELF VA: 0x130cf94; file offset: 0x1308f94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_AddFollowingPathNode_1308f94
               (MovingObject *self,MovingObject_MovingObjectPathNode *node,void *runtimeMethod)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if ((bRam0000000002b950d8 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1ab8);
    NativeHelper_011df0b4(PTR_DAT_029c1ac0);
    NativeHelper_011df0b4(PTR_DAT_029c1ac8);
    bRam0000000002b950d8 = 1;
  }
  pvVar4 = self->FollowingPathNodes;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029c1ac8);
    NativeHelper_01a2f248(pvVar4,*(undefined8 *)PTR_DAT_029c1ac0);
    self->FollowingPathNodes = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_0140d07c;
  }
  lVar2 = *(long *)((long)pvVar4 + 0x10);
  lVar3 = *(long *)PTR_DAT_029c1ab8;
  *(int *)((long)pvVar4 + 0x1c) = *(int *)((long)pvVar4 + 0x1c) + 1;
  if (lVar2 != 0) {
    uVar1 = *(uint *)((long)pvVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)((long)pvVar4 + 0x18) = uVar1 + 1;
      *(MovingObject_MovingObjectPathNode **)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = node;
      return;
    }
    uVar1 = *(uint *)((long)pvVar4 + 0x18);
    func_0x01a2ffdc(pvVar4,uVar1 + 1,
                    *(undefined8 *)
                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ) + 0x20) + 0xc0) + 0x78));
    lVar2 = *(long *)((long)pvVar4 + 0x10);
    *(uint *)((long)pvVar4 + 0x18) = uVar1 + 1;
    if (lVar2 != 0) {
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(MovingObject_MovingObjectPathNode **)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = node;
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

