// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013db240; ELF VA: 0x12db240; file offset: 0x12d7240
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_Awake_12d7240(GameCamera *self,void *runtimeMethod)

{
  byte bVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  CharacterPlayer *pCVar5;
  long lVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  puVar2 = PTR_DAT_029c03f0;
  if ((bRam0000000002b94f5f & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde50);
    NativeHelper_011df0b4(PTR_DAT_029c03f0);
    bRam0000000002b94f5f = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
  pCVar5 = (CharacterPlayer *)self->Player;
  if (pCVar5 != (CharacterPlayer *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_029bde50 + 0x130);
    if (*(byte *)(*(long *)pCVar5 + 0x130) < bVar1) {
      pCVar5 = (CharacterPlayer *)0x0;
    }
    else if (*(long *)(*(long *)(*(long *)pCVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_029bde50) {
      pCVar5 = (CharacterPlayer *)0x0;
    }
  }
  self->GamePlayer = pCVar5;
  pvVar3 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar3 != (void *)0x0) {
    UnityEngine_Transform_set_position_25167b0(pvVar3,self->StartLocation,(void *)0x0);
    lVar4 = NativeHelper_0260e1a8(self,0);
    if (((self->MainCameraFocusPoint != (MovingObject *)0x0) &&
        (pvVar3 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0), pvVar3 != (void *)0x0
        )) && (UnityEngine_Transform_get_position_2516710(pvVar3,(void *)0x0), lVar4 != 0)) {
      if (cRam0000000002b94818 == '\0') {
        NativeHelper_011df0b4(PTR_DAT_029b9368,0);
        cRam0000000002b94818 = '\x01';
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_029b9368 + 0xb8);
      uStack_40 = *(undefined4 *)(lVar6 + 0x18);
      uStack_3c = *(undefined4 *)(lVar6 + 0x1c);
      uStack_38 = *(undefined4 *)(lVar6 + 0x20);
      if (pcRam0000000002b9d310 == (code *)0x0) {
        pcRam0000000002b9d310 = (code *)NativeHelper_011df070(&UNK_007c393d);
      }
      (*pcRam0000000002b9d310)(lVar4,&stack0xffffffffffffffd0,&uStack_40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

