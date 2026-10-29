// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartEmblemFallIfVisible(UISprite emblem) { }
// Ghidra address: 013ecbcc; ELF VA: 0x12ecbcc; file offset: 0x12e8bcc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUITotem_StartEmblemFallIfVisible_12e8bcc
               (GameGUITotem *self,UISprite *emblem,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  TweenPosition *pTVar4;
  TweenColor *pTVar5;
  Recovered_Color value;
  Recovered_Vector3 pos;
  Recovered_Color color;
  
  if ((emblem != (UISprite *)0x0) &&
     (pvVar3 = (void *)NativeHelper_0260e1a8(emblem,0), self = (GameGUITotem *)0x0,
     pvVar3 != (void *)0x0)) {
    UnityEngine_Transform_set_localPosition_2515ec4
              (pvVar3,(Recovered_Vector3)ZEXT812(0),(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1e4(emblem,0);
    iVar1 = UnityEngine_Random_Range_2507f84(-10,0x5a,(void *)0x0);
    iVar2 = UnityEngine_Random_Range_2507f84(800,0x400,(void *)0x0);
    pos.component0 = (float)iVar1;
    pos.component1 = (float)-iVar2;
    pos.component2 = 0.0;
    pTVar4 = TweenPosition_Begin_1209e6c(pvVar3,1.5,pos,(void *)0x0);
    self = (GameGUITotem *)0x0;
    if (pTVar4 != (TweenPosition *)0x0) {
      *(undefined4 *)&pTVar4->field_0x2c = 1;
      value.component2 = 1.0;
      value.component3 = 1.0;
      value.component0 = 1.0;
      value.component1 = 1.0;
      UIWidget_set_color_1206e5c((UIWidget *)emblem,value,(void *)0x0);
      pvVar3 = (void *)NativeHelper_0260e1e4(emblem,0);
      color.component2 = 1.0;
      color.component3 = 0.0;
      color.component0 = 1.0;
      color.component1 = 1.0;
      pTVar5 = TweenColor_Begin_1209c54(pvVar3,1.5,color,(void *)0x0);
      self = (GameGUITotem *)0x0;
      if (pTVar5 != (TweenColor *)0x0) {
        *(undefined4 *)&pTVar5->field_0x2c = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc(self);
}

