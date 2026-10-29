// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool DoesSphereIntersectBoundingBox(Vector3 point, float radius) { }
// Ghidra address: 0140d658; ELF VA: 0x130d658; file offset: 0x1309658
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MovingObject_DoesSphereIntersectBoundingBox_1309658
               (MovingObject *self,Recovered_Vector3 point,float radius,void *runtimeMethod)

{
  float fVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  (**(code **)(*(long *)self + 0x198))(&uStack_68,self,*(undefined8 *)(*(long *)self + 0x1a0));
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  fVar1 = (float)NativeHelper_025f1fa8
                           (point.component0,point.component1,point.component2,&uStack_50,0);
  return fVar1 <= radius * radius;
}

