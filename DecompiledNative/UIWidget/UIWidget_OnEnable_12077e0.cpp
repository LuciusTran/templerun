// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 0130b7e0; ELF VA: 0x120b7e0; file offset: 0x12077e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013a7e4c) */

void UIWidget_OnEnable_12077e0(UIWidget *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  UIPanel *pUVar9;
  
  if ((bRam0000000002b9461a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b9461a = 1;
  }
  self->mChanged = true;
  puVar2 = PTR_DAT_029b7f98;
  uVar4 = (**(code **)(*(long *)self + 0x1d8))(self,*(undefined8 *)(*(long *)self + 0x1e0));
  if ((uVar4 & 1) == 0) {
    self->mMat = (void *)0x0;
    self->mTex = (void *)0x0;
  }
  pUVar9 = self->mPanel;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
  if (bVar3) {
    pvVar5 = (void *)(**(code **)(*(long *)self + 0x178))
                               (self,*(undefined8 *)(*(long *)self + 0x180));
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar7);
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    puVar2 = PTR_DAT_029b7f98;
    if (bVar3) {
      pUVar9 = self->mPanel;
      if (pUVar9 == (UIPanel *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar5 = self->mMat;
      if ((bRam0000000002b94d72 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029be520,pvVar5,0,0);
        NativeHelper_011df0b4(PTR_DAT_029be528);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94d72 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
      if (bVar3) {
        if (pUVar9->mChanged != (void *)0x0) {
          uVar4 = NativeHelper_01a2fd9c(pUVar9->mChanged,pvVar5,*(undefined8 *)PTR_DAT_029be528);
          if ((uVar4 & 1) != 0) {
            return;
          }
          pvVar6 = pUVar9->mChanged;
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(long *)((long)pvVar6 + 0x10);
            lVar8 = *(long *)PTR_DAT_029be520;
            *(int *)((long)pvVar6 + 0x1c) = *(int *)((long)pvVar6 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)((long)pvVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)((long)pvVar6 + 0x18) = uVar1 + 1;
                *(void **)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = pvVar5;
              }
              else {
                NativeHelper_01a2fa14
                          (pvVar6,pvVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              pUVar9->mChangedLastFrame = true;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      return;
    }
  }
  return;
}

