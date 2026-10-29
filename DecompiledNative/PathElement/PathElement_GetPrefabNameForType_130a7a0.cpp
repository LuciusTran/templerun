// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static string GetPrefabNameForType(PathType type, PathLevel level) { }
// Ghidra address: 0140e7a0; ELF VA: 0x130e7a0; file offset: 0x130a7a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * PathElement_GetPrefabNameForType_130a7a0(int type,int level,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  bool bVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  if ((bRam0000000002b950f1 & 1) == 0) {
    NativeHelper_011df0b4(PTR_DAT_029bde80);
    NativeHelper_011df0b4(PTR_DAT_029c1b38);
    NativeHelper_011df0b4(PTR_DAT_029c1b40);
    NativeHelper_011df0b4(PTR_DAT_029c1b48);
    NativeHelper_011df0b4(PTR_DAT_029c1b50);
    NativeHelper_011df0b4(PTR_DAT_029c1b58);
    NativeHelper_011df0b4(PTR_DAT_029c1b60);
    NativeHelper_011df0b4(PTR_DAT_029c1b68);
    NativeHelper_011df0b4(PTR_DAT_029c1b70);
    NativeHelper_011df0b4(PTR_DAT_029c1b78);
    NativeHelper_011df0b4(PTR_DAT_029c1b80);
    NativeHelper_011df0b4(PTR_DAT_029c1b88);
    NativeHelper_011df0b4(PTR_DAT_029c1b90);
    NativeHelper_011df0b4(PTR_DAT_029c1b98);
    NativeHelper_011df0b4(PTR_DAT_029c1ba0);
    NativeHelper_011df0b4(PTR_DAT_029c1ba8);
    NativeHelper_011df0b4(PTR_DAT_029c1bb0);
    NativeHelper_011df0b4(PTR_DAT_029c1bb8);
    NativeHelper_011df0b4(PTR_DAT_029c1bc0);
    NativeHelper_011df0b4(PTR_DAT_029c1bc8);
    NativeHelper_011df0b4(PTR_DAT_029c1bd0);
    NativeHelper_011df0b4(PTR_DAT_029c1bd8);
    NativeHelper_011df0b4(PTR_DAT_029c1be0);
    NativeHelper_011df0b4(PTR_DAT_029c1be8);
    NativeHelper_011df0b4(PTR_DAT_029c1bf0);
    NativeHelper_011df0b4(PTR_DAT_029c1bf8);
    NativeHelper_011df0b4(PTR_DAT_029c1c00);
    NativeHelper_011df0b4(PTR_DAT_029c1c08);
    NativeHelper_011df0b4(PTR_DAT_029c1c10);
    NativeHelper_011df0b4(PTR_DAT_029c1c18);
    NativeHelper_011df0b4(PTR_DAT_029c1c20);
    NativeHelper_011df0b4(PTR_DAT_029c1c28);
    NativeHelper_011df0b4(PTR_DAT_029c1c30);
    NativeHelper_011df0b4(PTR_DAT_029c1c38);
    NativeHelper_011df0b4(PTR_DAT_029c1c40);
    NativeHelper_011df0b4(PTR_DAT_029c1c48);
    NativeHelper_011df0b4(PTR_DAT_029c1c50);
    NativeHelper_011df0b4(PTR_DAT_029c1c58);
    NativeHelper_011df0b4(PTR_DAT_029c1c60);
    NativeHelper_011df0b4(PTR_DAT_029c1c68);
    NativeHelper_011df0b4(PTR_DAT_029c1c70);
    NativeHelper_011df0b4(PTR_DAT_029c1c78);
    NativeHelper_011df0b4(PTR_DAT_029c1c80);
    NativeHelper_011df0b4(PTR_DAT_029c1c88);
    NativeHelper_011df0b4(PTR_DAT_029c1c90);
    NativeHelper_011df0b4(PTR_DAT_029c1c98);
    NativeHelper_011df0b4(PTR_DAT_029c1ca0);
    NativeHelper_011df0b4(PTR_DAT_029c1ca8);
    NativeHelper_011df0b4(PTR_DAT_029c1cb0);
    NativeHelper_011df0b4(PTR_DAT_029c1cb8);
    NativeHelper_011df0b4(PTR_DAT_029c1cc0);
    NativeHelper_011df0b4(PTR_DAT_029c1cc8);
    NativeHelper_011df0b4(PTR_DAT_029c1cd0);
    NativeHelper_011df0b4(PTR_DAT_029c1cd8);
    NativeHelper_011df0b4(PTR_DAT_029c1ce0);
    NativeHelper_011df0b4(PTR_DAT_029c1ce8);
    NativeHelper_011df0b4(PTR_DAT_029c1cf0);
    NativeHelper_011df0b4(PTR_DAT_029c1cf8);
    NativeHelper_011df0b4(PTR_DAT_029c1d00);
    NativeHelper_011df0b4(PTR_DAT_029c1d08);
    NativeHelper_011df0b4(PTR_DAT_029c1d10);
    NativeHelper_011df0b4(PTR_DAT_029c1d18);
    NativeHelper_011df0b4(PTR_DAT_029c1d20);
    NativeHelper_011df0b4(PTR_DAT_029c1d28);
    NativeHelper_011df0b4(PTR_DAT_029c1d30);
    NativeHelper_011df0b4(PTR_DAT_029c1d38);
    NativeHelper_011df0b4(PTR_DAT_029b8618);
    NativeHelper_011df0b4(PTR_DAT_029c1d40);
    NativeHelper_011df0b4(PTR_DAT_029c1d48);
    NativeHelper_011df0b4(PTR_DAT_029c1d50);
    NativeHelper_011df0b4(PTR_DAT_029c1d58);
    NativeHelper_011df0b4(PTR_DAT_029c1d60);
    NativeHelper_011df0b4(PTR_DAT_029c1d68);
    NativeHelper_011df0b4(PTR_DAT_029c1d70);
    NativeHelper_011df0b4(PTR_DAT_029c1d78);
    NativeHelper_011df0b4(PTR_DAT_029c1d80);
    NativeHelper_011df0b4(PTR_DAT_029c1d88);
    NativeHelper_011df0b4(PTR_DAT_029c1d90);
    NativeHelper_011df0b4(PTR_DAT_029c1d98);
    bRam0000000002b950f1 = 1;
  }
  if (level == 3) {
    switch(type) {
    case 1:
      puVar9 = (undefined8 *)PTR_DAT_029c1d38;
      break;
    case 2:
      puVar9 = (undefined8 *)PTR_DAT_029c1bc0;
      break;
    case 3:
      puVar9 = (undefined8 *)PTR_DAT_029c1ca0;
      break;
    case 4:
      puVar9 = (undefined8 *)PTR_DAT_029c1ba8;
      break;
    case 5:
      puVar9 = (undefined8 *)PTR_DAT_029c1cd0;
      break;
    case 6:
      puVar9 = (undefined8 *)PTR_DAT_029c1b90;
      break;
    case 7:
      puVar9 = (undefined8 *)PTR_DAT_029c1d68;
      break;
    case 8:
      puVar9 = (undefined8 *)PTR_DAT_029c1b48;
      break;
    case 9:
      puVar9 = (undefined8 *)PTR_DAT_029c1b78;
      break;
    case 10:
      puVar9 = (undefined8 *)PTR_DAT_029c1cc0;
      break;
    default:
      goto LAB_0140ebe4;
    case 0xc:
    case 0x23:
      puVar9 = (undefined8 *)PTR_DAT_029c1c18;
      break;
    case 0xd:
    case 0x24:
      puVar9 = (undefined8 *)PTR_DAT_029c1c28;
      break;
    case 0xf:
    case 0x21:
      puVar9 = (undefined8 *)PTR_DAT_029c1d90;
      break;
    case 0x10:
    case 0x22:
      puVar9 = (undefined8 *)PTR_DAT_029c1b68;
    }
    goto code_r0x0140ebec;
  }
  if (level == 2) {
    switch(type) {
    case 1:
      iVar2 = UnityEngine_Random_Range_2507f84(0,0x14,(void *)0x0);
      puVar1 = PTR_DAT_029bde80;
      if (iVar2 == 0) {
        lVar3 = *(long *)PTR_DAT_029bde80;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar3 = *(long *)puVar1;
        }
        puVar9 = (undefined8 *)PTR_DAT_029c1c70;
        if (*(char *)(*(long *)(lVar3 + 0xb8) + 6) != '\0') break;
      }
      iVar2 = UnityEngine_Random_Range_2507f84(0,10,(void *)0x0);
      puVar1 = PTR_DAT_029bde80;
      puVar9 = (undefined8 *)PTR_DAT_029c1ce0;
      if (iVar2 < 6) break;
      lVar3 = *(long *)PTR_DAT_029bde80;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar3 = *(long *)puVar1;
      }
      puVar9 = (undefined8 *)PTR_DAT_029c1ce0;
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 6) == '\0') break;
      switch(iVar2) {
      case 6:
        puVar9 = (undefined8 *)PTR_DAT_029c1bf0;
        break;
      case 7:
        puVar9 = (undefined8 *)PTR_DAT_029c1b58;
        break;
      case 8:
        puVar9 = (undefined8 *)PTR_DAT_029c1c60;
        break;
      case 9:
        puVar9 = (undefined8 *)PTR_DAT_029c1d48;
        break;
      default:
        goto LAB_0140ebe4;
      }
      break;
    case 2:
      iVar2 = UnityEngine_Random_Range_2507f84(0,0x14,(void *)0x0);
      puVar1 = PTR_DAT_029bde80;
      if (iVar2 == 0) {
        lVar3 = *(long *)PTR_DAT_029bde80;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          NativeHelper_011df1bc();
          lVar3 = *(long *)puVar1;
        }
        puVar9 = (undefined8 *)PTR_DAT_029c1d18;
        if (*(char *)(*(long *)(lVar3 + 0xb8) + 6) != '\0') break;
      }
      iVar2 = UnityEngine_Random_Range_2507f84(0,10,(void *)0x0);
      puVar1 = PTR_DAT_029bde80;
      puVar9 = (undefined8 *)PTR_DAT_029c1bb8;
      if (iVar2 < 6) break;
      lVar3 = *(long *)PTR_DAT_029bde80;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        NativeHelper_011df1bc();
        lVar3 = *(long *)puVar1;
      }
      puVar9 = (undefined8 *)PTR_DAT_029c1bb8;
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 6) == '\0') break;
      switch(iVar2) {
      case 6:
        puVar9 = (undefined8 *)PTR_DAT_029c1c78;
        break;
      case 7:
        puVar9 = (undefined8 *)PTR_DAT_029c1c38;
        break;
      case 8:
        puVar9 = (undefined8 *)PTR_DAT_029c1d88;
        break;
      case 9:
        puVar9 = (undefined8 *)PTR_DAT_029c1c88;
        break;
      default:
        goto LAB_0140ebe4;
      }
      break;
    case 3:
      puVar9 = (undefined8 *)PTR_DAT_029c1b70;
      break;
    case 4:
      puVar9 = (undefined8 *)PTR_DAT_029c1c98;
      break;
    case 5:
      puVar9 = (undefined8 *)PTR_DAT_029c1c20;
      break;
    case 6:
      puVar9 = (undefined8 *)PTR_DAT_029c1ce8;
      break;
    case 7:
      puVar9 = (undefined8 *)PTR_DAT_029c1c30;
      break;
    case 8:
      puVar9 = (undefined8 *)PTR_DAT_029c1c58;
      break;
    case 9:
      puVar9 = (undefined8 *)PTR_DAT_029c1cb0;
      break;
    case 10:
      puVar9 = (undefined8 *)PTR_DAT_029c1cf0;
      break;
    case 0xb:
      puVar9 = (undefined8 *)PTR_DAT_029c1c50;
      break;
    case 0xc:
      puVar9 = (undefined8 *)PTR_DAT_029c1ba0;
      break;
    case 0xd:
      puVar9 = (undefined8 *)PTR_DAT_029c1d80;
      break;
    case 0xe:
      puVar9 = (undefined8 *)PTR_DAT_029c1b38;
      break;
    case 0xf:
      puVar9 = (undefined8 *)PTR_DAT_029c1c10;
      break;
    case 0x10:
      puVar9 = (undefined8 *)PTR_DAT_029c1c08;
      break;
    case 0x11:
      if (*(int *)(*(long *)PTR_DAT_029bde80 + 0xe0) == 0) {
        NativeHelper_011df1bc();
      }
      iVar2 = UnityEngine_Random_Range_2507f84(0,2,(void *)0x0);
      puVar9 = (undefined8 *)PTR_DAT_029c1b50;
      if (iVar2 != 0) {
        puVar9 = (undefined8 *)PTR_DAT_029c1be8;
      }
      break;
    case 0x12:
      puVar9 = (undefined8 *)PTR_DAT_029c1bd8;
      break;
    case 0x13:
      puVar9 = (undefined8 *)PTR_DAT_029c1c80;
      break;
    case 0x14:
      puVar9 = (undefined8 *)PTR_DAT_029c1be0;
      break;
    case 0x15:
      puVar9 = (undefined8 *)PTR_DAT_029c1b88;
      break;
    case 0x16:
      puVar9 = (undefined8 *)PTR_DAT_029c1bc8;
      break;
    case 0x17:
      puVar9 = (undefined8 *)PTR_DAT_029c1d60;
      break;
    case 0x18:
      puVar9 = (undefined8 *)PTR_DAT_029c1cd8;
      break;
    case 0x19:
      puVar9 = (undefined8 *)PTR_DAT_029c1bb0;
      break;
    case 0x1a:
      puVar9 = (undefined8 *)PTR_DAT_029c1bd0;
      break;
    case 0x1b:
      puVar9 = (undefined8 *)PTR_DAT_029c1d78;
      break;
    case 0x1c:
      puVar9 = (undefined8 *)PTR_DAT_029c1c40;
      break;
    case 0x1d:
      puVar9 = (undefined8 *)PTR_DAT_029c1d00;
      break;
    case 0x1e:
      puVar9 = (undefined8 *)PTR_DAT_029c1cc8;
      break;
    case 0x1f:
      puVar9 = (undefined8 *)PTR_DAT_029c1d98;
      break;
    case 0x20:
      puVar9 = (undefined8 *)PTR_DAT_029c1c68;
      break;
    case 0x21:
      puVar9 = (undefined8 *)PTR_DAT_029c1b60;
      break;
    case 0x22:
      puVar9 = (undefined8 *)PTR_DAT_029c1d10;
      break;
    case 0x23:
      puVar9 = (undefined8 *)PTR_DAT_029c1d30;
      break;
    case 0x24:
      puVar9 = (undefined8 *)PTR_DAT_029c1c48;
      break;
    case 0x25:
      pvVar4 = TimedCelebrationEvents_get_ActiveTemplePrefabPrefix_1322bd4((void *)0x0);
      pvVar10 = *(void **)PTR_DAT_029c1c90;
      pvVar7 = *(void **)PTR_DAT_029c1cb8;
      pvVar6 = pvVar4;
      pvVar5 = pvVar7;
      if (((((pvVar10 != (void *)0x0) && (*(int *)((long)pvVar10 + 0x10) != 0)) &&
           (pvVar6 = pvVar10, pvVar4 != (void *)0x0)) &&
          ((*(int *)((long)pvVar4 + 0x10) != 0 && (pvVar5 = pvVar4, pvVar7 != (void *)0x0)))) &&
         (*(int *)((long)pvVar7 + 0x10) != 0)) {
        pvVar5 = (void *)func_0x0121a36c(*(int *)((long)pvVar4 + 0x10) +
                                         *(int *)((long)pvVar10 + 0x10) +
                                         *(int *)((long)pvVar7 + 0x10));
        func_0x01e9bb3c(pvVar5,0,pvVar10);
        func_0x01e9bb3c(pvVar5,*(undefined4 *)((long)pvVar10 + 0x10),pvVar4);
        func_0x01e9bb3c(pvVar5,*(int *)((long)pvVar4 + 0x10) + *(int *)((long)pvVar10 + 0x10),pvVar7
                       );
        return pvVar5;
      }
      if ((bRam0000000002b97691 & 1) == 0) {
        NativeHelper_011df0b4(PTR_DAT_029b8710,pvVar5,pvVar7,0);
        bRam0000000002b97691 = 1;
      }
      if ((pvVar6 == (void *)0x0) || (*(int *)((long)pvVar6 + 0x10) == 0)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
        pvVar5 = pvVar6;
        if (bVar8) {
          pvVar5 = (void *)**(undefined8 **)(*(long *)PTR_DAT_029b8710 + 0xb8);
        }
      }
      else if (!bVar8) {
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_011df2dc();
        }
        iVar2 = *(int *)((long)pvVar6 + 0x10);
        pvVar4 = (void *)func_0x0121a36c(*(int *)((long)pvVar5 + 0x10) + iVar2);
        func_0x01e9bb3c(pvVar4,0,pvVar6);
        func_0x01e9bb3c(pvVar4,iVar2,pvVar5);
        pvVar5 = pvVar4;
      }
      return pvVar5;
    default:
      goto LAB_0140ebe4;
    }
    goto code_r0x0140ebec;
  }
  if (level == 1) {
    switch(type) {
    case 1:
      puVar9 = (undefined8 *)PTR_DAT_029c1d70;
      break;
    case 2:
      puVar9 = (undefined8 *)PTR_DAT_029c1d50;
      break;
    case 3:
      puVar9 = (undefined8 *)PTR_DAT_029c1d40;
      break;
    case 4:
      puVar9 = (undefined8 *)PTR_DAT_029c1bf8;
      break;
    case 5:
      puVar9 = (undefined8 *)PTR_DAT_029c1d08;
      break;
    case 6:
      puVar9 = (undefined8 *)PTR_DAT_029c1d20;
      break;
    case 7:
      puVar9 = (undefined8 *)PTR_DAT_029c1c00;
      break;
    case 8:
      puVar9 = (undefined8 *)PTR_DAT_029c1d58;
      break;
    case 9:
      puVar9 = (undefined8 *)PTR_DAT_029c1b40;
      break;
    case 10:
      puVar9 = (undefined8 *)PTR_DAT_029c1d28;
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      puVar9 = (undefined8 *)PTR_DAT_029c1b98;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
      puVar9 = (undefined8 *)PTR_DAT_029c1b80;
      break;
    default:
      goto LAB_0140ebe4;
    case 0x1f:
      puVar9 = (undefined8 *)PTR_DAT_029c1cf8;
      break;
    case 0x20:
      puVar9 = (undefined8 *)PTR_DAT_029c1ca8;
    }
  }
  else {
LAB_0140ebe4:
    puVar9 = (undefined8 *)PTR_DAT_029b8618;
  }
code_r0x0140ebec:
  return (void *)*puVar9;
}

