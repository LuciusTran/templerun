// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SpawnSpriteParticleForCoin(int coinValue) { }
// Ghidra address: 013ec40c; ELF VA: 0x12ec40c; file offset: 0x12e840c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameGUI_SpawnSpriteParticleForCoin_12e840c(GameGUI *self,int coinValue,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  GUIParticle *pGVar7;
  void *value;
  UISprite *pUVar8;
  UILabel *pUVar9;
  float fVar10;
  Recovered_Vector3 value_00;
  Recovered_Vector3 RVar11;
  Recovered_Color value_01;
  
  pvVar6 = GameGUI_nameForCoin_12e8384(self,coinValue,runtimeMethod);
  pGVar7 = GameGUI_NextFreeParticle_12e7f50(self,pvVar6,runtimeMethod);
  if (pGVar7 != (GUIParticle *)0x0) {
    pGVar7->LifeSpan = 0.6;
    iVar4 = UnityEngine_Random_Range_2507f84(-0x14,0x15,(void *)0x0);
    iVar5 = UnityEngine_Random_Range_2507f84(-0x14,0x15,(void *)0x0);
    pvVar6 = (void *)NativeHelper_0260e1a8(pGVar7,0);
    value = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar6 != (void *)0x0) {
      UnityEngine_Transform_set_parent_2516ee0(pvVar6,value,(void *)0x0);
      pvVar6 = (void *)NativeHelper_0260e1a8(pGVar7,0);
      if (pvVar6 != (void *)0x0) {
        RVar11.component0 = (float)iVar4;
        RVar11.component1 = -((float)iVar5 + 75.0);
        RVar11.component2 = 0.0;
        UnityEngine_Transform_set_localPosition_2515ec4(pvVar6,RVar11,(void *)0x0);
        uVar1 = _UNK_007a38b8;
        (pGVar7->Motion).component2 = 0.0;
        uVar3 = _UNK_007a38b8;
        _UNK_007a38b8 = (undefined4)uVar1;
        _UNK_007a38bc = SUB84(uVar1,4);
        uVar2 = _UNK_007a38bc;
        (pGVar7->Motion).component0 = (float)_UNK_007a38b8;
        _UNK_007a38b8 = uVar3;
        (pGVar7->Motion).component1 = (float)uVar2;
        pGVar7->RotationRate = 1000.0;
        pvVar6 = (void *)NativeHelper_0260e1a8(pGVar7,0);
        if (pvVar6 != (void *)0x0) {
          value_00.component1 = (float)_UNK_007a3d00;
          value_00.component0 = (float)_UNK_007a3d00;
          value_00.component2 = 1.0;
          UnityEngine_Transform_set_localScale_2516e0c(pvVar6,value_00,(void *)0x0);
          pUVar8 = pGVar7->Sprite;
          (pGVar7->FinalScale).component0 = 0.6;
          (pGVar7->FinalScale).component1 = 0.6;
          (pGVar7->FinalScale).component2 = 0.0;
          if (pUVar8 != (UISprite *)0x0) {
            value_01.component2 = 0.5;
            value_01.component3 = 0.5;
            value_01.component0 = 0.5;
            value_01.component1 = 0.5;
            UIWidget_set_color_1206e5c((UIWidget *)pUVar8,value_01,(void *)0x0);
            *(undefined8 *)&pGVar7->field_0x54 = 1;
            pGVar7->Gravity = true;
            if (pGVar7->Label != (UILabel *)0x0) {
              UnityEngine_Behaviour_set_enabled_250972c(pGVar7->Label,false,(void *)0x0);
              pGVar7->containsText = false;
              pvVar6 = (void *)NativeHelper_0260e1a8(pGVar7,0);
              if (pvVar6 != (void *)0x0) {
                RVar11 = UnityEngine_Transform_get_localScale_2516d6c(pvVar6,(void *)0x0);
                pUVar8 = pGVar7->Sprite;
                (pGVar7->StartScale).component0 = RVar11.component0;
                (pGVar7->StartScale).component1 = RVar11.component1;
                (pGVar7->StartScale).component2 = RVar11.component2;
                if (pUVar8 != (UISprite *)0x0) {
                  pGVar7->StartAlpha = *(float *)&pUVar8->field_0x34;
                  UnityEngine_Behaviour_set_enabled_250972c(pUVar8,pGVar7->Delay <= 0.0,(void *)0x0)
                  ;
                  if (pGVar7->containsText == false) {
                    return;
                  }
                  if (pGVar7->Sprite != (UISprite *)0x0) {
                    UnityEngine_Behaviour_set_enabled_250972c(pGVar7->Sprite,false,(void *)0x0);
                    pUVar9 = pGVar7->Label;
                    if (pUVar9 != (UILabel *)0x0) {
                      fVar10 = pGVar7->Delay;
                      if (pcRam0000000002b9ccc0 == (code *)0x0) {
                        pcRam0000000002b9ccc0 = (code *)NativeHelper_011df070(&UNK_007b2109);
                      }
                    /* WARNING: Could not recover jumptable at 0x0260d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000002b9ccc0)(pUVar9,fVar10 <= 0.0);
                      return;
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_011df2dc();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

