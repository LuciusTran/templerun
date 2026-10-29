// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Reset() { }
// Ghidra address: 013ebc14; ELF VA: 0x12ebc14; file offset: 0x12e7c14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_Reset_12e7c14(GameGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  GameGUITotem *pGVar3;
  void *x;
  Recovered_Color value;
  Recovered_Color value_00;
  Recovered_Color value_01;
  Recovered_Color value_02;
  
  pGVar3 = self->TotemUI;
  self->LastScore = 99999;
  self->LastCoins = 99999;
  if (pGVar3 == (GameGUITotem *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc();
  }
  if ((bRam0000000002b94fe6 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c05f8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fe6 = 1;
  }
  pGVar3->lastCoinPercent = 2.0;
  pGVar3->BonusLevel = 1;
  pGVar3->BonusLevelJustChagned = false;
  pGVar3->AccumulatedScore = 0;
  if (pGVar3->TotemEmblem1 != (UISprite *)0x0) {
    UnityEngine_Behaviour_set_enabled_250972c(pGVar3->TotemEmblem1,false,(void *)0x0);
    if (pGVar3->TotemEmblem2 != (UISprite *)0x0) {
      UnityEngine_Behaviour_set_enabled_250972c(pGVar3->TotemEmblem2,false,(void *)0x0);
      if (pGVar3->TotemEmblem3 != (UISprite *)0x0) {
        UnityEngine_Behaviour_set_enabled_250972c(pGVar3->TotemEmblem3,false,(void *)0x0);
        if (pGVar3->TotemEmblem4 != (UISprite *)0x0) {
          UnityEngine_Behaviour_set_enabled_250972c(pGVar3->TotemEmblem4,false,(void *)0x0);
          if (pGVar3->FallingTotemEmblem1 != (UISprite *)0x0) {
            value.component2 = 1.0;
            value.component3 = 0.0;
            value.component0 = 1.0;
            value.component1 = 1.0;
            UIWidget_set_color_1206e5c((UIWidget *)pGVar3->FallingTotemEmblem1,value,(void *)0x0);
            if (pGVar3->FallingTotemEmblem2 != (UISprite *)0x0) {
              value_00.component2 = 1.0;
              value_00.component3 = 0.0;
              value_00.component0 = 1.0;
              value_00.component1 = 1.0;
              UIWidget_set_color_1206e5c
                        ((UIWidget *)pGVar3->FallingTotemEmblem2,value_00,(void *)0x0);
              if (pGVar3->FallingTotemEmblem3 != (UISprite *)0x0) {
                value_01.component2 = 1.0;
                value_01.component3 = 0.0;
                value_01.component0 = 1.0;
                value_01.component1 = 1.0;
                UIWidget_set_color_1206e5c
                          ((UIWidget *)pGVar3->FallingTotemEmblem3,value_01,(void *)0x0);
                if (pGVar3->FallingTotemEmblem4 != (UISprite *)0x0) {
                  value_02.component2 = 1.0;
                  value_02.component3 = 0.0;
                  value_02.component0 = 1.0;
                  value_02.component1 = 1.0;
                  UIWidget_set_color_1206e5c
                            ((UIWidget *)pGVar3->FallingTotemEmblem4,value_02,(void *)0x0);
                  puVar1 = PTR_DAT_029b7f98;
                  if (pGVar3->BonusObject != (void *)0x0) {
                    x = (void *)NativeHelper_015070d0
                                          (pGVar3->BonusObject,*(undefined8 *)PTR_DAT_029c05f8);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      NativeHelper_011df1bc(*(long *)puVar1);
                    }
                    bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
                    if (!bVar2) {
                      return;
                    }
                    if (x != (void *)0x0) {
                      if (pcRam0000000002b9ccc0 == (code *)0x0) {
                        pcRam0000000002b9ccc0 = (code *)NativeHelper_011df070(&UNK_007b2109);
                      }
                    /* WARNING: Could not recover jumptable at 0x0260d76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000002b9ccc0)(x,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

