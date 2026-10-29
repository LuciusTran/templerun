// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private PathElement PicknNextPathElement() { }
// Ghidra address: 01422308; ELF VA: 0x1322308; file offset: 0x131e308
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


PathElement * PsuedoRunner_PicknNextPathElement_131e308(PsuedoRunner *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  void *message;
  void *extraout_x1;
  uint uVar12;
  PathElement *pPVar13;
  int iVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_64;
  
  if ((bRam0000000002b95193 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7fb8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029c1e50);
    NativeHelper_011df0b4(PTR_DAT_029b8708);
    NativeHelper_011df0b4(PTR_DAT_029c2408);
    NativeHelper_011df0b4(PTR_DAT_029c2410);
    bRam0000000002b95193 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  iStack_64 = 0;
  if (self->OnPath != (PathElement *)0x0) {
    pPVar13 = self->OnPath->PathNorth;
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b7f98,runtimeMethod);
    }
    bVar7 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
    if (bVar7) {
      if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
      pPVar13 = self->OnPath->PathEast;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      bVar7 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
      if (bVar7) {
        if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
        pPVar13 = self->OnPath->PathSouth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
        if (bVar7) {
          if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
          pPVar13 = self->OnPath->PathWest;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar7 = UnityEngine_object_op_Equality_250d534(pPVar13,(void *)0x0,(void *)0x0);
          if (bVar7) {
            return (PathElement *)0x0;
          }
        }
      }
    }
    puVar6 = PTR_DAT_029c2410;
    puVar5 = PTR_DAT_029c2408;
    puVar4 = PTR_DAT_029c1e50;
    puVar3 = PTR_DAT_029b8708;
    puVar2 = PTR_DAT_029b7fb8;
    iVar8 = CommonPlayer_TravelingDirection_12bf6d0((CommonPlayer *)self,(void *)0x0);
    iVar9 = 2;
    do {
      iVar14 = iVar9;
      iVar9 = UnityEngine_Random_Range_2507f84(0,4,(void *)0x0);
      switch(iVar9) {
      case 0:
        if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
        pPVar13 = self->OnPath->PathNorth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
        if ((iVar8 != 3) && (bVar7)) {
          if (self->OnPath != (PathElement *)0x0) {
            pPVar13 = self->OnPath->PathNorth;
            iVar9 = 1;
code_r0x014226f0:
            self->NextPath = pPVar13;
            self->Direction = iVar9;
            return pPVar13;
          }
          goto LAB_01422718;
        }
        break;
      case 1:
        if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
        pPVar13 = self->OnPath->PathEast;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
        if ((iVar8 != 4) && (bVar7)) {
          if (self->OnPath != (PathElement *)0x0) {
            pPVar13 = self->OnPath->PathEast;
            iVar9 = 2;
            goto code_r0x014226f0;
          }
          goto LAB_01422718;
        }
        break;
      case 2:
        if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
        pPVar13 = self->OnPath->PathSouth;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
        if ((iVar8 != 1) && (bVar7)) {
          if (self->OnPath != (PathElement *)0x0) {
            pPVar13 = self->OnPath->PathSouth;
            iVar9 = 3;
            goto code_r0x014226f0;
          }
          goto LAB_01422718;
        }
        break;
      case 3:
        if (self->OnPath == (PathElement *)0x0) goto LAB_01422718;
        pPVar13 = self->OnPath->PathWest;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        bVar7 = UnityEngine_object_op_Inequality_250c8e4(pPVar13,(void *)0x0,(void *)0x0);
        if ((iVar8 != 2) && (bVar7)) {
          if (self->OnPath != (PathElement *)0x0) {
            pPVar13 = self->OnPath->PathWest;
            iVar9 = 4;
            goto code_r0x014226f0;
          }
          goto LAB_01422718;
        }
      }
      iVar9 = iVar14 + 1;
      iStack_64 = iVar14;
    } while (iVar14 < 0xc9);
    lVar10 = NativeHelper_011df12c(*(undefined8 *)puVar3,5);
    uVar11 = NativeHelper_01ffa318(&iStack_64,0);
    if (lVar10 != 0) {
      if ((*(int *)(lVar10 + 0x18) != 0) &&
         (*(undefined8 *)(lVar10 + 0x20) = uVar11, *(int *)(lVar10 + 0x18) != 1)) {
        *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar5;
        uStack_80 = *(undefined8 *)puVar4;
        uStack_78 = 0xffffffffffffffff;
        iStack_70 = iVar8;
        uVar11 = NativeHelper_02031f7c(&uStack_80,0);
        uVar12 = *(uint *)(lVar10 + 0x18);
        if ((2 < uVar12) && (*(undefined8 *)(lVar10 + 0x30) = uVar11, uVar12 != 3)) {
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar6;
          pPVar13 = self->OnPath;
          uVar11 = 0;
          if (pPVar13 != (PathElement *)0x0) {
            uVar11 = (**(code **)(*(long *)pPVar13 + 0x168))
                               (pPVar13,*(undefined8 *)(*(long *)pPVar13 + 0x170));
            uVar12 = *(uint *)(lVar10 + 0x18);
          }
          if (4 < uVar12) {
            *(undefined8 *)(lVar10 + 0x40) = uVar11;
            message = (void *)NativeHelper_01e9bf50(lVar10,0);
            pPVar13 = self->OnPath;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              NativeHelper_011df1bc(*(long *)puVar2);
            }
            UnityEngine_Debug_Log_24e9d28(message,pPVar13,(void *)0x0);
            return (PathElement *)0x0;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2e4();
    }
  }
LAB_01422718:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

