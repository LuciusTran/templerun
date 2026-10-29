// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void BackButtonClicked() { }
// Ghidra address: 013f9834; ELF VA: 0x12f9834; file offset: 0x12f5834
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void OptionsGUI_BackButtonClicked_12f5834(OptionsGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  RecordManager *self_00;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94f9b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0628,0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94f9b = 1;
  }
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  pvVar6 = *(void **)&self->field_0x38;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
  puVar1 = PTR_DAT_029b7f98;
  if (bVar2) {
    plVar4 = *(long **)&self->field_0x38;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013e40d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x1a8))(plVar4,plVar4[7],*(undefined8 *)(*plVar4 + 0x1b0));
      return;
    }
  }
  else {
    plVar4 = (long *)**(long **)(*(long *)PTR_DAT_029c0628 + 0xb8);
    if (plVar4 != (long *)0x0) {
      if ((bRam0000000002b94f9a & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94f9a = 1;
      }
      (**(code **)(*plVar4 + 0x1a8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x1b0));
      pvVar6 = (void *)plVar4[6];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
      puVar1 = PTR_DAT_029bdbe8;
      if (bVar2) {
        lVar3 = plVar4[6];
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        if ((bRam0000000002b95097 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
          bRam0000000002b95097 = 1;
        }
        lVar3 = NativeHelper_0260e1e4(lVar3,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar5);
          lVar5 = *(long *)puVar1;
        }
        self_00 = (RecordManager *)**(undefined8 **)(lVar5 + 0xb8);
        pvVar6 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
        if (pvVar6 != (void *)0x0) {
          inPlayerID = PlayerManager_GetActivePlayer_12ccc8c(pvVar6,(void *)0x0);
          if (self_00 != (RecordManager *)0x0) {
            bVar2 = RecordManager_GetNoAds_12b479c(self_00,inPlayerID,(void *)0x0);
            if (lVar3 != 0) {
              if (pcRam0000000002b9cda0 == (code *)0x0) {
                pcRam0000000002b9cda0 = (code *)NativeHelper_011df070(&UNK_007bee57);
              }
                    /* WARNING: Could not recover jumptable at 0x02610c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000002b9cda0)(lVar3,~bVar2 & 1);
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

