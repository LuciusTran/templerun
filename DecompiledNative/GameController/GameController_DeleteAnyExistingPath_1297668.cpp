// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DeleteAnyExistingPath() { }
// Ghidra address: 0139b668; ELF VA: 0x129b668; file offset: 0x1297668
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void GameController_DeleteAnyExistingPath_1297668(GameController *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  PathElement *exists;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b94d0a & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b94d0a = 1;
    runtimeMethod = extraout_x1;
  }
  exists = self->PathRoot;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Implicit_2510034(exists,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if (self->PathRoot != (PathElement *)0x0) {
    PathElement_Prune_13102e8(self->PathRoot,0,(void *)0x0);
    if (self->PathRoot != (PathElement *)0x0) {
      DynamicElement_DestroySelf_12d5ce8((DynamicElement *)self->PathRoot,(void *)0x0);
      self->PathRoot = (PathElement *)0x0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

