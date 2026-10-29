// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool CanTurnRight(PathDirection origin) { }
// Ghidra address: 0140f808; ELF VA: 0x130f808; file offset: 0x130b808
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool PathElement_CanTurnRight_130b808(PathElement *self,int origin,void *runtimeMethod)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = PathElement_IsTurn_130b174(self,(void *)(ulong)(uint)origin);
  if (bVar1) {
    switch(origin) {
    case 1:
      uVar2 = self->Type - 5;
      if (uVar2 < 5) {
        return (uVar2 & 1) == 0;
      }
      break;
    case 2:
      uVar2 = self->Type - 6;
      if (uVar2 < 4) {
        uVar2 = uVar2 & 0xf;
        uVar3 = 0xd;
code_r0x0140f8a8:
        return (bool)((byte)(uVar3 >> (ulong)(uVar2 & 0x1f)) & 1);
      }
      break;
    case 3:
      uVar2 = self->Type - 4;
      if (uVar2 < 7) {
        uVar3 = 0x51;
        goto code_r0x0140f8a8;
      }
      break;
    case 4:
      uVar2 = self->Type - 3;
      if (uVar2 < 8) {
        uVar3 = 0x91;
        goto code_r0x0140f8a8;
      }
    }
  }
  return false;
}

