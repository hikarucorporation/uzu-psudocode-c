// Function : ex_max
// Namespace: 
// Entry    : 005c8080
// Prototype: undefined ex_max(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, char * param_13, undefined8 param_14)
// Body     : 005c8080 - 005c8f6a


void ex_max(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           undefined8 param_10,float *param_11,float *param_12,char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  char *pcVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  float fVar39;
  undefined8 extraout_XMM0_Qa;
  double dVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  lVar33 = *(long *)(param_11 + 2);
  if (lVar33 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      pfVar25 = *(float **)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005c8f53:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      pfVar25 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(float **)param_12 = pfVar25;
      param_1 = extraout_XMM0_Qa;
    }
    pfVar28 = *(float **)param_11;
    lVar33 = *(long *)(param_11 + 10);
    if (lVar33 - 0xeU < 2) {
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 != 0) {
        pfVar27 = *(float **)(param_11 + 8);
        uVar30 = (ulong)(uVar29 - 1);
        if (6 < uVar29 - 1) {
          if ((pfVar28 + uVar30 + 1 <= pfVar25 || pfVar25 + uVar30 + 1 <= pfVar28) &&
             (pfVar27 + uVar30 + 1 <= pfVar25 || pfVar25 + uVar30 + 1 <= pfVar27)) {
            uVar38 = uVar30 + 1 & 0xfffffffffffffff8;
            uVar35 = (uVar38 - 8 >> 3) + 1;
            if (uVar38 - 8 == 0) {
              lVar33 = 0;
            }
            else {
              uVar37 = uVar35 & 0xfffffffffffffffe;
              lVar33 = 0;
              do {
                auVar43 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33),
                                *(undefined1 (*) [16])(pfVar28 + lVar33));
                auVar42 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33 + 4),
                                *(undefined1 (*) [16])(pfVar28 + lVar33 + 4));
                *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar43;
                *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar42;
                auVar43 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33 + 8),
                                *(undefined1 (*) [16])(pfVar28 + lVar33 + 8));
                auVar42 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33 + 0xc),
                                *(undefined1 (*) [16])(pfVar28 + lVar33 + 0xc));
                *(undefined1 (*) [16])(pfVar25 + lVar33 + 8) = auVar43;
                *(undefined1 (*) [16])(pfVar25 + lVar33 + 0xc) = auVar42;
                lVar33 = lVar33 + 0x10;
                uVar37 = uVar37 - 2;
              } while (uVar37 != 0);
            }
            if ((uVar35 & 1) != 0) {
              auVar43 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33),
                              *(undefined1 (*) [16])(pfVar28 + lVar33));
              auVar42 = maxps(*(undefined1 (*) [16])(pfVar27 + lVar33 + 4),
                              *(undefined1 (*) [16])(pfVar28 + lVar33 + 4));
              *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar43;
              *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar42;
            }
            if (uVar30 + 1 == uVar38) {
              return;
            }
            uVar29 = uVar29 - (int)uVar38;
            pfVar27 = pfVar27 + uVar38;
            pfVar28 = pfVar28 + uVar38;
            pfVar25 = pfVar25 + uVar38;
          }
        }
        uVar1 = uVar29 - 1;
        if ((uVar29 & 3) != 0) {
          uVar32 = 0;
          do {
            fVar39 = *pfVar28;
            if (*pfVar28 <= *pfVar27) {
              fVar39 = *pfVar27;
            }
            *pfVar25 = fVar39;
            pfVar25 = pfVar25 + 1;
            pfVar27 = pfVar27 + 1;
            pfVar28 = pfVar28 + 1;
            uVar32 = uVar32 + 1;
          } while ((uVar29 & 3) != uVar32);
          uVar29 = uVar29 - uVar32;
        }
        if (2 < uVar1) {
          lVar33 = 0;
          do {
            fVar39 = pfVar28[lVar33];
            if (pfVar28[lVar33] <= pfVar27[lVar33]) {
              fVar39 = pfVar27[lVar33];
            }
            pfVar25[lVar33] = fVar39;
            fVar39 = pfVar28[lVar33 + 1];
            if (pfVar28[lVar33 + 1] <= pfVar27[lVar33 + 1]) {
              fVar39 = pfVar27[lVar33 + 1];
            }
            pfVar25[lVar33 + 1] = fVar39;
            fVar39 = pfVar28[lVar33 + 2];
            if (pfVar28[lVar33 + 2] <= pfVar27[lVar33 + 2]) {
              fVar39 = pfVar27[lVar33 + 2];
            }
            pfVar25[lVar33 + 2] = fVar39;
            fVar39 = pfVar28[lVar33 + 3];
            if (pfVar28[lVar33 + 3] <= pfVar27[lVar33 + 3]) {
              fVar39 = pfVar27[lVar33 + 3];
            }
            pfVar25[lVar33 + 3] = fVar39;
            lVar33 = lVar33 + 4;
          } while (uVar29 != (uint)lVar33);
        }
      }
      return;
    }
    if (lVar33 == 2) {
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      fVar39 = param_11[8];
      uVar30 = (ulong)(uVar29 - 1);
      if ((6 < uVar29 - 1) &&
         ((pfVar28 + uVar30 + 1 <= pfVar25 || (pfVar25 + uVar30 + 1 <= pfVar28)))) {
        uVar38 = uVar30 + 1 & 0xfffffffffffffff8;
        uVar35 = (uVar38 - 8 >> 3) + 1;
        if (uVar38 - 8 == 0) {
          lVar33 = 0;
        }
        else {
          uVar37 = uVar35 & 0xfffffffffffffffe;
          lVar33 = 0;
          do {
            auVar42._4_4_ = fVar39;
            auVar42._0_4_ = fVar39;
            auVar42._8_4_ = fVar39;
            auVar42._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar42);
            auVar43._4_4_ = fVar39;
            auVar43._0_4_ = fVar39;
            auVar43._8_4_ = fVar39;
            auVar43._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar43);
            *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
            auVar20._4_4_ = fVar39;
            auVar20._0_4_ = fVar39;
            auVar20._8_4_ = fVar39;
            auVar20._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 8),auVar20);
            auVar21._4_4_ = fVar39;
            auVar21._0_4_ = fVar39;
            auVar21._8_4_ = fVar39;
            auVar21._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 0xc),auVar21);
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 8) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 0xc) = auVar43;
            lVar33 = lVar33 + 0x10;
            uVar37 = uVar37 - 2;
          } while (uVar37 != 0);
        }
        if ((uVar35 & 1) != 0) {
          auVar22._4_4_ = fVar39;
          auVar22._0_4_ = fVar39;
          auVar22._8_4_ = fVar39;
          auVar22._12_4_ = fVar39;
          auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar22);
          auVar23._4_4_ = fVar39;
          auVar23._0_4_ = fVar39;
          auVar23._8_4_ = fVar39;
          auVar23._12_4_ = fVar39;
          auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar23);
          *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
          *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
        }
        if (uVar30 + 1 == uVar38) {
          return;
        }
        uVar29 = uVar29 - (int)uVar38;
        pfVar28 = pfVar28 + uVar38;
        pfVar25 = pfVar25 + uVar38;
      }
      uVar1 = uVar29 - 1;
      if ((uVar29 & 3) != 0) {
        uVar32 = 0;
        do {
          fVar41 = *pfVar28;
          if (*pfVar28 <= fVar39) {
            fVar41 = fVar39;
          }
          *pfVar25 = fVar41;
          pfVar25 = pfVar25 + 1;
          pfVar28 = pfVar28 + 1;
          uVar32 = uVar32 + 1;
        } while ((uVar29 & 3) != uVar32);
        uVar29 = uVar29 - uVar32;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar33 = 0;
      do {
        fVar41 = pfVar28[lVar33];
        if (pfVar28[lVar33] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33] = fVar41;
        fVar41 = pfVar28[lVar33 + 1];
        if (pfVar28[lVar33 + 1] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 1] = fVar41;
        fVar41 = pfVar28[lVar33 + 2];
        if (pfVar28[lVar33 + 2] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 2] = fVar41;
        fVar41 = pfVar28[lVar33 + 3];
        if (pfVar28[lVar33 + 3] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 3] = fVar41;
        lVar33 = lVar33 + 4;
      } while (uVar29 != (uint)lVar33);
      return;
    }
    if (lVar33 == 1) {
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      fVar39 = (float)*(long *)(param_11 + 8);
      uVar30 = (ulong)(uVar29 - 1);
      if ((6 < uVar29 - 1) &&
         ((pfVar28 + uVar30 + 1 <= pfVar25 || (pfVar25 + uVar30 + 1 <= pfVar28)))) {
        uVar38 = uVar30 + 1 & 0xfffffffffffffff8;
        uVar35 = (uVar38 - 8 >> 3) + 1;
        if (uVar38 - 8 == 0) {
          lVar33 = 0;
        }
        else {
          uVar37 = uVar35 & 0xfffffffffffffffe;
          lVar33 = 0;
          do {
            auVar14._4_4_ = fVar39;
            auVar14._0_4_ = fVar39;
            auVar14._8_4_ = fVar39;
            auVar14._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar14);
            auVar15._4_4_ = fVar39;
            auVar15._0_4_ = fVar39;
            auVar15._8_4_ = fVar39;
            auVar15._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar15);
            *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
            auVar16._4_4_ = fVar39;
            auVar16._0_4_ = fVar39;
            auVar16._8_4_ = fVar39;
            auVar16._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 8),auVar16);
            auVar17._4_4_ = fVar39;
            auVar17._0_4_ = fVar39;
            auVar17._8_4_ = fVar39;
            auVar17._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 0xc),auVar17);
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 8) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 0xc) = auVar43;
            lVar33 = lVar33 + 0x10;
            uVar37 = uVar37 - 2;
          } while (uVar37 != 0);
        }
        if ((uVar35 & 1) != 0) {
          auVar18._4_4_ = fVar39;
          auVar18._0_4_ = fVar39;
          auVar18._8_4_ = fVar39;
          auVar18._12_4_ = fVar39;
          auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar18);
          auVar19._4_4_ = fVar39;
          auVar19._0_4_ = fVar39;
          auVar19._8_4_ = fVar39;
          auVar19._12_4_ = fVar39;
          auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar19);
          *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
          *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
        }
        if (uVar30 + 1 == uVar38) {
          return;
        }
        uVar29 = uVar29 - (int)uVar38;
        pfVar28 = pfVar28 + uVar38;
        pfVar25 = pfVar25 + uVar38;
      }
      uVar1 = uVar29 - 1;
      if ((uVar29 & 3) != 0) {
        uVar32 = 0;
        do {
          fVar41 = *pfVar28;
          if (*pfVar28 <= fVar39) {
            fVar41 = fVar39;
          }
          *pfVar25 = fVar41;
          pfVar25 = pfVar25 + 1;
          pfVar28 = pfVar28 + 1;
          uVar32 = uVar32 + 1;
        } while ((uVar29 & 3) != uVar32);
        uVar29 = uVar29 - uVar32;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar33 = 0;
      do {
        fVar41 = pfVar28[lVar33];
        if (pfVar28[lVar33] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33] = fVar41;
        fVar41 = pfVar28[lVar33 + 1];
        if (pfVar28[lVar33 + 1] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 1] = fVar41;
        fVar41 = pfVar28[lVar33 + 2];
        if (pfVar28[lVar33 + 2] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 2] = fVar41;
        fVar41 = pfVar28[lVar33 + 3];
        if (pfVar28[lVar33 + 3] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 3] = fVar41;
        lVar33 = lVar33 + 4;
      } while (uVar29 != (uint)lVar33);
      return;
    }
  }
  else if (lVar33 == 2) {
    lVar33 = *(long *)(param_11 + 10);
    if (lVar33 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        pfVar25 = *(float **)param_12;
      }
      else {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005c8f53;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        pfVar25 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(float **)param_12 = pfVar25;
      }
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      fVar39 = *param_11;
      pfVar28 = *(float **)(param_11 + 8);
      uVar30 = (ulong)(uVar29 - 1);
      if ((6 < uVar29 - 1) &&
         ((pfVar28 + uVar30 + 1 <= pfVar25 || (pfVar25 + uVar30 + 1 <= pfVar28)))) {
        uVar38 = uVar30 + 1 & 0xfffffffffffffff8;
        uVar35 = (uVar38 - 8 >> 3) + 1;
        if (uVar38 - 8 == 0) {
          lVar33 = 0;
        }
        else {
          uVar37 = uVar35 & 0xfffffffffffffffe;
          lVar33 = 0;
          do {
            auVar8._4_4_ = fVar39;
            auVar8._0_4_ = fVar39;
            auVar8._8_4_ = fVar39;
            auVar8._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar8);
            auVar9._4_4_ = fVar39;
            auVar9._0_4_ = fVar39;
            auVar9._8_4_ = fVar39;
            auVar9._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar9);
            *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
            auVar10._4_4_ = fVar39;
            auVar10._0_4_ = fVar39;
            auVar10._8_4_ = fVar39;
            auVar10._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 8),auVar10);
            auVar11._4_4_ = fVar39;
            auVar11._0_4_ = fVar39;
            auVar11._8_4_ = fVar39;
            auVar11._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 0xc),auVar11);
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 8) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 0xc) = auVar43;
            lVar33 = lVar33 + 0x10;
            uVar37 = uVar37 - 2;
          } while (uVar37 != 0);
        }
        if ((uVar35 & 1) != 0) {
          auVar12._4_4_ = fVar39;
          auVar12._0_4_ = fVar39;
          auVar12._8_4_ = fVar39;
          auVar12._12_4_ = fVar39;
          auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar12);
          auVar13._4_4_ = fVar39;
          auVar13._0_4_ = fVar39;
          auVar13._8_4_ = fVar39;
          auVar13._12_4_ = fVar39;
          auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar13);
          *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
          *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
        }
        if (uVar30 + 1 == uVar38) {
          return;
        }
        uVar29 = uVar29 - (int)uVar38;
        pfVar28 = pfVar28 + uVar38;
        pfVar25 = pfVar25 + uVar38;
      }
      uVar1 = uVar29 - 1;
      if ((uVar29 & 3) != 0) {
        uVar32 = 0;
        do {
          fVar41 = *pfVar28;
          if (*pfVar28 <= fVar39) {
            fVar41 = fVar39;
          }
          *pfVar25 = fVar41;
          pfVar25 = pfVar25 + 1;
          pfVar28 = pfVar28 + 1;
          uVar32 = uVar32 + 1;
        } while ((uVar29 & 3) != uVar32);
        uVar29 = uVar29 - uVar32;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar33 = 0;
      do {
        fVar41 = pfVar28[lVar33];
        if (pfVar28[lVar33] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33] = fVar41;
        fVar41 = pfVar28[lVar33 + 1];
        if (pfVar28[lVar33 + 1] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 1] = fVar41;
        fVar41 = pfVar28[lVar33 + 2];
        if (pfVar28[lVar33 + 2] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 2] = fVar41;
        fVar41 = pfVar28[lVar33 + 3];
        if (pfVar28[lVar33 + 3] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 3] = fVar41;
        lVar33 = lVar33 + 4;
      } while (uVar29 != (uint)lVar33);
      return;
    }
    if (lVar33 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        iVar26 = *(int *)(param_9 + 0x28f8);
        if (iVar26 == 0) {
          return;
        }
        fVar39 = *param_11;
        if (*param_11 <= param_11[8]) {
          fVar39 = param_11[8];
        }
        lVar33 = *(long *)param_12;
        if (6 < iVar26 - 1U) {
          uVar30 = (ulong)(iVar26 - 1U) + 1;
          uVar37 = uVar30 & 0xfffffffffffffff8;
          uVar35 = (uVar37 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar35 & 7);
          if (uVar37 - 8 < 0x38) {
            lVar31 = 0;
          }
          else {
            uVar35 = uVar35 & 0x3ffffffffffffff8;
            lVar31 = 0;
            do {
              pfVar25 = (float *)(lVar33 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x10 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x20 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x30 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x40 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x50 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x60 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x70 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x80 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x90 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xa0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xb0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xc0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xd0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xe0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xf0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar31 = lVar31 + 0x40;
              uVar35 = uVar35 - 8;
            } while (uVar35 != 0);
          }
          if (uVar38 != 0) {
            lVar31 = lVar33 + lVar31 * 4;
            lVar36 = 0;
            do {
              pfVar25 = (float *)(lVar31 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar31 + 0x10 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar36 = lVar36 + 0x20;
            } while (uVar38 * 0x20 != lVar36);
          }
          if (uVar30 == uVar37) {
            return;
          }
          iVar26 = iVar26 - (int)uVar37;
          lVar33 = lVar33 + uVar37 * 4;
        }
        lVar31 = 0;
        do {
          *(float *)(lVar33 + lVar31 * 4) = fVar39;
          lVar31 = lVar31 + 1;
        } while (iVar26 != (int)lVar31);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar39 = *param_11;
      if (*param_11 <= param_11[8]) {
        fVar39 = param_11[8];
      }
      goto LAB_005c8822;
    }
    if (lVar33 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        iVar26 = *(int *)(param_9 + 0x28f8);
        if (iVar26 == 0) {
          return;
        }
        fVar39 = (float)*(long *)(param_11 + 8);
        if ((float)*(long *)(param_11 + 8) <= *param_11) {
          fVar39 = *param_11;
        }
        lVar33 = *(long *)param_12;
        if (6 < iVar26 - 1U) {
          uVar30 = (ulong)(iVar26 - 1U) + 1;
          uVar37 = uVar30 & 0xfffffffffffffff8;
          uVar35 = (uVar37 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar35 & 7);
          if (uVar37 - 8 < 0x38) {
            lVar31 = 0;
          }
          else {
            uVar35 = uVar35 & 0x3ffffffffffffff8;
            lVar31 = 0;
            do {
              pfVar25 = (float *)(lVar33 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x10 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x20 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x30 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x40 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x50 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x60 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x70 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x80 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x90 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xa0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xb0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xc0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xd0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xe0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xf0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar31 = lVar31 + 0x40;
              uVar35 = uVar35 - 8;
            } while (uVar35 != 0);
          }
          if (uVar38 != 0) {
            lVar31 = lVar33 + lVar31 * 4;
            lVar36 = 0;
            do {
              pfVar25 = (float *)(lVar31 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar31 + 0x10 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar36 = lVar36 + 0x20;
            } while (uVar38 * 0x20 != lVar36);
          }
          if (uVar30 == uVar37) {
            return;
          }
          iVar26 = iVar26 - (int)uVar37;
          lVar33 = lVar33 + uVar37 * 4;
        }
        lVar31 = 0;
        do {
          *(float *)(lVar33 + lVar31 * 4) = fVar39;
          lVar31 = lVar31 + 1;
        } while (iVar26 != (int)lVar31);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar40 = (double)*param_11;
      dVar24 = (double)*(long *)(param_11 + 8);
      goto LAB_005c8804;
    }
  }
  else {
    if (lVar33 != 1) {
      pcVar34 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005c8328;
    }
    lVar33 = *(long *)(param_11 + 10);
    if (lVar33 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        pfVar25 = *(float **)param_12;
      }
      else {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005c8f53;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        pfVar25 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(float **)param_12 = pfVar25;
      }
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      fVar39 = (float)*(long *)param_11;
      pfVar28 = *(float **)(param_11 + 8);
      uVar30 = (ulong)(uVar29 - 1);
      if ((6 < uVar29 - 1) &&
         ((pfVar28 + uVar30 + 1 <= pfVar25 || (pfVar25 + uVar30 + 1 <= pfVar28)))) {
        uVar38 = uVar30 + 1 & 0xfffffffffffffff8;
        uVar35 = (uVar38 - 8 >> 3) + 1;
        if (uVar38 - 8 == 0) {
          lVar33 = 0;
        }
        else {
          uVar37 = uVar35 & 0xfffffffffffffffe;
          lVar33 = 0;
          do {
            auVar2._4_4_ = fVar39;
            auVar2._0_4_ = fVar39;
            auVar2._8_4_ = fVar39;
            auVar2._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar2);
            auVar3._4_4_ = fVar39;
            auVar3._0_4_ = fVar39;
            auVar3._8_4_ = fVar39;
            auVar3._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar3);
            *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
            auVar4._4_4_ = fVar39;
            auVar4._0_4_ = fVar39;
            auVar4._8_4_ = fVar39;
            auVar4._12_4_ = fVar39;
            auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 8),auVar4);
            auVar5._4_4_ = fVar39;
            auVar5._0_4_ = fVar39;
            auVar5._8_4_ = fVar39;
            auVar5._12_4_ = fVar39;
            auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 0xc),auVar5);
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 8) = auVar42;
            *(undefined1 (*) [16])(pfVar25 + lVar33 + 0xc) = auVar43;
            lVar33 = lVar33 + 0x10;
            uVar37 = uVar37 - 2;
          } while (uVar37 != 0);
        }
        if ((uVar35 & 1) != 0) {
          auVar6._4_4_ = fVar39;
          auVar6._0_4_ = fVar39;
          auVar6._8_4_ = fVar39;
          auVar6._12_4_ = fVar39;
          auVar42 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33),auVar6);
          auVar7._4_4_ = fVar39;
          auVar7._0_4_ = fVar39;
          auVar7._8_4_ = fVar39;
          auVar7._12_4_ = fVar39;
          auVar43 = maxps(*(undefined1 (*) [16])(pfVar28 + lVar33 + 4),auVar7);
          *(undefined1 (*) [16])(pfVar25 + lVar33) = auVar42;
          *(undefined1 (*) [16])(pfVar25 + lVar33 + 4) = auVar43;
        }
        if (uVar30 + 1 == uVar38) {
          return;
        }
        uVar29 = uVar29 - (int)uVar38;
        pfVar28 = pfVar28 + uVar38;
        pfVar25 = pfVar25 + uVar38;
      }
      uVar1 = uVar29 - 1;
      if ((uVar29 & 3) != 0) {
        uVar32 = 0;
        do {
          fVar41 = *pfVar28;
          if (*pfVar28 <= fVar39) {
            fVar41 = fVar39;
          }
          *pfVar25 = fVar41;
          pfVar25 = pfVar25 + 1;
          pfVar28 = pfVar28 + 1;
          uVar32 = uVar32 + 1;
        } while ((uVar29 & 3) != uVar32);
        uVar29 = uVar29 - uVar32;
      }
      if (uVar1 < 3) {
        return;
      }
      lVar33 = 0;
      do {
        fVar41 = pfVar28[lVar33];
        if (pfVar28[lVar33] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33] = fVar41;
        fVar41 = pfVar28[lVar33 + 1];
        if (pfVar28[lVar33 + 1] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 1] = fVar41;
        fVar41 = pfVar28[lVar33 + 2];
        if (pfVar28[lVar33 + 2] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 2] = fVar41;
        fVar41 = pfVar28[lVar33 + 3];
        if (pfVar28[lVar33 + 3] <= fVar39) {
          fVar41 = fVar39;
        }
        pfVar25[lVar33 + 3] = fVar41;
        lVar33 = lVar33 + 4;
      } while (uVar29 != (uint)lVar33);
      return;
    }
    if (lVar33 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        iVar26 = *(int *)(param_9 + 0x28f8);
        if (iVar26 == 0) {
          return;
        }
        fVar39 = param_11[8];
        if (param_11[8] <= (float)*(long *)param_11) {
          fVar39 = (float)*(long *)param_11;
        }
        lVar33 = *(long *)param_12;
        if (6 < iVar26 - 1U) {
          uVar30 = (ulong)(iVar26 - 1U) + 1;
          uVar37 = uVar30 & 0xfffffffffffffff8;
          uVar35 = (uVar37 - 8 >> 3) + 1;
          uVar38 = (ulong)((uint)uVar35 & 7);
          if (uVar37 - 8 < 0x38) {
            lVar31 = 0;
          }
          else {
            uVar35 = uVar35 & 0x3ffffffffffffff8;
            lVar31 = 0;
            do {
              pfVar25 = (float *)(lVar33 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x10 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x20 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x30 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x40 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x50 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x60 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x70 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x80 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0x90 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xa0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xb0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xc0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xd0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xe0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar33 + 0xf0 + lVar31 * 4);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar31 = lVar31 + 0x40;
              uVar35 = uVar35 - 8;
            } while (uVar35 != 0);
          }
          if (uVar38 != 0) {
            lVar31 = lVar33 + lVar31 * 4;
            lVar36 = 0;
            do {
              pfVar25 = (float *)(lVar31 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              pfVar25 = (float *)(lVar31 + 0x10 + lVar36);
              *pfVar25 = fVar39;
              pfVar25[1] = fVar39;
              pfVar25[2] = fVar39;
              pfVar25[3] = fVar39;
              lVar36 = lVar36 + 0x20;
            } while (uVar38 * 0x20 != lVar36);
          }
          if (uVar30 == uVar37) {
            return;
          }
          iVar26 = iVar26 - (int)uVar37;
          lVar33 = lVar33 + uVar37 * 4;
        }
        lVar31 = 0;
        do {
          *(float *)(lVar33 + lVar31 * 4) = fVar39;
          lVar31 = lVar31 + 1;
        } while (iVar26 != (int)lVar31);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar40 = (double)*(long *)param_11;
      dVar24 = (double)param_11[8];
LAB_005c8804:
      if (dVar24 <= dVar40) {
        dVar24 = dVar40;
      }
      fVar39 = (float)dVar24;
LAB_005c8822:
      *param_12 = fVar39;
      return;
    }
    if (lVar33 == 1) {
      if (*(long *)(param_12 + 2) != 0xf) {
        param_12[2] = 1.4013e-45;
        param_12[3] = 0.0;
        dVar24 = (double)*(long *)(param_11 + 8);
        if ((double)*(long *)(param_11 + 8) <= (double)*(long *)param_11) {
          dVar24 = (double)*(long *)param_11;
        }
        *(long *)param_12 = (long)(int)dVar24;
        return;
      }
      iVar26 = *(int *)(param_9 + 0x28f8);
      if (iVar26 == 0) {
        return;
      }
      dVar24 = (double)*(long *)(param_11 + 8);
      if ((double)*(long *)(param_11 + 8) <= (double)*(long *)param_11) {
        dVar24 = (double)*(long *)param_11;
      }
      fVar39 = (float)dVar24;
      lVar33 = *(long *)param_12;
      if (6 < iVar26 - 1U) {
        uVar30 = (ulong)(iVar26 - 1U) + 1;
        uVar37 = uVar30 & 0xfffffffffffffff8;
        uVar35 = (uVar37 - 8 >> 3) + 1;
        uVar38 = (ulong)((uint)uVar35 & 7);
        if (uVar37 - 8 < 0x38) {
          lVar31 = 0;
        }
        else {
          uVar35 = uVar35 & 0x3ffffffffffffff8;
          lVar31 = 0;
          do {
            pfVar25 = (float *)(lVar33 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x10 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x20 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x30 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x40 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x50 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x60 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x70 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x80 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0x90 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xa0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xb0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xc0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xd0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xe0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar33 + 0xf0 + lVar31 * 4);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            lVar31 = lVar31 + 0x40;
            uVar35 = uVar35 - 8;
          } while (uVar35 != 0);
        }
        if (uVar38 != 0) {
          lVar31 = lVar33 + lVar31 * 4;
          lVar36 = 0;
          do {
            pfVar25 = (float *)(lVar31 + lVar36);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            pfVar25 = (float *)(lVar31 + 0x10 + lVar36);
            *pfVar25 = fVar39;
            pfVar25[1] = fVar39;
            pfVar25[2] = fVar39;
            pfVar25[3] = fVar39;
            lVar36 = lVar36 + 0x20;
          } while (uVar38 * 0x20 != lVar36);
        }
        if (uVar30 == uVar37) {
          return;
        }
        iVar26 = iVar26 - (int)uVar37;
        lVar33 = lVar33 + uVar37 * 4;
      }
      lVar31 = 0;
      do {
        *(float *)(lVar33 + lVar31 * 4) = fVar39;
        lVar31 = lVar31 + 1;
      } while (iVar26 != (int)lVar31);
      return;
    }
  }
  pcVar34 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005c8328:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar34,0x251,
           lVar33,param_13,param_14);
  return;
}


