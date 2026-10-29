// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2) { }
// Ghidra address: 0140dc0c; ELF VA: 0x130dc0c; file offset: 0x1309c0c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Obstacle_DoesLineSegementIntersect_1309c0c
               (Obstacle *self,Recovered_Vector2 p1,Recovered_Vector2 p2,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  Region2D *self_00;
  bool bVar4;
  uint uVar5;
  
  if ((bRam0000000002b950e1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1af0);
    bRam0000000002b950e1 = 1;
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
        if (self_00 == (Region2D *)0x0) goto LAB_0140dcec;
        bVar2 = Region2D_DoesLineSegementIntersect_131ed58(self_00,p1,p2,(void *)0x0);
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
LAB_0140dcec:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

