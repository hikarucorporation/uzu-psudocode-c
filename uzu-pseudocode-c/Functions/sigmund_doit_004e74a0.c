// Function : sigmund_doit
// Namespace: 
// Entry    : 004e74a0
// Prototype: undefined sigmund_doit(float param_1, long param_2, uint param_3, float * param_4)
// Body     : 004e74a0 - 004e9062


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigmund_doit(float param_1,long param_2,uint param_3,float *param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  float *unaff_RBX;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  float *pfVar24;
  uint *puVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  undefined7 uVar30;
  uint *puVar29;
  long lVar31;
  undefined8 *puVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  float fVar39;
  undefined4 uVar40;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  undefined4 uVar46;
  float in_XMM4_Da;
  uint uVar47;
  float fVar48;
  undefined4 in_XMM4_Db;
  float fVar49;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM6_Da;
  float fVar50;
  undefined4 in_XMM6_Db;
  undefined1 in_XMM7 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined8 local_158;
  float afStack_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  float *local_138;
  undefined8 local_130;
  float *local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  uint local_d0;
  float local_cc;
  float local_c8;
  uint local_c4;
  ulong local_c0;
  float *local_b8;
  ulong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_5c;
  undefined1 local_58 [16];
  double local_48;
  float local_3c;
  double local_38;
  
  uVar6 = *(uint *)(param_2 + 0x58);
  lVar8 = (long)(int)uVar6;
  pfVar24 = afStack_150 + lVar8 * -8 + -6;
  puVar29 = &local_5c;
  pfVar15 = &local_7c;
  local_3c = param_1;
  (afStack_150 + lVar8 * -8 + -8)[0] = 7.205117e-39;
  (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
  sigmund_getrawpeaks(param_1,param_3,param_4,uVar6,(long)pfVar24,puVar29,pfVar15);
  uVar6 = local_5c;
  dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
  dVar35 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
  bVar1 = *(byte *)(param_2 + 0x42c);
  local_148 = 0;
  uStack_140 = 0;
  fVar53 = 0.0;
  local_b8 = pfVar24;
  local_d0 = param_3;
  if ((bVar1 & 1) != 0) {
    iVar10 = -1;
    if ((int)(float)(int)param_3 != 0) {
      uVar17 = (int)(float)(int)param_3;
      do {
        iVar10 = iVar10 + 1;
        bVar2 = 1 < uVar17;
        uVar17 = (int)uVar17 >> 1;
      } while (bVar2);
    }
    local_148 = 0;
    uStack_140 = 0;
    if ((int)local_5c < 1) goto LAB_004e8243;
    fVar53 = *(float *)(param_2 + 0xd8);
    in_XMM4_Da = *(float *)(param_2 + 0xdc);
    in_XMM4_Db = 0;
    local_58._0_8_ = *(long *)(param_2 + 0x68);
    uVar17 = *(uint *)PTR_pd_compatibilitylevel_00715a40;
    pfVar15 = (float *)(ulong)uVar17;
    in_XMM6_Da = (float)(((double)local_3c * DAT_005db338) / (double)(int)param_3);
    uVar18 = iVar10 * 0x30;
    if ((int)uVar18 < 1) {
LAB_004e75ef:
      lVar28 = (ulong)local_5c - 1;
      if (lVar28 == 0) {
        uVar13 = 0;
      }
      else {
        uVar20 = local_5c & 0xfffffffe;
        puVar11 = (undefined4 *)((long)&local_130 + lVar8 * -0x20 + 4);
        uVar13 = 0;
        do {
          puVar11[-8] = 0;
          puVar11[-9] = puVar11[-10];
          *puVar11 = 0;
          puVar11[-1] = puVar11[-2];
          uVar13 = uVar13 + 2;
          puVar11 = puVar11 + 0x10;
        } while (uVar20 != uVar13);
      }
      if ((uVar6 & 1) != 0) {
        afStack_150[lVar8 * -8 + uVar13 * 8 + 1] = 0.0;
        afStack_150[lVar8 * -8 + uVar13 * 8] = afStack_150[lVar8 * -8 + uVar13 * 8 + -1];
      }
      fVar45 = DAT_00652e08;
      if (lVar28 == 0) {
        uVar13 = 0;
        unaff_RBX = (float *)0x0;
      }
      else {
        pfVar12 = afStack_150 + lVar8 * -8 + 2;
        uVar13 = 0;
        unaff_RBX = (float *)0x0;
        do {
          if (pfVar12[-1] == 0.0) {
            if (fVar45 < pfVar12[-2]) {
              unaff_RBX = pfVar12 + -8;
              fVar45 = pfVar12[-2];
            }
          }
          if (pfVar12[7] == 0.0) {
            if (fVar45 < pfVar12[6]) {
              unaff_RBX = pfVar12;
              fVar45 = pfVar12[6];
            }
          }
          uVar13 = uVar13 + 2;
          pfVar12 = pfVar12 + 0x10;
        } while ((uVar6 & 0xfffffffe) != uVar13);
      }
      if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
         (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
        unaff_RBX = pfVar24 + uVar13 * 8;
      }
      if (unaff_RBX != (float *)0x0) {
        local_138 = unaff_RBX;
        unaff_RBX[7] = 1.0;
        fVar45 = DAT_00652e08;
        if (lVar28 == 0) {
          uVar13 = 0;
          pfVar15 = (float *)0x0;
        }
        else {
          pfVar12 = afStack_150 + lVar8 * -8 + 2;
          uVar13 = 0;
          pfVar15 = (float *)0x0;
          do {
            if (pfVar12[-1] == 0.0) {
              if (fVar45 < pfVar12[-2]) {
                pfVar15 = pfVar12 + -8;
                fVar45 = pfVar12[-2];
              }
            }
            if (pfVar12[7] == 0.0) {
              if (fVar45 < pfVar12[6]) {
                pfVar15 = pfVar12;
                fVar45 = pfVar12[6];
              }
            }
            uVar13 = uVar13 + 2;
            pfVar12 = pfVar12 + 0x10;
          } while ((uVar6 & 0xfffffffe) != uVar13);
        }
        if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
           (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
          pfVar15 = pfVar24 + uVar13 * 8;
        }
        local_c8 = in_XMM4_Da;
        local_c4 = uVar17;
        if (pfVar15 == (float *)0x0) {
          local_b0 = 1;
        }
        else {
          local_130 = pfVar15;
          pfVar15[7] = 1.0;
          fVar45 = DAT_00652e08;
          if (lVar28 == 0) {
            uVar13 = 0;
            pfVar15 = (float *)0x0;
          }
          else {
            pfVar12 = afStack_150 + lVar8 * -8 + 2;
            uVar13 = 0;
            pfVar15 = (float *)0x0;
            do {
              if (pfVar12[-1] == 0.0) {
                if (fVar45 < pfVar12[-2]) {
                  pfVar15 = pfVar12 + -8;
                  fVar45 = pfVar12[-2];
                }
              }
              if (pfVar12[7] == 0.0) {
                if (fVar45 < pfVar12[6]) {
                  pfVar15 = pfVar12;
                  fVar45 = pfVar12[6];
                }
              }
              uVar13 = uVar13 + 2;
              pfVar12 = pfVar12 + 0x10;
            } while ((uVar6 & 0xfffffffe) != uVar13);
          }
          if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
             (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
            pfVar15 = pfVar24 + uVar13 * 8;
          }
          if (pfVar15 == (float *)0x0) {
            local_b0 = 2;
          }
          else {
            local_128 = pfVar15;
            pfVar15[7] = 1.0;
            fVar45 = DAT_00652e08;
            if (lVar28 == 0) {
              uVar13 = 0;
              pfVar15 = (float *)0x0;
            }
            else {
              pfVar12 = afStack_150 + lVar8 * -8 + 2;
              uVar13 = 0;
              pfVar15 = (float *)0x0;
              do {
                if (pfVar12[-1] == 0.0) {
                  if (fVar45 < pfVar12[-2]) {
                    pfVar15 = pfVar12 + -8;
                    fVar45 = pfVar12[-2];
                  }
                }
                if (pfVar12[7] == 0.0) {
                  if (fVar45 < pfVar12[6]) {
                    pfVar15 = pfVar12;
                    fVar45 = pfVar12[6];
                  }
                }
                uVar13 = uVar13 + 2;
                pfVar12 = pfVar12 + 0x10;
              } while ((uVar6 & 0xfffffffe) != uVar13);
            }
            if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
               (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
              pfVar15 = pfVar24 + uVar13 * 8;
            }
            if (pfVar15 == (float *)0x0) {
              local_b0 = 3;
            }
            else {
              local_120 = pfVar15;
              pfVar15[7] = 1.0;
              fVar45 = DAT_00652e08;
              if (lVar28 == 0) {
                uVar13 = 0;
                pfVar15 = (float *)0x0;
              }
              else {
                pfVar12 = afStack_150 + lVar8 * -8 + 2;
                uVar13 = 0;
                pfVar15 = (float *)0x0;
                do {
                  if (pfVar12[-1] == 0.0) {
                    if (fVar45 < pfVar12[-2]) {
                      pfVar15 = pfVar12 + -8;
                      fVar45 = pfVar12[-2];
                    }
                  }
                  if (pfVar12[7] == 0.0) {
                    if (fVar45 < pfVar12[6]) {
                      pfVar15 = pfVar12;
                      fVar45 = pfVar12[6];
                    }
                  }
                  uVar13 = uVar13 + 2;
                  pfVar12 = pfVar12 + 0x10;
                } while ((uVar6 & 0xfffffffe) != uVar13);
              }
              if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                 (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                pfVar15 = pfVar24 + uVar13 * 8;
              }
              if (pfVar15 == (float *)0x0) {
                local_b0 = 4;
              }
              else {
                local_118 = pfVar15;
                pfVar15[7] = 1.0;
                fVar45 = DAT_00652e08;
                if (lVar28 == 0) {
                  uVar13 = 0;
                  pfVar15 = (float *)0x0;
                }
                else {
                  pfVar12 = afStack_150 + lVar8 * -8 + 2;
                  uVar13 = 0;
                  pfVar15 = (float *)0x0;
                  do {
                    if (pfVar12[-1] == 0.0) {
                      if (fVar45 < pfVar12[-2]) {
                        pfVar15 = pfVar12 + -8;
                        fVar45 = pfVar12[-2];
                      }
                    }
                    if (pfVar12[7] == 0.0) {
                      if (fVar45 < pfVar12[6]) {
                        pfVar15 = pfVar12;
                        fVar45 = pfVar12[6];
                      }
                    }
                    uVar13 = uVar13 + 2;
                    pfVar12 = pfVar12 + 0x10;
                  } while ((uVar6 & 0xfffffffe) != uVar13);
                }
                if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                   (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                  pfVar15 = pfVar24 + uVar13 * 8;
                }
                if (pfVar15 == (float *)0x0) {
                  local_b0 = 5;
                }
                else {
                  local_110 = pfVar15;
                  pfVar15[7] = 1.0;
                  fVar45 = DAT_00652e08;
                  if (lVar28 == 0) {
                    uVar13 = 0;
                    pfVar15 = (float *)0x0;
                  }
                  else {
                    pfVar12 = afStack_150 + lVar8 * -8 + 2;
                    uVar13 = 0;
                    pfVar15 = (float *)0x0;
                    do {
                      if (pfVar12[-1] == 0.0) {
                        if (fVar45 < pfVar12[-2]) {
                          pfVar15 = pfVar12 + -8;
                          fVar45 = pfVar12[-2];
                        }
                      }
                      if (pfVar12[7] == 0.0) {
                        if (fVar45 < pfVar12[6]) {
                          pfVar15 = pfVar12;
                          fVar45 = pfVar12[6];
                        }
                      }
                      uVar13 = uVar13 + 2;
                      pfVar12 = pfVar12 + 0x10;
                    } while ((uVar6 & 0xfffffffe) != uVar13);
                  }
                  if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                     (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                    pfVar15 = pfVar24 + uVar13 * 8;
                  }
                  if (pfVar15 == (float *)0x0) {
                    local_b0 = 6;
                  }
                  else {
                    local_108 = pfVar15;
                    pfVar15[7] = 1.0;
                    fVar45 = DAT_00652e08;
                    if (lVar28 == 0) {
                      uVar13 = 0;
                      pfVar15 = (float *)0x0;
                    }
                    else {
                      pfVar12 = afStack_150 + lVar8 * -8 + 2;
                      uVar13 = 0;
                      pfVar15 = (float *)0x0;
                      do {
                        if (pfVar12[-1] == 0.0) {
                          if (fVar45 < pfVar12[-2]) {
                            pfVar15 = pfVar12 + -8;
                            fVar45 = pfVar12[-2];
                          }
                        }
                        if (pfVar12[7] == 0.0) {
                          if (fVar45 < pfVar12[6]) {
                            pfVar15 = pfVar12;
                            fVar45 = pfVar12[6];
                          }
                        }
                        uVar13 = uVar13 + 2;
                        pfVar12 = pfVar12 + 0x10;
                      } while ((uVar6 & 0xfffffffe) != uVar13);
                    }
                    if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                       (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                      pfVar15 = pfVar24 + uVar13 * 8;
                    }
                    if (pfVar15 == (float *)0x0) {
                      local_b0 = 7;
                    }
                    else {
                      local_100 = pfVar15;
                      pfVar15[7] = 1.0;
                      fVar45 = DAT_00652e08;
                      if (lVar28 == 0) {
                        uVar13 = 0;
                        pfVar15 = (float *)0x0;
                      }
                      else {
                        pfVar12 = afStack_150 + lVar8 * -8 + 2;
                        uVar13 = 0;
                        pfVar15 = (float *)0x0;
                        do {
                          if (pfVar12[-1] == 0.0) {
                            if (fVar45 < pfVar12[-2]) {
                              pfVar15 = pfVar12 + -8;
                              fVar45 = pfVar12[-2];
                            }
                          }
                          if (pfVar12[7] == 0.0) {
                            if (fVar45 < pfVar12[6]) {
                              pfVar15 = pfVar12;
                              fVar45 = pfVar12[6];
                            }
                          }
                          uVar13 = uVar13 + 2;
                          pfVar12 = pfVar12 + 0x10;
                        } while ((uVar6 & 0xfffffffe) != uVar13);
                      }
                      if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0))
                         && (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                        pfVar15 = pfVar24 + uVar13 * 8;
                      }
                      if (pfVar15 == (float *)0x0) {
                        local_b0 = 8;
                      }
                      else {
                        local_f8 = pfVar15;
                        pfVar15[7] = 1.0;
                        fVar45 = DAT_00652e08;
                        if (lVar28 == 0) {
                          uVar13 = 0;
                          pfVar15 = (float *)0x0;
                        }
                        else {
                          pfVar12 = afStack_150 + lVar8 * -8 + 2;
                          uVar13 = 0;
                          pfVar15 = (float *)0x0;
                          do {
                            if (pfVar12[-1] == 0.0) {
                              if (fVar45 < pfVar12[-2]) {
                                pfVar15 = pfVar12 + -8;
                                fVar45 = pfVar12[-2];
                              }
                            }
                            if (pfVar12[7] == 0.0) {
                              if (fVar45 < pfVar12[6]) {
                                pfVar15 = pfVar12;
                                fVar45 = pfVar12[6];
                              }
                            }
                            uVar13 = uVar13 + 2;
                            pfVar12 = pfVar12 + 0x10;
                          } while ((uVar6 & 0xfffffffe) != uVar13);
                        }
                        if ((((uVar6 & 1) != 0) && (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)
                            ) && (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                          pfVar15 = pfVar24 + uVar13 * 8;
                        }
                        if (pfVar15 == (float *)0x0) {
                          local_b0 = 9;
                        }
                        else {
                          local_f0 = pfVar15;
                          pfVar15[7] = 1.0;
                          fVar45 = DAT_00652e08;
                          if (lVar28 == 0) {
                            uVar13 = 0;
                            pfVar15 = (float *)0x0;
                          }
                          else {
                            pfVar12 = afStack_150 + lVar8 * -8 + 2;
                            uVar13 = 0;
                            pfVar15 = (float *)0x0;
                            do {
                              if (pfVar12[-1] == 0.0) {
                                if (fVar45 < pfVar12[-2]) {
                                  pfVar15 = pfVar12 + -8;
                                  fVar45 = pfVar12[-2];
                                }
                              }
                              if (pfVar12[7] == 0.0) {
                                if (fVar45 < pfVar12[6]) {
                                  pfVar15 = pfVar12;
                                  fVar45 = pfVar12[6];
                                }
                              }
                              uVar13 = uVar13 + 2;
                              pfVar12 = pfVar12 + 0x10;
                            } while ((uVar6 & 0xfffffffe) != uVar13);
                          }
                          if ((((uVar6 & 1) != 0) &&
                              (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                             (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                            pfVar15 = pfVar24 + uVar13 * 8;
                          }
                          if (pfVar15 == (float *)0x0) {
                            local_b0 = 10;
                          }
                          else {
                            local_e8 = pfVar15;
                            pfVar15[7] = 1.0;
                            fVar45 = DAT_00652e08;
                            if (lVar28 == 0) {
                              uVar13 = 0;
                              pfVar15 = (float *)0x0;
                            }
                            else {
                              pfVar12 = afStack_150 + lVar8 * -8 + 2;
                              uVar13 = 0;
                              pfVar15 = (float *)0x0;
                              do {
                                if (pfVar12[-1] == 0.0) {
                                  if (fVar45 < pfVar12[-2]) {
                                    pfVar15 = pfVar12 + -8;
                                    fVar45 = pfVar12[-2];
                                  }
                                }
                                if (pfVar12[7] == 0.0) {
                                  if (fVar45 < pfVar12[6]) {
                                    pfVar15 = pfVar12;
                                    fVar45 = pfVar12[6];
                                  }
                                }
                                uVar13 = uVar13 + 2;
                                pfVar12 = pfVar12 + 0x10;
                              } while ((uVar6 & 0xfffffffe) != uVar13);
                            }
                            if ((((uVar6 & 1) != 0) &&
                                (afStack_150[lVar8 * -8 + uVar13 * 8 + 1] == 0.0)) &&
                               (fVar45 < afStack_150[lVar8 * -8 + uVar13 * 8])) {
                              pfVar15 = pfVar24 + uVar13 * 8;
                            }
                            if (pfVar15 == (float *)0x0) {
                              local_b0 = 0xb;
                            }
                            else {
                              local_e0 = pfVar15;
                              pfVar15[7] = 1.0;
                              local_b0 = 0xc;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_cc = in_XMM6_Da;
        local_98._0_8_ = (double)fVar53;
        local_a8._0_8_ = local_b0;
        dVar35 = _DAT_005d9000 / (double)in_XMM6_Da;
        lVar28 = local_58._0_8_ + 8;
        local_c0 = local_58._0_8_ + 0x14;
        local_78 = 0;
        uStack_70 = 0;
        lVar31 = 0;
        pfVar15 = unaff_RBX;
        do {
          fVar53 = *pfVar15;
          local_38._0_4_ = pfVar15[1];
          (afStack_150 + lVar8 * -8 + -8)[0] = 7.208805e-39;
          (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
          dVar36 = log((double)fVar53 * DAT_005db338 * dVar35);
          local_48 = (double)CONCAT44(local_48._4_4_,(float)(dVar36 * _DAT_00652e20));
          dVar36 = (double)local_38._0_4_;
          uVar4 = local_98._0_8_;
          (afStack_150 + lVar8 * -8 + -8)[0] = 7.20886e-39;
          (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
          dVar36 = pow(dVar36,(double)uVar4);
          local_48 = (double)local_48._0_4_ + DAT_00652be8;
          uVar13 = 0;
          local_38 = (double)CONCAT44(local_38._4_4_,(float)dVar36);
          do {
            (afStack_150 + lVar8 * -8 + -8)[0] = 7.208979e-39;
            (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
            dVar36 = log((double)(int)uVar13 + _DAT_005d9000);
            uVar6 = (uint)(dVar36 * _DAT_00652e28 + local_48);
            if ((int)uVar6 < -2) break;
            if ((int)(uVar6 + 2) < (int)uVar18) {
              uVar17 = 0;
              if (-1 < (int)uVar6) {
                uVar17 = uVar6;
              }
              if (uVar17 <= uVar6 + 2) {
                uVar16 = (ulong)(uVar6 + 3);
                uVar26 = (ulong)uVar17;
                if ((uVar13 & 1) == 0) {
                  uVar19 = uVar26;
                  if (((uVar6 + 3) - uVar17 & 1) != 0) {
                    lVar14 = uVar26 * 0x10;
                    *(float *)(local_58._0_8_ + lVar14) =
                         *(float *)(param_2 + 0x90 + uVar13 * 4) * local_38._0_4_ +
                         *(float *)(local_58._0_8_ + lVar14);
                    *(float *)(local_58._0_8_ + 4 + lVar14) =
                         *(float *)(local_58._0_8_ + 4 + lVar14) + local_38._0_4_;
                    uVar19 = uVar26 + 1;
                  }
                  if (~uVar26 + uVar16 != 0) {
                    lVar14 = uVar16 - uVar19;
                    pfVar15 = (float *)(uVar19 * 0x10 + local_c0);
                    do {
                      pfVar15[-5] = *(float *)(param_2 + 0x90 + uVar13 * 4) * local_38._0_4_ +
                                    pfVar15[-5];
                      pfVar15[-4] = pfVar15[-4] + local_38._0_4_;
                      pfVar15[-1] = *(float *)(param_2 + 0x90 + uVar13 * 4) * local_38._0_4_ +
                                    pfVar15[-1];
                      *pfVar15 = *pfVar15 + local_38._0_4_;
                      pfVar15 = pfVar15 + 8;
                      lVar14 = lVar14 + -2;
                    } while (lVar14 != 0);
                  }
                }
                else {
                  lVar14 = uVar16 - uVar26;
                  pfVar15 = (float *)(uVar26 * 0x10 + lVar28);
                  do {
                    pfVar15[-2] = *(float *)(param_2 + 0x90 + uVar13 * 4) * local_38._0_4_ +
                                  pfVar15[-2];
                    pfVar15[-1] = pfVar15[-1] + local_38._0_4_;
                    *pfVar15 = *pfVar15 + local_38._0_4_;
                    pfVar15 = pfVar15 + 4;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x10);
          fVar45 = (float)local_78 + local_38._0_4_;
          lVar31 = lVar31 + 1;
          if (lVar31 == local_a8._0_8_) goto LAB_004e8146;
          local_78 = CONCAT44(local_78._4_4_,fVar45);
          pfVar15 = (&local_138)[lVar31];
        } while( true );
      }
      local_b0 = 0;
      uVar30 = (undefined7)((ulong)lVar28 >> 8);
      unaff_RBX = (float *)0x0;
    }
    else {
      puVar11 = (undefined4 *)(*(long *)(param_2 + 0x68) + 0x18);
      uVar13 = (ulong)uVar18;
      do {
        puVar11[-4] = 0;
        *(undefined8 *)(puVar11 + -6) = 0;
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + -2) = 0;
        puVar11 = puVar11 + 8;
        uVar13 = uVar13 - 2;
      } while (uVar13 != 0);
      if (0 < (int)local_5c) goto LAB_004e75ef;
      local_b0 = 0;
      uVar30 = (undefined7)((ulong)puVar29 >> 8);
    }
    local_b0 = 0;
    puVar29 = (uint *)CONCAT71(uVar30,1);
    fVar34 = 0.0;
    fVar45 = 0.0;
    if (0 < (int)uVar18) goto LAB_004e8182;
    goto LAB_004e8243;
  }
  goto LAB_004e824f;
LAB_004e8a30:
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar16) goto LAB_004e8ae5;
  goto LAB_004e896d;
LAB_004e8146:
  puVar29 = (uint *)0x0;
  in_XMM6_Db = 0;
  in_XMM4_Db = 0;
  pfVar15 = (float *)(ulong)local_c4;
  pfVar24 = local_b8;
  fVar34 = local_78._4_4_;
  in_XMM4_Da = local_c8;
  in_XMM6_Da = local_cc;
  if ((int)uVar18 < 1) {
LAB_004e8243:
    dVar35 = (double)CONCAT44(in_XMM4_Db,in_XMM4_Da);
    fVar53 = 0.0;
    dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
  }
  else {
LAB_004e8182:
    in_XMM4_Db = 0;
    pfVar12 = (float *)(local_58._0_8_ + 0x30);
    uVar13 = 0xffffffff;
    uVar16 = 0;
    fVar52 = DAT_00652e08;
    do {
      fVar53 = pfVar12[-0xc];
      fVar39 = pfVar12[-8];
      uVar17 = (uint)uVar16;
      uVar6 = uVar17;
      if (fVar53 <= fVar52) {
        fVar53 = fVar52;
        uVar6 = (uint)uVar13;
      }
      fVar49 = fVar53;
      if (fVar53 <= fVar39) {
        fVar49 = fVar39;
      }
      uVar20 = uVar17 | 1;
      if (fVar39 <= fVar53) {
        uVar20 = uVar6;
      }
      fVar53 = pfVar12[-4];
      fVar52 = fVar49;
      if (fVar49 <= fVar53) {
        fVar52 = fVar53;
      }
      uVar6 = uVar17 | 2;
      if (fVar53 <= fVar49) {
        uVar6 = uVar20;
      }
      fVar53 = *pfVar12;
      uVar17 = uVar17 | 3;
      if (fVar53 <= fVar52) {
        uVar17 = uVar6;
      }
      uVar13 = (ulong)uVar17;
      if (fVar52 <= fVar53) {
        fVar52 = fVar53;
      }
      uVar16 = uVar16 + 4;
      pfVar12 = pfVar12 + 0x10;
    } while (uVar16 != uVar18);
    if ((int)uVar17 < 0) goto LAB_004e8243;
    fVar53 = 0.0;
    dVar35 = (double)(ulong)(uint)in_XMM4_Da;
    dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
    if ((int)uVar17 < (int)(uVar18 - 1)) {
      if (fVar45 <= 0.0) goto LAB_004e8243;
      lVar28 = uVar13 * 0x10;
      fVar39 = *(float *)(local_58._0_8_ + 4 + lVar28);
      dVar35 = (double)(ulong)(uint)in_XMM4_Da;
      dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
      if (0.0 < fVar39) {
        if ((int)pfVar15 < 0x36) {
          dVar35 = (double)(ulong)(uint)in_XMM4_Da;
          dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
          if ((double)fVar45 * DAT_00652e30 <= (double)fVar52) goto LAB_004e8ee9;
        }
        else {
          dVar35 = (double)(ulong)(uint)(in_XMM4_Da * fVar45);
          dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
          if (in_XMM4_Da * fVar45 <= fVar39) {
LAB_004e8ee9:
            fVar53 = *(float *)(local_58._0_8_ + 8 + lVar28);
            auVar41._4_4_ = fVar39;
            auVar41._0_4_ = fVar45;
            auVar41._8_4_ = fVar34;
            auVar41._12_4_ = 0;
            auVar41 = rcpps(ZEXT416((uint)fVar53),auVar41);
            fVar49 = fVar39 * auVar41._0_4_;
            fVar50 = fVar53 * auVar41._4_4_;
            fVar43 = auVar41._8_4_ * 0.0;
            fVar44 = auVar41._12_4_ * 0.0;
            fVar52 = *(float *)(uVar13 * 0x10 + 0x10 + local_58._0_8_);
            uVar13 = (ulong)(uVar17 - 1);
            if (uVar17 == 0) {
              uVar13 = 0;
            }
            fVar33 = *(float *)(local_58._0_8_ + uVar13 * 0x10);
            uVar40 = 0;
            in_XMM5_Db = 0.0;
            fVar48 = fVar33 + fVar52 + *(float *)(local_58._0_8_ + lVar28);
            local_148 = CONCAT44((fVar53 - fVar39 * fVar50) * auVar41._4_4_ + fVar50,
                                 (fVar39 - fVar45 * fVar49) * auVar41._0_4_ + fVar49);
            uStack_140 = CONCAT44((0.0 - fVar44 * 0.0) * auVar41._12_4_ + fVar44,
                                  (0.0 - fVar34 * fVar43) * auVar41._8_4_ + fVar43);
            in_XMM5_Da = (fVar52 - fVar33) / fVar48 + (float)(int)uVar17;
            in_XMM6_Da = in_XMM6_Da + in_XMM6_Da;
            local_38 = (double)in_XMM6_Da;
            cVar3 = (char)puVar29;
            (afStack_150 + lVar8 * -8 + -8)[0] = 7.214633e-39;
            (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
            dVar36 = exp((double)in_XMM5_Da * _DAT_00652e38);
            dVar35 = (double)CONCAT44(uVar40,fVar48);
            fVar53 = (float)(dVar36 * local_38);
            dVar36 = (double)CONCAT44(in_XMM6_Db,in_XMM6_Da);
            if (cVar3 == '\0') {
              fVar45 = 0.0;
              uVar13 = 1;
              auVar42 = ZEXT816(0);
              while( true ) {
                in_XMM5_Da = *unaff_RBX;
                in_XMM5_Db = 0.0;
                fVar34 = in_XMM5_Da * (DAT_005d9038 / fVar53);
                dVar36 = (double)(ulong)(uint)fVar34;
                in_XMM7._0_8_ = (double)fVar34 + DAT_005db338;
                in_XMM7._8_8_ = 0;
                if ((int)in_XMM7._0_8_ - 1U < 0x10) {
                  iVar10 = (int)in_XMM7._0_8_;
                  fVar52 = (float)iVar10;
                  in_XMM7 = ZEXT416((uint)fVar52);
                  dVar36 = (double)(fVar34 - fVar52);
                  dVar35 = (double)iVar10 * DAT_00652e40;
                  if ((dVar36 < dVar35) &&
                     (dVar35 = (double)((ulong)dVar35 ^ _DAT_00652d10), dVar35 < dVar36)) {
                    auVar42._0_4_ = auVar42._0_4_ + unaff_RBX[1] * fVar52;
                    fVar52 = (unaff_RBX[1] * fVar52 * in_XMM5_Da) / fVar52;
                    dVar35 = (double)(ulong)(uint)fVar52;
                    fVar45 = fVar45 + fVar52;
                  }
                }
                if ((local_b0 & 0xffffffff) == uVar13) break;
                unaff_RBX = (&local_138)[uVar13];
                uVar13 = uVar13 + 1;
              }
              if (0.0 < auVar42._0_4_) {
                fVar53 = fVar45 / auVar42._0_4_;
              }
            }
          }
        }
      }
    }
  }
  bVar1 = *(byte *)(param_2 + 0x42c);
LAB_004e824f:
  uVar17 = 0;
  uVar6 = 0;
  fVar45 = 0.0;
  local_48 = (double)CONCAT44(local_48._4_4_,fVar53);
  if ((bVar1 & 2) == 0) goto LAB_004e887f;
  uVar17 = (uint)(((double)local_3c * DAT_00651e50 * (double)*(float *)(param_2 + 0x84)) /
                  (double)*(int *)(param_2 + 0x78) + _DAT_005d9000);
  local_78._0_4_ = local_7c;
  fVar53 = *(float *)(param_2 + 0x8c);
  local_98._0_4_ = *(undefined4 *)(param_2 + 0x80);
  (afStack_150 + lVar8 * -8 + -8)[0] = 7.210118e-39;
  (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
  dVar37 = exp((double)(fVar53 + DAT_00652e00) * _DAT_00652e48);
  local_58._0_4_ = (float)dVar37;
  dVar37 = (double)(float)local_98._0_4_;
  local_38._0_4_ = *(float *)(param_2 + 0x88);
  (afStack_150 + lVar8 * -8 + -8)[0] = 7.210186e-39;
  (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
  dVar37 = exp(dVar37 * _DAT_00652e50);
  fVar53 = (float)dVar37;
  uVar6 = 1;
  if (0 < (int)uVar17) {
    uVar6 = uVar17;
  }
  uVar18 = 99;
  if (uVar6 < 99) {
    uVar18 = uVar6;
  }
  uVar6 = *(int *)(param_2 + 0x41c) + 1;
  uVar20 = 0;
  if (uVar6 != 100) {
    uVar20 = uVar6;
  }
  *(uint *)(param_2 + 0x41c) = uVar20;
  lVar28 = (long)(int)uVar20;
  *(float *)(param_2 + 0xfc + lVar28 * 8) = local_48._0_4_;
  *(float *)(param_2 + 0x100 + lVar28 * 8) = (float)local_78;
  fVar52 = *(float *)(param_2 + 0xec) + DAT_005d9038;
  fVar34 = *(float *)(param_2 + 0xf0);
  *(float *)(param_2 + 0xec) = fVar52;
  if (fVar34 <= 0.0) {
    if ((float)(int)uVar18 < fVar52) {
      iVar7 = uVar20 - uVar18;
      iVar10 = iVar7 + 0x65;
      if (-2 < iVar7) {
        iVar10 = iVar7 + 1;
      }
      lVar31 = (long)iVar10;
      in_XMM5_Db = 0.0;
      fVar45 = 0.0;
      uVar6 = 0;
      uVar17 = 0;
      auVar41 = ZEXT816(0);
      fVar39 = DAT_00652e0c;
      in_XMM5_Da = DAT_00652e08;
      dVar37 = dVar36;
      uVar21 = uVar18;
      do {
        fVar49 = *(float *)(param_2 + 0xfc + (long)iVar10 * 8);
        dVar35 = (double)(ulong)(uint)fVar49;
        dVar36 = dVar37;
        if (fVar49 <= 0.0) break;
        if (in_XMM5_Da <= fVar49) {
          in_XMM5_Da = fVar49;
        }
        if (fVar49 <= fVar39) {
          fVar39 = fVar49;
        }
        fVar50 = fVar39 * fVar53;
        dVar37 = (double)(ulong)(uint)fVar50;
        dVar35 = (double)(ulong)(uint)fVar49;
        dVar36 = (double)(ulong)(uint)fVar50;
        if (fVar50 < in_XMM5_Da) break;
        fVar33 = auVar41._0_4_;
        fVar43 = *(float *)(param_2 + 0x100 + (long)iVar10 * 8);
        fVar44 = fVar43;
        if (fVar43 <= fVar33) {
          fVar44 = fVar33;
        }
        uVar47 = (uint)fVar49 & -(uint)(fVar33 < fVar43);
        dVar35 = (double)(ulong)uVar47;
        auVar51._0_4_ = ~-(uint)(fVar33 < fVar43) & (uint)fVar45;
        auVar51._4_4_ = 0;
        auVar51._8_4_ = ~auVar41._8_4_ & uVar6;
        auVar51._12_4_ = ~auVar41._12_4_ & uVar17;
        in_XMM7 = auVar51 | ZEXT416(uVar47);
        fVar45 = in_XMM7._0_4_;
        uVar6 = in_XMM7._8_4_;
        uVar17 = in_XMM7._12_4_;
        if ((((local_38._0_4_ * (float)local_78 < fVar44) &&
             (*(float *)(param_2 + 0x100 + lVar31 * 8) * local_38._0_4_ < fVar44)) &&
            (in_XMM5_Da < fVar50)) && (0.0 < fVar45)) {
          dVar36 = dVar37;
          dVar5 = (double)(ulong)uVar47;
          if ((float)local_58._0_4_ < fVar44) goto LAB_004e8853;
        }
        bVar2 = 0x62 < iVar10;
        iVar10 = iVar10 + 1;
        if (bVar2) {
          iVar10 = 0;
        }
        uVar21 = uVar21 - 1;
        auVar41 = ZEXT416((uint)fVar44);
        dVar36 = (double)(ulong)(uint)fVar50;
      } while (uVar21 != 0);
    }
  }
  fVar39 = local_48._0_4_;
  if (fVar34 <= 0.0) {
LAB_004e8586:
    iVar7 = uVar20 - uVar18;
    iVar10 = iVar7 + 100;
    if (-1 < iVar7) {
      iVar10 = iVar7;
    }
    if ((fVar34 <= 0.0) || (*(int *)(param_2 + 0xf8) == 0)) goto LAB_004e8650;
    if (0.0 < local_48._0_4_) {
      if ((float)local_58._0_4_ < (float)local_78) {
        local_98._0_8_ = (double)(float)local_78;
        local_a8._0_8_ = (double)*(float *)(param_2 + 0x100 + (long)iVar10 * 8);
        dVar37 = (double)local_38._0_4_;
        local_38 = (double)CONCAT44(local_38._4_4_,fVar53);
        local_78 = CONCAT44(local_78._4_4_,fVar34);
        (afStack_150 + lVar8 * -8 + -8)[0] = 7.21127e-39;
        (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
        dVar37 = exp(dVar37 * _DAT_00652e48);
        fVar39 = local_48._0_4_;
        fVar53 = local_38._0_4_;
        fVar34 = (float)local_78;
        if (dVar37 * (double)local_a8._0_8_ < (double)local_98._0_8_) {
          *(undefined8 *)(param_2 + 0xec) = 0;
          *(undefined8 *)(param_2 + 0xf4) = 0;
          fVar34 = 0.0;
        }
      }
    }
  }
  else {
    if ((fVar34 <= local_48._0_4_ * fVar53) &&
       (local_48._0_4_ <= *(float *)(param_2 + 0xf4) * fVar53)) {
      if (fVar34 < local_48._0_4_) {
        *(float *)(param_2 + 0xf0) = local_48._0_4_;
        fVar34 = local_48._0_4_;
      }
      if (local_48._0_4_ < *(float *)(param_2 + 0xf4)) {
        *(float *)(param_2 + 0xf4) = local_48._0_4_;
      }
      goto LAB_004e8586;
    }
    if (fVar52 <= (float)(int)uVar18) goto LAB_004e8586;
    iVar7 = uVar18 + 1;
    iVar10 = 0;
    uVar13 = (ulong)uVar20;
    do {
      iVar22 = (int)uVar13;
      uVar13 = (ulong)(iVar22 - 1);
      if (iVar22 < 1) {
        uVar13 = 99;
      }
      fVar45 = *(float *)(param_2 + 0xfc + uVar13 * 8);
      if ((fVar45 * fVar53 <= fVar34) || (*(float *)(param_2 + 0xf4) * fVar53 <= fVar45)) {
        iVar10 = iVar10 + 1;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (iVar10 * 2 <= (int)uVar18) goto LAB_004e8586;
    *(undefined4 *)(param_2 + 0xf4) = 0;
    *(undefined8 *)(param_2 + 0xec) = 0;
    iVar7 = uVar20 - uVar18;
    iVar10 = iVar7 + 100;
    if (-1 < iVar7) {
      iVar10 = iVar7;
    }
    fVar34 = 0.0;
LAB_004e8650:
    if (*(int *)(param_2 + 0xf8) == 0) {
      fVar45 = *(float *)(param_2 + 0x100 + (long)iVar10 * 8);
      if ((float)local_58._0_4_ < fVar45) {
        if ((float)local_78 < fVar45) {
          *(undefined4 *)(param_2 + 0xf8) = 1;
        }
      }
    }
  }
  fVar45 = 0.0;
  uVar6 = 0;
  uVar17 = 0;
  if (0.0 <= fVar39) {
    if ((0.0 < fVar34) && (fVar39 <= fVar34)) {
      fVar45 = 0.0;
      uVar6 = 0;
      uVar17 = 0;
      if (*(float *)(param_2 + 0xf4) <= fVar39) goto LAB_004e887f;
    }
    fVar34 = *(float *)(param_2 + 0x100 + lVar28 * 8);
    uVar21 = uVar18 - 1;
    fVar52 = fVar34;
    fVar49 = fVar39;
    if (1 < (int)uVar18) {
      uVar13 = (ulong)uVar20;
      if (uVar18 != 2) {
        uVar6 = uVar21 & 0xfffffffe;
        uVar13 = (ulong)uVar20;
        do {
          uVar16 = (ulong)((int)uVar13 - 1);
          if ((int)uVar13 < 1) {
            uVar16 = 99;
          }
          fVar45 = *(float *)(param_2 + 0xfc + uVar16 * 8);
          if (fVar39 <= fVar45) {
            fVar39 = fVar45;
          }
          if (fVar45 <= fVar49) {
            fVar49 = fVar45;
          }
          fVar45 = *(float *)(param_2 + 0x100 + uVar16 * 8);
          if (fVar52 <= fVar45) {
            fVar52 = fVar45;
          }
          uVar13 = (ulong)((int)uVar16 - 1);
          if ((int)uVar16 < 1) {
            uVar13 = 99;
          }
          fVar45 = *(float *)(param_2 + 0xfc + uVar13 * 8);
          dVar35 = (double)(ulong)(uint)fVar45;
          if (fVar39 <= fVar45) {
            fVar39 = fVar45;
          }
          if (fVar45 <= fVar49) {
            fVar49 = fVar45;
          }
          fVar45 = *(float *)(param_2 + 0x100 + uVar13 * 8);
          if (fVar52 <= fVar45) {
            fVar52 = fVar45;
          }
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      if ((uVar21 & 1) != 0) {
        uVar16 = 99;
        if (0 < (int)uVar13) {
          uVar16 = (ulong)((int)uVar13 - 1);
        }
        fVar45 = *(float *)(param_2 + 0xfc + uVar16 * 8);
        if (fVar39 <= fVar45) {
          fVar39 = fVar45;
        }
        if (fVar45 <= fVar49) {
          fVar49 = fVar45;
        }
        fVar50 = *(float *)(param_2 + 0x100 + uVar16 * 8);
        dVar35 = (double)(ulong)(uint)fVar45;
        if (fVar52 <= fVar50) {
          fVar52 = fVar50;
          dVar35 = (double)(ulong)(uint)fVar45;
        }
      }
    }
    fVar45 = 0.0;
    uVar6 = 0;
    uVar17 = 0;
    if (((0.0 < fVar49) && (fVar39 <= fVar49 * fVar53)) && ((float)local_58._0_4_ < fVar52)) {
      fVar53 = *(float *)(param_2 + 0xfc + lVar28 * 8) * fVar34;
      if (uVar18 != 1) {
        uVar13 = (ulong)(uVar20 - 1);
        if ((int)uVar20 < 1) {
          uVar13 = 99;
        }
        if (uVar18 != 2) {
          uVar6 = uVar21 & 0xfffffffe;
          do {
            fVar45 = *(float *)(param_2 + 0x100 + uVar13 * 8);
            uVar16 = (ulong)((int)uVar13 - 1);
            if ((int)uVar13 < 1) {
              uVar16 = 99;
            }
            fVar52 = *(float *)(param_2 + 0x100 + uVar16 * 8);
            fVar34 = fVar34 + fVar45 + fVar52;
            fVar53 = fVar52 * *(float *)(param_2 + 0xfc + uVar16 * 8) +
                     fVar45 * *(float *)(param_2 + 0xfc + uVar13 * 8) + fVar53;
            uVar13 = (ulong)((int)uVar16 - 1);
            if ((int)uVar16 < 1) {
              uVar13 = 99;
            }
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        if ((uVar21 & 1) != 0) {
          fVar45 = *(float *)(param_2 + 0x100 + uVar13 * 8);
          fVar34 = fVar34 + fVar45;
          fVar53 = fVar53 + fVar45 * *(float *)(param_2 + 0xfc + uVar13 * 8);
        }
      }
      fVar45 = 0.0;
      uVar6 = 0;
      uVar17 = 0;
      dVar5 = dVar35;
      if (0.0 < fVar34) {
        fVar45 = fVar53 / fVar34;
        uVar6 = 0;
        uVar17 = 0;
      }
LAB_004e8853:
      dVar35 = dVar5;
      *(float *)(param_2 + 0xf4) = fVar45;
      *(float *)(param_2 + 0xf0) = fVar45;
      *(undefined4 *)(param_2 + 0xec) = 0;
      *(undefined4 *)(param_2 + 0xf8) = 0;
    }
  }
LAB_004e887f:
  uVar18 = local_d0;
  if ((*(byte *)(param_2 + 0x42c) & 4) != 0) {
    uVar16 = (ulong)local_5c;
    uVar20 = *(uint *)(param_2 + 0x428);
    uVar13 = (ulong)uVar20;
    puVar29 = *(uint **)(param_2 + 0x420);
    if (0 < (int)uVar20) {
      if (uVar13 - 1 < 3) {
        uVar26 = 0;
      }
      else {
        puVar25 = puVar29 + 0x1f;
        uVar26 = 0;
        do {
          puVar25[-0x18] = 0xbf800000;
          puVar25[-0x10] = 0xbf800000;
          puVar25[-8] = 0xbf800000;
          *puVar25 = 0xbf800000;
          uVar26 = uVar26 + 4;
          puVar25 = puVar25 + 0x20;
        } while ((uVar20 & 0xfffffffc) != uVar26);
      }
      if ((ulong)(uVar20 & 3) != 0) {
        lVar28 = 0;
        do {
          *(undefined4 *)((long)puVar29 + lVar28 + uVar26 * 0x20 + 0x1c) = 0xbf800000;
          lVar28 = lVar28 + 0x20;
        } while ((ulong)(uVar20 & 3) * 0x20 != lVar28);
      }
    }
    fVar53 = DAT_00652e0c;
    uVar21 = _DAT_006524b0;
    if (0 < (int)local_5c) {
      fVar52 = (float)(int)local_d0;
      fVar34 = local_3c + local_3c;
      pfVar15 = (float *)(puVar29 + 1);
      uVar26 = 0;
LAB_004e896d:
      do {
        pfVar24[uVar26 * 8 + 7] = -1.0;
        if ((int)uVar20 < 1) goto LAB_004e8a30;
        pfVar12 = pfVar24 + uVar26 * 8;
        uVar23 = 0xffffffff;
        uVar19 = 0;
        fVar49 = 0.0;
        pfVar9 = pfVar15;
        fVar39 = fVar53;
        do {
          if (*pfVar9 != 0.0) {
            in_XMM5_Db = 0.0;
            in_XMM5_Da = *pfVar12 - pfVar9[-1];
            uVar47 = ((uint)in_XMM5_Da ^ uVar21) & -(uint)(in_XMM5_Da < 0.0);
            dVar36 = (double)(ulong)uVar47;
            fVar50 = (float)(~-(uint)(in_XMM5_Da < 0.0) & (uint)in_XMM5_Da | uVar47);
            in_XMM7 = ZEXT416((uint)fVar50);
            bVar2 = fVar50 < fVar39;
            if (fVar50 <= fVar39) {
              fVar39 = fVar50;
            }
            if (bVar2) {
              uVar23 = uVar19 & 0xffffffff;
            }
          }
          uVar19 = uVar19 + 1;
          pfVar9 = pfVar9 + 8;
        } while (uVar13 != uVar19);
        if (((-1 < (int)uVar23) && (fVar39 < fVar34 / fVar52)) &&
           ((float)puVar29[uVar23 * 8 + 7] <= 0.0 && (float)puVar29[uVar23 * 8 + 7] != 0.0)) {
          fVar39 = *pfVar12;
          fVar49 = pfVar12[1];
          fVar50 = pfVar12[2];
          fVar43 = pfVar12[3];
          in_XMM5_Da = pfVar12[4];
          in_XMM5_Db = pfVar12[5];
          fVar44 = pfVar12[6];
          fVar33 = pfVar12[7];
          pfVar12 = (float *)(puVar29 + uVar23 * 8 + 4);
          *pfVar12 = in_XMM5_Da;
          pfVar12[1] = in_XMM5_Db;
          pfVar12[2] = fVar44;
          pfVar12[3] = fVar33;
          pfVar12 = (float *)(puVar29 + uVar23 * 8);
          *pfVar12 = fVar39;
          pfVar12[1] = fVar49;
          pfVar12[2] = fVar50;
          pfVar12[3] = fVar43;
          pfVar24[uVar26 * 8 + 7] = 0.0;
          puVar29[uVar23 * 8 + 7] = 0;
        }
        dVar35 = (double)CONCAT44(fVar49,fVar39);
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar16);
      pfVar15 = (float *)(puVar29 + 7);
      uVar26 = 0;
      do {
        if (pfVar24[uVar26 * 8 + 7] <= 0.0 && pfVar24[uVar26 * 8 + 7] != 0.0) {
          pfVar12 = pfVar24 + uVar26 * 8;
          uVar19 = 0;
          pfVar9 = pfVar15;
          do {
            if (*pfVar9 <= 0.0 && *pfVar9 != 0.0) {
              fVar53 = *pfVar12;
              fVar34 = pfVar12[1];
              fVar52 = pfVar12[2];
              fVar39 = pfVar12[3];
              *(undefined1 (*) [16])(puVar29 + (uVar19 & 0xffffffff) * 8 + 4) =
                   *(undefined1 (*) [16])(pfVar12 + 4);
              pfVar12 = (float *)(puVar29 + (uVar19 & 0xffffffff) * 8);
              *pfVar12 = fVar53;
              pfVar12[1] = fVar34;
              pfVar12[2] = fVar52;
              pfVar12[3] = fVar39;
              pfVar24[uVar26 * 8 + 7] = 0.0;
              *pfVar9 = 1.0;
              break;
            }
            uVar19 = uVar19 + 1;
            pfVar9 = pfVar9 + 8;
          } while (uVar13 != uVar19);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar16);
    }
    fVar53 = DAT_005d9054;
    if (0 < (int)uVar20) {
      if (uVar20 == 1) {
        uVar13 = 0;
      }
      else {
        pfVar24 = (float *)(puVar29 + 0xf);
        uVar13 = 0;
        do {
          if (fVar53 == pfVar24[-8]) {
            pfVar24[-0xe] = 0.0;
          }
          if (fVar53 == *pfVar24) {
            pfVar24[-6] = 0.0;
          }
          uVar13 = uVar13 + 2;
          pfVar24 = pfVar24 + 0x10;
        } while ((uVar20 & 0xfffffffe) != uVar13);
      }
      if (((uVar20 & 1) != 0) && (DAT_005d9054 == (float)puVar29[uVar13 * 8 + 7])) {
        puVar29[uVar13 * 8 + 1] = 0;
      }
    }
  }
LAB_004e8ae5:
  local_78 = (ulong)(uint)fVar45;
  uStack_70 = CONCAT44(uVar17,uVar6);
  iVar10 = *(int *)(param_2 + 0x48);
  if ((long)iVar10 != 0) {
    local_38 = (double)(ulong)local_5c;
    (afStack_150 + lVar8 * -8 + -8)[0] = 7.21306e-39;
    (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
    dVar37 = log((double)fVar45 * _DAT_00652450);
    local_c0 = CONCAT44(local_c0._4_4_,(float)(dVar37 * _DAT_00652458));
    local_58._0_4_ = local_7c;
    (afStack_150 + lVar8 * -8 + -8)[0] = 7.213115e-39;
    (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
    dVar37 = log((double)local_7c);
    fVar53 = (float)(dVar37 * _DAT_00652e58 + DAT_005d90a0);
    if (fVar53 <= 0.0) {
      fVar53 = 0.0;
    }
    local_98 = ZEXT416((uint)fVar53);
    local_3c = (local_3c + local_3c) / (float)(int)uVar18;
    dVar37 = (double)local_3c;
    (afStack_150 + lVar8 * -8 + -8)[0] = 7.213231e-39;
    (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
    dVar37 = log(dVar37 * _DAT_00652450);
    auVar38._0_8_ = dVar37 * _DAT_00652458;
    auVar38._8_8_ = extraout_XMM0_Qb;
    local_a8._4_12_ = auVar38._4_12_;
    local_a8._0_4_ = (BADTYPE)auVar38._0_8_;
    dVar37 = (double)local_48._0_4_;
    (afStack_150 + lVar8 * -8 + -8)[0] = 7.213289e-39;
    (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
    dVar37 = log(dVar37 * _DAT_00652450);
    local_58 = ZEXT416(-(uint)(0.0 < (float)local_58._0_4_) & local_98._0_4_);
    uVar17 = local_a8._0_4_ & -(uint)(0.0 < local_3c);
    uVar46 = 0;
    uVar40 = 0;
    local_98 = ZEXT416(~-(uint)(0.0 < local_3c) & DAT_00652e10 | uVar17);
    auVar41 = ZEXT416(~-(uint)(0.0 < local_48._0_4_) & DAT_00652e10 |
                      (uint)(float)(dVar37 * _DAT_00652458) & -(uint)(0.0 < local_48._0_4_));
    local_158 = CONCAT44(local_148._4_4_,local_148._4_4_);
    afStack_150[0] = local_148._4_4_;
    afStack_150[1] = local_148._4_4_;
    local_b8 = local_b8 + 3;
    local_48 = (double)(long)iVar10;
    uVar6 = DAT_00652e10;
    local_a8 = auVar41;
    do {
      local_48 = (double)((long)local_48 + -1);
      uVar18 = *(uint *)(*(long *)(param_2 + 0x40) + 8 + (long)local_48 * 0x10);
      if (7 < uVar18) goto LAB_004e8c52;
      puVar32 = (undefined8 *)(*(long *)(param_2 + 0x40) + (long)local_48 * 0x10);
      switch(uVar18) {
      case 0:
        plVar27 = (long *)*puVar32;
        uVar13 = local_a8._0_8_;
        goto LAB_004e8c46;
      case 1:
        plVar27 = (long *)*puVar32;
        uVar13 = local_58._0_8_;
        goto LAB_004e8c46;
      case 2:
        if (DAT_005d9058 < (float)local_78) {
          plVar27 = (long *)*puVar32;
          uVar13 = local_c0 & 0xffffffff;
          goto LAB_004e8c46;
        }
        break;
      case 3:
        if (0 < (int)local_38._0_4_) {
          uVar13 = 0;
          pfVar24 = local_b8;
          do {
            local_138 = (float *)CONCAT44(local_138._4_4_,1);
            local_130 = (float *)CONCAT44(local_130._4_4_,(float)(int)uVar13);
            local_128 = (float *)CONCAT44(local_128._4_4_,1);
            local_120 = (float *)CONCAT44(local_120._4_4_,pfVar24[-3]);
            local_118 = (float *)CONCAT44(local_118._4_4_,1);
            local_110 = (float *)CONCAT44(local_110._4_4_,pfVar24[-2] + pfVar24[-2]);
            local_108 = (float *)CONCAT44(local_108._4_4_,1);
            local_100 = (float *)CONCAT44(local_100._4_4_,pfVar24[-1] + pfVar24[-1]);
            local_f8 = (float *)CONCAT44(local_f8._4_4_,1);
            fVar53 = *pfVar24 + *pfVar24;
            local_f0 = (float *)CONCAT44(local_f0._4_4_,fVar53);
            plVar27 = (long *)*puVar32;
            (afStack_150 + lVar8 * -8 + -8)[0] = 7.213892e-39;
            (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
            outlet_list((ulong)(uint)fVar53,CONCAT44(uVar40,uVar6),auVar41._0_8_,
                        CONCAT44(uVar46,uVar17),dVar35,CONCAT44(in_XMM5_Db,in_XMM5_Da),dVar36,
                        in_XMM7._0_8_,plVar27,0,5,&local_138,(char *)puVar29,pfVar15);
            uVar13 = uVar13 + 1;
            pfVar24 = pfVar24 + 8;
          } while (local_38 != (double)uVar13);
        }
        break;
      case 4:
        if (0 < *(int *)(param_2 + 0x428)) {
          lVar28 = 0;
          lVar31 = 0;
          do {
            local_138 = (float *)CONCAT44(local_138._4_4_,1);
            local_130 = (float *)CONCAT44(local_130._4_4_,(float)(int)lVar31);
            local_128 = (float *)CONCAT44(local_128._4_4_,1);
            lVar14 = *(long *)(param_2 + 0x420);
            local_120 = (float *)CONCAT44(local_120._4_4_,*(undefined4 *)(lVar14 + lVar28));
            local_118 = (float *)CONCAT44(local_118._4_4_,1);
            fVar53 = *(float *)(lVar14 + 4 + lVar28);
            local_110 = (float *)CONCAT44(local_110._4_4_,fVar53 + fVar53);
            local_108 = (float *)CONCAT44(local_108._4_4_,1);
            uVar18 = *(uint *)(lVar14 + 0x1c + lVar28);
            local_100 = (float *)CONCAT44(local_100._4_4_,uVar18);
            plVar27 = (long *)*puVar32;
            (afStack_150 + lVar8 * -8 + -8)[0] = 7.214151e-39;
            (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
            outlet_list((ulong)uVar18,CONCAT44(uVar40,uVar6),auVar41._0_8_,CONCAT44(uVar46,uVar17),
                        dVar35,CONCAT44(in_XMM5_Db,in_XMM5_Da),dVar36,in_XMM7._0_8_,plVar27,0,4,
                        &local_138,(char *)puVar29,pfVar15);
            lVar31 = lVar31 + 1;
            lVar28 = lVar28 + 0x20;
          } while (lVar31 < *(int *)(param_2 + 0x428));
        }
        break;
      case 5:
        plVar27 = (long *)*puVar32;
        uVar4 = local_98._0_8_;
        (afStack_150 + lVar8 * -8 + -8)[0] = 7.214226e-39;
        (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
        sigmund_outspectrum(uVar4,CONCAT44(uVar40,uVar6),auVar41._0_8_,CONCAT44(uVar46,uVar17),
                            dVar35,CONCAT44(in_XMM5_Db,in_XMM5_Da),dVar36,in_XMM7._0_8_,param_2,
                            plVar27);
        break;
      case 6:
        plVar27 = (long *)*puVar32;
        uVar13 = local_148;
        goto LAB_004e8c46;
      case 7:
        plVar27 = (long *)*puVar32;
        uVar13 = local_158;
LAB_004e8c46:
        (afStack_150 + lVar8 * -8 + -8)[0] = 7.213496e-39;
        (afStack_150 + lVar8 * -8 + -8)[1] = 0.0;
        outlet_float(uVar13,CONCAT44(uVar40,uVar6),auVar41._0_8_,CONCAT44(uVar46,uVar17),dVar35,
                     CONCAT44(in_XMM5_Db,in_XMM5_Da),dVar36,in_XMM7._0_8_,plVar27);
      }
LAB_004e8c52:
    } while (SUB84(local_48,0) != 0);
  }
  return;
}


