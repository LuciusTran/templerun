// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Start() { }
// Ghidra address: 013bee54; ELF VA: 0x12bee54; file offset: 0x12bae54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void AudioManager_Start_12bae54(AudioManager *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *x;
  void *extraout_x1;
  int iVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_68;
  
  puVar1 = PTR_DAT_029bdfa0;
  if ((bRam0000000002b94e43 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bdfa0);
    bRam0000000002b94e43 = 1;
    runtimeMethod = extraout_x1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = self;
  if ((bRam0000000002b94e45 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bf6a8,runtimeMethod);
    NativeHelper_011df0b4(PTR_DAT_029bf6b0);
    NativeHelper_011df0b4(PTR_DAT_029bf6b8);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029bf6c0);
    NativeHelper_011df0b4(PTR_DAT_029bf6c8);
    bRam0000000002b94e45 = 1;
  }
  puVar6 = PTR_DAT_029bf6c8;
  puVar5 = PTR_DAT_029bf6c0;
  puVar4 = PTR_DAT_029bf6b8;
  puVar3 = PTR_DAT_029bf6b0;
  puVar2 = PTR_DAT_029bf6a8;
  puVar1 = PTR_DAT_029b7f98;
  iVar10 = 0;
  while( true ) {
    uStack_78 = *(undefined8 *)puVar4;
    uStack_70 = 0xffffffffffffffff;
    iStack_68 = iVar10;
    uVar8 = NativeHelper_02031f7c(&uStack_78,0);
    pvVar9 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar6,uVar8,0);
    x = UnityEngine_Resources_Load_25085b0(pvVar9,(void *)0x0);
    if (x == (long *)0x0) {
      x = (long *)0x0;
    }
    else if (*x != *(long *)puVar2) {
      x = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      NativeHelper_011df1bc();
    }
    bVar7 = UnityEngine_object_op_Equality_250d534(x,(void *)0x0,(void *)0x0);
    if (bVar7) {
      pvVar9 = (void *)NativeHelper_01e92d00(*(undefined8 *)puVar5,pvVar9,0);
      DebugEx_Log_13222f4(pvVar9,(void *)0x0);
      DebugEx_Break_1323c50((void *)0x0);
    }
    if (self->Sounds == (void *)0x0) break;
    NativeHelper_0176905c(self->Sounds,iVar10,x,*(undefined8 *)puVar3);
    iVar10 = iVar10 + 1;
    if (iVar10 == 0x23) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

