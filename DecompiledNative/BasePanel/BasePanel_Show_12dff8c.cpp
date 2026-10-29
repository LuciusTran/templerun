// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Show() { }
// Ghidra address: 013e3f8c; ELF VA: 0x12e3f8c; file offset: 0x12dff8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BasePanel_Show_12dff8c(BasePanel *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  long lVar3;
  long lVar4;
  void *pvVar5;
  RecordManager *self_00;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94f9a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94f9a = 1;
  }
  (**(code **)(*(long *)self + 0x1a8))(self,0,*(undefined8 *)(*(long *)self + 0x1b0));
  pvVar5 = self->NoAds;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
  puVar1 = PTR_DAT_029bdbe8;
  if (bVar2) {
    pvVar5 = self->NoAds;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if ((bRam0000000002b95097 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
      bRam0000000002b95097 = 1;
    }
    lVar3 = NativeHelper_0260e1e4(pvVar5,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar4);
      lVar4 = *(long *)puVar1;
    }
    self_00 = (RecordManager *)**(undefined8 **)(lVar4 + 0xb8);
    pvVar5 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
    if (pvVar5 != (void *)0x0) {
      inPlayerID = PlayerManager_GetActivePlayer_12ccc8c(pvVar5,(void *)0x0);
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

