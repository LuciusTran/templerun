// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmos() { }
// Ghidra address: 013da10c; ELF VA: 0x12da10c; file offset: 0x12d610c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Enemy_OnDrawGizmos_12d610c(Enemy *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  Recovered_Vector3 RVar9;
  Recovered_Color value;
  undefined1 auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uVar6;
  undefined4 uVar8;
  
  if (self->_bIsSelected == false) {
    return;
  }
  if ((bRam0000000002b94f4b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029ba100);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94f4b = 1;
  }
  value.component1 = (float)_UNK_007a3b98;
  value.component0 = 1.0;
  value.component3 = 1.0;
  value.component2 = (float)_UNK_007a3be0;
  uVar8 = 0;
  uVar6 = 0;
  UnityEngine_Gizmos_set_color_24f05e0(value,(void *)0x0);
  pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar4 != (void *)0x0) {
    RVar9 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
    uVar7 = CONCAT44(uVar8,RVar9.component2);
    uVar5 = CONCAT44(uVar6,RVar9.component1);
    NativeHelper_025f44ac(RVar9.component0,uVar5,uVar7,_UNK_007a3c08,0);
    uVar8 = (undefined4)((ulong)uVar7 >> 0x20);
    uVar6 = (undefined4)((ulong)uVar5 >> 0x20);
    pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
    puVar2 = PTR_DAT_029ba100;
    puVar1 = PTR_DAT_029b7f98;
    if (pvVar4 != (void *)0x0) {
      pvVar4 = UnityEngine_Component_GetComponent_13ccba8(pvVar4,*(void **)PTR_DAT_029ba100);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc(*(long *)puVar1);
      }
      bVar3 = UnityEngine_object_op_Inequality_250c8e4(pvVar4,(void *)0x0,(void *)0x0);
      if (!bVar3) {
        return;
      }
      pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
      if (pvVar4 != (void *)0x0) {
        RVar9 = UnityEngine_Transform_get_position_2516710(pvVar4,(void *)0x0);
        pvVar4 = (void *)NativeHelper_0260e1a8(self,0);
        if ((pvVar4 != (void *)0x0) &&
           (pvVar4 = UnityEngine_Component_GetComponent_13ccba8(pvVar4,*(void **)puVar2),
           pvVar4 != (void *)0x0)) {
          NativeHelper_025f6840(auStack_58,pvVar4,0);
          NativeHelper_025f454c
                    (RVar9.component0,CONCAT44(uVar6,RVar9.component1),
                     CONCAT44(uVar8,RVar9.component2),fStack_4c + fStack_4c,fStack_48 + fStack_48,
                     fStack_44 + fStack_44,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

