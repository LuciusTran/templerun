// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private DeathTypes TypeFromName(string name) { }
// Ghidra address: 013e9350; ELF VA: 0x12e9350; file offset: 0x12e5350
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * EndGameUI_TypeFromName_12e5350(EndGameUI *self,void *name,void *runtimeMethod)

{
  uint uVar1;
  ulong uVar2;
  
  if ((bRam0000000002b94fcd & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029c0888);
    NativeHelper_011df0b4(PTR_DAT_029c0890);
    NativeHelper_011df0b4(PTR_DAT_029c0898);
    NativeHelper_011df0b4(PTR_DAT_029c08a0);
    NativeHelper_011df0b4(PTR_DAT_029c08a8);
    NativeHelper_011df0b4(PTR_DAT_029c08b0);
    NativeHelper_011df0b4(PTR_DAT_029c08b8);
    NativeHelper_011df0b4(PTR_DAT_029c08c0);
    NativeHelper_011df0b4(PTR_DAT_029c08c8);
    NativeHelper_011df0b4(PTR_DAT_029c08d0);
    bRam0000000002b94fcd = 1;
  }
  uVar1 = _PrivateImplementationDetails__ComputeStringHash_1285718(name,(void *)0x0);
  if (uVar1 < 0x6b8b300b) {
    if (uVar1 < 0x4d70d45a) {
      if (uVar1 == 0x291bcef7) {
        uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08b8,0);
        if ((uVar2 & 1) != 0) {
          return (void *)0x7;
        }
      }
      else if ((uVar1 == 0x4d70d459) &&
              (uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c0898,0),
              (uVar2 & 1) != 0)) {
        return (void *)0x6;
      }
    }
    else if (uVar1 == 0x5098dde5) {
      uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08c0,0);
      if ((uVar2 & 1) != 0) {
        return (void *)0x3;
      }
    }
    else if (uVar1 == 0x5f8152f4) {
      uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08d0,0);
      if ((uVar2 & 1) != 0) {
        return (void *)0x9;
      }
    }
    else if (uVar1 == 0x6b8b300a) {
      NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c0890,0);
    }
  }
  else if (uVar1 < 0x92f13d16) {
    if (uVar1 == 0x92f13d15) {
      uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08b0,0);
      if ((uVar2 & 1) != 0) {
        return (void *)0x8;
      }
    }
    else if ((uVar1 == 0x76e75ad9) &&
            (uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08c8,0), (uVar2 & 1) != 0
            )) {
      return (void *)0x4;
    }
  }
  else if (uVar1 == 0xb6f657d8) {
    uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08a0,0);
    if ((uVar2 & 1) != 0) {
      return (void *)0x2;
    }
  }
  else if (uVar1 == 0xb79d897b) {
    uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c0888,0);
    if ((uVar2 & 1) != 0) {
      return (void *)0x5;
    }
  }
  else if ((uVar1 == 0xe3424399) &&
          (uVar2 = NativeHelper_01e9b79c(name,*(undefined8 *)PTR_DAT_029c08a8,0), (uVar2 & 1) != 0))
  {
    return (void *)0x1;
  }
  return (void *)0x0;
}

