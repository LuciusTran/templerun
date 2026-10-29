// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetPathElementVisibility() { }
// Ghidra address: 01394064; ELF VA: 0x1294064; file offset: 0x1290064
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SetPathElementVisibility_1290064(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  PathElement *self_00;
  long lVar6;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  int turnCount;
  int iVar7;
  void *pvVar8;
  UISprite *pUVar9;
  PathElement *pPVar10;
  
  puVar2 = PTR_DAT_029bde80;
  puVar1 = PTR_DAT_029b7f98;
  self_00 = self->PathRoot;
  if (self_00 == (PathElement *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  runtimeMethod_01 = (void *)(ulong)(uint)self->PathRootOrigin;
  runtimeMethod_00 = (void *)0x1;
  runtimeMethod_02 = (void *)0x0;
  turnCount = 0;
  bVar5 = true;
  bVar3 = true;
  pvVar8 = runtimeMethod_01;
  do {
    if ((bRam0000000002b95106 & 1) == 0) {
      NativeHelper_011df0b4(puVar1);
      NativeHelper_011df0b4(puVar2);
      bRam0000000002b95106 = 1;
      runtimeMethod_00 = extraout_x1;
    }
    if (bVar5 || bVar3 != true) {
      bVar3 = (bool)(bVar3 | bVar5);
    }
    else {
      bVar4 = PathElement_IsTurn_130b174(self_00,runtimeMethod_00);
      turnCount = turnCount + (uint)bVar4;
      bVar3 = (bool)(bVar3 & turnCount < 3);
    }
    PathElement_SetRendering_1310f3c(self_00,bVar3,runtimeMethod_01);
    if (bVar3) {
      pUVar9 = self_00->MySafteyNetSprite;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar9,(void *)0x0,(void *)0x0);
      if (bVar3) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pUVar9 = self_00->MySafteyNetSprite;
        if (pUVar9 == (UISprite *)0x0) break;
        if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) == '\0') {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar9,true,(void *)0x0);
          lVar6 = *(long *)puVar2;
          pUVar9 = self_00->MySafteyNetSprite;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar6 = *(long *)puVar2;
          }
          if (pUVar9 == (UISprite *)0x0) break;
          UIWidget_set_color_1206e5c
                    ((UIWidget *)pUVar9,*(Recovered_Color *)(*(long *)(lVar6 + 0xb8) + 0x4c),
                     (void *)0x0);
        }
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    iVar7 = (int)pvVar8;
    if ((bool)(iVar7 == 1 & (bVar5 ^ 1U))) {
code_r0x014152dc:
      pPVar10 = self_00->PathEast;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar10,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self_00->PathEast == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self_00->PathEast,bVar3,4,false,turnCount,runtimeMethod_02);
      }
      if (!(bool)(iVar7 == 3 & (bVar5 ^ 1U))) goto code_r0x01415334;
    }
    else {
      pPVar10 = self_00->PathNorth;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar10,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self_00->PathNorth == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self_00->PathNorth,bVar3,3,false,turnCount,runtimeMethod_02);
      }
      if (!(bool)(iVar7 == 2 & (bVar5 ^ 1U))) goto code_r0x014152dc;
code_r0x01415334:
      pPVar10 = self_00->PathSouth;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar10,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self_00->PathSouth == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self_00->PathSouth,bVar3,1,false,turnCount,runtimeMethod_02);
      }
      if ((bool)(iVar7 == 4 & (bVar5 ^ 1U))) {
        return;
      }
    }
    pPVar10 = self_00->PathWest;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    runtimeMethod_01 = (void *)0x0;
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(pPVar10,(void *)0x0,(void *)0x0);
    if (!bVar5) {
      return;
    }
    self_00 = self_00->PathWest;
    bVar5 = false;
    pvVar8 = (void *)0x2;
    runtimeMethod_00 = extraout_x1_00;
  } while (self_00 != (PathElement *)0x0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

