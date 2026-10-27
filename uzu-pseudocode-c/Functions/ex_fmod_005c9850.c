// Function : ex_fmod
// Namespace: 
// Entry    : 005c9850
// Prototype: undefined ex_fmod(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, float * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005c9850 - 005cb3a6


void ex_fmod(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,float *param_11,float *param_12,undefined8 param_13,
            undefined8 param_14)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double __y;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  undefined1 uVar18;
  undefined7 uVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  float fVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 extraout_XMM0_Db;
  undefined8 local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar18 = (undefined1)param_13;
  uVar19 = (undefined7)((ulong)param_13 >> 8);
  lVar14 = *(long *)(param_11 + 2);
  if (lVar14 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      pfVar7 = *(float **)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005cb38f:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 2.10195e-44;
      param_12[3] = 0.0;
      pfVar7 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      *(float **)param_12 = pfVar7;
    }
    pfVar20 = *(float **)param_11;
    lVar14 = *(long *)(param_11 + 10);
    if (lVar14 - 0xeU < 2) {
      uVar22 = *(uint *)(param_9 + 0x28f8);
      if (uVar22 == 0) {
        return;
      }
      pfVar21 = *(float **)(param_11 + 8);
      uVar10 = (ulong)(uVar22 - 1);
      if (6 < uVar22 - 1) {
        if ((pfVar20 + uVar10 + 1 <= pfVar7 || pfVar7 + uVar10 + 1 <= pfVar20) &&
           (pfVar21 + uVar10 + 1 <= pfVar7 || pfVar7 + uVar10 + 1 <= pfVar21)) {
          uVar8 = uVar10 + 1 & 0xfffffffffffffff8;
          uVar22 = uVar22 - (int)uVar8;
          uVar15 = 0;
          do {
            pfVar1 = pfVar20 + uVar15;
            fVar23 = *pfVar1;
            fVar27 = pfVar1[1];
            fVar28 = pfVar1[2];
            uVar4 = *(undefined8 *)(pfVar20 + uVar15 + 4);
            uVar5 = *(undefined8 *)(pfVar20 + uVar15 + 4 + 2);
            pfVar2 = pfVar21 + uVar15;
            fVar26 = *pfVar2;
            fVar25 = pfVar2[1];
            fVar29 = pfVar2[2];
            auVar6 = *(undefined1 (*) [16])(pfVar21 + uVar15 + 4);
            fVar30 = fmodf(pfVar1[3],pfVar2[3]);
            fVar28 = fmodf(fVar28,fVar29);
            fVar23 = fmodf(fVar23,fVar26);
            fVar27 = fmodf(fVar27,fVar25);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fStack_4c = auVar6._12_4_;
            fVar26 = fmodf(fStack_ac,fStack_4c);
            fStack_b0 = (float)uVar5;
            fStack_50 = auVar6._8_4_;
            fVar25 = fmodf(fStack_b0,fStack_50);
            local_b8 = (float)uVar4;
            local_58 = auVar6._0_4_;
            fVar29 = fmodf(local_b8,local_58);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fStack_54 = auVar6._4_4_;
            fVar24 = fmodf(fStack_b4,fStack_54);
            *(ulong *)(pfVar7 + uVar15) = CONCAT44(fVar27,fVar23);
            *(ulong *)(pfVar7 + uVar15 + 2) = CONCAT44(fVar30,fVar28);
            pfVar1 = pfVar7 + uVar15 + 4;
            *pfVar1 = fVar29;
            pfVar1[1] = fVar24;
            pfVar1[2] = fVar25;
            pfVar1[3] = fVar26;
            uVar15 = uVar15 + 8;
          } while (uVar8 != uVar15);
          pfVar21 = pfVar21 + uVar8;
          pfVar20 = pfVar20 + uVar8;
          pfVar7 = pfVar7 + uVar8;
          if (uVar10 + 1 == uVar8) {
            return;
          }
        }
      }
      uVar12 = uVar22;
      if ((uVar22 & 1) != 0) {
        fVar23 = fmodf(*pfVar20,*pfVar21);
        *pfVar7 = fVar23;
        pfVar7 = pfVar7 + 1;
        pfVar21 = pfVar21 + 1;
        pfVar20 = pfVar20 + 1;
        uVar12 = uVar22 - 1;
      }
      if (uVar22 == 1) {
        return;
      }
      lVar14 = 0;
      do {
        fVar23 = fmodf(pfVar20[lVar14],pfVar21[lVar14]);
        pfVar7[lVar14] = fVar23;
        fVar23 = fmodf(pfVar20[lVar14 + 1],pfVar21[lVar14 + 1]);
        pfVar7[lVar14 + 1] = fVar23;
        lVar14 = lVar14 + 2;
      } while (uVar12 != (uint)lVar14);
      return;
    }
    if (lVar14 == 2) {
      uVar22 = *(uint *)(param_9 + 0x28f8);
      if (uVar22 == 0) {
        return;
      }
      fVar23 = param_11[8];
      uVar10 = (ulong)(uVar22 - 1);
      if ((6 < uVar22 - 1) && ((pfVar20 + uVar10 + 1 <= pfVar7 || (pfVar7 + uVar10 + 1 <= pfVar20)))
         ) {
        uVar8 = uVar10 + 1 & 0xfffffffffffffff8;
        uVar15 = (uVar8 - 8 >> 3) + 1;
        if (uVar8 - 8 == 0) {
          lVar14 = 0;
        }
        else {
          uVar17 = uVar15 & 0x3ffffffffffffffe;
          lVar14 = 0;
          do {
            pfVar21 = pfVar20 + lVar14;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
            fVar25 = fmodf(pfVar21[3],fVar23);
            fVar26 = fmodf(fVar26,fVar23);
            fVar27 = fmodf(fVar27,fVar23);
            fVar28 = fmodf(fVar28,fVar23);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fStack_ac,fVar23);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fStack_b0,fVar23);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(local_b8,fVar23);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fStack_b4,fVar23);
            *(undefined8 *)(pfVar7 + lVar14) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 4;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            pfVar21 = pfVar20 + lVar14 + 8;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 0xc);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 0xc + 2);
            fVar25 = fmodf(pfVar21[3],fVar23);
            fVar26 = fmodf(fVar26,fVar23);
            fVar27 = fmodf(fVar27,fVar23);
            fVar28 = fmodf(fVar28,fVar23);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fStack_ac,fVar23);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fStack_b0,fVar23);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(local_b8,fVar23);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fStack_b4,fVar23);
            *(undefined8 *)(pfVar7 + lVar14 + 8) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 8 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 0xc;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            lVar14 = lVar14 + 0x10;
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        if ((uVar15 & 1) != 0) {
          pfVar21 = pfVar20 + lVar14;
          fVar27 = *pfVar21;
          fVar28 = pfVar21[1];
          fVar26 = pfVar21[2];
          uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
          uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
          fVar25 = fmodf(pfVar21[3],fVar23);
          fVar26 = fmodf(fVar26,fVar23);
          fVar27 = fmodf(fVar27,fVar23);
          fVar28 = fmodf(fVar28,fVar23);
          local_c8 = CONCAT44(fVar28,fVar27);
          fStack_ac = (float)((ulong)uVar5 >> 0x20);
          fVar27 = fmodf(fStack_ac,fVar23);
          fStack_b0 = (float)uVar5;
          fVar28 = fmodf(fStack_b0,fVar23);
          local_b8 = (float)uVar4;
          fVar29 = fmodf(local_b8,fVar23);
          fStack_b4 = (float)((ulong)uVar4 >> 0x20);
          fVar30 = fmodf(fStack_b4,fVar23);
          *(undefined8 *)(pfVar7 + lVar14) = local_c8;
          *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
          pfVar21 = pfVar7 + lVar14 + 4;
          *pfVar21 = fVar29;
          pfVar21[1] = fVar30;
          pfVar21[2] = fVar28;
          pfVar21[3] = fVar27;
        }
        if (uVar10 + 1 == uVar8) {
          return;
        }
        uVar22 = uVar22 - (int)uVar8;
        pfVar20 = pfVar20 + uVar8;
        pfVar7 = pfVar7 + uVar8;
      }
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22;
      }
      else {
        uVar12 = uVar22 - 1;
        fVar27 = fmodf(*pfVar20,fVar23);
        *pfVar7 = fVar27;
        pfVar7 = pfVar7 + 1;
        pfVar20 = pfVar20 + 1;
      }
      if (uVar22 == 1) {
        return;
      }
      lVar14 = 0;
      do {
        fVar27 = fmodf(pfVar20[lVar14],fVar23);
        pfVar7[lVar14] = fVar27;
        fVar27 = fmodf(pfVar20[lVar14 + 1],fVar23);
        pfVar7[lVar14 + 1] = fVar27;
        lVar14 = lVar14 + 2;
      } while (uVar12 != (uint)lVar14);
      return;
    }
    if (lVar14 == 1) {
      uVar22 = *(uint *)(param_9 + 0x28f8);
      if (uVar22 == 0) {
        return;
      }
      fVar23 = (float)*(long *)(param_11 + 8);
      uVar10 = (ulong)(uVar22 - 1);
      if ((6 < uVar22 - 1) && ((pfVar20 + uVar10 + 1 <= pfVar7 || (pfVar7 + uVar10 + 1 <= pfVar20)))
         ) {
        uVar8 = uVar10 + 1 & 0xfffffffffffffff8;
        uVar15 = (uVar8 - 8 >> 3) + 1;
        if (uVar8 - 8 == 0) {
          lVar14 = 0;
        }
        else {
          uVar17 = uVar15 & 0x3ffffffffffffffe;
          lVar14 = 0;
          do {
            pfVar21 = pfVar20 + lVar14;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
            fVar25 = fmodf(pfVar21[3],fVar23);
            fVar26 = fmodf(fVar26,fVar23);
            fVar27 = fmodf(fVar27,fVar23);
            fVar28 = fmodf(fVar28,fVar23);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fStack_ac,fVar23);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fStack_b0,fVar23);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(local_b8,fVar23);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fStack_b4,fVar23);
            *(undefined8 *)(pfVar7 + lVar14) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 4;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            pfVar21 = pfVar20 + lVar14 + 8;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 0xc);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 0xc + 2);
            fVar25 = fmodf(pfVar21[3],fVar23);
            fVar26 = fmodf(fVar26,fVar23);
            fVar27 = fmodf(fVar27,fVar23);
            fVar28 = fmodf(fVar28,fVar23);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fStack_ac,fVar23);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fStack_b0,fVar23);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(local_b8,fVar23);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fStack_b4,fVar23);
            *(undefined8 *)(pfVar7 + lVar14 + 8) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 8 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 0xc;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            lVar14 = lVar14 + 0x10;
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        if ((uVar15 & 1) != 0) {
          pfVar21 = pfVar20 + lVar14;
          fVar27 = *pfVar21;
          fVar28 = pfVar21[1];
          fVar26 = pfVar21[2];
          uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
          uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
          fVar25 = fmodf(pfVar21[3],fVar23);
          fVar26 = fmodf(fVar26,fVar23);
          fVar27 = fmodf(fVar27,fVar23);
          fVar28 = fmodf(fVar28,fVar23);
          local_c8 = CONCAT44(fVar28,fVar27);
          fStack_ac = (float)((ulong)uVar5 >> 0x20);
          fVar27 = fmodf(fStack_ac,fVar23);
          fStack_b0 = (float)uVar5;
          fVar28 = fmodf(fStack_b0,fVar23);
          local_b8 = (float)uVar4;
          fVar29 = fmodf(local_b8,fVar23);
          fStack_b4 = (float)((ulong)uVar4 >> 0x20);
          fVar30 = fmodf(fStack_b4,fVar23);
          *(undefined8 *)(pfVar7 + lVar14) = local_c8;
          *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
          pfVar21 = pfVar7 + lVar14 + 4;
          *pfVar21 = fVar29;
          pfVar21[1] = fVar30;
          pfVar21[2] = fVar28;
          pfVar21[3] = fVar27;
        }
        if (uVar10 + 1 == uVar8) {
          return;
        }
        uVar22 = uVar22 - (int)uVar8;
        pfVar20 = pfVar20 + uVar8;
        pfVar7 = pfVar7 + uVar8;
      }
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22;
      }
      else {
        uVar12 = uVar22 - 1;
        fVar27 = fmodf(*pfVar20,fVar23);
        *pfVar7 = fVar27;
        pfVar7 = pfVar7 + 1;
        pfVar20 = pfVar20 + 1;
      }
      if (uVar22 == 1) {
        return;
      }
      lVar14 = 0;
      do {
        fVar27 = fmodf(pfVar20[lVar14],fVar23);
        pfVar7[lVar14] = fVar27;
        fVar27 = fmodf(pfVar20[lVar14 + 1],fVar23);
        pfVar7[lVar14 + 1] = fVar27;
        lVar14 = lVar14 + 2;
      } while (uVar12 != (uint)lVar14);
      return;
    }
  }
  else if (lVar14 == 2) {
    lVar14 = *(long *)(param_11 + 10);
    if (lVar14 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        pfVar7 = *(float **)param_12;
      }
      else {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cb38f;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        pfVar7 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(float **)param_12 = pfVar7;
      }
      uVar22 = *(uint *)(param_9 + 0x28f8);
      if (uVar22 == 0) {
        return;
      }
      fVar23 = *param_11;
      pfVar20 = *(float **)(param_11 + 8);
      uVar10 = (ulong)(uVar22 - 1);
      if ((6 < uVar22 - 1) && ((pfVar20 + uVar10 + 1 <= pfVar7 || (pfVar7 + uVar10 + 1 <= pfVar20)))
         ) {
        uVar8 = uVar10 + 1 & 0xfffffffffffffff8;
        uVar15 = (uVar8 - 8 >> 3) + 1;
        if (uVar8 - 8 == 0) {
          lVar14 = 0;
        }
        else {
          uVar17 = uVar15 & 0x3ffffffffffffffe;
          lVar14 = 0;
          do {
            pfVar21 = pfVar20 + lVar14;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
            fVar25 = fmodf(fVar23,pfVar21[3]);
            fVar26 = fmodf(fVar23,fVar26);
            fVar27 = fmodf(fVar23,fVar27);
            fVar28 = fmodf(fVar23,fVar28);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fVar23,fStack_ac);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fVar23,fStack_b0);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(fVar23,local_b8);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fVar23,fStack_b4);
            *(undefined8 *)(pfVar7 + lVar14) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 4;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            pfVar21 = pfVar20 + lVar14 + 8;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 0xc);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 0xc + 2);
            fVar25 = fmodf(fVar23,pfVar21[3]);
            fVar26 = fmodf(fVar23,fVar26);
            fVar27 = fmodf(fVar23,fVar27);
            fVar28 = fmodf(fVar23,fVar28);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fVar23,fStack_ac);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fVar23,fStack_b0);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(fVar23,local_b8);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fVar23,fStack_b4);
            *(undefined8 *)(pfVar7 + lVar14 + 8) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 8 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 0xc;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            lVar14 = lVar14 + 0x10;
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        if ((uVar15 & 1) != 0) {
          pfVar21 = pfVar20 + lVar14;
          fVar27 = *pfVar21;
          fVar28 = pfVar21[1];
          fVar26 = pfVar21[2];
          uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
          uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
          fVar25 = fmodf(fVar23,pfVar21[3]);
          fVar26 = fmodf(fVar23,fVar26);
          fVar27 = fmodf(fVar23,fVar27);
          fVar28 = fmodf(fVar23,fVar28);
          local_c8 = CONCAT44(fVar28,fVar27);
          fStack_ac = (float)((ulong)uVar5 >> 0x20);
          fVar27 = fmodf(fVar23,fStack_ac);
          fStack_b0 = (float)uVar5;
          fVar28 = fmodf(fVar23,fStack_b0);
          local_b8 = (float)uVar4;
          fVar29 = fmodf(fVar23,local_b8);
          fStack_b4 = (float)((ulong)uVar4 >> 0x20);
          fVar30 = fmodf(fVar23,fStack_b4);
          *(undefined8 *)(pfVar7 + lVar14) = local_c8;
          *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
          pfVar21 = pfVar7 + lVar14 + 4;
          *pfVar21 = fVar29;
          pfVar21[1] = fVar30;
          pfVar21[2] = fVar28;
          pfVar21[3] = fVar27;
        }
        if (uVar10 + 1 == uVar8) {
          return;
        }
        uVar22 = uVar22 - (int)uVar8;
        pfVar20 = pfVar20 + uVar8;
        pfVar7 = pfVar7 + uVar8;
      }
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22;
      }
      else {
        uVar12 = uVar22 - 1;
        fVar27 = fmodf(fVar23,*pfVar20);
        *pfVar7 = fVar27;
        pfVar7 = pfVar7 + 1;
        pfVar20 = pfVar20 + 1;
      }
      if (uVar22 == 1) {
        return;
      }
      lVar14 = 0;
      do {
        fVar27 = fmodf(fVar23,pfVar20[lVar14]);
        pfVar7[lVar14] = fVar27;
        fVar27 = fmodf(fVar23,pfVar20[lVar14 + 1]);
        pfVar7[lVar14 + 1] = fVar27;
        lVar14 = lVar14 + 2;
      } while (uVar12 != (uint)lVar14);
      return;
    }
    if (lVar14 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        fVar23 = fmodf(*param_11,param_11[8]);
        iVar9 = *(int *)(param_9 + 0x28f8);
        if (iVar9 == 0) {
          return;
        }
        lVar14 = *(long *)param_12;
        if (6 < iVar9 - 1U) {
          uVar10 = (ulong)(iVar9 - 1U) + 1;
          uVar15 = uVar10 & 0xfffffffffffffff8;
          uVar17 = (uVar15 - 8 >> 3) + 1;
          uVar8 = (ulong)((uint)uVar17 & 7);
          if (uVar15 - 8 < 0x38) {
            lVar11 = 0;
          }
          else {
            uVar17 = uVar17 & 0xfffffffffffffff8;
            lVar11 = 0;
            do {
              pfVar7 = (float *)(lVar14 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x10 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x20 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x30 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x40 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x50 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x60 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x70 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x80 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x90 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xa0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xb0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xc0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xd0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xe0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xf0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar11 = lVar11 + 0x40;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          if (uVar8 != 0) {
            lVar11 = lVar14 + lVar11 * 4;
            lVar13 = 0;
            do {
              pfVar7 = (float *)(lVar11 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar11 + 0x10 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar13 = lVar13 + 0x20;
            } while (uVar8 * 0x20 != lVar13);
          }
          if (uVar10 == uVar15) {
            return;
          }
          iVar9 = iVar9 - (int)uVar15;
          lVar14 = lVar14 + uVar15 * 4;
        }
        lVar11 = 0;
        do {
          *(float *)(lVar14 + lVar11 * 4) = fVar23;
          lVar11 = lVar11 + 1;
        } while (iVar9 != (int)lVar11);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      fVar23 = fmodf(*param_11,param_11[8]);
      goto LAB_005ca948;
    }
    if (lVar14 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar3 = fmod((double)*param_11,(double)*(long *)(param_11 + 8));
        iVar9 = *(int *)(param_9 + 0x28f8);
        if (iVar9 == 0) {
          return;
        }
        fVar23 = (float)dVar3;
        lVar14 = *(long *)param_12;
        if (6 < iVar9 - 1U) {
          uVar10 = (ulong)(iVar9 - 1U) + 1;
          uVar15 = uVar10 & 0xfffffffffffffff8;
          uVar17 = (uVar15 - 8 >> 3) + 1;
          uVar8 = (ulong)((uint)uVar17 & 7);
          if (uVar15 - 8 < 0x38) {
            lVar11 = 0;
          }
          else {
            uVar17 = uVar17 & 0xfffffffffffffff8;
            lVar11 = 0;
            do {
              pfVar7 = (float *)(lVar14 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x10 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x20 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x30 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x40 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x50 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x60 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x70 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x80 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x90 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xa0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xb0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xc0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xd0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xe0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xf0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar11 = lVar11 + 0x40;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          if (uVar8 != 0) {
            lVar11 = lVar14 + lVar11 * 4;
            lVar13 = 0;
            do {
              pfVar7 = (float *)(lVar11 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar11 + 0x10 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar13 = lVar13 + 0x20;
            } while (uVar8 * 0x20 != lVar13);
          }
          if (uVar10 == uVar15) {
            return;
          }
          iVar9 = iVar9 - (int)uVar15;
          lVar14 = lVar14 + uVar15 * 4;
        }
        lVar11 = 0;
        do {
          *(float *)(lVar14 + lVar11 * 4) = fVar23;
          lVar11 = lVar11 + 1;
        } while (iVar9 != (int)lVar11);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar3 = (double)*param_11;
LAB_005ca907:
      __y = (double)*(long *)(param_11 + 8);
      goto LAB_005ca926;
    }
  }
  else {
    if (lVar14 != 1) {
      pcVar16 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005c9d03;
    }
    lVar14 = *(long *)(param_11 + 10);
    if (lVar14 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        pfVar7 = *(float **)param_12;
      }
      else {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005cb38f;
        param_12[2] = 2.10195e-44;
        param_12[3] = 0.0;
        pfVar7 = (float *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(float **)param_12 = pfVar7;
      }
      uVar22 = *(uint *)(param_9 + 0x28f8);
      if (uVar22 == 0) {
        return;
      }
      fVar23 = (float)*(long *)param_11;
      pfVar20 = *(float **)(param_11 + 8);
      uVar10 = (ulong)(uVar22 - 1);
      if ((6 < uVar22 - 1) && ((pfVar20 + uVar10 + 1 <= pfVar7 || (pfVar7 + uVar10 + 1 <= pfVar20)))
         ) {
        uVar8 = uVar10 + 1 & 0xfffffffffffffff8;
        uVar15 = (uVar8 - 8 >> 3) + 1;
        if (uVar8 - 8 == 0) {
          lVar14 = 0;
        }
        else {
          uVar17 = uVar15 & 0x3ffffffffffffffe;
          lVar14 = 0;
          do {
            pfVar21 = pfVar20 + lVar14;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
            fVar25 = fmodf(fVar23,pfVar21[3]);
            fVar26 = fmodf(fVar23,fVar26);
            fVar27 = fmodf(fVar23,fVar27);
            fVar28 = fmodf(fVar23,fVar28);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fVar23,fStack_ac);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fVar23,fStack_b0);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(fVar23,local_b8);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fVar23,fStack_b4);
            *(undefined8 *)(pfVar7 + lVar14) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 4;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            pfVar21 = pfVar20 + lVar14 + 8;
            fVar27 = *pfVar21;
            fVar28 = pfVar21[1];
            fVar26 = pfVar21[2];
            uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 0xc);
            uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 0xc + 2);
            fVar25 = fmodf(fVar23,pfVar21[3]);
            fVar26 = fmodf(fVar23,fVar26);
            fVar27 = fmodf(fVar23,fVar27);
            fVar28 = fmodf(fVar23,fVar28);
            local_c8 = CONCAT44(fVar28,fVar27);
            fStack_ac = (float)((ulong)uVar5 >> 0x20);
            fVar27 = fmodf(fVar23,fStack_ac);
            fStack_b0 = (float)uVar5;
            fVar28 = fmodf(fVar23,fStack_b0);
            local_b8 = (float)uVar4;
            fVar29 = fmodf(fVar23,local_b8);
            fStack_b4 = (float)((ulong)uVar4 >> 0x20);
            fVar30 = fmodf(fVar23,fStack_b4);
            *(undefined8 *)(pfVar7 + lVar14 + 8) = local_c8;
            *(ulong *)(pfVar7 + lVar14 + 8 + 2) = CONCAT44(fVar25,fVar26);
            pfVar21 = pfVar7 + lVar14 + 0xc;
            *pfVar21 = fVar29;
            pfVar21[1] = fVar30;
            pfVar21[2] = fVar28;
            pfVar21[3] = fVar27;
            lVar14 = lVar14 + 0x10;
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        if ((uVar15 & 1) != 0) {
          pfVar21 = pfVar20 + lVar14;
          fVar27 = *pfVar21;
          fVar28 = pfVar21[1];
          fVar26 = pfVar21[2];
          uVar4 = *(undefined8 *)(pfVar20 + lVar14 + 4);
          uVar5 = *(undefined8 *)(pfVar20 + lVar14 + 4 + 2);
          fVar25 = fmodf(fVar23,pfVar21[3]);
          fVar26 = fmodf(fVar23,fVar26);
          fVar27 = fmodf(fVar23,fVar27);
          fVar28 = fmodf(fVar23,fVar28);
          local_c8 = CONCAT44(fVar28,fVar27);
          fStack_ac = (float)((ulong)uVar5 >> 0x20);
          fVar27 = fmodf(fVar23,fStack_ac);
          fStack_b0 = (float)uVar5;
          fVar28 = fmodf(fVar23,fStack_b0);
          local_b8 = (float)uVar4;
          fVar29 = fmodf(fVar23,local_b8);
          fStack_b4 = (float)((ulong)uVar4 >> 0x20);
          fVar30 = fmodf(fVar23,fStack_b4);
          *(undefined8 *)(pfVar7 + lVar14) = local_c8;
          *(ulong *)(pfVar7 + lVar14 + 2) = CONCAT44(fVar25,fVar26);
          pfVar21 = pfVar7 + lVar14 + 4;
          *pfVar21 = fVar29;
          pfVar21[1] = fVar30;
          pfVar21[2] = fVar28;
          pfVar21[3] = fVar27;
        }
        if (uVar10 + 1 == uVar8) {
          return;
        }
        uVar22 = uVar22 - (int)uVar8;
        pfVar20 = pfVar20 + uVar8;
        pfVar7 = pfVar7 + uVar8;
      }
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar22;
      }
      else {
        uVar12 = uVar22 - 1;
        fVar27 = fmodf(fVar23,*pfVar20);
        *pfVar7 = fVar27;
        pfVar7 = pfVar7 + 1;
        pfVar20 = pfVar20 + 1;
      }
      if (uVar22 == 1) {
        return;
      }
      lVar14 = 0;
      do {
        fVar27 = fmodf(fVar23,pfVar20[lVar14]);
        pfVar7[lVar14] = fVar27;
        fVar27 = fmodf(fVar23,pfVar20[lVar14 + 1]);
        pfVar7[lVar14 + 1] = fVar27;
        lVar14 = lVar14 + 2;
      } while (uVar12 != (uint)lVar14);
      return;
    }
    if (lVar14 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar3 = fmod((double)*(long *)param_11,(double)param_11[8]);
        iVar9 = *(int *)(param_9 + 0x28f8);
        if (iVar9 == 0) {
          return;
        }
        fVar23 = (float)dVar3;
        lVar14 = *(long *)param_12;
        if (6 < iVar9 - 1U) {
          uVar10 = (ulong)(iVar9 - 1U) + 1;
          uVar15 = uVar10 & 0xfffffffffffffff8;
          uVar17 = (uVar15 - 8 >> 3) + 1;
          uVar8 = (ulong)((uint)uVar17 & 7);
          if (uVar15 - 8 < 0x38) {
            lVar11 = 0;
          }
          else {
            uVar17 = uVar17 & 0xfffffffffffffff8;
            lVar11 = 0;
            do {
              pfVar7 = (float *)(lVar14 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x10 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x20 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x30 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x40 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x50 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x60 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x70 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x80 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x90 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xa0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xb0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xc0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xd0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xe0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xf0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar11 = lVar11 + 0x40;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          if (uVar8 != 0) {
            lVar11 = lVar14 + lVar11 * 4;
            lVar13 = 0;
            do {
              pfVar7 = (float *)(lVar11 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar11 + 0x10 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar13 = lVar13 + 0x20;
            } while (uVar8 * 0x20 != lVar13);
          }
          if (uVar10 == uVar15) {
            return;
          }
          iVar9 = iVar9 - (int)uVar15;
          lVar14 = lVar14 + uVar15 * 4;
        }
        lVar11 = 0;
        do {
          *(float *)(lVar14 + lVar11 * 4) = fVar23;
          lVar11 = lVar11 + 1;
        } while (iVar9 != (int)lVar11);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar3 = (double)*(long *)param_11;
      __y = (double)param_11[8];
LAB_005ca926:
      dVar3 = fmod(dVar3,__y);
      fVar23 = (float)dVar3;
LAB_005ca948:
      *param_12 = fVar23;
      return;
    }
    if (lVar14 == 1) {
      if (*(long *)(param_12 + 2) == 0xf) {
        dVar3 = fmod((double)*(long *)param_11,(double)*(long *)(param_11 + 8));
        iVar9 = *(int *)(param_9 + 0x28f8);
        if (iVar9 == 0) {
          return;
        }
        fVar23 = (float)dVar3;
        lVar14 = *(long *)param_12;
        if (6 < iVar9 - 1U) {
          uVar10 = (ulong)(iVar9 - 1U) + 1;
          uVar15 = uVar10 & 0xfffffffffffffff8;
          uVar17 = (uVar15 - 8 >> 3) + 1;
          uVar8 = (ulong)((uint)uVar17 & 7);
          if (uVar15 - 8 < 0x38) {
            lVar11 = 0;
          }
          else {
            uVar17 = uVar17 & 0xfffffffffffffff8;
            lVar11 = 0;
            do {
              pfVar7 = (float *)(lVar14 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x10 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x20 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x30 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x40 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x50 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x60 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x70 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x80 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0x90 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xa0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xb0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xc0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xd0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xe0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar14 + 0xf0 + lVar11 * 4);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar11 = lVar11 + 0x40;
              uVar17 = uVar17 - 8;
            } while (uVar17 != 0);
          }
          if (uVar8 != 0) {
            lVar11 = lVar14 + lVar11 * 4;
            lVar13 = 0;
            do {
              pfVar7 = (float *)(lVar11 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              pfVar7 = (float *)(lVar11 + 0x10 + lVar13);
              *pfVar7 = fVar23;
              pfVar7[1] = fVar23;
              pfVar7[2] = fVar23;
              pfVar7[3] = fVar23;
              lVar13 = lVar13 + 0x20;
            } while (uVar8 * 0x20 != lVar13);
          }
          if (uVar10 == uVar15) {
            return;
          }
          iVar9 = iVar9 - (int)uVar15;
          lVar14 = lVar14 + uVar15 * 4;
        }
        lVar11 = 0;
        do {
          *(float *)(lVar14 + lVar11 * 4) = fVar23;
          lVar11 = lVar11 + 1;
        } while (iVar9 != (int)lVar11);
        return;
      }
      param_12[2] = 2.8026e-45;
      param_12[3] = 0.0;
      dVar3 = (double)*(long *)param_11;
      goto LAB_005ca907;
    }
  }
  pcVar16 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005c9d03:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar16,0x35e,
           lVar14,(char *)CONCAT71(uVar19,uVar18),param_14);
  return;
}


