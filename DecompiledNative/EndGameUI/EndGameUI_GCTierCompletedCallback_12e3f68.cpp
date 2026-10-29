// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GCTierCompletedCallback(int tierNo, float overflowPercent) { }
// Ghidra address: 013e7f68; ELF VA: 0x12e7f68; file offset: 0x12e3f68
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013152d4) */

void EndGameUI_GCTierCompletedCallback_12e3f68
               (EndGameUI *self,int tierNo,float overflowPercent,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  UIFilledSprite *self_00;
  void *pvVar4;
  uint uVar5;
  
  if ((bRam0000000002b94fc9 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0808);
    bRam0000000002b94fc9 = 1;
  }
  pvVar4 = self->gcCompleteIndicators;
  self->gcTierNo = tierNo;
  self->gcOverflowPercent = overflowPercent;
  puVar1 = PTR_DAT_029c0808;
  if (pvVar4 != (void *)0x0) {
    uVar5 = 0;
    do {
      if ((int)*(uint *)((long)pvVar4 + 0x18) <= (int)uVar5) {
        lVar2 = 0;
        goto LAB_013e8000;
      }
      if (*(uint *)((long)pvVar4 + 0x18) <= uVar5) goto LAB_013e8104;
      lVar2 = *(long *)((long)pvVar4 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar2 == 0) break;
      NativeHelper_02610c54(lVar2,0,0);
      pvVar4 = self->gcCompleteIndicators;
      uVar5 = uVar5 + 1;
    } while (pvVar4 != (void *)0x0);
  }
LAB_013e8100:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
LAB_013e8000:
  uVar5 = (uint)lVar2;
  if ((tierNo & (tierNo >> 0x1f ^ 0xffffffffU)) == uVar5) {
    if ((int)*(uint *)((long)pvVar4 + 0x18) <= tierNo) {
      return;
    }
    if (*(uint *)((long)pvVar4 + 0x18) <= (uint)tierNo) goto LAB_013e8104;
    lVar2 = *(long *)((long)pvVar4 + (long)tierNo * 8 + 0x20);
    if (lVar2 != 0) {
      NativeHelper_02610c54(lVar2,1,0);
      pvVar4 = self->gcCompleteIndicators;
      if (pvVar4 != (void *)0x0) {
        if (*(uint *)((long)pvVar4 + 0x18) <= (uint)tierNo) {
LAB_013e8104:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        pvVar4 = *(void **)((long)pvVar4 + (long)tierNo * 8 + 0x20);
        if ((pvVar4 != (void *)0x0) &&
           (pvVar4 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar4,*(void **)puVar1),
           pvVar4 != (void *)0x0)) {
          if (overflowPercent < 0.0) {
            overflowPercent = 0.0;
          }
          if (*(float *)((long)pvVar4 + 0xdc) != overflowPercent) {
            *(float *)((long)pvVar4 + 0xdc) = overflowPercent;
            *(undefined1 *)((long)pvVar4 + 0x58) = 1;
          }
          return;
        }
      }
    }
    goto LAB_013e8100;
  }
  if (*(uint *)((long)pvVar4 + 0x18) <= uVar5) goto LAB_013e8104;
  lVar3 = *(long *)((long)pvVar4 + lVar2 * 8 + 0x20);
  if (lVar3 == 0) goto LAB_013e8100;
  NativeHelper_02610c54(lVar3,1,0);
  pvVar4 = self->gcCompleteIndicators;
  if (pvVar4 == (void *)0x0) goto LAB_013e8100;
  if (*(uint *)((long)pvVar4 + 0x18) <= uVar5) goto LAB_013e8104;
  pvVar4 = *(void **)((long)pvVar4 + lVar2 * 8 + 0x20);
  if ((pvVar4 == (void *)0x0) ||
     (self_00 = UnityEngine_GameObject_GetComponent_1402e6c(pvVar4,*(void **)puVar1),
     self_00 == (UIFilledSprite *)0x0)) goto LAB_013e8100;
  UIFilledSprite_set_fillAmount_12112cc(self_00,1.0,(void *)0x0);
  pvVar4 = self->gcCompleteIndicators;
  lVar2 = lVar2 + 1;
  if (pvVar4 == (void *)0x0) goto LAB_013e8100;
  goto LAB_013e8000;
}

