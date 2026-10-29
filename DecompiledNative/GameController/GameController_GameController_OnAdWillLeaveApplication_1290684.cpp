// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void GameController_OnAdWillLeaveApplication(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 01394684; ELF VA: 0x1294684; file offset: 0x1290684
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_GameController_OnAdWillLeaveApplication_1290684
               (GameController *self,void *inService,void *inAdType,void *inAdSpaceName,
               void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_029c17b0;
  puVar1 = PTR_DAT_029b7f98;
  if ((int)inAdType != 0) {
    return;
  }
  if ((bRam0000000002b95091 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c17b0);
    bRam0000000002b95091 = 1;
    inService = extraout_x1;
  }
  pvVar7 = (void *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,inService);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar3) {
    return;
  }
  lVar4 = *(long *)puVar2;
  lVar5 = **(long **)(lVar4 + 0xb8);
  if (lVar5 != 0) {
    uVar8 = 0;
    do {
      if ((long)*(int *)(lVar5 + 0x28) <= (long)uVar8) {
        return;
      }
      lVar6 = *(long *)(lVar5 + 0x20);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
code_r0x01404d00:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto code_r0x01404d00;
      if (*(char *)(lVar5 + uVar8 + 0x20) != '\0') {
        pvVar7 = *(void **)(lVar6 + uVar8 * 8 + 0x20);
        if (pvVar7 == (void *)0x0) break;
        UnityEngine_Behaviour_set_enabled_250972c(pvVar7,true,(void *)0x0);
        lVar4 = *(long *)puVar2;
      }
      uVar8 = uVar8 + 1;
      lVar5 = **(long **)(lVar4 + 0xb8);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

