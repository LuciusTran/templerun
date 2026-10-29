// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool DoesLineSegementIntersect(Vector2 p1, Vector2 p2) { }
// Ghidra address: 01422d58; ELF VA: 0x1322d58; file offset: 0x131ed58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Region2D_DoesLineSegementIntersect_131ed58
               (Region2D *self,Recovered_Vector2 p1,Recovered_Vector2 p2,void *runtimeMethod)

{
  void *pvVar1;
  Line *line;
  void *in_x2;
  undefined4 uVar2;
  Recovered_Vector2 p1_00;
  Recovered_Vector2 p2_00;
  Recovered_Vector3 RVar3;
  Recovered_Vector3 RVar4;
  Line LStack_50;
  
  if ((bRam0000000002b95198 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c2438);
    bRam0000000002b95198 = 1;
  }
  pvVar1 = (void *)NativeHelper_0260e1a8(self,0);
  if (pvVar1 != (void *)0x0) {
    uVar2 = 0;
    RVar3 = UnityEngine_Transform_InverseTransformPoint_2517a80
                      (pvVar1,p1.component0,0.0,p1.component1,(void *)0x0);
    p1_00.component0 = RVar3.component0;
    pvVar1 = (void *)NativeHelper_0260e1a8(p1_00.component0,CONCAT44(uVar2,RVar3.component1),self,0)
    ;
    if (pvVar1 != (void *)0x0) {
      RVar4 = UnityEngine_Transform_InverseTransformPoint_2517a80
                        (pvVar1,p2.component0,0.0,p2.component1,(void *)0x0);
      LStack_50._0_8_ = 0;
      LStack_50._8_8_ = 0;
      p1_00.component1 = RVar3.component2;
      p2_00.component1 = RVar4.component2;
      p2_00.component0 = RVar4.component0;
      Line_Line_12d8934(&LStack_50,p1_00,p2_00,(void *)0x0);
      if (self->Points != (void *)0x0) {
        line = (Line *)NativeHelper_01a76df8(self->Points,*(undefined8 *)PTR_DAT_029c2438);
        pvVar1 = Geometry_IntersectionOf_12d8ad8(line,(Polygon *)0x0,in_x2);
        return ((uint)pvVar1 & 0xfffffffe) == 2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

