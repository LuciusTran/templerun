// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetupParticleSprites(int total) { }
// Ghidra address: 013eb7c8; ELF VA: 0x12eb7c8; file offset: 0x12e77c8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_SetupParticleSprites_12e77c8(GameGUI *self,int total,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  GUIParticle *runtimeMethod_00;
  void *runtimeMethod_01;
  GUIParticle *extraout_x1;
  long lVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_029c0968;
  puVar2 = PTR_DAT_029c0960;
  if ((bRam0000000002b94fe3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0970);
    NativeHelper_011df0b4(PTR_DAT_029c0968);
    NativeHelper_011df0b4(PTR_DAT_029c0960);
    bRam0000000002b94fe3 = 1;
  }
  pvVar4 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01a2f2b4(pvVar4,total,*(undefined8 *)puVar3);
  self->ParticleSpriteList = pvVar4;
  if (total < 1) {
    return;
  }
  runtimeMethod_00 = GameGUI_NewParticleSprite_12e7dd4(self,runtimeMethod_01);
  puVar2 = PTR_DAT_029c0970;
  while (pvVar4 != (void *)0x0) {
    lVar5 = *(long *)((long)pvVar4 + 0x10);
    lVar6 = *(long *)puVar2;
    *(int *)((long)pvVar4 + 0x1c) = *(int *)((long)pvVar4 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)((long)pvVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)((long)pvVar4 + 0x18) = uVar1 + 1;
      *(GUIParticle **)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = runtimeMethod_00;
    }
    else {
      NativeHelper_01a2fa14
                (pvVar4,runtimeMethod_00,
                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      runtimeMethod_00 = extraout_x1;
    }
    total = total + -1;
    if (total == 0) {
      return;
    }
    pvVar4 = self->ParticleSpriteList;
    runtimeMethod_00 = GameGUI_NewParticleSprite_12e7dd4(self,runtimeMethod_00);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

