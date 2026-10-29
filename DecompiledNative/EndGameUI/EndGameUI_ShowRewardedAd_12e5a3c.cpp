// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowRewardedAd() { }
// Ghidra address: 013e9a3c; ELF VA: 0x12e9a3c; file offset: 0x12e5a3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_ShowRewardedAd_12e5a3c(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  Imangi_Ad_AdManager *inAdMngr;
  void *extraout_x1;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_029b9758;
  if ((bRam0000000002b94fd2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c05c8);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    bRam0000000002b94fd2 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  inAdMngr = GameController_GetAdManager_128d9a0((void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1);
  }
  pvVar5 = (void *)0x0;
  bVar3 = UnityEngine_object_op_Inequality_250c8e4(inAdMngr,(void *)0x0,(void *)0x0);
  if (!bVar3) {
LAB_013e9bbc:
    puVar1 = PTR_DAT_029c17b0;
    puVar2 = PTR_DAT_029b7f98;
    if ((bRam0000000002b95091 & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029b7f98);
      NativeHelper_011df0b4(PTR_DAT_029c17b0);
      bRam0000000002b95091 = 1;
    }
    pvVar5 = (void *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar3 = UnityEngine_object_op_Equality_250d534(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      return;
    }
    lVar4 = *(long *)puVar1;
    lVar6 = **(long **)(lVar4 + 0xb8);
    if (lVar6 != 0) {
      uVar8 = 0;
      do {
        if ((long)*(int *)(lVar6 + 0x28) <= (long)uVar8) {
          return;
        }
        lVar7 = *(long *)(lVar6 + 0x20);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar8) {
code_r0x01404d00:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2e4();
        }
        lVar6 = *(long *)(lVar6 + 0x30);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto code_r0x01404d00;
        if (*(char *)(lVar6 + uVar8 + 0x20) != '\0') {
          pvVar5 = *(void **)(lVar7 + uVar8 * 8 + 0x20);
          if (pvVar5 == (void *)0x0) break;
          UnityEngine_Behaviour_set_enabled_250972c(pvVar5,true,(void *)0x0);
          lVar4 = *(long *)puVar1;
        }
        uVar8 = uVar8 + 1;
        lVar6 = **(long **)(lVar4 + 0xb8);
      } while (lVar6 != 0);
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar3 = GameController_IsVideoAdAvailable_128da40((void *)0x0);
  if (bVar3) {
    if ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8) != (AudioManager *)0x0)
    {
      AudioManager_StopMusic_12bb174
                ((AudioManager *)**(undefined8 **)(*(long *)PTR_DAT_029bdfa0 + 0xb8),(void *)0x0);
      EndGameUI_HookAdEvents_12e292c(self,inAdMngr,pvVar5);
      if (inAdMngr != (Imangi_Ad_AdManager *)0x0) {
        (**(code **)(*(long *)inAdMngr + 0x2f8))
                  (inAdMngr,0,*(undefined8 *)PTR_DAT_029b9680,*(undefined8 *)PTR_DAT_029c05c8,
                   *(undefined8 *)(*(long *)inAdMngr + 0x300));
        UIInputBlocking_DisableInput_1300d04((void *)0x0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        puVar2 = PTR_DAT_029b9758;
        if ((bRam0000000002b94ce0 & 1) == 0) {
          NativeHelper_011df0b4(PTR_DAT_029b9758);
          NativeHelper_011df0b4(PTR_DAT_029b7f98);
          bRam0000000002b94ce0 = 1;
        }
        puVar1 = PTR_DAT_029b7f98;
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar4 = *(long *)puVar2;
        }
        pvVar5 = (void *)**(undefined8 **)(lVar4 + 0xb8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)puVar1);
        }
        bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
        if (bVar3) {
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar4 = *(long *)puVar2;
          }
          if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
          *(undefined1 *)(**(long **)(lVar4 + 0xb8) + 0x21e) = 1;
        }
        return;
      }
    }
  }
  else if (inAdMngr != (Imangi_Ad_AdManager *)0x0) {
    (**(code **)(*(long *)inAdMngr + 0x2a8))
              (inAdMngr,0,*(undefined8 *)PTR_DAT_029b9680,5,
               *(undefined8 *)(*(long *)inAdMngr + 0x2b0));
    goto LAB_013e9bbc;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

