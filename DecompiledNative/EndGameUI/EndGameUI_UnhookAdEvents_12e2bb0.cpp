// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UnhookAdEvents() { }
// Ghidra address: 013e6bb0; ELF VA: 0x12e6bb0; file offset: 0x12e2bb0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void EndGameUI_UnhookAdEvents_12e2bb0(EndGameUI *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  Imangi_Ad_AdManager *x;
  void *pvVar3;
  void *extraout_x1;
  
  if ((bRam0000000002b94fbe & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9740);
    NativeHelper_011df0b4(PTR_DAT_029b9748);
    NativeHelper_011df0b4(PTR_DAT_029b9750);
    NativeHelper_011df0b4(PTR_DAT_029c0718);
    NativeHelper_011df0b4(PTR_DAT_029c0720);
    NativeHelper_011df0b4(PTR_DAT_029c0728);
    NativeHelper_011df0b4(PTR_DAT_029c0730);
    NativeHelper_011df0b4(PTR_DAT_029c0738);
    NativeHelper_011df0b4(PTR_DAT_029c0740);
    NativeHelper_011df0b4(PTR_DAT_029c0748);
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94fbe = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_029b7f98;
  if (self->_HookedAdEvents != false) {
    if (*(int *)(*(long *)PTR_DAT_029b9758 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)PTR_DAT_029b9758,runtimeMethod);
    }
    x = GameController_GetAdManager_128d9a0((void *)0x0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b9750;
    if (bVar2) {
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9750);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029c0718,(void *)0x0);
      if (x == (Imangi_Ad_AdManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_0137e358(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029c0730,(void *)0x0);
      NativeHelper_0137e490(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9748);
      Imangi_Ad_AdManager_AdEventDelegate_StringString_AdEventDelegate_StringString_127d99c
                (pvVar3,self,*(void **)PTR_DAT_029c0728,(void *)0x0);
      NativeHelper_0137e5c8(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029c0740,(void *)0x0);
      NativeHelper_0137e700(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029c0748,(void *)0x0);
      NativeHelper_0137e838(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029c0738,(void *)0x0);
      NativeHelper_0137e970(x,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9740);
      Imangi_Ad_AdManager_AdEventDelegate_StringBool_AdEventDelegate_StringBool_127db18
                (pvVar3,self,*(void **)PTR_DAT_029c0720,(void *)0x0);
      NativeHelper_0137eaa8(x,pvVar3,0);
      self->_HookedAdEvents = false;
    }
  }
  return;
}

