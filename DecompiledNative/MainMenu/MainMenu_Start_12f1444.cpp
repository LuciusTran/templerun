// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Start() { }
// Ghidra address: 013f5444; ELF VA: 0x12f5444; file offset: 0x12f1444
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainMenu_Start_12f1444(MainMenu *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_029c0db8;
  puVar1 = PTR_DAT_029b7f80;
  if ((bRam0000000002b95019 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f80);
    NativeHelper_011df0b4(PTR_DAT_029b9920);
    NativeHelper_011df0b4(PTR_DAT_029c0628);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bdbe8);
    NativeHelper_011df0b4(PTR_DAT_029c0db8);
    NativeHelper_011df0b4(PTR_DAT_029c0dc0);
    bRam0000000002b95019 = 1;
    runtimeMethod = extraout_x1;
  }
  *(undefined8 *)&self->field_0x48 = *(undefined8 *)puVar2;
  puVar3 = PTR_DAT_029c0628;
  puVar2 = PTR_DAT_029bdbe8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  NativeHelper_025ea068(0x3c,0);
  pvVar5 = (void *)NativeHelper_025e9ed8(0);
  DebugEx_Log_13222f4(pvVar5,(void *)0x0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = self;
  BasePanel_Start_12df654((BasePanel *)self,(void *)0x0);
  (**(code **)(*(long *)self + 0x198))(self,*(undefined8 *)(*(long *)self + 0x1a0));
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar6 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_029c0dc0;
  puVar2 = PTR_DAT_029b9920;
  puVar1 = PTR_DAT_029b7f98;
  if ((RecordManager *)**(undefined8 **)(lVar6 + 0xb8) != (RecordManager *)0x0) {
    RecordManager_WritePlaceholderFile_12b13bc
              ((RecordManager *)**(undefined8 **)(lVar6 + 0xb8),(void *)0x0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    Imangi_Utilities_ImangiFileSystem_SetFileProviderPath_122e2bc(*(void **)puVar3,(void *)0x0);
    pvVar5 = self->SaveMeDebugPanel;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (self->SaveMeDebugPanel == (void *)0x0) goto LAB_013f562c;
      NativeHelper_02610c54(self->SaveMeDebugPanel,1,0);
    }
    pvVar5 = self->DebugBuildObject;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar4 = UnityEngine_object_op_Inequality_250c8e4(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar4) {
      pvVar5 = self->DebugBuildObject;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      NativeHelper_02614ce0(pvVar5,0);
      self->DebugBuildObject = (void *)0x0;
    }
    return;
  }
LAB_013f562c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

