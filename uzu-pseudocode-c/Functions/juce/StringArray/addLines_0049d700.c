// Function : addLines
// Namespace: juce:StringArray
// Entry    : 0049d700
// Prototype: undefined addLines(StringArray * this, byte * param_1)
// Body     : 0049d700 - 0049dbce


/* WARNING: Removing unreachable block (ram,0x0049dbbe) */
/* juce::StringArray::addLines(juce::StringRef) */

void __thiscall juce::StringArray::addLines(StringArray *this,byte *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *puVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  size_t __n;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *__src;
  byte *pbVar19;
  ulong uVar20;
  undefined4 *__dest;
  uint uVar21;
  
  if (*param_1 != 0) {
    bVar10 = false;
    __src = param_1;
LAB_0049d780:
    do {
      pbVar18 = param_1;
      param_1 = pbVar18 + 1;
      bVar3 = *pbVar18;
      uVar13 = (uint)bVar3;
      pbVar19 = param_1;
      if (-1 < (char)bVar3) {
joined_r0x0049d790:
        param_1 = pbVar19;
        if (uVar13 != 0) goto LAB_0049d796;
LAB_0049d890:
        bVar10 = true;
        bVar3 = *__src;
        goto joined_r0x0049d978;
      }
      if ((bVar3 & 0x40) != 0) {
        if ((bVar3 & 0x20) == 0) {
          uVar13 = 0x3f;
          lVar16 = 0;
          bVar8 = false;
          bVar9 = false;
        }
        else {
          bVar8 = true;
          if ((bVar3 & 0x10) == 0) {
            uVar13 = 0x1f;
            lVar16 = 1;
            bVar9 = false;
          }
          else {
            uVar13 = 0xf;
            lVar16 = 2;
            bVar9 = true;
          }
        }
        uVar13 = bVar3 & uVar13;
        if ((pbVar18[1] & 0xffffffc0) == 0x80) {
          param_1 = pbVar18 + lVar16 + 2;
          uVar13 = pbVar18[1] & 0x3f | uVar13 << 6;
          pbVar19 = param_1;
          if (bVar8) {
            uVar21 = (uint)pbVar18[2];
            pbVar19 = pbVar18 + 2;
            if ((uVar21 & 0xffffffc0) == 0x80) {
              uVar13 = uVar21 & 0x3f | uVar13 << 6;
              pbVar19 = param_1;
              if (bVar9) {
                uVar21 = (uint)pbVar18[3];
                pbVar19 = pbVar18 + 3;
                if ((uVar21 & 0xffffffc0) == 0x80) {
                  uVar13 = uVar13 << 6 | uVar21 & 0x3f;
                  if (uVar13 == 0) goto LAB_0049d890;
                  goto LAB_0049d796;
                }
              }
            }
          }
        }
        goto joined_r0x0049d790;
      }
      uVar13 = bVar3 & 0x7f;
      if ((bVar3 & 0x7f) == 0) goto LAB_0049d890;
LAB_0049d796:
      pbVar19 = param_1;
      if (uVar13 == 10) {
LAB_0049d990:
        bVar3 = *__src;
        param_1 = pbVar19;
      }
      else {
        if (uVar13 != 0xd) goto LAB_0049d780;
        bVar3 = *param_1;
        uVar13 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            uVar13 = uVar13 & 0x7f;
          }
          else {
            uVar13 = uVar13 & 0x10 ^ 0x1f;
            if ((bVar3 & 0x20) == 0) {
              uVar13 = 0x3f;
            }
            uVar13 = uVar13 & bVar3;
            if (((((param_1[1] & 0xffffffc0) == 0x80) &&
                 (uVar13 = param_1[1] & 0x3f | uVar13 << 6, (bVar3 & 0x20) != 0)) &&
                ((param_1[2] & 0xffffffc0) == 0x80)) &&
               ((uVar13 = param_1[2] & 0x3f | uVar13 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0
                && ((param_1[3] & 0xffffffc0) == 0x80)))) {
              uVar13 = uVar13 << 6 | param_1[3] & 0x3f;
            }
          }
        }
        if (uVar13 != 10) goto LAB_0049d990;
        pbVar19 = param_1 + 1;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) goto LAB_0049d990;
          if ((bVar3 & 0x20) == 0) {
            bVar3 = *__src;
            param_1 = param_1 + 2;
          }
          else {
            param_1 = param_1 + (4 - (ulong)((bVar3 & 0x10) == 0));
            bVar3 = *__src;
          }
        }
        else {
          bVar3 = *__src;
          param_1 = pbVar19;
        }
      }
joined_r0x0049d978:
      __dest = (undefined4 *)&DAT_0061ac58;
      if (bVar3 != 0) {
        __n = (long)pbVar18 - (long)__src;
        uVar20 = __n + 4 & 0xfffffffffffffffc;
        puVar11 = operator_new__(uVar20 + 0x17);
        LOCK();
        *puVar11 = 0;
        UNLOCK();
        *(ulong *)(puVar11 + 2) = uVar20;
        __dest = puVar11 + 4;
        memcpy(__dest,__src,__n);
        *(undefined1 *)((long)puVar11 + __n + 0x10) = 0;
      }
      uVar13 = *(uint *)(this + 0xc);
      uVar20 = (ulong)uVar13;
      if ((int)*(uint *)(this + 8) <= (int)uVar13) {
        uVar21 = uVar13 + ((int)((uVar13 - ((int)(uVar13 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
        if (*(uint *)(this + 8) != uVar21) {
          if ((int)uVar21 < 1) {
            free(*(void **)this);
            *(undefined8 *)this = 0;
          }
          else {
            pvVar12 = malloc((ulong)uVar21 << 3);
            if (0 < (int)uVar13) {
              pvVar4 = *(void **)this;
              if ((uVar13 < 4) ||
                 ((pvVar12 < (void *)((long)pvVar4 + uVar20 * 8) &&
                  (pvVar4 < (void *)((long)pvVar12 + uVar20 * 8))))) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulong)(uVar13 & 0xfffffffc);
                uVar15 = (uVar14 - 4 >> 2) + 1;
                if (uVar14 - 4 == 0) {
                  lVar16 = 0;
LAB_0049db8b:
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x10);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  puVar2 = (undefined8 *)((long)pvVar12 + lVar16 * 8);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)((long)pvVar12 + lVar16 * 8 + 0x10);
                  *puVar1 = uVar6;
                  puVar1[1] = uVar7;
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
                  *puVar1 = &DAT_0061ac58;
                  puVar1[1] = &DAT_0061ac58;
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x10);
                  *puVar1 = &DAT_0061ac58;
                  puVar1[1] = &DAT_0061ac58;
                }
                else {
                  uVar17 = uVar15 & 0xfffffffffffffffe;
                  lVar16 = 0;
                  do {
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
                    uVar5 = puVar1[1];
                    puVar2 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x10);
                    uVar6 = *puVar2;
                    uVar7 = puVar2[1];
                    puVar2 = (undefined8 *)((long)pvVar12 + lVar16 * 8);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar5;
                    puVar1 = (undefined8 *)((long)pvVar12 + lVar16 * 8 + 0x10);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar7;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x10);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x20);
                    uVar5 = puVar1[1];
                    puVar2 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x30);
                    uVar6 = *puVar2;
                    uVar7 = puVar2[1];
                    puVar2 = (undefined8 *)((long)pvVar12 + lVar16 * 8 + 0x20);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar5;
                    puVar1 = (undefined8 *)((long)pvVar12 + lVar16 * 8 + 0x30);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar7;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x20);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar16 * 8 + 0x30);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    lVar16 = lVar16 + 8;
                    uVar17 = uVar17 - 2;
                  } while (uVar17 != 0);
                  if ((uVar15 & 1) != 0) goto LAB_0049db8b;
                }
                if (uVar14 == uVar20) goto LAB_0049d73d;
              }
              uVar17 = ~uVar14;
              uVar15 = uVar20 & 3;
              if ((uVar13 & 3) != 0) {
                do {
                  *(undefined8 *)((long)pvVar12 + uVar14 * 8) =
                       *(undefined8 *)((long)pvVar4 + uVar14 * 8);
                  *(undefined1 **)((long)pvVar4 + uVar14 * 8) = &DAT_0061ac58;
                  uVar14 = uVar14 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (2 < uVar17 + uVar20) {
                do {
                  *(undefined8 *)((long)pvVar12 + uVar14 * 8) =
                       *(undefined8 *)((long)pvVar4 + uVar14 * 8);
                  *(undefined1 **)((long)pvVar4 + uVar14 * 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar12 + uVar14 * 8 + 8) =
                       *(undefined8 *)((long)pvVar4 + uVar14 * 8 + 8);
                  *(undefined1 **)((long)pvVar4 + uVar14 * 8 + 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar12 + uVar14 * 8 + 0x10) =
                       *(undefined8 *)((long)pvVar4 + uVar14 * 8 + 0x10);
                  *(undefined1 **)((long)pvVar4 + uVar14 * 8 + 0x10) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar12 + uVar14 * 8 + 0x18) =
                       *(undefined8 *)((long)pvVar4 + uVar14 * 8 + 0x18);
                  *(undefined1 **)((long)pvVar4 + uVar14 * 8 + 0x18) = &DAT_0061ac58;
                  uVar14 = uVar14 + 4;
                } while (uVar20 != uVar14);
              }
            }
LAB_0049d73d:
            pvVar4 = *(void **)this;
            *(void **)this = pvVar12;
            free(pvVar4);
          }
        }
        *(uint *)(this + 8) = uVar21;
        uVar13 = *(uint *)(this + 0xc);
      }
      *(uint *)(this + 0xc) = uVar13 + 1;
      *(undefined4 **)(*(long *)this + (long)(int)uVar13 * 8) = __dest;
      __src = param_1;
    } while (!bVar10);
  }
  return;
}


