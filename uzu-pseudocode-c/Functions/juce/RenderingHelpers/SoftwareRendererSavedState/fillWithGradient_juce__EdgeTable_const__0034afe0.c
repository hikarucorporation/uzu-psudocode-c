// Function : fillWithGradient<juce::EdgeTable_const>
// Namespace: juce:RenderingHelpers:SoftwareRendererSavedState
// Entry    : 0034afe0
// Prototype: void fillWithGradient<juce::EdgeTable_const>(SoftwareRendererSavedState * this, undefined8 * param_1, ColourGradient * param_2, float * param_3, char param_4)
// Body     : 0034afe0 - 00350600


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void juce::RenderingHelpers::SoftwareRendererSavedState::fillWithGradient<juce::EdgeTable
   const>(juce::EdgeTable const&, juce::ColourGradient&, juce::AffineTransform const&, bool) const
    */

void __thiscall
juce::RenderingHelpers::SoftwareRendererSavedState::fillWithGradient<juce::EdgeTable_const>
          (SoftwareRendererSavedState *this,undefined8 *param_1,ColourGradient *param_2,
          float *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  byte *pbVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  int *piVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long *plVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  int iVar37;
  uint *puVar38;
  long lVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  void *local_1d0;
  char local_188;
  long local_108 [2];
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  long *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  int local_c4;
  double local_c0;
  double local_b8;
  char local_b0;
  char local_af;
  long *local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  iVar23 = *(int *)(param_2 + 0x24) * 0x100 + -0x100;
  if (iVar23 < 1) {
    iVar23 = 1;
  }
  fVar41 = hypotf((param_3[2] + *param_3 * *(float *)param_2 + param_3[1] * *(float *)(param_2 + 4))
                  - (param_3[2] +
                    *param_3 * *(float *)(param_2 + 8) + param_3[1] * *(float *)(param_2 + 0xc)),
                  (param_3[5] +
                  param_3[3] * *(float *)param_2 + param_3[4] * *(float *)(param_2 + 4)) -
                  (param_3[5] +
                  param_3[3] * *(float *)(param_2 + 8) + param_3[4] * *(float *)(param_2 + 0xc)));
  iVar24 = (int)fVar41 * 3;
  if (iVar24 <= iVar23) {
    iVar23 = iVar24;
  }
  if ((int)fVar41 < 1) {
    iVar23 = 1;
  }
  if (iVar23 == 0) {
    local_1d0 = (void *)0x0;
    ColourGradient::createLookupTable(param_2,0,0);
    plVar31 = *(long **)(this + 0x68);
    if (plVar31 != (long *)0x0) goto LAB_0034b0cf;
LAB_0034b0fa:
    local_ec = 0;
    local_e8 = 0;
  }
  else {
    local_1d0 = malloc((long)iVar23 << 2);
    ColourGradient::createLookupTable(param_2,(long)local_1d0,iVar23);
    plVar31 = *(long **)(this + 0x68);
    if (plVar31 == (long *)0x0) goto LAB_0034b0fa;
LAB_0034b0cf:
    local_ec = (undefined4)plVar31[2];
    local_e8 = *(undefined4 *)((long)plVar31 + 0x14);
  }
  local_e0 = (long *)0x0;
                    /* try { // try from 0034b11d to 0034b134 has its CatchHandler @ 00350601 */
  (**(code **)(*plVar31 + 0x38))(plVar31,local_108,0,0,2);
  pfVar8 = param_3 + 1;
  if (local_f8 != 1) {
    if (local_f8 != 2) {
      if (param_2[0x10] == (ColourGradient)0x0) {
        GradientPixelIterators::Linear::Linear
                  ((Linear *)&local_d8,(undefined8 *)param_2,param_3,local_1d0,iVar23 + -1);
        dVar2 = DAT_005d9098;
        uVar18 = *(uint *)((long)param_1 + 0x1c);
        if (0 < (int)uVar18) {
          piVar26 = (int *)*param_1;
          lVar9 = CONCAT44(fStack_d4,local_d8);
          local_98[0] = local_af;
          iVar23 = *(int *)((long)param_1 + 0x24);
          iVar24 = *(int *)((long)param_1 + 0x14);
          uVar36 = 0;
          lVar14 = (long)iVar24;
          do {
            if (1 < *piVar26) {
              lVar39 = uVar36 + (long)iVar24;
              local_a0 = lVar39 * local_f4 + local_108[0];
              iVar34 = (int)lVar39;
              if (local_b0 == '\0') {
                if (local_af == '\0') {
                  local_c8 = SUB84(((double)iVar34 - local_b8) * local_c0 + dVar2,0);
                }
              }
              else {
                iVar34 = iVar34 * local_c4 - (int)local_c8;
                fVar41 = (float)(iVar34 >> 0xc);
                if ((int)fStack_d0 < (int)fVar41) {
                  fVar41 = fStack_d0;
                }
                if (iVar34 < 0) {
                  fVar41 = 0.0;
                }
                fStack_cc = *(float *)(lVar9 + (long)(int)fVar41 * 4);
              }
              piVar22 = piVar26 + 1;
              uVar30 = (uint)fStack_cc >> 0x18;
              iVar32 = 0x100 - uVar30;
              lVar39 = local_108[0] + local_f4 * lVar14;
              uVar16 = 0;
              iVar34 = *piVar26;
              uVar12 = piVar26[1];
              do {
                uVar13 = piVar22[2];
                uVar11 = uVar13 + 0xff;
                if (-1 < (int)uVar13) {
                  uVar11 = uVar13;
                }
                uVar29 = piVar22[1];
                iVar37 = (int)uVar11 >> 8;
                uVar11 = uVar12 + 0xff;
                if (-1 < (int)uVar12) {
                  uVar11 = uVar12;
                }
                iVar33 = (int)uVar11 >> 8;
                uVar11 = iVar37 - iVar33;
                if (uVar11 == 0) {
                  uVar16 = (uVar13 - uVar12) * uVar29 + uVar16;
                }
                else {
                  iVar17 = (0x100 - (uVar12 & 0xff)) * uVar29;
                  uVar28 = iVar17 + uVar16;
                  uVar12 = iVar17 + uVar16 + 0xff;
                  if (-1 < (int)uVar28) {
                    uVar12 = uVar28;
                  }
                  if (0xff < (int)uVar28) {
                    if (uVar28 < 0xff00) {
                      pfVar8 = &fStack_cc;
                      if (local_b0 == '\0') {
                        iVar17 = local_c4 * iVar33 - (int)local_c8;
                        fVar41 = (float)(iVar17 >> 0xc);
                        if ((int)fStack_d0 < (int)fVar41) {
                          fVar41 = fStack_d0;
                        }
                        if (iVar17 < 0) {
                          fVar41 = 0.0;
                        }
                        pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                      }
                      uVar12 = (((int)uVar12 >> 8 & 0xffU) + 1) * (uint)*(byte *)((long)pfVar8 + 3);
                      *(char *)(local_a0 + (long)iVar33 * (long)local_f0) =
                           (char)((0x100 - (uVar12 >> 8)) *
                                  (uint)*(byte *)(local_a0 + (long)iVar33 * (long)local_f0) >> 8) +
                           (char)(uVar12 >> 8);
                    }
                    else {
                      pfVar8 = &fStack_cc;
                      if (local_b0 == '\0') {
                        iVar17 = local_c4 * iVar33 - (int)local_c8;
                        fVar41 = (float)(iVar17 >> 0xc);
                        if ((int)fStack_d0 < (int)fVar41) {
                          fVar41 = fStack_d0;
                        }
                        if (iVar17 < 0) {
                          fVar41 = 0.0;
                        }
                        pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                      }
                      *(char *)(local_a0 + (long)iVar33 * (long)local_f0) =
                           (char)((0x100 - ((uint)*pfVar8 >> 0x18)) *
                                  (uint)*(byte *)(local_a0 + (long)iVar33 * (long)local_f0) >> 8) +
                           (char)((uint)*pfVar8 >> 0x18);
                    }
                  }
                  if (0 < (int)uVar29) {
                    iVar17 = iVar33 + 1;
                    uVar12 = iVar37 - iVar17;
                    if (uVar12 != 0 && iVar17 <= iVar37) {
                      lVar35 = (long)local_f0;
                      lVar20 = iVar17 * lVar35;
                      pbVar21 = (byte *)(local_a0 + lVar20);
                      if ((uVar29 & 0xff) == 0xff) {
                        if (local_b0 == '\0') {
                          pbVar21 = (byte *)(lVar20 + lVar39);
                          uVar12 = iVar37 - iVar33;
                          iVar33 = iVar17 * local_c4 + -(int)local_c8;
                          do {
                            fVar41 = (float)(iVar33 >> 0xc);
                            if ((int)fStack_d0 < iVar33 >> 0xc) {
                              fVar41 = fStack_d0;
                            }
                            if (iVar33 < 0) {
                              fVar41 = 0.0;
                            }
                            uVar16 = *(uint *)(lVar9 + (long)(int)fVar41 * 4);
                            *pbVar21 = (char)((0x100 - (uVar16 >> 0x18)) * (uint)*pbVar21 >> 8) +
                                       (char)(uVar16 >> 0x18);
                            pbVar21 = pbVar21 + lVar35;
                            uVar12 = uVar12 - 1;
                            iVar33 = iVar33 + local_c4;
                          } while (1 < uVar12);
                        }
                        else {
                          local_188 = (char)((uint)fStack_cc >> 0x18);
                          if ((uVar12 & 1) != 0) {
                            *pbVar21 = (char)((uint)*pbVar21 * iVar32 >> 8) + local_188;
                            pbVar21 = pbVar21 + lVar35;
                            uVar12 = uVar12 - 1;
                          }
                          if (iVar37 + -2 != iVar33) {
                            uVar12 = uVar12 - 1;
                            do {
                              *pbVar21 = (char)((uint)*pbVar21 * iVar32 >> 8) + local_188;
                              pbVar21[lVar35] =
                                   (char)((uint)pbVar21[lVar35] * iVar32 >> 8) + local_188;
                              pbVar21 = pbVar21 + lVar35 * 2;
                              bVar40 = 1 < uVar12;
                              uVar12 = uVar12 - 2;
                            } while (bVar40);
                          }
                        }
                      }
                      else {
                        iVar19 = (uVar29 & 0xff) + 1;
                        if (local_b0 == '\0') {
                          pbVar21 = (byte *)(lVar20 + lVar39);
                          iVar33 = iVar17 * local_c4 + -(int)local_c8;
                          do {
                            fVar41 = (float)(iVar33 >> 0xc);
                            if ((int)fStack_d0 < iVar33 >> 0xc) {
                              fVar41 = fStack_d0;
                            }
                            if (iVar33 < 0) {
                              fVar41 = 0.0;
                            }
                            uVar12 = (uint)*(byte *)(lVar9 + 3 + (long)(int)fVar41 * 4) * iVar19;
                            *pbVar21 = (char)((0x100 - (uVar12 >> 8)) * (uint)*pbVar21 >> 8) +
                                       (char)(uVar12 >> 8);
                            pbVar21 = pbVar21 + lVar35;
                            uVar11 = uVar11 - 1;
                            iVar33 = iVar33 + local_c4;
                          } while (1 < uVar11);
                        }
                        else {
                          if ((uVar12 & 1) != 0) {
                            *pbVar21 = (char)((0x100 - (uVar30 * iVar19 >> 8)) * (uint)*pbVar21 >> 8
                                             ) + (char)(uVar30 * iVar19 >> 8);
                            pbVar21 = pbVar21 + lVar35;
                            uVar12 = uVar12 - 1;
                          }
                          if (iVar37 + -2 != iVar33) {
                            iVar33 = 0x100 - (iVar19 * uVar30 >> 8);
                            uVar12 = uVar12 - 1;
                            do {
                              cVar15 = (char)(iVar19 * uVar30 >> 8);
                              *pbVar21 = (char)((uint)*pbVar21 * iVar33 >> 8) + cVar15;
                              pbVar21[lVar35] = (char)((uint)pbVar21[lVar35] * iVar33 >> 8) + cVar15
                              ;
                              pbVar21 = pbVar21 + lVar35 * 2;
                              bVar40 = 1 < uVar12;
                              uVar12 = uVar12 - 2;
                            } while (bVar40);
                          }
                        }
                      }
                    }
                  }
                  uVar16 = (uVar13 & 0xff) * uVar29;
                }
                piVar22 = piVar22 + 2;
                bVar40 = 2 < iVar34;
                iVar34 = iVar34 + -1;
                uVar12 = uVar13;
              } while (bVar40);
              uVar12 = uVar16 + 0xff;
              if (-1 < (int)uVar16) {
                uVar12 = uVar16;
              }
              if (0xff < (int)uVar16) {
                if (uVar16 < 0xff00) {
                  pfVar8 = &fStack_cc;
                  if (local_b0 == '\0') {
                    iVar34 = local_c4 * iVar37 - (int)local_c8;
                    fVar41 = (float)(iVar34 >> 0xc);
                    if ((int)fStack_d0 < (int)fVar41) {
                      fVar41 = fStack_d0;
                    }
                    if (iVar34 < 0) {
                      fVar41 = 0.0;
                    }
                    pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                  }
                  uVar12 = (((int)uVar12 >> 8 & 0xffU) + 1) * (uint)*(byte *)((long)pfVar8 + 3);
                  *(char *)(local_a0 + (long)iVar37 * (long)local_f0) =
                       (char)((0x100 - (uVar12 >> 8)) *
                              (uint)*(byte *)(local_a0 + (long)iVar37 * (long)local_f0) >> 8) +
                       (char)(uVar12 >> 8);
                }
                else {
                  pfVar8 = &fStack_cc;
                  if (local_b0 == '\0') {
                    iVar34 = local_c4 * iVar37 - (int)local_c8;
                    fVar41 = (float)(iVar34 >> 0xc);
                    if ((int)fStack_d0 < (int)fVar41) {
                      fVar41 = fStack_d0;
                    }
                    if (iVar34 < 0) {
                      fVar41 = 0.0;
                    }
                    pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                  }
                  *(char *)(local_a0 + (long)iVar37 * (long)local_f0) =
                       (char)((0x100 - ((uint)*pfVar8 >> 0x18)) *
                              (uint)*(byte *)(local_a0 + (long)iVar37 * (long)local_f0) >> 8) +
                       (char)((uint)*pfVar8 >> 0x18);
                }
              }
            }
            piVar26 = piVar26 + iVar23;
            uVar36 = uVar36 + 1;
            lVar14 = lVar14 + 1;
          } while (uVar36 != uVar18);
        }
        goto LAB_0034cc55;
      }
      if (param_4 != '\0') {
        fVar43 = (float)*(undefined8 *)param_2;
        fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
        fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
        if (dVar2 < 0.0) {
          dVar48 = sqrt(dVar2);
        }
        else {
          dVar48 = SQRT(dVar2);
        }
        if (0 < *(int *)((long)param_1 + 0x1c)) {
          iVar23 = iVar23 + -1;
          dVar48 = (double)iVar23 / dVar48;
          dVar4 = (double)fVar43;
          dVar5 = (double)fVar44;
          piVar26 = (int *)*param_1;
          local_98._8_4_ = SUB84(dVar5,0);
          local_98._0_8_ = dVar5;
          local_98._12_4_ = (int)((ulong)dVar5 >> 0x20);
          iVar24 = 0;
          uVar45 = SUB84(DAT_005d9098,0);
          uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
          do {
            iVar34 = *(int *)((long)param_1 + 0x24);
            if (1 < *piVar26) {
              piVar22 = piVar26 + 1;
              iVar32 = *(int *)((long)param_1 + 0x14) + iVar24;
              lVar9 = (long)local_f4 * (long)iVar32 + local_108[0];
              dVar5 = (double)iVar32 - (double)local_98._0_8_;
              dVar5 = dVar5 * dVar5;
              uVar12 = 0;
              uVar18 = piVar26[1];
              iVar32 = *piVar26;
              do {
                uVar16 = piVar22[2];
                uVar30 = uVar16 + 0xff;
                if (-1 < (int)uVar16) {
                  uVar30 = uVar16;
                }
                uVar13 = piVar22[1];
                iVar37 = (int)uVar30 >> 8;
                uVar30 = uVar18 + 0xff;
                if (-1 < (int)uVar18) {
                  uVar30 = uVar18;
                }
                iVar33 = (int)uVar30 >> 8;
                iVar17 = iVar37 - iVar33;
                if (iVar17 == 0) {
                  uVar12 = (uVar16 - uVar18) * uVar13 + uVar12;
                }
                else {
                  iVar19 = (0x100 - (uVar18 & 0xff)) * uVar13;
                  uVar30 = iVar19 + uVar12;
                  uVar18 = iVar19 + uVar12 + 0xff;
                  if (-1 < (int)uVar30) {
                    uVar18 = uVar30;
                  }
                  if (0xff < (int)uVar30) {
                    if (uVar30 < 0xff00) {
                      lVar14 = (long)local_f0;
                      dVar47 = ((double)iVar33 - dVar4) * ((double)iVar33 - dVar4) + dVar5;
                      iVar19 = iVar23;
                      if (dVar47 < dVar2) {
                        if (dVar47 < 0.0) {
                          dVar47 = sqrt(dVar47);
                          uVar45 = SUB84(DAT_005d9098,0);
                          uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                        }
                        else {
                          dVar47 = SQRT(dVar47);
                        }
                        iVar19 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                      }
                      lVar14 = lVar14 * iVar33;
                      uVar18 = (((int)uVar18 >> 8 & 0xffU) + 1) *
                               (uint)*(byte *)((long)local_1d0 + (long)iVar19 * 4 + 3);
                      cVar15 = (char)((0x100 - (uVar18 >> 8)) * (uint)*(byte *)(lVar9 + lVar14) >> 8
                                     ) + (char)(uVar18 >> 8);
                    }
                    else {
                      lVar14 = (long)local_f0;
                      dVar47 = ((double)iVar33 - dVar4) * ((double)iVar33 - dVar4) + dVar5;
                      iVar19 = iVar23;
                      if (dVar47 < dVar2) {
                        if (dVar47 < 0.0) {
                          dVar47 = sqrt(dVar47);
                          uVar45 = SUB84(DAT_005d9098,0);
                          uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                        }
                        else {
                          dVar47 = SQRT(dVar47);
                        }
                        iVar19 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                      }
                      lVar14 = lVar14 * iVar33;
                      uVar18 = *(uint *)((long)local_1d0 + (long)iVar19 * 4);
                      cVar15 = (char)((0x100 - (uVar18 >> 0x18)) * (uint)*(byte *)(lVar9 + lVar14)
                                     >> 8) + (char)(uVar18 >> 0x18);
                    }
                    *(char *)(lVar9 + lVar14) = cVar15;
                  }
                  if ((0 < (int)uVar13) && (uVar36 = (long)iVar33 + 1, (int)uVar36 < iVar37)) {
                    lVar14 = (long)local_f0;
                    if ((uVar13 & 0xff) == 0xff) {
                      pbVar21 = (byte *)(uVar36 * lVar14 + lVar9);
                      iVar33 = iVar37 - iVar33;
                      do {
                        dVar47 = (double)(int)uVar36 - dVar4;
                        dVar47 = dVar47 * dVar47 + dVar5;
                        iVar17 = iVar23;
                        if (dVar47 < dVar2) {
                          if (dVar47 < 0.0) {
                            dVar47 = sqrt(dVar47);
                            uVar45 = SUB84(DAT_005d9098,0);
                            uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                          }
                          else {
                            dVar47 = SQRT(dVar47);
                          }
                          iVar17 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                        }
                        uVar18 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                        *pbVar21 = (char)((0x100 - (uVar18 >> 0x18)) * (uint)*pbVar21 >> 8) +
                                   (char)(uVar18 >> 0x18);
                        pbVar21 = pbVar21 + lVar14;
                        iVar33 = iVar33 + -1;
                        uVar36 = (ulong)((int)uVar36 + 1);
                      } while (1 < iVar33);
                    }
                    else {
                      pbVar21 = (byte *)(uVar36 * lVar14 + lVar9);
                      do {
                        dVar47 = (double)(int)uVar36 - dVar4;
                        dVar47 = dVar47 * dVar47 + dVar5;
                        iVar33 = iVar23;
                        if (dVar47 < dVar2) {
                          if (dVar47 < 0.0) {
                            dVar47 = sqrt(dVar47);
                            uVar45 = SUB84(DAT_005d9098,0);
                            uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                          }
                          else {
                            dVar47 = SQRT(dVar47);
                          }
                          iVar33 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                        }
                        uVar18 = (uint)*(byte *)((long)local_1d0 + (long)iVar33 * 4 + 3) *
                                 ((uVar13 & 0xff) + 1);
                        *pbVar21 = (char)((0x100 - (uVar18 >> 8)) * (uint)*pbVar21 >> 8) +
                                   (char)(uVar18 >> 8);
                        pbVar21 = pbVar21 + lVar14;
                        iVar17 = iVar17 + -1;
                        uVar36 = (ulong)((int)uVar36 + 1);
                      } while (1 < iVar17);
                    }
                  }
                  uVar12 = (uVar16 & 0xff) * uVar13;
                }
                piVar22 = piVar22 + 2;
                bVar40 = 2 < iVar32;
                uVar18 = uVar16;
                iVar32 = iVar32 + -1;
              } while (bVar40);
              uVar18 = uVar12 + 0xff;
              if (-1 < (int)uVar12) {
                uVar18 = uVar12;
              }
              if (0xff < (int)uVar12) {
                if (uVar12 < 0xff00) {
                  lVar14 = (long)local_f0;
                  dVar47 = (double)iVar37 - dVar4;
                  dVar5 = dVar5 + dVar47 * dVar47;
                  iVar32 = iVar23;
                  if (dVar5 < dVar2) {
                    if (dVar5 < 0.0) {
                      dVar5 = sqrt(dVar5);
                      uVar45 = SUB84(DAT_005d9098,0);
                      uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                    }
                    else {
                      dVar5 = SQRT(dVar5);
                    }
                    iVar32 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                  }
                  lVar14 = lVar14 * iVar37;
                  uVar18 = (((int)uVar18 >> 8 & 0xffU) + 1) *
                           (uint)*(byte *)((long)local_1d0 + (long)iVar32 * 4 + 3);
                  cVar15 = (char)((0x100 - (uVar18 >> 8)) * (uint)*(byte *)(lVar9 + lVar14) >> 8) +
                           (char)(uVar18 >> 8);
                }
                else {
                  lVar14 = (long)local_f0;
                  dVar47 = (double)iVar37 - dVar4;
                  dVar5 = dVar5 + dVar47 * dVar47;
                  iVar32 = iVar23;
                  if (dVar5 < dVar2) {
                    if (dVar5 < 0.0) {
                      dVar5 = sqrt(dVar5);
                      uVar45 = SUB84(DAT_005d9098,0);
                      uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                    }
                    else {
                      dVar5 = SQRT(dVar5);
                    }
                    iVar32 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                  }
                  lVar14 = lVar14 * iVar37;
                  uVar18 = *(uint *)((long)local_1d0 + (long)iVar32 * 4);
                  cVar15 = (char)((0x100 - (uVar18 >> 0x18)) * (uint)*(byte *)(lVar9 + lVar14) >> 8)
                           + (char)(uVar18 >> 0x18);
                }
                *(char *)(lVar9 + lVar14) = cVar15;
              }
            }
            piVar26 = piVar26 + iVar34;
            iVar24 = iVar24 + 1;
          } while (iVar24 < *(int *)((long)param_1 + 0x1c));
        }
        goto LAB_0034cc55;
      }
      fVar43 = (float)*(undefined8 *)param_2;
      fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
      fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
      if (dVar2 < 0.0) {
        dVar48 = sqrt(dVar2);
      }
      else {
        dVar48 = SQRT(dVar2);
      }
      fVar41 = *param_3;
      fVar42 = fVar41 * param_3[4] - param_3[3] * param_3[1];
      dVar4 = (double)fVar42;
      uVar18 = _DAT_005d91b0 & SUB84(dVar4,0);
      uVar12 = _UNK_005d91b4 & (uint)((ulong)dVar4 >> 0x20);
      if ((double)CONCAT44(uVar12,uVar18) == DAT_005d94e0) {
        if ((fVar42 != 0.0) || (NAN(fVar42))) goto LAB_0034e890;
LAB_0034fe09:
        local_c8 = param_3[5];
        local_d8 = (float)*(undefined8 *)pfVar8;
        fStack_d4 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
        fStack_d0 = (float)*(undefined8 *)(param_3 + 3);
        fStack_cc = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
      }
      else {
        if (((double)CONCAT44(uVar12,uVar18) <= DAT_005db368) ||
           ((double)CONCAT44(uVar12,uVar18) <= DAT_005db370 * (double)CONCAT44(uVar12,uVar18)))
        goto LAB_0034fe09;
LAB_0034e890:
        dVar4 = _DAT_005d9000 / dVar4;
        dVar5 = (double)fVar41;
        fStack_d0 = (float)(dVar4 * (double)(float)((uint)param_3[3] ^ _DAT_006524b0));
        fVar41 = (float)(dVar4 * (double)param_3[4]);
        local_d8 = (float)((double)(float)((uint)param_3[1] ^ _DAT_006524b0) * dVar4);
        fStack_cc = (float)(dVar5 * dVar4);
        fStack_d4 = fVar41 * (float)((uint)param_3[2] ^ _DAT_006524b0) - local_d8 * param_3[5];
        local_c8 = (float)((uint)param_3[2] ^ _DAT_006524b0) * fStack_d0 - param_3[5] * fStack_cc;
      }
      if (0 < *(int *)((long)param_1 + 0x1c)) {
        iVar23 = iVar23 + -1;
        dVar48 = (double)iVar23 / dVar48;
        dVar4 = (double)fVar44;
        local_58._8_4_ = SUB84(dVar4,0);
        local_58._0_8_ = (double)fVar43;
        local_58._12_4_ = (int)((ulong)dVar4 >> 0x20);
        dVar4 = (double)fStack_d0;
        dVar5 = (double)fVar41;
        piVar26 = (int *)*param_1;
        local_78 = local_d8;
        fStack_70 = fStack_d0;
        fStack_74 = fStack_cc;
        fStack_6c = fStack_cc;
        local_68._4_4_ = local_c8;
        local_68._0_4_ = fStack_d4;
        uStack_60._0_4_ = fStack_cc;
        uStack_60._4_4_ = local_c8;
        iVar24 = 0;
        dVar47 = DAT_005d9098;
        do {
          iVar34 = *(int *)((long)param_1 + 0x24);
          if (1 < *piVar26) {
            piVar22 = piVar26 + 1;
            local_88._0_4_ = iVar24;
            iVar24 = *(int *)((long)param_1 + 0x14) + iVar24;
            lVar9 = (long)local_f4 * (long)iVar24 + local_108[0];
            fVar41 = (float)iVar24;
            local_98._0_8_ = piVar26;
            dVar6 = (double)(fVar41 * local_78 + (float)local_68._0_4_) - (double)local_58._0_8_;
            dVar7 = (double)(fVar41 * fStack_74 + (float)local_68._4_4_) - (double)local_58._8_8_;
            uVar12 = 0;
            uVar18 = piVar26[1];
            iVar24 = *piVar26;
            do {
              uVar16 = piVar22[2];
              uVar30 = uVar16 + 0xff;
              if (-1 < (int)uVar16) {
                uVar30 = uVar16;
              }
              uVar13 = piVar22[1];
              iVar32 = (int)uVar30 >> 8;
              uVar30 = uVar18 + 0xff;
              if (-1 < (int)uVar18) {
                uVar30 = uVar18;
              }
              iVar37 = (int)uVar30 >> 8;
              iVar33 = iVar32 - iVar37;
              if (iVar33 == 0) {
                uVar12 = (uVar16 - uVar18) * uVar13 + uVar12;
              }
              else {
                iVar17 = (0x100 - (uVar18 & 0xff)) * uVar13;
                uVar30 = iVar17 + uVar12;
                uVar18 = iVar17 + uVar12 + 0xff;
                if (-1 < (int)uVar30) {
                  uVar18 = uVar30;
                }
                if (0xff < (int)uVar30) {
                  if (uVar30 < 0xff00) {
                    lVar14 = (long)local_f0;
                    dVar3 = dVar4 * (double)iVar37 + dVar7;
                    dVar1 = (double)iVar37 * dVar5 + dVar6;
                    dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                    iVar17 = iVar23;
                    if (dVar3 < dVar2) {
                      if (dVar3 < 0.0) {
                        dVar3 = sqrt(dVar3);
                        dVar47 = DAT_005d9098;
                      }
                      else {
                        dVar3 = SQRT(dVar3);
                      }
                      iVar17 = SUB84(dVar3 * dVar48 + dVar47,0);
                      if (iVar23 <= iVar17) {
                        iVar17 = iVar23;
                      }
                    }
                    uVar18 = (((int)uVar18 >> 8 & 0xffU) + 1) *
                             (uint)*(byte *)((long)local_1d0 + (long)iVar17 * 4 + 3);
                    *(char *)(lVar9 + lVar14 * iVar37) =
                         (char)((0x100 - (uVar18 >> 8)) * (uint)*(byte *)(lVar9 + lVar14 * iVar37)
                               >> 8) + (char)(uVar18 >> 8);
                  }
                  else {
                    lVar14 = (long)local_f0;
                    dVar3 = dVar4 * (double)iVar37 + dVar7;
                    dVar1 = (double)iVar37 * dVar5 + dVar6;
                    dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                    iVar17 = iVar23;
                    if (dVar3 < dVar2) {
                      if (dVar3 < 0.0) {
                        dVar3 = sqrt(dVar3);
                        dVar47 = DAT_005d9098;
                      }
                      else {
                        dVar3 = SQRT(dVar3);
                      }
                      iVar17 = SUB84(dVar3 * dVar48 + dVar47,0);
                      if (iVar23 <= iVar17) {
                        iVar17 = iVar23;
                      }
                    }
                    uVar18 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                    *(char *)(lVar9 + lVar14 * iVar37) =
                         (char)((0x100 - (uVar18 >> 0x18)) *
                                (uint)*(byte *)(lVar9 + lVar14 * iVar37) >> 8) +
                         (char)(uVar18 >> 0x18);
                  }
                }
                if ((0 < (int)uVar13) && (uVar36 = (long)iVar37 + 1, (int)uVar36 < iVar32)) {
                  lVar14 = (long)local_f0;
                  if ((uVar13 & 0xff) == 0xff) {
                    pbVar21 = (byte *)(uVar36 * lVar14 + lVar9);
                    iVar37 = iVar32 - iVar37;
                    do {
                      dVar1 = (double)(int)uVar36;
                      dVar3 = dVar4 * dVar1 + dVar7;
                      dVar1 = dVar1 * dVar5 + dVar6;
                      dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                      iVar33 = iVar23;
                      if (dVar3 < dVar2) {
                        if (dVar3 < 0.0) {
                          dVar3 = sqrt(dVar3);
                          dVar47 = DAT_005d9098;
                        }
                        else {
                          dVar3 = SQRT(dVar3);
                        }
                        iVar33 = SUB84(dVar3 * dVar48 + dVar47,0);
                        if (iVar23 <= iVar33) {
                          iVar33 = iVar23;
                        }
                      }
                      uVar18 = *(uint *)((long)local_1d0 + (long)iVar33 * 4);
                      *pbVar21 = (char)((0x100 - (uVar18 >> 0x18)) * (uint)*pbVar21 >> 8) +
                                 (char)(uVar18 >> 0x18);
                      pbVar21 = pbVar21 + lVar14;
                      iVar37 = iVar37 + -1;
                      uVar36 = (ulong)((int)uVar36 + 1);
                    } while (1 < iVar37);
                  }
                  else {
                    pbVar21 = (byte *)(uVar36 * lVar14 + lVar9);
                    do {
                      dVar1 = (double)(int)uVar36;
                      dVar3 = dVar4 * dVar1 + dVar7;
                      dVar1 = dVar1 * dVar5 + dVar6;
                      dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                      iVar37 = iVar23;
                      if (dVar3 < dVar2) {
                        if (dVar3 < 0.0) {
                          dVar3 = sqrt(dVar3);
                          dVar47 = DAT_005d9098;
                        }
                        else {
                          dVar3 = SQRT(dVar3);
                        }
                        iVar37 = SUB84(dVar3 * dVar48 + dVar47,0);
                        if (iVar23 <= iVar37) {
                          iVar37 = iVar23;
                        }
                      }
                      uVar18 = (uint)*(byte *)((long)local_1d0 + (long)iVar37 * 4 + 3) *
                               ((uVar13 & 0xff) + 1);
                      *pbVar21 = (char)((0x100 - (uVar18 >> 8)) * (uint)*pbVar21 >> 8) +
                                 (char)(uVar18 >> 8);
                      pbVar21 = pbVar21 + lVar14;
                      iVar33 = iVar33 + -1;
                      uVar36 = (ulong)((int)uVar36 + 1);
                    } while (1 < iVar33);
                  }
                }
                uVar12 = (uVar16 & 0xff) * uVar13;
              }
              piVar22 = piVar22 + 2;
              bVar40 = 2 < iVar24;
              uVar18 = uVar16;
              iVar24 = iVar24 + -1;
            } while (bVar40);
            uVar18 = uVar12 + 0xff;
            if (-1 < (int)uVar12) {
              uVar18 = uVar12;
            }
            piVar26 = (int *)local_98._0_8_;
            iVar24 = local_88._0_4_;
            if (0xff < (int)uVar12) {
              dVar3 = (double)iVar32;
              if (uVar12 < 0xff00) {
                lVar14 = (long)local_f0;
                dVar7 = dVar4 * dVar3 + dVar7;
                dVar6 = dVar3 * dVar5 + dVar6;
                dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
                iVar37 = iVar23;
                if (dVar7 < dVar2) {
                  if (dVar7 < 0.0) {
                    dVar7 = sqrt(dVar7);
                    dVar47 = DAT_005d9098;
                  }
                  else {
                    dVar7 = SQRT(dVar7);
                  }
                  iVar37 = SUB84(dVar7 * dVar48 + dVar47,0);
                  if (iVar23 <= iVar37) {
                    iVar37 = iVar23;
                  }
                }
                lVar14 = lVar14 * iVar32;
                uVar18 = (((int)uVar18 >> 8 & 0xffU) + 1) *
                         (uint)*(byte *)((long)local_1d0 + (long)iVar37 * 4 + 3);
                cVar15 = (char)((0x100 - (uVar18 >> 8)) * (uint)*(byte *)(lVar9 + lVar14) >> 8) +
                         (char)(uVar18 >> 8);
              }
              else {
                lVar14 = (long)local_f0;
                dVar7 = dVar4 * dVar3 + dVar7;
                dVar6 = dVar3 * dVar5 + dVar6;
                dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
                iVar37 = iVar23;
                if (dVar7 < dVar2) {
                  if (dVar7 < 0.0) {
                    dVar7 = sqrt(dVar7);
                    dVar47 = DAT_005d9098;
                  }
                  else {
                    dVar7 = SQRT(dVar7);
                  }
                  iVar37 = SUB84(dVar7 * dVar48 + dVar47,0);
                  if (iVar23 <= iVar37) {
                    iVar37 = iVar23;
                  }
                }
                lVar14 = lVar14 * iVar32;
                uVar18 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                cVar15 = (char)((0x100 - (uVar18 >> 0x18)) * (uint)*(byte *)(lVar9 + lVar14) >> 8) +
                         (char)(uVar18 >> 0x18);
              }
              *(char *)(lVar9 + lVar14) = cVar15;
            }
          }
          piVar26 = piVar26 + iVar34;
          iVar24 = iVar24 + 1;
        } while (iVar24 < *(int *)((long)param_1 + 0x1c));
      }
      goto LAB_0034cc55;
    }
    if (param_2[0x10] == (ColourGradient)0x0) {
      GradientPixelIterators::Linear::Linear
                ((Linear *)&local_d8,(undefined8 *)param_2,param_3,local_1d0,iVar23 + -1);
      dVar2 = DAT_005d9098;
      if (0 < *(int *)((long)param_1 + 0x1c)) {
        piVar26 = (int *)*param_1;
        lVar9 = CONCAT44(fStack_d4,local_d8);
        iVar23 = 0;
        do {
          iVar24 = *(int *)((long)param_1 + 0x24);
          if (1 < *piVar26) {
            lVar14 = (long)iVar23 + (long)*(int *)((long)param_1 + 0x14);
            local_a0 = local_f4 * lVar14 + local_108[0];
            iVar34 = (int)lVar14;
            if (local_b0 == '\0') {
              if (local_af == '\0') {
                local_c8 = SUB84(((double)iVar34 - local_b8) * local_c0 + dVar2,0);
              }
            }
            else {
              iVar34 = iVar34 * local_c4 - (int)local_c8;
              fVar41 = (float)(iVar34 >> 0xc);
              if ((int)fStack_d0 < (int)fVar41) {
                fVar41 = fStack_d0;
              }
              if (iVar34 < 0) {
                fVar41 = 0.0;
              }
              fStack_cc = *(float *)(lVar9 + (long)(int)fVar41 * 4);
            }
            piVar22 = piVar26 + 1;
            uVar12 = 0;
            iVar34 = *piVar26;
            uVar18 = piVar26[1];
            do {
              uVar16 = piVar22[2];
              uVar30 = uVar16 + 0xff;
              if (-1 < (int)uVar16) {
                uVar30 = uVar16;
              }
              uVar13 = piVar22[1];
              iVar32 = (int)uVar30 >> 8;
              uVar30 = uVar18 + 0xff;
              if (-1 < (int)uVar18) {
                uVar30 = uVar18;
              }
              iVar37 = (int)uVar30 >> 8;
              iVar33 = iVar32 - iVar37;
              if (iVar33 == 0) {
                uVar12 = (uVar16 - uVar18) * uVar13 + uVar12;
              }
              else {
                iVar17 = (0x100 - (uVar18 & 0xff)) * uVar13;
                uVar30 = iVar17 + uVar12;
                uVar18 = uVar12 + iVar17 + 0xff;
                if (-1 < (int)uVar30) {
                  uVar18 = uVar30;
                }
                if (0xff < (int)uVar30) {
                  if (uVar30 < 0xff00) {
                    pfVar8 = &fStack_cc;
                    if (local_b0 == '\0') {
                      iVar17 = local_c4 * iVar37 - (int)local_c8;
                      fVar41 = (float)(iVar17 >> 0xc);
                      if ((int)fStack_d0 < (int)fVar41) {
                        fVar41 = fStack_d0;
                      }
                      if (iVar17 < 0) {
                        fVar41 = 0.0;
                      }
                      pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                    }
                    uVar18 = (int)uVar18 >> 8 & 0xff;
                    lVar14 = (long)local_f0 * (long)iVar37;
                    fVar41 = (float)(((uint)*pfVar8 >> 8 & 0xff00ff) * uVar18);
                    uVar12 = 0x100 - ((uint)fVar41 >> 0x18);
                    uVar30 = ((*(uint *)(local_a0 + lVar14) & 0xff00ff) * uVar12 >> 8 & 0xff00ff) +
                             (((uint)*pfVar8 & 0xff00ff) * uVar18 >> 8 & 0xff00ff);
                    uVar18 = *(uint *)(local_a0 + lVar14) >> 8 & 0xff00ff;
                  }
                  else {
                    pfVar8 = &fStack_cc;
                    if (local_b0 == '\0') {
                      iVar17 = local_c4 * iVar37 - (int)local_c8;
                      fVar41 = (float)(iVar17 >> 0xc);
                      if ((int)fStack_d0 < (int)fVar41) {
                        fVar41 = fStack_d0;
                      }
                      if (iVar17 < 0) {
                        fVar41 = 0.0;
                      }
                      pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                    }
                    lVar14 = (long)local_f0 * (long)iVar37;
                    fVar41 = *pfVar8;
                    uVar18 = 0x100 - ((uint)fVar41 >> 0x18);
                    uVar30 = ((*(uint *)(local_a0 + lVar14) & 0xff00ff) * uVar18 >> 8 & 0xff00ff) +
                             ((uint)fVar41 & 0xff00ff);
                    uVar12 = *(uint *)(local_a0 + lVar14) >> 8 & 0xff00ff;
                  }
                  uVar18 = (uVar18 * uVar12 >> 8 & 0xff00ff) + ((uint)fVar41 >> 8 & 0xff00ff);
                  *(uint *)(local_a0 + lVar14) =
                       ((0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff) << 8 |
                       (0x100 - (uVar30 >> 8 & 0x10001) | uVar30) & 0xff00ff;
                }
                if ((0 < (int)uVar13) && (iVar17 = iVar37 + 1, iVar17 < iVar32)) {
                  lVar14 = (long)local_f0;
                  puVar38 = (uint *)(iVar17 * lVar14 + local_a0);
                  if ((uVar13 & 0xff) == 0xff) {
                    iVar37 = iVar32 - iVar37;
                    iVar33 = iVar17 * local_c4 + -(int)local_c8;
                    do {
                      pfVar8 = &fStack_cc;
                      if (local_b0 == '\0') {
                        fVar41 = (float)(iVar33 >> 0xc);
                        if ((int)fStack_d0 < iVar33 >> 0xc) {
                          fVar41 = fStack_d0;
                        }
                        if (iVar33 < 0) {
                          fVar41 = 0.0;
                        }
                        pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                      }
                      fVar41 = *pfVar8;
                      iVar17 = 0x100 - ((uint)fVar41 >> 0x18);
                      uVar12 = ((*puVar38 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) +
                               ((uint)fVar41 & 0xff00ff);
                      uVar18 = ((*puVar38 >> 8 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) +
                               ((uint)fVar41 >> 8 & 0xff00ff);
                      *puVar38 = ((0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff) << 8 |
                                 (0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff;
                      puVar38 = (uint *)((long)puVar38 + lVar14);
                      iVar37 = iVar37 + -1;
                      iVar33 = iVar33 + local_c4;
                    } while (1 < iVar37);
                  }
                  else {
                    iVar37 = iVar17 * local_c4 + -(int)local_c8;
                    do {
                      pfVar8 = &fStack_cc;
                      if (local_b0 == '\0') {
                        fVar41 = (float)(iVar37 >> 0xc);
                        if ((int)fStack_d0 < iVar37 >> 0xc) {
                          fVar41 = fStack_d0;
                        }
                        if (iVar37 < 0) {
                          fVar41 = 0.0;
                        }
                        pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                      }
                      uVar18 = ((uint)*pfVar8 >> 8 & 0xff00ff) * (uVar13 & 0xff);
                      iVar17 = 0x100 - (uVar18 >> 0x18);
                      uVar12 = ((*puVar38 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) +
                               (((uint)*pfVar8 & 0xff00ff) * (uVar13 & 0xff) >> 8 & 0xff00ff);
                      uVar18 = ((*puVar38 >> 8 & 0xff00ff) * iVar17 >> 8 & 0xff00ff) +
                               (uVar18 >> 8 & 0xff00ff);
                      *puVar38 = ((0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff) << 8 |
                                 (0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff;
                      puVar38 = (uint *)((long)puVar38 + lVar14);
                      iVar33 = iVar33 + -1;
                      iVar37 = iVar37 + local_c4;
                    } while (1 < iVar33);
                  }
                }
                uVar12 = (uVar16 & 0xff) * uVar13;
              }
              piVar22 = piVar22 + 2;
              bVar40 = 2 < iVar34;
              iVar34 = iVar34 + -1;
              uVar18 = uVar16;
            } while (bVar40);
            uVar18 = uVar12 + 0xff;
            if (-1 < (int)uVar12) {
              uVar18 = uVar12;
            }
            if (0xff < (int)uVar12) {
              if (uVar12 < 0xff00) {
                pfVar8 = &fStack_cc;
                if (local_b0 == '\0') {
                  iVar34 = iVar32 * local_c4 - (int)local_c8;
                  fVar41 = (float)(iVar34 >> 0xc);
                  if ((int)fStack_d0 < (int)fVar41) {
                    fVar41 = fStack_d0;
                  }
                  if (iVar34 < 0) {
                    fVar41 = 0.0;
                  }
                  pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                }
                uVar18 = (int)uVar18 >> 8 & 0xff;
                lVar14 = (long)local_f0 * (long)iVar32;
                fVar41 = (float)(((uint)*pfVar8 >> 8 & 0xff00ff) * uVar18);
                uVar16 = 0x100 - ((uint)fVar41 >> 0x18);
                uVar18 = ((*(uint *)(local_a0 + lVar14) & 0xff00ff) * uVar16 >> 8 & 0xff00ff) +
                         (((uint)*pfVar8 & 0xff00ff) * uVar18 >> 8 & 0xff00ff);
                uVar12 = *(uint *)(local_a0 + lVar14) >> 8 & 0xff00ff;
              }
              else {
                pfVar8 = &fStack_cc;
                if (local_b0 == '\0') {
                  iVar34 = iVar32 * local_c4 - (int)local_c8;
                  fVar41 = (float)(iVar34 >> 0xc);
                  if ((int)fStack_d0 < (int)fVar41) {
                    fVar41 = fStack_d0;
                  }
                  if (iVar34 < 0) {
                    fVar41 = 0.0;
                  }
                  pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                }
                lVar14 = (long)local_f0 * (long)iVar32;
                fVar41 = *pfVar8;
                uVar12 = 0x100 - ((uint)fVar41 >> 0x18);
                uVar18 = ((*(uint *)(local_a0 + lVar14) & 0xff00ff) * uVar12 >> 8 & 0xff00ff) +
                         ((uint)fVar41 & 0xff00ff);
                uVar16 = *(uint *)(local_a0 + lVar14) >> 8 & 0xff00ff;
              }
              uVar12 = (uVar12 * uVar16 >> 8 & 0xff00ff) + ((uint)fVar41 >> 8 & 0xff00ff);
              *(uint *)(local_a0 + lVar14) =
                   ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                   (0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff;
            }
          }
          piVar26 = piVar26 + iVar24;
          iVar23 = iVar23 + 1;
        } while (iVar23 < *(int *)((long)param_1 + 0x1c));
      }
      goto LAB_0034cc55;
    }
    if (param_4 != '\0') {
      fVar43 = (float)*(undefined8 *)param_2;
      fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
      fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
      if (dVar2 < 0.0) {
        dVar48 = sqrt(dVar2);
      }
      else {
        dVar48 = SQRT(dVar2);
      }
      if (0 < *(int *)((long)param_1 + 0x1c)) {
        iVar23 = iVar23 + -1;
        dVar48 = (double)iVar23 / dVar48;
        dVar4 = (double)fVar43;
        dVar5 = (double)fVar44;
        puVar38 = (uint *)*param_1;
        local_98._8_4_ = SUB84(dVar5,0);
        local_98._0_8_ = dVar5;
        local_98._12_4_ = (int)((ulong)dVar5 >> 0x20);
        iVar24 = 0;
        uVar45 = SUB84(DAT_005d9098,0);
        uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
        do {
          iVar34 = *(int *)((long)param_1 + 0x24);
          if (1 < (int)*puVar38) {
            puVar27 = puVar38 + 1;
            lVar14 = (long)iVar24 + (long)*(int *)((long)param_1 + 0x14);
            lVar9 = local_f4 * lVar14 + local_108[0];
            dVar5 = (double)(int)lVar14 - (double)local_98._0_8_;
            dVar5 = dVar5 * dVar5;
            uVar16 = 0;
            uVar12 = puVar38[1];
            uVar18 = *puVar38;
            do {
              uVar30 = puVar27[2];
              uVar13 = uVar30 + 0xff;
              if (-1 < (int)uVar30) {
                uVar13 = uVar30;
              }
              uVar11 = puVar27[1];
              iVar32 = (int)uVar13 >> 8;
              uVar13 = uVar12 + 0xff;
              if (-1 < (int)uVar12) {
                uVar13 = uVar12;
              }
              iVar37 = (int)uVar13 >> 8;
              iVar33 = iVar32 - iVar37;
              if (iVar33 == 0) {
                uVar16 = (uVar30 - uVar12) * uVar11 + uVar16;
              }
              else {
                iVar17 = (0x100 - (uVar12 & 0xff)) * uVar11;
                uVar13 = iVar17 + uVar16;
                uVar12 = iVar17 + uVar16 + 0xff;
                if (-1 < (int)uVar13) {
                  uVar12 = uVar13;
                }
                if (0xff < (int)uVar13) {
                  if (uVar13 < 0xff00) {
                    lVar14 = (long)local_f0;
                    dVar47 = (double)iVar37 - dVar4;
                    dVar47 = dVar47 * dVar47 + dVar5;
                    iVar17 = iVar23;
                    if (dVar47 < dVar2) {
                      if (dVar47 < 0.0) {
                        dVar47 = sqrt(dVar47);
                        uVar45 = SUB84(DAT_005d9098,0);
                        uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                      }
                      else {
                        dVar47 = SQRT(dVar47);
                      }
                      iVar17 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                    }
                    uVar13 = (int)uVar12 >> 8 & 0xff;
                    lVar14 = lVar14 * iVar37;
                    uVar16 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                    uVar12 = (uVar16 >> 8 & 0xff00ff) * uVar13;
                    uVar29 = 0x100 - (uVar12 >> 0x18);
                    uVar13 = ((*(uint *)(lVar9 + lVar14) & 0xff00ff) * uVar29 >> 8 & 0xff00ff) +
                             ((uVar16 & 0xff00ff) * uVar13 >> 8 & 0xff00ff);
                    uVar16 = *(uint *)(lVar9 + lVar14) >> 8 & 0xff00ff;
                  }
                  else {
                    lVar14 = (long)local_f0;
                    dVar47 = (double)iVar37 - dVar4;
                    dVar47 = dVar47 * dVar47 + dVar5;
                    iVar17 = iVar23;
                    if (dVar47 < dVar2) {
                      if (dVar47 < 0.0) {
                        dVar47 = sqrt(dVar47);
                        uVar45 = SUB84(DAT_005d9098,0);
                        uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                      }
                      else {
                        dVar47 = SQRT(dVar47);
                      }
                      iVar17 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                    }
                    lVar14 = lVar14 * iVar37;
                    uVar12 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                    uVar16 = 0x100 - (uVar12 >> 0x18);
                    uVar13 = ((*(uint *)(lVar9 + lVar14) & 0xff00ff) * uVar16 >> 8 & 0xff00ff) +
                             (uVar12 & 0xff00ff);
                    uVar29 = *(uint *)(lVar9 + lVar14) >> 8 & 0xff00ff;
                  }
                  uVar12 = (uVar16 * uVar29 >> 8 & 0xff00ff) + (uVar12 >> 8 & 0xff00ff);
                  *(uint *)(lVar9 + lVar14) =
                       ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                       (0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff;
                }
                if ((0 < (int)uVar11) && (uVar36 = (long)iVar37 + 1, (int)uVar36 < iVar32)) {
                  lVar14 = (long)local_f0;
                  puVar25 = (uint *)(uVar36 * lVar14 + lVar9);
                  if ((uVar11 & 0xff) == 0xff) {
                    iVar37 = iVar32 - iVar37;
                    do {
                      dVar47 = (double)(int)uVar36 - dVar4;
                      dVar47 = dVar47 * dVar47 + dVar5;
                      iVar33 = iVar23;
                      if (dVar47 < dVar2) {
                        if (dVar47 < 0.0) {
                          dVar47 = sqrt(dVar47);
                          uVar45 = SUB84(DAT_005d9098,0);
                          uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                        }
                        else {
                          dVar47 = SQRT(dVar47);
                        }
                        iVar33 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                      }
                      uVar12 = *(uint *)((long)local_1d0 + (long)iVar33 * 4);
                      iVar33 = 0x100 - (uVar12 >> 0x18);
                      uVar16 = ((*puVar25 & 0xff00ff) * iVar33 >> 8 & 0xff00ff) +
                               (uVar12 & 0xff00ff);
                      uVar12 = ((*puVar25 >> 8 & 0xff00ff) * iVar33 >> 8 & 0xff00ff) +
                               (uVar12 >> 8 & 0xff00ff);
                      *puVar25 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                                 (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
                      puVar25 = (uint *)((long)puVar25 + lVar14);
                      iVar37 = iVar37 + -1;
                      uVar36 = (ulong)((int)uVar36 + 1);
                    } while (1 < iVar37);
                  }
                  else {
                    do {
                      dVar47 = (double)(int)uVar36 - dVar4;
                      dVar47 = dVar47 * dVar47 + dVar5;
                      iVar37 = iVar23;
                      if (dVar47 < dVar2) {
                        if (dVar47 < 0.0) {
                          dVar47 = sqrt(dVar47);
                          uVar45 = SUB84(DAT_005d9098,0);
                          uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                        }
                        else {
                          dVar47 = SQRT(dVar47);
                        }
                        iVar37 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                      }
                      uVar12 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                      uVar16 = (uVar12 >> 8 & 0xff00ff) * (uVar11 & 0xff);
                      iVar37 = 0x100 - (uVar16 >> 0x18);
                      uVar13 = ((*puVar25 & 0xff00ff) * iVar37 >> 8 & 0xff00ff) +
                               ((uVar12 & 0xff00ff) * (uVar11 & 0xff) >> 8 & 0xff00ff);
                      uVar12 = ((*puVar25 >> 8 & 0xff00ff) * iVar37 >> 8 & 0xff00ff) +
                               (uVar16 >> 8 & 0xff00ff);
                      *puVar25 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                                 (0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff;
                      puVar25 = (uint *)((long)puVar25 + lVar14);
                      iVar33 = iVar33 + -1;
                      uVar36 = (ulong)((int)uVar36 + 1);
                    } while (1 < iVar33);
                  }
                }
                uVar16 = (uVar30 & 0xff) * uVar11;
              }
              puVar27 = puVar27 + 2;
              bVar40 = 2 < uVar18;
              uVar12 = uVar30;
              uVar18 = uVar18 - 1;
            } while (bVar40);
            uVar18 = uVar16 + 0xff;
            if (-1 < (int)uVar16) {
              uVar18 = uVar16;
            }
            if (0xff < (int)uVar16) {
              if (uVar16 < 0xff00) {
                lVar14 = (long)local_f0;
                dVar5 = dVar5 + ((double)iVar32 - dVar4) * ((double)iVar32 - dVar4);
                iVar37 = iVar23;
                if (dVar5 < dVar2) {
                  if (dVar5 < 0.0) {
                    dVar5 = sqrt(dVar5);
                    uVar45 = SUB84(DAT_005d9098,0);
                    uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                  }
                  else {
                    dVar5 = SQRT(dVar5);
                  }
                  iVar37 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                }
                uVar16 = (int)uVar18 >> 8 & 0xff;
                lVar14 = lVar14 * iVar32;
                uVar18 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                uVar12 = (uVar18 >> 8 & 0xff00ff) * uVar16;
                uVar30 = 0x100 - (uVar12 >> 0x18);
                uVar16 = ((*(uint *)(lVar9 + lVar14) & 0xff00ff) * uVar30 >> 8 & 0xff00ff) +
                         ((uVar18 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                uVar18 = *(uint *)(lVar9 + lVar14) >> 8 & 0xff00ff;
              }
              else {
                lVar14 = (long)local_f0;
                dVar5 = dVar5 + ((double)iVar32 - dVar4) * ((double)iVar32 - dVar4);
                iVar37 = iVar23;
                if (dVar5 < dVar2) {
                  if (dVar5 < 0.0) {
                    dVar5 = sqrt(dVar5);
                    uVar45 = SUB84(DAT_005d9098,0);
                    uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                  }
                  else {
                    dVar5 = SQRT(dVar5);
                  }
                  iVar37 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                }
                lVar14 = lVar14 * iVar32;
                uVar12 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                uVar18 = 0x100 - (uVar12 >> 0x18);
                uVar16 = ((*(uint *)(lVar9 + lVar14) & 0xff00ff) * uVar18 >> 8 & 0xff00ff) +
                         (uVar12 & 0xff00ff);
                uVar30 = *(uint *)(lVar9 + lVar14) >> 8 & 0xff00ff;
              }
              uVar18 = (uVar18 * uVar30 >> 8 & 0xff00ff) + (uVar12 >> 8 & 0xff00ff);
              *(uint *)(lVar9 + lVar14) =
                   ((0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff) << 8 |
                   (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
            }
          }
          puVar38 = puVar38 + iVar34;
          iVar24 = iVar24 + 1;
        } while (iVar24 < *(int *)((long)param_1 + 0x1c));
      }
      goto LAB_0034cc55;
    }
    fVar43 = (float)*(undefined8 *)param_2;
    fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
    fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
    if (dVar2 < 0.0) {
      dVar48 = sqrt(dVar2);
    }
    else {
      dVar48 = SQRT(dVar2);
    }
    fVar41 = *param_3;
    fVar42 = fVar41 * param_3[4] - param_3[3] * param_3[1];
    dVar4 = (double)fVar42;
    uVar18 = _DAT_005d91b0 & SUB84(dVar4,0);
    uVar12 = _UNK_005d91b4 & (uint)((ulong)dVar4 >> 0x20);
    if ((double)CONCAT44(uVar12,uVar18) == DAT_005d94e0) {
      if ((fVar42 != 0.0) || (NAN(fVar42))) goto LAB_0034e5f4;
LAB_0034e955:
      local_c8 = param_3[5];
      local_d8 = (float)*(undefined8 *)pfVar8;
      fStack_d4 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
      fStack_d0 = (float)*(undefined8 *)(param_3 + 3);
      fStack_cc = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
    }
    else {
      if (((double)CONCAT44(uVar12,uVar18) <= DAT_005db368) ||
         ((double)CONCAT44(uVar12,uVar18) <= DAT_005db370 * (double)CONCAT44(uVar12,uVar18)))
      goto LAB_0034e955;
LAB_0034e5f4:
      dVar4 = _DAT_005d9000 / dVar4;
      dVar5 = (double)fVar41;
      fStack_d0 = (float)(dVar4 * (double)(float)((uint)param_3[3] ^ _DAT_006524b0));
      fVar41 = (float)(dVar4 * (double)param_3[4]);
      local_d8 = (float)((double)(float)((uint)param_3[1] ^ _DAT_006524b0) * dVar4);
      fStack_cc = (float)(dVar5 * dVar4);
      fStack_d4 = fVar41 * (float)((uint)param_3[2] ^ _DAT_006524b0) - local_d8 * param_3[5];
      local_c8 = (float)((uint)param_3[2] ^ _DAT_006524b0) * fStack_d0 - param_3[5] * fStack_cc;
    }
    if (0 < *(int *)((long)param_1 + 0x1c)) {
      iVar23 = iVar23 + -1;
      dVar48 = (double)iVar23 / dVar48;
      dVar4 = (double)fVar44;
      local_58._8_4_ = SUB84(dVar4,0);
      local_58._0_8_ = (double)fVar43;
      local_58._12_4_ = (int)((ulong)dVar4 >> 0x20);
      dVar4 = (double)fStack_d0;
      dVar5 = (double)fVar41;
      puVar38 = (uint *)*param_1;
      local_78 = local_d8;
      fStack_70 = fStack_d0;
      fStack_74 = fStack_cc;
      fStack_6c = fStack_cc;
      local_68._4_4_ = local_c8;
      local_68._0_4_ = fStack_d4;
      uStack_60._0_4_ = fStack_cc;
      uStack_60._4_4_ = local_c8;
      iVar24 = 0;
      dVar47 = DAT_005d9098;
      do {
        lVar9 = (long)*(int *)((long)param_1 + 0x24);
        if (1 < (int)*puVar38) {
          local_88._0_8_ = lVar9;
          puVar27 = puVar38 + 1;
          local_98._0_4_ = iVar24;
          lVar9 = (long)iVar24 + (long)*(int *)((long)param_1 + 0x14);
          lVar14 = local_f4 * lVar9 + local_108[0];
          fVar41 = (float)(int)lVar9;
          dVar6 = (double)(fVar41 * local_78 + (float)local_68._0_4_) - (double)local_58._0_8_;
          dVar7 = (double)(fVar41 * fStack_74 + (float)local_68._4_4_) - (double)local_58._8_8_;
          uVar16 = 0;
          uVar12 = puVar38[1];
          uVar18 = *puVar38;
          do {
            uVar30 = puVar27[2];
            uVar13 = uVar30 + 0xff;
            if (-1 < (int)uVar30) {
              uVar13 = uVar30;
            }
            uVar11 = puVar27[1];
            iVar34 = (int)uVar13 >> 8;
            uVar13 = uVar12 + 0xff;
            if (-1 < (int)uVar12) {
              uVar13 = uVar12;
            }
            iVar24 = (int)uVar13 >> 8;
            iVar32 = iVar34 - iVar24;
            if (iVar32 == 0) {
              uVar16 = (uVar30 - uVar12) * uVar11 + uVar16;
            }
            else {
              iVar37 = (0x100 - (uVar12 & 0xff)) * uVar11;
              uVar13 = iVar37 + uVar16;
              uVar12 = iVar37 + uVar16 + 0xff;
              if (-1 < (int)uVar13) {
                uVar12 = uVar13;
              }
              if (0xff < (int)uVar13) {
                dVar3 = (double)iVar24;
                if (uVar13 < 0xff00) {
                  lVar9 = (long)local_f0;
                  dVar1 = dVar4 * dVar3 + dVar7;
                  dVar3 = dVar3 * dVar5 + dVar6;
                  dVar3 = dVar1 * dVar1 + dVar3 * dVar3;
                  iVar37 = iVar23;
                  if (dVar3 < dVar2) {
                    if (dVar3 < 0.0) {
                      dVar3 = sqrt(dVar3);
                      dVar47 = DAT_005d9098;
                    }
                    else {
                      dVar3 = SQRT(dVar3);
                    }
                    iVar37 = SUB84(dVar3 * dVar48 + dVar47,0);
                    if (iVar23 <= iVar37) {
                      iVar37 = iVar23;
                    }
                  }
                  uVar13 = (int)uVar12 >> 8 & 0xff;
                  lVar9 = lVar9 * iVar24;
                  uVar16 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                  uVar12 = (uVar16 >> 8 & 0xff00ff) * uVar13;
                  uVar29 = 0x100 - (uVar12 >> 0x18);
                  uVar13 = ((*(uint *)(lVar14 + lVar9) & 0xff00ff) * uVar29 >> 8 & 0xff00ff) +
                           ((uVar16 & 0xff00ff) * uVar13 >> 8 & 0xff00ff);
                  uVar16 = *(uint *)(lVar14 + lVar9) >> 8 & 0xff00ff;
                }
                else {
                  lVar9 = (long)local_f0;
                  dVar1 = dVar4 * dVar3 + dVar7;
                  dVar3 = dVar3 * dVar5 + dVar6;
                  dVar3 = dVar1 * dVar1 + dVar3 * dVar3;
                  iVar37 = iVar23;
                  if (dVar3 < dVar2) {
                    if (dVar3 < 0.0) {
                      dVar3 = sqrt(dVar3);
                      dVar47 = DAT_005d9098;
                    }
                    else {
                      dVar3 = SQRT(dVar3);
                    }
                    iVar37 = SUB84(dVar3 * dVar48 + dVar47,0);
                    if (iVar23 <= iVar37) {
                      iVar37 = iVar23;
                    }
                  }
                  lVar9 = lVar9 * iVar24;
                  uVar12 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                  uVar16 = 0x100 - (uVar12 >> 0x18);
                  uVar13 = ((*(uint *)(lVar14 + lVar9) & 0xff00ff) * uVar16 >> 8 & 0xff00ff) +
                           (uVar12 & 0xff00ff);
                  uVar29 = *(uint *)(lVar14 + lVar9) >> 8 & 0xff00ff;
                }
                uVar12 = (uVar16 * uVar29 >> 8 & 0xff00ff) + (uVar12 >> 8 & 0xff00ff);
                *(uint *)(lVar14 + lVar9) =
                     ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                     (0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff;
              }
              if ((0 < (int)uVar11) && (uVar36 = (long)iVar24 + 1, (int)uVar36 < iVar34)) {
                lVar9 = (long)local_f0;
                puVar25 = (uint *)(uVar36 * lVar9 + lVar14);
                if ((uVar11 & 0xff) == 0xff) {
                  iVar24 = iVar34 - iVar24;
                  do {
                    dVar1 = (double)(int)uVar36;
                    dVar3 = dVar4 * dVar1 + dVar7;
                    dVar1 = dVar1 * dVar5 + dVar6;
                    dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                    iVar32 = iVar23;
                    if (dVar3 < dVar2) {
                      if (dVar3 < 0.0) {
                        dVar3 = sqrt(dVar3);
                        dVar47 = DAT_005d9098;
                      }
                      else {
                        dVar3 = SQRT(dVar3);
                      }
                      iVar32 = SUB84(dVar3 * dVar48 + dVar47,0);
                      if (iVar23 <= iVar32) {
                        iVar32 = iVar23;
                      }
                    }
                    uVar12 = *(uint *)((long)local_1d0 + (long)iVar32 * 4);
                    iVar32 = 0x100 - (uVar12 >> 0x18);
                    uVar16 = ((*puVar25 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + (uVar12 & 0xff00ff);
                    uVar12 = ((*puVar25 >> 8 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) +
                             (uVar12 >> 8 & 0xff00ff);
                    *puVar25 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                               (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
                    puVar25 = (uint *)((long)puVar25 + lVar9);
                    iVar24 = iVar24 + -1;
                    uVar36 = (ulong)((int)uVar36 + 1);
                  } while (1 < iVar24);
                }
                else {
                  do {
                    dVar1 = (double)(int)uVar36;
                    dVar3 = dVar4 * dVar1 + dVar7;
                    dVar1 = dVar1 * dVar5 + dVar6;
                    dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                    iVar24 = iVar23;
                    if (dVar3 < dVar2) {
                      if (dVar3 < 0.0) {
                        dVar3 = sqrt(dVar3);
                        dVar47 = DAT_005d9098;
                      }
                      else {
                        dVar3 = SQRT(dVar3);
                      }
                      iVar24 = SUB84(dVar3 * dVar48 + dVar47,0);
                      if (iVar23 <= iVar24) {
                        iVar24 = iVar23;
                      }
                    }
                    uVar12 = *(uint *)((long)local_1d0 + (long)iVar24 * 4);
                    uVar16 = (uVar12 >> 8 & 0xff00ff) * (uVar11 & 0xff);
                    iVar24 = 0x100 - (uVar16 >> 0x18);
                    uVar13 = ((*puVar25 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) +
                             ((uVar12 & 0xff00ff) * (uVar11 & 0xff) >> 8 & 0xff00ff);
                    uVar12 = ((*puVar25 >> 8 & 0xff00ff) * iVar24 >> 8 & 0xff00ff) +
                             (uVar16 >> 8 & 0xff00ff);
                    *puVar25 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                               (0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff;
                    puVar25 = (uint *)((long)puVar25 + lVar9);
                    iVar32 = iVar32 + -1;
                    uVar36 = (ulong)((int)uVar36 + 1);
                  } while (1 < iVar32);
                }
              }
              uVar16 = (uVar30 & 0xff) * uVar11;
            }
            puVar27 = puVar27 + 2;
            bVar40 = 2 < uVar18;
            uVar12 = uVar30;
            uVar18 = uVar18 - 1;
          } while (bVar40);
          uVar18 = uVar16 + 0xff;
          if (-1 < (int)uVar16) {
            uVar18 = uVar16;
          }
          iVar24 = local_98._0_4_;
          lVar9 = local_88._0_8_;
          if (0xff < (int)uVar16) {
            if (uVar16 < 0xff00) {
              lVar39 = (long)local_f0;
              dVar7 = dVar4 * (double)iVar34 + dVar7;
              dVar6 = (double)iVar34 * dVar5 + dVar6;
              dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
              iVar32 = iVar23;
              if (dVar7 < dVar2) {
                if (dVar7 < 0.0) {
                  dVar7 = sqrt(dVar7);
                  dVar47 = DAT_005d9098;
                }
                else {
                  dVar7 = SQRT(dVar7);
                }
                iVar32 = SUB84(dVar7 * dVar48 + dVar47,0);
                if (iVar23 <= iVar32) {
                  iVar32 = iVar23;
                }
              }
              uVar16 = (int)uVar18 >> 8 & 0xff;
              lVar39 = lVar39 * iVar34;
              uVar18 = *(uint *)((long)local_1d0 + (long)iVar32 * 4);
              uVar12 = (uVar18 >> 8 & 0xff00ff) * uVar16;
              uVar30 = 0x100 - (uVar12 >> 0x18);
              uVar16 = ((*(uint *)(lVar14 + lVar39) & 0xff00ff) * uVar30 >> 8 & 0xff00ff) +
                       ((uVar18 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
              uVar18 = *(uint *)(lVar14 + lVar39) >> 8 & 0xff00ff;
            }
            else {
              lVar39 = (long)local_f0;
              dVar7 = dVar4 * (double)iVar34 + dVar7;
              dVar6 = (double)iVar34 * dVar5 + dVar6;
              dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
              iVar32 = iVar23;
              if (dVar7 < dVar2) {
                if (dVar7 < 0.0) {
                  dVar7 = sqrt(dVar7);
                  dVar47 = DAT_005d9098;
                }
                else {
                  dVar7 = SQRT(dVar7);
                }
                iVar32 = SUB84(dVar7 * dVar48 + dVar47,0);
                if (iVar23 <= iVar32) {
                  iVar32 = iVar23;
                }
              }
              lVar39 = lVar39 * iVar34;
              uVar12 = *(uint *)((long)local_1d0 + (long)iVar32 * 4);
              uVar18 = 0x100 - (uVar12 >> 0x18);
              uVar16 = ((*(uint *)(lVar14 + lVar39) & 0xff00ff) * uVar18 >> 8 & 0xff00ff) +
                       (uVar12 & 0xff00ff);
              uVar30 = *(uint *)(lVar14 + lVar39) >> 8 & 0xff00ff;
            }
            uVar18 = (uVar18 * uVar30 >> 8 & 0xff00ff) + (uVar12 >> 8 & 0xff00ff);
            *(uint *)(lVar14 + lVar39) =
                 ((0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff) << 8 |
                 (0x100 - (uVar16 >> 8 & 0x10001) | uVar16) & 0xff00ff;
          }
        }
        puVar38 = puVar38 + lVar9;
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)((long)param_1 + 0x1c));
    }
    goto LAB_0034cc55;
  }
  if (param_2[0x10] == (ColourGradient)0x0) {
    GradientPixelIterators::Linear::Linear
              ((Linear *)&local_d8,(undefined8 *)param_2,param_3,local_1d0,iVar23 + -1);
    dVar2 = DAT_005d9098;
    local_a8 = local_108;
    uVar18 = *(uint *)((long)param_1 + 0x1c);
    if (0 < (int)uVar18) {
      puVar38 = (uint *)*param_1;
      iVar23 = *(int *)((long)param_1 + 0x24);
      iVar24 = *(int *)((long)param_1 + 0x14);
      lVar9 = CONCAT44(fStack_d4,local_d8);
      local_98[0] = local_af;
      uVar36 = 0;
      lVar14 = (long)iVar24;
      do {
        if (1 < (int)*puVar38) {
          lVar39 = uVar36 + (long)iVar24;
          local_a0 = lVar39 * local_f4 + local_108[0];
          iVar34 = (int)lVar39;
          if (local_b0 == '\0') {
            if (local_af == '\0') {
              local_c8 = SUB84(((double)iVar34 - local_b8) * local_c0 + dVar2,0);
            }
          }
          else {
            iVar34 = iVar34 * local_c4 - (int)local_c8;
            fVar41 = (float)(iVar34 >> 0xc);
            if ((int)fStack_d0 < (int)fVar41) {
              fVar41 = fStack_d0;
            }
            if (iVar34 < 0) {
              fVar41 = 0.0;
            }
            fStack_cc = *(float *)(lVar9 + (long)(int)fVar41 * 4);
          }
          puVar27 = puVar38 + 1;
          lVar39 = local_108[0] + local_f4 * lVar14 + 2;
          uVar30 = 0;
          uVar12 = *puVar38;
          uVar16 = puVar38[1];
          do {
            uVar13 = puVar27[2];
            uVar11 = uVar13 + 0xff;
            if (-1 < (int)uVar13) {
              uVar11 = uVar13;
            }
            uVar29 = puVar27[1];
            iVar34 = (int)uVar11 >> 8;
            uVar11 = uVar16 + 0xff;
            if (-1 < (int)uVar16) {
              uVar11 = uVar16;
            }
            iVar32 = (int)uVar11 >> 8;
            iVar37 = iVar34 - iVar32;
            if (iVar37 == 0) {
              uVar30 = (uVar13 - uVar16) * uVar29 + uVar30;
            }
            else {
              iVar33 = (0x100 - (uVar16 & 0xff)) * uVar29;
              uVar11 = iVar33 + uVar30;
              uVar16 = iVar33 + uVar30 + 0xff;
              if (-1 < (int)uVar11) {
                uVar16 = uVar11;
              }
              if (0xff < (int)uVar11) {
                if (uVar11 < 0xff00) {
                  pbVar21 = (byte *)((long)iVar32 * (long)local_f0 + local_a0);
                  pfVar8 = &fStack_cc;
                  if (local_b0 == '\0') {
                    iVar33 = local_c4 * iVar32 - (int)local_c8;
                    fVar41 = (float)(iVar33 >> 0xc);
                    if ((int)fStack_d0 < (int)fVar41) {
                      fVar41 = fStack_d0;
                    }
                    if (iVar33 < 0) {
                      fVar41 = 0.0;
                    }
                    pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                  }
                  uVar16 = (int)uVar16 >> 8 & 0xff;
                  uVar30 = ((uint)*pfVar8 >> 8 & 0xff00ff) * uVar16;
                  iVar17 = 0x100 - (uVar30 >> 0x18);
                  iVar33 = ((uint)pbVar21[1] * iVar17 >> 8) + (uVar30 >> 8 & 0xff00ff);
                  bVar10 = -(char)((uint)iVar33 >> 8) | (byte)iVar33;
                  uVar16 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar17 >> 8 & 0xff00ff) +
                           (((uint)*pfVar8 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                }
                else {
                  pbVar21 = (byte *)((long)iVar32 * (long)local_f0 + local_a0);
                  pfVar8 = &fStack_cc;
                  if (local_b0 == '\0') {
                    iVar33 = local_c4 * iVar32 - (int)local_c8;
                    fVar41 = (float)(iVar33 >> 0xc);
                    if ((int)fStack_d0 < (int)fVar41) {
                      fVar41 = fStack_d0;
                    }
                    if (iVar33 < 0) {
                      fVar41 = 0.0;
                    }
                    pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
                  }
                  fVar41 = *pfVar8;
                  iVar33 = 0x100 - ((uint)fVar41 >> 0x18);
                  uVar16 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar33 >> 8 & 0xff00ff) +
                           ((uint)fVar41 & 0xff00ff);
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                  iVar33 = ((uint)pbVar21[1] * iVar33 >> 8) + ((uint)fVar41 >> 8 & 0xff00ff);
                  bVar10 = -(char)((uint)iVar33 >> 8) | (byte)iVar33;
                }
                pbVar21[1] = bVar10;
                pbVar21[2] = (byte)(uVar16 >> 0x10);
                *pbVar21 = (byte)uVar16;
              }
              if ((0 < (int)uVar29) && (iVar33 = iVar32 + 1, iVar33 < iVar34)) {
                lVar20 = (long)local_f0;
                lVar35 = iVar33 * lVar20;
                if ((uVar29 & 0xff) == 0xff) {
                  if (local_b0 == '\0') {
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    iVar32 = iVar34 - iVar32;
                    iVar37 = iVar33 * local_c4 + -(int)local_c8;
                    do {
                      fVar41 = (float)(iVar37 >> 0xc);
                      if ((int)fStack_d0 < iVar37 >> 0xc) {
                        fVar41 = fStack_d0;
                      }
                      if (iVar37 < 0) {
                        fVar41 = 0.0;
                      }
                      uVar16 = *(uint *)(lVar9 + (long)(int)fVar41 * 4);
                      iVar33 = 0x100 - (uVar16 >> 0x18);
                      uVar30 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar33 >> 8 &
                               0xff00ff) + (uVar16 & 0xff00ff);
                      uVar30 = 0x100 - (uVar30 >> 8 & 0x10001) | uVar30;
                      iVar33 = ((uint)pbVar21[-1] * iVar33 >> 8) + (uVar16 >> 8 & 0xff00ff);
                      pbVar21[-1] = -(char)((uint)iVar33 >> 8) | (byte)iVar33;
                      *pbVar21 = (byte)(uVar30 >> 0x10);
                      pbVar21[-2] = (byte)uVar30;
                      pbVar21 = pbVar21 + lVar20;
                      iVar32 = iVar32 + -1;
                      iVar37 = iVar37 + local_c4;
                    } while (1 < iVar32);
                  }
                  else if (local_f0 == 1) {
                    uVar16 = (uint)*(byte *)((long)iVar32 + 2 + local_a0);
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    iVar32 = iVar34 - iVar32;
                    do {
                      iVar37 = 0x100 - ((uint)fStack_cc >> 0x18);
                      uVar30 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar37 >> 8 &
                               0xff00ff) + ((uint)fStack_cc & 0xff00ff);
                      uVar30 = 0x100 - (uVar30 >> 8 & 0x10001) | uVar30;
                      iVar37 = ((uVar16 & 0xff) * iVar37 >> 8) + ((uint)fStack_cc >> 8 & 0xff00ff);
                      pbVar21[-1] = -(char)((uint)iVar37 >> 8) | (byte)iVar37;
                      uVar16 = uVar30 >> 0x10;
                      *pbVar21 = (byte)(uVar30 >> 0x10);
                      pbVar21[-2] = (byte)uVar30;
                      pbVar21 = pbVar21 + 1;
                      iVar32 = iVar32 + -1;
                    } while (1 < iVar32);
                  }
                  else {
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    iVar32 = iVar34 - iVar32;
                    do {
                      iVar37 = 0x100 - ((uint)fStack_cc >> 0x18);
                      uVar16 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar37 >> 8 &
                               0xff00ff) + ((uint)fStack_cc & 0xff00ff);
                      uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                      iVar37 = ((uint)pbVar21[-1] * iVar37 >> 8) + ((uint)fStack_cc >> 8 & 0xff00ff)
                      ;
                      pbVar21[-1] = -(char)((uint)iVar37 >> 8) | (byte)iVar37;
                      *pbVar21 = (byte)(uVar16 >> 0x10);
                      pbVar21[-2] = (byte)uVar16;
                      pbVar21 = pbVar21 + lVar20;
                      iVar32 = iVar32 + -1;
                    } while (1 < iVar32);
                  }
                }
                else {
                  uVar16 = uVar29 & 0xff;
                  if (local_b0 == '\0') {
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    iVar32 = iVar34 - iVar32;
                    iVar37 = iVar33 * local_c4 + -(int)local_c8;
                    do {
                      fVar41 = (float)(iVar37 >> 0xc);
                      if ((int)fStack_d0 < iVar37 >> 0xc) {
                        fVar41 = fStack_d0;
                      }
                      if (iVar37 < 0) {
                        fVar41 = 0.0;
                      }
                      uVar30 = *(uint *)(lVar9 + (long)(int)fVar41 * 4);
                      uVar11 = (uVar30 >> 8 & 0xff00ff) * (uVar29 & 0xff);
                      iVar33 = 0x100 - (uVar11 >> 0x18);
                      iVar17 = ((uint)pbVar21[-1] * iVar33 >> 8) + (uVar11 >> 8 & 0xff00ff);
                      uVar30 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar33 >> 8 &
                               0xff00ff) + ((uVar30 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                      uVar30 = 0x100 - (uVar30 >> 8 & 0x10001) | uVar30;
                      pbVar21[-1] = -(char)((uint)iVar17 >> 8) | (byte)iVar17;
                      *pbVar21 = (byte)(uVar30 >> 0x10);
                      pbVar21[-2] = (byte)uVar30;
                      pbVar21 = pbVar21 + lVar20;
                      iVar32 = iVar32 + -1;
                      iVar37 = iVar37 + local_c4;
                    } while (1 < iVar32);
                  }
                  else if (local_f0 == 1) {
                    uVar30 = (uint)*(byte *)((long)iVar32 + 2 + local_a0);
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    iVar32 = iVar34 - iVar32;
                    do {
                      uVar11 = ((uint)fStack_cc >> 8 & 0xff00ff) * uVar16;
                      iVar37 = 0x100 - (uVar11 >> 0x18);
                      iVar33 = ((uVar30 & 0xff) * iVar37 >> 8) + (uVar11 >> 8 & 0xff00ff);
                      uVar11 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar37 >> 8 &
                               0xff00ff) + (((uint)fStack_cc & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                      uVar11 = 0x100 - (uVar11 >> 8 & 0x10001) | uVar11;
                      pbVar21[-1] = -(char)((uint)iVar33 >> 8) | (byte)iVar33;
                      uVar30 = uVar11 >> 0x10;
                      *pbVar21 = (byte)(uVar11 >> 0x10);
                      pbVar21[-2] = (byte)uVar11;
                      pbVar21 = pbVar21 + 1;
                      iVar32 = iVar32 + -1;
                    } while (1 < iVar32);
                  }
                  else {
                    pbVar21 = (byte *)(lVar35 + lVar39);
                    do {
                      uVar30 = ((uint)fStack_cc >> 8 & 0xff00ff) * uVar16;
                      iVar33 = 0x100 - (uVar30 >> 0x18);
                      iVar32 = ((uint)pbVar21[-1] * iVar33 >> 8) + (uVar30 >> 8 & 0xff00ff);
                      uVar30 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar33 >> 8 &
                               0xff00ff) + (((uint)fStack_cc & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                      uVar30 = 0x100 - (uVar30 >> 8 & 0x10001) | uVar30;
                      pbVar21[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                      *pbVar21 = (byte)(uVar30 >> 0x10);
                      pbVar21[-2] = (byte)uVar30;
                      pbVar21 = pbVar21 + lVar20;
                      iVar37 = iVar37 + -1;
                    } while (1 < iVar37);
                  }
                }
              }
              uVar30 = (uVar13 & 0xff) * uVar29;
            }
            puVar27 = puVar27 + 2;
            bVar40 = 2 < uVar12;
            uVar12 = uVar12 - 1;
            uVar16 = uVar13;
          } while (bVar40);
          uVar12 = uVar30 + 0xff;
          if (-1 < (int)uVar30) {
            uVar12 = uVar30;
          }
          if (0xff < (int)uVar30) {
            if (uVar30 < 0xff00) {
              pbVar21 = (byte *)(local_a0 + (long)local_f0 * (long)iVar34);
              pfVar8 = &fStack_cc;
              if (local_b0 == '\0') {
                iVar34 = iVar34 * local_c4 - (int)local_c8;
                fVar41 = (float)(iVar34 >> 0xc);
                if ((int)fStack_d0 < (int)fVar41) {
                  fVar41 = fStack_d0;
                }
                if (iVar34 < 0) {
                  fVar41 = 0.0;
                }
                pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
              }
              uVar16 = (int)uVar12 >> 8 & 0xff;
              uVar12 = ((uint)*pfVar8 >> 8 & 0xff00ff) * uVar16;
              iVar34 = 0x100 - (uVar12 >> 0x18);
              iVar32 = ((uint)pbVar21[1] * iVar34 >> 8) + (uVar12 >> 8 & 0xff00ff);
              bVar10 = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
              uVar12 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar34 >> 8 & 0xff00ff) +
                       (((uint)*pfVar8 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
              uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
            }
            else {
              pbVar21 = (byte *)(local_a0 + (long)local_f0 * (long)iVar34);
              pfVar8 = &fStack_cc;
              if (local_b0 == '\0') {
                iVar34 = iVar34 * local_c4 - (int)local_c8;
                fVar41 = (float)(iVar34 >> 0xc);
                if ((int)fStack_d0 < (int)fVar41) {
                  fVar41 = fStack_d0;
                }
                if (iVar34 < 0) {
                  fVar41 = 0.0;
                }
                pfVar8 = (float *)(lVar9 + (long)(int)fVar41 * 4);
              }
              fVar41 = *pfVar8;
              iVar34 = 0x100 - ((uint)fVar41 >> 0x18);
              uVar12 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar34 >> 8 & 0xff00ff) +
                       ((uint)fVar41 & 0xff00ff);
              uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
              iVar34 = ((uint)pbVar21[1] * iVar34 >> 8) + ((uint)fVar41 >> 8 & 0xff00ff);
              bVar10 = -(char)((uint)iVar34 >> 8) | (byte)iVar34;
            }
            pbVar21[1] = bVar10;
            pbVar21[2] = (byte)(uVar12 >> 0x10);
            *pbVar21 = (byte)uVar12;
          }
        }
        puVar38 = puVar38 + iVar23;
        uVar36 = uVar36 + 1;
        lVar14 = lVar14 + 1;
      } while (uVar36 != uVar18);
    }
    goto LAB_0034cc55;
  }
  if (param_4 != '\0') {
    fVar43 = (float)*(undefined8 *)param_2;
    fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
    fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
    if (dVar2 < 0.0) {
      dVar48 = sqrt(dVar2);
    }
    else {
      dVar48 = SQRT(dVar2);
    }
    if (0 < *(int *)((long)param_1 + 0x1c)) {
      iVar23 = iVar23 + -1;
      dVar48 = (double)iVar23 / dVar48;
      dVar4 = (double)fVar43;
      dVar5 = (double)fVar44;
      piVar26 = (int *)*param_1;
      local_88._8_4_ = SUB84(dVar5,0);
      local_88._0_8_ = dVar5;
      local_88._12_4_ = (int)((ulong)dVar5 >> 0x20);
      iVar24 = 0;
      uVar45 = SUB84(DAT_005d9098,0);
      uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
      do {
        lVar9 = (long)*(int *)((long)param_1 + 0x24);
        if (1 < *piVar26) {
          local_98._0_8_ = lVar9;
          piVar22 = piVar26 + 1;
          iVar34 = *(int *)((long)param_1 + 0x14) + iVar24;
          lVar9 = (long)local_f4 * (long)iVar34;
          lVar14 = local_108[0] + lVar9;
          dVar5 = (double)iVar34 - (double)local_88._0_8_;
          dVar5 = dVar5 * dVar5;
          lVar9 = local_108[0] + lVar9 + 2;
          uVar12 = 0;
          uVar18 = piVar26[1];
          iVar34 = *piVar26;
          do {
            uVar16 = piVar22[2];
            uVar30 = uVar16 + 0xff;
            if (-1 < (int)uVar16) {
              uVar30 = uVar16;
            }
            uVar13 = piVar22[1];
            iVar32 = (int)uVar30 >> 8;
            uVar30 = uVar18 + 0xff;
            if (-1 < (int)uVar18) {
              uVar30 = uVar18;
            }
            iVar37 = (int)uVar30 >> 8;
            iVar33 = iVar32 - iVar37;
            if (iVar33 == 0) {
              uVar12 = (uVar16 - uVar18) * uVar13 + uVar12;
            }
            else {
              iVar17 = (0x100 - (uVar18 & 0xff)) * uVar13;
              uVar30 = iVar17 + uVar12;
              uVar18 = iVar17 + uVar12 + 0xff;
              if (-1 < (int)uVar30) {
                uVar18 = uVar30;
              }
              if (0xff < (int)uVar30) {
                if (uVar30 < 0xff00) {
                  pbVar21 = (byte *)((long)iVar37 * (long)local_f0 + lVar14);
                  dVar47 = (double)iVar37 - dVar4;
                  dVar47 = dVar47 * dVar47 + dVar5;
                  iVar17 = iVar23;
                  if (dVar47 < dVar2) {
                    if (dVar47 < 0.0) {
                      dVar47 = sqrt(dVar47);
                      uVar45 = SUB84(DAT_005d9098,0);
                      uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                    }
                    else {
                      dVar47 = SQRT(dVar47);
                    }
                    iVar17 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                  }
                  uVar12 = (int)uVar18 >> 8 & 0xff;
                  uVar18 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                  uVar30 = (uVar18 >> 8 & 0xff00ff) * uVar12;
                  iVar19 = 0x100 - (uVar30 >> 0x18);
                  iVar17 = ((uint)pbVar21[1] * iVar19 >> 8) + (uVar30 >> 8 & 0xff00ff);
                  bVar10 = -(char)((uint)iVar17 >> 8) | (byte)iVar17;
                  uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar19 >> 8 & 0xff00ff) +
                           ((uVar18 & 0xff00ff) * uVar12 >> 8 & 0xff00ff);
                  uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
                }
                else {
                  pbVar21 = (byte *)((long)iVar37 * (long)local_f0 + lVar14);
                  dVar47 = (double)iVar37 - dVar4;
                  dVar47 = dVar47 * dVar47 + dVar5;
                  iVar17 = iVar23;
                  if (dVar47 < dVar2) {
                    if (dVar47 < 0.0) {
                      dVar47 = sqrt(dVar47);
                      uVar45 = SUB84(DAT_005d9098,0);
                      uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                    }
                    else {
                      dVar47 = SQRT(dVar47);
                    }
                    iVar17 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                  }
                  uVar12 = *(uint *)((long)local_1d0 + (long)iVar17 * 4);
                  iVar17 = 0x100 - (uVar12 >> 0x18);
                  uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar17 >> 8 & 0xff00ff) +
                           (uVar12 & 0xff00ff);
                  uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
                  iVar17 = ((uint)pbVar21[1] * iVar17 >> 8) + (uVar12 >> 8 & 0xff00ff);
                  bVar10 = -(char)((uint)iVar17 >> 8) | (byte)iVar17;
                }
                pbVar21[1] = bVar10;
                pbVar21[2] = (byte)(uVar18 >> 0x10);
                *pbVar21 = (byte)uVar18;
              }
              if ((0 < (int)uVar13) && (uVar36 = (long)iVar37 + 1, (int)uVar36 < iVar32)) {
                lVar39 = (long)local_f0;
                if ((uVar13 & 0xff) == 0xff) {
                  pbVar21 = (byte *)(uVar36 * lVar39 + lVar9);
                  iVar37 = iVar32 - iVar37;
                  do {
                    dVar47 = (double)(int)uVar36 - dVar4;
                    dVar47 = dVar47 * dVar47 + dVar5;
                    iVar33 = iVar23;
                    if (dVar47 < dVar2) {
                      if (dVar47 < 0.0) {
                        dVar47 = sqrt(dVar47);
                        uVar45 = SUB84(DAT_005d9098,0);
                        uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                      }
                      else {
                        dVar47 = SQRT(dVar47);
                      }
                      iVar33 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                    }
                    uVar18 = *(uint *)((long)local_1d0 + (long)iVar33 * 4);
                    iVar33 = 0x100 - (uVar18 >> 0x18);
                    uVar12 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar33 >> 8 & 0xff00ff)
                             + (uVar18 & 0xff00ff);
                    uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
                    iVar33 = ((uint)pbVar21[-1] * iVar33 >> 8) + (uVar18 >> 8 & 0xff00ff);
                    pbVar21[-1] = -(char)((uint)iVar33 >> 8) | (byte)iVar33;
                    *pbVar21 = (byte)(uVar12 >> 0x10);
                    pbVar21[-2] = (byte)uVar12;
                    pbVar21 = pbVar21 + lVar39;
                    iVar37 = iVar37 + -1;
                    uVar36 = (ulong)((int)uVar36 + 1);
                  } while (1 < iVar37);
                }
                else {
                  pbVar21 = (byte *)(uVar36 * lVar39 + lVar9);
                  do {
                    dVar47 = (double)(int)uVar36 - dVar4;
                    dVar47 = dVar47 * dVar47 + dVar5;
                    iVar37 = iVar23;
                    if (dVar47 < dVar2) {
                      if (dVar47 < 0.0) {
                        dVar47 = sqrt(dVar47);
                        uVar45 = SUB84(DAT_005d9098,0);
                        uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                      }
                      else {
                        dVar47 = SQRT(dVar47);
                      }
                      iVar37 = SUB84(dVar47 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
                    }
                    uVar18 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                    uVar12 = (uVar18 >> 8 & 0xff00ff) * (uVar13 & 0xff);
                    iVar17 = 0x100 - (uVar12 >> 0x18);
                    iVar37 = ((uint)pbVar21[-1] * iVar17 >> 8) + (uVar12 >> 8 & 0xff00ff);
                    uVar18 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar17 >> 8 & 0xff00ff)
                             + ((uVar18 & 0xff00ff) * (uVar13 & 0xff) >> 8 & 0xff00ff);
                    uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
                    pbVar21[-1] = -(char)((uint)iVar37 >> 8) | (byte)iVar37;
                    *pbVar21 = (byte)(uVar18 >> 0x10);
                    pbVar21[-2] = (byte)uVar18;
                    pbVar21 = pbVar21 + lVar39;
                    iVar33 = iVar33 + -1;
                    uVar36 = (ulong)((int)uVar36 + 1);
                  } while (1 < iVar33);
                }
              }
              uVar12 = (uVar16 & 0xff) * uVar13;
            }
            piVar22 = piVar22 + 2;
            bVar40 = 2 < iVar34;
            uVar18 = uVar16;
            iVar34 = iVar34 + -1;
          } while (bVar40);
          uVar18 = uVar12 + 0xff;
          if (-1 < (int)uVar12) {
            uVar18 = uVar12;
          }
          lVar9 = local_98._0_8_;
          if (0xff < (int)uVar12) {
            if (uVar12 < 0xff00) {
              pbVar21 = (byte *)(lVar14 + (long)iVar32 * (long)local_f0);
              dVar5 = dVar5 + ((double)iVar32 - dVar4) * ((double)iVar32 - dVar4);
              iVar34 = iVar23;
              if (dVar5 < dVar2) {
                if (dVar5 < 0.0) {
                  dVar5 = sqrt(dVar5);
                  uVar45 = SUB84(DAT_005d9098,0);
                  uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                }
                else {
                  dVar5 = SQRT(dVar5);
                }
                iVar34 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
              }
              uVar12 = (int)uVar18 >> 8 & 0xff;
              uVar18 = *(uint *)((long)local_1d0 + (long)iVar34 * 4);
              uVar16 = (uVar18 >> 8 & 0xff00ff) * uVar12;
              iVar32 = 0x100 - (uVar16 >> 0x18);
              iVar34 = ((uint)pbVar21[1] * iVar32 >> 8) + (uVar16 >> 8 & 0xff00ff);
              bVar10 = -(char)((uint)iVar34 >> 8) | (byte)iVar34;
              uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar32 >> 8 & 0xff00ff) +
                       ((uVar18 & 0xff00ff) * uVar12 >> 8 & 0xff00ff);
              uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
            }
            else {
              pbVar21 = (byte *)(lVar14 + (long)iVar32 * (long)local_f0);
              dVar5 = dVar5 + ((double)iVar32 - dVar4) * ((double)iVar32 - dVar4);
              iVar34 = iVar23;
              if (dVar5 < dVar2) {
                if (dVar5 < 0.0) {
                  dVar5 = sqrt(dVar5);
                  uVar45 = SUB84(DAT_005d9098,0);
                  uVar46 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                }
                else {
                  dVar5 = SQRT(dVar5);
                }
                iVar34 = SUB84(dVar5 * dVar48 + (double)CONCAT44(uVar46,uVar45),0);
              }
              uVar12 = *(uint *)((long)local_1d0 + (long)iVar34 * 4);
              iVar34 = 0x100 - (uVar12 >> 0x18);
              uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar34 >> 8 & 0xff00ff) +
                       (uVar12 & 0xff00ff);
              uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
              iVar34 = ((uint)pbVar21[1] * iVar34 >> 8) + (uVar12 >> 8 & 0xff00ff);
              bVar10 = -(char)((uint)iVar34 >> 8) | (byte)iVar34;
            }
            pbVar21[1] = bVar10;
            pbVar21[2] = (byte)(uVar18 >> 0x10);
            *pbVar21 = (byte)uVar18;
          }
        }
        piVar26 = piVar26 + lVar9;
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)((long)param_1 + 0x1c));
    }
    goto LAB_0034cc55;
  }
  fVar43 = (float)*(undefined8 *)param_2;
  fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar41 = fVar43 - (float)*(undefined8 *)(param_2 + 8);
  fVar42 = fVar44 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  dVar2 = (double)(fVar41 * fVar41 + fVar42 * fVar42);
  if (dVar2 < 0.0) {
    dVar48 = sqrt(dVar2);
  }
  else {
    dVar48 = SQRT(dVar2);
  }
  fVar41 = *param_3;
  fVar42 = fVar41 * param_3[4] - param_3[3] * param_3[1];
  dVar4 = (double)fVar42;
  uVar18 = _DAT_005d91b0 & SUB84(dVar4,0);
  uVar12 = _UNK_005d91b4 & (uint)((ulong)dVar4 >> 0x20);
  if ((double)CONCAT44(uVar12,uVar18) == DAT_005d94e0) {
    if ((fVar42 != 0.0) || (NAN(fVar42))) goto LAB_0034e742;
LAB_0034f39a:
    local_c8 = param_3[5];
    local_d8 = (float)*(undefined8 *)pfVar8;
    fStack_d4 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
    fStack_d0 = (float)*(undefined8 *)(param_3 + 3);
    fStack_cc = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
  }
  else {
    if (((double)CONCAT44(uVar12,uVar18) <= DAT_005db368) ||
       ((double)CONCAT44(uVar12,uVar18) <= DAT_005db370 * (double)CONCAT44(uVar12,uVar18)))
    goto LAB_0034f39a;
LAB_0034e742:
    dVar4 = _DAT_005d9000 / dVar4;
    dVar5 = (double)fVar41;
    fStack_d0 = (float)(dVar4 * (double)(float)((uint)param_3[3] ^ _DAT_006524b0));
    fVar41 = (float)(dVar4 * (double)param_3[4]);
    local_d8 = (float)((double)(float)((uint)param_3[1] ^ _DAT_006524b0) * dVar4);
    fStack_cc = (float)(dVar5 * dVar4);
    fStack_d4 = fVar41 * (float)((uint)param_3[2] ^ _DAT_006524b0) - local_d8 * param_3[5];
    local_c8 = (float)((uint)param_3[2] ^ _DAT_006524b0) * fStack_d0 - param_3[5] * fStack_cc;
  }
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    iVar23 = iVar23 + -1;
    dVar48 = (double)iVar23 / dVar48;
    dVar4 = (double)fVar44;
    uStack_60._0_4_ = SUB84(dVar4,0);
    local_68 = (undefined1  [8])(double)fVar43;
    uStack_60._4_4_ = (int)((ulong)dVar4 >> 0x20);
    dVar4 = (double)fStack_d0;
    dVar5 = (double)fVar41;
    puVar38 = (uint *)*param_1;
    local_48 = local_d8;
    fStack_40 = fStack_d0;
    fStack_44 = fStack_cc;
    fStack_3c = fStack_cc;
    local_78 = fStack_d4;
    fStack_74 = local_c8;
    fStack_70 = fStack_cc;
    fStack_6c = local_c8;
    iVar24 = 0;
    dVar47 = DAT_005d9098;
    do {
      lVar9 = (long)*(int *)((long)param_1 + 0x24);
      if (1 < (int)*puVar38) {
        local_58._0_8_ = lVar9;
        puVar27 = puVar38 + 1;
        local_98._0_8_ = puVar38;
        local_88._0_4_ = iVar24;
        iVar24 = *(int *)((long)param_1 + 0x14) + iVar24;
        lVar9 = (long)local_f4 * (long)iVar24;
        lVar14 = local_108[0] + lVar9;
        fVar41 = (float)iVar24;
        dVar6 = (double)(fVar41 * local_48 + local_78) - (double)local_68;
        dVar7 = (double)(fVar41 * fStack_44 + fStack_74) - uStack_60;
        lVar9 = local_108[0] + lVar9 + 2;
        uVar16 = 0;
        uVar12 = puVar38[1];
        uVar18 = *puVar38;
        do {
          uVar30 = puVar27[2];
          uVar13 = uVar30 + 0xff;
          if (-1 < (int)uVar30) {
            uVar13 = uVar30;
          }
          uVar11 = puVar27[1];
          iVar34 = (int)uVar13 >> 8;
          uVar13 = uVar12 + 0xff;
          if (-1 < (int)uVar12) {
            uVar13 = uVar12;
          }
          iVar24 = (int)uVar13 >> 8;
          iVar32 = iVar34 - iVar24;
          if (iVar32 == 0) {
            uVar16 = (uVar30 - uVar12) * uVar11 + uVar16;
          }
          else {
            iVar37 = (0x100 - (uVar12 & 0xff)) * uVar11;
            uVar13 = iVar37 + uVar16;
            uVar12 = iVar37 + uVar16 + 0xff;
            if (-1 < (int)uVar13) {
              uVar12 = uVar13;
            }
            if (0xff < (int)uVar13) {
              dVar3 = (double)iVar24;
              if (uVar13 < 0xff00) {
                pbVar21 = (byte *)((long)iVar24 * (long)local_f0 + lVar14);
                dVar1 = dVar4 * dVar3 + dVar7;
                dVar3 = dVar3 * dVar5 + dVar6;
                dVar3 = dVar1 * dVar1 + dVar3 * dVar3;
                iVar37 = iVar23;
                if (dVar3 < dVar2) {
                  if (dVar3 < 0.0) {
                    dVar3 = sqrt(dVar3);
                    dVar47 = DAT_005d9098;
                  }
                  else {
                    dVar3 = SQRT(dVar3);
                  }
                  iVar37 = SUB84(dVar3 * dVar48 + dVar47,0);
                  if (iVar23 <= iVar37) {
                    iVar37 = iVar23;
                  }
                }
                uVar16 = (int)uVar12 >> 8 & 0xff;
                uVar12 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                uVar13 = (uVar12 >> 8 & 0xff00ff) * uVar16;
                iVar33 = 0x100 - (uVar13 >> 0x18);
                iVar37 = ((uint)pbVar21[1] * iVar33 >> 8) + (uVar13 >> 8 & 0xff00ff);
                bVar10 = -(char)((uint)iVar37 >> 8) | (byte)iVar37;
                uVar12 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar33 >> 8 & 0xff00ff) +
                         ((uVar12 & 0xff00ff) * uVar16 >> 8 & 0xff00ff);
                uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
              }
              else {
                pbVar21 = (byte *)((long)iVar24 * (long)local_f0 + lVar14);
                dVar1 = dVar4 * dVar3 + dVar7;
                dVar3 = dVar3 * dVar5 + dVar6;
                dVar3 = dVar1 * dVar1 + dVar3 * dVar3;
                iVar37 = iVar23;
                if (dVar3 < dVar2) {
                  if (dVar3 < 0.0) {
                    dVar3 = sqrt(dVar3);
                    dVar47 = DAT_005d9098;
                  }
                  else {
                    dVar3 = SQRT(dVar3);
                  }
                  iVar37 = SUB84(dVar3 * dVar48 + dVar47,0);
                  if (iVar23 <= iVar37) {
                    iVar37 = iVar23;
                  }
                }
                uVar16 = *(uint *)((long)local_1d0 + (long)iVar37 * 4);
                iVar37 = 0x100 - (uVar16 >> 0x18);
                uVar12 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar37 >> 8 & 0xff00ff) +
                         (uVar16 & 0xff00ff);
                uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
                iVar37 = ((uint)pbVar21[1] * iVar37 >> 8) + (uVar16 >> 8 & 0xff00ff);
                bVar10 = -(char)((uint)iVar37 >> 8) | (byte)iVar37;
              }
              pbVar21[1] = bVar10;
              pbVar21[2] = (byte)(uVar12 >> 0x10);
              *pbVar21 = (byte)uVar12;
            }
            if ((0 < (int)uVar11) && (uVar36 = (long)iVar24 + 1, (int)uVar36 < iVar34)) {
              lVar39 = (long)local_f0;
              if ((uVar11 & 0xff) == 0xff) {
                pbVar21 = (byte *)(uVar36 * lVar39 + lVar9);
                iVar24 = iVar34 - iVar24;
                do {
                  dVar1 = (double)(int)uVar36;
                  dVar3 = dVar4 * dVar1 + dVar7;
                  dVar1 = dVar1 * dVar5 + dVar6;
                  dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                  iVar32 = iVar23;
                  if (dVar3 < dVar2) {
                    if (dVar3 < 0.0) {
                      dVar3 = sqrt(dVar3);
                      dVar47 = DAT_005d9098;
                    }
                    else {
                      dVar3 = SQRT(dVar3);
                    }
                    iVar32 = SUB84(dVar3 * dVar48 + dVar47,0);
                    if (iVar23 <= iVar32) {
                      iVar32 = iVar23;
                    }
                  }
                  uVar12 = *(uint *)((long)local_1d0 + (long)iVar32 * 4);
                  iVar32 = 0x100 - (uVar12 >> 0x18);
                  uVar16 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar32 >> 8 & 0xff00ff) +
                           (uVar12 & 0xff00ff);
                  uVar16 = 0x100 - (uVar16 >> 8 & 0x10001) | uVar16;
                  iVar32 = ((uint)pbVar21[-1] * iVar32 >> 8) + (uVar12 >> 8 & 0xff00ff);
                  pbVar21[-1] = -(char)((uint)iVar32 >> 8) | (byte)iVar32;
                  *pbVar21 = (byte)(uVar16 >> 0x10);
                  pbVar21[-2] = (byte)uVar16;
                  pbVar21 = pbVar21 + lVar39;
                  iVar24 = iVar24 + -1;
                  uVar36 = (ulong)((int)uVar36 + 1);
                } while (1 < iVar24);
              }
              else {
                pbVar21 = (byte *)(uVar36 * lVar39 + lVar9);
                do {
                  dVar1 = (double)(int)uVar36;
                  dVar3 = dVar4 * dVar1 + dVar7;
                  dVar1 = dVar1 * dVar5 + dVar6;
                  dVar3 = dVar3 * dVar3 + dVar1 * dVar1;
                  iVar24 = iVar23;
                  if (dVar3 < dVar2) {
                    if (dVar3 < 0.0) {
                      dVar3 = sqrt(dVar3);
                      dVar47 = DAT_005d9098;
                    }
                    else {
                      dVar3 = SQRT(dVar3);
                    }
                    iVar24 = SUB84(dVar3 * dVar48 + dVar47,0);
                    if (iVar23 <= iVar24) {
                      iVar24 = iVar23;
                    }
                  }
                  uVar12 = *(uint *)((long)local_1d0 + (long)iVar24 * 4);
                  uVar16 = (uVar12 >> 8 & 0xff00ff) * (uVar11 & 0xff);
                  iVar37 = 0x100 - (uVar16 >> 0x18);
                  iVar24 = ((uint)pbVar21[-1] * iVar37 >> 8) + (uVar16 >> 8 & 0xff00ff);
                  uVar12 = (((uint)*pbVar21 << 0x10 | (uint)pbVar21[-2]) * iVar37 >> 8 & 0xff00ff) +
                           ((uVar12 & 0xff00ff) * (uVar11 & 0xff) >> 8 & 0xff00ff);
                  uVar12 = 0x100 - (uVar12 >> 8 & 0x10001) | uVar12;
                  pbVar21[-1] = -(char)((uint)iVar24 >> 8) | (byte)iVar24;
                  *pbVar21 = (byte)(uVar12 >> 0x10);
                  pbVar21[-2] = (byte)uVar12;
                  pbVar21 = pbVar21 + lVar39;
                  iVar32 = iVar32 + -1;
                  uVar36 = (ulong)((int)uVar36 + 1);
                } while (1 < iVar32);
              }
            }
            uVar16 = (uVar30 & 0xff) * uVar11;
          }
          puVar27 = puVar27 + 2;
          bVar40 = 2 < uVar18;
          uVar12 = uVar30;
          uVar18 = uVar18 - 1;
        } while (bVar40);
        uVar18 = uVar16 + 0xff;
        if (-1 < (int)uVar16) {
          uVar18 = uVar16;
        }
        puVar38 = (uint *)local_98._0_8_;
        iVar24 = local_88._0_4_;
        lVar9 = local_58._0_8_;
        if (0xff < (int)uVar16) {
          if (uVar16 < 0xff00) {
            pbVar21 = (byte *)(lVar14 + (long)iVar34 * (long)local_f0);
            dVar7 = dVar4 * (double)iVar34 + dVar7;
            dVar6 = (double)iVar34 * dVar5 + dVar6;
            dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
            iVar34 = iVar23;
            if (dVar7 < dVar2) {
              if (dVar7 < 0.0) {
                dVar7 = sqrt(dVar7);
                dVar47 = DAT_005d9098;
              }
              else {
                dVar7 = SQRT(dVar7);
              }
              iVar34 = SUB84(dVar7 * dVar48 + dVar47,0);
              if (iVar23 <= iVar34) {
                iVar34 = iVar23;
              }
            }
            uVar12 = (int)uVar18 >> 8 & 0xff;
            uVar18 = *(uint *)((long)local_1d0 + (long)iVar34 * 4);
            uVar16 = (uVar18 >> 8 & 0xff00ff) * uVar12;
            iVar32 = 0x100 - (uVar16 >> 0x18);
            iVar34 = ((uint)pbVar21[1] * iVar32 >> 8) + (uVar16 >> 8 & 0xff00ff);
            bVar10 = -(char)((uint)iVar34 >> 8) | (byte)iVar34;
            uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar32 >> 8 & 0xff00ff) +
                     ((uVar18 & 0xff00ff) * uVar12 >> 8 & 0xff00ff);
            uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
          }
          else {
            pbVar21 = (byte *)(lVar14 + (long)iVar34 * (long)local_f0);
            dVar7 = dVar4 * (double)iVar34 + dVar7;
            dVar6 = (double)iVar34 * dVar5 + dVar6;
            dVar7 = dVar7 * dVar7 + dVar6 * dVar6;
            iVar34 = iVar23;
            if (dVar7 < dVar2) {
              if (dVar7 < 0.0) {
                dVar7 = sqrt(dVar7);
                dVar47 = DAT_005d9098;
              }
              else {
                dVar7 = SQRT(dVar7);
              }
              iVar34 = SUB84(dVar7 * dVar48 + dVar47,0);
              if (iVar23 <= iVar34) {
                iVar34 = iVar23;
              }
            }
            uVar12 = *(uint *)((long)local_1d0 + (long)iVar34 * 4);
            iVar34 = 0x100 - (uVar12 >> 0x18);
            uVar18 = (((uint)pbVar21[2] << 0x10 | (uint)*pbVar21) * iVar34 >> 8 & 0xff00ff) +
                     (uVar12 & 0xff00ff);
            uVar18 = 0x100 - (uVar18 >> 8 & 0x10001) | uVar18;
            iVar34 = ((uint)pbVar21[1] * iVar34 >> 8) + (uVar12 >> 8 & 0xff00ff);
            bVar10 = -(char)((uint)iVar34 >> 8) | (byte)iVar34;
          }
          pbVar21[1] = bVar10;
          pbVar21[2] = (byte)(uVar18 >> 0x10);
          *pbVar21 = (byte)uVar18;
        }
      }
      puVar38 = puVar38 + lVar9;
      iVar24 = iVar24 + 1;
    } while (iVar24 < *(int *)((long)param_1 + 0x1c));
  }
LAB_0034cc55:
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 8))();
  }
  free(local_1d0);
  return;
}


