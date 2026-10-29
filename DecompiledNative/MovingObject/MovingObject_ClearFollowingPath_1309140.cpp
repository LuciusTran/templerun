// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearFollowingPath() { }
// Ghidra address: 0140d140; ELF VA: 0x130d140; file offset: 0x1309140
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MovingObject_ClearFollowingPath_1309140(MovingObject *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar8;
  undefined *puVar7;
  
  if ((bRam0000000002b950da & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c1ad0);
    bRam0000000002b950da = 1;
  }
  pvVar8 = self->FollowingPathNodes;
  self->IsFollowingPath = false;
  if (pvVar8 != (void *)0x0) {
    iVar1 = *(int *)((long)pvVar8 + 0x18);
    *(undefined4 *)((long)pvVar8 + 0x18) = 0;
    *(int *)((long)pvVar8 + 0x1c) = *(int *)((long)pvVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      puVar4 = *(undefined8 **)((long)pvVar8 + 0x10);
      if (puVar4 == (undefined8 *)0x0) {
        NativeHelper_011df0c8(PTR_DAT_029c2bf8,0,iVar1,0);
        uVar5 = NativeHelper_011df2d0();
        uVar6 = NativeHelper_011df0c8(PTR_DAT_029c2dd8);
        NativeHelper_01f79f9c(uVar5,uVar6,0);
      }
      else {
        if (iVar1 < 0) {
          NativeHelper_011df0c8(PTR_DAT_029c2bc8,0,iVar1,0);
          uVar5 = NativeHelper_011df2d0();
          puVar7 = PTR_DAT_029d43f8;
        }
        else {
          iVar2 = func_0x011ae5dc(puVar4,0);
          if (iVar2 < 1) {
            iVar3 = NativeHelper_02014834(puVar4);
            if (-iVar2 <= iVar3 - iVar1) {
              iVar3 = func_0x02861830(*puVar4);
              (*(code *)PTR_memset_02a05660)
                        ((long)puVar4 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1));
              return;
            }
            NativeHelper_011df0c8(PTR_DAT_029c2bc8);
            uVar5 = NativeHelper_011df2d0();
            puVar7 = PTR_DAT_029d4408;
          }
          else {
            NativeHelper_011df0c8(PTR_DAT_029c2bc8);
            uVar5 = NativeHelper_011df2d0();
            puVar7 = PTR_DAT_029d4400;
          }
        }
        uVar6 = NativeHelper_011df0c8(puVar7);
        NativeHelper_01ff842c(uVar5,uVar6,0);
      }
      uVar6 = NativeHelper_011df0c8(PTR_DAT_029d4410);
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df1ac(uVar5,uVar6);
    }
  }
  return;
}

