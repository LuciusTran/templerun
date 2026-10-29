// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual string ToString() { }
// Ghidra address: 0140d7dc; ELF VA: 0x130d7dc; file offset: 0x13097dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * MovingObject_MovingObjectPathNode_ToString_13097dc
                 (MovingObject_MovingObjectPathNode *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uStack_30;
  float fStack_28;
  
  puVar2 = PTR_DAT_029b8708;
  if ((bRam0000000002b950de & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b8308);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029b9e18);
    NativeHelper_011df0b4(PTR_DAT_029c1ae0);
    NativeHelper_011df0b4(PTR_DAT_029bafa8);
    bRam0000000002b950de = 1;
  }
  lVar3 = NativeHelper_011df12c(*(undefined8 *)puVar2,7);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_029c1ae0;
    uVar4 = NativeHelper_0200e848(&self->TimeStamp,0);
    if ((1 < *(uint *)(lVar3 + 0x18)) &&
       (*(undefined8 *)(lVar3 + 0x28) = uVar4, puVar2 = PTR_DAT_029b9e18,
       *(uint *)(lVar3 + 0x18) != 2)) {
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_029b9e18;
      fStack_28 = (self->Location).component2;
      uStack_30._0_4_ = (self->Location).component0;
      uStack_30._4_4_ = (self->Location).component1;
      uVar4 = func_0x01415714(&uStack_30,0,0,0);
      if ((3 < *(uint *)(lVar3 + 0x18)) &&
         (*(undefined8 *)(lVar3 + 0x38) = uVar4, puVar1 = PTR_DAT_029b8308,
         *(uint *)(lVar3 + 0x18) != 4)) {
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        uVar4 = NativeHelper_01f83748(&self->Ease,0);
        if ((5 < *(uint *)(lVar3 + 0x18)) &&
           (*(undefined8 *)(lVar3 + 0x48) = uVar4, *(uint *)(lVar3 + 0x18) != 6)) {
          *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_029bafa8;
          pvVar5 = (void *)NativeHelper_01e9bf50(lVar3,0);
          return pvVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

