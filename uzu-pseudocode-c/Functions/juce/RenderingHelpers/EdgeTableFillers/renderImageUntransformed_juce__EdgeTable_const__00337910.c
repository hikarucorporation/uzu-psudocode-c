// Function : renderImageUntransformed<juce::EdgeTable_const>
// Namespace: juce:RenderingHelpers:EdgeTableFillers
// Entry    : 00337910
// Prototype: ulong renderImageUntransformed<juce::EdgeTable_const>(undefined8 * param_1, long * param_2, long * param_3, int param_4, int param_5, int param_6, byte param_7)
// Body     : 00337910 - 0033cf3b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void juce::RenderingHelpers::EdgeTableFillers::renderImageUntransformed<juce::EdgeTable
   const>(juce::EdgeTable const&, juce::Image::BitmapData const&, juce::Image::BitmapData const&,
   int, int, int, bool) */

ulong __cdecl
juce::RenderingHelpers::EdgeTableFillers::renderImageUntransformed<juce::EdgeTable_const>
          (undefined8 *param_1,long *param_2,long *param_3,int param_4,int param_5,int param_6,
          byte param_7)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar9;
  undefined8 in_RAX;
  ulong uVar8;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  char cVar28;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  int *piVar27;
  long lVar29;
  uint *puVar30;
  long lVar31;
  uint *__src;
  byte *pbVar32;
  uint3 *__src_00;
  byte *pbVar33;
  undefined2 *__src_01;
  uint uVar34;
  int iVar35;
  undefined1 *puVar36;
  uint *puVar37;
  uint *puVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  int *piVar42;
  long lVar43;
  int iVar44;
  int iVar45;
  long lVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  bool bVar51;
  long local_e8;
  long local_b8;
  ulong local_90;
  
  uVar8 = CONCAT71((int7)((ulong)in_RAX >> 8),param_7);
  if ((int)param_2[2] == 1) {
    if ((int)param_3[2] == 1) {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          puVar30 = (uint *)*param_1;
          iVar17 = 0;
          uVar8 = -(long)param_6;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < (int)*puVar30) {
              puVar37 = puVar30 + 1;
              iVar49 = *(int *)((long)param_1 + 0x14) + iVar17;
              lVar13 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar49;
              uVar14 = *param_2 + lVar13;
              lVar21 = *param_2 + lVar13 + 2;
              iVar48 = *(int *)((long)param_3 + 0x14);
              lVar13 = *param_3;
              lVar39 = (long)(iVar49 - param_6) * (long)iVar48 + lVar13;
              uVar25 = 0;
              uVar11 = puVar30[1];
              uVar5 = *puVar30;
              do {
                uVar23 = puVar37[2];
                uVar6 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar6 = uVar23;
                }
                uVar34 = puVar37[1];
                iVar18 = (int)uVar6 >> 8;
                uVar6 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar6 = uVar11;
                }
                iVar47 = (int)uVar6 >> 8;
                uVar6 = iVar18 - iVar47;
                if (uVar6 == 0) {
                  uVar25 = uVar25 + (uVar23 - uVar11) * uVar34;
                }
                else {
                  uVar25 = (0x100 - (uVar11 & 0xff)) * uVar34 + uVar25;
                  if (0xff < (int)uVar25) {
                    bVar9 = (byte)(uVar25 + 0xff >> 8);
                    if (-1 < (int)uVar25) {
                      bVar9 = (byte)(uVar25 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar25) {
                      iVar41 = iVar1;
                    }
                    lVar46 = (long)(iVar47 - param_5) * (long)(int)param_3[3];
                    lVar43 = (long)(int)param_2[3] * (long)iVar47;
                    uVar11 = (*(byte *)(lVar39 + 1 + lVar46) | 0xff0000) * iVar41;
                    iVar12 = 0x100 - (uVar11 >> 0x18);
                    iVar7 = ((uint)*(byte *)(uVar14 + 1 + lVar43) * iVar12 >> 8) +
                            (uVar11 >> 8 & 0xff00ff);
                    uVar11 = (((uint)*(byte *)(uVar14 + 2 + lVar43) << 0x10 |
                              (uint)*(byte *)(uVar14 + lVar43)) * iVar12 >> 8 & 0xff00ff) +
                             (((uint)*(byte *)(lVar39 + 2 + lVar46) << 0x10 |
                              (uint)*(byte *)(lVar39 + lVar46)) * iVar41 >> 8 & 0xff00ff);
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(uVar14 + 1 + lVar43) = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
                    *(char *)(uVar14 + 2 + lVar43) = (char)(uVar11 >> 0x10);
                    *(char *)(uVar14 + lVar43) = (char)uVar11;
                  }
                  if (0 < (int)uVar34) {
                    lVar46 = (long)iVar47 + 1;
                    iVar41 = (int)lVar46;
                    if (iVar18 - iVar41 != 0 && iVar41 <= iVar18) {
                      iVar7 = (int)param_2[3];
                      lVar43 = (long)iVar7;
                      lVar46 = lVar46 * lVar43;
                      iVar45 = (uVar34 & 0xff) * iVar1;
                      iVar12 = (int)param_3[3];
                      lVar22 = (long)iVar12;
                      if (iVar45 < 0xfe00) {
                        iVar45 = iVar45 >> 8;
                        pbVar33 = (byte *)((iVar41 - param_5) * lVar22 +
                                          ((long)iVar49 + -(long)param_6) * (long)iVar48 + lVar13 +
                                          2);
                        uVar11 = iVar18 - iVar47;
                        pbVar32 = (byte *)(lVar46 + lVar21);
                        do {
                          uVar25 = (pbVar33[-1] | 0xff0000) * iVar45;
                          iVar41 = 0x100 - (uVar25 >> 0x18);
                          iVar47 = ((uint)pbVar32[-1] * iVar41 >> 8) + (uVar25 >> 8 & 0xff00ff);
                          uVar25 = (((uint)*pbVar32 << 0x10 | (uint)pbVar32[-2]) * iVar41 >> 8 &
                                   0xff00ff) +
                                   (((uint)*pbVar33 << 0x10 | (uint)pbVar33[-2]) * iVar45 >> 8 &
                                   0xff00ff);
                          uVar25 = 0x100 - (uVar25 >> 8 & 0x10001) | uVar25;
                          pbVar32[-1] = -(char)((uint)iVar47 >> 8) | (byte)iVar47;
                          *pbVar32 = (byte)(uVar25 >> 0x10);
                          pbVar32[-2] = (byte)uVar25;
                          pbVar33 = pbVar33 + lVar22;
                          uVar11 = uVar11 - 1;
                          pbVar32 = pbVar32 + lVar43;
                        } while (1 < uVar11);
                      }
                      else {
                        __src_01 = (undefined2 *)((iVar41 - param_5) * iVar12 + lVar39);
                        if (((iVar7 == iVar12) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1))
                        {
                          memcpy((void *)(lVar46 + uVar14),__src_01,
                                 (long)(iVar7 * (iVar18 - iVar41)));
                        }
                        else {
                          puVar36 = (undefined1 *)(lVar46 + lVar21);
                          do {
                            uVar2 = *(undefined1 *)(__src_01 + 1);
                            uVar3 = *__src_01;
                            puVar36[-2] = (char)uVar3;
                            puVar36[-1] = (char)((ushort)uVar3 >> 8);
                            *puVar36 = uVar2;
                            __src_01 = (undefined2 *)((long)__src_01 + lVar22);
                            uVar6 = uVar6 - 1;
                            puVar36 = puVar36 + lVar43;
                          } while (1 < uVar6);
                        }
                      }
                    }
                  }
                  uVar25 = (uVar23 & 0xff) * uVar34;
                }
                uVar6 = uVar5 - 1;
                puVar37 = puVar37 + 2;
                bVar51 = 2 < (int)uVar5;
                uVar11 = uVar23;
                uVar5 = uVar6;
              } while (bVar51);
              uVar8 = (ulong)uVar6;
              if (0xff < (int)uVar25) {
                bVar9 = (byte)(uVar25 + 0xff >> 8);
                if (-1 < (int)uVar25) {
                  bVar9 = (byte)(uVar25 >> 8);
                }
                iVar48 = (int)((uint)bVar9 * iVar1) >> 8;
                if (0xfeff < uVar25) {
                  iVar48 = iVar1;
                }
                lVar13 = (long)(iVar18 - param_5) * (long)(int)param_3[3];
                lVar21 = (long)(int)param_2[3] * (long)iVar18;
                uVar5 = (*(byte *)(lVar39 + 1 + lVar13) | 0xff0000) * iVar48;
                iVar18 = 0x100 - (uVar5 >> 0x18);
                iVar49 = ((uint)*(byte *)(uVar14 + 1 + lVar21) * iVar18 >> 8) +
                         (uVar5 >> 8 & 0xff00ff);
                uVar5 = (((uint)*(byte *)(uVar14 + 2 + lVar21) << 0x10 |
                         (uint)*(byte *)(uVar14 + lVar21)) * iVar18 >> 8 & 0xff00ff) +
                        (((uint)*(byte *)(lVar39 + 2 + lVar13) << 0x10 |
                         (uint)*(byte *)(lVar39 + lVar13)) * iVar48 >> 8 & 0xff00ff);
                uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                *(byte *)(uVar14 + 1 + lVar21) = -(char)((uint)iVar49 >> 8) | (byte)iVar49;
                *(char *)(uVar14 + 2 + lVar21) = (char)(uVar5 >> 0x10);
                *(char *)(uVar14 + lVar21) = (char)uVar5;
                uVar8 = uVar14;
              }
            }
            puVar30 = puVar30 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = iVar10;
        if (param_5 % iVar10 < 0) {
          iVar17 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar49 = 0;
        if (-1 < param_6 % iVar48) {
          iVar49 = iVar48;
        }
        uVar5 = *(uint *)((long)param_1 + 0x1c);
        if (0 < (int)uVar5) {
          iVar17 = param_5 % iVar10 - iVar17;
          piVar27 = (int *)*param_1;
          iVar18 = *(int *)((long)param_1 + 0x24);
          iVar47 = *(int *)((long)param_1 + 0x14);
          lVar13 = *param_2;
          lVar43 = (long)*(int *)((long)param_2 + 0x14);
          lVar21 = *param_3;
          iVar41 = *(int *)((long)param_3 + 0x14);
          lVar39 = param_2[3];
          lVar46 = param_3[3];
          uVar8 = iVar47 * lVar43 + lVar13 + 1;
          uVar14 = 0;
          local_90 = uVar8;
          do {
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar22 = (long)iVar47 + uVar14;
              lVar15 = lVar22 * lVar43 + lVar13;
              lVar40 = (long)(((int)lVar22 + (iVar49 - param_6 % iVar48)) % iVar48) * (long)iVar41 +
                       lVar21;
              lVar22 = param_2[3];
              lVar29 = (long)(int)lVar22;
              iVar7 = (int)param_3[3];
              iVar12 = *(int *)((long)param_3 + 0x1c);
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar45 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar44 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar35 = (int)uVar23 >> 8;
                uVar23 = iVar44 - iVar35;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar50 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar50 = iVar1;
                    }
                    lVar16 = iVar35 * lVar29;
                    lVar31 = (long)(((iVar35 - iVar17) % iVar12) * iVar7);
                    uVar11 = (*(byte *)(lVar40 + 1 + lVar31) | 0xff0000) * iVar50;
                    iVar24 = 0x100 - (uVar11 >> 0x18);
                    iVar20 = ((uint)*(byte *)(lVar15 + 1 + lVar16) * iVar24 >> 8) +
                             (uVar11 >> 8 & 0xff00ff);
                    uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar16) << 0x10 |
                              (uint)*(byte *)(lVar15 + lVar16)) * iVar24 >> 8 & 0xff00ff) +
                             (((uint)*(byte *)(lVar40 + 2 + lVar31) << 0x10 |
                              (uint)*(byte *)(lVar40 + lVar31)) * iVar50 >> 8 & 0xff00ff);
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(lVar15 + 1 + lVar16) = -(char)((uint)iVar20 >> 8) | (byte)iVar20;
                    *(char *)(lVar15 + 2 + lVar16) = (char)(uVar11 >> 0x10);
                    *(char *)(lVar15 + lVar16) = (char)uVar11;
                  }
                  if ((0 < (int)uVar6) && (iVar50 = iVar35 + 1, iVar50 < iVar44)) {
                    lVar31 = (long)((int)lVar22 * iVar50);
                    iVar20 = (uVar6 & 0xff) * iVar1;
                    if (iVar20 < 0xfe00) {
                      iVar20 = iVar20 >> 8;
                      uVar11 = iVar44 - iVar35;
                      pbVar33 = (byte *)(lVar31 + local_90);
                      iVar35 = iVar50 - iVar17;
                      do {
                        lVar31 = (long)((iVar35 % iVar12) * iVar7);
                        uVar23 = (*(byte *)(lVar40 + 1 + lVar31) | 0xff0000) * iVar20;
                        iVar24 = 0x100 - (uVar23 >> 0x18);
                        iVar50 = ((uint)*pbVar33 * iVar24 >> 8) + (uVar23 >> 8 & 0xff00ff);
                        uVar23 = (((uint)pbVar33[1] << 0x10 | (uint)pbVar33[-1]) * iVar24 >> 8 &
                                 0xff00ff) +
                                 (((uint)*(byte *)(lVar40 + 2 + lVar31) << 0x10 |
                                  (uint)*(byte *)(lVar40 + lVar31)) * iVar20 >> 8 & 0xff00ff);
                        uVar23 = 0x100 - (uVar23 >> 8 & 0x10001) | uVar23;
                        *pbVar33 = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                        pbVar33[1] = (byte)(uVar23 >> 0x10);
                        pbVar33[-1] = (byte)uVar23;
                        uVar11 = uVar11 - 1;
                        pbVar33 = pbVar33 + lVar29;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar11);
                    }
                    else {
                      puVar36 = (undefined1 *)(lVar31 + lVar15);
                      iVar35 = iVar50 - iVar17;
                      do {
                        lVar31 = (long)((iVar35 % iVar12) * iVar7);
                        uVar2 = *(undefined1 *)(lVar40 + 2 + lVar31);
                        uVar3 = *(undefined2 *)(lVar40 + lVar31);
                        *puVar36 = (char)uVar3;
                        puVar36[1] = (char)((ushort)uVar3 >> 8);
                        puVar36[2] = uVar2;
                        puVar36 = puVar36 + lVar29;
                        uVar23 = uVar23 - 1;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar23);
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar45;
                uVar11 = uVar25;
                iVar45 = iVar45 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar7 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar7 = iVar1;
                }
                lVar29 = (long)iVar44 * (long)(int)lVar39;
                lVar22 = (long)((iVar44 - iVar17) % iVar10) * (long)(int)lVar46;
                uVar11 = (*(byte *)(lVar40 + 1 + lVar22) | 0xff0000) * iVar7;
                iVar45 = 0x100 - (uVar11 >> 0x18);
                iVar12 = ((uint)*(byte *)(lVar15 + 1 + lVar29) * iVar45 >> 8) +
                         (uVar11 >> 8 & 0xff00ff);
                uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar29) << 0x10 |
                          (uint)*(byte *)(lVar15 + lVar29)) * iVar45 >> 8 & 0xff00ff) +
                         (((uint)*(byte *)(lVar40 + 2 + lVar22) << 0x10 |
                          (uint)*(byte *)(lVar40 + lVar22)) * iVar7 >> 8 & 0xff00ff);
                uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                *(byte *)(lVar15 + 1 + lVar29) = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
                uVar8 = (ulong)(uVar11 >> 0x10);
                *(char *)(lVar15 + 2 + lVar29) = (char)(uVar11 >> 0x10);
                *(char *)(lVar15 + lVar29) = (char)uVar11;
              }
            }
            piVar27 = piVar27 + iVar18;
            uVar14 = uVar14 + 1;
            local_90 = local_90 + lVar43;
          } while (uVar14 != uVar5);
        }
      }
    }
    else if ((int)param_3[2] == 2) {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          puVar30 = (uint *)*param_1;
          iVar17 = 0;
          uVar8 = -(long)param_6;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < (int)*puVar30) {
              puVar37 = puVar30 + 1;
              iVar49 = *(int *)((long)param_1 + 0x14) + iVar17;
              lVar13 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar49;
              uVar14 = *param_2 + lVar13;
              lVar21 = lVar13 + *param_2 + 2;
              iVar48 = *(int *)((long)param_3 + 0x14);
              lVar13 = *param_3;
              lVar39 = (long)(iVar49 - param_6) * (long)iVar48 + lVar13;
              uVar25 = 0;
              uVar11 = puVar30[1];
              uVar5 = *puVar30;
              do {
                uVar23 = puVar37[2];
                uVar6 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar6 = uVar23;
                }
                uVar34 = puVar37[1];
                iVar18 = (int)uVar6 >> 8;
                uVar6 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar6 = uVar11;
                }
                iVar47 = (int)uVar6 >> 8;
                uVar6 = iVar18 - iVar47;
                if (uVar6 == 0) {
                  uVar25 = uVar25 + (uVar23 - uVar11) * uVar34;
                }
                else {
                  uVar25 = (0x100 - (uVar11 & 0xff)) * uVar34 + uVar25;
                  if (0xff < (int)uVar25) {
                    bVar9 = (byte)(uVar25 + 0xff >> 8);
                    if (-1 < (int)uVar25) {
                      bVar9 = (byte)(uVar25 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar25) {
                      iVar41 = iVar1;
                    }
                    lVar46 = (long)(int)param_2[3] * (long)iVar47;
                    uVar11 = *(uint *)(lVar39 + (long)(iVar47 - param_5) * (long)(int)param_3[3]);
                    uVar25 = (uVar11 >> 8 & 0xff00ff) * iVar41;
                    iVar7 = 0x100 - (uVar25 >> 0x18);
                    iVar12 = ((uint)*(byte *)(uVar14 + 1 + lVar46) * iVar7 >> 8) +
                             (uVar25 >> 8 & 0xff00ff);
                    uVar11 = (((uint)*(byte *)(uVar14 + 2 + lVar46) << 0x10 |
                              (uint)*(byte *)(uVar14 + lVar46)) * iVar7 >> 8 & 0xff00ff) +
                             ((uVar11 & 0xff00ff) * iVar41 >> 8 & 0xff00ff);
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(uVar14 + 1 + lVar46) = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
                    *(char *)(uVar14 + 2 + lVar46) = (char)(uVar11 >> 0x10);
                    *(char *)(uVar14 + lVar46) = (char)uVar11;
                  }
                  if (0 < (int)uVar34) {
                    lVar46 = (long)iVar47 + 1;
                    iVar41 = (int)lVar46;
                    if (iVar18 - iVar41 != 0 && iVar41 <= iVar18) {
                      iVar7 = (int)param_2[3];
                      lVar43 = (long)iVar7;
                      lVar46 = lVar46 * lVar43;
                      iVar45 = (uVar34 & 0xff) * iVar1;
                      iVar12 = (int)param_3[3];
                      lVar22 = (long)iVar12;
                      if (iVar45 < 0xfe00) {
                        iVar45 = iVar45 >> 8;
                        puVar38 = (uint *)((iVar41 - param_5) * lVar22 +
                                          ((long)iVar49 + -(long)param_6) * (long)iVar48 + lVar13);
                        uVar11 = iVar18 - iVar47;
                        pbVar33 = (byte *)(lVar46 + lVar21);
                        do {
                          uVar25 = (*puVar38 >> 8 & 0xff00ff) * iVar45;
                          iVar47 = 0x100 - (uVar25 >> 0x18);
                          iVar41 = ((uint)pbVar33[-1] * iVar47 >> 8) + (uVar25 >> 8 & 0xff00ff);
                          uVar25 = (((uint)*pbVar33 << 0x10 | (uint)pbVar33[-2]) * iVar47 >> 8 &
                                   0xff00ff) + ((*puVar38 & 0xff00ff) * iVar45 >> 8 & 0xff00ff);
                          uVar25 = 0x100 - (uVar25 >> 8 & 0x10001) | uVar25;
                          pbVar33[-1] = -(char)((uint)iVar41 >> 8) | (byte)iVar41;
                          *pbVar33 = (byte)(uVar25 >> 0x10);
                          pbVar33[-2] = (byte)uVar25;
                          puVar38 = (uint *)((long)puVar38 + lVar22);
                          uVar11 = uVar11 - 1;
                          pbVar33 = pbVar33 + lVar43;
                        } while (1 < uVar11);
                      }
                      else {
                        puVar38 = (uint *)((iVar41 - param_5) * iVar12 + lVar39);
                        if (((iVar7 == iVar12) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1))
                        {
                          memcpy((void *)(lVar46 + uVar14),puVar38,(long)(iVar7 * (iVar18 - iVar41))
                                );
                        }
                        else {
                          pbVar33 = (byte *)(lVar46 + lVar21);
                          do {
                            iVar47 = 0x100 - (uint)*(byte *)((long)puVar38 + 3);
                            uVar11 = (((uint)*pbVar33 << 0x10 | (uint)pbVar33[-2]) * iVar47 >> 8 &
                                     0xff00ff) + (*puVar38 & 0xff00ff);
                            uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                            iVar47 = ((uint)pbVar33[-1] * iVar47 >> 8) + (*puVar38 >> 8 & 0xff00ff);
                            pbVar33[-1] = -(char)((uint)iVar47 >> 8) | (byte)iVar47;
                            *pbVar33 = (byte)(uVar11 >> 0x10);
                            pbVar33[-2] = (byte)uVar11;
                            puVar38 = (uint *)((long)puVar38 + lVar22);
                            uVar6 = uVar6 - 1;
                            pbVar33 = pbVar33 + lVar43;
                          } while (1 < uVar6);
                        }
                      }
                    }
                  }
                  uVar25 = (uVar23 & 0xff) * uVar34;
                }
                uVar6 = uVar5 - 1;
                puVar37 = puVar37 + 2;
                bVar51 = 2 < (int)uVar5;
                uVar11 = uVar23;
                uVar5 = uVar6;
              } while (bVar51);
              uVar8 = (ulong)uVar6;
              if (0xff < (int)uVar25) {
                bVar9 = (byte)(uVar25 + 0xff >> 8);
                if (-1 < (int)uVar25) {
                  bVar9 = (byte)(uVar25 >> 8);
                }
                iVar48 = (int)((uint)bVar9 * iVar1) >> 8;
                if (0xfeff < uVar25) {
                  iVar48 = iVar1;
                }
                lVar13 = (long)(int)param_2[3] * (long)iVar18;
                uVar5 = *(uint *)(lVar39 + (long)(iVar18 - param_5) * (long)(int)param_3[3]);
                uVar11 = (uVar5 >> 8 & 0xff00ff) * iVar48;
                iVar18 = 0x100 - (uVar11 >> 0x18);
                iVar49 = ((uint)*(byte *)(uVar14 + 1 + lVar13) * iVar18 >> 8) +
                         (uVar11 >> 8 & 0xff00ff);
                uVar5 = (((uint)*(byte *)(uVar14 + 2 + lVar13) << 0x10 |
                         (uint)*(byte *)(uVar14 + lVar13)) * iVar18 >> 8 & 0xff00ff) +
                        ((uVar5 & 0xff00ff) * iVar48 >> 8 & 0xff00ff);
                uVar5 = 0x100 - (uVar5 >> 8 & 0x10001) | uVar5;
                *(byte *)(uVar14 + 1 + lVar13) = -(char)((uint)iVar49 >> 8) | (byte)iVar49;
                *(char *)(uVar14 + 2 + lVar13) = (char)(uVar5 >> 0x10);
                *(char *)(uVar14 + lVar13) = (char)uVar5;
                uVar8 = uVar14;
              }
            }
            puVar30 = puVar30 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = iVar10;
        if (param_5 % iVar10 < 0) {
          iVar17 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar49 = 0;
        if (-1 < param_6 % iVar48) {
          iVar49 = iVar48;
        }
        uVar5 = *(uint *)((long)param_1 + 0x1c);
        if (0 < (int)uVar5) {
          iVar17 = param_5 % iVar10 - iVar17;
          piVar27 = (int *)*param_1;
          iVar18 = *(int *)((long)param_1 + 0x24);
          iVar47 = *(int *)((long)param_1 + 0x14);
          lVar13 = *param_2;
          lVar43 = (long)*(int *)((long)param_2 + 0x14);
          lVar21 = *param_3;
          iVar41 = *(int *)((long)param_3 + 0x14);
          lVar39 = param_2[3];
          lVar46 = param_3[3];
          uVar8 = iVar47 * lVar43 + lVar13 + 1;
          uVar14 = 0;
          local_90 = uVar8;
          do {
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar22 = (long)iVar47 + uVar14;
              lVar15 = lVar22 * lVar43 + lVar13;
              lVar29 = (long)(((int)lVar22 + (iVar49 - param_6 % iVar48)) % iVar48) * (long)iVar41 +
                       lVar21;
              lVar22 = param_2[3];
              lVar40 = (long)(int)lVar22;
              iVar7 = (int)param_3[3];
              iVar12 = *(int *)((long)param_3 + 0x1c);
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar45 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar44 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar35 = (int)uVar23 >> 8;
                uVar23 = iVar44 - iVar35;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar50 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar50 = iVar1;
                    }
                    lVar31 = iVar35 * lVar40;
                    uVar11 = *(uint *)(lVar29 + ((iVar35 - iVar17) % iVar12) * iVar7);
                    uVar34 = (uVar11 >> 8 & 0xff00ff) * iVar50;
                    iVar24 = 0x100 - (uVar34 >> 0x18);
                    iVar20 = ((uint)*(byte *)(lVar15 + 1 + lVar31) * iVar24 >> 8) +
                             (uVar34 >> 8 & 0xff00ff);
                    uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar31) << 0x10 |
                              (uint)*(byte *)(lVar15 + lVar31)) * iVar24 >> 8 & 0xff00ff) +
                             ((uVar11 & 0xff00ff) * iVar50 >> 8 & 0xff00ff);
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(lVar15 + 1 + lVar31) = -(char)((uint)iVar20 >> 8) | (byte)iVar20;
                    *(char *)(lVar15 + 2 + lVar31) = (char)(uVar11 >> 0x10);
                    *(char *)(lVar15 + lVar31) = (char)uVar11;
                  }
                  if ((0 < (int)uVar6) && (iVar50 = iVar35 + 1, iVar50 < iVar44)) {
                    lVar31 = (long)((int)lVar22 * iVar50);
                    iVar20 = (uVar6 & 0xff) * iVar1;
                    if (iVar20 < 0xfe00) {
                      iVar20 = iVar20 >> 8;
                      uVar11 = iVar44 - iVar35;
                      pbVar33 = (byte *)(lVar31 + local_90);
                      iVar35 = iVar50 - iVar17;
                      do {
                        uVar23 = *(uint *)(lVar29 + (iVar35 % iVar12) * iVar7);
                        uVar34 = (uVar23 >> 8 & 0xff00ff) * iVar20;
                        iVar24 = 0x100 - (uVar34 >> 0x18);
                        iVar50 = ((uint)*pbVar33 * iVar24 >> 8) + (uVar34 >> 8 & 0xff00ff);
                        uVar23 = (((uint)pbVar33[1] << 0x10 | (uint)pbVar33[-1]) * iVar24 >> 8 &
                                 0xff00ff) + ((uVar23 & 0xff00ff) * iVar20 >> 8 & 0xff00ff);
                        uVar23 = 0x100 - (uVar23 >> 8 & 0x10001) | uVar23;
                        *pbVar33 = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                        pbVar33[1] = (byte)(uVar23 >> 0x10);
                        pbVar33[-1] = (byte)uVar23;
                        uVar11 = uVar11 - 1;
                        pbVar33 = pbVar33 + lVar40;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar11);
                    }
                    else {
                      pbVar33 = (byte *)(lVar31 + lVar15);
                      iVar35 = iVar50 - iVar17;
                      do {
                        lVar31 = (long)((iVar35 % iVar12) * iVar7);
                        iVar50 = 0x100 - (uint)*(byte *)(lVar29 + 3 + lVar31);
                        uVar11 = *(uint *)(lVar29 + lVar31);
                        uVar34 = (((uint)pbVar33[2] << 0x10 | (uint)*pbVar33) * iVar50 >> 8 &
                                 0xff00ff) + (uVar11 & 0xff00ff);
                        uVar34 = 0x100 - (uVar34 >> 8 & 0x10001) | uVar34;
                        iVar50 = ((uint)pbVar33[1] * iVar50 >> 8) + (uVar11 >> 8 & 0xff00ff);
                        pbVar33[1] = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                        pbVar33[2] = (byte)(uVar34 >> 0x10);
                        *pbVar33 = (byte)uVar34;
                        pbVar33 = pbVar33 + lVar40;
                        uVar23 = uVar23 - 1;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar23);
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar45;
                uVar11 = uVar25;
                iVar45 = iVar45 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar7 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar7 = iVar1;
                }
                lVar22 = (long)iVar44 * (long)(int)lVar39;
                uVar11 = *(uint *)(lVar29 + (long)((iVar44 - iVar17) % iVar10) * (long)(int)lVar46);
                uVar25 = (uVar11 >> 8 & 0xff00ff) * iVar7;
                iVar45 = 0x100 - (uVar25 >> 0x18);
                iVar12 = ((uint)*(byte *)(lVar15 + 1 + lVar22) * iVar45 >> 8) +
                         (uVar25 >> 8 & 0xff00ff);
                uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar22) << 0x10 |
                          (uint)*(byte *)(lVar15 + lVar22)) * iVar45 >> 8 & 0xff00ff) +
                         ((uVar11 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                *(byte *)(lVar15 + 1 + lVar22) = -(char)((uint)iVar12 >> 8) | (byte)iVar12;
                uVar8 = (ulong)(uVar11 >> 0x10);
                *(char *)(lVar15 + 2 + lVar22) = (char)(uVar11 >> 0x10);
                *(char *)(lVar15 + lVar22) = (char)uVar11;
              }
            }
            piVar27 = piVar27 + iVar18;
            uVar14 = uVar14 + 1;
            local_90 = local_90 + lVar43;
          } while (uVar14 != uVar5);
        }
      }
    }
    else {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          puVar30 = (uint *)*param_1;
          iVar17 = 0;
          uVar8 = -(long)param_6;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < (int)*puVar30) {
              puVar37 = puVar30 + 1;
              iVar48 = *(int *)((long)param_1 + 0x14) + iVar17;
              lVar21 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar48;
              lVar46 = (long)(iVar48 - param_6) * (long)*(int *)((long)param_3 + 0x14) + *param_3;
              lVar39 = ((long)iVar48 + -(long)param_6) * (long)*(int *)((long)param_3 + 0x14) +
                       *param_3;
              lVar13 = *param_2 + lVar21;
              lVar21 = lVar21 + *param_2 + 2;
              uVar25 = 0;
              uVar11 = puVar30[1];
              uVar5 = *puVar30;
              do {
                uVar23 = puVar37[2];
                uVar6 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar6 = uVar23;
                }
                uVar34 = puVar37[1];
                iVar48 = (int)uVar6 >> 8;
                uVar6 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar6 = uVar11;
                }
                iVar49 = (int)uVar6 >> 8;
                uVar6 = iVar48 - iVar49;
                if (uVar6 == 0) {
                  uVar25 = uVar25 + (uVar23 - uVar11) * uVar34;
                }
                else {
                  uVar25 = (0x100 - (uVar11 & 0xff)) * uVar34 + uVar25;
                  if (0xff < (int)uVar25) {
                    bVar9 = (byte)(uVar25 + 0xff >> 8);
                    if (-1 < (int)uVar25) {
                      bVar9 = (byte)(uVar25 >> 8);
                    }
                    iVar18 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar25) {
                      iVar18 = iVar1;
                    }
                    lVar43 = (long)(int)param_2[3] * (long)iVar49;
                    bVar9 = *(byte *)(lVar46 + (long)(iVar49 - param_5) * (long)(int)param_3[3]);
                    uVar25 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar18;
                    uVar11 = uVar25 >> 8 & 0xff00ff;
                    iVar18 = 0x100 - (uVar25 >> 0x18);
                    iVar47 = ((uint)*(byte *)(lVar13 + 1 + lVar43) * iVar18 >> 8) + uVar11;
                    uVar11 = (((uint)*(byte *)(lVar13 + 2 + lVar43) << 0x10 |
                              (uint)*(byte *)(lVar13 + lVar43)) * iVar18 >> 8 & 0xff00ff) + uVar11;
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(lVar13 + 1 + lVar43) = -(char)((uint)iVar47 >> 8) | (byte)iVar47;
                    *(char *)(lVar13 + 2 + lVar43) = (char)(uVar11 >> 0x10);
                    *(char *)(lVar13 + lVar43) = (char)uVar11;
                  }
                  if (0 < (int)uVar34) {
                    lVar43 = (long)iVar49 + 1;
                    iVar18 = (int)lVar43;
                    if (iVar48 - iVar18 != 0 && iVar18 <= iVar48) {
                      iVar47 = (int)param_2[3];
                      lVar22 = (long)iVar47;
                      lVar43 = lVar43 * lVar22;
                      iVar7 = (uVar34 & 0xff) * iVar1;
                      iVar41 = (int)param_3[3];
                      lVar15 = (long)iVar41;
                      if (iVar7 < 0xfe00) {
                        pbVar32 = (byte *)((iVar18 - param_5) * lVar15 + lVar39);
                        uVar11 = iVar48 - iVar49;
                        pbVar33 = (byte *)(lVar43 + lVar21);
                        do {
                          uVar6 = ((uint)*pbVar32 << 0x10 | (uint)*pbVar32) * (iVar7 >> 8);
                          uVar25 = uVar6 >> 8 & 0xff00ff;
                          iVar49 = 0x100 - (uVar6 >> 0x18);
                          iVar18 = ((uint)pbVar33[-1] * iVar49 >> 8) + uVar25;
                          uVar25 = (((uint)*pbVar33 << 0x10 | (uint)pbVar33[-2]) * iVar49 >> 8 &
                                   0xff00ff) + uVar25;
                          uVar25 = 0x100 - (uVar25 >> 8 & 0x10001) | uVar25;
                          pbVar33[-1] = -(char)((uint)iVar18 >> 8) | (byte)iVar18;
                          *pbVar33 = (byte)(uVar25 >> 0x10);
                          pbVar33[-2] = (byte)uVar25;
                          pbVar32 = pbVar32 + lVar15;
                          uVar11 = uVar11 - 1;
                          pbVar33 = pbVar33 + lVar22;
                        } while (1 < uVar11);
                      }
                      else {
                        lVar29 = (long)((iVar18 - param_5) * iVar41);
                        if (((iVar47 == iVar41) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1)
                           ) {
                          memcpy((void *)(lVar43 + lVar13),(void *)(lVar29 + lVar46),
                                 (long)(iVar47 * (iVar48 - iVar18)));
                        }
                        else {
                          pbVar33 = (byte *)(lVar29 + lVar39);
                          pbVar32 = (byte *)(lVar43 + lVar21);
                          do {
                            bVar9 = *pbVar33;
                            uVar25 = (uint)bVar9 << 0x10 | (uint)bVar9;
                            uVar11 = (((uint)*pbVar32 << 0x10 | (uint)pbVar32[-2]) *
                                      (0x100 - (uint)bVar9) >> 8 & 0xff00ff) + uVar25;
                            uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                            iVar49 = ((uint)pbVar32[-1] * (0x100 - (uint)bVar9) >> 8) + uVar25;
                            pbVar32[-1] = -(char)((uint)iVar49 >> 8) | (byte)iVar49;
                            *pbVar32 = (byte)(uVar11 >> 0x10);
                            pbVar32[-2] = (byte)uVar11;
                            uVar6 = uVar6 - 1;
                            pbVar33 = pbVar33 + lVar15;
                            pbVar32 = pbVar32 + lVar22;
                          } while (1 < uVar6);
                        }
                      }
                    }
                  }
                  uVar25 = (uVar23 & 0xff) * uVar34;
                }
                uVar8 = (ulong)(uVar5 - 1);
                puVar37 = puVar37 + 2;
                bVar51 = 2 < (int)uVar5;
                uVar11 = uVar23;
                uVar5 = uVar5 - 1;
              } while (bVar51);
              if (0xff < (int)uVar25) {
                bVar9 = (byte)(uVar25 + 0xff >> 8);
                if (-1 < (int)uVar25) {
                  bVar9 = (byte)(uVar25 >> 8);
                }
                iVar49 = (int)((uint)bVar9 * iVar1) >> 8;
                if (0xfeff < uVar25) {
                  iVar49 = iVar1;
                }
                lVar21 = (long)(int)param_2[3] * (long)iVar48;
                bVar9 = *(byte *)(lVar46 + (long)(iVar48 - param_5) * (long)(int)param_3[3]);
                uVar5 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar49;
                uVar11 = uVar5 >> 8 & 0xff00ff;
                iVar48 = 0x100 - (uVar5 >> 0x18);
                uVar5 = ((uint)*(byte *)(lVar13 + 1 + lVar21) * iVar48 >> 8) + uVar11;
                uVar5 = -(uVar5 >> 8) | uVar5;
                uVar8 = (ulong)uVar5;
                uVar11 = (((uint)*(byte *)(lVar13 + 2 + lVar21) << 0x10 |
                          (uint)*(byte *)(lVar13 + lVar21)) * iVar48 >> 8 & 0xff00ff) + uVar11;
                uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                *(char *)(lVar13 + 1 + lVar21) = (char)uVar5;
                *(char *)(lVar13 + 2 + lVar21) = (char)(uVar11 >> 0x10);
                *(char *)(lVar13 + lVar21) = (char)uVar11;
              }
            }
            puVar30 = puVar30 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = iVar10;
        if (param_5 % iVar10 < 0) {
          iVar17 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar49 = 0;
        if (-1 < param_6 % iVar48) {
          iVar49 = iVar48;
        }
        uVar5 = *(uint *)((long)param_1 + 0x1c);
        if (0 < (int)uVar5) {
          iVar17 = param_5 % iVar10 - iVar17;
          piVar27 = (int *)*param_1;
          iVar18 = *(int *)((long)param_1 + 0x24);
          iVar47 = *(int *)((long)param_1 + 0x14);
          lVar13 = *param_2;
          lVar43 = (long)*(int *)((long)param_2 + 0x14);
          lVar21 = *param_3;
          iVar41 = *(int *)((long)param_3 + 0x14);
          lVar39 = param_2[3];
          lVar46 = param_3[3];
          uVar8 = iVar47 * lVar43 + lVar13 + 1;
          uVar14 = 0;
          local_90 = uVar8;
          do {
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar22 = (long)iVar47 + uVar14;
              lVar15 = lVar22 * lVar43 + lVar13;
              lVar29 = (long)(((int)lVar22 + (iVar49 - param_6 % iVar48)) % iVar48) * (long)iVar41 +
                       lVar21;
              lVar22 = param_2[3];
              lVar40 = (long)(int)lVar22;
              iVar7 = (int)param_3[3];
              iVar12 = *(int *)((long)param_3 + 0x1c);
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar45 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar44 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar35 = (int)uVar23 >> 8;
                uVar23 = iVar44 - iVar35;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar50 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar50 = iVar1;
                    }
                    lVar31 = iVar35 * lVar40;
                    bVar9 = *(byte *)(lVar29 + ((iVar35 - iVar17) % iVar12) * iVar7);
                    uVar34 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar50;
                    uVar11 = uVar34 >> 8 & 0xff00ff;
                    iVar20 = 0x100 - (uVar34 >> 0x18);
                    iVar50 = ((uint)*(byte *)(lVar15 + 1 + lVar31) * iVar20 >> 8) + uVar11;
                    uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar31) << 0x10 |
                              (uint)*(byte *)(lVar15 + lVar31)) * iVar20 >> 8 & 0xff00ff) + uVar11;
                    uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                    *(byte *)(lVar15 + 1 + lVar31) = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                    *(char *)(lVar15 + 2 + lVar31) = (char)(uVar11 >> 0x10);
                    *(char *)(lVar15 + lVar31) = (char)uVar11;
                  }
                  if ((0 < (int)uVar6) && (iVar50 = iVar35 + 1, iVar50 < iVar44)) {
                    lVar31 = (long)((int)lVar22 * iVar50);
                    iVar20 = (uVar6 & 0xff) * iVar1;
                    if (iVar20 < 0xfe00) {
                      uVar11 = iVar44 - iVar35;
                      pbVar33 = (byte *)(lVar31 + local_90);
                      iVar35 = iVar50 - iVar17;
                      do {
                        bVar9 = *(byte *)(lVar29 + (iVar35 % iVar12) * iVar7);
                        uVar34 = ((uint)bVar9 << 0x10 | (uint)bVar9) * (iVar20 >> 8);
                        uVar23 = uVar34 >> 8 & 0xff00ff;
                        iVar24 = 0x100 - (uVar34 >> 0x18);
                        iVar50 = ((uint)*pbVar33 * iVar24 >> 8) + uVar23;
                        uVar23 = (((uint)pbVar33[1] << 0x10 | (uint)pbVar33[-1]) * iVar24 >> 8 &
                                 0xff00ff) + uVar23;
                        uVar23 = 0x100 - (uVar23 >> 8 & 0x10001) | uVar23;
                        *pbVar33 = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                        pbVar33[1] = (byte)(uVar23 >> 0x10);
                        pbVar33[-1] = (byte)uVar23;
                        uVar11 = uVar11 - 1;
                        pbVar33 = pbVar33 + lVar40;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar11);
                    }
                    else {
                      pbVar33 = (byte *)(lVar31 + lVar15);
                      iVar35 = iVar50 - iVar17;
                      do {
                        bVar9 = *(byte *)(lVar29 + (iVar35 % iVar12) * iVar7);
                        uVar11 = (uint)bVar9 << 0x10 | (uint)bVar9;
                        uVar34 = (((uint)pbVar33[2] << 0x10 | (uint)*pbVar33) *
                                  (0x100 - (uint)bVar9) >> 8 & 0xff00ff) + uVar11;
                        uVar34 = 0x100 - (uVar34 >> 8 & 0x10001) | uVar34;
                        iVar50 = ((uint)pbVar33[1] * (0x100 - (uint)bVar9) >> 8) + uVar11;
                        pbVar33[1] = -(char)((uint)iVar50 >> 8) | (byte)iVar50;
                        pbVar33[2] = (byte)(uVar34 >> 0x10);
                        *pbVar33 = (byte)uVar34;
                        pbVar33 = pbVar33 + lVar40;
                        uVar23 = uVar23 - 1;
                        iVar35 = iVar35 + 1;
                      } while (1 < uVar23);
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar45;
                uVar11 = uVar25;
                iVar45 = iVar45 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar7 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar7 = iVar1;
                }
                lVar22 = (long)iVar44 * (long)(int)lVar39;
                bVar9 = *(byte *)(lVar29 + (long)((iVar44 - iVar17) % iVar10) * (long)(int)lVar46);
                uVar25 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar7;
                uVar11 = uVar25 >> 8 & 0xff00ff;
                iVar12 = 0x100 - (uVar25 >> 0x18);
                iVar7 = ((uint)*(byte *)(lVar15 + 1 + lVar22) * iVar12 >> 8) + uVar11;
                uVar11 = (((uint)*(byte *)(lVar15 + 2 + lVar22) << 0x10 |
                          (uint)*(byte *)(lVar15 + lVar22)) * iVar12 >> 8 & 0xff00ff) + uVar11;
                uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                *(byte *)(lVar15 + 1 + lVar22) = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
                uVar8 = (ulong)(uVar11 >> 0x10);
                *(char *)(lVar15 + 2 + lVar22) = (char)(uVar11 >> 0x10);
                *(char *)(lVar15 + lVar22) = (char)uVar11;
              }
            }
            piVar27 = piVar27 + iVar18;
            uVar14 = uVar14 + 1;
            local_90 = local_90 + lVar43;
          } while (uVar14 != uVar5);
        }
      }
    }
  }
  else if ((int)param_2[2] == 2) {
    if ((int)param_3[2] == 1) {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          piVar27 = (int *)*param_1;
          iVar17 = 0;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar13 = (long)iVar17 + (long)*(int *)((long)param_1 + 0x14);
              lVar21 = *(int *)((long)param_2 + 0x14) * lVar13 + *param_2;
              lVar13 = (long)*(int *)((long)param_3 + 0x14) * (long)((int)lVar13 - param_6) +
                       *param_3;
              uVar8 = 0;
              uVar5 = piVar27[1];
              iVar48 = *piVar27;
              do {
                uVar11 = piVar42[2];
                uVar25 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar25 = uVar11;
                }
                uVar23 = piVar42[1];
                iVar49 = (int)uVar25 >> 8;
                uVar25 = uVar5 + 0xff;
                if (-1 < (int)uVar5) {
                  uVar25 = uVar5;
                }
                iVar18 = (int)uVar25 >> 8;
                uVar25 = iVar49 - iVar18;
                if (uVar25 == 0) {
                  uVar23 = (int)uVar8 + (uVar11 - uVar5) * uVar23;
                }
                else {
                  uVar5 = (0x100 - (uVar5 & 0xff)) * uVar23 + (int)uVar8;
                  if (0xff < (int)uVar5) {
                    bVar9 = (byte)(uVar5 + 0xff >> 8);
                    if (-1 < (int)uVar5) {
                      bVar9 = (byte)(uVar5 >> 8);
                    }
                    iVar47 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar5) {
                      iVar47 = iVar1;
                    }
                    lVar39 = (long)(iVar18 - param_5) * (long)(int)param_3[3];
                    lVar46 = (long)(int)param_2[3] * (long)iVar18;
                    uVar34 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar47;
                    iVar41 = 0x100 - (uVar34 >> 0x18);
                    uVar5 = *(uint *)(lVar21 + lVar46);
                    uVar6 = ((uVar5 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) +
                            (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                             (uint)*(byte *)(lVar13 + lVar39)) * iVar47 >> 8 & 0xff00ff);
                    uVar5 = ((uVar5 >> 8 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) +
                            (uVar34 >> 8 & 0xff00ff);
                    *(uint *)(lVar21 + lVar46) =
                         ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                         (0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff;
                  }
                  if (0 < (int)uVar23) {
                    lVar39 = (long)iVar18 + 1;
                    iVar47 = (int)lVar39;
                    if (iVar49 - iVar47 != 0 && iVar47 <= iVar49) {
                      iVar41 = (int)param_2[3];
                      lVar46 = (long)iVar41;
                      puVar30 = (uint *)(lVar39 * lVar46 + lVar21);
                      iVar7 = (uVar23 & 0xff) * iVar1;
                      iVar12 = iVar47 - param_5;
                      if (iVar7 < 0xfe00) {
                        iVar7 = iVar7 >> 8;
                        uVar5 = iVar49 - iVar18;
                        do {
                          lVar39 = (long)iVar12;
                          iVar12 = iVar12 + 1;
                          lVar39 = lVar39 * (int)param_3[3];
                          uVar25 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar7;
                          iVar18 = 0x100 - (uVar25 >> 0x18);
                          uVar6 = ((*puVar30 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                                  (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                                   (uint)*(byte *)(lVar13 + lVar39)) * iVar7 >> 8 & 0xff00ff);
                          uVar25 = ((*puVar30 >> 8 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                                   (uVar25 >> 8 & 0xff00ff);
                          *puVar30 = ((0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff) << 8 |
                                     (0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar5 = uVar5 - 1;
                        } while (1 < uVar5);
                      }
                      else {
                        iVar18 = (int)param_3[3];
                        __src_00 = (uint3 *)(iVar12 * iVar18 + lVar13);
                        if (((iVar41 == iVar18) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1)
                           ) {
                          memcpy(puVar30,__src_00,(long)(iVar41 * (iVar49 - iVar47)));
                        }
                        else {
                          do {
                            *puVar30 = *__src_00 | 0xff000000;
                            puVar30 = (uint *)((long)puVar30 + lVar46);
                            __src_00 = (uint3 *)((long)__src_00 + (long)iVar18);
                            uVar25 = uVar25 - 1;
                          } while (1 < uVar25);
                        }
                      }
                    }
                  }
                  uVar23 = (uVar11 & 0xff) * uVar23;
                }
                uVar8 = (ulong)uVar23;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar48;
                uVar5 = uVar11;
                iVar48 = iVar48 + -1;
              } while (bVar51);
              if (0xff < (int)uVar23) {
                uVar5 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar5 = uVar23;
                }
                iVar48 = (int)((uVar5 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar23) {
                  iVar48 = iVar1;
                }
                lVar39 = (long)(iVar49 - param_5) * (long)(int)param_3[3];
                lVar46 = (long)(int)param_2[3] * (long)iVar49;
                uVar25 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar48;
                uVar11 = 0x100 - (uVar25 >> 0x18);
                uVar8 = (ulong)uVar11;
                uVar5 = *(uint *)(lVar21 + lVar46);
                uVar23 = ((uVar5 & 0xff00ff) * uVar11 >> 8 & 0xff00ff) +
                         (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                          (uint)*(byte *)(lVar13 + lVar39)) * iVar48 >> 8 & 0xff00ff);
                uVar5 = ((uVar5 >> 8 & 0xff00ff) * uVar11 >> 8 & 0xff00ff) +
                        (uVar25 >> 8 & 0xff00ff);
                *(uint *)(lVar21 + lVar46) =
                     ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                     (0x100 - (uVar23 >> 8 & 0x10001) | uVar23) & 0xff00ff;
              }
            }
            piVar27 = piVar27 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = param_5 % iVar10;
        iVar49 = 0;
        if (iVar17 < 0) {
          iVar10 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar18 = param_6 % iVar48;
        if (iVar18 < 0) {
          iVar48 = 0;
        }
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          iVar17 = iVar17 - iVar10;
          uVar5 = iVar48 - iVar18;
          uVar8 = (ulong)uVar5;
          piVar27 = (int *)*param_1;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar13 = (long)iVar49 + (long)*(int *)((long)param_1 + 0x14);
              lVar21 = *(int *)((long)param_2 + 0x14) * lVar13 + *param_2;
              lVar13 = (long)*(int *)((long)param_3 + 0x14) *
                       (long)((int)(uVar5 + (int)lVar13) % (int)param_3[4]) + *param_3;
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar48 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar18 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar47 = (int)uVar23 >> 8;
                uVar23 = iVar18 - iVar47;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar41 = iVar1;
                    }
                    lVar39 = (long)((iVar47 - iVar17) % *(int *)((long)param_3 + 0x1c)) *
                             (long)(int)param_3[3];
                    lVar46 = (long)(int)param_2[3] * (long)iVar47;
                    uVar34 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar41;
                    iVar7 = 0x100 - (uVar34 >> 0x18);
                    uVar11 = *(uint *)(lVar21 + lVar46);
                    uVar19 = ((uVar11 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                             (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                              (uint)*(byte *)(lVar13 + lVar39)) * iVar41 >> 8 & 0xff00ff);
                    uVar11 = ((uVar11 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                             (uVar34 >> 8 & 0xff00ff);
                    *(uint *)(lVar21 + lVar46) =
                         ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                         (0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff;
                  }
                  if (0 < (int)uVar6) {
                    lVar39 = (long)iVar47 + 1;
                    iVar41 = (int)lVar39;
                    if (iVar41 < iVar18) {
                      lVar46 = (long)(int)param_2[3];
                      puVar30 = (uint *)(lVar39 * lVar46 + lVar21);
                      iVar7 = (uVar6 & 0xff) * iVar1;
                      iVar41 = iVar41 - iVar17;
                      if (iVar7 < 0xfe00) {
                        iVar7 = iVar7 >> 8;
                        uVar11 = iVar18 - iVar47;
                        do {
                          lVar39 = (long)(iVar41 % *(int *)((long)param_3 + 0x1c)) *
                                   (long)(int)param_3[3];
                          uVar23 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar7;
                          iVar47 = 0x100 - (uVar23 >> 0x18);
                          uVar34 = ((*puVar30 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                                    (uint)*(byte *)(lVar13 + lVar39)) * iVar7 >> 8 & 0xff00ff);
                          uVar23 = ((*puVar30 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   (uVar23 >> 8 & 0xff00ff);
                          *puVar30 = ((0x100 - (uVar23 >> 8 & 0x10001) | uVar23) & 0xff00ff) << 8 |
                                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar11 = uVar11 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar11);
                      }
                      else {
                        do {
                          lVar39 = (long)(iVar41 % *(int *)((long)param_3 + 0x1c)) *
                                   (long)(int)param_3[3];
                          *puVar30 = CONCAT12(*(undefined1 *)(lVar13 + 2 + lVar39),
                                              *(undefined2 *)(lVar13 + lVar39)) | 0xff000000;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar23 = uVar23 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar23);
                      }
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar48;
                uVar11 = uVar25;
                iVar48 = iVar48 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar48 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar48 = iVar1;
                }
                lVar39 = (long)((iVar18 - iVar17) % *(int *)((long)param_3 + 0x1c)) *
                         (long)(int)param_3[3];
                lVar46 = (long)iVar18 * (long)(int)param_2[3];
                uVar23 = (*(byte *)(lVar13 + 1 + lVar39) | 0xff0000) * iVar48;
                uVar25 = 0x100 - (uVar23 >> 0x18);
                uVar8 = (ulong)uVar25;
                uVar11 = *(uint *)(lVar21 + lVar46);
                uVar6 = ((uVar11 & 0xff00ff) * uVar25 >> 8 & 0xff00ff) +
                        (((uint)*(byte *)(lVar13 + 2 + lVar39) << 0x10 |
                         (uint)*(byte *)(lVar13 + lVar39)) * iVar48 >> 8 & 0xff00ff);
                uVar11 = ((uVar11 >> 8 & 0xff00ff) * uVar25 >> 8 & 0xff00ff) +
                         (uVar23 >> 8 & 0xff00ff);
                *(uint *)(lVar21 + lVar46) =
                     ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                     (0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff;
              }
            }
            piVar27 = piVar27 + iVar10;
            iVar49 = iVar49 + 1;
          } while (iVar49 < *(int *)((long)param_1 + 0x1c));
        }
      }
    }
    else if ((int)param_3[2] == 2) {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          puVar30 = (uint *)*param_1;
          iVar17 = 0;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < (int)*puVar30) {
              puVar37 = puVar30 + 1;
              lVar13 = (long)iVar17 + (long)*(int *)((long)param_1 + 0x14);
              lVar21 = *(int *)((long)param_2 + 0x14) * lVar13 + *param_2;
              lVar13 = (long)*(int *)((long)param_3 + 0x14) * (long)((int)lVar13 - param_6) +
                       *param_3;
              uVar25 = 0;
              uVar5 = *puVar30;
              uVar11 = puVar30[1];
              do {
                uVar23 = puVar37[2];
                uVar6 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar6 = uVar23;
                }
                uVar34 = puVar37[1];
                iVar48 = (int)uVar6 >> 8;
                uVar6 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar6 = uVar11;
                }
                iVar49 = (int)uVar6 >> 8;
                uVar6 = iVar48 - iVar49;
                if (uVar6 == 0) {
                  uVar25 = uVar25 + (uVar23 - uVar11) * uVar34;
                }
                else {
                  uVar25 = (0x100 - (uVar11 & 0xff)) * uVar34 + uVar25;
                  if (0xff < (int)uVar25) {
                    bVar9 = (byte)(uVar25 + 0xff >> 8);
                    if (-1 < (int)uVar25) {
                      bVar9 = (byte)(uVar25 >> 8);
                    }
                    iVar18 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar25) {
                      iVar18 = iVar1;
                    }
                    lVar39 = (long)(int)param_2[3] * (long)iVar49;
                    uVar11 = *(uint *)(lVar13 + (long)(iVar49 - param_5) * (long)(int)param_3[3]);
                    uVar19 = (uVar11 >> 8 & 0xff00ff) * iVar18;
                    iVar47 = 0x100 - (uVar19 >> 0x18);
                    uVar25 = *(uint *)(lVar21 + lVar39);
                    uVar11 = ((uVar25 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                             ((uVar11 & 0xff00ff) * iVar18 >> 8 & 0xff00ff);
                    uVar25 = ((uVar25 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                             (uVar19 >> 8 & 0xff00ff);
                    *(uint *)(lVar21 + lVar39) =
                         ((0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff) << 8 |
                         (0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff;
                  }
                  if (0 < (int)uVar34) {
                    lVar39 = (long)iVar49 + 1;
                    iVar18 = (int)lVar39;
                    if (iVar48 - iVar18 != 0 && iVar18 <= iVar48) {
                      iVar47 = (int)param_2[3];
                      lVar46 = (long)iVar47;
                      puVar38 = (uint *)(lVar39 * lVar46 + lVar21);
                      iVar41 = (uVar34 & 0xff) * iVar1;
                      iVar7 = iVar18 - param_5;
                      if (iVar41 < 0xfe00) {
                        iVar41 = iVar41 >> 8;
                        uVar11 = iVar48 - iVar49;
                        do {
                          lVar39 = (long)iVar7;
                          iVar7 = iVar7 + 1;
                          uVar25 = *(uint *)(lVar13 + lVar39 * (int)param_3[3]);
                          uVar6 = (uVar25 >> 8 & 0xff00ff) * iVar41;
                          iVar49 = 0x100 - (uVar6 >> 0x18);
                          uVar25 = ((*puVar38 & 0xff00ff) * iVar49 >> 8 & 0xff00ff) +
                                   ((uVar25 & 0xff00ff) * iVar41 >> 8 & 0xff00ff);
                          uVar6 = ((*puVar38 >> 8 & 0xff00ff) * iVar49 >> 8 & 0xff00ff) +
                                  (uVar6 >> 8 & 0xff00ff);
                          *puVar38 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                                     (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
                          puVar38 = (uint *)((long)puVar38 + lVar46);
                          uVar11 = uVar11 - 1;
                        } while (1 < uVar11);
                      }
                      else {
                        iVar49 = (int)param_3[3];
                        __src = (uint *)(iVar7 * iVar49 + lVar13);
                        if (((iVar47 == iVar49) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1)
                           ) {
                          memcpy(puVar38,__src,(long)(iVar47 * (iVar48 - iVar18)));
                        }
                        else {
                          do {
                            uVar11 = *__src;
                            iVar18 = 0x100 - (uVar11 >> 0x18);
                            uVar25 = ((*puVar38 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                                     (uVar11 & 0xff00ff);
                            uVar11 = ((*puVar38 >> 8 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                                     (uVar11 >> 8 & 0xff00ff);
                            *puVar38 = ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8
                                       | (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
                            puVar38 = (uint *)((long)puVar38 + lVar46);
                            __src = (uint *)((long)__src + (long)iVar49);
                            uVar6 = uVar6 - 1;
                          } while (1 < uVar6);
                        }
                      }
                    }
                  }
                  uVar25 = (uVar23 & 0xff) * uVar34;
                }
                uVar8 = (ulong)(uVar5 - 1);
                puVar37 = puVar37 + 2;
                bVar51 = 2 < (int)uVar5;
                uVar5 = uVar5 - 1;
                uVar11 = uVar23;
              } while (bVar51);
              if (0xff < (int)uVar25) {
                uVar5 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar5 = uVar25;
                }
                iVar49 = (int)((uVar5 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar25) {
                  iVar49 = iVar1;
                }
                lVar39 = (long)(int)param_2[3] * (long)iVar48;
                uVar5 = *(uint *)(lVar13 + (long)(iVar48 - param_5) * (long)(int)param_3[3]);
                uVar25 = (uVar5 >> 8 & 0xff00ff) * iVar49;
                iVar48 = 0x100 - (uVar25 >> 0x18);
                uVar11 = *(uint *)(lVar21 + lVar39);
                uVar5 = ((uVar11 & 0xff00ff) * iVar48 >> 8 & 0xff00ff) +
                        ((uVar5 & 0xff00ff) * iVar49 >> 8 & 0xff00ff);
                uVar11 = ((uVar11 >> 8 & 0xff00ff) * iVar48 >> 8 & 0xff00ff) +
                         (uVar25 >> 8 & 0xff00ff);
                uVar5 = (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff;
                uVar8 = (ulong)uVar5;
                *(uint *)(lVar21 + lVar39) =
                     ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 | uVar5;
              }
            }
            puVar30 = puVar30 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = param_5 % iVar10;
        iVar49 = 0;
        if (iVar17 < 0) {
          iVar10 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar18 = param_6 % iVar48;
        if (iVar18 < 0) {
          iVar48 = 0;
        }
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          iVar17 = iVar17 - iVar10;
          uVar5 = iVar48 - iVar18;
          uVar8 = (ulong)uVar5;
          piVar27 = (int *)*param_1;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar13 = (long)iVar49 + (long)*(int *)((long)param_1 + 0x14);
              lVar21 = *(int *)((long)param_2 + 0x14) * lVar13 + *param_2;
              lVar13 = (long)*(int *)((long)param_3 + 0x14) *
                       (long)((int)(uVar5 + (int)lVar13) % (int)param_3[4]) + *param_3;
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar48 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar18 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar47 = (int)uVar23 >> 8;
                uVar23 = iVar18 - iVar47;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar41 = iVar1;
                    }
                    lVar39 = (long)(int)param_2[3] * (long)iVar47;
                    uVar11 = *(uint *)(lVar13 + (long)((iVar47 - iVar17) %
                                                      *(int *)((long)param_3 + 0x1c)) *
                                                (long)(int)param_3[3]);
                    uVar19 = (uVar11 >> 8 & 0xff00ff) * iVar41;
                    iVar7 = 0x100 - (uVar19 >> 0x18);
                    uVar34 = *(uint *)(lVar21 + lVar39);
                    uVar11 = ((uVar34 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                             ((uVar11 & 0xff00ff) * iVar41 >> 8 & 0xff00ff);
                    uVar34 = ((uVar34 >> 8 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) +
                             (uVar19 >> 8 & 0xff00ff);
                    *(uint *)(lVar21 + lVar39) =
                         ((0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff) << 8 |
                         (0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff;
                  }
                  if (0 < (int)uVar6) {
                    lVar39 = (long)iVar47 + 1;
                    iVar41 = (int)lVar39;
                    if (iVar41 < iVar18) {
                      lVar46 = (long)(int)param_2[3];
                      puVar30 = (uint *)(lVar39 * lVar46 + lVar21);
                      iVar7 = (uVar6 & 0xff) * iVar1;
                      iVar41 = iVar41 - iVar17;
                      if (iVar7 < 0xfe00) {
                        iVar7 = iVar7 >> 8;
                        uVar11 = iVar18 - iVar47;
                        do {
                          uVar23 = *(uint *)(lVar13 + (long)(iVar41 % *(int *)((long)param_3 + 0x1c)
                                                            ) * (long)(int)param_3[3]);
                          uVar34 = (uVar23 >> 8 & 0xff00ff) * iVar7;
                          iVar47 = 0x100 - (uVar34 >> 0x18);
                          uVar19 = ((*puVar30 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   ((uVar23 & 0xff00ff) * iVar7 >> 8 & 0xff00ff);
                          uVar23 = ((*puVar30 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   (uVar34 >> 8 & 0xff00ff);
                          *puVar30 = ((0x100 - (uVar23 >> 8 & 0x10001) | uVar23) & 0xff00ff) << 8 |
                                     (0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar11 = uVar11 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar11);
                      }
                      else {
                        do {
                          uVar11 = *(uint *)(lVar13 + (long)(iVar41 % *(int *)((long)param_3 + 0x1c)
                                                            ) * (long)(int)param_3[3]);
                          iVar47 = 0x100 - (uVar11 >> 0x18);
                          uVar34 = ((*puVar30 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   (uVar11 & 0xff00ff);
                          uVar11 = ((*puVar30 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) +
                                   (uVar11 >> 8 & 0xff00ff);
                          *puVar30 = ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar23 = uVar23 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar23);
                      }
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar48;
                uVar11 = uVar25;
                iVar48 = iVar48 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar48 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar48 = iVar1;
                }
                lVar39 = (long)iVar18 * (long)(int)param_2[3];
                uVar11 = *(uint *)(lVar13 + (long)((iVar18 - iVar17) %
                                                  *(int *)((long)param_3 + 0x1c)) *
                                            (long)(int)param_3[3]);
                uVar6 = (uVar11 >> 8 & 0xff00ff) * iVar48;
                uVar23 = 0x100 - (uVar6 >> 0x18);
                uVar8 = (ulong)uVar23;
                uVar25 = *(uint *)(lVar21 + lVar39);
                uVar34 = ((uVar25 & 0xff00ff) * uVar23 >> 8 & 0xff00ff) +
                         ((uVar11 & 0xff00ff) * iVar48 >> 8 & 0xff00ff);
                uVar11 = ((uVar25 >> 8 & 0xff00ff) * uVar23 >> 8 & 0xff00ff) +
                         (uVar6 >> 8 & 0xff00ff);
                *(uint *)(lVar21 + lVar39) =
                     ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
              }
            }
            piVar27 = piVar27 + iVar10;
            iVar49 = iVar49 + 1;
          } while (iVar49 < *(int *)((long)param_1 + 0x1c));
        }
      }
    }
    else {
      iVar1 = param_4 + 1;
      if (param_7 == 0) {
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          puVar30 = (uint *)*param_1;
          iVar17 = 0;
          uVar8 = -(long)param_6;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < (int)*puVar30) {
              puVar37 = puVar30 + 1;
              iVar49 = *(int *)((long)param_1 + 0x14) + iVar17;
              lVar21 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar49 + *param_2;
              lVar13 = *param_3;
              iVar48 = *(int *)((long)param_3 + 0x14);
              lVar39 = (long)(iVar49 - param_6) * (long)iVar48 + lVar13;
              uVar25 = 0;
              uVar5 = *puVar30;
              uVar11 = puVar30[1];
              do {
                uVar23 = puVar37[2];
                uVar6 = uVar23 + 0xff;
                if (-1 < (int)uVar23) {
                  uVar6 = uVar23;
                }
                uVar34 = puVar37[1];
                iVar18 = (int)uVar6 >> 8;
                uVar6 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar6 = uVar11;
                }
                iVar47 = (int)uVar6 >> 8;
                uVar6 = iVar18 - iVar47;
                if (uVar6 == 0) {
                  uVar25 = uVar25 + (uVar23 - uVar11) * uVar34;
                }
                else {
                  uVar25 = (0x100 - (uVar11 & 0xff)) * uVar34 + uVar25;
                  if (0xff < (int)uVar25) {
                    bVar9 = (byte)(uVar25 + 0xff >> 8);
                    if (-1 < (int)uVar25) {
                      bVar9 = (byte)(uVar25 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar25) {
                      iVar41 = iVar1;
                    }
                    lVar46 = (long)(int)param_2[3] * (long)iVar47;
                    bVar9 = *(byte *)(lVar39 + (long)(iVar47 - param_5) * (long)(int)param_3[3]);
                    uVar11 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar41;
                    uVar19 = uVar11 >> 8 & 0xff00ff;
                    iVar41 = 0x100 - (uVar11 >> 0x18);
                    uVar11 = *(uint *)(lVar21 + lVar46);
                    uVar25 = ((uVar11 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) + uVar19;
                    uVar19 = ((uVar11 >> 8 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) + uVar19;
                    *(uint *)(lVar21 + lVar46) =
                         ((0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff) << 8 |
                         (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
                  }
                  if (0 < (int)uVar34) {
                    lVar46 = (long)iVar47 + 1;
                    iVar41 = (int)lVar46;
                    if (iVar18 - iVar41 != 0 && iVar41 <= iVar18) {
                      iVar7 = (int)param_2[3];
                      lVar43 = (long)iVar7;
                      puVar38 = (uint *)(lVar46 * lVar43 + lVar21);
                      iVar45 = (uVar34 & 0xff) * iVar1;
                      iVar12 = iVar41 - param_5;
                      if (iVar45 < 0xfe00) {
                        uVar11 = iVar18 - iVar47;
                        do {
                          lVar46 = (long)iVar12;
                          iVar12 = iVar12 + 1;
                          bVar9 = *(byte *)(lVar39 + lVar46 * (int)param_3[3]);
                          uVar25 = ((uint)bVar9 << 0x10 | (uint)bVar9) * (iVar45 >> 8);
                          uVar6 = uVar25 >> 8 & 0xff00ff;
                          iVar47 = 0x100 - (uVar25 >> 0x18);
                          uVar25 = ((*puVar38 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) + uVar6;
                          uVar6 = ((*puVar38 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) + uVar6;
                          *puVar38 = ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                                     (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
                          puVar38 = (uint *)((long)puVar38 + lVar43);
                          uVar11 = uVar11 - 1;
                        } while (1 < uVar11);
                      }
                      else {
                        iVar47 = (int)param_3[3];
                        if (((iVar7 == iVar47) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1))
                        {
                          memcpy(puVar38,(void *)(iVar12 * iVar47 + lVar39),
                                 (long)(iVar7 * (iVar18 - iVar41)));
                        }
                        else {
                          pbVar33 = (byte *)((long)(iVar12 * iVar47) +
                                            ((long)iVar49 + -(long)param_6) * (long)iVar48 + lVar13)
                          ;
                          do {
                            bVar9 = *pbVar33;
                            uVar11 = (uint)bVar9 << 0x10 | (uint)bVar9;
                            uVar25 = ((*puVar38 & 0xff00ff) * (0x100 - (uint)bVar9) >> 8 & 0xff00ff)
                                     + uVar11;
                            uVar11 = ((*puVar38 >> 8 & 0xff00ff) * (0x100 - (uint)bVar9) >> 8 &
                                     0xff00ff) + uVar11;
                            *puVar38 = ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8
                                       | (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
                            puVar38 = (uint *)((long)puVar38 + lVar43);
                            uVar6 = uVar6 - 1;
                            pbVar33 = pbVar33 + iVar47;
                          } while (1 < uVar6);
                        }
                      }
                    }
                  }
                  uVar25 = (uVar23 & 0xff) * uVar34;
                }
                uVar8 = (ulong)(uVar5 - 1);
                puVar37 = puVar37 + 2;
                bVar51 = 2 < (int)uVar5;
                uVar5 = uVar5 - 1;
                uVar11 = uVar23;
              } while (bVar51);
              if (0xff < (int)uVar25) {
                bVar9 = (byte)(uVar25 + 0xff >> 8);
                if (-1 < (int)uVar25) {
                  bVar9 = (byte)(uVar25 >> 8);
                }
                iVar48 = (int)((uint)bVar9 * iVar1) >> 8;
                if (0xfeff < uVar25) {
                  iVar48 = iVar1;
                }
                uVar8 = (long)(int)param_2[3] * (long)iVar18;
                bVar9 = *(byte *)(lVar39 + (long)(iVar18 - param_5) * (long)(int)param_3[3]);
                uVar11 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar48;
                uVar5 = uVar11 >> 8 & 0xff00ff;
                iVar48 = 0x100 - (uVar11 >> 0x18);
                uVar11 = ((*(uint *)(lVar21 + uVar8) & 0xff00ff) * iVar48 >> 8 & 0xff00ff) + uVar5;
                uVar5 = ((*(uint *)(lVar21 + uVar8) >> 8 & 0xff00ff) * iVar48 >> 8 & 0xff00ff) +
                        uVar5;
                *(uint *)(lVar21 + uVar8) =
                     ((0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff) << 8 |
                     (0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff;
              }
            }
            puVar30 = puVar30 + iVar10;
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)((long)param_1 + 0x1c));
        }
      }
      else {
        iVar10 = *(int *)((long)param_3 + 0x1c);
        iVar48 = (int)param_3[4];
        iVar17 = param_5 % iVar10;
        iVar49 = 0;
        if (iVar17 < 0) {
          iVar10 = 0;
        }
        uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
        iVar18 = param_6 % iVar48;
        if (iVar18 < 0) {
          iVar48 = 0;
        }
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          iVar17 = iVar17 - iVar10;
          uVar5 = iVar48 - iVar18;
          uVar8 = (ulong)uVar5;
          piVar27 = (int *)*param_1;
          do {
            iVar10 = *(int *)((long)param_1 + 0x24);
            if (1 < *piVar27) {
              piVar42 = piVar27 + 1;
              lVar21 = (long)iVar49 + (long)*(int *)((long)param_1 + 0x14);
              lVar13 = *(int *)((long)param_2 + 0x14) * lVar21 + *param_2;
              lVar21 = (long)*(int *)((long)param_3 + 0x14) *
                       (long)((int)(uVar5 + (int)lVar21) % (int)param_3[4]) + *param_3;
              uVar8 = 0;
              uVar11 = piVar27[1];
              iVar48 = *piVar27;
              do {
                uVar25 = piVar42[2];
                uVar23 = uVar25 + 0xff;
                if (-1 < (int)uVar25) {
                  uVar23 = uVar25;
                }
                uVar6 = piVar42[1];
                iVar18 = (int)uVar23 >> 8;
                uVar23 = uVar11 + 0xff;
                if (-1 < (int)uVar11) {
                  uVar23 = uVar11;
                }
                iVar47 = (int)uVar23 >> 8;
                uVar23 = iVar18 - iVar47;
                if (uVar23 == 0) {
                  uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
                }
                else {
                  uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                  if (0xff < (int)uVar11) {
                    bVar9 = (byte)(uVar11 + 0xff >> 8);
                    if (-1 < (int)uVar11) {
                      bVar9 = (byte)(uVar11 >> 8);
                    }
                    iVar41 = (int)((uint)bVar9 * iVar1) >> 8;
                    if (0xfeff < uVar11) {
                      iVar41 = iVar1;
                    }
                    lVar39 = (long)(int)param_2[3] * (long)iVar47;
                    bVar9 = *(byte *)(lVar21 + (long)((iVar47 - iVar17) %
                                                     *(int *)((long)param_3 + 0x1c)) *
                                               (long)(int)param_3[3]);
                    uVar11 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar41;
                    uVar34 = uVar11 >> 8 & 0xff00ff;
                    iVar41 = 0x100 - (uVar11 >> 0x18);
                    uVar11 = *(uint *)(lVar13 + lVar39);
                    uVar19 = ((uVar11 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) + uVar34;
                    uVar34 = ((uVar11 >> 8 & 0xff00ff) * iVar41 >> 8 & 0xff00ff) + uVar34;
                    *(uint *)(lVar13 + lVar39) =
                         ((0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff) << 8 |
                         (0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff;
                  }
                  if (0 < (int)uVar6) {
                    lVar39 = (long)iVar47 + 1;
                    iVar41 = (int)lVar39;
                    if (iVar41 < iVar18) {
                      lVar46 = (long)(int)param_2[3];
                      puVar30 = (uint *)(lVar39 * lVar46 + lVar13);
                      iVar7 = (uVar6 & 0xff) * iVar1;
                      iVar41 = iVar41 - iVar17;
                      if (iVar7 < 0xfe00) {
                        uVar11 = iVar18 - iVar47;
                        do {
                          bVar9 = *(byte *)(lVar21 + (long)(iVar41 % *(int *)((long)param_3 + 0x1c))
                                                     * (long)(int)param_3[3]);
                          uVar34 = ((uint)bVar9 << 0x10 | (uint)bVar9) * (iVar7 >> 8);
                          uVar23 = uVar34 >> 8 & 0xff00ff;
                          iVar47 = 0x100 - (uVar34 >> 0x18);
                          uVar34 = ((*puVar30 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) + uVar23;
                          uVar23 = ((*puVar30 >> 8 & 0xff00ff) * iVar47 >> 8 & 0xff00ff) + uVar23;
                          *puVar30 = ((0x100 - (uVar23 >> 8 & 0x10001) | uVar23) & 0xff00ff) << 8 |
                                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar11 = uVar11 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar11);
                      }
                      else {
                        do {
                          bVar9 = *(byte *)(lVar21 + (long)(iVar41 % *(int *)((long)param_3 + 0x1c))
                                                     * (long)(int)param_3[3]);
                          uVar11 = (uint)bVar9 << 0x10 | (uint)bVar9;
                          uVar34 = ((*puVar30 & 0xff00ff) * (0x100 - (uint)bVar9) >> 8 & 0xff00ff) +
                                   uVar11;
                          uVar11 = ((*puVar30 >> 8 & 0xff00ff) * (0x100 - (uint)bVar9) >> 8 &
                                   0xff00ff) + uVar11;
                          *puVar30 = ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                                     (0x100 - (uVar34 >> 8 & 0x10001) | uVar34) & 0xff00ff;
                          puVar30 = (uint *)((long)puVar30 + lVar46);
                          uVar23 = uVar23 - 1;
                          iVar41 = iVar41 + 1;
                        } while (1 < uVar23);
                      }
                    }
                  }
                  uVar6 = (uVar25 & 0xff) * uVar6;
                }
                uVar8 = (ulong)uVar6;
                piVar42 = piVar42 + 2;
                bVar51 = 2 < iVar48;
                uVar11 = uVar25;
                iVar48 = iVar48 + -1;
              } while (bVar51);
              if (0xff < (int)uVar6) {
                uVar11 = uVar6 + 0xff;
                if (-1 < (int)uVar6) {
                  uVar11 = uVar6;
                }
                iVar48 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
                if (0xfeff < uVar6) {
                  iVar48 = iVar1;
                }
                uVar8 = (long)iVar18 * (long)(int)param_2[3];
                bVar9 = *(byte *)(lVar21 + (long)((iVar18 - iVar17) % *(int *)((long)param_3 + 0x1c)
                                                 ) * (long)(int)param_3[3]);
                uVar25 = ((uint)bVar9 << 0x10 | (uint)bVar9) * iVar48;
                uVar11 = uVar25 >> 8 & 0xff00ff;
                iVar48 = 0x100 - (uVar25 >> 0x18);
                uVar25 = ((*(uint *)(lVar13 + uVar8) & 0xff00ff) * iVar48 >> 8 & 0xff00ff) + uVar11;
                uVar11 = ((*(uint *)(lVar13 + uVar8) >> 8 & 0xff00ff) * iVar48 >> 8 & 0xff00ff) +
                         uVar11;
                *(uint *)(lVar13 + uVar8) =
                     ((0x100 - (uVar11 >> 8 & 0x10001) | uVar11) & 0xff00ff) << 8 |
                     (0x100 - (uVar25 >> 8 & 0x10001) | uVar25) & 0xff00ff;
              }
            }
            piVar27 = piVar27 + iVar10;
            iVar49 = iVar49 + 1;
          } while (iVar49 < *(int *)((long)param_1 + 0x1c));
        }
      }
    }
  }
  else if ((int)param_3[2] == 1) {
    iVar1 = param_4 + 1;
    uVar5 = *(uint *)((long)param_1 + 0x1c);
    if (param_7 == 0) {
      if (0 < (int)uVar5) {
        piVar27 = (int *)*param_1;
        iVar17 = 0;
        do {
          iVar10 = *(int *)((long)param_1 + 0x24);
          if (1 < *piVar27) {
            piVar42 = piVar27 + 1;
            iVar18 = *(int *)((long)param_1 + 0x14) + iVar17;
            lVar21 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar18 + *param_2;
            iVar48 = *(int *)((long)param_3 + 0x14);
            lVar13 = *param_3;
            uVar8 = 0;
            iVar49 = *piVar27;
            uVar5 = piVar27[1];
            do {
              uVar11 = piVar42[2];
              uVar25 = uVar11 + 0xff;
              if (-1 < (int)uVar11) {
                uVar25 = uVar11;
              }
              uVar23 = piVar42[1];
              iVar47 = (int)uVar25 >> 8;
              uVar25 = uVar5 + 0xff;
              if (-1 < (int)uVar5) {
                uVar25 = uVar5;
              }
              iVar41 = (int)uVar25 >> 8;
              uVar25 = iVar47 - iVar41;
              if (uVar25 == 0) {
                uVar23 = (int)uVar8 + (uVar11 - uVar5) * uVar23;
              }
              else {
                uVar5 = (0x100 - (uVar5 & 0xff)) * uVar23 + (int)uVar8;
                if (0xff < (int)uVar5) {
                  bVar9 = (byte)(uVar5 + 0xff >> 8);
                  if (-1 < (int)uVar5) {
                    bVar9 = (byte)(uVar5 >> 8);
                  }
                  iVar7 = (int)((uint)bVar9 * iVar1) >> 8;
                  if (0xfeff < uVar5) {
                    iVar7 = iVar1;
                  }
                  lVar39 = (long)(int)param_2[3] * (long)iVar41;
                  uVar5 = iVar7 * 0xff + 0xff;
                  *(char *)(lVar21 + lVar39) =
                       (char)((0x100 - (uVar5 >> 8)) * (uint)*(byte *)(lVar21 + lVar39) >> 8) +
                       (char)(uVar5 >> 8);
                }
                if (0 < (int)uVar23) {
                  lVar39 = (long)iVar41 + 1;
                  iVar7 = (int)lVar39;
                  uVar5 = iVar47 - iVar7;
                  if (0 < (int)uVar5) {
                    iVar12 = (int)param_2[3];
                    lVar46 = (long)iVar12;
                    lVar39 = lVar39 * lVar46;
                    pbVar33 = (byte *)(lVar21 + lVar39);
                    uVar6 = (uVar23 & 0xff) * iVar1;
                    if ((int)uVar6 < 0xfe00) {
                      uVar25 = ((uVar6 & 0xffffff00) - ((int)uVar6 >> 8)) + 0xff;
                      iVar7 = 0x100 - (uVar25 >> 8);
                      cVar28 = (char)(uVar25 >> 8);
                      if ((uVar5 & 3) != 0) {
                        pbVar33 = (byte *)(lVar39 + lVar21);
                        uVar25 = 0;
                        do {
                          *pbVar33 = (char)((uint)*pbVar33 * iVar7 >> 8) + cVar28;
                          uVar25 = uVar25 + 1;
                          pbVar33 = pbVar33 + lVar46;
                        } while ((uVar5 & 3) != uVar25);
                        uVar5 = uVar5 - uVar25;
                      }
                      if (2 < (iVar47 - iVar41) - 2U) {
                        uVar5 = uVar5 - 1;
                        do {
                          *pbVar33 = (char)((uint)*pbVar33 * iVar7 >> 8) + cVar28;
                          pbVar33[lVar46] = (char)((uint)pbVar33[lVar46] * iVar7 >> 8) + cVar28;
                          pbVar33[lVar46 * 2] =
                               (char)((uint)pbVar33[lVar46 * 2] * iVar7 >> 8) + cVar28;
                          pbVar33[lVar46 * 3] =
                               (char)((uint)pbVar33[lVar46 * 3] * iVar7 >> 8) + cVar28;
                          uVar5 = uVar5 - 4;
                          pbVar33 = pbVar33 + lVar46 * 4;
                        } while (uVar5 < 0xfffffffe);
                      }
                    }
                    else if (((iVar12 == (int)param_3[3]) && ((int)param_3[2] == 1)) &&
                            ((int)param_2[2] == 1)) {
                      memcpy(pbVar33,(void *)((long)((int)param_3[3] * (iVar7 - param_5)) +
                                             (long)iVar48 * (long)(iVar18 - param_6) + lVar13),
                             (long)(int)(uVar5 * iVar12));
                    }
                    else {
                      do {
                        *pbVar33 = 0xff;
                        uVar25 = uVar25 - 1;
                        pbVar33 = pbVar33 + lVar46;
                      } while (1 < uVar25);
                    }
                  }
                }
                uVar23 = (uVar11 & 0xff) * uVar23;
              }
              uVar8 = (ulong)uVar23;
              piVar42 = piVar42 + 2;
              bVar51 = 2 < iVar49;
              iVar49 = iVar49 + -1;
              uVar5 = uVar11;
            } while (bVar51);
            if (0xff < (int)uVar23) {
              uVar5 = uVar23 + 0xff;
              if (-1 < (int)uVar23) {
                uVar5 = uVar23;
              }
              iVar48 = (int)((uVar5 >> 8 & 0xff) * iVar1) >> 8;
              if (0xfeff < uVar23) {
                iVar48 = iVar1;
              }
              lVar13 = (long)iVar47 * (long)(int)param_2[3];
              uVar5 = iVar48 * 0xff + 0xff;
              uVar11 = uVar5 >> 8;
              uVar8 = (ulong)uVar11;
              *(char *)(lVar21 + lVar13) =
                   (char)((0x100 - uVar11) * (uint)*(byte *)(lVar21 + lVar13) >> 8) +
                   (char)(uVar5 >> 8);
            }
          }
          piVar27 = piVar27 + iVar10;
          iVar17 = iVar17 + 1;
        } while (iVar17 < *(int *)((long)param_1 + 0x1c));
      }
    }
    else if (0 < (int)uVar5) {
      puVar30 = (uint *)*param_1;
      iVar17 = *(int *)((long)param_1 + 0x24);
      uVar14 = (ulong)*(int *)((long)param_1 + 0x14);
      uVar11 = iVar1 * 0xff + 0xffU >> 8;
      lVar13 = *param_2;
      lVar39 = (long)*(int *)((long)param_2 + 0x14);
      lVar21 = param_2[3];
      local_e8 = uVar14 * lVar39 + lVar13;
      uVar26 = 0;
      uVar8 = uVar14;
      do {
        if (1 < (int)*puVar30) {
          puVar37 = puVar30 + 1;
          lVar46 = (uVar14 + uVar26) * lVar39 + lVar13;
          iVar10 = (int)param_2[3];
          lVar43 = (long)iVar10;
          uVar25 = 0;
          uVar23 = *puVar30;
          uVar6 = puVar30[1];
          do {
            uVar34 = puVar37[2];
            uVar19 = uVar34 + 0xff;
            if (-1 < (int)uVar34) {
              uVar19 = uVar34;
            }
            uVar4 = puVar37[1];
            iVar48 = (int)uVar19 >> 8;
            uVar19 = uVar6 + 0xff;
            if (-1 < (int)uVar6) {
              uVar19 = uVar6;
            }
            iVar49 = (int)uVar19 >> 8;
            iVar18 = iVar48 - iVar49;
            if (iVar18 == 0) {
              uVar25 = (uVar34 - uVar6) * uVar4 + uVar25;
            }
            else {
              iVar47 = (0x100 - (uVar6 & 0xff)) * uVar4;
              uVar6 = iVar47 + uVar25;
              uVar25 = iVar47 + uVar25 + 0xff;
              if (-1 < (int)uVar6) {
                uVar25 = uVar6;
              }
              if (0xff < (int)uVar6) {
                if (uVar6 < 0xff00) {
                  uVar25 = ((int)uVar25 >> 8 & 0xffU) * iVar1;
                  lVar22 = iVar49 * lVar43;
                  uVar25 = ((uVar25 & 0xffffff00) - ((int)uVar25 >> 8)) + 0xff >> 8;
                  cVar28 = (char)((0x100 - uVar25) * (uint)*(byte *)(lVar46 + lVar22) >> 8);
                }
                else {
                  lVar22 = (long)(iVar10 * iVar49);
                  cVar28 = (char)((uint)*(byte *)(lVar46 + lVar22) * (0x100 - uVar11) >> 8);
                  uVar25 = uVar11;
                }
                *(char *)(lVar46 + lVar22) = cVar28 + (char)uVar25;
              }
              if (0 < (int)uVar4) {
                uVar25 = iVar48 - (iVar49 + 1);
                if (0 < (int)uVar25) {
                  lVar22 = (long)((iVar49 + 1) * iVar10);
                  pbVar33 = (byte *)(lVar46 + lVar22);
                  uVar6 = (uVar4 & 0xff) * iVar1;
                  if ((int)uVar6 < 0xfe00) {
                    uVar6 = ((uVar6 & 0xffffff00) - ((int)uVar6 >> 8)) + 0xff;
                    iVar49 = 0x100 - (uVar6 >> 8);
                    cVar28 = (char)(uVar6 >> 8);
                    if ((uVar25 & 3) != 0) {
                      pbVar33 = (byte *)(lVar22 + local_e8);
                      uVar6 = 0;
                      do {
                        *pbVar33 = (char)((uint)*pbVar33 * iVar49 >> 8) + cVar28;
                        uVar6 = uVar6 + 1;
                        pbVar33 = pbVar33 + lVar43;
                      } while ((uVar25 & 3) != uVar6);
                      uVar25 = uVar25 - uVar6;
                    }
                    if (2 < iVar18 - 2U) {
                      uVar25 = uVar25 - 1;
                      do {
                        *pbVar33 = (char)((uint)*pbVar33 * iVar49 >> 8) + cVar28;
                        pbVar33[lVar43] = (char)((uint)pbVar33[lVar43] * iVar49 >> 8) + cVar28;
                        pbVar33[lVar43 * 2] =
                             (char)((uint)pbVar33[lVar43 * 2] * iVar49 >> 8) + cVar28;
                        pbVar33[lVar43 * 3] =
                             (char)((uint)pbVar33[lVar43 * 3] * iVar49 >> 8) + cVar28;
                        uVar25 = uVar25 - 4;
                        pbVar33 = pbVar33 + lVar43 * 4;
                      } while (uVar25 < 0xfffffffe);
                    }
                  }
                  else {
                    if ((uVar25 & 7) != 0) {
                      pbVar33 = (byte *)(lVar22 + local_e8);
                      uVar6 = 0;
                      do {
                        *pbVar33 = 0xff;
                        uVar6 = uVar6 + 1;
                        pbVar33 = pbVar33 + lVar43;
                      } while ((uVar25 & 7) != uVar6);
                      uVar25 = uVar25 - uVar6;
                    }
                    if (6 < iVar18 - 2U) {
                      uVar25 = uVar25 - 1;
                      do {
                        *pbVar33 = 0xff;
                        pbVar33[lVar43] = 0xff;
                        pbVar33[lVar43 * 2] = 0xff;
                        pbVar33[lVar43 * 3] = 0xff;
                        pbVar33[lVar43 * 4] = 0xff;
                        pbVar33[lVar43 * 5] = 0xff;
                        pbVar33[lVar43 * 6] = 0xff;
                        pbVar33[lVar43 * 7] = 0xff;
                        pbVar33 = pbVar33 + lVar43 * 8;
                        uVar25 = uVar25 - 8;
                      } while (uVar25 < 0xfffffffe);
                    }
                  }
                }
              }
              uVar25 = (uVar34 & 0xff) * uVar4;
            }
            uVar8 = (ulong)(uVar23 - 1);
            puVar37 = puVar37 + 2;
            bVar51 = 2 < (int)uVar23;
            uVar23 = uVar23 - 1;
            uVar6 = uVar34;
          } while (bVar51);
          uVar23 = uVar25 + 0xff;
          if (-1 < (int)uVar25) {
            uVar23 = uVar25;
          }
          if (0xff < (int)uVar25) {
            if (uVar25 < 0xff00) {
              uVar25 = ((int)uVar23 >> 8 & 0xffU) * iVar1;
              lVar43 = (long)(iVar48 * (int)lVar21);
              uVar25 = ((uVar25 & 0xffffff00) - ((int)uVar25 >> 8)) + 0xff >> 8;
              uVar23 = (0x100 - uVar25) * (uint)*(byte *)(lVar46 + lVar43);
            }
            else {
              lVar43 = (long)(iVar48 * (int)lVar21);
              uVar23 = (uint)*(byte *)(lVar46 + lVar43) * (0x100 - uVar11);
              uVar25 = uVar11;
            }
            uVar25 = (uVar23 >> 8) + uVar25;
            uVar8 = (ulong)uVar25;
            *(char *)(lVar46 + lVar43) = (char)uVar25;
          }
        }
        puVar30 = puVar30 + iVar17;
        uVar26 = uVar26 + 1;
        local_e8 = local_e8 + lVar39;
      } while (uVar26 != uVar5);
    }
  }
  else if ((int)param_3[2] == 2) {
    iVar1 = param_4 + 1;
    if (param_7 == 0) {
      if (0 < *(int *)((long)param_1 + 0x1c)) {
        piVar27 = (int *)*param_1;
        iVar17 = 0;
        uVar8 = -(long)param_6;
        do {
          iVar10 = *(int *)((long)param_1 + 0x24);
          if (1 < *piVar27) {
            piVar42 = piVar27 + 1;
            iVar48 = *(int *)((long)param_1 + 0x14) + iVar17;
            lVar39 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar48 + *param_2;
            lVar13 = *param_3;
            lVar46 = (long)(iVar48 - param_6) * (long)*(int *)((long)param_3 + 0x14);
            lVar43 = lVar46 + lVar13 + 3;
            lVar21 = ((long)iVar48 + -(long)param_6) * (long)*(int *)((long)param_3 + 0x14) + lVar13
                     + 3;
            uVar8 = 0;
            uVar5 = piVar27[1];
            iVar48 = *piVar27;
            do {
              uVar11 = piVar42[2];
              uVar25 = uVar11 + 0xff;
              if (-1 < (int)uVar11) {
                uVar25 = uVar11;
              }
              uVar23 = piVar42[1];
              iVar49 = (int)uVar25 >> 8;
              uVar25 = uVar5 + 0xff;
              if (-1 < (int)uVar5) {
                uVar25 = uVar5;
              }
              iVar18 = (int)uVar25 >> 8;
              uVar25 = iVar49 - iVar18;
              if (uVar25 == 0) {
                uVar23 = (int)uVar8 + (uVar11 - uVar5) * uVar23;
              }
              else {
                uVar5 = (0x100 - (uVar5 & 0xff)) * uVar23 + (int)uVar8;
                if (0xff < (int)uVar5) {
                  bVar9 = (byte)(uVar5 + 0xff >> 8);
                  if (-1 < (int)uVar5) {
                    bVar9 = (byte)(uVar5 >> 8);
                  }
                  iVar47 = (int)((uint)bVar9 * iVar1) >> 8;
                  if (0xfeff < uVar5) {
                    iVar47 = iVar1;
                  }
                  lVar22 = (long)(int)param_2[3] * (long)iVar18;
                  uVar5 = (uint)*(byte *)(lVar43 + (long)(iVar18 - param_5) * (long)(int)param_3[3])
                          * (iVar47 + 1);
                  *(char *)(lVar39 + lVar22) =
                       (char)((0x100 - (uVar5 >> 8)) * (uint)*(byte *)(lVar39 + lVar22) >> 8) +
                       (char)(uVar5 >> 8);
                }
                if (0 < (int)uVar23) {
                  lVar22 = (long)iVar18 + 1;
                  iVar47 = (int)lVar22;
                  uVar5 = iVar49 - iVar47;
                  if (uVar5 != 0 && iVar47 <= iVar49) {
                    iVar41 = (int)param_2[3];
                    lVar15 = (long)iVar41;
                    pbVar33 = (byte *)(lVar22 * lVar15 + lVar39);
                    iVar7 = (uVar23 & 0xff) * iVar1;
                    if (iVar7 < 0xfe00) {
                      lVar29 = (long)(int)param_3[3];
                      iVar41 = (iVar7 >> 8) + 1;
                      lVar40 = (long)(iVar47 - param_5);
                      lVar22 = lVar40;
                      if ((uVar5 & 1) != 0) {
                        lVar22 = lVar40 + 1;
                        uVar25 = (uint)*(byte *)(lVar43 + lVar40 * lVar29) * iVar41;
                        *pbVar33 = (char)((0x100 - (uVar25 >> 8)) * (uint)*pbVar33 >> 8) +
                                   (char)(uVar25 >> 8);
                        pbVar33 = pbVar33 + lVar15;
                        uVar5 = uVar5 - 1;
                      }
                      if (iVar49 + -2 != iVar18) {
                        uVar5 = uVar5 - 1;
                        lVar40 = lVar21;
                        do {
                          uVar25 = (uint)*(byte *)(lVar40 + lVar22 * lVar29) * iVar41;
                          *pbVar33 = (char)((0x100 - (uVar25 >> 8)) * (uint)*pbVar33 >> 8) +
                                     (char)(uVar25 >> 8);
                          uVar25 = (uint)*(byte *)(lVar40 + (lVar22 + 1) * lVar29) * iVar41;
                          pbVar33[lVar15] =
                               (char)((0x100 - (uVar25 >> 8)) * (uint)pbVar33[lVar15] >> 8) +
                               (char)(uVar25 >> 8);
                          lVar40 = lVar40 + lVar29 * 2;
                          pbVar33 = pbVar33 + lVar15 * 2;
                          bVar51 = 1 < uVar5;
                          uVar5 = uVar5 - 2;
                        } while (bVar51);
                      }
                    }
                    else {
                      iVar18 = (int)param_3[3];
                      lVar22 = (long)((iVar47 - param_5) * iVar18);
                      if (((iVar41 == iVar18) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1))
                      {
                        memcpy(pbVar33,(void *)(lVar22 + lVar46 + lVar13),
                               (long)(int)(iVar41 * uVar5));
                      }
                      else {
                        pbVar32 = (byte *)(lVar22 + lVar21);
                        do {
                          *pbVar33 = (char)((0x100 - (uint)*pbVar32) * (uint)*pbVar33 >> 8) +
                                     *pbVar32;
                          uVar25 = uVar25 - 1;
                          pbVar32 = pbVar32 + iVar18;
                          pbVar33 = pbVar33 + lVar15;
                        } while (1 < uVar25);
                      }
                    }
                  }
                }
                uVar23 = (uVar11 & 0xff) * uVar23;
              }
              uVar8 = (ulong)uVar23;
              piVar42 = piVar42 + 2;
              bVar51 = 2 < iVar48;
              uVar5 = uVar11;
              iVar48 = iVar48 + -1;
            } while (bVar51);
            if (0xff < (int)uVar23) {
              uVar5 = uVar23 + 0xff;
              if (-1 < (int)uVar23) {
                uVar5 = uVar23;
              }
              iVar48 = (int)((uVar5 >> 8 & 0xff) * iVar1) >> 8;
              if (0xfeff < uVar23) {
                iVar48 = iVar1;
              }
              lVar13 = (long)(int)param_2[3] * (long)iVar49;
              uVar5 = (uint)*(byte *)(lVar43 + (long)(iVar49 - param_5) * (long)(int)param_3[3]) *
                      (iVar48 + 1);
              uVar11 = uVar5 >> 8;
              uVar8 = (ulong)uVar11;
              *(char *)(lVar39 + lVar13) =
                   (char)((0x100 - uVar11) * (uint)*(byte *)(lVar39 + lVar13) >> 8) +
                   (char)(uVar5 >> 8);
            }
          }
          piVar27 = piVar27 + iVar10;
          iVar17 = iVar17 + 1;
        } while (iVar17 < *(int *)((long)param_1 + 0x1c));
      }
    }
    else {
      iVar10 = *(int *)((long)param_3 + 0x1c);
      iVar48 = (int)param_3[4];
      iVar17 = iVar10;
      if (param_5 % iVar10 < 0) {
        iVar17 = 0;
      }
      uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
      iVar49 = 0;
      if (-1 < param_6 % iVar48) {
        iVar49 = iVar48;
      }
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      if (0 < (int)uVar5) {
        iVar17 = param_5 % iVar10 - iVar17;
        piVar27 = (int *)*param_1;
        iVar18 = *(int *)((long)param_1 + 0x24);
        uVar14 = (ulong)*(int *)((long)param_1 + 0x14);
        lVar13 = *param_2;
        lVar43 = (long)*(int *)((long)param_2 + 0x14);
        lVar21 = *param_3;
        iVar47 = *(int *)((long)param_3 + 0x14);
        lVar39 = param_3[3];
        lVar46 = param_2[3];
        local_b8 = uVar14 * lVar43 + lVar13;
        uVar26 = 0;
        uVar8 = uVar14;
        do {
          if (1 < *piVar27) {
            piVar42 = piVar27 + 1;
            lVar15 = (uVar14 + uVar26) * lVar43 + lVar13;
            lVar29 = lVar21 + (long)(((int)(uVar14 + uVar26) + (iVar49 - param_6 % iVar48)) % iVar48
                                    ) * (long)iVar47 + 3;
            iVar41 = (int)param_3[3];
            iVar7 = *(int *)((long)param_3 + 0x1c);
            lVar22 = param_2[3];
            lVar40 = (long)(int)lVar22;
            uVar8 = 0;
            uVar11 = piVar27[1];
            iVar12 = *piVar27;
            do {
              uVar25 = piVar42[2];
              uVar23 = uVar25 + 0xff;
              if (-1 < (int)uVar25) {
                uVar23 = uVar25;
              }
              uVar6 = piVar42[1];
              iVar45 = (int)uVar23 >> 8;
              uVar23 = uVar11 + 0xff;
              if (-1 < (int)uVar11) {
                uVar23 = uVar11;
              }
              iVar44 = (int)uVar23 >> 8;
              uVar23 = iVar45 - iVar44;
              if (uVar23 == 0) {
                uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
              }
              else {
                uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                if (0xff < (int)uVar11) {
                  bVar9 = (byte)(uVar11 + 0xff >> 8);
                  if (-1 < (int)uVar11) {
                    bVar9 = (byte)(uVar11 >> 8);
                  }
                  iVar35 = (int)((uint)bVar9 * iVar1) >> 8;
                  if (0xfeff < uVar11) {
                    iVar35 = iVar1;
                  }
                  uVar11 = (uint)*(byte *)(lVar29 + ((iVar44 - iVar17) % iVar7) * iVar41) *
                           (iVar35 + 1);
                  *(char *)(lVar15 + iVar44 * lVar40) =
                       (char)((0x100 - (uVar11 >> 8)) * (uint)*(byte *)(lVar15 + iVar44 * lVar40) >>
                             8) + (char)(uVar11 >> 8);
                }
                if ((0 < (int)uVar6) && (iVar35 = iVar44 + 1, iVar35 < iVar45)) {
                  lVar31 = (long)((int)lVar22 * iVar35);
                  iVar50 = (uVar6 & 0xff) * iVar1;
                  if (iVar50 < 0xfe00) {
                    pbVar33 = (byte *)(lVar31 + local_b8);
                    uVar11 = iVar45 - iVar44;
                    iVar44 = iVar35 - iVar17;
                    do {
                      uVar23 = (uint)*(byte *)(lVar29 + (iVar44 % iVar7) * iVar41) *
                               ((iVar50 >> 8) + 1);
                      *pbVar33 = (char)((0x100 - (uVar23 >> 8)) * (uint)*pbVar33 >> 8) +
                                 (char)(uVar23 >> 8);
                      pbVar33 = pbVar33 + lVar40;
                      uVar11 = uVar11 - 1;
                      iVar44 = iVar44 + 1;
                    } while (1 < uVar11);
                  }
                  else {
                    pbVar33 = (byte *)(lVar31 + local_b8);
                    iVar44 = iVar35 - iVar17;
                    do {
                      bVar9 = *(byte *)(lVar29 + (iVar44 % iVar7) * iVar41);
                      *pbVar33 = (char)((0x100 - (uint)bVar9) * (uint)*pbVar33 >> 8) + bVar9;
                      pbVar33 = pbVar33 + lVar40;
                      uVar23 = uVar23 - 1;
                      iVar44 = iVar44 + 1;
                    } while (1 < uVar23);
                  }
                }
                uVar6 = (uVar25 & 0xff) * uVar6;
              }
              uVar8 = (ulong)uVar6;
              piVar42 = piVar42 + 2;
              bVar51 = 2 < iVar12;
              uVar11 = uVar25;
              iVar12 = iVar12 + -1;
            } while (bVar51);
            if (0xff < (int)uVar6) {
              uVar11 = uVar6 + 0xff;
              if (-1 < (int)uVar6) {
                uVar11 = uVar6;
              }
              iVar41 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
              if (0xfeff < uVar6) {
                iVar41 = iVar1;
              }
              lVar22 = (long)iVar45 * (long)(int)lVar46;
              uVar11 = (uint)*(byte *)(lVar29 + (long)((iVar45 - iVar17) % iVar10) *
                                                (long)(int)lVar39) * (iVar41 + 1);
              uVar25 = uVar11 >> 8;
              uVar8 = (ulong)uVar25;
              *(char *)(lVar15 + lVar22) =
                   (char)((0x100 - uVar25) * (uint)*(byte *)(lVar15 + lVar22) >> 8) +
                   (char)(uVar11 >> 8);
            }
          }
          piVar27 = piVar27 + iVar18;
          uVar26 = uVar26 + 1;
          local_b8 = local_b8 + lVar43;
        } while (uVar26 != uVar5);
      }
    }
  }
  else {
    iVar1 = param_4 + 1;
    if (param_7 == 0) {
      if (0 < *(int *)((long)param_1 + 0x1c)) {
        piVar27 = (int *)*param_1;
        iVar17 = 0;
        uVar8 = -(long)param_6;
        do {
          iVar10 = *(int *)((long)param_1 + 0x24);
          if (1 < *piVar27) {
            piVar42 = piVar27 + 1;
            iVar48 = *(int *)((long)param_1 + 0x14) + iVar17;
            lVar13 = (long)*(int *)((long)param_2 + 0x14) * (long)iVar48 + *param_2;
            lVar21 = (long)(iVar48 - param_6) * (long)*(int *)((long)param_3 + 0x14) + *param_3;
            lVar39 = ((long)iVar48 + -(long)param_6) * (long)*(int *)((long)param_3 + 0x14) +
                     *param_3;
            uVar8 = 0;
            uVar5 = piVar27[1];
            iVar48 = *piVar27;
            do {
              uVar11 = piVar42[2];
              uVar25 = uVar11 + 0xff;
              if (-1 < (int)uVar11) {
                uVar25 = uVar11;
              }
              uVar23 = piVar42[1];
              iVar49 = (int)uVar25 >> 8;
              uVar25 = uVar5 + 0xff;
              if (-1 < (int)uVar5) {
                uVar25 = uVar5;
              }
              iVar18 = (int)uVar25 >> 8;
              uVar25 = iVar49 - iVar18;
              if (uVar25 == 0) {
                uVar23 = (int)uVar8 + (uVar11 - uVar5) * uVar23;
              }
              else {
                uVar5 = (0x100 - (uVar5 & 0xff)) * uVar23 + (int)uVar8;
                if (0xff < (int)uVar5) {
                  bVar9 = (byte)(uVar5 + 0xff >> 8);
                  if (-1 < (int)uVar5) {
                    bVar9 = (byte)(uVar5 >> 8);
                  }
                  iVar47 = (int)((uint)bVar9 * iVar1) >> 8;
                  if (0xfeff < uVar5) {
                    iVar47 = iVar1;
                  }
                  lVar46 = (long)(int)param_2[3] * (long)iVar18;
                  uVar5 = (uint)*(byte *)(lVar21 + (long)(iVar18 - param_5) * (long)(int)param_3[3])
                          * (iVar47 + 1);
                  *(char *)(lVar13 + lVar46) =
                       (char)((0x100 - (uVar5 >> 8)) * (uint)*(byte *)(lVar13 + lVar46) >> 8) +
                       (char)(uVar5 >> 8);
                }
                if (0 < (int)uVar23) {
                  lVar46 = (long)iVar18 + 1;
                  iVar47 = (int)lVar46;
                  uVar5 = iVar49 - iVar47;
                  if (uVar5 != 0 && iVar47 <= iVar49) {
                    iVar41 = (int)param_2[3];
                    lVar43 = (long)iVar41;
                    pbVar33 = (byte *)(lVar46 * lVar43 + lVar13);
                    iVar7 = (uVar23 & 0xff) * iVar1;
                    if (iVar7 < 0xfe00) {
                      lVar22 = (long)(int)param_3[3];
                      iVar41 = (iVar7 >> 8) + 1;
                      lVar15 = (long)(iVar47 - param_5);
                      lVar46 = lVar15;
                      if ((uVar5 & 1) != 0) {
                        lVar46 = lVar15 + 1;
                        uVar25 = (uint)*(byte *)(lVar21 + lVar15 * lVar22) * iVar41;
                        *pbVar33 = (char)((0x100 - (uVar25 >> 8)) * (uint)*pbVar33 >> 8) +
                                   (char)(uVar25 >> 8);
                        pbVar33 = pbVar33 + lVar43;
                        uVar5 = uVar5 - 1;
                      }
                      if (iVar49 + -2 != iVar18) {
                        uVar5 = uVar5 - 1;
                        lVar15 = lVar39;
                        do {
                          uVar25 = (uint)*(byte *)(lVar15 + lVar46 * lVar22) * iVar41;
                          *pbVar33 = (char)((0x100 - (uVar25 >> 8)) * (uint)*pbVar33 >> 8) +
                                     (char)(uVar25 >> 8);
                          uVar25 = (uint)*(byte *)(lVar15 + (lVar46 + 1) * lVar22) * iVar41;
                          pbVar33[lVar43] =
                               (char)((0x100 - (uVar25 >> 8)) * (uint)pbVar33[lVar43] >> 8) +
                               (char)(uVar25 >> 8);
                          lVar15 = lVar15 + lVar22 * 2;
                          pbVar33 = pbVar33 + lVar43 * 2;
                          bVar51 = 1 < uVar5;
                          uVar5 = uVar5 - 2;
                        } while (bVar51);
                      }
                    }
                    else {
                      iVar18 = (int)param_3[3];
                      lVar46 = (long)((iVar47 - param_5) * iVar18);
                      if (((iVar41 == iVar18) && ((int)param_3[2] == 1)) && ((int)param_2[2] == 1))
                      {
                        memcpy(pbVar33,(void *)(lVar46 + lVar21),(long)(int)(iVar41 * uVar5));
                      }
                      else {
                        pbVar32 = (byte *)(lVar46 + lVar39);
                        do {
                          *pbVar33 = (char)((0x100 - (uint)*pbVar32) * (uint)*pbVar33 >> 8) +
                                     *pbVar32;
                          uVar25 = uVar25 - 1;
                          pbVar32 = pbVar32 + iVar18;
                          pbVar33 = pbVar33 + lVar43;
                        } while (1 < uVar25);
                      }
                    }
                  }
                }
                uVar23 = (uVar11 & 0xff) * uVar23;
              }
              uVar8 = (ulong)uVar23;
              piVar42 = piVar42 + 2;
              bVar51 = 2 < iVar48;
              uVar5 = uVar11;
              iVar48 = iVar48 + -1;
            } while (bVar51);
            if (0xff < (int)uVar23) {
              uVar5 = uVar23 + 0xff;
              if (-1 < (int)uVar23) {
                uVar5 = uVar23;
              }
              iVar48 = (int)((uVar5 >> 8 & 0xff) * iVar1) >> 8;
              if (0xfeff < uVar23) {
                iVar48 = iVar1;
              }
              lVar39 = (long)(int)param_2[3] * (long)iVar49;
              uVar5 = (uint)*(byte *)(lVar21 + (long)(iVar49 - param_5) * (long)(int)param_3[3]) *
                      (iVar48 + 1);
              uVar11 = uVar5 >> 8;
              uVar8 = (ulong)uVar11;
              *(char *)(lVar13 + lVar39) =
                   (char)((0x100 - uVar11) * (uint)*(byte *)(lVar13 + lVar39) >> 8) +
                   (char)(uVar5 >> 8);
            }
          }
          piVar27 = piVar27 + iVar10;
          iVar17 = iVar17 + 1;
        } while (iVar17 < *(int *)((long)param_1 + 0x1c));
      }
    }
    else {
      iVar10 = *(int *)((long)param_3 + 0x1c);
      iVar48 = (int)param_3[4];
      iVar17 = iVar10;
      if (param_5 % iVar10 < 0) {
        iVar17 = 0;
      }
      uVar8 = (long)param_6 / (long)iVar48 & 0xffffffff;
      iVar49 = 0;
      if (-1 < param_6 % iVar48) {
        iVar49 = iVar48;
      }
      uVar5 = *(uint *)((long)param_1 + 0x1c);
      if (0 < (int)uVar5) {
        iVar17 = param_5 % iVar10 - iVar17;
        piVar27 = (int *)*param_1;
        iVar18 = *(int *)((long)param_1 + 0x24);
        uVar14 = (ulong)*(int *)((long)param_1 + 0x14);
        lVar13 = *param_2;
        lVar43 = (long)*(int *)((long)param_2 + 0x14);
        lVar21 = *param_3;
        iVar47 = *(int *)((long)param_3 + 0x14);
        lVar39 = param_3[3];
        lVar46 = param_2[3];
        local_b8 = uVar14 * lVar43 + lVar13;
        uVar26 = 0;
        uVar8 = uVar14;
        do {
          if (1 < *piVar27) {
            piVar42 = piVar27 + 1;
            lVar15 = (uVar14 + uVar26) * lVar43 + lVar13;
            lVar29 = (long)(((int)(uVar14 + uVar26) + (iVar49 - param_6 % iVar48)) % iVar48) *
                     (long)iVar47 + lVar21;
            iVar41 = (int)param_3[3];
            iVar7 = *(int *)((long)param_3 + 0x1c);
            lVar22 = param_2[3];
            lVar40 = (long)(int)lVar22;
            uVar8 = 0;
            uVar11 = piVar27[1];
            iVar12 = *piVar27;
            do {
              uVar25 = piVar42[2];
              uVar23 = uVar25 + 0xff;
              if (-1 < (int)uVar25) {
                uVar23 = uVar25;
              }
              uVar6 = piVar42[1];
              iVar45 = (int)uVar23 >> 8;
              uVar23 = uVar11 + 0xff;
              if (-1 < (int)uVar11) {
                uVar23 = uVar11;
              }
              iVar44 = (int)uVar23 >> 8;
              uVar23 = iVar45 - iVar44;
              if (uVar23 == 0) {
                uVar6 = (int)uVar8 + (uVar25 - uVar11) * uVar6;
              }
              else {
                uVar11 = (0x100 - (uVar11 & 0xff)) * uVar6 + (int)uVar8;
                if (0xff < (int)uVar11) {
                  bVar9 = (byte)(uVar11 + 0xff >> 8);
                  if (-1 < (int)uVar11) {
                    bVar9 = (byte)(uVar11 >> 8);
                  }
                  iVar35 = (int)((uint)bVar9 * iVar1) >> 8;
                  if (0xfeff < uVar11) {
                    iVar35 = iVar1;
                  }
                  uVar11 = (uint)*(byte *)(lVar29 + ((iVar44 - iVar17) % iVar7) * iVar41) *
                           (iVar35 + 1);
                  *(char *)(lVar15 + iVar44 * lVar40) =
                       (char)((0x100 - (uVar11 >> 8)) * (uint)*(byte *)(lVar15 + iVar44 * lVar40) >>
                             8) + (char)(uVar11 >> 8);
                }
                if ((0 < (int)uVar6) && (iVar35 = iVar44 + 1, iVar35 < iVar45)) {
                  lVar31 = (long)((int)lVar22 * iVar35);
                  iVar50 = (uVar6 & 0xff) * iVar1;
                  if (iVar50 < 0xfe00) {
                    pbVar33 = (byte *)(lVar31 + local_b8);
                    uVar11 = iVar45 - iVar44;
                    iVar44 = iVar35 - iVar17;
                    do {
                      uVar23 = (uint)*(byte *)(lVar29 + (iVar44 % iVar7) * iVar41) *
                               ((iVar50 >> 8) + 1);
                      *pbVar33 = (char)((0x100 - (uVar23 >> 8)) * (uint)*pbVar33 >> 8) +
                                 (char)(uVar23 >> 8);
                      pbVar33 = pbVar33 + lVar40;
                      uVar11 = uVar11 - 1;
                      iVar44 = iVar44 + 1;
                    } while (1 < uVar11);
                  }
                  else {
                    pbVar33 = (byte *)(lVar31 + local_b8);
                    iVar44 = iVar35 - iVar17;
                    do {
                      bVar9 = *(byte *)(lVar29 + (iVar44 % iVar7) * iVar41);
                      *pbVar33 = (char)((0x100 - (uint)bVar9) * (uint)*pbVar33 >> 8) + bVar9;
                      pbVar33 = pbVar33 + lVar40;
                      uVar23 = uVar23 - 1;
                      iVar44 = iVar44 + 1;
                    } while (1 < uVar23);
                  }
                }
                uVar6 = (uVar25 & 0xff) * uVar6;
              }
              uVar8 = (ulong)uVar6;
              piVar42 = piVar42 + 2;
              bVar51 = 2 < iVar12;
              uVar11 = uVar25;
              iVar12 = iVar12 + -1;
            } while (bVar51);
            if (0xff < (int)uVar6) {
              uVar11 = uVar6 + 0xff;
              if (-1 < (int)uVar6) {
                uVar11 = uVar6;
              }
              iVar41 = (int)((uVar11 >> 8 & 0xff) * iVar1) >> 8;
              if (0xfeff < uVar6) {
                iVar41 = iVar1;
              }
              lVar22 = (long)iVar45 * (long)(int)lVar46;
              uVar11 = (uint)*(byte *)(lVar29 + (long)((iVar45 - iVar17) % iVar10) *
                                                (long)(int)lVar39) * (iVar41 + 1);
              uVar25 = uVar11 >> 8;
              uVar8 = (ulong)uVar25;
              *(char *)(lVar15 + lVar22) =
                   (char)((0x100 - uVar25) * (uint)*(byte *)(lVar15 + lVar22) >> 8) +
                   (char)(uVar11 >> 8);
            }
          }
          piVar27 = piVar27 + iVar18;
          uVar26 = uVar26 + 1;
          local_b8 = local_b8 + lVar43;
        } while (uVar26 != uVar5);
      }
    }
  }
  return uVar8;
}


