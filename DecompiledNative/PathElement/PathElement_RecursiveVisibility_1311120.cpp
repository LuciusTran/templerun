// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RecursiveVisibility(bool activeFlag, PathDirection origin, bool isRootNode, int turnCount = 0) { }
// Ghidra address: 01415120; ELF VA: 0x1315120; file offset: 0x1311120
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_RecursiveVisibility_1311120
               (PathElement *self,bool activeFlag,int origin,bool isRootNode,int turnCount,
               void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_01;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  UISprite *pUVar10;
  void *pvVar11;
  PathElement *pPVar12;
  
  puVar2 = PTR_DAT_029bde80;
  puVar1 = PTR_DAT_029b7f98;
  uVar6 = (uint)isRootNode;
  runtimeMethod_01 = (void *)(ulong)(uint)origin;
  runtimeMethod_00 = (void *)(ulong)activeFlag;
  pvVar8 = runtimeMethod_01;
  pvVar11 = runtimeMethod_00;
  do {
    if ((bRam0000000002b95106 & 1) == 0) {
      NativeHelper_011df0b4(puVar1);
      NativeHelper_011df0b4(puVar2);
      bRam0000000002b95106 = 1;
      runtimeMethod_00 = extraout_x1;
    }
    uVar9 = (uint)pvVar11;
    if (uVar6 == 0 && ((uVar9 ^ 0xffffffff) & 1) == 0) {
      bVar3 = PathElement_IsTurn_130b174(self,runtimeMethod_00);
      turnCount = turnCount + (uint)bVar3;
      uVar9 = uVar9 & turnCount < 3;
      bVar3 = SUB41(uVar9,0);
    }
    else {
      uVar9 = uVar9 | uVar6;
      bVar3 = SUB41(uVar9,0);
    }
    PathElement_SetRendering_1310f3c(self,bVar3,runtimeMethod_01);
    if (uVar9 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      pUVar10 = self->MySafteyNetSprite;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pUVar10,(void *)0x0,(void *)0x0);
      if (bVar3) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        pUVar10 = self->MySafteyNetSprite;
        if (pUVar10 == (UISprite *)0x0) break;
        if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) == '\0') {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,false,(void *)0x0);
        }
        else {
          UnityEngine_Behaviour_set_enabled_250972c(pUVar10,true,(void *)0x0);
          lVar5 = *(long *)puVar2;
          pUVar10 = self->MySafteyNetSprite;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            NativeHelper_011df1bc();
            lVar5 = *(long *)puVar2;
          }
          if (pUVar10 == (UISprite *)0x0) break;
          UIWidget_set_color_1206e5c
                    ((UIWidget *)pUVar10,*(Recovered_Color *)(*(long *)(lVar5 + 0xb8) + 0x4c),
                     (void *)0x0);
        }
      }
      pvVar11 = (void *)0x1;
    }
    iVar7 = (int)pvVar8;
    bVar3 = SUB81(pvVar11,0);
    if (((uint)(iVar7 == 1) & (uVar6 ^ 1)) == 0) {
      pPVar12 = self->PathNorth;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self->PathNorth == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self->PathNorth,bVar3,3,false,turnCount,runtimeMethod);
      }
      if (((uint)(iVar7 == 2) & (uVar6 ^ 1)) == 0) goto LAB_014152dc;
LAB_01415334:
      pPVar12 = self->PathSouth;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self->PathSouth == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self->PathSouth,bVar3,1,false,turnCount,runtimeMethod);
      }
      if (((uint)(iVar7 == 4) & (uVar6 ^ 1)) != 0) {
        return;
      }
    }
    else {
LAB_014152dc:
      pPVar12 = self->PathEast;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar4 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (self->PathEast == (PathElement *)0x0) break;
        PathElement_RecursiveVisibility_1311120
                  (self->PathEast,bVar3,4,false,turnCount,runtimeMethod);
      }
      if (((uint)(iVar7 == 3) & (uVar6 ^ 1)) == 0) goto LAB_01415334;
    }
    pPVar12 = self->PathWest;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    runtimeMethod_01 = (void *)0x0;
    bVar3 = UnityEngine_object_op_Inequality_250c8e4(pPVar12,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      return;
    }
    self = self->PathWest;
    uVar6 = 0;
    pvVar8 = (void *)0x2;
    runtimeMethod_00 = extraout_x1_00;
  } while (self != (PathElement *)0x0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

