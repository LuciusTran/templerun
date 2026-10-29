// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected void HookAdEvents(AdManager inAdMngr) { }
// Ghidra address: 01394850; ELF VA: 0x1294850; file offset: 0x1290850
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_HookAdEvents_1290850
               (GameController *self,Imangi_Ad_AdManager *inAdMngr,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((bRam0000000002b94cf2 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9740);
    NativeHelper_011df0b4(PTR_DAT_029b9748);
    NativeHelper_011df0b4(PTR_DAT_029b9750);
    NativeHelper_011df0b4(PTR_DAT_029bdfb8);
    NativeHelper_011df0b4(PTR_DAT_029bdfc0);
    NativeHelper_011df0b4(PTR_DAT_029bdfc8);
    NativeHelper_011df0b4(PTR_DAT_029bdfd0);
    NativeHelper_011df0b4(PTR_DAT_029bdfd8);
    NativeHelper_011df0b4(PTR_DAT_029bdfe0);
    NativeHelper_011df0b4(PTR_DAT_029bdfe8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94cf2 = 1;
  }
  if (self->_VideoAdEventsHooked == false) {
    if (*(int *)(*(long *)PTR_DAT_029b7f98 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar2 = UnityEngine_object_op_Inequality_250c8e4(inAdMngr,(void *)0x0,(void *)0x0);
    puVar1 = PTR_DAT_029b9750;
    if (bVar2) {
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9750);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029bdfb8,(void *)0x0);
      if (inAdMngr == (Imangi_Ad_AdManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_011df2dc();
      }
      NativeHelper_0137e2bc(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029bdfd0,(void *)0x0);
      NativeHelper_0137e3f4(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9748);
      Imangi_Ad_AdManager_AdEventDelegate_StringString_AdEventDelegate_StringString_127d99c
                (pvVar3,self,*(void **)PTR_DAT_029bdfc8,(void *)0x0);
      NativeHelper_0137e52c(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029bdfe0,(void *)0x0);
      NativeHelper_0137e664(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029bdfe8,(void *)0x0);
      NativeHelper_0137e79c(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)puVar1);
      Imangi_Ad_AdManager_AdEventDelegate_String_AdEventDelegate_String_127d834
                (pvVar3,self,*(void **)PTR_DAT_029bdfd8,(void *)0x0);
      NativeHelper_0137e8d4(inAdMngr,pvVar3,0);
      pvVar3 = (void *)NativeHelper_011df2d0(*(undefined8 *)PTR_DAT_029b9740);
      Imangi_Ad_AdManager_AdEventDelegate_StringBool_AdEventDelegate_StringBool_127db18
                (pvVar3,self,*(void **)PTR_DAT_029bdfc0,(void *)0x0);
      NativeHelper_0137ea0c(inAdMngr,pvVar3,0);
      self->_VideoAdEventsHooked = true;
    }
  }
  return;
}

