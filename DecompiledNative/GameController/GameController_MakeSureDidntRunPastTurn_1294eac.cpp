// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void MakeSureDidntRunPastTurn(Vector3 oldPlayerPosition, Vector3 newPlayerPosition) { }
// Ghidra address: 01398eac; ELF VA: 0x1298eac; file offset: 0x1294eac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameController_MakeSureDidntRunPastTurn_1294eac
               (GameController *self,Recovered_Vector3 oldPlayerPosition,
               Recovered_Vector3 newPlayerPosition,void *runtimeMethod)

{
  float radius;
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *extraout_x1;
  PathElement *pPVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Recovered_Vector3 point;
  Recovered_Vector2 point_00;
  Recovered_Vector2 point_01;
  Recovered_Vector2 point_02;
  
  puVar1 = PTR_DAT_029b7f98;
  fVar6 = oldPlayerPosition.component2;
  point_00.component0 = oldPlayerPosition.component0;
  if ((bRam0000000002b94d00 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d00 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  pPVar4 = self->PathRoot;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Equality_250d534(pPVar4,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return;
  }
  if (self->GamePlayer != (CharacterPlayer *)0x0) {
    radius = 6.5;
    if (self->GamePlayer->GroundHeight <= 7.5) {
      radius = 10.0;
    }
    if (self->PathRoot != (PathElement *)0x0) {
      point_00.component1 = fVar6;
      bVar2 = PathElement_IsPointOverTurnArea_1310ae0(self->PathRoot,point_00,radius,(void *)0x0);
      if (!bVar2) {
        if (self->PathRoot == (PathElement *)0x0) goto LAB_01399120;
        point.component1 = fVar6;
        point.component0 = point_00.component0;
        point.component2 = 0.0;
        pPVar4 = PathElement_GetPathElementIfPointOverTurn_131075c
                           (self->PathRoot,point,50.0,self->PathRootOrigin,true,3,(void *)0x0);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc(lVar3);
        }
        bVar2 = UnityEngine_object_op_Inequality_250c8e4(pPVar4,(void *)0x0,(void *)0x0);
        if (bVar2) {
          if (self->PathRoot == (PathElement *)0x0) goto LAB_01399120;
          point_01.component1 = newPlayerPosition.component2;
          point_01.component0 = newPlayerPosition.component0;
          bVar2 = PathElement_IsPointOverTurnArea_1310ae0
                            (self->PathRoot,point_01,radius,(void *)0x0);
          fVar8 = _UNK_007a3d00;
          if (bVar2) {
            if (cRam0000000002b945bd == '\0') {
              NativeHelper_011df0b4(PTR_DAT_029b97c8);
              cRam0000000002b945bd = '\x01';
            }
            fVar9 = (newPlayerPosition.component0 - point_00.component0) * fVar8;
            fVar7 = (newPlayerPosition.component1 - oldPlayerPosition.component1) * fVar8;
            fVar8 = (newPlayerPosition.component2 - fVar6) * fVar8;
            if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
              NativeHelper_011df1bc();
            }
            if (0.0 < SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7)) {
              if (pPVar4 == (PathElement *)0x0) goto LAB_01399120;
              iVar5 = 1;
              do {
                point_02.component1 = fVar6 + fVar8 * (float)iVar5;
                point_02.component0 = point_00.component0 + fVar9 * (float)iVar5;
                bVar2 = PathElement_IsPointOverTurnArea_1310ae0(pPVar4,point_02,radius,(void *)0x0);
                if (bVar2) {
                  if ((self->GamePlayer != (CharacterPlayer *)0x0) &&
                     (lVar3 = NativeHelper_0260e1a8(self->GamePlayer,0), lVar3 != 0)) {
                    if (pcRam0000000002b9d2b0 == (code *)0x0) {
                      pcRam0000000002b9d2b0 = (code *)NativeHelper_011df070(&UNK_007b1410,0);
                    }
                    (*pcRam0000000002b9d2b0)(lVar3,&stack0xffffffffffffffd0);
                    return;
                  }
                  goto LAB_01399120;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != 4);
            }
          }
        }
      }
      return;
    }
  }
LAB_01399120:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

