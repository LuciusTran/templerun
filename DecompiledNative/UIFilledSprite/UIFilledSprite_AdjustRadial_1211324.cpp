// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool AdjustRadial(Vector2[] xy, Vector2[] uv, float fill, bool invert) { }
// Ghidra address: 01315324; ELF VA: 0x1215324; file offset: 0x1211324
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x013153d8) */
/* WARNING: Removing unreachable block (ram,0x01315508) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool UIFilledSprite_AdjustRadial_1211324
               (UIFilledSprite *self,void *xy,void *uv,float fill,bool invert,void *runtimeMethod)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fStack_28;
  float fStack_24;
  
  if (fill < _UNK_007a3d38) {
    return false;
  }
  if ((_UNK_007a3d1c < fill) && (!invert)) {
    return true;
  }
  fVar4 = 1.0;
  bVar1 = fill < 0.0;
  if (1.0 < fill) {
    fill = 1.0;
  }
  if (bVar1) {
    fill = 0.0;
  }
  if (!invert) {
    fill = 1.0 - fill;
  }
  NativeHelper_028614e0(fill * _UNK_007a3c60,&fStack_24,&fStack_28);
  if (fStack_24 <= fStack_28) {
    fVar3 = 1.0;
    if (fStack_28 <= fStack_24) {
LAB_013154e8:
      if (xy == (void *)0x0) goto LAB_013155d0;
      uVar2 = *(uint *)((long)xy + 0x18);
      if (uVar2 < 3) goto LAB_013155cc;
      if (!invert) goto LAB_01315554;
    }
    else {
      fVar4 = 1.0;
      fVar3 = fStack_24 * (1.0 / fStack_28);
      if (!invert) goto LAB_013154e8;
      if (xy == (void *)0x0) goto LAB_013155d0;
      if (*(uint *)((long)xy + 0x18) < 3) goto LAB_013155cc;
      bVar1 = fVar3 < 0.0;
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      if (bVar1) {
        fVar3 = 0.0;
      }
      fVar4 = *(float *)((long)xy + 0x30) +
              fVar3 * (*(float *)((long)xy + 0x20) - *(float *)((long)xy + 0x30));
      *(float *)((long)xy + 0x20) = fVar4;
      *(float *)((long)xy + 0x28) = fVar4;
      if (uv == (void *)0x0) goto LAB_013155d0;
      if (*(uint *)((long)uv + 0x18) < 3) goto LAB_013155cc;
      fVar4 = 1.0;
      fVar3 = *(float *)((long)uv + 0x30) +
              fVar3 * (*(float *)((long)uv + 0x20) - *(float *)((long)uv + 0x30));
      *(float *)((long)uv + 0x20) = fVar3;
      *(float *)((long)uv + 0x28) = fVar3;
      if (*(uint *)((long)xy + 0x18) < 3) goto LAB_013155cc;
    }
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    *(float *)((long)xy + 0x2c) =
         *(float *)((long)xy + 0x34) +
         fVar4 * (*(float *)((long)xy + 0x24) - *(float *)((long)xy + 0x34));
    if (uv == (void *)0x0) {
LAB_013155d0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_011df2dc();
    }
    if (2 < *(uint *)((long)uv + 0x18)) {
      *(float *)((long)uv + 0x2c) =
           *(float *)((long)uv + 0x34) +
           fVar4 * (*(float *)((long)uv + 0x24) - *(float *)((long)uv + 0x34));
      return true;
    }
  }
  else {
    fVar3 = 1.0;
    fVar4 = fStack_28 * (1.0 / fStack_24);
    if (invert) goto LAB_013154e8;
    if (xy == (void *)0x0) goto LAB_013155d0;
    if (*(uint *)((long)xy + 0x18) < 3) goto LAB_013155cc;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    fVar3 = *(float *)((long)xy + 0x34) +
            fVar4 * (*(float *)((long)xy + 0x24) - *(float *)((long)xy + 0x34));
    *(float *)((long)xy + 0x24) = fVar3;
    if (*(uint *)((long)xy + 0x18) == 3) goto LAB_013155cc;
    *(float *)((long)xy + 0x3c) = fVar3;
    if (uv == (void *)0x0) goto LAB_013155d0;
    if (*(uint *)((long)uv + 0x18) < 3) goto LAB_013155cc;
    fVar4 = *(float *)((long)uv + 0x34) +
            fVar4 * (*(float *)((long)uv + 0x24) - *(float *)((long)uv + 0x34));
    *(float *)((long)uv + 0x24) = fVar4;
    if (*(uint *)((long)uv + 0x18) == 3) goto LAB_013155cc;
    *(float *)((long)uv + 0x3c) = fVar4;
    uVar2 = *(uint *)((long)xy + 0x18);
    if (uVar2 < 3) goto LAB_013155cc;
    fVar3 = 1.0;
LAB_01315554:
    bVar1 = fVar3 < 0.0;
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if (bVar1) {
      fVar3 = 0.0;
    }
    if (3 < uVar2) {
      *(float *)((long)xy + 0x38) =
           *(float *)((long)xy + 0x30) +
           fVar3 * (*(float *)((long)xy + 0x20) - *(float *)((long)xy + 0x30));
      if (uv == (void *)0x0) goto LAB_013155d0;
      if ((2 < *(uint *)((long)uv + 0x18)) && (*(uint *)((long)uv + 0x18) != 3)) {
        *(float *)((long)uv + 0x38) =
             *(float *)((long)uv + 0x30) +
             fVar3 * (*(float *)((long)uv + 0x20) - *(float *)((long)uv + 0x30));
        return true;
      }
    }
  }
LAB_013155cc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_011df2e4();
}

