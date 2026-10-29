// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Start() { }
// Ghidra address: 013f940c; ELF VA: 0x12f940c; file offset: 0x12f540c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void OptionsGUI_Start_12f540c(OptionsGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  Recovered_Vector3 RVar7;
  
  puVar2 = PTR_DAT_029c0eb0;
  puVar1 = PTR_DAT_029bdba0;
  if ((bRam0000000002b9503a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdba0);
    NativeHelper_011df0b4(PTR_DAT_029ba1d0);
    NativeHelper_011df0b4(PTR_DAT_029c0eb0);
    bRam0000000002b9503a = 1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar2;
  BasePanel_Start_12df654((BasePanel *)self,(void *)0x0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = self;
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  if (self->Header != (void *)0x0) {
    fVar5 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 4);
    fVar6 = *(float *)(*(long *)(*(long *)PTR_DAT_029ba1d0 + 0xb8) + 0xc);
    pvVar3 = (void *)NativeHelper_02610b98(self->Header,0);
    if (pvVar3 != (void *)0x0) {
      RVar7 = UnityEngine_Transform_get_localPosition_2515e38(pvVar3,(void *)0x0);
      if ((self->Header != (void *)0x0) &&
         (pvVar3 = (void *)NativeHelper_02610b98(self->Header,0), pvVar3 != (void *)0x0)) {
        RVar7.component1 = (fVar5 - fVar6) + RVar7.component1;
        UnityEngine_Transform_set_localPosition_2515ec4(pvVar3,RVar7,(void *)0x0);
        if ((self->Content != (void *)0x0) &&
           (pvVar3 = (void *)NativeHelper_02610b98(self->Content,0), pvVar3 != (void *)0x0)) {
          UnityEngine_Transform_get_localPosition_2515e38(pvVar3,(void *)0x0);
          if ((self->Content != (void *)0x0) &&
             (lVar4 = NativeHelper_02610b98(self->Content,0), lVar4 != 0)) {
            if (pcRam0000000002b9d2c0 == (code *)0x0) {
              pcRam0000000002b9d2c0 = (code *)NativeHelper_011df070(&UNK_007b1453,0);
            }
            (*pcRam0000000002b9d2c0)(lVar4,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

