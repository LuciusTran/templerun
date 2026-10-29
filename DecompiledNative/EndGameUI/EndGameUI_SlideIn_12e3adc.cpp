// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void SlideIn(BasePanel returnTo) { }
// Ghidra address: 013e7adc; ELF VA: 0x12e7adc; file offset: 0x12e3adc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_SlideIn_12e3adc(EndGameUI *self,BasePanel *returnTo,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  Imangi_Ad_AdManager *pIVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  Promotion *self_00;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  BasePanel *extraout_x1;
  BasePanel *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1_00;
  long lVar15;
  RecordManager *self_01;
  PromoFile *pPVar16;
  float fVar17;
  float fVar18;
  Recovered_Vector3 RVar19;
  Recovered_Vector3 value;
  
  runtimeMethod_00 = returnTo;
  if ((bRam0000000002b94fc2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029ba708);
    NativeHelper_011df0b4(PTR_DAT_029bfcc8);
    NativeHelper_011df0b4(PTR_DAT_029bdf20);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    bRam0000000002b94fc2 = 1;
    runtimeMethod_00 = extraout_x1;
  }
  bVar4 = EndGameUI_InterstitialAdCooldownCompleted_12e3ed8(self,runtimeMethod_00);
  if (bVar4) {
    if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    pIVar6 = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    pvVar7 = EndGameUI_get_InterstitalName_12e28c0(self,runtimeMethod_01);
    if (pIVar6 == (Imangi_Ad_AdManager *)0x0) goto LAB_013e7ed4;
    (**(code **)(*(long *)pIVar6 + 0x2a8))
              (pIVar6,1,pvVar7,5,*(undefined8 *)(*(long *)pIVar6 + 0x2b0));
  }
  *(BasePanel **)&self->field_0x38 = returnTo;
  puVar2 = PTR_DAT_029bfcc8;
  (**(code **)(*(long *)self + 0x188))(self,1,*(undefined8 *)(*(long *)self + 400));
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar8 = *(long *)puVar2;
  }
  lVar15 = **(long **)(lVar8 + 0xb8);
  if (lVar15 == 0) goto LAB_013e7d68;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar15 == 0) goto LAB_013e7ed4;
  }
  puVar3 = PTR_DAT_029bdbe8;
  if (*(long *)(lVar15 + 0x30) == 0) goto LAB_013e7ed4;
  iVar1 = *(int *)(*(long *)(lVar15 + 0x30) + 0x10);
  lVar8 = *(long *)PTR_DAT_029bdbe8;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar8 = *(long *)puVar3;
  }
  self_01 = (RecordManager *)**(undefined8 **)(lVar8 + 0xb8);
  pvVar7 = PlayerManager_get_Instance_12ccbc8((void *)0x0);
  if ((pvVar7 == (void *)0x0) ||
     (iVar5 = PlayerManager_GetActivePlayer_12ccc8c(pvVar7,(void *)0x0),
     self_01 == (RecordManager *)0x0)) goto LAB_013e7ed4;
  iVar5 = RecordManager_GetGlobalChallengesCurrentIndex_12b48a0(self_01,iVar5,(void *)0x0);
  puVar3 = PTR_DAT_029ba708;
  if (iVar1 < iVar5) {
LAB_013e7d68:
    if (self->gcProgressObject == (void *)0x0) goto LAB_013e7ed4;
    NativeHelper_02610c54(self->gcProgressObject,0,0);
    if ((self->GCButton == (void *)0x0) ||
       (pvVar7 = UnityEngine_GameObject_get_gameObject_250d044(self->GCButton,(void *)0x0),
       pvVar7 == (void *)0x0)) goto LAB_013e7ed4;
    NativeHelper_02610c54(pvVar7,0,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_029ba708 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar9 = NativeHelper_01fde6f8(0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar8);
      lVar8 = *(long *)puVar2;
    }
    if (((**(long **)(lVar8 + 0xb8) == 0) ||
        (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x30), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) goto LAB_013e7ed4;
    uVar10 = NativeHelper_01fe0210(uVar9,*(undefined8 *)(lVar8 + 0x18),0);
    if ((uVar10 & 1) == 0) goto LAB_013e7d68;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    uVar9 = NativeHelper_01fde6f8(0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar8);
      lVar8 = *(long *)puVar2;
    }
    if (((**(long **)(lVar8 + 0xb8) == 0) ||
        (lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0x30), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) goto LAB_013e7ed4;
    uVar10 = NativeHelper_01fe0138(uVar9,*(undefined8 *)(lVar8 + 0x20),0);
    if ((uVar10 & 1) == 0) goto LAB_013e7d68;
    if (self->gcProgressObject == (void *)0x0) goto LAB_013e7ed4;
    pvVar7 = (void *)0x0;
    NativeHelper_02610c54(self->gcProgressObject,1);
    EndGameUI_GCTierCompletedCallback_12e3f68(self,self->gcTierNo,self->gcOverflowPercent,pvVar7);
  }
  if (self->_FirstSlide != false) {
    if (self->Header == (void *)0x0) goto LAB_013e7ed4;
    fVar17 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
    fVar18 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
    pvVar7 = (void *)NativeHelper_02610b98(self->Header,0);
    if (pvVar7 == (void *)0x0) goto LAB_013e7ed4;
    RVar19 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
    if ((self->Header == (void *)0x0) ||
       (pvVar7 = (void *)NativeHelper_02610b98(self->Header,0), pvVar7 == (void *)0x0))
    goto LAB_013e7ed4;
    fVar17 = fVar17 - fVar18;
    RVar19.component1 = fVar17 + RVar19.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar7,RVar19,(void *)0x0);
    if ((self->Content == (void *)0x0) ||
       (pvVar7 = (void *)NativeHelper_02610b98(self->Content,0), pvVar7 == (void *)0x0))
    goto LAB_013e7ed4;
    RVar19 = UnityEngine_Transform_get_localPosition_2515e38(pvVar7,(void *)0x0);
    value.component2 = RVar19.component2;
    value.component0 = RVar19.component0;
    if ((self->Content == (void *)0x0) ||
       (pvVar7 = (void *)NativeHelper_02610b98(self->Content,0), pvVar7 == (void *)0x0))
    goto LAB_013e7ed4;
    value.component1 = fVar17 * 0.5 + RVar19.component1;
    UnityEngine_Transform_set_localPosition_2515ec4(pvVar7,value,(void *)0x0);
    self->_FirstSlide = false;
  }
  puVar2 = PTR_DAT_029bdf20;
  pvVar7 = (void *)NativeHelper_013e8108(self);
  UnityEngine_MonoBehaviour_StartCoroutine_250dbe8(self,pvVar7,(void *)0x0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar8 = *(long *)puVar2;
  }
  self_00 = *(Promotion **)(*(long *)(lVar8 + 0xb8) + 8);
  if (self_00 == (Promotion *)0x0) {
LAB_013e7ed4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  pvVar7 = (void *)0x0;
  if ((bRam0000000002b9518d & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf10,0,1,0);
    NativeHelper_011df0b4(PTR_DAT_029b8c90);
    NativeHelper_011df0b4(PTR_DAT_029c23b8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c23c0);
    NativeHelper_011df0b4(PTR_DAT_029c23c8);
    NativeHelper_011df0b4(PTR_DAT_029c23d0);
    NativeHelper_011df0b4(PTR_DAT_029c23d8);
    bRam0000000002b9518d = 1;
    pvVar7 = extraout_x1_00;
  }
  bVar4 = Promotion_FetchNewRemoteConfigData_131dc50(self_00,pvVar7);
  if (!bVar4) {
    return;
  }
  pPVar16 = self_00->PromoFileInstance;
  if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar4 = UnityEngine_object_op_Equality_250d534(pPVar16,(void *)0x0,(void *)0x0);
  if (bVar4) {
    pvVar7 = (void *)NativeHelper_0260e1e4(self_00,0);
    if (pvVar7 == (void *)0x0) goto code_r0x01421c4c;
    pPVar16 = UnityEngine_GameObject_AddComponent_1402d84(pvVar7,*(void **)PTR_DAT_029c23b8);
    self_00->PromoFileInstance = pPVar16;
  }
  else {
    pPVar16 = self_00->PromoFileInstance;
  }
  puVar2 = PTR_DAT_029b8c90;
  pvVar7 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8c90);
  NativeHelper_01f80268(pvVar7,self_00,*(undefined8 *)PTR_DAT_029c23d0,0);
  pvVar11 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bdf10);
  NativeHelper_016955d8(pvVar11,self_00,*(undefined8 *)PTR_DAT_029c23c8,0);
  pvVar12 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01f80268(pvVar12,self_00,*(undefined8 *)PTR_DAT_029c23c0,0);
  pvVar13 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01f80268(pvVar13,self_00,*(undefined8 *)PTR_DAT_029c23d8,0);
  puVar2 = PTR_DAT_029bddd8;
  if (pPVar16 != (PromoFile *)0x0) {
    if ((bRam0000000002b94eea & 1) == 0) {
      NativeHelper_011df0b4(PTR_DAT_029bddd8);
      NativeHelper_011df0b4(PTR_DAT_029b9920);
      NativeHelper_011df0b4(PTR_DAT_029bfdf8);
      bRam0000000002b94eea = 1;
    }
    puVar3 = PTR_DAT_029bfdf8;
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar8 = *(long *)puVar2;
    }
    *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 8) = 0;
    pPVar16->_OnLoadStart = pvVar7;
    pPVar16->_OnLoadProgress = pvVar11;
    pPVar16->_OnLoadCompleted = pvVar12;
    pPVar16->_OnPromoProcessingCompleted = pvVar13;
    puVar2 = PTR_DAT_029b9920;
    pvVar7 = *(void **)puVar3;
    if (*(int *)((long)pvVar7 + 0xe0) == 0) {
      pvVar7 = (void *)NativeHelper_011df1bc();
    }
    pvVar7 = PromoFile_GetCacheFilePath_12c9664(pvVar7);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar2);
    }
    bVar4 = Imangi_Utilities_ImangiFileSystem_FileExists_122e4a0(pvVar7,(void *)0x0);
    puVar2 = PTR_DAT_029bdbe8;
    if (bVar4) {
      if ((bRam0000000002b94eef & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029bdbe8,0);
        bRam0000000002b94eef = 1;
      }
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar8 = *(long *)puVar2;
      }
      if ((RecordManager *)**(undefined8 **)(lVar8 + 0xb8) == (RecordManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      bVar4 = RecordManager_IsNewInstallOrUpdate_12aecd4
                        ((RecordManager *)**(undefined8 **)(lVar8 + 0xb8),(void *)0x0);
      if (bVar4) {
        lVar8 = NativeHelper_013ce2f8(pPVar16);
      }
      else {
        lVar8 = NativeHelper_013ce290(pPVar16);
      }
    }
    else {
      lVar8 = NativeHelper_013ce2f8(pPVar16);
    }
    if (lVar8 == 0) {
      NativeHelper_011df0c8(PTR_DAT_029c2bd8,0,0);
      uVar14 = NativeHelper_011df2d0();
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5930);
      NativeHelper_01ffed14(uVar14,uVar9,0);
    }
    else {
      if (pcRam0000000002b9ce48 == (code *)0x0) {
        pcRam0000000002b9ce48 = (code *)NativeHelper_011df070(&UNK_007af204);
      }
      uVar10 = (*pcRam0000000002b9ce48)(pPVar16);
      if ((uVar10 & 1) != 0) {
        if (pcRam0000000002b9ce58 == (code *)0x0) {
          pcRam0000000002b9ce58 = (code *)NativeHelper_011df070(&UNK_007b606d);
        }
                    /* WARNING: Could not recover jumptable at 0x02611c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000002b9ce58)(pPVar16,lVar8);
        return;
      }
      NativeHelper_011df0c8(PTR_DAT_029baea0);
      uVar14 = NativeHelper_011df2d0();
      uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5920);
      NativeHelper_01f80968(uVar14,uVar9,0);
    }
    uVar9 = NativeHelper_011df0c8(PTR_DAT_029f5938);
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df1ac(uVar14,uVar9);
  }
code_r0x01421c4c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

