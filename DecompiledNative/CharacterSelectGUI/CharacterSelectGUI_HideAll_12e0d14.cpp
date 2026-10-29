// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void HideAll() { }
// Ghidra address: 013e4d14; ELF VA: 0x12e4d14; file offset: 0x12e0d14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void CharacterSelectGUI_HideAll_12e0d14(CharacterSelectGUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  Imangi_Ad_AdManager *x;
  
  pvVar3 = (void *)NativeHelper_0260e1e4(self,0);
  Imangi_Utilities_GameObjectHelper_SetActiveRecursively_12318b8(pvVar3,false,(void *)0x0);
  if ((bRam0000000002b94fa2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9748);
    NativeHelper_011df0b4(PTR_DAT_029b9750);
    NativeHelper_011df0b4(PTR_DAT_029b9770);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fa2 = 1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if (self->field_0x41 != '\0') {
    if (*(int *)(*(long *)PTR_DAT_029b9770 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    x = Imangi_Ad_AdManager_GetInstance_1273f6c((void *)0x0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b9750;
    if (bVar2) {
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9750);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)(*(long *)self + 0x1c0),(void *)0x0);
      if (x == (Imangi_Ad_AdManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_0137e700(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9748);
      Imangi_Ad_AdManager_AdEventDelegate_StringString_AdEventDelegate_StringString_127d99c
                (pvVar3,self,*(void **)(*(long *)self + 0x1d0),(void *)0x0);
      NativeHelper_0137e5c8(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)(*(long *)self + 0x1e0),(void *)0x0);
      NativeHelper_0137e358(x,pvVar3,0);
    }
    self->field_0x41 = 0;
  }
  return;
}

