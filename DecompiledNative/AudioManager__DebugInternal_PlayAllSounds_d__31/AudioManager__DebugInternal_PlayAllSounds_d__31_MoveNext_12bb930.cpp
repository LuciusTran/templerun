// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 013bf930; ELF VA: 0x12bf930; file offset: 0x12bb930
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool AudioManager__DebugInternal_PlayAllSounds_d__31_MoveNext_12bb930
               (AudioManager__DebugInternal_PlayAllSounds_d__31 *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  void *runtimeMethod_00;
  void *extraout_x1;
  uint uVar5;
  int iVar6;
  AudioManager *self_00;
  undefined8 uVar7;
  float seconds;
  float fStack_3c;
  void *pvStack_38;
  
  if ((bRam0000000002b94e49 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf718);
    NativeHelper_011df0b4(PTR_DAT_029bf720);
    NativeHelper_011df0b4(PTR_DAT_029bf728);
    NativeHelper_011df0b4(PTR_DAT_029baeb8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b8c58);
    NativeHelper_011df0b4(PTR_DAT_029b9db8);
    NativeHelper_011df0b4(PTR_DAT_029bb638);
    NativeHelper_011df0b4(PTR_DAT_029bf730);
    bRam0000000002b94e49 = 1;
    runtimeMethod = extraout_x1;
  }
  pvStack_38 = (void *)0x0;
  self_00 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    goto LAB_013bfb00;
  }
  if (self->__1__state == 0) {
    self->__1__state = -1;
    uVar7 = *(undefined8 *)PTR_DAT_029bf728;
    if (*(int *)(*(long *)PTR_DAT_029b9db8 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9db8,runtimeMethod);
    }
    uVar7 = NativeHelper_0200afdc(uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_029baeb8 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029baeb8);
    }
    uVar7 = NativeHelper_02030640(uVar7,0);
    puVar1 = PTR_DAT_029bf720;
    pvVar3 = (void *)NativeHelper_011df1c0(uVar7,*(undefined8 *)PTR_DAT_029bf720);
    self->_allEffects_5__2 = pvVar3;
    NativeHelper_011df1c0(uVar7,*(undefined8 *)puVar1);
    if (self->_allEffects_5__2 == (void *)0x0) {
LAB_013bfbd8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    iVar6 = *(int *)((long)self->_allEffects_5__2 + 0x18);
    uVar5 = 0;
    self->_count_5__3 = iVar6;
    self->_idx_5__4 = 0;
    while ((int)uVar5 < iVar6) {
      pvVar3 = self->_allEffects_5__2;
      if (pvVar3 == (void *)0x0) goto LAB_013bfbd8;
      if (*(uint *)((long)pvVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
      if ((self_00 == (AudioManager *)0x0) || (self_00->Sounds == (void *)0x0)) goto LAB_013bfbd8;
      uVar5 = *(uint *)((long)pvVar3 + (long)(int)uVar5 * 4 + 0x20);
      uVar4 = NativeHelper_0176a744
                        (self_00->Sounds,uVar5,&pvStack_38,*(undefined8 *)PTR_DAT_029bf718);
      pvVar3 = pvStack_38;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar3,(void *)0x0,(void *)0x0);
        if (bVar2) {
          if ((pvStack_38 != (void *)0x0) &&
             (seconds = UnityEngine_AudioClip_get_length_24e38e0(pvStack_38,(void *)0x0),
             pvStack_38 != (void *)0x0)) {
            pvVar3 = UnityEngine_object_get_name_25101a4(pvStack_38,(void *)0x0);
            fStack_3c = seconds;
            runtimeMethod_00 =
                 (void *)NativeHelper_011df1c4(*(undefined8 *)PTR_DAT_029b8c58,&fStack_3c);
            pvVar3 = (void *)NativeHelper_01e9c258
                                       (*(undefined8 *)PTR_DAT_029bf730,pvVar3,runtimeMethod_00,0);
            DebugEx_Log_13222f4(pvVar3,(void *)0x0);
            AudioManager_PlayFX_12bb190(self_00,(void *)(ulong)uVar5,1.0,runtimeMethod_00);
            pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bb638);
            UnityEngine_WaitForSeconds_WaitForSeconds_2512710(pvVar3,seconds,(void *)0x0);
            self->__2__current = pvVar3;
            self->__1__state = 1;
            return true;
          }
          goto LAB_013bfbd8;
        }
      }
LAB_013bfb00:
      iVar6 = self->_count_5__3;
      uVar5 = self->_idx_5__4 + 1;
      self->_idx_5__4 = uVar5;
    }
  }
  return false;
}

