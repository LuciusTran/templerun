// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013db340; ELF VA: 0x12db340; file offset: 0x12d7340
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameCamera_Start_12d7340(GameCamera *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  GameCamera_Reset_12d73b4(self,runtimeMethod);
  pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar1 != (void *)0x0) {
    UnityEngine_Transform_set_position_25167b0(pvVar1,self->StartLocation,(void *)0x0);
    lVar2 = NativeHelper_0260e1a8(self,0);
    if ((self->MainCameraFocusPoint != (MovingObject *)0x0) &&
       (pvVar1 = (void *)NativeHelper_0260e1a8(self->MainCameraFocusPoint,0), pvVar1 != (void *)0x0)
       ) {
      UnityEngine_Transform_get_position_2516710(pvVar1,(void *)0x0);
      if (lVar2 != 0) {
        if (cRam0000000002b94818 == '\0') {
          NativeHelper_011df0b4(PTR_DAT_029b9368,0);
          cRam0000000002b94818 = '\x01';
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_029b9368 + 0xb8);
        uStack_40 = *(undefined4 *)(lVar3 + 0x18);
        uStack_3c = *(undefined4 *)(lVar3 + 0x1c);
        uStack_38 = *(undefined4 *)(lVar3 + 0x20);
        if (pcRam0000000002b9d310 == (code *)0x0) {
          pcRam0000000002b9d310 = (code *)NativeHelper_011df070(&UNK_007c393d);
        }
        (*pcRam0000000002b9d310)(lVar2,&stack0xffffffffffffffd0,&uStack_40);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

