// Function : bonk_perform
// Namespace: 
// Entry    : 004db980
// Prototype: long bonk_perform(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004db980 - 004dc8a9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long bonk_perform(undefined8 param_1,double param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  float *pfVar1;
  float *pfVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  long lVar15;
  bool bVar16;
  double dVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  float *pfVar28;
  undefined4 *puVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  double *pdVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  float *pfVar43;
  uint uVar44;
  int *piVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined4 *puVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  uint uVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  int local_8c;
  
  lVar15 = *(long *)(param_9 + 8);
  uVar44 = *(uint *)(param_9 + 0x10);
  iVar30 = *(int *)(lVar15 + 0x263c);
  if (iVar30 < (int)uVar44) {
    uVar14 = *(uint *)(lVar15 + 0x2630);
    if (iVar30 < 1) {
      iVar30 = 0;
    }
    else {
      uVar44 = uVar44 - iVar30;
      *(undefined4 *)(lVar15 + 0x263c) = 0;
    }
    if (0 < (int)uVar44) {
      uVar55 = *(uint *)(lVar15 + 0x2638);
      uVar38 = *(uint *)(lVar15 + 0x48);
LAB_004dba3d:
      do {
        uVar18 = uVar38 - uVar55;
        if ((int)uVar44 < (int)(uVar38 - uVar55)) {
          uVar18 = uVar44;
        }
        if ((0 < (int)uVar14) && (0 < (int)uVar18)) {
          lVar58 = (long)(int)uVar55;
          lVar56 = (long)iVar30;
          lVar47 = *(long *)(lVar15 + 0x2628);
          uVar49 = (ulong)(uVar18 - 1);
          uVar53 = uVar49 + 1;
          uVar34 = uVar53 & 0x1fffffff8;
          uVar35 = (uVar34 - 8 >> 3) + 1;
          uVar57 = (ulong)((uint)uVar35 & 3);
          uVar52 = 0;
          do {
            lVar26 = *(long *)(lVar47 + 0x2588);
            lVar48 = *(long *)(lVar47 + 0x2590);
            puVar50 = (undefined4 *)(lVar58 * 4 + lVar26);
            puVar29 = (undefined4 *)(lVar48 + lVar56 * 4);
            if ((uVar18 - 1 < 7) ||
               ((puVar50 < (undefined4 *)(lVar48 + (lVar56 + uVar49) * 4 + 4) &&
                (puVar29 < (undefined4 *)((lVar58 + uVar49) * 4 + 4 + lVar26))))) {
              uVar54 = 0;
LAB_004dbb66:
              uVar31 = ~uVar54;
              if ((uVar18 & 7) != 0) {
                iVar24 = 0;
                do {
                  uVar11 = *puVar29;
                  puVar29 = puVar29 + 1;
                  *puVar50 = uVar11;
                  puVar50 = puVar50 + 1;
                  iVar24 = iVar24 + -1;
                } while (-(uVar18 & 7) != iVar24);
                uVar54 = uVar54 - iVar24;
              }
              if (6 < uVar31 + uVar18) {
                lVar26 = 0;
                do {
                  puVar50[lVar26] = puVar29[lVar26];
                  puVar50[lVar26 + 1] = puVar29[lVar26 + 1];
                  puVar50[lVar26 + 2] = puVar29[lVar26 + 2];
                  puVar50[lVar26 + 3] = puVar29[lVar26 + 3];
                  puVar50[lVar26 + 4] = puVar29[lVar26 + 4];
                  puVar50[lVar26 + 5] = puVar29[lVar26 + 5];
                  puVar50[lVar26 + 6] = puVar29[lVar26 + 6];
                  puVar50[lVar26 + 7] = puVar29[lVar26 + 7];
                  lVar26 = lVar26 + 8;
                } while (uVar18 - uVar54 != (int)lVar26);
              }
            }
            else {
              if (uVar34 - 8 < 0x18) {
                lVar39 = 0;
              }
              else {
                lVar40 = lVar48 + lVar56 * 4;
                lVar42 = lVar58 * 4 + 0x70 + lVar26;
                lVar39 = 0;
                uVar27 = uVar35 & 0x3ffffffffffffffc;
                do {
                  puVar4 = (undefined8 *)(lVar40 + lVar39 * 4);
                  uVar12 = puVar4[1];
                  puVar5 = (undefined8 *)(lVar40 + 0x10 + lVar39 * 4);
                  uVar21 = *puVar5;
                  uVar22 = puVar5[1];
                  puVar5 = (undefined8 *)(lVar42 + -0x70 + lVar39 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar12;
                  puVar4 = (undefined8 *)(lVar42 + -0x60 + lVar39 * 4);
                  *puVar4 = uVar21;
                  puVar4[1] = uVar22;
                  puVar4 = (undefined8 *)(lVar40 + 0x20 + lVar39 * 4);
                  uVar12 = puVar4[1];
                  puVar5 = (undefined8 *)(lVar40 + 0x30 + lVar39 * 4);
                  uVar21 = *puVar5;
                  uVar22 = puVar5[1];
                  puVar5 = (undefined8 *)(lVar42 + -0x50 + lVar39 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar12;
                  puVar4 = (undefined8 *)(lVar42 + -0x40 + lVar39 * 4);
                  *puVar4 = uVar21;
                  puVar4[1] = uVar22;
                  puVar4 = (undefined8 *)(lVar40 + 0x40 + lVar39 * 4);
                  uVar12 = puVar4[1];
                  puVar5 = (undefined8 *)(lVar40 + 0x50 + lVar39 * 4);
                  uVar21 = *puVar5;
                  uVar22 = puVar5[1];
                  puVar5 = (undefined8 *)(lVar42 + -0x30 + lVar39 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar12;
                  puVar4 = (undefined8 *)(lVar42 + -0x20 + lVar39 * 4);
                  *puVar4 = uVar21;
                  puVar4[1] = uVar22;
                  puVar4 = (undefined8 *)(lVar40 + 0x60 + lVar39 * 4);
                  uVar12 = puVar4[1];
                  pdVar36 = (double *)(lVar40 + 0x70 + lVar39 * 4);
                  param_2 = *pdVar36;
                  dVar17 = pdVar36[1];
                  puVar5 = (undefined8 *)(lVar42 + -0x10 + lVar39 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar12;
                  pdVar36 = (double *)(lVar42 + lVar39 * 4);
                  *pdVar36 = param_2;
                  pdVar36[1] = dVar17;
                  lVar39 = lVar39 + 0x20;
                  uVar27 = uVar27 - 4;
                } while (uVar27 != 0);
              }
              if (uVar57 != 0) {
                lVar26 = lVar58 * 4 + lVar26 + lVar39 * 4;
                lVar48 = lVar48 + lVar56 * 4 + lVar39 * 4;
                lVar40 = 0;
                do {
                  puVar4 = (undefined8 *)(lVar48 + lVar40);
                  uVar12 = puVar4[1];
                  pdVar36 = (double *)(lVar48 + 0x10 + lVar40);
                  param_2 = *pdVar36;
                  dVar17 = pdVar36[1];
                  puVar5 = (undefined8 *)(lVar26 + lVar40);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar12;
                  pdVar36 = (double *)(lVar26 + 0x10 + lVar40);
                  *pdVar36 = param_2;
                  pdVar36[1] = dVar17;
                  lVar40 = lVar40 + 0x20;
                } while (uVar57 * 0x20 != lVar40);
              }
              if (uVar53 != uVar34) {
                puVar29 = puVar29 + uVar34;
                puVar50 = puVar50 + uVar34;
                uVar54 = (uint)uVar53 & 0xfffffff8;
                goto LAB_004dbb66;
              }
            }
            uVar52 = uVar52 + 1;
            lVar47 = lVar47 + 0x2598;
          } while (uVar52 != uVar14);
        }
        uVar55 = uVar55 + uVar18;
        *(uint *)(lVar15 + 0x2638) = uVar55;
        if (uVar55 == uVar38) {
          iVar24 = *(int *)(lVar15 + 0x2630);
          uVar55 = *(uint *)(lVar15 + 0x50);
          iVar25 = *(int *)(lVar15 + 0x2658);
          iVar37 = iVar25 + 1;
          if (6 < (long)iVar25) {
            iVar37 = 0;
          }
          *(int *)(lVar15 + 0x2658) = iVar37;
          iVar32 = iVar37 - *(int *)(lVar15 + 0x90);
          iVar41 = (iVar37 + 8) - *(int *)(lVar15 + 0x90);
          if (-1 < iVar32) {
            iVar41 = iVar32;
          }
          if (*(int *)(lVar15 + 0x78) != 0) {
            qrsqrt(*(float *)(lVar15 + 100));
            qrsqrt(extraout_XMM0_Da);
            qrsqrt(*(float *)(lVar15 + 0x68));
            qrsqrt(extraout_XMM0_Da_00);
          }
          fVar78 = 0.0;
          if ((0 < iVar24) && (0 < (int)uVar55)) {
            pfVar28 = *(float **)(lVar15 + 0x2628);
            fVar78 = 0.0;
            local_8c = 0;
            do {
              piVar45 = *(int **)(*(long *)(lVar15 + 0x98) + 0x18);
              uVar38 = 0;
              pfVar43 = pfVar28;
              do {
                iVar32 = *piVar45;
                if (iVar32 == 0) {
                  fVar61 = 0.0;
                  fVar59 = 0.0;
                  fVar69 = 0.0;
                  fVar60 = 0.0;
                }
                else {
                  if (piVar45[3] < 1) {
                    fVar69 = 0.0;
                    fVar60 = 0.0;
                  }
                  else {
                    lVar56 = (long)piVar45[2] * 4 + *(long *)(pfVar28 + 0x962);
                    lVar47 = *(long *)(piVar45 + 6);
                    uVar53 = (ulong)(iVar32 - 1U) + 1;
                    uVar34 = uVar53 & 0x1fffffff8;
                    iVar33 = 0;
                    fVar69 = 0.0;
                    do {
                      fVar59 = 0.0;
                      fVar60 = 0.0;
                      lVar26 = lVar47;
                      lVar58 = lVar56;
                      iVar46 = iVar32;
                      if (iVar32 - 1U < 7) {
LAB_004dc032:
                        lVar48 = 0;
                        do {
                          uVar12 = *(undefined8 *)(lVar26 + lVar48 * 8);
                          fVar61 = *(float *)(lVar58 + lVar48 * 4);
                          fVar59 = fVar59 + fVar61 * (float)uVar12;
                          fVar60 = fVar60 + fVar61 * (float)((ulong)uVar12 >> 0x20);
                          lVar48 = lVar48 + 1;
                        } while (iVar46 != (int)lVar48);
                      }
                      else {
                        lVar58 = lVar56 + uVar34 * 4;
                        fVar70 = 0.0;
                        fVar71 = 0.0;
                        fVar72 = 0.0;
                        fVar73 = 0.0;
                        uVar35 = 0;
                        fVar74 = 0.0;
                        fVar75 = 0.0;
                        fVar76 = 0.0;
                        fVar77 = 0.0;
                        fVar63 = 0.0;
                        fVar64 = 0.0;
                        fVar65 = 0.0;
                        fVar66 = 0.0;
                        fVar59 = 0.0;
                        fVar61 = 0.0;
                        fVar60 = 0.0;
                        fVar62 = 0.0;
                        do {
                          pfVar1 = (float *)(lVar56 + uVar35 * 4);
                          pfVar6 = (float *)(lVar56 + 0x10 + uVar35 * 4);
                          pfVar2 = (float *)(lVar47 + uVar35 * 8);
                          pfVar7 = (float *)(lVar47 + 0x10 + uVar35 * 8);
                          pfVar8 = (float *)(lVar47 + 0x20 + uVar35 * 8);
                          auVar13 = *(undefined1 (*) [16])(lVar47 + 0x30 + uVar35 * 8);
                          param_6 = auVar13._0_8_;
                          fVar67 = *pfVar2 * *pfVar1;
                          fVar68 = pfVar2[2] * pfVar1[1];
                          param_8 = CONCAT44(fVar68,fVar67);
                          fVar63 = fVar63 + fVar67;
                          fVar64 = fVar64 + fVar68;
                          param_5 = CONCAT44(fVar64,fVar63);
                          fVar65 = fVar65 + *pfVar7 * pfVar1[2];
                          fVar66 = fVar66 + pfVar7[2] * pfVar1[3];
                          fVar67 = *pfVar8 * *pfVar6;
                          fVar68 = pfVar8[2] * pfVar6[1];
                          param_7 = CONCAT44(fVar68,fVar67);
                          fVar59 = fVar59 + fVar67;
                          fVar61 = fVar61 + fVar68;
                          fVar60 = fVar60 + auVar13._0_4_ * pfVar6[2];
                          fVar62 = fVar62 + auVar13._8_4_ * pfVar6[3];
                          fVar70 = fVar70 + pfVar2[1] * *pfVar1;
                          fVar71 = fVar71 + pfVar2[3] * pfVar1[1];
                          fVar72 = fVar72 + pfVar7[1] * pfVar1[2];
                          fVar73 = fVar73 + pfVar7[3] * pfVar1[3];
                          fVar74 = fVar74 + pfVar8[1] * *pfVar6;
                          fVar75 = fVar75 + pfVar8[3] * pfVar6[1];
                          fVar76 = fVar76 + auVar13._4_4_ * pfVar6[2];
                          fVar77 = fVar77 + auVar13._12_4_ * pfVar6[3];
                          uVar35 = uVar35 + 8;
                        } while (uVar34 != uVar35);
                        fVar59 = fVar62 + fVar66 + fVar61 + fVar64 +
                                 fVar60 + fVar65 + fVar59 + fVar63;
                        fVar60 = fVar77 + fVar73 + fVar75 + fVar71 +
                                 fVar76 + fVar72 + fVar74 + fVar70;
                        lVar26 = lVar47 + uVar34 * 8;
                        iVar46 = iVar32 - (int)uVar34;
                        if (uVar53 != uVar34) goto LAB_004dc032;
                      }
                      fVar60 = fVar60 * fVar60;
                      fVar69 = fVar60 + fVar69 + fVar59 * fVar59;
                      lVar56 = lVar56 + (long)piVar45[1] * 4;
                      iVar33 = iVar33 + 1;
                    } while (iVar33 != piVar45[3]);
                  }
                  fVar62 = pfVar43[(long)iVar25 + 4];
                  iVar32 = *(int *)(lVar15 + 0x2640);
                  if (iVar32 == 0) {
                    pfVar43[1] = fVar62;
                  }
                  fVar59 = pfVar43[3];
                  fVar61 = pfVar43[(long)iVar41 + 4];
                  param_2 = (double)(ulong)(uint)fVar61;
                  if (fVar61 < fVar69) {
                    dVar17 = (double)fVar69 / ((double)fVar61 + _DAT_00651f80);
                    if (*(int *)(lVar15 + 0x78) == 0) {
                      param_2 = (double)fVar78 + DAT_00651e70 + dVar17;
                      fVar78 = (float)param_2;
                    }
                    else {
                      qrsqrt((float)dVar17);
                      qrsqrt(extraout_XMM0_Da_01);
                      param_2 = (double)fVar78 + DAT_00651e70 + (double)extraout_XMM0_Da_02;
                      fVar78 = (float)param_2;
                      iVar32 = *(int *)(lVar15 + 0x2640);
                    }
                  }
                  if ((iVar32 == 0) && (*(int *)(lVar15 + 0x74) <= (int)fVar59)) {
                    fVar62 = fVar62 * *(float *)(lVar15 + 0x70);
                  }
                  fVar59 = (float)((int)fVar59 + 1);
                  fVar61 = fVar62;
                  if (fVar62 <= fVar69) {
                    fVar61 = fVar69;
                  }
                  if (fVar62 < fVar69) {
                    fVar59 = 1.4013e-45;
                  }
                }
                param_4 = (ulong)(uint)fVar61;
                param_3 = CONCAT44(fVar60,fVar69);
                pfVar43[3] = fVar59;
                pfVar43[(long)iVar37 + 4] = fVar61;
                *pfVar43 = fVar69;
                uVar38 = uVar38 + 1;
                piVar45 = piVar45 + 8;
                pfVar43 = pfVar43 + 0xc;
              } while (uVar38 != uVar55);
              local_8c = local_8c + 1;
              pfVar28 = pfVar28 + 0x966;
            } while (local_8c != iVar24);
          }
          if (*(int *)(lVar15 + 0x2640) == 0) {
            if (fVar78 < *(float *)(lVar15 + 100) || fVar78 == *(float *)(lVar15 + 100))
            goto LAB_004dc340;
            if (*(int *)(lVar15 + 0x2648) != 0) {
              post((double)fVar78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "attack: growth = %f");
            }
            *(undefined8 *)(lVar15 + 0x2640) = 1;
            if ((0 < iVar24) && (uVar55 != 0)) {
              puVar29 = *(undefined4 **)(lVar15 + 0x2628);
              iVar25 = 0;
              do {
                uVar38 = uVar55;
                puVar50 = puVar29;
                if ((uVar55 & 3) != 0) {
                  uVar38 = 0;
                  do {
                    puVar50[(long)iVar37 + 4] = *puVar50;
                    puVar50[3] = 0;
                    puVar50 = puVar50 + 0xc;
                    uVar38 = uVar38 + 1;
                  } while ((uVar55 & 3) != uVar38);
                  uVar38 = uVar55 - uVar38;
                }
                if (2 < uVar55 - 1) {
                  do {
                    puVar50[(long)iVar37 + 4] = *puVar50;
                    puVar50[3] = 0;
                    puVar50[(long)iVar37 + 0x10] = puVar50[0xc];
                    puVar50[0xf] = 0;
                    puVar50[(long)iVar37 + 0x1c] = puVar50[0x18];
                    puVar50[0x1b] = 0;
                    puVar50[(long)iVar37 + 0x28] = puVar50[0x24];
                    puVar50[0x27] = 0;
                    puVar50 = puVar50 + 0x30;
                    uVar38 = uVar38 - 4;
                  } while (uVar38 != 0);
                }
                iVar25 = iVar25 + 1;
                puVar29 = puVar29 + 0x966;
              } while (iVar25 != iVar24);
              goto LAB_004dc340;
            }
            if (*(int *)(lVar15 + 0x2654) != 0) goto LAB_004dc470;
          }
          else {
            if ((((*(int *)(lVar15 + 0x2640) < 5) && (*(float *)(lVar15 + 0x68) <= fVar78)) ||
                (*(int *)(lVar15 + 0x2654) != 0)) || (*(int *)(lVar15 + 0x2644) != 0)) {
              fVar59 = *(float *)(lVar15 + 0x68);
            }
            else {
              if ((0 < iVar24) && (uVar55 != 0)) {
                lVar56 = (long)iVar37;
                lVar47 = *(long *)(lVar15 + 0x2628);
                iVar25 = 0;
                do {
                  uVar38 = uVar55;
                  lVar58 = lVar47;
                  if ((uVar55 & 7) != 0) {
                    uVar38 = 0;
                    do {
                      *(undefined4 *)(lVar58 + 8) = *(undefined4 *)(lVar58 + 0x10 + lVar56 * 4);
                      lVar58 = lVar58 + 0x30;
                      uVar38 = uVar38 + 1;
                    } while ((uVar55 & 7) != uVar38);
                    uVar38 = uVar55 - uVar38;
                  }
                  if (6 < uVar55 - 1) {
                    lVar58 = lVar58 + 0x160;
                    do {
                      *(undefined4 *)(lVar58 + -0x158) =
                           *(undefined4 *)(lVar58 + -0x150 + lVar56 * 4);
                      *(undefined4 *)(lVar58 + -0x128) =
                           *(undefined4 *)(lVar58 + -0x120 + lVar56 * 4);
                      *(undefined4 *)(lVar58 + -0xf8) = *(undefined4 *)(lVar58 + -0xf0 + lVar56 * 4)
                      ;
                      *(undefined4 *)(lVar58 + -200) = *(undefined4 *)(lVar58 + -0xc0 + lVar56 * 4);
                      *(undefined4 *)(lVar58 + -0x98) = *(undefined4 *)(lVar58 + -0x90 + lVar56 * 4)
                      ;
                      *(undefined4 *)(lVar58 + -0x68) = *(undefined4 *)(lVar58 + -0x60 + lVar56 * 4)
                      ;
                      *(undefined4 *)(lVar58 + -0x38) = *(undefined4 *)(lVar58 + -0x30 + lVar56 * 4)
                      ;
                      *(undefined4 *)(lVar58 + -8) = *(undefined4 *)(lVar58 + lVar56 * 4);
                      lVar58 = lVar58 + 0x180;
                      uVar38 = uVar38 - 8;
                    } while (uVar38 != 0);
                  }
                  iVar25 = iVar25 + 1;
                  lVar47 = lVar47 + 0x2598;
                } while (iVar25 != iVar24);
              }
              *(undefined4 *)(lVar15 + 0x2660) = 1;
              clock_delay(0.0,*(double **)(lVar15 + 0x38));
              fVar59 = *(float *)(lVar15 + 0x68);
            }
            iVar25 = 0;
            if (fVar59 <= fVar78) {
              iVar25 = *(int *)(lVar15 + 0x2640) + 1;
            }
            *(int *)(lVar15 + 0x2640) = iVar25;
LAB_004dc340:
            if (*(int *)(lVar15 + 0x2654) != 0) {
              if ((0 < iVar24) && (uVar55 != 0)) {
                puVar29 = *(undefined4 **)(lVar15 + 0x2628);
                iVar25 = 0;
                do {
                  uVar38 = uVar55;
                  puVar50 = puVar29;
                  if ((uVar55 & 7) != 0) {
                    uVar38 = 0;
                    do {
                      puVar50[2] = *puVar50;
                      puVar50 = puVar50 + 0xc;
                      uVar38 = uVar38 + 1;
                    } while ((uVar55 & 7) != uVar38);
                    uVar38 = uVar55 - uVar38;
                  }
                  if (6 < uVar55 - 1) {
                    do {
                      param_2 = (double)(ulong)(uint)puVar50[0xc];
                      puVar50[2] = *puVar50;
                      puVar50[0xe] = puVar50[0xc];
                      puVar50[0x1a] = puVar50[0x18];
                      puVar50[0x26] = puVar50[0x24];
                      puVar50[0x32] = puVar50[0x30];
                      puVar50[0x3e] = puVar50[0x3c];
                      puVar50[0x4a] = puVar50[0x48];
                      puVar50[0x56] = puVar50[0x54];
                      puVar50 = puVar50 + 0x60;
                      uVar38 = uVar38 - 8;
                    } while (uVar38 != 0);
                  }
                  iVar25 = iVar25 + 1;
                  puVar29 = puVar29 + 0x966;
                } while (iVar25 != iVar24);
              }
LAB_004dc470:
              *(undefined4 *)(lVar15 + 0x2660) = 0;
              clock_delay(0.0,*(double **)(lVar15 + 0x38));
            }
          }
          *(float *)(lVar15 + 0x80) = *(float *)(lVar15 + 0x80) * *(float *)(lVar15 + 0x7c);
          uVar52 = *(uint *)(lVar15 + 0x4c);
          lVar47 = (long)(int)uVar52;
          uVar38 = *(uint *)(lVar15 + 0x48);
          uVar55 = 0;
          iVar24 = uVar52 - uVar38;
          if (iVar24 == 0 || (int)uVar52 < (int)uVar38) {
            iVar24 = 0;
          }
          *(int *)(lVar15 + 0x263c) = iVar24;
          uVar54 = uVar44;
          if ((int)uVar52 < (int)uVar38) {
            uVar55 = uVar38 - uVar52;
            if ((int)uVar14 < 1) {
              uVar54 = 0;
            }
            else {
              uVar54 = uVar14;
              if (uVar55 == 0) {
                uVar55 = 0;
              }
              else {
                lVar56 = *(long *)(lVar15 + 0x2628);
                uVar53 = (ulong)(~uVar52 + uVar38);
                uVar35 = uVar53 + 1 & 0x1fffffff8;
                uVar57 = (uVar35 - 8 >> 3) + 1;
                uVar34 = (ulong)((uint)uVar57 & 3);
                uVar44 = 0;
                do {
                  puVar50 = *(undefined4 **)(lVar56 + 0x2588);
                  puVar29 = puVar50 + lVar47;
                  uVar31 = uVar55;
                  if ((~uVar52 + uVar38 < 7) ||
                     ((puVar50 < puVar50 + lVar47 + uVar53 + 1 && (puVar29 < puVar50 + uVar53 + 1)))
                     ) {
joined_r0x004dc5a2:
                    uVar23 = uVar31 - 1;
                    if ((uVar31 & 7) != 0) {
                      uVar51 = 0;
                      do {
                        uVar11 = *puVar29;
                        puVar29 = puVar29 + 1;
                        *puVar50 = uVar11;
                        puVar50 = puVar50 + 1;
                        uVar51 = uVar51 + 1;
                      } while ((uVar31 & 7) != uVar51);
                      uVar31 = uVar31 - uVar51;
                    }
                    if (6 < uVar23) {
                      lVar58 = 0;
                      do {
                        puVar50[lVar58] = puVar29[lVar58];
                        puVar50[lVar58 + 1] = puVar29[lVar58 + 1];
                        puVar50[lVar58 + 2] = puVar29[lVar58 + 2];
                        puVar50[lVar58 + 3] = puVar29[lVar58 + 3];
                        puVar50[lVar58 + 4] = puVar29[lVar58 + 4];
                        puVar50[lVar58 + 5] = puVar29[lVar58 + 5];
                        puVar50[lVar58 + 6] = puVar29[lVar58 + 6];
                        puVar50[lVar58 + 7] = puVar29[lVar58 + 7];
                        lVar58 = lVar58 + 8;
                      } while (uVar31 != (uint)lVar58);
                    }
                  }
                  else {
                    if (uVar35 - 8 < 0x18) {
                      lVar58 = 0;
                    }
                    else {
                      lVar58 = 0;
                      uVar49 = uVar57 & 0x3ffffffffffffffc;
                      do {
                        uVar12 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58) + 8);
                        uVar21 = *(undefined8 *)(puVar50 + lVar47 + lVar58 + 4);
                        uVar22 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58 + 4) + 8);
                        *(undefined8 *)(puVar50 + lVar58) =
                             *(undefined8 *)(puVar50 + lVar47 + lVar58);
                        *(undefined8 *)((long)(puVar50 + lVar58) + 8) = uVar12;
                        *(undefined8 *)(puVar50 + lVar58 + 4) = uVar21;
                        *(undefined8 *)((long)(puVar50 + lVar58 + 4) + 8) = uVar22;
                        uVar12 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58 + 8) + 8);
                        uVar21 = *(undefined8 *)(puVar50 + lVar47 + lVar58 + 0xc);
                        uVar22 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58 + 0xc) + 8);
                        *(undefined8 *)(puVar50 + lVar58 + 8) =
                             *(undefined8 *)(puVar50 + lVar47 + lVar58 + 8);
                        *(undefined8 *)((long)(puVar50 + lVar58 + 8) + 8) = uVar12;
                        *(undefined8 *)(puVar50 + lVar58 + 0xc) = uVar21;
                        *(undefined8 *)((long)(puVar50 + lVar58 + 0xc) + 8) = uVar22;
                        uVar12 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58 + 0x10) + 8);
                        uVar21 = *(undefined8 *)(puVar50 + lVar47 + lVar58 + 0x14);
                        uVar22 = *(undefined8 *)((long)(puVar50 + lVar47 + lVar58 + 0x14) + 8);
                        *(undefined8 *)(puVar50 + lVar58 + 0x10) =
                             *(undefined8 *)(puVar50 + lVar47 + lVar58 + 0x10);
                        *(undefined8 *)((long)(puVar50 + lVar58 + 0x10) + 8) = uVar12;
                        *(undefined8 *)(puVar50 + lVar58 + 0x14) = uVar21;
                        *(undefined8 *)((long)(puVar50 + lVar58 + 0x14) + 8) = uVar22;
                        puVar10 = puVar50 + lVar47 + lVar58 + 0x18;
                        uVar11 = puVar10[1];
                        uVar19 = puVar10[2];
                        uVar20 = puVar10[3];
                        param_2 = *(double *)(puVar50 + lVar47 + lVar58 + 0x1c);
                        dVar17 = *(double *)((long)(puVar50 + lVar47 + lVar58 + 0x1c) + 8);
                        puVar9 = puVar50 + lVar58 + 0x18;
                        *puVar9 = *puVar10;
                        puVar9[1] = uVar11;
                        puVar9[2] = uVar19;
                        puVar9[3] = uVar20;
                        *(double *)(puVar50 + lVar58 + 0x1c) = param_2;
                        *(double *)((long)(puVar50 + lVar58 + 0x1c) + 8) = dVar17;
                        lVar58 = lVar58 + 0x20;
                        uVar49 = uVar49 - 4;
                      } while (uVar49 != 0);
                    }
                    if (uVar34 != 0) {
                      pdVar36 = (double *)(puVar50 + lVar58 + 4);
                      uVar49 = uVar34;
                      do {
                        puVar10 = (undefined4 *)((long)pdVar36 + lVar47 * 4 + -0x10);
                        uVar11 = puVar10[1];
                        uVar19 = puVar10[2];
                        uVar20 = puVar10[3];
                        pdVar3 = (double *)((long)pdVar36 + lVar47 * 4);
                        param_2 = *pdVar3;
                        dVar17 = pdVar3[1];
                        *(undefined4 *)(pdVar36 + -2) = *puVar10;
                        *(undefined4 *)((long)pdVar36 + -0xc) = uVar11;
                        *(undefined4 *)(pdVar36 + -1) = uVar19;
                        *(undefined4 *)((long)pdVar36 + -4) = uVar20;
                        *pdVar36 = param_2;
                        pdVar36[1] = dVar17;
                        pdVar36 = pdVar36 + 4;
                        uVar49 = uVar49 - 1;
                      } while (uVar49 != 0);
                    }
                    if (uVar53 + 1 != uVar35) {
                      puVar29 = puVar29 + uVar35;
                      puVar50 = puVar50 + uVar35;
                      uVar31 = uVar55 - (int)uVar35;
                      goto joined_r0x004dc5a2;
                    }
                  }
                  uVar44 = uVar44 + 1;
                  lVar56 = lVar56 + 0x2598;
                } while (uVar44 != uVar14);
              }
            }
          }
          *(uint *)(lVar15 + 0x2638) = uVar55;
          iVar30 = iVar30 + uVar18;
          uVar44 = uVar54 - uVar18;
          if (!(uVar54 - uVar18 != 0 && (int)uVar18 <= (int)uVar54)) break;
          goto LAB_004dba3d;
        }
        iVar30 = iVar30 + uVar18;
        uVar52 = uVar44 - uVar18;
        bVar16 = (int)uVar44 < (int)uVar18;
        uVar44 = uVar52;
      } while (!(uVar52 == 0 || bVar16));
    }
  }
  else {
    *(uint *)(lVar15 + 0x263c) = iVar30 - uVar44;
  }
  return param_9 + 0x18;
}


