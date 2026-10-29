// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private List<ImangiGameCenterScore> GetFriendScoresInRange(float inMin, float inMax) { }
// Ghidra address: 0139aa90; ELF VA: 0x129aa90; file offset: 0x1296a90
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


long GameController_GetFriendScoresInRange_1296a90(float param_1,float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  puVar3 = PTR_DAT_029bca08;
  puVar2 = PTR_DAT_029bc9f0;
  if ((bRam0000000002b94cf7 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bc9e8);
    NativeHelper_011df0b4(PTR_DAT_029bc9f0);
    NativeHelper_011df0b4(PTR_DAT_029bca00);
    NativeHelper_011df0b4(PTR_DAT_029bca08);
    bRam0000000002b94cf7 = 1;
  }
  lVar4 = NativeHelper_011df2d0(*(undefined8 *)puVar3);
  NativeHelper_01a2f248(lVar4,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_029bca00;
  puVar2 = PTR_DAT_029bc9e8;
  if (0 < *(int *)(param_3 + 0x1e0)) {
    iVar8 = 0;
    do {
      if ((*(long *)(param_3 + 0x1e8) == 0) ||
         (lVar5 = NativeHelper_01a2f750(*(long *)(param_3 + 0x1e8),iVar8,*(undefined8 *)puVar3),
         lVar5 == 0)) goto LAB_0139abe4;
      if ((param_1 <= (float)*(long *)(lVar5 + 0x48)) && ((float)*(long *)(lVar5 + 0x48) <= param_2)
         ) {
        if (lVar4 == 0) {
LAB_0139abe4:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0139abe4;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
        }
        else {
          NativeHelper_01a2fa14
                    (lVar4,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_3 + 0x1e0));
  }
  return lVar4;
}

