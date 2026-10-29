// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetInvincibilityTexture() { }
// Ghidra address: 013c26e0; ELF VA: 0x12c26e0; file offset: 0x12be6e0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_SetInvincibilityTexture_12be6e0(CharacterPlayer *self,void *runtimeMethod)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  Recovered_Color value;
  Recovered_Color value_00;
  Recovered_Color value_01;
  Recovered_Color value_02;
  
  pvVar9 = self->RenderObject;
  if (pvVar9 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) goto LAB_013c27f4;
        pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
        if ((pvVar7 == (void *)0x0) ||
           (pvVar6 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
           pvVar6 == (void *)0x0)) goto LAB_013c27f0;
        UnityEngine_Material_set_shader_24f33fc(pvVar6,self->InvincibilityShader,(void *)0x0);
        pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0);
        if (pvVar7 == (void *)0x0) goto LAB_013c27f0;
        UnityEngine_Material_set_mainTexture_24f3818(pvVar7,self->InvincibilityTexture,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar9 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    pvVar9 = self->AttachmentsRenderObjects;
    if (pvVar9 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar9 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
LAB_013c27f4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
          if ((pvVar7 == (void *)0x0) ||
             (pvVar6 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
             pvVar6 == (void *)0x0)) goto LAB_013c27f0;
          UnityEngine_Material_set_shader_24f33fc(pvVar6,self->InvincibilityShader,(void *)0x0);
          pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0);
          if (pvVar7 == (void *)0x0) goto LAB_013c27f0;
          UnityEngine_Material_set_mainTexture_24f3818
                    (pvVar7,self->InvincibilityTexture,(void *)0x0);
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      pvVar9 = self->RenderObject;
      if (self->ColorDebugging == false) {
        if (pvVar9 != (void *)0x0) {
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) goto LAB_013c0c68;
              pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
              if ((pvVar7 == (void *)0x0) ||
                 (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
                 pvVar7 == (void *)0x0)) goto LAB_013c0c64;
              value_01.component2 = 1.0;
              value_01.component3 = 0.5;
              value_01.component0 = 1.0;
              value_01.component1 = 1.0;
              UnityEngine_Material_set_color_24f3560(pvVar7,value_01,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar9 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          pvVar9 = self->AttachmentsRenderObjects;
          if (pvVar9 != (void *)0x0) {
            uVar1 = *(uint *)((long)pvVar9 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar8 = 0;
            while (uVar8 < uVar1) {
              pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
              if ((pvVar7 == (void *)0x0) ||
                 (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
                 pvVar7 == (void *)0x0)) goto LAB_013c0c64;
              value_02.component2 = 1.0;
              value_02.component3 = 0.5;
              value_02.component0 = 1.0;
              value_02.component1 = 1.0;
              UnityEngine_Material_set_color_24f3560(pvVar7,value_02,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar9 + 0x18);
              uVar8 = uVar8 + 1;
              if ((int)uVar1 <= (int)uVar8) {
                return;
              }
            }
LAB_013c0c68:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
        }
      }
      else if (pvVar9 != (void *)0x0) {
        uVar1 = *(uint *)((long)pvVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar8 = 0;
          do {
            if (uVar1 <= uVar8) goto LAB_013c0c68;
            pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
            if ((pvVar7 == (void *)0x0) ||
               (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
               pvVar7 == (void *)0x0)) goto LAB_013c0c64;
            value.component2 = (self->debugColor).component2;
            uVar2 = (self->debugColor).component0;
            uVar3 = (self->debugColor).component1;
            value.component1 = (float)uVar3;
            value.component0 = (float)uVar2;
            value.component3 = 0.5;
            UnityEngine_Material_set_color_24f3560(pvVar7,value,(void *)0x0);
            uVar1 = *(uint *)((long)pvVar9 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar1);
        }
        pvVar9 = self->AttachmentsRenderObjects;
        if (pvVar9 != (void *)0x0) {
          uVar1 = *(uint *)((long)pvVar9 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) goto LAB_013c0c68;
              pvVar7 = *(void **)((long)pvVar9 + (long)(int)uVar8 * 8 + 0x20);
              if ((pvVar7 == (void *)0x0) ||
                 (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar7,(void *)0x0),
                 pvVar7 == (void *)0x0)) goto LAB_013c0c64;
              value_00.component2 = (self->debugColor).component2;
              uVar4 = (self->debugColor).component0;
              uVar5 = (self->debugColor).component1;
              value_00.component1 = (float)uVar5;
              value_00.component0 = (float)uVar4;
              value_00.component3 = 0.5;
              UnityEngine_Material_set_color_24f3560(pvVar7,value_00,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar9 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
          return;
        }
      }
LAB_013c0c64:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
LAB_013c27f0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

