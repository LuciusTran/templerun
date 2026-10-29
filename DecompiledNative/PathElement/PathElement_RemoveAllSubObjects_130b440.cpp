// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RemoveAllSubObjects() { }
// Ghidra address: 0140f440; ELF VA: 0x130f440; file offset: 0x130b440
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_RemoveAllSubObjects_130b440(PathElement *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  void *extraout_x1;
  uint uVar7;
  Recovered_Vector3 RVar8;
  Recovered_Vector3 RVar9;
  
  puVar2 = PTR_DAT_029b90f0;
  if ((bRam0000000002b950ff & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be110);
    NativeHelper_011df0b4(PTR_DAT_029b90f0);
    NativeHelper_011df0b4(PTR_DAT_029bf788);
    bRam0000000002b950ff = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    lVar3 = NativeHelper_012e8f84(**(long **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_029bf788,0);
    pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
    if ((pvVar4 != (void *)0x0) &&
       (pvVar4 = UnityEngine_Component_GetComponentsInChildren_13cd618
                           (pvVar4,*(void **)PTR_DAT_029be110), pvVar4 != (void *)0x0)) {
      uVar1 = *(uint *)((long)pvVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          lVar5 = *(long *)((long)pvVar4 + (long)(int)uVar7 * 8 + 0x20);
          if ((lVar5 == 0) || (uVar6 = NativeHelper_0260e1a8(lVar5,0), lVar3 == 0))
          goto LAB_0140f55c;
          NativeHelper_012eb6dc(lVar3,uVar6,0);
          uVar1 = *(uint *)((long)pvVar4 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      self->MySafteyNetSprite = (UISprite *)0x0;
      self->MyRenderers = (void *)0x0;
      self->IsInView = false;
      puVar2 = PTR_DAT_029c1ad8;
      if ((bRam0000000002b95100 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029c1ad8);
        bRam0000000002b95100 = 1;
      }
      pvVar4 = UnityEngine_Component_GetComponentsInChildren_13cd618(self,*(void **)puVar2);
      self->MyRenderers = pvVar4;
      pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar4 != (void *)0x0) {
        RVar8 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
        pvVar4 = (void *)NativeHelper_0260e1a8
                                   (RVar8.component0,RVar8.component1,RVar8.component2,self,0);
        if (pvVar4 != (void *)0x0) {
          RVar9 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
          (self->Rectangle).component0 = RVar8.component0 + -30.0;
          (self->Rectangle).component1 = RVar9.component2 + -30.0;
          (self->Rectangle).component2 = 60.0;
          (self->Rectangle).component3 = 60.0;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
LAB_0140f55c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

