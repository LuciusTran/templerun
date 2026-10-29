// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public override void SetVisibility(bool visible) { }
// Ghidra address: 0140d204; ELF VA: 0x130d204; file offset: 0x1309204
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_SetVisibility_1309204(MovingObject *self,bool visible,void *runtimeMethod)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((bRam0000000002b950dc & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1ad8);
    NativeHelper_011df0b4(PTR_DAT_029c0630);
    bRam0000000002b950dc = 1;
  }
  pvVar2 = (void *)NativeHelper_0260e1a8(self,0);
  if ((pvVar2 != (void *)0x0) &&
     (pvVar2 = UnityEngine_Component_GetComponentsInChildren_13cd618
                         (pvVar2,*(void **)PTR_DAT_029c1ad8), pvVar2 != (void *)0x0)) {
    uVar1 = *(uint *)((long)pvVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) goto LAB_0140d318;
        pvVar3 = *(void **)((long)pvVar2 + (long)(int)uVar4 * 8 + 0x20);
        if (pvVar3 == (void *)0x0) goto LAB_0140d31c;
        UnityEngine_Renderer_set_enabled_24f2aa0(pvVar3,visible,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    pvVar2 = UnityEngine_Component_GetComponentsInChildren_13cd618(self,*(void **)PTR_DAT_029c0630);
    if (pvVar2 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar2 + 0x18);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
LAB_0140d318:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar3 = *(void **)((long)pvVar2 + (long)(int)uVar4 * 8 + 0x20);
          if (pvVar3 == (void *)0x0) goto LAB_0140d31c;
          UnityEngine_Behaviour_set_enabled_250972c(pvVar3,visible,(void *)0x0);
          uVar1 = *(uint *)((long)pvVar2 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_0140d31c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

