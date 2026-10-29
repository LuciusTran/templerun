// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmos() { }
// Ghidra address: 013c2a94; ELF VA: 0x12c2a94; file offset: 0x12bea94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterPlayer_OnDrawGizmos_12bea94(CharacterPlayer *self,void *runtimeMethod)

{
  Recovered_Color value;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  value.component1 = (float)_UNK_007a3b98;
  value.component0 = 1.0;
  value.component3 = 1.0;
  value.component2 = (float)_UNK_007a3be0;
  UnityEngine_Gizmos_set_color_24f05e0(value,(void *)0x0);
  (**(code **)(*(long *)self + 0x198))(&uStack_28,self,*(undefined8 *)(*(long *)self + 0x1a0));
  NativeHelper_025f454c
            (uStack_28,uStack_24,uStack_20,fStack_1c + fStack_1c,fStack_18 + fStack_18,
             fStack_14 + fStack_14,0);
  return;
}

