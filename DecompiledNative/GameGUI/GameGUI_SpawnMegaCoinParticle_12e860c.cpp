// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SpawnMegaCoinParticle(int coinCount) { }
// Ghidra address: 013ec60c; ELF VA: 0x12ec60c; file offset: 0x12e860c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameGUI_SpawnMegaCoinParticle_12e860c(GameGUI *self,int coinCount,void *runtimeMethod)

{
  float fVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint coinValue;
  int iVar4;
  int iVar5;
  void *pvVar6;
  GUIParticle *self_00;
  void *runtimeMethod_00;
  void *pvVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  
  puVar3 = PTR_DAT_029b97c8;
  uVar2 = _UNK_007a3d00;
  fVar1 = _UNK_007a3c5c;
  if (0 < coinCount) {
    do {
      pvVar7 = (void *)0x0;
      coinValue = UnityEngine_Random_Range_2507f84(0,4,(void *)0x0);
      pvVar6 = GameGUI_nameForCoin_12e8384((GameGUI *)(ulong)coinValue,coinValue,pvVar7);
      self_00 = GameGUI_NextFreeParticle_12e7f50(self,pvVar6,pvVar7);
      if ((self_00 == (GUIParticle *)0x0) ||
         (pvVar6 = (void *)NativeHelper_0260e1a8(self_00,0), pvVar6 == (void *)0x0)) {
LAB_013ec8b4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      value.component1 = (float)uVar2;
      value.component0 = (float)uVar2;
      value.component2 = 1.0;
      UnityEngine_Transform_set_localScale_2516e0c(pvVar6,value,(void *)0x0);
      pvVar6 = (void *)NativeHelper_0260e1a8(self_00,0);
      pvVar7 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar6 == (void *)0x0) goto LAB_013ec8b4;
      UnityEngine_Transform_set_parent_2516ee0(pvVar6,pvVar7,(void *)0x0);
      pvVar6 = (void *)NativeHelper_0260e1a8(self_00,0);
      if (pvVar6 == (void *)0x0) goto LAB_013ec8b4;
      UnityEngine_Transform_set_localPosition_2515ec4
                (pvVar6,(Recovered_Vector3)ZEXT812(0x4170000000000000),(void *)0x0);
      iVar4 = UnityEngine_Random_Range_2507f84(-700,700,(void *)0x0);
      iVar5 = UnityEngine_Random_Range_2507f84(-700,700,(void *)0x0);
      if (cRam0000000002b945c3 == '\0') {
        NativeHelper_011df0b4(puVar3);
        cRam0000000002b945c3 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      fVar8 = (float)iVar4;
      fVar9 = (float)iVar5;
      fVar11 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + 0.0);
      if (fVar11 <= fVar1) {
        if (cRam0000000002b94510 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b9368);
          cRam0000000002b94510 = '\x01';
        }
        fVar8 = **(float **)(*(long *)PTR_DAT_029b9368 + 0xb8);
        uVar10 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_029b9368 + 0xb8) + 1);
      }
      else {
        fVar8 = fVar8 / fVar11;
        uVar10 = CONCAT44(0.0 / fVar11,fVar9 / fVar11);
      }
      (self_00->Motion).component0 = fVar8 * 700.0;
      (self_00->Motion).component1 = (float)uVar10 * 700.0;
      (self_00->Motion).component2 = (float)((ulong)uVar10 >> 0x20) * 700.0;
      self_00->RotationRate = 1000.0;
      pvVar6 = (void *)NativeHelper_0260e1a8(self_00,0);
      if (pvVar6 == (void *)0x0) goto LAB_013ec8b4;
      value_00.component1 = (float)uVar2;
      value_00.component0 = (float)uVar2;
      value_00.component2 = 1.0;
      UnityEngine_Transform_set_localScale_2516e0c(pvVar6,value_00,(void *)0x0);
      (self_00->FinalScale).component0 = 0.7;
      (self_00->FinalScale).component1 = 0.7;
      (self_00->FinalScale).component2 = 1.0;
      fVar8 = (float)NativeHelper_0260bf44(0,0x3f000000,0);
      self_00->LifeSpan = fVar8 + 0.5;
      *(undefined4 *)&self_00->field_0x54 = 2;
      self_00->Gravity = false;
      fVar8 = (float)NativeHelper_0260bf44(0,0x3e000000,0);
      self_00->Delay = fVar8;
      if (self_00->Label == (UILabel *)0x0) goto LAB_013ec8b4;
      UnityEngine_Behaviour_set_enabled_250972c(self_00->Label,false,(void *)0x0);
      self_00->containsText = false;
      GUIParticle_BeginAnimation_12e857c(self_00,runtimeMethod_00);
      coinCount = coinCount + -1;
    } while (coinCount != 0);
  }
  return;
}

