// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float GetAlpha() { }
// Ghidra address: 013c0c6c; ELF VA: 0x12c0c6c; file offset: 0x12bcc6c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float CharacterPlayer_GetAlpha_12bcc6c(CharacterPlayer *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  float fVar8;
  Recovered_Color RVar9;
  
  if ((bRam0000000002b94e52 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf7e8);
    bRam0000000002b94e52 = 1;
  }
  puVar2 = PTR_DAT_029bf7e8;
  pvVar6 = self->AttachmentsRenderObjects;
  if (pvVar6 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar6 + 0x18);
    if ((int)uVar1 < 1) {
      fVar8 = 0.5;
    }
    else {
      uVar7 = 0;
      fVar8 = 0.5;
      do {
        if (uVar1 <= uVar7) goto LAB_013c0dc0;
        pvVar5 = *(void **)((long)pvVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((pvVar5 == (void *)0x0) ||
           (pvVar4 = UnityEngine_Renderer_get_material_24f2d20(pvVar5,(void *)0x0),
           pvVar4 == (void *)0x0)) goto LAB_013c0dbc;
        bVar3 = UnityEngine_Material_HasProperty_24f3d30(pvVar4,*(void **)puVar2,(void *)0x0);
        if (bVar3) {
          pvVar5 = UnityEngine_Renderer_get_material_24f2d20(pvVar5,(void *)0x0);
          if (pvVar5 == (void *)0x0) goto LAB_013c0dbc;
          RVar9 = UnityEngine_Material_get_color_24f3440(pvVar5,(void *)0x0);
          fVar8 = RVar9.component3;
        }
        uVar1 = *(uint *)((long)pvVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    pvVar6 = self->RenderObject;
    if (pvVar6 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
LAB_013c0dc0:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar5 = *(void **)((long)pvVar6 + (long)(int)uVar7 * 8 + 0x20);
          if ((pvVar5 == (void *)0x0) ||
             (pvVar4 = UnityEngine_Renderer_get_material_24f2d20(pvVar5,(void *)0x0),
             pvVar4 == (void *)0x0)) goto LAB_013c0dbc;
          bVar3 = UnityEngine_Material_HasProperty_24f3d30(pvVar4,*(void **)puVar2,(void *)0x0);
          if (bVar3) {
            pvVar5 = UnityEngine_Renderer_get_material_24f2d20(pvVar5,(void *)0x0);
            if (pvVar5 == (void *)0x0) goto LAB_013c0dbc;
            RVar9 = UnityEngine_Material_get_color_24f3440(pvVar5,(void *)0x0);
            fVar8 = RVar9.component3;
          }
          uVar1 = *(uint *)((long)pvVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      return fVar8;
    }
  }
LAB_013c0dbc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

