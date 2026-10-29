// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetRendering(bool enable) { }
// Ghidra address: 01414f3c; ELF VA: 0x1314f3c; file offset: 0x1310f3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_SetRendering_1310f3c(PathElement *self,bool enable,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b95105 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029be110);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b95105 = 1;
  }
  pvVar11 = *(void **)&self->field_0x28;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(pvVar11,(void *)0x0,(void *)0x0);
  if (((!bVar2) || (self->MyRenderers == (void *)0x0)) ||
     (*(long *)((long)self->MyRenderers + 0x18) == 0)) {
    return;
  }
  uVar12 = *(undefined8 *)&self->field_0x28;
  uVar5 = NativeHelper_025ecf68(0);
  bVar3 = NativeHelper_0142a610(uVar12,uVar5,0);
  bVar2 = (bool)(bVar3 & enable);
  self->IsInView = (bool)(bVar3 & 1);
  if (bVar2 == false) {
    if (*(int *)&self->LastRenderState == 2) {
      return;
    }
  }
  else if (*(int *)&self->LastRenderState == 1) {
    return;
  }
  pvVar11 = self->MyRenderers;
  if (pvVar11 != (void *)0x0) {
    uVar7 = *(uint *)((long)pvVar11 + 0x18);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      do {
        if (uVar7 <= uVar10) goto LAB_01415118;
        pvVar6 = *(void **)((long)pvVar11 + (long)(int)uVar10 * 8 + 0x20);
        if (pvVar6 == (void *)0x0) goto LAB_0141511c;
        UnityEngine_Renderer_set_enabled_24f2aa0(pvVar6,bVar2,(void *)0x0);
        uVar7 = *(uint *)((long)pvVar11 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar7);
    }
    if (bVar2 != false) {
      pvVar11 = (void *)NativeHelper_0260e1e4(self,0);
      Imangi_Utilities_GameObjectHelper_SetActiveRecursively_12318b8(pvVar11,true,(void *)0x0);
      pvVar11 = UnityEngine_Component_GetComponentsInChildren_13cd618
                          (self,*(void **)PTR_DAT_029be110);
      if ((pvVar11 != (void *)0x0) && (0 < (int)*(ulong *)((long)pvVar11 + 0x18))) {
        uVar13 = 0;
        uVar9 = *(ulong *)((long)pvVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar13) {
LAB_01415118:
                    /* WARNING: Subroutine does not return */
            NativeHelper_011df2e4();
          }
          pvVar6 = *(void **)((long)pvVar11 + uVar13 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            NativeHelper_011df1bc();
          }
          bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar6,(void *)0x0,(void *)0x0);
          if (bVar4) {
            if (pvVar6 == (void *)0x0) goto LAB_0141511c;
            UnityEngine_Behaviour_set_enabled_250972c(pvVar6,true,(void *)0x0);
          }
          uVar9 = (ulong)*(uint *)((long)pvVar11 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)((long)pvVar11 + 0x18));
      }
    }
    if (self != (PathElement *)0x0) {
      uVar8 = 1;
      if (bVar2 == false) {
        uVar8 = 2;
      }
      *(undefined4 *)&self->LastRenderState = uVar8;
      return;
    }
  }
LAB_0141511c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

