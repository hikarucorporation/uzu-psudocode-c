// Function : addTokens
// Namespace: juce:StringArray
// Entry    : 00495e70
// Prototype: undefined addTokens(StringArray * this, byte * param_1, byte * param_2, byte * param_3)
// Body     : 00495e70 - 004964f9


/* WARNING: Removing unreachable block (ram,0x004964e9) */
/* juce::StringArray::addTokens(juce::StringRef, juce::StringRef, juce::StringRef) */

void __thiscall
juce::StringArray::addTokens(StringArray *this,byte *param_1,byte *param_2,byte *param_3)

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
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  void *pvVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 *__dest;
  ulong uVar18;
  size_t __n;
  uint uVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  
  bVar3 = *param_1;
  if (bVar3 == 0) {
    return;
  }
  do {
    if (bVar3 == 0) {
      __dest = (undefined4 *)&DAT_0061ac58;
      uVar11 = *(uint *)(this + 8);
      uVar24 = *(uint *)(this + 0xc);
      if ((int)uVar11 <= (int)uVar24) goto LAB_004962dc;
    }
    else {
      uVar11 = 0;
      pbVar25 = param_1;
      do {
        uVar24 = (uint)bVar3;
        pbVar15 = pbVar25 + 1;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            uVar24 = bVar3 & 0x7f;
          }
          else {
            if ((bVar3 & 0x20) == 0) {
              uVar24 = 0x3f;
              lVar22 = 0;
              bVar8 = false;
              bVar9 = false;
            }
            else {
              bVar8 = true;
              if ((bVar3 & 0x10) == 0) {
                uVar24 = 0x1f;
                lVar22 = 1;
                bVar9 = false;
              }
              else {
                uVar24 = 0xf;
                lVar22 = 2;
                bVar9 = true;
              }
            }
            uVar24 = bVar3 & uVar24;
            if ((pbVar25[1] & 0xc0) == 0x80) {
              pbVar14 = pbVar25 + lVar22 + 2;
              uVar24 = pbVar25[1] & 0x3f | uVar24 << 6;
              pbVar15 = pbVar14;
              if (bVar8) {
                bVar3 = pbVar25[2];
                pbVar15 = pbVar25 + 2;
                if ((bVar3 & 0xc0) == 0x80) {
                  uVar24 = bVar3 & 0x3f | uVar24 << 6;
                  pbVar15 = pbVar14;
                  if (bVar9) {
                    uVar17 = (uint)pbVar25[3];
                    pbVar15 = pbVar25 + 3;
                    if ((uVar17 & 0xffffffc0) == 0x80) {
                      uVar24 = uVar24 << 6 | uVar17 & 0x3f;
                      pbVar15 = pbVar14;
                    }
                  }
                }
              }
            }
          }
        }
        pbVar25 = pbVar15;
        if ((uVar11 == 0) && (bVar3 = *param_2, bVar3 != 0)) {
          pbVar15 = param_2;
          do {
            uVar17 = (uint)bVar3;
            pbVar14 = pbVar15 + 1;
            if ((char)bVar3 < '\0') {
              if ((bVar3 & 0x40) == 0) {
                uVar17 = bVar3 & 0x7f;
              }
              else {
                if ((bVar3 & 0x20) == 0) {
                  uVar17 = 0x3f;
                  lVar22 = 0;
                  bVar8 = false;
                  bVar9 = false;
                }
                else {
                  bVar8 = true;
                  if ((bVar3 & 0x10) == 0) {
                    uVar17 = 0x1f;
                    lVar22 = 1;
                    bVar9 = false;
                  }
                  else {
                    uVar17 = 0xf;
                    lVar22 = 2;
                    bVar9 = true;
                  }
                }
                uVar17 = bVar3 & uVar17;
                if ((pbVar15[1] & 0xffffffc0) == 0x80) {
                  pbVar20 = pbVar15 + lVar22 + 2;
                  uVar17 = pbVar15[1] & 0x3f | uVar17 << 6;
                  pbVar14 = pbVar20;
                  if (bVar8) {
                    bVar3 = pbVar15[2];
                    pbVar14 = pbVar15 + 2;
                    if ((bVar3 & 0xc0) == 0x80) {
                      uVar17 = bVar3 & 0x3f | uVar17 << 6;
                      pbVar14 = pbVar20;
                      if (bVar9) {
                        bVar3 = pbVar15[3];
                        pbVar14 = pbVar15 + 3;
                        if ((bVar3 & 0xc0) == 0x80) {
                          uVar17 = uVar17 << 6 | bVar3 & 0x3f;
                          pbVar14 = pbVar20;
                        }
                      }
                    }
                  }
                }
              }
            }
            pbVar15 = pbVar14;
            if (uVar17 == uVar24) {
              if ((pbVar25[-1] & 0xc0) == 0x80) {
                if ((pbVar25[-2] & 0xc0) == 0x80) {
                  pbVar15 = pbVar25 + -4;
                  if ((pbVar25[-3] & 0xc0) != 0x80) {
                    pbVar15 = pbVar25 + -3;
                  }
                }
                else {
                  pbVar15 = pbVar25 + -2;
                }
              }
              else {
                pbVar15 = pbVar25 + -1;
              }
              goto LAB_0049627a;
            }
            bVar3 = *pbVar15;
          } while (bVar3 != 0);
        }
        bVar3 = *param_3;
        uVar17 = uVar11;
        if (bVar3 != 0) {
          pbVar15 = param_3;
          do {
            uVar19 = (uint)bVar3;
            pbVar14 = pbVar15 + 1;
            if ((char)bVar3 < '\0') {
              if ((bVar3 & 0x40) == 0) {
                uVar19 = bVar3 & 0x7f;
              }
              else {
                if ((bVar3 & 0x20) == 0) {
                  uVar19 = 0x3f;
                  lVar22 = 0;
                  bVar8 = false;
                  bVar9 = false;
                }
                else {
                  bVar8 = true;
                  if ((bVar3 & 0x10) == 0) {
                    uVar19 = 0x1f;
                    lVar22 = 1;
                    bVar9 = false;
                  }
                  else {
                    uVar19 = 0xf;
                    lVar22 = 2;
                    bVar9 = true;
                  }
                }
                uVar19 = bVar3 & uVar19;
                if ((pbVar15[1] & 0xffffffc0) == 0x80) {
                  pbVar20 = pbVar15 + lVar22 + 2;
                  uVar19 = pbVar15[1] & 0x3f | uVar19 << 6;
                  pbVar14 = pbVar20;
                  if (bVar8) {
                    uVar10 = (uint)pbVar15[2];
                    pbVar14 = pbVar15 + 2;
                    if ((uVar10 & 0xffffffc0) == 0x80) {
                      uVar19 = uVar10 & 0x3f | uVar19 << 6;
                      pbVar14 = pbVar20;
                      if (bVar9) {
                        uVar10 = (uint)pbVar15[3];
                        pbVar14 = pbVar15 + 3;
                        if ((uVar10 & 0xffffffc0) == 0x80) {
                          uVar19 = uVar19 << 6 | uVar10 & 0x3f;
                          pbVar14 = pbVar20;
                        }
                      }
                    }
                  }
                }
              }
            }
            pbVar15 = pbVar14;
            if (uVar19 == uVar24) {
              uVar17 = uVar24;
              if ((uVar11 != 0) && (uVar17 = uVar11, uVar11 == uVar24)) {
                uVar17 = 0;
              }
              break;
            }
            bVar3 = *pbVar15;
          } while (bVar3 != 0);
        }
        uVar11 = uVar17;
        bVar3 = *pbVar25;
        pbVar15 = pbVar25;
      } while (bVar3 != 0);
LAB_0049627a:
      __n = (long)pbVar15 - (long)param_1;
      uVar18 = __n + 4 & 0xfffffffffffffffc;
      puVar12 = operator_new__(uVar18 + 0x17);
      LOCK();
      *puVar12 = 0;
      UNLOCK();
      *(ulong *)(puVar12 + 2) = uVar18;
      __dest = puVar12 + 4;
      memcpy(__dest,param_1,__n);
      *(undefined1 *)((long)puVar12 + __n + 0x10) = 0;
      uVar11 = *(uint *)(this + 8);
      uVar24 = *(uint *)(this + 0xc);
      param_1 = pbVar15;
      if ((int)uVar11 <= (int)uVar24) {
LAB_004962dc:
        uVar18 = (ulong)uVar24;
        uVar17 = ((int)((uVar24 - ((int)(uVar24 + 1) >> 0x1f)) + 1) >> 1) + uVar24 + 9 & 0xfffffff8;
        if (uVar11 != uVar17) {
          if ((int)uVar17 < 1) {
            free(*(void **)this);
            *(undefined8 *)this = 0;
          }
          else {
            pvVar13 = malloc((ulong)uVar17 << 3);
            if (0 < (int)uVar24) {
              pvVar4 = *(void **)this;
              if ((uVar24 < 4) ||
                 ((pvVar13 < (void *)((long)pvVar4 + uVar18 * 8) &&
                  (pvVar4 < (void *)((long)pvVar13 + uVar18 * 8))))) {
                uVar16 = 0;
              }
              else {
                uVar16 = (ulong)(uVar24 & 0xfffffffc);
                uVar21 = (uVar16 - 4 >> 2) + 1;
                if (uVar16 - 4 == 0) {
                  lVar22 = 0;
LAB_0049645b:
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x10);
                  uVar6 = *puVar2;
                  uVar7 = puVar2[1];
                  puVar2 = (undefined8 *)((long)pvVar13 + lVar22 * 8);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  puVar1 = (undefined8 *)((long)pvVar13 + lVar22 * 8 + 0x10);
                  *puVar1 = uVar6;
                  puVar1[1] = uVar7;
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8);
                  *puVar1 = &DAT_0061ac58;
                  puVar1[1] = &DAT_0061ac58;
                  puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x10);
                  *puVar1 = &DAT_0061ac58;
                  puVar1[1] = &DAT_0061ac58;
                }
                else {
                  uVar23 = uVar21 & 0xfffffffffffffffe;
                  lVar22 = 0;
                  do {
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8);
                    uVar5 = puVar1[1];
                    puVar2 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x10);
                    uVar6 = *puVar2;
                    uVar7 = puVar2[1];
                    puVar2 = (undefined8 *)((long)pvVar13 + lVar22 * 8);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar5;
                    puVar1 = (undefined8 *)((long)pvVar13 + lVar22 * 8 + 0x10);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar7;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x10);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x20);
                    uVar5 = puVar1[1];
                    puVar2 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x30);
                    uVar6 = *puVar2;
                    uVar7 = puVar2[1];
                    puVar2 = (undefined8 *)((long)pvVar13 + lVar22 * 8 + 0x20);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar5;
                    puVar1 = (undefined8 *)((long)pvVar13 + lVar22 * 8 + 0x30);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar7;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x20);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    puVar1 = (undefined8 *)((long)pvVar4 + lVar22 * 8 + 0x30);
                    *puVar1 = &DAT_0061ac58;
                    puVar1[1] = &DAT_0061ac58;
                    lVar22 = lVar22 + 8;
                    uVar23 = uVar23 - 2;
                  } while (uVar23 != 0);
                  if ((uVar21 & 1) != 0) goto LAB_0049645b;
                }
                if (uVar16 == uVar18) goto LAB_00496481;
              }
              uVar23 = ~uVar16;
              uVar21 = uVar18 & 3;
              if ((uVar24 & 3) != 0) {
                do {
                  *(undefined8 *)((long)pvVar13 + uVar16 * 8) =
                       *(undefined8 *)((long)pvVar4 + uVar16 * 8);
                  *(undefined1 **)((long)pvVar4 + uVar16 * 8) = &DAT_0061ac58;
                  uVar16 = uVar16 + 1;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              if (2 < uVar23 + uVar18) {
                do {
                  *(undefined8 *)((long)pvVar13 + uVar16 * 8) =
                       *(undefined8 *)((long)pvVar4 + uVar16 * 8);
                  *(undefined1 **)((long)pvVar4 + uVar16 * 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 8) =
                       *(undefined8 *)((long)pvVar4 + uVar16 * 8 + 8);
                  *(undefined1 **)((long)pvVar4 + uVar16 * 8 + 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 0x10) =
                       *(undefined8 *)((long)pvVar4 + uVar16 * 8 + 0x10);
                  *(undefined1 **)((long)pvVar4 + uVar16 * 8 + 0x10) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar16 * 8 + 0x18) =
                       *(undefined8 *)((long)pvVar4 + uVar16 * 8 + 0x18);
                  *(undefined1 **)((long)pvVar4 + uVar16 * 8 + 0x18) = &DAT_0061ac58;
                  uVar16 = uVar16 + 4;
                } while (uVar18 != uVar16);
              }
            }
LAB_00496481:
            pvVar4 = *(void **)this;
            *(void **)this = pvVar13;
            free(pvVar4);
          }
        }
        *(uint *)(this + 8) = uVar17;
        uVar24 = *(uint *)(this + 0xc);
      }
    }
    *(uint *)(this + 0xc) = uVar24 + 1;
    *(undefined4 **)(*(long *)this + (long)(int)uVar24 * 8) = __dest;
    bVar3 = *param_1;
    if (bVar3 == 0) {
      return;
    }
    pbVar25 = param_1 + 1;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      if ((bVar3 & 0x20) == 0) {
        pbVar25 = param_1 + 2;
      }
      else {
        pbVar25 = param_1 + (4 - (ulong)((bVar3 & 0x10) == 0));
      }
    }
    bVar3 = *pbVar25;
    param_1 = pbVar25;
  } while( true );
}


