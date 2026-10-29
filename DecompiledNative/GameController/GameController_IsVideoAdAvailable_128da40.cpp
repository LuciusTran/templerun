// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static bool IsVideoAdAvailable() { }
// Ghidra address: 01391a40; ELF VA: 0x1291a40; file offset: 0x128da40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_IsVideoAdAvailable_128da40(void *runtimeMethod)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  Imangi_Ad_AdManager *self;
  void *inEventName;
  void *inLocation;
  long lVar8;
  void *pvVar9;
  
  puVar4 = PTR_DAT_029b9758;
  if ((bRam0000000002b94cdf & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029b9758);
    NativeHelper_011df0b4(PTR_DAT_029b7f98);
    NativeHelper_011df0b4(PTR_DAT_029b9680);
    NativeHelper_011df0b4(PTR_DAT_029bddf8);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029bde00);
    bRam0000000002b94cdf = 1;
  }
  puVar3 = PTR_DAT_029b7f98;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar4;
  }
  lVar8 = *(long *)puVar3;
  pvVar9 = (void *)**(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    NativeHelper_011df1bc(lVar8);
  }
  bVar5 = UnityEngine_object_op_Inequality_250c8e4(pvVar9,(void *)0x0,(void *)0x0);
  pvVar9 = (void *)(ulong)bVar5;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    pvVar9 = (void *)NativeHelper_011df1bc(*(long *)puVar4);
    if (!bVar5) goto LAB_01391c34;
LAB_01391b0c:
    self = GameController_GetAdManager_128d9a0(pvVar9);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar7);
    }
    bVar5 = UnityEngine_object_op_Inequality_250c8e4(self,(void *)0x0,(void *)0x0);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      NativeHelper_011df1bc(lVar7);
      lVar7 = *(long *)puVar4;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_01391cc8;
    if (bVar5) {
      if (self == (Imangi_Ad_AdManager *)0x0) goto LAB_01391cc8;
      cVar2 = *(char *)(lVar7 + 0x21d);
      bVar6 = (**(code **)(*(long *)self + 0x2d8))
                        (self,0,*(undefined8 *)PTR_DAT_029b9680,
                         *(undefined8 *)(*(long *)self + 0x2e0));
      *(byte *)(lVar7 + 0x21d) = bVar6 & 1;
      lVar7 = *(long *)puVar4;
      lVar8 = **(long **)(lVar7 + 0xb8);
      if (lVar8 == 0) goto LAB_01391cc8;
      if (*(char *)(lVar8 + 0x21e) == '\0') {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar7 = *(long *)puVar4;
          lVar8 = **(long **)(lVar7 + 0xb8);
          if (lVar8 == 0) goto LAB_01391cc8;
        }
        if (cVar2 == *(char *)(lVar8 + 0x21d)) goto LAB_01391c94;
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar7 = *(long *)puVar4;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_01391cc8;
      *(undefined1 *)(lVar7 + 0x21e) = 0;
      uVar1 = *(uint *)&self->ActiveService;
      if (*(char *)(lVar7 + 0x21d) == '\0') {
        pvVar9 = Imangi_Ad_AdManager_GetLastAdLoadError_127d544(self,(void *)0x0,(void *)0x0);
        pvVar9 = TRAnalyticsHelper_SanitizeEventAttributeLength_12b997c(pvVar9,(void *)0x0);
        inEventName = *(void **)PTR_DAT_029bddf8;
        inLocation = *(void **)PTR_DAT_029b8618;
      }
      else {
        inEventName = *(void **)PTR_DAT_029bde00;
        inLocation = *(void **)PTR_DAT_029b8618;
        pvVar9 = inLocation;
      }
      TRAnalyticsHelper_LogVideoAd_12b949c
                ((void *)(ulong)uVar1,inEventName,inLocation,pvVar9,(void *)0x0);
    }
    else {
      *(undefined1 *)(lVar7 + 0x21d) = 0;
    }
  }
  else {
    if (bVar5) goto LAB_01391b0c;
LAB_01391c34:
    if (**(long **)(*(long *)puVar4 + 0xb8) == 0) goto LAB_01391cc8;
    *(undefined1 *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x21d) = 0;
  }
LAB_01391c94:
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    NativeHelper_011df1bc();
    lVar7 = *(long *)puVar4;
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    return (bool)*(undefined1 *)(**(long **)(lVar7 + 0xb8) + 0x21d);
  }
LAB_01391cc8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2dc();
}

