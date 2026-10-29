// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetFeature(string inFeatureName) { }
// Ghidra address: 0138b588; ELF VA: 0x128b588; file offset: 0x1287588
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SetFeature_1287588(GameController *self,void *inFeatureName,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  Imangi_Privacy_ImangiPrivacyManager *self_00;
  long lVar8;
  void *pvVar9;
  
  puVar3 = PTR_DAT_029ba770;
  if ((bRam0000000002b94cb3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba770);
    bRam0000000002b94cb3 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = FeatureManager_IsFeatureEnabled_12d634c(inFeatureName,(void *)0x0);
  puVar3 = PTR_DAT_029bdb88;
  if ((bRam0000000002b94cb4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdb90);
    NativeHelper_011df0b4(PTR_DAT_029bc558);
    NativeHelper_011df0b4(PTR_DAT_029ba778);
    NativeHelper_011df0b4(PTR_DAT_029bdb98);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdba0);
    NativeHelper_011df0b4(PTR_DAT_029bdba8);
    NativeHelper_011df0b4(PTR_DAT_029bdbb0);
    NativeHelper_011df0b4(PTR_DAT_029bdbb8);
    NativeHelper_011df0b4(PTR_DAT_029bdb88);
    NativeHelper_011df0b4(PTR_DAT_029ba780);
    bRam0000000002b94cb4 = 1;
  }
  uVar7 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_029bdba0;
  if ((uVar7 & 1) == 0) {
    uVar7 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)PTR_DAT_029ba780,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_029ba778 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      self_00 = Imangi_Privacy_ImangiPrivacyManager_GetInstance_1246e60((void *)0x0);
      if (self_00 != (Imangi_Privacy_ImangiPrivacyManager *)0x0) {
        bVar5 = Imangi_Privacy_ImangiPrivacyManager_HasConsent_124871c
                          (self_00,(void *)0x8,(Imangi_Utilities_ImangiLocaleInfo *)0x0,(void *)0x0)
        ;
        puVar3 = PTR_DAT_029bdba8;
        if (!bVar5) {
          return;
        }
        if (!bVar4) {
          return;
        }
        lVar8 = *(long *)PTR_DAT_029bdba8;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar8 = *(long *)puVar3;
        }
        pvVar9 = *(void **)(*(long *)(lVar8 + 0xb8) + 0x20);
        if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
          NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98);
        }
        bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
        Imangi_Utilities_ImangiAssert_Code_1223b44
                  (bVar4,*(void **)PTR_DAT_029bdbb0,(void *)0x1,(void *)0x0);
        plVar6 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0138b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          return;
        }
      }
code_r0x0138b8fc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    uVar7 = NativeHelper_01e9b79c(inFeatureName,*(undefined8 *)PTR_DAT_029bdbb8,0);
    puVar3 = PTR_DAT_029bdb90;
    if ((uVar7 & 1) != 0) {
      pvVar9 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029bdb90 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
      if (bVar5) {
        if (**(long **)(*(long *)puVar3 + 0xb8) == 0) goto code_r0x0138b8fc;
        *(bool *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x114) = bVar4;
      }
    }
  }
  else {
    pvVar9 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029bdba0 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
    if (bVar5) {
      if (**(long **)(*(long *)puVar3 + 0xb8) == 0) goto code_r0x0138b8fc;
      *(byte *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x90) = ~bVar4 & 1;
    }
    puVar3 = PTR_DAT_029b9758;
    if (bVar4) {
      if ((bRam0000000002b94cb7 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b9758);
        NativeHelper_011df0b4(PTR_DAT_029bc558);
        bRam0000000002b94cb7 = 1;
      }
      pvVar9 = *(void **)puVar3;
      if (*(int *)((long)pvVar9 + 0xe0) == 0) {
        pvVar9 = (void *)NativeHelper_011df1bc();
      }
      bVar4 = GameController_AreGameServicesAvailable_1287aec(pvVar9);
      if (!bVar4) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      puVar3 = PTR_DAT_029bc558;
      if ((bRam0000000002b94a06 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bc558,0);
        NativeHelper_011df0b4(PTR_DAT_029b7f98);
        bRam0000000002b94a06 = 1;
      }
      puVar2 = PTR_DAT_029b7f98;
      pvVar9 = *(void **)puVar3;
      if (*(int *)((long)pvVar9 + 0xe0) == 0) {
        pvVar9 = (void *)NativeHelper_011df1bc();
      }
      plVar6 = Imangi_GameServices_ImangiGameServicesManager_GetInstance_1257e84(pvVar9);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar2);
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(plVar6,(void *)0x0,(void *)0x0);
      if (!bVar4) {
        return;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
                    /* WARNING: Could not recover jumptable at 0x0135c360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x1a8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x1b0));
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_029bc558 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Imangi_GameServices_ImangiGameServicesManager_SignOut_1258428((void *)0x0);
    pvVar9 = self->FriendScores;
    if (pvVar9 != (void *)0x0) {
      iVar1 = *(int *)((long)pvVar9 + 0x18);
      *(undefined4 *)((long)pvVar9 + 0x18) = 0;
      *(int *)((long)pvVar9 + 0x1c) = *(int *)((long)pvVar9 + 0x1c) + 1;
      if (0 < iVar1) {
        NativeHelper_0201ea34(*(undefined8 *)((long)pvVar9 + 0x10),0,iVar1,0);
      }
      self->FriendScoresCount = 0;
    }
  }
  return;
}

