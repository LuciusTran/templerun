// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GUIParticle NextFreeParticle(string name = null) { }
// Ghidra address: 013ebf50; ELF VA: 0x12ebf50; file offset: 0x12e7f50
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


GUIParticle * GameGUI_NextFreeParticle_12e7f50(GameGUI *self,void *name,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  GUIParticle *self_00;
  UISprite *pUVar7;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  GUIParticle *pGStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  GUIParticle *pGStack_50;
  
  if ((bRam0000000002b94fe4 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0998);
    NativeHelper_011df0b4(PTR_DAT_029c09a0);
    NativeHelper_011df0b4(PTR_DAT_029c09a8);
    NativeHelper_011df0b4(PTR_DAT_029c0970);
    NativeHelper_011df0b4(PTR_DAT_029c09b0);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fe4 = 1;
  }
  puVar4 = PTR_DAT_029c09a0;
  puVar3 = PTR_DAT_029c0998;
  puVar2 = PTR_DAT_029b7f98;
  uStack_60 = 0;
  uStack_58 = 0;
  pGStack_50 = (GUIParticle *)0x0;
  if (self->ParticleSpriteList == (void *)0x0) goto LAB_013ec144;
  NativeHelper_01a30500(&uStack_78,self->ParticleSpriteList,*(undefined8 *)PTR_DAT_029c09b0);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  pGStack_50 = pGStack_68;
  do {
    uVar6 = NativeHelper_0182184c(&uStack_60,*(undefined8 *)puVar4);
    self_00 = pGStack_50;
    if ((uVar6 & 1) == 0) {
      self_00 = (GUIParticle *)0x0;
      break;
    }
    if (pGStack_50 == (GUIParticle *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar5 = UnityEngine_Behaviour_get_enabled_25096f0(pGStack_50,(void *)0x0);
  } while (bVar5);
  NativeHelper_01821848(&uStack_60,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar5 = UnityEngine_object_op_Equality_250d534(self_00,(void *)0x0,(void *)0x0);
  pvVar8 = runtimeMethod_00;
  if (bVar5) {
    self_00 = GameGUI_NewParticleSprite_12e7dd4(self,runtimeMethod_00);
    pvVar8 = self->ParticleSpriteList;
    if (pvVar8 == (void *)0x0) goto LAB_013ec144;
    lVar9 = *(long *)((long)pvVar8 + 0x10);
    lVar10 = *(long *)PTR_DAT_029c0970;
    *(int *)((long)pvVar8 + 0x1c) = *(int *)((long)pvVar8 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_013ec144;
    uVar1 = *(uint *)((long)pvVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)((long)pvVar8 + 0x18) = uVar1 + 1;
      *(GUIParticle **)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = self_00;
      pvVar8 = extraout_x1;
    }
    else {
      NativeHelper_01a2fa14
                (pvVar8,self_00,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pvVar8 = extraout_x1_01;
    }
  }
  if (name == (void *)0x0) {
    if (self_00 != (GUIParticle *)0x0) {
LAB_013ec11c:
      GUIParticle_Reset_12e81d4(self_00,pvVar8);
      return self_00;
    }
  }
  else if ((self_00 != (GUIParticle *)0x0) && (self_00->Sprite != (UISprite *)0x0)) {
    UISprite_set_spriteName_12a2d48(self_00->Sprite,name,(void *)0x0);
    pUVar7 = self_00->Sprite;
    if (pUVar7 != (UISprite *)0x0) {
      (**(code **)(*(long *)pUVar7 + 0x1a8))(pUVar7,*(undefined8 *)(*(long *)pUVar7 + 0x1b0));
      pvVar8 = extraout_x1_00;
      goto LAB_013ec11c;
    }
  }
LAB_013ec144:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

