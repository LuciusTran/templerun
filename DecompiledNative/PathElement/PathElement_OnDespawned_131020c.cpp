// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnDespawned() { }
// Ghidra address: 0141420c; ELF VA: 0x131420c; file offset: 0x131020c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void PathElement_OnDespawned_131020c(PathElement *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar3;
  FriendMarker *x;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950fd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950fd = 1;
    runtimeMethod = extraout_x1;
  }
  *(undefined8 *)&self->field_0x28 = 0;
  pvVar3 = self->SafteyNet;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Implicit_2510034(pvVar3,(void *)0x0);
  pvVar3 = extraout_x1_00;
  if (bVar2) {
    pvVar3 = self->SafteyNet;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    NativeHelper_02614ce0(pvVar3,0);
    self->SafteyNet = (void *)0x0;
    pvVar3 = extraout_x1_01;
  }
  PathElement_RemoveAllSubObjects_130b440(self,pvVar3);
  self->PathEast = (PathElement *)0x0;
  self->PathNorth = (PathElement *)0x0;
  self->PathSouth = (PathElement *)0x0;
  self->PathWest = (PathElement *)0x0;
  x = self->LocalFriendMarker;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc();
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->LocalFriendMarker == (FriendMarker *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    FriendMarker_SetPassed_12d6cd8(self->LocalFriendMarker,(void *)0x0);
    self->LocalFriendMarker = (FriendMarker *)0x0;
  }
  return;
}

