// Function : ex_if
// Namespace: 
// Entry    : 005d0eb0
// Prototype: ulong * ex_if(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong * param_10, long * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005d0eb0 - 005d1e0b


ulong * ex_if(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,ulong *param_10,long *param_11,float *param_12,char *param_13,
             undefined8 param_14)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  undefined *puVar17;
  float *pfVar18;
  undefined8 uVar19;
  ulong uVar20;
  uint uVar21;
  char *pcVar22;
  float *pfVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  float *pfVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar28;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar30;
  float fVar31;
  
  puVar17 = (undefined *)((ulong)param_13 & 0xffffffff);
  puVar11 = ex_eval(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10,param_12,
                    (undefined *)((ulong)param_13 & 0xffffffff),param_13,param_14);
  lVar12 = *(long *)(param_12 + 2);
  uVar30 = extraout_XMM0_Da;
  uVar29 = extraout_XMM0_Db;
  if (lVar12 - 1U < 0xf) {
    pfVar14 = param_12 + 8;
    switch(lVar12) {
    case 1:
      if (*(long *)param_12 != 0) goto LAB_005d0f4c;
LAB_005d0f74:
      if (puVar11 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      puVar11 = ex_eval(CONCAT44(uVar29,uVar30),param_2,param_5,param_6,param_7,param_8,param_9,
                        (ulong *)puVar11[2],pfVar14,puVar17,param_13,param_14);
      uVar30 = extraout_XMM0_Da_01;
      uVar29 = extraout_XMM0_Db_01;
      break;
    case 2:
      uVar30 = 0;
      uVar29 = 0;
      if (*param_12 == 0.0) goto LAB_005d0f74;
LAB_005d0f4c:
      puVar11 = ex_eval(CONCAT44(uVar29,uVar30),param_2,param_5,param_6,param_7,param_8,param_9,
                        puVar11,pfVar14,puVar17,param_13,param_14);
      if (puVar11 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      puVar11 = (ulong *)puVar11[2];
      uVar30 = extraout_XMM0_Da_00;
      uVar29 = extraout_XMM0_Db_00;
      break;
    default:
      goto switchD_005d0ef9_caseD_3;
    case 7:
    case 0xd:
      pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,"\'%s\': if() condition cannot be a string",
               *(undefined8 *)(param_9 + 0x40),lVar12,param_13,param_14);
      return puVar11;
    case 0xe:
    case 0xf:
      if (param_11[1] != 0xf) {
        if (param_11[1] == 0xe) goto LAB_005d0f3a;
        param_11[1] = 0xf;
        lVar12 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *param_11 = lVar12;
        uVar30 = extraout_XMM0_Da_02;
        uVar29 = extraout_XMM0_Db_02;
        if (lVar12 == 0) {
          post(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,"expr:if: no mem");
          return *(ulong **)(*(long *)(param_12 + 4) + 0x10);
        }
      }
      puVar11 = ex_eval(CONCAT44(uVar29,uVar30),param_2,param_5,param_6,param_7,param_8,param_9,
                        puVar11,pfVar14,puVar17,param_13,param_14);
      pfVar15 = param_12 + 0x10;
      puVar11 = ex_eval(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_5,param_6,
                        param_7,param_8,param_9,puVar11,pfVar15,puVar17,param_13,param_14);
      puVar2 = *(undefined **)(param_12 + 10);
      if ((puVar2 == (undefined *)0xd) || (puVar2 == (undefined *)0x7)) {
        uVar19 = *(undefined8 *)(param_9 + 0x40);
        pcVar22 = "\'%s\': vector condition cannot return symbol value(l)";
      }
      else {
        puVar17 = *(undefined **)(param_12 + 0x12);
        if ((puVar17 != (undefined *)0xd) && (puVar17 != (undefined *)0x7)) {
          pfVar27 = (float *)*param_11;
          uVar26 = *(uint *)(param_9 + 0x28f8);
          pfVar23 = *(float **)param_12;
          fVar28 = extraout_XMM0_Da_04;
          uVar30 = extraout_XMM0_Db_04;
          if (puVar2 + -0xe < (undefined *)0x2) {
            pfVar14 = *(float **)pfVar14;
            if (puVar17 + -0xe < (undefined *)0x2) {
              if (uVar26 != 0) {
                pfVar15 = *(float **)pfVar15;
                uVar16 = uVar26 - 1;
                if ((uVar26 & 3) != 0) {
                  uVar21 = 0;
                  do {
                    pfVar18 = pfVar15;
                    if (*pfVar23 != 0.0) {
                      pfVar18 = pfVar14;
                    }
                    pfVar23 = pfVar23 + 1;
                    *pfVar27 = *pfVar18;
                    pfVar27 = pfVar27 + 1;
                    pfVar14 = pfVar14 + 1;
                    pfVar15 = pfVar15 + 1;
                    uVar21 = uVar21 + 1;
                  } while ((uVar26 & 3) != uVar21);
                  uVar26 = uVar26 - uVar21;
                }
                if (2 < uVar16) {
                  lVar12 = 0;
                  do {
                    pfVar18 = pfVar15;
                    if (pfVar23[lVar12] != 0.0) {
                      pfVar18 = pfVar14;
                    }
                    pfVar27[lVar12] = *pfVar18;
                    pfVar18 = pfVar15;
                    if (pfVar23[lVar12 + 1] != 0.0) {
                      pfVar18 = pfVar14;
                    }
                    pfVar27[lVar12 + 1] = pfVar18[1];
                    pfVar18 = pfVar15;
                    if (pfVar23[lVar12 + 2] != 0.0) {
                      pfVar18 = pfVar14;
                    }
                    pfVar27[lVar12 + 2] = pfVar18[2];
                    pfVar18 = pfVar15;
                    if (pfVar23[lVar12 + 3] != 0.0) {
                      pfVar18 = pfVar14;
                    }
                    pfVar27[lVar12 + 3] = pfVar18[3];
                    pfVar14 = pfVar14 + 4;
                    pfVar15 = pfVar15 + 4;
                    lVar12 = lVar12 + 4;
                  } while (uVar26 != (uint)lVar12);
                }
              }
            }
            else if (puVar17 == (undefined *)0x2) {
              if (uVar26 != 0) {
                fVar28 = *pfVar15;
                if ((uVar26 & 1) == 0) {
                  uVar16 = uVar26;
                }
                else {
                  fVar31 = fVar28;
                  if (*pfVar23 != 0.0) {
                    fVar31 = *pfVar14;
                  }
                  uVar16 = uVar26 - 1;
                  pfVar23 = pfVar23 + 1;
                  *pfVar27 = fVar31;
                  pfVar27 = pfVar27 + 1;
                  pfVar14 = pfVar14 + 1;
                }
                if (uVar26 == 1) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  fVar31 = fVar28;
                  if (pfVar23[lVar12] != 0.0) {
                    fVar31 = pfVar14[lVar12];
                  }
                  pfVar27[lVar12] = fVar31;
                  fVar31 = fVar28;
                  if (pfVar23[lVar12 + 1] != 0.0) {
                    fVar31 = pfVar14[lVar12 + 1];
                  }
                  pfVar27[lVar12 + 1] = fVar31;
                  lVar12 = lVar12 + 2;
                } while (uVar16 != (uint)lVar12);
                return puVar11;
              }
            }
            else {
              if (puVar17 != (undefined *)0x1) {
                pcVar22 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
                uVar19 = 0x4d5;
                goto LAB_005d179d;
              }
              if (uVar26 != 0) {
                fVar28 = (float)*(long *)pfVar15;
                if ((uVar26 & 1) == 0) {
                  uVar16 = uVar26;
                }
                else {
                  fVar31 = fVar28;
                  if (*pfVar23 != 0.0) {
                    fVar31 = *pfVar14;
                  }
                  uVar16 = uVar26 - 1;
                  pfVar23 = pfVar23 + 1;
                  *pfVar27 = fVar31;
                  pfVar27 = pfVar27 + 1;
                  pfVar14 = pfVar14 + 1;
                }
                if (uVar26 == 1) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  fVar31 = fVar28;
                  if (pfVar23[lVar12] != 0.0) {
                    fVar31 = pfVar14[lVar12];
                  }
                  pfVar27[lVar12] = fVar31;
                  fVar31 = fVar28;
                  if (pfVar23[lVar12 + 1] != 0.0) {
                    fVar31 = pfVar14[lVar12 + 1];
                  }
                  pfVar27[lVar12 + 1] = fVar31;
                  lVar12 = lVar12 + 2;
                } while (uVar16 != (uint)lVar12);
                return puVar11;
              }
            }
          }
          else if (puVar2 == (undefined *)0x2) {
            fVar28 = *pfVar14;
            uVar30 = 0;
            if (puVar17 + -0xe < (undefined *)0x2) {
              if (uVar26 != 0) {
                pfVar15 = *(float **)pfVar15;
                if ((uVar26 & 1) == 0) {
                  uVar16 = uVar26;
                }
                else {
                  fVar31 = fVar28;
                  if (*pfVar23 == 0.0) {
                    fVar31 = *pfVar15;
                  }
                  uVar16 = uVar26 - 1;
                  pfVar23 = pfVar23 + 1;
                  *pfVar27 = fVar31;
                  pfVar27 = pfVar27 + 1;
                  pfVar15 = pfVar15 + 1;
                }
                if (uVar26 == 1) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  fVar31 = fVar28;
                  if (pfVar23[lVar12] == 0.0) {
                    fVar31 = pfVar15[lVar12];
                  }
                  pfVar27[lVar12] = fVar31;
                  fVar31 = fVar28;
                  if (pfVar23[lVar12 + 1] == 0.0) {
                    fVar31 = pfVar15[lVar12 + 1];
                  }
                  pfVar27[lVar12 + 1] = fVar31;
                  lVar12 = lVar12 + 2;
                } while (uVar16 != (uint)lVar12);
                return puVar11;
              }
            }
            else if (puVar17 == (undefined *)0x2) {
              if (uVar26 != 0) {
                fVar31 = *pfVar15;
                uVar13 = (ulong)(uVar26 - 1);
                if ((6 < uVar26 - 1) &&
                   ((pfVar23 + uVar13 + 1 <= pfVar27 || (pfVar27 + uVar13 + 1 <= pfVar23)))) {
                  uVar24 = uVar13 + 1 & 0xfffffffffffffff8;
                  uVar25 = (uVar24 - 8 >> 3) + 1;
                  if (uVar24 - 8 == 0) {
                    lVar12 = 0;
                  }
                  else {
                    uVar20 = uVar25 & 0xfffffffffffffffe;
                    lVar12 = 0;
                    do {
                      pfVar14 = pfVar23 + lVar12;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 4;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 4;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      pfVar14 = pfVar23 + lVar12 + 8;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 0xc;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12 + 8;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 0xc;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      lVar12 = lVar12 + 0x10;
                      uVar20 = uVar20 - 2;
                    } while (uVar20 != 0);
                  }
                  if ((uVar25 & 1) != 0) {
                    pfVar14 = pfVar23 + lVar12;
                    fVar1 = pfVar14[1];
                    fVar3 = pfVar14[2];
                    fVar4 = pfVar14[3];
                    pfVar15 = pfVar23 + lVar12 + 4;
                    fVar5 = *pfVar15;
                    fVar6 = pfVar15[1];
                    fVar7 = pfVar15[2];
                    fVar8 = pfVar15[3];
                    pfVar15 = pfVar27 + lVar12;
                    *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                    pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar1 != 0.0));
                    pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar3 != 0.0));
                    pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar4 != 0.0));
                    pfVar14 = pfVar27 + lVar12 + 4;
                    *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(fVar5 != 0.0));
                    pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar6 != 0.0));
                    pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar7 != 0.0));
                    pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar8 != 0.0));
                  }
                  if (uVar13 + 1 == uVar24) {
                    return puVar11;
                  }
                  uVar26 = uVar26 - (int)uVar24;
                  pfVar23 = pfVar23 + uVar24;
                  pfVar27 = pfVar27 + uVar24;
                }
                uVar16 = uVar26 - 1;
                if ((uVar26 & 3) != 0) {
                  uVar21 = 0;
                  do {
                    fVar1 = *pfVar23;
                    pfVar23 = pfVar23 + 1;
                    *pfVar27 = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                      -(uint)(fVar1 != 0.0) & (uint)fVar28);
                    pfVar27 = pfVar27 + 1;
                    uVar21 = uVar21 + 1;
                  } while ((uVar26 & 3) != uVar21);
                  uVar26 = uVar26 - uVar21;
                }
                if (uVar16 < 3) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  pfVar27[lVar12] =
                       (float)(~-(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 1] =
                       (float)(~-(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 2] =
                       (float)(~-(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 3] =
                       (float)(~-(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar28);
                  lVar12 = lVar12 + 4;
                } while (uVar26 != (uint)lVar12);
                return puVar11;
              }
            }
            else {
              if (puVar17 != (undefined *)0x1) {
                pcVar22 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
                uVar19 = 0x4ac;
                goto LAB_005d179d;
              }
              if (uVar26 != 0) {
                fVar31 = (float)*(long *)pfVar15;
                uVar13 = (ulong)(uVar26 - 1);
                if ((6 < uVar26 - 1) &&
                   ((pfVar23 + uVar13 + 1 <= pfVar27 || (pfVar27 + uVar13 + 1 <= pfVar23)))) {
                  uVar24 = uVar13 + 1 & 0xfffffffffffffff8;
                  uVar25 = (uVar24 - 8 >> 3) + 1;
                  if (uVar24 - 8 == 0) {
                    lVar12 = 0;
                  }
                  else {
                    uVar20 = uVar25 & 0xfffffffffffffffe;
                    lVar12 = 0;
                    do {
                      pfVar14 = pfVar23 + lVar12;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 4;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 4;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      pfVar14 = pfVar23 + lVar12 + 8;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 0xc;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12 + 8;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 0xc;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      lVar12 = lVar12 + 0x10;
                      uVar20 = uVar20 - 2;
                    } while (uVar20 != 0);
                  }
                  if ((uVar25 & 1) != 0) {
                    pfVar14 = pfVar23 + lVar12;
                    fVar1 = pfVar14[1];
                    fVar3 = pfVar14[2];
                    fVar4 = pfVar14[3];
                    pfVar15 = pfVar23 + lVar12 + 4;
                    fVar5 = *pfVar15;
                    fVar6 = pfVar15[1];
                    fVar7 = pfVar15[2];
                    fVar8 = pfVar15[3];
                    pfVar15 = pfVar27 + lVar12;
                    *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                    pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar1 != 0.0));
                    pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar3 != 0.0));
                    pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar4 != 0.0));
                    pfVar14 = pfVar27 + lVar12 + 4;
                    *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(fVar5 != 0.0));
                    pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar6 != 0.0));
                    pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar7 != 0.0));
                    pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar8 != 0.0));
                  }
                  if (uVar13 + 1 == uVar24) {
                    return puVar11;
                  }
                  uVar26 = uVar26 - (int)uVar24;
                  pfVar23 = pfVar23 + uVar24;
                  pfVar27 = pfVar27 + uVar24;
                }
                uVar16 = uVar26 - 1;
                if ((uVar26 & 3) != 0) {
                  uVar21 = 0;
                  do {
                    fVar1 = *pfVar23;
                    pfVar23 = pfVar23 + 1;
                    *pfVar27 = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                      -(uint)(fVar1 != 0.0) & (uint)fVar28);
                    pfVar27 = pfVar27 + 1;
                    uVar21 = uVar21 + 1;
                  } while ((uVar26 & 3) != uVar21);
                  uVar26 = uVar26 - uVar21;
                }
                if (uVar16 < 3) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  pfVar27[lVar12] =
                       (float)(~-(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 1] =
                       (float)(~-(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 2] =
                       (float)(~-(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 3] =
                       (float)(~-(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar28);
                  lVar12 = lVar12 + 4;
                } while (uVar26 != (uint)lVar12);
                return puVar11;
              }
            }
          }
          else {
            if (puVar2 != (undefined *)0x1) {
              pcVar22 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
              uVar19 = 0x4db;
              puVar17 = puVar2;
LAB_005d179d:
              pd_error(CONCAT44(uVar30,fVar28),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8,param_9,pcVar22,uVar19,puVar17,param_13,param_14);
              return puVar11;
            }
            fVar28 = (float)*(long *)pfVar14;
            if (puVar17 + -0xe < (undefined *)0x2) {
              if (uVar26 != 0) {
                pfVar15 = *(float **)pfVar15;
                if ((uVar26 & 1) == 0) {
                  uVar16 = uVar26;
                }
                else {
                  fVar31 = fVar28;
                  if (*pfVar23 == 0.0) {
                    fVar31 = *pfVar15;
                  }
                  uVar16 = uVar26 - 1;
                  pfVar23 = pfVar23 + 1;
                  *pfVar27 = fVar31;
                  pfVar27 = pfVar27 + 1;
                  pfVar15 = pfVar15 + 1;
                }
                if (uVar26 == 1) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  fVar31 = fVar28;
                  if (pfVar23[lVar12] == 0.0) {
                    fVar31 = pfVar15[lVar12];
                  }
                  pfVar27[lVar12] = fVar31;
                  fVar31 = fVar28;
                  if (pfVar23[lVar12 + 1] == 0.0) {
                    fVar31 = pfVar15[lVar12 + 1];
                  }
                  pfVar27[lVar12 + 1] = fVar31;
                  lVar12 = lVar12 + 2;
                } while (uVar16 != (uint)lVar12);
                return puVar11;
              }
            }
            else if (puVar17 == (undefined *)0x2) {
              if (uVar26 != 0) {
                fVar31 = *pfVar15;
                uVar13 = (ulong)(uVar26 - 1);
                if ((6 < uVar26 - 1) &&
                   ((pfVar23 + uVar13 + 1 <= pfVar27 || (pfVar27 + uVar13 + 1 <= pfVar23)))) {
                  uVar24 = uVar13 + 1 & 0xfffffffffffffff8;
                  uVar25 = (uVar24 - 8 >> 3) + 1;
                  if (uVar24 - 8 == 0) {
                    lVar12 = 0;
                  }
                  else {
                    uVar20 = uVar25 & 0xfffffffffffffffe;
                    lVar12 = 0;
                    do {
                      pfVar14 = pfVar23 + lVar12;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 4;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 4;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      pfVar14 = pfVar23 + lVar12 + 8;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 0xc;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12 + 8;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 0xc;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      lVar12 = lVar12 + 0x10;
                      uVar20 = uVar20 - 2;
                    } while (uVar20 != 0);
                  }
                  if ((uVar25 & 1) != 0) {
                    pfVar14 = pfVar23 + lVar12;
                    fVar1 = pfVar14[1];
                    fVar3 = pfVar14[2];
                    fVar4 = pfVar14[3];
                    pfVar15 = pfVar23 + lVar12 + 4;
                    fVar5 = *pfVar15;
                    fVar6 = pfVar15[1];
                    fVar7 = pfVar15[2];
                    fVar8 = pfVar15[3];
                    pfVar15 = pfVar27 + lVar12;
                    *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                    pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar1 != 0.0));
                    pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar3 != 0.0));
                    pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar4 != 0.0));
                    pfVar14 = pfVar27 + lVar12 + 4;
                    *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(fVar5 != 0.0));
                    pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar6 != 0.0));
                    pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar7 != 0.0));
                    pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar8 != 0.0));
                  }
                  if (uVar13 + 1 == uVar24) {
                    return puVar11;
                  }
                  uVar26 = uVar26 - (int)uVar24;
                  pfVar23 = pfVar23 + uVar24;
                  pfVar27 = pfVar27 + uVar24;
                }
                uVar16 = uVar26 - 1;
                if ((uVar26 & 3) != 0) {
                  uVar21 = 0;
                  do {
                    fVar1 = *pfVar23;
                    pfVar23 = pfVar23 + 1;
                    *pfVar27 = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                      -(uint)(fVar1 != 0.0) & (uint)fVar28);
                    pfVar27 = pfVar27 + 1;
                    uVar21 = uVar21 + 1;
                  } while ((uVar26 & 3) != uVar21);
                  uVar26 = uVar26 - uVar21;
                }
                if (uVar16 < 3) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  pfVar27[lVar12] =
                       (float)(~-(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 1] =
                       (float)(~-(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 2] =
                       (float)(~-(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 3] =
                       (float)(~-(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar28);
                  lVar12 = lVar12 + 4;
                } while (uVar26 != (uint)lVar12);
                return puVar11;
              }
            }
            else {
              if (puVar17 != (undefined *)0x1) {
                pcVar22 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
                uVar19 = 0x486;
                goto LAB_005d179d;
              }
              if (uVar26 != 0) {
                fVar31 = (float)*(long *)pfVar15;
                uVar13 = (ulong)(uVar26 - 1);
                if ((6 < uVar26 - 1) &&
                   ((pfVar23 + uVar13 + 1 <= pfVar27 || (pfVar27 + uVar13 + 1 <= pfVar23)))) {
                  uVar24 = uVar13 + 1 & 0xfffffffffffffff8;
                  uVar25 = (uVar24 - 8 >> 3) + 1;
                  if (uVar24 - 8 == 0) {
                    lVar12 = 0;
                  }
                  else {
                    uVar20 = uVar25 & 0xfffffffffffffffe;
                    lVar12 = 0;
                    do {
                      pfVar14 = pfVar23 + lVar12;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 4;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 4;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      pfVar14 = pfVar23 + lVar12 + 8;
                      fVar1 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      fVar4 = pfVar14[3];
                      pfVar15 = pfVar23 + lVar12 + 0xc;
                      fVar5 = *pfVar15;
                      fVar6 = pfVar15[1];
                      fVar7 = pfVar15[2];
                      fVar8 = pfVar15[3];
                      pfVar15 = pfVar27 + lVar12 + 8;
                      *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                      pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar1 != 0.0));
                      pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar3 != 0.0));
                      pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar4 != 0.0));
                      pfVar14 = pfVar27 + lVar12 + 0xc;
                      *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar5 != 0.0));
                      pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar6 != 0.0));
                      pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar7 != 0.0));
                      pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                          (uint)fVar28 & -(uint)(fVar8 != 0.0));
                      lVar12 = lVar12 + 0x10;
                      uVar20 = uVar20 - 2;
                    } while (uVar20 != 0);
                  }
                  if ((uVar25 & 1) != 0) {
                    pfVar14 = pfVar23 + lVar12;
                    fVar1 = pfVar14[1];
                    fVar3 = pfVar14[2];
                    fVar4 = pfVar14[3];
                    pfVar15 = pfVar23 + lVar12 + 4;
                    fVar5 = *pfVar15;
                    fVar6 = pfVar15[1];
                    fVar7 = pfVar15[2];
                    fVar8 = pfVar15[3];
                    pfVar15 = pfVar27 + lVar12;
                    *pfVar15 = (float)(~-(uint)(*pfVar14 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(*pfVar14 != 0.0));
                    pfVar15[1] = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar1 != 0.0));
                    pfVar15[2] = (float)(~-(uint)(fVar3 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar3 != 0.0));
                    pfVar15[3] = (float)(~-(uint)(fVar4 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar4 != 0.0));
                    pfVar14 = pfVar27 + lVar12 + 4;
                    *pfVar14 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar31 |
                                      (uint)fVar28 & -(uint)(fVar5 != 0.0));
                    pfVar14[1] = (float)(~-(uint)(fVar6 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar6 != 0.0));
                    pfVar14[2] = (float)(~-(uint)(fVar7 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar7 != 0.0));
                    pfVar14[3] = (float)(~-(uint)(fVar8 != 0.0) & (uint)fVar31 |
                                        (uint)fVar28 & -(uint)(fVar8 != 0.0));
                  }
                  if (uVar13 + 1 == uVar24) {
                    return puVar11;
                  }
                  uVar26 = uVar26 - (int)uVar24;
                  pfVar23 = pfVar23 + uVar24;
                  pfVar27 = pfVar27 + uVar24;
                }
                uVar16 = uVar26 - 1;
                if ((uVar26 & 3) != 0) {
                  uVar21 = 0;
                  do {
                    fVar1 = *pfVar23;
                    pfVar23 = pfVar23 + 1;
                    *pfVar27 = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar31 |
                                      -(uint)(fVar1 != 0.0) & (uint)fVar28);
                    pfVar27 = pfVar27 + 1;
                    uVar21 = uVar21 + 1;
                  } while ((uVar26 & 3) != uVar21);
                  uVar26 = uVar26 - uVar21;
                }
                if (uVar16 < 3) {
                  return puVar11;
                }
                lVar12 = 0;
                do {
                  pfVar27[lVar12] =
                       (float)(~-(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 1] =
                       (float)(~-(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 1] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 2] =
                       (float)(~-(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 2] != 0.0) & (uint)fVar28);
                  pfVar27[lVar12 + 3] =
                       (float)(~-(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar31 |
                              -(uint)(pfVar23[lVar12 + 3] != 0.0) & (uint)fVar28);
                  lVar12 = lVar12 + 4;
                } while (uVar26 != (uint)lVar12);
                return puVar11;
              }
            }
          }
          return puVar11;
        }
        uVar19 = *(undefined8 *)(param_9 + 0x40);
        pcVar22 = "\'%s\': vector condition cannot return symbol value(r)";
      }
      pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,pcVar22,uVar19,puVar17,param_13,param_14);
      return puVar11;
    }
    lVar12 = *(long *)(param_12 + 10);
    switch(lVar12) {
    case 1:
      if (param_11[1] == 0xf) {
        lVar12 = *param_11;
        fVar28 = (float)*(long *)pfVar14;
LAB_005d10f7:
        ex_mkvector(fVar28,lVar12,*(int *)(param_9 + 0x28f8));
        return puVar11;
      }
      break;
    case 2:
      if (param_11[1] == 0xf) {
        lVar12 = *param_11;
        fVar28 = *pfVar14;
        goto LAB_005d10f7;
      }
      break;
    default:
      pcVar22 = "expr: FUNC_EVAL(%d): bad res type %ld\n";
      uVar19 = 0x531;
      goto LAB_005d0fe3;
    case 7:
    case 0xd:
      if (param_11[1] == 0xf) {
        ex_mkvector(0,*param_11,*(int *)(param_9 + 0x28f8));
        return puVar11;
      }
      break;
    case 0xe:
    case 0xf:
      if (param_11[1] != 0xe) {
        if (param_11[1] == 0xf) {
          __dest = (void *)*param_11;
        }
        else {
          param_11[1] = 0xf;
          __dest = (void *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
          *param_11 = (long)__dest;
          if (__dest == (void *)0x0) {
            post(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,"expr:if: no mem");
            return puVar11;
          }
        }
        memcpy(__dest,*(void **)pfVar14,(long)*(int *)(param_9 + 0x28f8) << 2);
        return puVar11;
      }
LAB_005d0f3a:
      post(CONCAT44(uVar29,uVar30),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "expr~: Int. error %d");
      return puVar11;
    }
    lVar12 = *(long *)pfVar14;
    lVar9 = *(long *)(param_12 + 10);
    lVar10 = *(long *)(param_12 + 0xe);
    param_11[2] = *(long *)(param_12 + 0xc);
    param_11[3] = lVar10;
    *param_11 = lVar12;
    param_11[1] = lVar9;
  }
  else {
switchD_005d0ef9_caseD_3:
    pcVar22 = "expr: FUNC_EVAL(%d): bad condition type %ld\n";
    uVar19 = 0x4f2;
LAB_005d0fe3:
    pd_error(CONCAT44(uVar29,uVar30),param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
             ,pcVar22,uVar19,lVar12,param_13,param_14);
  }
  return puVar11;
}


