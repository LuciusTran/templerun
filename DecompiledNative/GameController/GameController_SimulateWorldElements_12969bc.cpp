// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SimulateWorldElements() { }
// Ghidra address: 0139a9bc; ELF VA: 0x129a9bc; file offset: 0x12969bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_SimulateWorldElements_12969bc(GameController *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *extraout_x1;
  PathElement *element;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *runtimeMethod_01;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *pvVar11;
  void *in_x4;
  ulong uVar12;
  SceneryManager *pSVar13;
  SceneryElement *pSVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  Recovered_Vector3 RVar19;
  Recovered_Vector2 gridPoint;
  Recovered_Vector2 gridPoint_00;
  uint uStack_54;
  
  if ((bRam0000000002b94cf6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94cf6 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->IsIntroScene == false) {
    pSVar13 = self->Scenery;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98,runtimeMethod);
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pSVar13,(void *)0x0,(void *)0x0);
    if (bVar5) {
      pSVar13 = self->Scenery;
      fVar17 = UnityEngine_Time_get_smoothDeltaTime_25134ec((void *)0x0);
      fVar18 = 0.25;
      if ((_UNK_007a3c98 < fVar17) && (fVar18 = _UNK_007a3c08, self->IsIntroScene != false)) {
        fVar18 = 0.25;
      }
      if (pSVar13 != (SceneryManager *)0x0) {
        pSVar13->ObjectDensity = fVar18;
        pSVar13 = self->Scenery;
        if (pSVar13 != (SceneryManager *)0x0) {
          bVar5 = self->IsIntroScene;
          element = self->PathRoot;
          if ((bRam0000000002b951ba & 1) == 0) {
            NativeHelper_011df0b4(PTR_DAT_029b7f98,element,bVar5,0);
            NativeHelper_011df0b4(PTR_DAT_029c24c0);
            bRam0000000002b951ba = 1;
          }
          lVar8 = NativeHelper_025ecf68(0);
          if ((lVar8 != 0) &&
             (pvVar9 = (void *)NativeHelper_0260e1a8(lVar8,0), pvVar9 != (void *)0x0)) {
            RVar19 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
            fVar18 = RVar19.component0 / 60.0;
            iVar15 = 0;
            if (fVar18 != INFINITY) {
              iVar15 = (int)fVar18 * 0x3c;
            }
            pSVar13->gridX = iVar15;
            lVar8 = NativeHelper_025ecf68(fVar18,0x7f800000,RVar19.component2,0);
            if ((lVar8 != 0) &&
               (pvVar9 = (void *)NativeHelper_0260e1a8(lVar8,0), pvVar9 != (void *)0x0)) {
              RVar19 = UnityEngine_Transform_get_position_2516710(pvVar9,(void *)0x0);
              iVar16 = pSVar13->gridX;
              fVar18 = RVar19.component2 / 60.0;
              iVar15 = 0;
              if (fVar18 != INFINITY) {
                iVar15 = (int)fVar18 * 0x3c;
              }
              pSVar13->gridY = iVar15;
              puVar3 = PTR_DAT_029c24c0;
              puVar2 = PTR_DAT_029b7f98;
              if (iVar16 == pSVar13->LastGridX) {
                bVar4 = iVar15 != pSVar13->LastGridY;
              }
              else {
                bVar4 = true;
              }
              if (bVar4 || (bVar5 & 1U) != 0) {
                pSVar13->LastGridX = iVar16;
                pSVar13->LastGridY = iVar15;
                pSVar13->minGridX = iVar16 + -0x21c;
                pSVar13->minGridY = iVar15 + -0x21c;
                pSVar13->maxGridX = iVar16 + 0x21c;
                pSVar13->maxGridY = iVar15 + 0x21c;
                SceneryManager_ClearMask_1321ad4(pSVar13,runtimeMethod_00);
                SceneryManager_FillMask_1321ff4(pSVar13,element,0,true,in_x4);
                uStack_54 = 0;
                do {
                  pvVar9 = pSVar13->SceneryElements;
                  if (pvVar9 == (void *)0x0) goto code_r0x01425238;
                  if (*(uint *)((long)pvVar9 + 0x18) <= uStack_54) {
code_r0x01425234:
                    /* WARNING: Subroutine does not return */
                    NativeHelper_011df2e4();
                  }
                  pSVar14 = *(SceneryElement **)((long)pvVar9 + (long)(int)uStack_54 * 8 + 0x20);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    NativeHelper_011df1bc();
                  }
                  bVar5 = UnityEngine_object_op_Equality_250d534(pSVar14,(void *)0x0,(void *)0x0);
                  pvVar9 = extraout_x1_00;
                  if (bVar5) {
                    uVar10 = NativeHelper_01ffa318(&uStack_54,0);
                    pvVar11 = (void *)0x0;
                    pvVar9 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar3,uVar10);
                    DebugEx_LogError_1321a6c(pvVar9,pSVar13,pvVar11);
                    pvVar9 = extraout_x1_01;
                  }
                  if (pSVar14 == (SceneryElement *)0x0) goto code_r0x01425238;
                  if ((pSVar14->Active != false) &&
                     ((((gridPoint.component0 = (pSVar14->Quadrant).component0,
                        gridPoint.component0 < (float)pSVar13->minGridX ||
                        ((float)pSVar13->maxGridX < gridPoint.component0)) ||
                       (gridPoint.component1 = (pSVar14->Quadrant).component1,
                       gridPoint.component1 < (float)pSVar13->minGridY)) ||
                      (((float)pSVar13->maxGridY < gridPoint.component1 ||
                       (bVar5 = SceneryManager_MaskOccupied_1321c10(pSVar13,gridPoint,pvVar9),
                       pvVar9 = extraout_x1_02, bVar5)))))) {
                    pSVar14->Active = false;
                    SceneryElement_Deactivate_13212ec(pSVar14,pvVar9);
                    pvVar9 = extraout_x1_03;
                  }
                  uStack_54 = uStack_54 + 1;
                } while ((int)uStack_54 < 0x169);
                iVar15 = 0;
                do {
                  iVar16 = 0;
                  do {
                    pvVar11 = pSVar13->SceneryElements;
                    if (pvVar11 == (void *)0x0) goto code_r0x01425238;
                    uVar12 = 0;
                    iVar6 = pSVar13->minGridX + iVar15 * 0x3c;
                    uVar1 = pSVar13->minGridY + iVar16 * 0x3c;
                    fVar18 = (float)iVar6;
                    fVar17 = (float)(int)uVar1;
                    do {
                      if (*(uint *)((long)pvVar11 + 0x18) <= uVar12) goto code_r0x01425234;
                      lVar8 = *(long *)((long)pvVar11 + uVar12 * 8 + 0x20);
                      if (lVar8 == 0) goto code_r0x01425238;
                      if (((*(char *)(lVar8 + 0x2c) != '\0') && (*(float *)(lVar8 + 0x20) == fVar18)
                          ) && (*(float *)(lVar8 + 0x24) == fVar17)) goto code_r0x014251fc;
                      uVar12 = uVar12 + 1;
                    } while (uVar12 != 0x169);
                    gridPoint_00.component1 = fVar17;
                    gridPoint_00.component0 = fVar18;
                    bVar5 = SceneryManager_MaskOccupied_1321c10(pSVar13,gridPoint_00,pvVar9);
                    pvVar9 = extraout_x1_04;
                    if ((!bVar5) && ((0xf0 < uVar1 || (0x78 < iVar6 + 0x3cU)))) {
                      pvVar11 = pSVar13->SceneryElements;
                      if (pvVar11 == (void *)0x0) goto code_r0x01425238;
                      uVar12 = 0;
                      do {
                        if (*(uint *)((long)pvVar11 + 0x18) <= uVar12) goto code_r0x01425234;
                        pSVar14 = *(SceneryElement **)((long)pvVar11 + uVar12 * 8 + 0x20);
                        if (pSVar14 == (SceneryElement *)0x0) goto code_r0x01425238;
                        if (pSVar14->Active == false) {
                          pSVar14->Active = true;
                          (pSVar14->Quadrant).component0 = fVar18;
                          (pSVar14->Quadrant).component1 = fVar17;
                          pvVar9 = (void *)NativeHelper_0260e1a8(pSVar14,0);
                          iVar6 = UnityEngine_Random_Range_2507f84(0,0x15,(void *)0x0);
                          iVar7 = UnityEngine_Random_Range_2507f84(0,0x15,(void *)0x0);
                          if (pvVar9 == (void *)0x0) goto code_r0x01425238;
                          RVar19.component2 = fVar17 + (float)(iVar7 + -10);
                          RVar19.component0 = fVar18 + (float)(iVar6 + -10);
                          RVar19.component1 = 0.0;
                          UnityEngine_Transform_set_position_25167b0(pvVar9,RVar19,(void *)0x0);
                          iVar6 = UnityEngine_Random_Range_2507f84(0,1000,(void *)0x0);
                          if (pSVar13->ObjectDensity <= (float)iVar6 / 1000.0) {
                            SceneryElement_Deactivate_13212ec(pSVar14,runtimeMethod_01);
                            pvVar9 = extraout_x1_06;
                          }
                          else {
                            SceneryElement_Activate_13212c8(pSVar14,runtimeMethod_01);
                            pvVar9 = extraout_x1_05;
                          }
                          break;
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 != 0x169);
                    }
code_r0x014251fc:
                    iVar16 = iVar16 + 1;
                  } while (iVar16 != 0x13);
                  iVar15 = iVar15 + 1;
                } while (iVar15 != 0x13);
              }
              return;
            }
          }
code_r0x01425238:
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
  return;
}

