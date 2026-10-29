// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsPointInsideAnyRegion2D(Vector3 point) { }
// Ghidra address: 014153e4; ELF VA: 0x13153e4; file offset: 0x13113e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_IsPointInsideAnyRegion2D_13113e4
               (PathElement *self,Recovered_Vector3 point,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  Region2D *self_00;
  bool bVar4;
  uint uVar5;
  
  if ((bRam0000000002b95107 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1eb0);
    bRam0000000002b95107 = 1;
  }
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  if ((pvVar3 != (void *)0x0) &&
     (pvVar3 = UnityEngine_Component_GetComponentsInChildren_13cd618
                         (pvVar3,*(void **)PTR_DAT_029c1eb0), pvVar3 != (void *)0x0)) {
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
        if (self_00 == (Region2D *)0x0) goto LAB_014154bc;
        bVar2 = Region2D_IsPointInside_131eb60(self_00,point,(void *)0x0);
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
LAB_014154bc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

