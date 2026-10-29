// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AddAchievement(string aId, string aName, string aPreDescription, string aPostDescription = null, bool aHidden = false) { }
// Ghidra address: 013b6524; ELF VA: 0x12b6524; file offset: 0x12b2524
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void RecordManager_AddAchievement_12b2524
               (RecordManager *self,void *aId,void *aName,void *aPreDescription,
               void *aPostDescription,bool aHidden,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  RecordManager_cAchievement *self_00;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_029bef58;
  if ((bRam0000000002b94dd6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bef60);
    NativeHelper_011df0b4(PTR_DAT_029bef58);
    bRam0000000002b94dd6 = 1;
  }
  self_00 = (RecordManager_cAchievement *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  RecordManager_cAchievement_cAchievement_12b52ac(self_00,(void *)0x0);
  if (self_00 != (RecordManager_cAchievement *)0x0) {
    pvVar3 = aPreDescription;
    if (aPostDescription != (void *)0x0) {
      pvVar3 = aPostDescription;
    }
    self_00->achievementId = aId;
    self_00->name = aName;
    self_00->preDescription = aPreDescription;
    self_00->postDescription = pvVar3;
    self_00->hidden = aHidden;
    pvVar3 = self->TRAchievements;
    if (pvVar3 != (void *)0x0) {
      lVar4 = *(long *)((long)pvVar3 + 0x10);
      lVar5 = *(long *)PTR_DAT_029bef60;
      *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
          *(RecordManager_cAchievement **)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = self_00;
          return;
        }
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        func_0x01a2ffdc(pvVar3,uVar1 + 1,
                        *(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                       0x70) + 0x20) + 0xc0) + 0x78));
        lVar4 = *(long *)((long)pvVar3 + 0x10);
        *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
        if (lVar4 != 0) {
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(RecordManager_cAchievement **)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = self_00;
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

