// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ApplyPlayerTexture() { }
// Ghidra address: 013c184c; ELF VA: 0x12c184c; file offset: 0x12bd84c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterPlayer_ApplyPlayerTexture_12bd84c(CharacterPlayer *self,void *runtimeMethod)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  Recovered_Color value;
  Recovered_Color value_00;
  Recovered_Color value_01;
  Recovered_Color value_02;
  
  if ((bRam0000000002b94e5b & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf808);
    bRam0000000002b94e5b = 1;
  }
  puVar6 = PTR_DAT_029bf808;
  pvVar11 = self->RenderObject;
  if (pvVar11 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar11 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) goto LAB_013c1a10;
        pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
        if ((pvVar9 == (void *)0x0) ||
           (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
           pvVar7 == (void *)0x0)) goto LAB_013c1a0c;
        UnityEngine_Material_set_shader_24f33fc(pvVar7,self->CharacterShader,(void *)0x0);
        pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0);
        if ((self->Textures == (void *)0x0) ||
           (pvVar8 = (void *)NativeHelper_01a2f750
                                       (self->Textures,self->ActiveCharacterId,*(undefined8 *)puVar6
                                       ), pvVar7 == (void *)0x0)) goto LAB_013c1a0c;
        UnityEngine_Material_set_mainTexture_24f3818(pvVar7,pvVar8,(void *)0x0);
        pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0);
        if (pvVar9 == (void *)0x0) goto LAB_013c1a0c;
        UnityEngine_Material_set_mainTextureOffset_24f3abc
                  (pvVar9,(Recovered_Vector2)0x0,(void *)0x0);
        uVar1 = *(uint *)((long)pvVar11 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    pvVar11 = self->AttachmentsRenderObjects;
    if (pvVar11 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
LAB_013c1a10:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
          if ((pvVar9 == (void *)0x0) ||
             (pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
             pvVar7 == (void *)0x0)) goto LAB_013c1a0c;
          UnityEngine_Material_set_shader_24f33fc(pvVar7,self->CharacterShader,(void *)0x0);
          pvVar7 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0);
          if ((self->Textures == (void *)0x0) ||
             (pvVar8 = (void *)NativeHelper_01a2f750
                                         (self->Textures,self->ActiveCharacterId,
                                          *(undefined8 *)puVar6), pvVar7 == (void *)0x0))
          goto LAB_013c1a0c;
          UnityEngine_Material_set_mainTexture_24f3818(pvVar7,pvVar8,(void *)0x0);
          pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0);
          if (pvVar9 == (void *)0x0) goto LAB_013c1a0c;
          UnityEngine_Material_set_mainTextureOffset_24f3abc
                    (pvVar9,(Recovered_Vector2)0x0,(void *)0x0);
          uVar1 = *(uint *)((long)pvVar11 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      pvVar11 = self->RenderObject;
      if (self->ColorDebugging == false) {
        if (pvVar11 != (void *)0x0) {
          uVar1 = *(uint *)((long)pvVar11 + 0x18);
          if (0 < (int)uVar1) {
            uVar10 = 0;
            do {
              if (uVar1 <= uVar10) goto code_r0x013c0c68;
              pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
              if ((pvVar9 == (void *)0x0) ||
                 (pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
                 pvVar9 == (void *)0x0)) goto code_r0x013c0c64;
              value_01.component2 = 1.0;
              value_01.component3 = 1.0;
              value_01.component0 = 1.0;
              value_01.component1 = 1.0;
              UnityEngine_Material_set_color_24f3560(pvVar9,value_01,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar11 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar1);
          }
          pvVar11 = self->AttachmentsRenderObjects;
          if (pvVar11 != (void *)0x0) {
            uVar1 = *(uint *)((long)pvVar11 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar10 = 0;
            while (uVar10 < uVar1) {
              pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
              if ((pvVar9 == (void *)0x0) ||
                 (pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
                 pvVar9 == (void *)0x0)) goto code_r0x013c0c64;
              value_02.component2 = 1.0;
              value_02.component3 = 1.0;
              value_02.component0 = 1.0;
              value_02.component1 = 1.0;
              UnityEngine_Material_set_color_24f3560(pvVar9,value_02,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar11 + 0x18);
              uVar10 = uVar10 + 1;
              if ((int)uVar1 <= (int)uVar10) {
                return;
              }
            }
code_r0x013c0c68:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
        }
      }
      else if (pvVar11 != (void *)0x0) {
        uVar1 = *(uint *)((long)pvVar11 + 0x18);
        if (0 < (int)uVar1) {
          uVar10 = 0;
          do {
            if (uVar1 <= uVar10) goto code_r0x013c0c68;
            pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
            if ((pvVar9 == (void *)0x0) ||
               (pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
               pvVar9 == (void *)0x0)) goto code_r0x013c0c64;
            value.component2 = (self->debugColor).component2;
            uVar2 = (self->debugColor).component0;
            uVar3 = (self->debugColor).component1;
            value.component1 = (float)uVar3;
            value.component0 = (float)uVar2;
            value.component3 = 1.0;
            UnityEngine_Material_set_color_24f3560(pvVar9,value,(void *)0x0);
            uVar1 = *(uint *)((long)pvVar11 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar1);
        }
        pvVar11 = self->AttachmentsRenderObjects;
        if (pvVar11 != (void *)0x0) {
          uVar1 = *(uint *)((long)pvVar11 + 0x18);
          if (0 < (int)uVar1) {
            uVar10 = 0;
            do {
              if (uVar1 <= uVar10) goto code_r0x013c0c68;
              pvVar9 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
              if ((pvVar9 == (void *)0x0) ||
                 (pvVar9 = UnityEngine_Renderer_get_material_24f2d20(pvVar9,(void *)0x0),
                 pvVar9 == (void *)0x0)) goto code_r0x013c0c64;
              value_00.component2 = (self->debugColor).component2;
              uVar4 = (self->debugColor).component0;
              uVar5 = (self->debugColor).component1;
              value_00.component1 = (float)uVar5;
              value_00.component0 = (float)uVar4;
              value_00.component3 = 1.0;
              UnityEngine_Material_set_color_24f3560(pvVar9,value_00,(void *)0x0);
              uVar1 = *(uint *)((long)pvVar11 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar1);
          }
          return;
        }
      }
code_r0x013c0c64:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
  }
LAB_013c1a0c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

