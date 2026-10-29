// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void OnFill(BetterList<Vector3> verts, BetterList<Vector2> uvs, BetterList<Color> cols) { }
// Ghidra address: 013ac15c; ELF VA: 0x12ac15c; file offset: 0x12a815c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void UISprite_OnFill_12a815c(long param_1,long param_2,void *param_3,BetterList *param_4)

{
  undefined *puVar1;
  void *runtimeMethod;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  runtimeMethod = param_3;
  if ((bRam0000000002b94d9a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9fe8);
    NativeHelper_011df0b4(PTR_DAT_029b9ff8);
    NativeHelper_011df0b4(PTR_DAT_029b9fd8);
    bRam0000000002b94d9a = 1;
  }
  puVar1 = PTR_DAT_029b9fd8;
  if (param_2 != 0) {
    fVar8 = *(float *)(param_1 + 0xb8);
    fVar9 = *(float *)(param_1 + 0xbc);
    fVar10 = *(float *)(param_1 + 0xc0);
    fVar11 = *(float *)(param_1 + 0xc4);
    NativeHelper_016a5480(0x3f800000,0,0,param_2,*(undefined8 *)PTR_DAT_029b9fd8);
    NativeHelper_016a5480(0x3f800000,0xbf800000,0,param_2,*(undefined8 *)puVar1);
    NativeHelper_016a5480(0,0xbf800000,0,param_2,*(undefined8 *)puVar1);
    NativeHelper_016a5480(0,0,0,param_2,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_029b9ff8;
    if (param_3 != (void *)0x0) {
      fVar10 = fVar8 + fVar10;
      fVar11 = fVar9 + fVar11;
      NativeHelper_016a4fb0(fVar10,fVar11,param_3,*(undefined8 *)PTR_DAT_029b9ff8);
      NativeHelper_016a4fb0(fVar10,fVar9,param_3,*(undefined8 *)puVar1);
      NativeHelper_016a4fb0(fVar8,fVar9,param_3,*(undefined8 *)puVar1);
      NativeHelper_016a4fb0(fVar8,fVar11,param_3,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_029b9fe8;
      if (param_4 != (BetterList *)0x0) {
        BetterList_Add_15a0654(param_4,*(void **)PTR_DAT_029b9fe8,runtimeMethod);
        BetterList_Add_15a0654(param_4,*(void **)puVar1,runtimeMethod);
        BetterList_Add_15a0654(param_4,*(void **)puVar1,runtimeMethod);
        uVar4 = *(undefined4 *)(param_1 + 0x28);
        uVar5 = *(undefined4 *)(param_1 + 0x2c);
        uVar6 = *(undefined4 *)(param_1 + 0x30);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        lVar2 = *(long *)(param_4 + 1);
        if ((lVar2 == 0) ||
           (uVar3 = *(uint *)&param_4[1].field_0x8, uVar3 == *(uint *)(lVar2 + 0x18))) {
          BetterList_AllocateMore_15a04e0
                    (param_4,*(void **)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x38))
          ;
          uVar3 = *(uint *)&param_4[1].field_0x8;
          lVar2 = *(long *)(param_4 + 1);
          *(uint *)&param_4[1].field_0x8 = uVar3 + 1;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2dc();
          }
        }
        else {
          *(uint *)&param_4[1].field_0x8 = uVar3 + 1;
        }
        if (uVar3 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar3 * 0x10;
          *(undefined4 *)(lVar2 + 0x28) = uVar6;
          *(undefined4 *)(lVar2 + 0x2c) = uVar7;
          *(undefined4 *)(lVar2 + 0x20) = uVar4;
          *(undefined4 *)(lVar2 + 0x24) = uVar5;
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2e4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

