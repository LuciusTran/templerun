// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DrawLine(Vector2 lastPoint, Vector2 nextPoint) { }
// Ghidra address: 01422860; ELF VA: 0x1322860; file offset: 0x131e860
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Region2D_DrawLine_131e860
               (Region2D *self,Recovered_Vector2 lastPoint,Recovered_Vector2 nextPoint,
               void *runtimeMethod)

{
  void *pvVar1;
  Recovered_Vector3 position;
  Recovered_Vector3 position_00;
  
  position.component0 = lastPoint.component0;
  pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar1 != (void *)0x0) {
    position.component1 = self->Height;
    position.component2 = lastPoint.component1;
    UnityEngine_Transform_TransformPoint_2517908(pvVar1,position,(void *)0x0);
    pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
    if (pvVar1 != (void *)0x0) {
      position_00.component1 = self->Height;
      position_00.component0 = nextPoint.component0;
      position_00.component2 = nextPoint.component1;
      UnityEngine_Transform_TransformPoint_2517908(pvVar1,position_00,(void *)0x0);
      if (pcRam0000000002b9c3b8 == (code *)0x0) {
        pcRam0000000002b9c3b8 = (code *)NativeHelper_011df070(&UNK_007a4bbc);
      }
      (*pcRam0000000002b9c3b8)(&stack0xffffffffffffffe0,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

