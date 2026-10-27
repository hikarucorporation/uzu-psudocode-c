// Function : jpeg_calc_output_dimensions
// Namespace: juce:jpeglibNamespace
// Entry    : 003777b0
// Prototype: undefined jpeg_calc_output_dimensions(long * param_1)
// Body     : 003777b0 - 00378564


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_calc_output_dimensions(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::jpeg_calc_output_dimensions(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [12];
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined2 uVar47;
  undefined1 auVar34 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  
  iVar26 = *(int *)((long)param_1 + 0x24);
  if (iVar26 != 0xca) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x15;
    *(int *)(lVar1 + 0x2c) = iVar26;
    (**(code **)*param_1)(param_1);
  }
  uVar21 = *(uint *)((long)param_1 + 0x20c);
  uVar25 = (ulong)(int)uVar21;
  uVar9 = *(int *)((long)param_1 + 0x44) * uVar21;
  uVar19 = *(uint *)(param_1 + 9);
  if (uVar19 < uVar9) {
    if (uVar19 * 2 < uVar9) {
      if (uVar19 * 3 < uVar9) {
        if (uVar19 * 4 < uVar9) {
          if (uVar19 * 5 < uVar9) {
            if (uVar19 * 6 < uVar9) {
              if (uVar19 * 7 < uVar9) {
                if (uVar19 * 8 < uVar9) {
                  if (uVar19 * 9 < uVar9) {
                    if (uVar19 * 10 < uVar9) {
                      if (uVar19 * 0xb < uVar9) {
                        if (uVar19 * 0xc < uVar9) {
                          if (uVar19 * 0xd < uVar9) {
                            if (uVar19 * 0xe < uVar9) {
                              uVar24 = (ulong)*(uint *)(param_1 + 6);
                              if (uVar19 * 0xf < uVar9) {
                                uVar11 = (uVar24 * 0x10 + uVar25) - 1;
                                if ((uVar25 | uVar11) >> 0x20 == 0) {
                                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                                }
                                else {
                                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                                }
                                *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                                uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                                uVar11 = (uVar25 - 1) + uVar23 * 0x10;
                                if ((uVar11 | uVar25) >> 0x20 == 0) {
                                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                                }
                                else {
                                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                                }
                                uVar19 = 0x10;
                              }
                              else {
                                uVar11 = (uVar24 * 0xf + uVar25) - 1;
                                if ((uVar25 | uVar11) >> 0x20 == 0) {
                                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                                }
                                else {
                                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                                }
                                *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                                uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                                uVar11 = (uVar25 - 1) + uVar23 * 0xf;
                                if ((uVar11 | uVar25) >> 0x20 == 0) {
                                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                                }
                                else {
                                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                                }
                                uVar19 = 0xf;
                              }
                            }
                            else {
                              uVar24 = (ulong)*(uint *)(param_1 + 6);
                              uVar11 = (uVar24 * 0xe + uVar25) - 1;
                              if ((uVar25 | uVar11) >> 0x20 == 0) {
                                uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                              }
                              else {
                                uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                              }
                              *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                              uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                              uVar11 = (uVar25 - 1) + uVar23 * 0xe;
                              if ((uVar11 | uVar25) >> 0x20 == 0) {
                                uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                                uVar19 = 0xe;
                              }
                              else {
                                uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                                uVar19 = 0xe;
                              }
                            }
                          }
                          else {
                            uVar24 = (ulong)*(uint *)(param_1 + 6);
                            uVar11 = (uVar24 * 0xd + uVar25) - 1;
                            if ((uVar25 | uVar11) >> 0x20 == 0) {
                              uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                            }
                            else {
                              uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                            }
                            *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                            uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                            uVar11 = (uVar25 - 1) + uVar23 * 0xd;
                            if ((uVar11 | uVar25) >> 0x20 == 0) {
                              uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                              uVar19 = 0xd;
                            }
                            else {
                              uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                              uVar19 = 0xd;
                            }
                          }
                        }
                        else {
                          uVar24 = (ulong)*(uint *)(param_1 + 6);
                          uVar11 = (uVar25 + uVar24 * 0xc) - 1;
                          if ((uVar25 | uVar11) >> 0x20 == 0) {
                            uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                          }
                          else {
                            uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                          }
                          *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                          uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                          uVar11 = (uVar25 - 1) + uVar23 * 0xc;
                          if ((uVar11 | uVar25) >> 0x20 == 0) {
                            uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                            uVar19 = 0xc;
                          }
                          else {
                            uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                            uVar19 = 0xc;
                          }
                        }
                      }
                      else {
                        uVar24 = (ulong)*(uint *)(param_1 + 6);
                        uVar11 = (uVar24 * 0xb + uVar25) - 1;
                        if ((uVar25 | uVar11) >> 0x20 == 0) {
                          uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                        }
                        else {
                          uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                        }
                        *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                        uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                        uVar11 = (uVar25 - 1) + uVar23 * 0xb;
                        if ((uVar11 | uVar25) >> 0x20 == 0) {
                          uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                          uVar19 = 0xb;
                        }
                        else {
                          uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                          uVar19 = 0xb;
                        }
                      }
                    }
                    else {
                      uVar24 = (ulong)*(uint *)(param_1 + 6);
                      uVar11 = (uVar25 + uVar24 * 10) - 1;
                      if ((uVar11 | uVar25) >> 0x20 == 0) {
                        uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                      }
                      else {
                        uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                      }
                      *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                      uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                      uVar11 = (uVar25 - 1) + uVar23 * 10;
                      if ((uVar25 | uVar11) >> 0x20 == 0) {
                        uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                        uVar19 = 10;
                      }
                      else {
                        uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                        uVar19 = 10;
                      }
                    }
                  }
                  else {
                    uVar24 = (ulong)*(uint *)(param_1 + 6);
                    uVar11 = (uVar24 * 9 + uVar25) - 1;
                    if ((uVar11 | uVar25) >> 0x20 == 0) {
                      uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                    }
                    else {
                      uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                    }
                    *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                    uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                    uVar11 = (uVar25 - 1) + uVar23 * 9;
                    if ((uVar11 | uVar25) >> 0x20 == 0) {
                      uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                      uVar19 = 9;
                    }
                    else {
                      uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                      uVar19 = 9;
                    }
                  }
                }
                else {
                  uVar24 = (ulong)*(uint *)(param_1 + 6);
                  uVar11 = (uVar25 + uVar24 * 8) - 1;
                  if ((uVar11 | uVar25) >> 0x20 == 0) {
                    uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                  }
                  else {
                    uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                  }
                  *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                  uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                  uVar11 = (uVar25 - 1) + uVar23 * 8;
                  if ((uVar25 | uVar11) >> 0x20 == 0) {
                    uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                    uVar19 = 8;
                  }
                  else {
                    uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                    uVar19 = 8;
                  }
                }
              }
              else {
                uVar24 = (ulong)*(uint *)(param_1 + 6);
                uVar11 = (uVar24 * 7 + uVar25) - 1;
                if ((uVar11 | uVar25) >> 0x20 == 0) {
                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                }
                else {
                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                }
                *(undefined4 *)((long)param_1 + 0x74) = uVar10;
                uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
                uVar11 = (uVar25 - 1) + uVar23 * 7;
                if ((uVar25 | uVar11) >> 0x20 == 0) {
                  uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                  uVar19 = 7;
                }
                else {
                  uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                  uVar19 = 7;
                }
              }
            }
            else {
              uVar24 = (ulong)*(uint *)(param_1 + 6);
              uVar11 = (uVar25 + uVar24 * 6) - 1;
              if ((uVar11 | uVar25) >> 0x20 == 0) {
                uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
              }
              else {
                uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
              }
              *(undefined4 *)((long)param_1 + 0x74) = uVar10;
              uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
              uVar11 = (uVar25 - 1) + uVar23 * 6;
              if ((uVar25 | uVar11) >> 0x20 == 0) {
                uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
                uVar19 = 6;
              }
              else {
                uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
                uVar19 = 6;
              }
            }
          }
          else {
            uVar24 = (ulong)*(uint *)(param_1 + 6);
            uVar11 = (uVar24 * 5 + uVar25) - 1;
            if ((uVar11 | uVar25) >> 0x20 == 0) {
              uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
            }
            else {
              uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
            }
            *(undefined4 *)((long)param_1 + 0x74) = uVar10;
            uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
            uVar11 = (uVar25 - 1) + uVar23 * 5;
            if ((uVar25 | uVar11) >> 0x20 == 0) {
              uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
              uVar19 = 5;
            }
            else {
              uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
              uVar19 = 5;
            }
          }
        }
        else {
          uVar24 = (ulong)*(uint *)(param_1 + 6);
          uVar11 = (uVar25 + uVar24 * 4) - 1;
          if ((uVar11 | uVar25) >> 0x20 == 0) {
            uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
          }
          else {
            uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
          }
          *(undefined4 *)((long)param_1 + 0x74) = uVar10;
          uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
          uVar11 = (uVar25 - 1) + uVar23 * 4;
          if ((uVar25 | uVar11) >> 0x20 == 0) {
            uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
            uVar19 = 4;
          }
          else {
            uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
            uVar19 = 4;
          }
        }
      }
      else {
        uVar24 = (ulong)*(uint *)(param_1 + 6);
        uVar11 = (uVar24 * 3 + uVar25) - 1;
        if ((uVar11 | uVar25) >> 0x20 == 0) {
          uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
        }
        else {
          uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
        }
        *(undefined4 *)((long)param_1 + 0x74) = uVar10;
        uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
        uVar11 = (uVar25 - 1) + uVar23 * 3;
        if ((uVar25 | uVar11) >> 0x20 == 0) {
          uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
          uVar19 = 3;
        }
        else {
          uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
          uVar19 = 3;
        }
      }
    }
    else {
      uVar24 = (ulong)*(uint *)(param_1 + 6);
      uVar11 = (uVar25 + uVar24 * 2) - 1;
      if ((uVar11 | uVar25) >> 0x20 == 0) {
        uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
      }
      else {
        uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
      }
      *(undefined4 *)((long)param_1 + 0x74) = uVar10;
      uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
      uVar11 = (uVar25 - 1) + uVar23 * 2;
      if ((uVar25 | uVar11) >> 0x20 == 0) {
        uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
        uVar19 = 2;
      }
      else {
        uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
        uVar19 = 2;
      }
    }
  }
  else {
    uVar24 = (ulong)*(uint *)(param_1 + 6);
    uVar11 = (uVar25 + uVar24) - 1;
    if ((uVar11 | uVar25) >> 0x20 == 0) {
      uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
    }
    else {
      uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
    }
    *(undefined4 *)((long)param_1 + 0x74) = uVar10;
    uVar23 = (ulong)*(uint *)((long)param_1 + 0x34);
    uVar11 = (uVar25 - 1) + uVar23;
    if ((uVar25 | uVar11) >> 0x20 == 0) {
      uVar10 = (undefined4)((uVar11 & 0xffffffff) / (ulong)uVar21);
      uVar19 = 1;
    }
    else {
      uVar10 = (undefined4)((long)uVar11 / (long)uVar25);
      uVar19 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xf) = uVar10;
  *(uint *)(param_1 + 0x31) = uVar19;
  *(uint *)((long)param_1 + 0x18c) = uVar19;
  uVar9 = *(uint *)(param_1 + 7);
  lVar1 = param_1[0x24];
  if (0 < (int)uVar9) {
    lVar12 = lVar1;
    if (6 < uVar9 - 1) {
      uVar16 = uVar9 & 0xfffffff8;
      do {
        *(uint *)(lVar12 + 0x24) = uVar19;
        *(uint *)(lVar12 + 0x28) = uVar19;
        *(uint *)(lVar12 + 0x84) = uVar19;
        *(uint *)(lVar12 + 0x88) = uVar19;
        *(uint *)(lVar12 + 0xe4) = uVar19;
        *(uint *)(lVar12 + 0xe8) = uVar19;
        *(uint *)(lVar12 + 0x144) = uVar19;
        *(uint *)(lVar12 + 0x148) = uVar19;
        *(uint *)(lVar12 + 0x1a4) = uVar19;
        *(uint *)(lVar12 + 0x1a8) = uVar19;
        *(uint *)(lVar12 + 0x204) = uVar19;
        *(uint *)(lVar12 + 0x208) = uVar19;
        *(uint *)(lVar12 + 0x264) = uVar19;
        *(uint *)(lVar12 + 0x268) = uVar19;
        *(uint *)(lVar12 + 0x2c4) = uVar19;
        *(uint *)(lVar12 + 0x2c8) = uVar19;
        lVar12 = lVar12 + 0x300;
        uVar16 = uVar16 - 8;
      } while (uVar16 != 0);
    }
    if ((uVar9 & 7) != 0) {
      lVar18 = 0;
      do {
        *(uint *)(lVar12 + 0x24 + lVar18) = uVar19;
        *(uint *)(lVar12 + 0x28 + lVar18) = uVar19;
        lVar18 = lVar18 + 0x60;
      } while ((uVar9 & 7) * 0x60 != (int)lVar18);
    }
    if (0 < (int)uVar9) {
      lVar12 = param_1[0x30];
      iVar26 = *(int *)((long)param_1 + 0x184);
      uVar16 = iVar26 * uVar21;
      uVar21 = uVar21 * (int)lVar12;
      uVar22 = (ulong)uVar21;
      iVar20 = *(int *)((long)param_1 + 0x18c);
      uVar11 = (ulong)(int)uVar21;
      uVar25 = (ulong)(int)uVar16;
      if (*(char *)((long)param_1 + 0x59) == '\0') {
        uVar21 = (uint)((char)param_1[0xc] != '\0') * 4 + 4;
        uVar27 = 0;
        lVar18 = lVar1;
        do {
          iVar28 = 1;
          if (uVar19 <= uVar21) {
            iVar28 = 1;
            do {
              iVar29 = iVar28 * 2;
              if ((int)lVar12 % (iVar29 * *(int *)(lVar18 + 8)) != 0) break;
              iVar28 = iVar29;
            } while ((int)(uVar19 * iVar29) <= (int)uVar21);
          }
          iVar28 = iVar28 * uVar19;
          *(int *)(lVar18 + 0x24) = iVar28;
          iVar29 = 1;
          if (iVar20 <= (int)uVar21) {
            iVar29 = 1;
            do {
              iVar30 = iVar29 * 2;
              if (iVar26 % (iVar30 * *(int *)(lVar18 + 0xc)) != 0) break;
              iVar29 = iVar30;
            } while (iVar20 * iVar30 <= (int)uVar21);
          }
          iVar29 = iVar29 * iVar20;
          *(int *)(lVar18 + 0x28) = iVar29;
          iVar30 = iVar29 * 2;
          if (iVar30 < iVar28) {
            *(int *)(lVar18 + 0x24) = iVar30;
            iVar28 = iVar30;
          }
          else {
            iVar30 = iVar28 * 2;
            if (iVar30 < iVar29) {
              *(int *)(lVar18 + 0x28) = iVar30;
              iVar29 = iVar30;
            }
          }
          uVar13 = ((long)iVar28 * (long)*(int *)(lVar18 + 8) * uVar24 + uVar11) - 1;
          if ((uVar13 | uVar11) >> 0x20 == 0) {
            uVar10 = (undefined4)((uVar13 & 0xffffffff) / uVar22);
          }
          else {
            uVar10 = (undefined4)((long)uVar13 / (long)uVar11);
          }
          *(undefined4 *)(lVar18 + 0x2c) = uVar10;
          uVar13 = ((long)iVar29 * (long)*(int *)(lVar18 + 0xc) * uVar23 + uVar25) - 1;
          if ((uVar13 | uVar25) >> 0x20 == 0) {
            uVar10 = (undefined4)((uVar13 & 0xffffffff) / (ulong)uVar16);
          }
          else {
            uVar10 = (undefined4)((long)uVar13 / (long)uVar25);
          }
          *(undefined4 *)(lVar18 + 0x30) = uVar10;
          uVar27 = uVar27 + 1;
          lVar18 = lVar18 + 0x60;
        } while (uVar27 != uVar9);
      }
      else {
        lVar12 = (long)iVar20 * 2;
        iVar26 = (int)lVar12;
        if (iVar26 < (int)uVar19) {
          puVar17 = (undefined4 *)(lVar1 + 0x30);
          uVar21 = uVar9;
          do {
            while( true ) {
              puVar17[-2] = iVar20;
              puVar17[-3] = iVar26;
              uVar13 = ((int)puVar17[-10] * lVar12 * uVar24 + uVar11) - 1;
              if ((uVar13 | uVar11) >> 0x20 == 0) {
                uVar10 = (undefined4)((uVar13 & 0xffffffff) / uVar22);
              }
              else {
                uVar10 = (undefined4)((long)uVar13 / (long)uVar11);
              }
              puVar17[-1] = uVar10;
              uVar13 = ((long)(int)puVar17[-9] * (long)iVar20 * uVar23 + uVar25) - 1;
              if ((uVar13 | uVar25) >> 0x20 != 0) break;
              *puVar17 = (int)((uVar13 & 0xffffffff) / (ulong)uVar16);
              puVar17 = puVar17 + 0x18;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_003783d1;
            }
            *puVar17 = (int)((long)uVar13 / (long)uVar25);
            puVar17 = puVar17 + 0x18;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        else {
          if ((int)(uVar19 * 2) < iVar20) {
            iVar20 = uVar19 * 2;
          }
          puVar17 = (undefined4 *)(lVar1 + 0x30);
          uVar21 = uVar9;
          do {
            while( true ) {
              puVar17[-3] = uVar19;
              puVar17[-2] = iVar20;
              uVar13 = ((long)(int)puVar17[-10] * (ulong)uVar19 * uVar24 + uVar11) - 1;
              if ((uVar13 | uVar11) >> 0x20 == 0) {
                uVar10 = (undefined4)((uVar13 & 0xffffffff) / uVar22);
              }
              else {
                uVar10 = (undefined4)((long)uVar13 / (long)uVar11);
              }
              puVar17[-1] = uVar10;
              uVar13 = ((long)iVar20 * (long)(int)puVar17[-9] * uVar23 + uVar25) - 1;
              if ((uVar13 | uVar25) >> 0x20 == 0) break;
              *puVar17 = (int)((long)uVar13 / (long)uVar25);
              puVar17 = puVar17 + 0x18;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_003783d1;
            }
            *puVar17 = (int)((uVar13 & 0xffffffff) / (ulong)uVar16);
            puVar17 = puVar17 + 0x18;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
    }
  }
LAB_003783d1:
  iVar26 = (int)param_1[8];
  iVar20 = 1;
  if (iVar26 != 1) {
    if ((iVar26 == 2) || (iVar26 == 6)) {
      iVar20 = 3;
    }
    else if ((int)uVar9 < 1) {
      iVar20 = 0;
    }
    else {
      iVar20 = 0;
      if (uVar9 - 1 < 7) {
        uVar24 = 0;
        lVar12 = lVar1;
      }
      else {
        uVar11 = (ulong)(uVar9 - 1) + 1;
        uVar24 = uVar11 & 0xfffffffffffffff8;
        lVar12 = uVar24 * 0x60 + lVar1;
        puVar17 = (undefined4 *)(lVar1 + 0x2d4);
        iVar30 = 0;
        iVar31 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar26 = 0;
        iVar20 = 0;
        iVar28 = 0;
        iVar29 = 0;
        uVar25 = uVar24;
        do {
          auVar34[0] = -(*(char *)(puVar17 + -0xa8) == '\0');
          auVar34[1] = -((char)puVar17[-0x90] == '\0');
          auVar34[2] = -(*(char *)(puVar17 + -0x78) == '\0');
          auVar34[3] = -((char)puVar17[-0x60] == '\0');
          auVar34[4] = 0xff;
          auVar34[5] = 0xff;
          auVar34[6] = 0xff;
          auVar34[7] = 0xff;
          auVar34[8] = 0xff;
          auVar34[9] = 0xff;
          auVar34[10] = 0xff;
          auVar34[0xb] = 0xff;
          auVar34[0xc] = 0xff;
          auVar34[0xd] = 0xff;
          auVar34[0xe] = 0xff;
          auVar34[0xf] = 0xff;
          auVar2._8_4_ = 0xffffffff;
          auVar2._0_8_ = 0xffffffffffffffff;
          auVar2._12_4_ = 0xffffffff;
          auVar34 = auVar34 ^ auVar2;
          auVar42._0_14_ = auVar34._0_14_;
          auVar42[0xe] = auVar34[7];
          auVar42[0xf] = auVar34[7];
          auVar41._14_2_ = auVar42._14_2_;
          auVar41._0_13_ = auVar34._0_13_;
          auVar41[0xd] = auVar34[6];
          auVar40._13_3_ = auVar41._13_3_;
          auVar40._0_12_ = auVar34._0_12_;
          auVar40[0xc] = auVar34[6];
          auVar39._12_4_ = auVar40._12_4_;
          auVar39._0_11_ = auVar34._0_11_;
          auVar39[0xb] = auVar34[5];
          auVar38._11_5_ = auVar39._11_5_;
          auVar38._0_10_ = auVar34._0_10_;
          auVar38[10] = auVar34[5];
          auVar37._10_6_ = auVar38._10_6_;
          auVar37._0_9_ = auVar34._0_9_;
          auVar37[9] = auVar34[4];
          auVar36._9_7_ = auVar37._9_7_;
          auVar36._0_8_ = auVar34._0_8_;
          auVar36[8] = auVar34[4];
          Var6 = CONCAT91(CONCAT81(auVar36._8_8_,auVar34[3]),auVar34[3]);
          auVar5._2_10_ = Var6;
          auVar5[1] = auVar34[2];
          auVar5[0] = auVar34[2];
          auVar4._2_12_ = auVar5;
          auVar4[1] = auVar34[1];
          auVar4[0] = auVar34[1];
          auVar35._0_2_ = CONCAT11(auVar34[0],auVar34[0]);
          auVar35._2_14_ = auVar4;
          uVar47 = (undefined2)Var6;
          auVar45._0_12_ = auVar35._0_12_;
          auVar45._12_2_ = uVar47;
          auVar45._14_2_ = uVar47;
          auVar44._12_4_ = auVar45._12_4_;
          auVar44._0_10_ = auVar35._0_10_;
          auVar44._10_2_ = auVar5._0_2_;
          auVar43._10_6_ = auVar44._10_6_;
          auVar43._0_8_ = auVar35._0_8_;
          auVar43._8_2_ = auVar5._0_2_;
          auVar46._8_8_ = auVar43._8_8_;
          auVar46._6_2_ = auVar4._0_2_;
          auVar46._4_2_ = auVar4._0_2_;
          auVar46._2_2_ = auVar35._0_2_;
          auVar46._0_2_ = auVar35._0_2_;
          auVar46 = auVar46 & _DAT_0065a040;
          iVar30 = iVar30 + auVar46._0_4_;
          iVar31 = iVar31 + auVar46._4_4_;
          iVar32 = iVar32 + auVar46._8_4_;
          iVar33 = iVar33 + auVar46._12_4_;
          auVar48[0] = -(*(char *)(puVar17 + -0x48) == '\0');
          auVar48[1] = -((char)puVar17[-0x30] == '\0');
          auVar48[2] = -(*(char *)(puVar17 + -0x18) == '\0');
          auVar48[3] = -((char)*puVar17 == '\0');
          auVar48[4] = 0xff;
          auVar48[5] = 0xff;
          auVar48[6] = 0xff;
          auVar48[7] = 0xff;
          auVar48[8] = 0xff;
          auVar48[9] = 0xff;
          auVar48[10] = 0xff;
          auVar48[0xb] = 0xff;
          auVar48[0xc] = 0xff;
          auVar48[0xd] = 0xff;
          auVar48[0xe] = 0xff;
          auVar48[0xf] = 0xff;
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar48 = auVar48 ^ auVar3;
          auVar56._0_14_ = auVar48._0_14_;
          auVar56[0xe] = auVar48[7];
          auVar56[0xf] = auVar48[7];
          auVar55._14_2_ = auVar56._14_2_;
          auVar55._0_13_ = auVar48._0_13_;
          auVar55[0xd] = auVar48[6];
          auVar54._13_3_ = auVar55._13_3_;
          auVar54._0_12_ = auVar48._0_12_;
          auVar54[0xc] = auVar48[6];
          auVar53._12_4_ = auVar54._12_4_;
          auVar53._0_11_ = auVar48._0_11_;
          auVar53[0xb] = auVar48[5];
          auVar52._11_5_ = auVar53._11_5_;
          auVar52._0_10_ = auVar48._0_10_;
          auVar52[10] = auVar48[5];
          auVar51._10_6_ = auVar52._10_6_;
          auVar51._0_9_ = auVar48._0_9_;
          auVar51[9] = auVar48[4];
          auVar50._9_7_ = auVar51._9_7_;
          auVar50._0_8_ = auVar48._0_8_;
          auVar50[8] = auVar48[4];
          Var6 = CONCAT91(CONCAT81(auVar50._8_8_,auVar48[3]),auVar48[3]);
          auVar8._2_10_ = Var6;
          auVar8[1] = auVar48[2];
          auVar8[0] = auVar48[2];
          auVar7._2_12_ = auVar8;
          auVar7[1] = auVar48[1];
          auVar7[0] = auVar48[1];
          auVar49._0_2_ = CONCAT11(auVar48[0],auVar48[0]);
          auVar49._2_14_ = auVar7;
          uVar47 = (undefined2)Var6;
          auVar59._0_12_ = auVar49._0_12_;
          auVar59._12_2_ = uVar47;
          auVar59._14_2_ = uVar47;
          auVar58._12_4_ = auVar59._12_4_;
          auVar58._0_10_ = auVar49._0_10_;
          auVar58._10_2_ = auVar8._0_2_;
          auVar57._10_6_ = auVar58._10_6_;
          auVar57._0_8_ = auVar49._0_8_;
          auVar57._8_2_ = auVar8._0_2_;
          auVar60._8_8_ = auVar57._8_8_;
          auVar60._6_2_ = auVar7._0_2_;
          auVar60._4_2_ = auVar7._0_2_;
          auVar60._2_2_ = auVar49._0_2_;
          auVar60._0_2_ = auVar49._0_2_;
          auVar60 = auVar60 & _DAT_0065a040;
          iVar26 = iVar26 + auVar60._0_4_;
          iVar20 = iVar20 + auVar60._4_4_;
          iVar28 = iVar28 + auVar60._8_4_;
          iVar29 = iVar29 + auVar60._12_4_;
          puVar17 = puVar17 + 0xc0;
          uVar25 = uVar25 - 8;
        } while (uVar25 != 0);
        iVar20 = iVar29 + iVar33 + iVar20 + iVar31 + iVar28 + iVar32 + iVar26 + iVar30;
        if (uVar11 == uVar24) goto LAB_003783ee;
      }
      pcVar15 = (char *)(lVar12 + 0x34);
      iVar26 = uVar9 - (int)uVar24;
      do {
        iVar20 = (iVar20 + 1) - (uint)(*pcVar15 == '\0');
        pcVar15 = pcVar15 + 0x60;
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
    }
  }
LAB_003783ee:
  *(int *)((long)param_1 + 0x7c) = iVar20;
  uVar10 = 1;
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    iVar20 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar20;
  uVar14 = use_merged_upsample((long)param_1);
  if ((char)uVar14 != '\0') {
    uVar10 = *(undefined4 *)((long)param_1 + 0x184);
  }
  *(undefined4 *)((long)param_1 + 0x84) = uVar10;
  return;
}


