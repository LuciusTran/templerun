// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetLocalizationSystemLanguage(string newLanguage, bool updateRecordManager) { }
// Ghidra address: 0139b6f8; ELF VA: 0x129b6f8; file offset: 0x12976f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_SetLocalizationSystemLanguage_12976f8
               (GameController *self,void *newLanguage,bool updateRecordManager,void *runtimeMethod)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  void *self_00;
  void *error;
  void *runtimeMethod_00;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  
  if ((bRam0000000002b94d17 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be170);
    NativeHelper_011df0b4(PTR_DAT_029be178);
    NativeHelper_011df0b4(PTR_DAT_029be180);
    NativeHelper_011df0b4(PTR_DAT_029bde90);
    bRam0000000002b94d17 = 1;
  }
  plVar4 = (long *)NativeHelper_025517d0(0);
  puVar2 = PTR_DAT_029be170;
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_029be170) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0139b7bc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,*(long *)PTR_DAT_029be170,0);
LAB_0139b7bc:
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar3 = PTR_DAT_029be180;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) < 1) {
        return;
      }
      iVar13 = 0;
      bVar1 = false;
      do {
        lVar10 = *plVar4;
        lVar9 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0139b834;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar9,0);
LAB_0139b834:
        lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (lVar9 == 0) break;
        if (*(int *)(lVar9 + 0x18) <= iVar13) {
          if (!bVar1) {
            return;
          }
          if (!updateRecordManager) {
            return;
          }
          uVar8 = *(undefined8 *)PTR_DAT_029bde90;
          runtimeMethod_00 = (void *)0x0;
          if (pcRam0000000002b9cba8 == (code *)0x0) {
            pcRam0000000002b9cba8 = (code *)NativeHelper_011df070(&UNK_007aa128);
          }
          uVar11 = (*pcRam0000000002b9cba8)(uVar8,newLanguage);
          if ((uVar11 & 1) == 0) {
            NativeHelper_011df0c8(PTR_DAT_029f5688);
            self_00 = (void *)NativeHelper_011df2d0();
            error = (void *)NativeHelper_011df0c8(PTR_DAT_029f5690);
            UnityEngine_PlayerPrefsException_PlayerPrefsException_2507688
                      (self_00,error,runtimeMethod_00);
            uVar8 = NativeHelper_011df0c8(PTR_DAT_029f56a8);
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df1ac(self_00,uVar8);
          }
          return;
        }
        lVar10 = *plVar4;
        lVar9 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0139b89c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)NativeHelper_011b5528(plVar4,lVar9,0);
LAB_0139b89c:
        lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (((lVar9 == 0) ||
            (plVar6 = (long *)NativeHelper_01a2f750(lVar9,iVar13,*(undefined8 *)puVar3),
            plVar6 == (long *)0x0)) ||
           (plVar7 = (long *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0))
           , plVar7 == (long *)0x0)) break;
        uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        uVar11 = NativeHelper_01e9b79c(newLanguage,uVar8,0);
        if ((uVar11 & 1) != 0) {
          NativeHelper_025518b0(plVar6,0);
          bVar1 = true;
        }
        iVar13 = iVar13 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

