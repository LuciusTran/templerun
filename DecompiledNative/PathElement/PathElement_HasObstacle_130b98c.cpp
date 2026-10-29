// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool HasObstacle(PathElement node) { }
// Ghidra address: 0140f98c; ELF VA: 0x130f98c; file offset: 0x130b98c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_HasObstacle_130b98c(PathElement *node,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_029b7f98;
  if ((bRam0000000002b950ed & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    bRam0000000002b950ed = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    NativeHelper_011df1bc(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_250c8e4(node,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (node == (PathElement *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    bVar2 = node->HasObstacles != false;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

