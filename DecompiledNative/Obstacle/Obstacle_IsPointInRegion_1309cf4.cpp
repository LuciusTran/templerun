// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsPointInRegion(Vector2 p) { }
// Ghidra address: 0140dcf4; ELF VA: 0x130dcf4; file offset: 0x1309cf4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Obstacle_IsPointInRegion_1309cf4(Obstacle *self,Recovered_Vector2 p,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  Region2D *self_00;
  bool bVar4;
  uint uVar5;
  
  if ((bRam0000000002b950e2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1af0);
    bRam0000000002b950e2 = 1;
  }
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  if ((pvVar3 != (void *)0x0) &&
     (pvVar3 = UnityEngine_Component_GetComponents_13cd484(pvVar3,*(void **)PTR_DAT_029c1af0),
     pvVar3 != (void *)0x0)) {
    uVar1 = *(uint *)((long)pvVar3 + 0x18);
    bVar4 = 0 < (int)uVar1;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        self_00 = *(Region2D **)((long)pvVar3 + (long)(int)uVar5 * 8 + 0x20);
        if (self_00 == (Region2D *)0x0) goto LAB_0140ddbc;
        bVar2 = Region2D_IsPointInside_131eb68(self_00,p,(void *)0x0);
        if (bVar2) {
          return bVar4;
        }
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        uVar5 = uVar5 + 1;
        bVar4 = (int)uVar5 < (int)uVar1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return bVar4;
  }
LAB_0140ddbc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

