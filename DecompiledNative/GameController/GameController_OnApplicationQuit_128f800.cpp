// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnApplicationQuit() { }
// Ghidra address: 01393800; ELF VA: 0x1293800; file offset: 0x128f800
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x01424410) */
/* WARNING: Removing unreachable block (ram,0x01424428) */
/* WARNING: Removing unreachable block (ram,0x014244d0) */
/* WARNING: Removing unreachable block (ram,0x01424600) */
/* WARNING: Removing unreachable block (ram,0x01424610) */
/* WARNING: Removing unreachable block (ram,0x01424628) */
/* WARNING: Removing unreachable block (ram,0x01424630) */
/* WARNING: Removing unreachable block (ram,0x01424658) */
/* WARNING: Removing unreachable block (ram,0x0142463c) */
/* WARNING: Removing unreachable block (ram,0x01424648) */
/* WARNING: Removing unreachable block (ram,0x01424664) */
/* WARNING: Removing unreachable block (ram,0x01424670) */
/* WARNING: Removing unreachable block (ram,0x01424674) */
/* WARNING: Removing unreachable block (ram,0x0142467c) */
/* WARNING: Removing unreachable block (ram,0x014245ec) */
/* WARNING: Removing unreachable block (ram,0x014244b0) */

void GameController_OnApplicationQuit_128f800(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  SavedGame *self_00;
  Warble *self_01;
  long *plVar7;
  undefined8 *puVar8;
  void *extraout_x1;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  float fVar14;
  void *apvStack_38 [2];
  
  puVar2 = PTR_DAT_029bdef8;
  if ((bRam0000000002b94ceb & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029bdf40);
    bRam0000000002b94ceb = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029bdf40;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar2,runtimeMethod);
  }
  puVar2 = PTR_DAT_029bdef8;
  pvVar9 = (void *)0x3d8;
  if ((bRam0000000002b951ae & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758,*(undefined8 *)puVar1,0x3d8,0);
    NativeHelper_011df0b4(PTR_DAT_029b8028);
    NativeHelper_011df0b4(PTR_DAT_029b8a00);
    NativeHelper_011df0b4(PTR_DAT_029bdef8);
    NativeHelper_011df0b4(PTR_DAT_029ba918);
    NativeHelper_011df0b4(PTR_DAT_029bee38);
    bRam0000000002b951ae = 1;
  }
  puVar1 = PTR_DAT_029b9758;
  lVar4 = *(long *)puVar2;
  apvStack_38[0] = (void *)0x0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar4 = *(long *)puVar2;
  }
  *(int *)(*(long *)(lVar4 + 0xb8) + 0x18) = *(int *)(*(long *)(lVar4 + 0xb8) + 0x18) + 1;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar4 = *(long *)puVar1;
  }
  lVar10 = **(long **)(lVar4 + 0xb8);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0xed) == '\0') {
      bVar13 = 0;
    }
    else {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar10 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar10 == 0) goto code_r0x014244ac;
      }
      bVar13 = *(byte *)(lVar10 + 0xee) ^ 1;
    }
    fVar14 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      NativeHelper_011df1bc();
      lVar4 = *(long *)puVar2;
    }
    if ((bVar13 != 0) && (2.0 <= fVar14 - *(float *)(*(long *)(lVar4 + 0xb8) + 0x10))) {
      fVar14 = UnityEngine_Time_get_realtimeSinceStartup_25127e4((void *)0x0);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar4 = *(long *)puVar2;
      }
      *(float *)(*(long *)(lVar4 + 0xb8) + 0x10) = fVar14;
      iVar3 = UnityEngine_Time_get_frameCount_251353c((void *)0x0);
      *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14) = iVar3;
      if (*(int *)(*(long *)PTR_DAT_029ba918 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_0245f2f4(0);
      lVar4 = NativeHelper_0245f2f4(0);
      plVar5 = (long *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b8a00);
      NativeHelper_01f5ac30(plVar5,0);
      pvVar6 = *(void **)puVar2;
      if (*(int *)((long)pvVar6 + 0xe0) == 0) {
        pvVar6 = (void *)NativeHelper_011df1bc();
      }
      pvVar6 = SavedGame_get_Serializer_131ff1c(pvVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_0245f530(lVar4,0);
      NativeHelper_0245f700(lVar4,0);
      self_00 = (SavedGame *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
      SavedGame_SavedGame_131fbdc(self_00,1,pvVar9);
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_023eb46c(pvVar6,plVar5,self_00,0);
      NativeHelper_0245f530(lVar4,0);
      NativeHelper_0245f700(lVar4,0);
      self_01 = (Warble *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029bee38);
      Warble_Warble_1212c40(self_01,0x5747,(void *)0x0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      apvStack_38[0] =
           (void *)(**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
      if (self_01 == (Warble *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      pvVar9 = Warble_BlabidyJibber_121336c(self_01,apvStack_38,(void *)0x0);
      NativeHelper_0245f530(lVar4,0);
      pvVar6 = (void *)NativeHelper_0245f700(lVar4,0);
      pvVar6 = SavedGame_SavedFilePath_131fe7c(pvVar6);
      plVar7 = (long *)NativeHelper_01f66484(pvVar6,0);
      if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      (**(code **)(*plVar7 + 0x358))
                (plVar7,pvVar9,0,*(undefined4 *)((long)pvVar9 + 0x18),
                 *(undefined8 *)(*plVar7 + 0x360));
      (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_029b8028) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014243f8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)NativeHelper_011b5528(plVar7,*(long *)PTR_DAT_029b8028,0);
code_r0x014243f8:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      NativeHelper_0245f530(lVar4,0);
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_029b8028) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x01424484;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)NativeHelper_011b5528(plVar5,*(long *)PTR_DAT_029b8028,0);
code_r0x01424484:
        (*(code *)*puVar8)(plVar5,puVar8[1]);
      }
    }
    return;
  }
code_r0x014244ac:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

