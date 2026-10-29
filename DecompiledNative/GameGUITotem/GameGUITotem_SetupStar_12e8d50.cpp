// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetupStar(GUIParticle sprite) { }
// Ghidra address: 013ecd50; ELF VA: 0x12ecd50; file offset: 0x12e8d50
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameGUITotem_SetupStar_12e8d50(GameGUITotem *self,GUIParticle *sprite,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  UISprite *self_00;
  UILabel *pUVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  Recovered_Vector3 RVar9;
  Recovered_Vector3 value;
  
  if (sprite != (GUIParticle *)0x0) {
    pvVar4 = (void *)NativeHelper_0260e1a8(sprite,0);
    self = (GameGUITotem *)0x0;
    if (pvVar4 != (void *)0x0) {
      RVar9.component1 = -60.0;
      RVar9.component0 = (float)_UNK_007a3d60;
      RVar9.component2 = 0.0;
      UnityEngine_Transform_set_localPosition_2515ec4(pvVar4,RVar9,(void *)0x0);
      pvVar4 = (void *)NativeHelper_0260e1a8(sprite,0);
      self = (GameGUITotem *)0x0;
      if (pvVar4 != (void *)0x0) {
        value.component1 = (float)_UNK_007a3d5c;
        value.component0 = (float)_UNK_007a3d5c;
        value.component2 = 1.0;
        UnityEngine_Transform_set_localScale_2516e0c(pvVar4,value,(void *)0x0);
        iVar1 = UnityEngine_Random_Range_2507f84(-200,100,(void *)0x0);
        iVar2 = UnityEngine_Random_Range_2507f84(-400,100,(void *)0x0);
        if (cRam0000000002b945c3 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b97c8);
          cRam0000000002b945c3 = '\x01';
        }
        fVar8 = (float)iVar1;
        fVar6 = (float)iVar2;
        if (*(int *)(*(long *)PTR_DAT_029b97c8 + 0xe0) == 0) {
          NativeHelper_011df1bc();
        }
        fVar5 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + 0.0);
        if (fVar5 <= _UNK_007a3c5c) {
          if (cRam0000000002b94510 == '\0') {
            NativeHelper_011df0b4(PTR_DAT_029b9368);
            cRam0000000002b94510 = '\x01';
          }
          fVar8 = **(float **)(*(long *)PTR_DAT_029b9368 + 0xb8);
          uVar7 = *(undefined8 *)(*(float **)(*(long *)PTR_DAT_029b9368 + 0xb8) + 1);
        }
        else {
          fVar8 = fVar8 / fVar5;
          uVar7 = CONCAT44(0.0 / fVar5,fVar6 / fVar5);
        }
        iVar1 = UnityEngine_Random_Range_2507f84(400,500,(void *)0x0);
        fVar6 = (float)iVar1;
        (sprite->Motion).component0 = fVar8 * fVar6;
        (sprite->Motion).component1 = (float)uVar7 * fVar6;
        (sprite->Motion).component2 = (float)((ulong)uVar7 >> 0x20) * fVar6;
        sprite->RotationRate = 1024.0;
        fVar6 = (float)NativeHelper_0260c00c(0);
        uVar7 = NEON_fmov(0x3fc00000,4);
        sprite->LifeSpan = (fVar6 * 1.5 + 0.75) * 0.5;
        (sprite->FinalScale).component0 = (float)(int)uVar7;
        (sprite->FinalScale).component1 = (float)(int)((ulong)uVar7 >> 0x20);
        (sprite->FinalScale).component2 = 1.0;
        *(undefined4 *)&sprite->field_0x54 = 2;
        sprite->Gravity = false;
        fVar6 = (float)NativeHelper_0260bf44(0,0x3e000000,0);
        sprite->Delay = fVar6;
        pvVar4 = (void *)NativeHelper_0260e1a8(sprite,0);
        if (pvVar4 != (void *)0x0) {
          RVar9 = UnityEngine_Transform_get_localScale_2516d6c(pvVar4,(void *)0x0);
          self_00 = sprite->Sprite;
          (sprite->StartScale).component0 = RVar9.component0;
          (sprite->StartScale).component1 = RVar9.component1;
          (sprite->StartScale).component2 = RVar9.component2;
          if (self_00 != (UISprite *)0x0) {
            sprite->StartAlpha = *(float *)&self_00->field_0x34;
            UnityEngine_Behaviour_set_enabled_250972c(self_00,sprite->Delay <= 0.0,(void *)0x0);
            if (sprite->containsText == false) {
              return;
            }
            if (sprite->Sprite != (UISprite *)0x0) {
              UnityEngine_Behaviour_set_enabled_250972c(sprite->Sprite,false,(void *)0x0);
              pUVar3 = sprite->Label;
              if (pUVar3 != (UILabel *)0x0) {
                fVar6 = sprite->Delay;
                if (pcRam0000000002b9ccc0 == (code *)0x0) {
                  pcRam0000000002b9ccc0 = (code *)NativeHelper_011df070(&UNK_007b2109);
                }
                    /* WARNING: Could not recover jumptable at 0x0260d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000002b9ccc0)(pUVar3,fVar6 <= 0.0);
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
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(self);
}

