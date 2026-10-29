// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected virtual void AdClickedEvent(AdService inService, AdType inAdType, string inAdSpaceName) { }
// Ghidra address: 013ec8b8; ELF VA: 0x12ec8b8; file offset: 0x12e88b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_AdClickedEvent_12e88b8
               (GameGUI *self,void *inService,void *inAdType,void *inAdSpaceName,void *runtimeMethod
               )

{
  undefined *puVar1;
  bool bVar2;
  int inPlayerID;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  RecordManager *self_00;
  
  BasePanel_AdClickedEvent_12e0314((BasePanel *)self,inService,inAdType,inAdSpaceName,runtimeMethod)
  ;
  puVar1 = PTR_DAT_029b9758;
  if ((int)inAdType != 2) {
    return;
  }
  if ((bRam0000000002b94fde & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029c0978);
    bRam0000000002b94fde = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = **(long **)(lVar3 + 0xb8);
  if (lVar5 == 0) {
code_r0x013eb9cc:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (*(char *)(lVar5 + 0xec) == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar5 == 0) goto code_r0x013eb9cc;
    }
    puVar1 = PTR_DAT_029b7f98;
    if (*(char *)(lVar5 + 0xee) == '\0') {
      plVar4 = (long *)**(long **)(*(long *)PTR_DAT_029c0978 + 0xb8);
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
      goto code_r0x013eb9cc;
    }
  }
  return;
}

