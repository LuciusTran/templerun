// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetupCharacter() { }
// Ghidra address: 013c20d4; ELF VA: 0x12c20d4; file offset: 0x12be0d4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_SetupCharacter_12be0d4(CharacterPlayer *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  void *value;
  void *extraout_x1;
  RecordManager *self_00;
  
  puVar1 = PTR_DAT_029bdbe8;
  if ((bRam0000000002b94e5c & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf818);
    NativeHelper_011df0b4(PTR_DAT_029bf820);
    NativeHelper_011df0b4(PTR_DAT_029bf828);
    NativeHelper_011df0b4(PTR_DAT_029bccc0);
    NativeHelper_011df0b4(PTR_DAT_029bccc8);
    NativeHelper_011df0b4(PTR_DAT_029b9ec8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    bRam0000000002b94e5c = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar5,runtimeMethod);
    lVar5 = *(long *)puVar1;
  }
  self_00 = (RecordManager *)**(undefined8 **)(lVar5 + 0xb8);
  pvVar6 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if ((pvVar6 != (void *)0x0) &&
     (iVar4 = PlayerManager_GetActivePlayer_12ccc8c(pvVar6,(void *)0x0), puVar1 = PTR_DAT_029b7f98,
     self_00 != (RecordManager *)0x0)) {
    iVar4 = RecordManager_GetActiveCharacter_12b45a0(self_00,iVar4,(void *)0x0);
    self->ActiveCharacterId = iVar4;
    pvVar6 = self->CharacterModel;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
    if (bVar3) {
      pvVar6 = self->CharacterModel;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_02614ce0(pvVar6,0);
      self->CharacterModel = (void *)0x0;
      self->AnimateObject = (void *)0x0;
      self->AttachmentsRenderObjects = (void *)0x0;
      self->RenderObject = (void *)0x0;
    }
    puVar2 = PTR_DAT_029bccc8;
    pvVar6 = self->Characters;
    if (pvVar6 != (void *)0x0) {
      iVar4 = self->ActiveCharacterId;
      if (*(int *)((long)pvVar6 + 0x18) < iVar4) {
        iVar4 = 0;
        self->ActiveCharacterId = 0;
      }
      pvVar6 = (void *)NativeHelper_01a2f750(pvVar6,iVar4,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
      if (!bVar3) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      pvVar6 = UnityEngine_object_Instantiate_142b1bc(pvVar6,*(void **)PTR_DAT_029b9ec8);
      if (pvVar6 != (void *)0x0) {
        pvVar7 = (void *)NativeHelper_02610b98(pvVar6,0);
        value = (void *)NativeHelper_0260e1a8(self,0);
        if (pvVar7 != (void *)0x0) {
          UnityEngine_Transform_set_parent_2516ee0(pvVar7,value,(void *)0x0);
          pvVar7 = (void *)NativeHelper_02610b98(pvVar6,0);
          if (pvVar7 != (void *)0x0) {
            UnityEngine_Transform_set_localPosition_2515ec4
                      (pvVar7,(Recovered_Vector3)ZEXT812(0x3f80000000000000),(void *)0x0);
            self->CharacterModel = pvVar6;
            pvVar7 = (void *)NativeHelper_015070d0(pvVar6,*(undefined8 *)PTR_DAT_029bf818);
            self->AnimateObject = pvVar7;
            pvVar7 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                               (pvVar6,*(void **)PTR_DAT_029bf828);
            self->RenderObject = pvVar7;
            pvVar6 = UnityEngine_GameObject_GetComponentsInChildren_1403a90
                               (pvVar6,*(void **)PTR_DAT_029bf820);
            self->AttachmentsRenderObjects = pvVar6;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

