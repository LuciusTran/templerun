// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshRcReachability(string inReason) { }
// Ghidra address: 0138d2e0; ELF VA: 0x128d2e0; file offset: 0x12892e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_RefreshRcReachability_12892e0
               (GameController *self,void *inReason,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  long lVar5;
  void *pvVar6;
  RemoteConfigManager *self_00;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cc3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba718);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdc90);
    NativeHelper_011df0b4(PTR_DAT_029bdc98);
    bRam0000000002b94cc3 = 1;
    inReason = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar4,inReason);
    lVar4 = *(long *)puVar2;
    inReason = extraout_x1_00;
  }
  pvVar6 = *(void **)(*(long *)(lVar4 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,inReason);
  }
  bVar3 = UnityEngine_object_op_Equality_250d534(pvVar6,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    if (cRam0000000002b94d36 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9758);
      cRam0000000002b94d36 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar4 = *(long *)puVar2;
    }
    lVar5 = *(long *)(lVar4 + 0xb8);
    if (*(char *)(lVar5 + 0x10) != '\0') {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      puVar2 = PTR_DAT_029bdc98;
      self_00 = *(RemoteConfigManager **)(lVar5 + 8);
      lVar4 = *(long *)PTR_DAT_029bdc98;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar4 = *(long *)puVar2;
      }
      pvVar6 = *(void **)(*(long *)(lVar4 + 0xb8) + 8);
      if (pvVar6 == (void *)0x0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar4 = *(long *)puVar2;
        }
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        pvVar6 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029ba718);
        NativeHelper_01693bd4(pvVar6,uVar7,*(undefined8 *)PTR_DAT_029bdc90,0);
        *(void **)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = pvVar6;
      }
      if (self_00 != (RemoteConfigManager *)0x0) {
        if ((bRam0000000002b951a3 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b8c90,pvVar6,0,0);
          NativeHelper_011df0b4(PTR_DAT_029b86b0);
          NativeHelper_011df0b4(PTR_DAT_029b8640);
          NativeHelper_011df0b4(PTR_DAT_029b8648);
          NativeHelper_011df0b4(PTR_DAT_029c23e8);
          NativeHelper_011df0b4(PTR_DAT_029bdc88);
          NativeHelper_011df0b4(PTR_DAT_029ba898);
          NativeHelper_011df0b4(PTR_DAT_029c23f0);
          NativeHelper_011df0b4(PTR_DAT_029c23f8);
          bRam0000000002b951a3 = 1;
        }
        if (((self_00->_Initialized != false) && (self_00->_CallbackHandler == (void *)0x0)) &&
           (self_00->_IsFetching == false)) {
          self_00->_CallbackHandler = pvVar6;
          self_00->_IsFetching = true;
          pvVar6 = *(void **)PTR_DAT_029bdc88;
          if (*(int *)((long)pvVar6 + 0xe0) == 0) {
            pvVar6 = (void *)NativeHelper_011df1bc();
          }
          RemoteConfigManager_RecordFetchStarted_131f054(pvVar6);
          lVar4 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8648);
          NativeHelper_0178bda4(lVar4,*(undefined8 *)PTR_DAT_029b8640);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          NativeHelper_0178c6dc
                    (lVar4,*(undefined8 *)PTR_DAT_029c23f0,*(undefined8 *)PTR_DAT_029c23f8,
                     *(undefined8 *)PTR_DAT_029b86b0);
          uVar7 = NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
          NativeHelper_01f80268(uVar7,self_00,*(undefined8 *)PTR_DAT_029c23e8,0);
          if (*(int *)(*(long *)PTR_DAT_029ba898 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          Imangi_RemoteConfig_RemoteConfig_InitAndFetchRemoteConfig_121bbb8(lVar4,uVar7,0);
          RemoteConfigManager_StartFetchWatchdog_131f418(self_00,runtimeMethod_00);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  return;
}

