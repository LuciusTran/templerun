// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private GUIParticle NewParticleSprite() { }
// Ghidra address: 013ebdd4; ELF VA: 0x12ebdd4; file offset: 0x12e7dd4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


GUIParticle * GameGUI_NewParticleSprite_12e7dd4(GameGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  GUIParticle *pGVar4;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94fe2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0990);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fe2 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_029c0990;
  pGVar4 = self->ParticlePrefab;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  pGVar4 = UnityEngine_object_Instantiate_142b1bc(pGVar4,*(void **)puVar2);
  if ((pGVar4 != (GUIParticle *)0x0) &&
     (pvVar3 = (void *)NativeHelper_0260e1a8(pGVar4,0), pvVar3 != (void *)0x0)) {
    UnityEngine_Transform_set_parent_2516ee0(pvVar3,self->GUIParticleRoot,(void *)0x0);
    pvVar3 = (void *)NativeHelper_0260e1a8(pGVar4,0);
    if (cRam0000000002b94510 == '\0') {
      NativeHelper_011df0b4(PTR_DAT_029b9368);
      cRam0000000002b94510 = '\x01';
    }
    if (pvVar3 != (void *)0x0) {
      UnityEngine_Transform_set_localPosition_2515ec4
                (pvVar3,**(Recovered_Vector3 **)(*(long *)PTR_DAT_029b9368 + 0xb8),(void *)0x0);
      GUIParticle_Setup_12e7ed0(pGVar4,runtimeMethod_00);
      return pGVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

