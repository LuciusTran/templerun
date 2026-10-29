// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 013eb694; ELF VA: 0x12eb694; file offset: 0x12e7694
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameGUI_Awake_12e7694(GameGUI *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  UISprite *pUVar4;
  void *pvVar5;
  GUIParticle *runtimeMethod_00;
  void *extraout_x1;
  void *runtimeMethod_01;
  GUIParticle *extraout_x1_00;
  void *in_x2;
  long lVar6;
  long lVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_029c0600;
  if ((bRam0000000002b94fdd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdf48);
    NativeHelper_011df0b4(PTR_DAT_029c05f8);
    NativeHelper_011df0b4(PTR_DAT_029c0600);
    bRam0000000002b94fdd = 1;
    runtimeMethod = extraout_x1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar2;
  puVar2 = PTR_DAT_029bdf48;
  if (self->PauseButton == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_011df2dc(0,runtimeMethod);
  }
  pUVar4 = (UISprite *)NativeHelper_015070d0(self->PauseButton,*(undefined8 *)PTR_DAT_029c05f8);
  self->_PauseSprite = pUVar4;
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
  GameGUI_SetScore_12e7748(self,0,in_x2);
  GameGUI_SetCoins_12e7788(self,0,in_x2);
  puVar3 = PTR_DAT_029c0968;
  puVar2 = PTR_DAT_029c0960;
  iVar8 = 0x19;
  if ((bRam0000000002b94fe3 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0970);
    NativeHelper_011df0b4(PTR_DAT_029c0968);
    NativeHelper_011df0b4(PTR_DAT_029c0960);
    bRam0000000002b94fe3 = 1;
  }
  pvVar5 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar2);
  NativeHelper_01a2f2b4(pvVar5,0x19,*(undefined8 *)puVar3);
  self->ParticleSpriteList = pvVar5;
  runtimeMethod_00 = GameGUI_NewParticleSprite_12e7dd4(self,runtimeMethod_01);
  puVar2 = PTR_DAT_029c0970;
  while (pvVar5 != (void *)0x0) {
    lVar6 = *(long *)((long)pvVar5 + 0x10);
    lVar7 = *(long *)puVar2;
    *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar1 = *(uint *)((long)pvVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
      *(GUIParticle **)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = runtimeMethod_00;
    }
    else {
      NativeHelper_01a2fa14
                (pvVar5,runtimeMethod_00,
                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      runtimeMethod_00 = extraout_x1_00;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      return;
    }
    pvVar5 = self->ParticleSpriteList;
    runtimeMethod_00 = GameGUI_NewParticleSprite_12e7dd4(self,runtimeMethod_00);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

