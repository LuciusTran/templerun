// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void SetVisibility(bool visible) { }
// Ghidra address: 013c2b00; ELF VA: 0x12c2b00; file offset: 0x12beb00
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_SetVisibility_12beb00(CharacterPlayer *self,bool visible,void *runtimeMethod)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar3 = self->AttachmentsRenderObjects;
  if (pvVar3 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) goto LAB_013c2bb4;
        pvVar2 = *(void **)((long)pvVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (pvVar2 == (void *)0x0) goto LAB_013c2bb8;
        UnityEngine_Renderer_set_enabled_24f2aa0(pvVar2,visible,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    pvVar3 = self->RenderObject;
    if (pvVar3 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
LAB_013c2bb4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar2 = *(void **)((long)pvVar3 + (long)(int)uVar4 * 8 + 0x20);
          if (pvVar2 == (void *)0x0) goto LAB_013c2bb8;
          UnityEngine_Renderer_set_enabled_24f2aa0(pvVar2,visible,(void *)0x0);
          uVar1 = *(uint *)((long)pvVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_013c2bb8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

