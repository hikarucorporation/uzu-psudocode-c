// Function : ex_copysign
// Namespace: 
// Entry    : 005d49c0
// Prototype: undefined ex_copysign(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, float * param_11, uint * param_12, char * param_13, undefined8 param_14)
// Body     : 005d49c0 - 005d5b99


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ex_copysign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,float *param_11,uint *param_12,char *param_13,
                undefined8 param_14)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  float fVar27;
  undefined8 extraout_XMM0_Qa;
  float fVar28;
  uint uVar29;
  uint uVar30;
  undefined8 extraout_XMM1_Qa;
  undefined4 uVar31;
  uint uVar32;
  undefined8 in_XMM2_Qb;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  
  lVar21 = *(long *)(param_11 + 2);
  if (lVar21 - 0xeU < 2) {
    if (*(long *)(param_12 + 2) == 0xf) {
      puVar13 = *(uint **)param_12;
    }
    else {
      if (*(long *)(param_12 + 2) == 0xe) {
LAB_005d5b82:
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"expr~: Int. error %d")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_12[2] = 0xf;
      param_12[3] = 0;
      puVar13 = (uint *)ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
      *(uint **)param_12 = puVar13;
      param_1 = extraout_XMM0_Qa;
      param_2 = extraout_XMM1_Qa;
    }
    uVar29 = _DAT_006524b0;
    uVar26 = _DAT_005d91c0;
    puVar23 = *(uint **)param_11;
    lVar21 = *(long *)(param_11 + 10);
    if (lVar21 - 0xeU < 2) {
      uVar35 = *(uint *)(param_9 + 0x28f8);
      if (uVar35 == 0) {
        return;
      }
      puVar15 = *(uint **)(param_11 + 8);
      uVar17 = (ulong)(uVar35 - 1);
      if (6 < uVar35 - 1) {
        if ((puVar23 + uVar17 + 1 <= puVar13 || puVar13 + uVar17 + 1 <= puVar23) &&
           (puVar15 + uVar17 + 1 <= puVar13 || puVar13 + uVar17 + 1 <= puVar15)) {
          uVar22 = uVar17 + 1 & 0xfffffffffffffff8;
          uVar35 = uVar35 - (int)uVar22;
          uVar16 = 0;
          do {
            puVar18 = puVar23 + uVar16;
            uVar30 = puVar18[2];
            uVar32 = puVar18[3];
            puVar1 = puVar23 + uVar16 + 4;
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            uVar14 = *(undefined8 *)(puVar15 + uVar16 + 2);
            uVar3 = *(undefined8 *)(puVar15 + uVar16 + 4);
            uVar4 = *(undefined8 *)(puVar15 + uVar16 + 6);
            *(ulong *)(puVar13 + uVar16) =
                 CONCAT44(~uVar26 & (uint)((ulong)*(undefined8 *)(puVar15 + uVar16) >> 0x20) |
                          puVar18[1] & uVar26,
                          (uint)*(undefined8 *)(puVar15 + uVar16) & uVar29 | *puVar18 & uVar26);
            *(ulong *)(puVar13 + uVar16 + 2) =
                 CONCAT44(~uVar26 & (uint)((ulong)uVar14 >> 0x20) | uVar32 & uVar26,
                          ~uVar26 & (uint)uVar14 | uVar30 & uVar26);
            *(ulong *)(puVar13 + uVar16 + 4) =
                 CONCAT44(~uVar26 & (uint)((ulong)uVar3 >> 0x20) | uVar8 & uVar26,
                          ~uVar26 & (uint)uVar3 | uVar7 & uVar26);
            *(ulong *)(puVar13 + uVar16 + 4 + 2) =
                 CONCAT44(~uVar26 & (uint)((ulong)uVar4 >> 0x20) | uVar10 & uVar26,
                          ~uVar26 & (uint)uVar4 | uVar9 & uVar26);
            uVar16 = uVar16 + 8;
          } while (uVar22 != uVar16);
          puVar15 = puVar15 + uVar22;
          puVar13 = puVar13 + uVar22;
          puVar23 = puVar23 + uVar22;
          if (uVar17 + 1 == uVar22) {
            return;
          }
        }
      }
      uVar26 = uVar35;
      uVar29 = _DAT_005d91c0;
      uVar30 = _DAT_006524b0;
      if ((uVar35 & 1) != 0) {
        *puVar13 = *puVar23 & _DAT_005d91c0 | *puVar15 & _DAT_006524b0;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
        puVar23 = puVar23 + 1;
        uVar26 = uVar35 - 1;
        uVar29 = _DAT_005d91c0;
        uVar30 = _DAT_006524b0;
      }
      _DAT_005d91c0 = uVar29;
      _DAT_006524b0 = uVar30;
      if (uVar35 != 1) {
        lVar21 = 0;
        do {
          puVar13[lVar21] = puVar15[lVar21] & uVar30 | puVar23[lVar21] & uVar29;
          puVar13[lVar21 + 1] = puVar23[lVar21 + 1] & uVar29 | ~uVar29 & puVar15[lVar21 + 1];
          lVar21 = lVar21 + 2;
        } while (uVar26 != (uint)lVar21);
      }
      return;
    }
    if (lVar21 == 2) {
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      fVar27 = param_11[8];
      uVar17 = (ulong)(uVar29 - 1);
      if ((uVar29 - 1 < 7) || ((puVar13 < puVar23 + uVar17 + 1 && (puVar23 < puVar13 + uVar17 + 1)))
         ) {
        puVar15 = puVar23;
        puVar18 = puVar13;
      }
      else {
        uVar16 = uVar17 + 1 & 0xfffffffffffffff8;
        uVar29 = uVar29 - (int)uVar16;
        puVar15 = puVar23 + uVar16;
        puVar18 = puVar13 + uVar16;
        uVar22 = 0;
        uVar31 = (undefined4)((ulong)(double)fVar27 >> 0x20);
        auVar6._4_8_ = in_XMM2_Qb;
        auVar6._0_4_ = uVar31;
        auVar34._0_8_ = auVar6._0_8_ << 0x20;
        auVar34._8_4_ = SUB84((double)fVar27,0);
        auVar34._12_4_ = uVar31;
        uVar30 = ~_DAT_005d91c0 & (uint)(float)auVar34._8_8_;
        uVar35 = (uint)(float)auVar34._8_8_ & _DAT_006524b0;
        do {
          puVar1 = puVar23 + uVar22;
          uVar32 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = puVar23 + uVar22 + 4;
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(ulong *)(puVar13 + uVar22) =
               CONCAT44(puVar1[1] & uVar26 | uVar30,~uVar26 & (uint)fVar27 | *puVar1 & uVar26);
          *(ulong *)(puVar13 + uVar22 + 2) =
               CONCAT44(uVar7 & uVar26 | uVar35,~uVar26 & (uint)fVar27 | uVar32 & uVar26);
          *(ulong *)(puVar13 + uVar22 + 4) =
               CONCAT44(uVar9 & uVar26 | uVar30,~uVar26 & (uint)fVar27 | uVar8 & uVar26);
          *(ulong *)(puVar13 + uVar22 + 4 + 2) =
               CONCAT44(uVar11 & uVar26 | uVar30,~uVar26 & (uint)fVar27 | uVar10 & uVar26);
          uVar22 = uVar22 + 8;
        } while (uVar16 != uVar22);
        if (uVar17 + 1 == uVar16) {
          return;
        }
      }
      if ((uVar29 & 1) == 0) {
        uVar26 = uVar29;
      }
      else {
        uVar26 = uVar29 - 1;
        *puVar18 = (uint)fVar27 & _DAT_006524b0 | *puVar15 & _DAT_005d91c0;
        puVar18 = puVar18 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar35 = _DAT_005d91c0;
      if (uVar29 == 1) {
        return;
      }
      lVar21 = 0;
      uVar29 = ~_DAT_005d91c0;
      do {
        puVar18[lVar21] = puVar15[lVar21] & uVar35 | uVar29 & (uint)fVar27;
        puVar18[lVar21 + 1] = puVar15[lVar21 + 1] & uVar35 | uVar29 & (uint)fVar27;
        lVar21 = lVar21 + 2;
      } while (uVar26 != (uint)lVar21);
      return;
    }
    if (lVar21 == 1) {
      uVar29 = *(uint *)(param_9 + 0x28f8);
      if (uVar29 == 0) {
        return;
      }
      lVar21 = *(long *)(param_11 + 8);
      uVar17 = (ulong)(uVar29 - 1);
      if ((uVar29 - 1 < 7) || ((puVar13 < puVar23 + uVar17 + 1 && (puVar23 < puVar13 + uVar17 + 1)))
         ) {
        puVar15 = puVar23;
        puVar18 = puVar13;
      }
      else {
        uVar16 = uVar17 + 1 & 0xfffffffffffffff8;
        uVar29 = uVar29 - (int)uVar16;
        puVar15 = puVar23 + uVar16;
        puVar18 = puVar13 + uVar16;
        uVar22 = 0;
        uVar31 = (undefined4)((ulong)(double)lVar21 >> 0x20);
        auVar5._4_8_ = in_XMM2_Qb;
        auVar5._0_4_ = uVar31;
        auVar33._0_8_ = auVar5._0_8_ << 0x20;
        auVar33._8_4_ = SUB84((double)lVar21,0);
        auVar33._12_4_ = uVar31;
        uVar30 = ~_DAT_005d91c0 & (uint)(float)auVar33._8_8_;
        uVar35 = (uint)(float)auVar33._8_8_ & _DAT_006524b0;
        do {
          puVar1 = puVar23 + uVar22;
          uVar32 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = puVar23 + uVar22 + 4;
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          *(ulong *)(puVar13 + uVar22) =
               CONCAT44(puVar1[1] & uVar26 | uVar30,~uVar26 & (uint)(float)lVar21 | *puVar1 & uVar26
                       );
          *(ulong *)(puVar13 + uVar22 + 2) =
               CONCAT44(uVar7 & uVar26 | uVar35,~uVar26 & (uint)(float)lVar21 | uVar32 & uVar26);
          *(ulong *)(puVar13 + uVar22 + 4) =
               CONCAT44(uVar9 & uVar26 | uVar30,~uVar26 & (uint)(float)lVar21 | uVar8 & uVar26);
          *(ulong *)(puVar13 + uVar22 + 4 + 2) =
               CONCAT44(uVar11 & uVar26 | uVar30,~uVar26 & (uint)(float)lVar21 | uVar10 & uVar26);
          uVar22 = uVar22 + 8;
        } while (uVar16 != uVar22);
        if (uVar17 + 1 == uVar16) {
          return;
        }
      }
      if ((uVar29 & 1) == 0) {
        uVar26 = uVar29;
      }
      else {
        uVar26 = uVar29 - 1;
        *puVar18 = (uint)(float)lVar21 & _DAT_006524b0 | *puVar15 & _DAT_005d91c0;
        puVar18 = puVar18 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar35 = _DAT_005d91c0;
      if (uVar29 == 1) {
        return;
      }
      lVar19 = 0;
      uVar29 = ~_DAT_005d91c0 & (uint)(float)lVar21;
      do {
        puVar18[lVar19] = puVar15[lVar19] & uVar35 | uVar29;
        puVar18[lVar19 + 1] = puVar15[lVar19 + 1] & uVar35 | uVar29;
        lVar19 = lVar19 + 2;
      } while (uVar26 != (uint)lVar19);
      return;
    }
LAB_005d4c0c:
    pcVar20 = "expr: FUNC_EVAL(%d): bad right type %ld\n";
LAB_005d4c13:
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar20,0x7a2,
             lVar21,param_13,param_14);
    return;
  }
  if (lVar21 == 2) {
    lVar21 = *(long *)(param_11 + 10);
    if (lVar21 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d5b82;
        param_12[2] = 0xf;
        param_12[3] = 0;
        uVar14 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar14;
      }
      uVar35 = _DAT_006524b0;
      uVar29 = _DAT_005d91c0;
      uVar26 = *(uint *)(param_9 + 0x28f8);
      if (uVar26 == 0) {
        return;
      }
      puVar13 = *(uint **)param_12;
      puVar23 = *(uint **)(param_11 + 8);
      fVar27 = *param_11;
      uVar17 = (ulong)(uVar26 - 1);
      if ((uVar26 - 1 < 7) || ((puVar13 < puVar23 + uVar17 + 1 && (puVar23 < puVar13 + uVar17 + 1)))
         ) {
        puVar15 = puVar23;
        puVar18 = puVar13;
      }
      else {
        uVar22 = uVar17 + 1 & 0xfffffffffffffff8;
        uVar26 = uVar26 - (int)uVar22;
        puVar15 = puVar23 + uVar22;
        puVar18 = puVar13 + uVar22;
        uVar16 = 0;
        uVar30 = (uint)fVar27 & _DAT_005d91c0;
        uVar32 = (uint)fVar27 & _DAT_005d91c0;
        do {
          uVar14 = *(undefined8 *)(puVar23 + uVar16 + 2);
          uVar3 = *(undefined8 *)(puVar23 + uVar16 + 4);
          uVar4 = *(undefined8 *)(puVar23 + uVar16 + 6);
          *(ulong *)(puVar13 + uVar16) =
               CONCAT44(~uVar29 & (uint)((ulong)*(undefined8 *)(puVar23 + uVar16) >> 0x20) | uVar32,
                        (uint)*(undefined8 *)(puVar23 + uVar16) & uVar35 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 2) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar14 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar14 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 4) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar3 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar3 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 4 + 2) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar4 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar4 | uVar30);
          uVar16 = uVar16 + 8;
        } while (uVar22 != uVar16);
        if (uVar17 + 1 == uVar22) {
          return;
        }
      }
      if ((uVar26 & 1) == 0) {
        uVar29 = uVar26;
      }
      else {
        uVar29 = uVar26 - 1;
        *puVar18 = (uint)fVar27 & _DAT_005d91c0 | *puVar15 & _DAT_006524b0;
        puVar18 = puVar18 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar30 = _DAT_006524b0;
      uVar35 = _DAT_005d91c0;
      if (uVar26 == 1) {
        return;
      }
      lVar21 = 0;
      uVar26 = (uint)fVar27 & _DAT_005d91c0;
      do {
        puVar18[lVar21] = puVar15[lVar21] & uVar30 | uVar26;
        puVar18[lVar21 + 1] = ~uVar35 & puVar15[lVar21 + 1] | uVar26;
        lVar21 = lVar21 + 2;
      } while (uVar29 != (uint)lVar21);
      return;
    }
    if (lVar21 != 2) {
      if (lVar21 == 1) {
        if (*(long *)(param_12 + 2) == 0xf) {
          iVar12 = *(int *)(param_9 + 0x28f8);
          if (iVar12 == 0) {
            return;
          }
          uVar26 = (uint)(float)*(long *)(param_11 + 8) & _DAT_006524b0 |
                   (uint)*param_11 & _DAT_005d91c0;
          lVar21 = *(long *)param_12;
          if (6 < iVar12 - 1U) {
            uVar17 = (ulong)(iVar12 - 1U) + 1;
            uVar25 = uVar17 & 0xfffffffffffffff8;
            uVar22 = (uVar25 - 8 >> 3) + 1;
            uVar16 = (ulong)((uint)uVar22 & 7);
            if (uVar25 - 8 < 0x38) {
              lVar19 = 0;
            }
            else {
              uVar22 = uVar22 & 0xfffffffffffffff8;
              lVar19 = 0;
              do {
                puVar13 = (uint *)(lVar21 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x10 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x20 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x30 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x40 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x50 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x60 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x70 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x80 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0x90 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xa0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xb0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xc0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xd0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xe0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar21 + 0xf0 + lVar19 * 4);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                lVar19 = lVar19 + 0x40;
                uVar22 = uVar22 - 8;
              } while (uVar22 != 0);
            }
            if (uVar16 != 0) {
              lVar19 = lVar21 + lVar19 * 4;
              lVar24 = 0;
              do {
                puVar13 = (uint *)(lVar19 + lVar24);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                puVar13 = (uint *)(lVar19 + 0x10 + lVar24);
                *puVar13 = uVar26;
                puVar13[1] = uVar26;
                puVar13[2] = uVar26;
                puVar13[3] = uVar26;
                lVar24 = lVar24 + 0x20;
              } while (uVar16 * 0x20 != lVar24);
            }
            if (uVar17 == uVar25) {
              return;
            }
            iVar12 = iVar12 - (int)uVar25;
            lVar21 = lVar21 + uVar25 * 4;
          }
          lVar19 = 0;
          do {
            *(uint *)(lVar21 + lVar19 * 4) = uVar26;
            lVar19 = lVar19 + 1;
          } while (iVar12 != (int)lVar19);
          return;
        }
        param_12[2] = 2;
        param_12[3] = 0;
        uVar29 = (uint)*param_11 & _DAT_005d91c0;
        uVar26 = (uint)(float)*(long *)(param_11 + 8) & _DAT_006524b0;
        goto LAB_005d53b4;
      }
      goto LAB_005d4c0c;
    }
    if (*(long *)(param_12 + 2) == 0xf) {
      iVar12 = *(int *)(param_9 + 0x28f8);
      if (iVar12 == 0) {
        return;
      }
      uVar26 = (uint)*param_11 & _DAT_005d91c0 | (uint)param_11[8] & _DAT_006524b0;
      lVar21 = *(long *)param_12;
      if (6 < iVar12 - 1U) {
        uVar17 = (ulong)(iVar12 - 1U) + 1;
        uVar25 = uVar17 & 0xfffffffffffffff8;
        uVar22 = (uVar25 - 8 >> 3) + 1;
        uVar16 = (ulong)((uint)uVar22 & 7);
        if (uVar25 - 8 < 0x38) {
          lVar19 = 0;
        }
        else {
          uVar22 = uVar22 & 0xfffffffffffffff8;
          lVar19 = 0;
          do {
            puVar13 = (uint *)(lVar21 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x10 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x20 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x30 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x40 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x50 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x60 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x70 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x80 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x90 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xa0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xb0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xc0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xd0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xe0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xf0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            lVar19 = lVar19 + 0x40;
            uVar22 = uVar22 - 8;
          } while (uVar22 != 0);
        }
        if (uVar16 != 0) {
          lVar19 = lVar21 + lVar19 * 4;
          lVar24 = 0;
          do {
            puVar13 = (uint *)(lVar19 + lVar24);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar19 + 0x10 + lVar24);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            lVar24 = lVar24 + 0x20;
          } while (uVar16 * 0x20 != lVar24);
        }
        if (uVar17 == uVar25) {
          return;
        }
        iVar12 = iVar12 - (int)uVar25;
        lVar21 = lVar21 + uVar25 * 4;
      }
      lVar19 = 0;
      do {
        *(uint *)(lVar21 + lVar19 * 4) = uVar26;
        lVar19 = lVar19 + 1;
      } while (iVar12 != (int)lVar19);
      return;
    }
    param_12[2] = 2;
    param_12[3] = 0;
    fVar27 = *param_11;
LAB_005d53a1:
    fVar28 = param_11[8];
  }
  else {
    if (lVar21 != 1) {
      pcVar20 = "expr: FUNC_EVAL(%d): bad left type %ld\n";
      goto LAB_005d4c13;
    }
    lVar21 = *(long *)(param_11 + 10);
    if (lVar21 - 0xeU < 2) {
      if (*(long *)(param_12 + 2) != 0xf) {
        if (*(long *)(param_12 + 2) == 0xe) goto LAB_005d5b82;
        param_12[2] = 0xf;
        param_12[3] = 0;
        uVar14 = ex_malloc((long)*(int *)(param_9 + 0x28f8) << 2);
        *(undefined8 *)param_12 = uVar14;
      }
      uVar35 = _DAT_006524b0;
      uVar29 = _DAT_005d91c0;
      uVar26 = *(uint *)(param_9 + 0x28f8);
      if (uVar26 == 0) {
        return;
      }
      puVar13 = *(uint **)param_12;
      lVar21 = *(long *)param_11;
      puVar23 = *(uint **)(param_11 + 8);
      uVar17 = (ulong)(uVar26 - 1);
      if ((uVar26 - 1 < 7) || ((puVar13 < puVar23 + uVar17 + 1 && (puVar23 < puVar13 + uVar17 + 1)))
         ) {
        puVar15 = puVar23;
        puVar18 = puVar13;
      }
      else {
        uVar22 = uVar17 + 1 & 0xfffffffffffffff8;
        uVar26 = uVar26 - (int)uVar22;
        puVar15 = puVar23 + uVar22;
        puVar18 = puVar13 + uVar22;
        uVar16 = 0;
        uVar30 = (uint)(float)lVar21 & _DAT_005d91c0;
        uVar32 = (uint)(float)lVar21 & _DAT_005d91c0;
        do {
          uVar14 = *(undefined8 *)(puVar23 + uVar16 + 2);
          uVar3 = *(undefined8 *)(puVar23 + uVar16 + 4);
          uVar4 = *(undefined8 *)(puVar23 + uVar16 + 6);
          *(ulong *)(puVar13 + uVar16) =
               CONCAT44(~uVar29 & (uint)((ulong)*(undefined8 *)(puVar23 + uVar16) >> 0x20) | uVar32,
                        (uint)*(undefined8 *)(puVar23 + uVar16) & uVar35 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 2) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar14 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar14 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 4) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar3 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar3 | uVar30);
          *(ulong *)(puVar13 + uVar16 + 4 + 2) =
               CONCAT44(~uVar29 & (uint)((ulong)uVar4 >> 0x20) | uVar32,
                        ~uVar29 & (uint)uVar4 | uVar30);
          uVar16 = uVar16 + 8;
        } while (uVar22 != uVar16);
        if (uVar17 + 1 == uVar22) {
          return;
        }
      }
      if ((uVar26 & 1) == 0) {
        uVar29 = uVar26;
      }
      else {
        uVar29 = uVar26 - 1;
        *puVar18 = (uint)(float)lVar21 & _DAT_005d91c0 | *puVar15 & _DAT_006524b0;
        puVar18 = puVar18 + 1;
        puVar15 = puVar15 + 1;
      }
      uVar30 = _DAT_006524b0;
      uVar35 = _DAT_005d91c0;
      if (uVar26 == 1) {
        return;
      }
      lVar19 = 0;
      uVar26 = (uint)(float)lVar21 & _DAT_005d91c0;
      do {
        puVar18[lVar19] = puVar15[lVar19] & uVar30 | uVar26;
        puVar18[lVar19 + 1] = ~uVar35 & puVar15[lVar19 + 1] | uVar26;
        lVar19 = lVar19 + 2;
      } while (uVar29 != (uint)lVar19);
      return;
    }
    if (lVar21 == 2) {
      if (*(long *)(param_12 + 2) == 0xf) {
        iVar12 = *(int *)(param_9 + 0x28f8);
        if (iVar12 == 0) {
          return;
        }
        uVar26 = (uint)(float)*(long *)param_11 & _DAT_005d91c0 | (uint)param_11[8] & _DAT_006524b0;
        lVar21 = *(long *)param_12;
        if (6 < iVar12 - 1U) {
          uVar17 = (ulong)(iVar12 - 1U) + 1;
          uVar25 = uVar17 & 0xfffffffffffffff8;
          uVar22 = (uVar25 - 8 >> 3) + 1;
          uVar16 = (ulong)((uint)uVar22 & 7);
          if (uVar25 - 8 < 0x38) {
            lVar19 = 0;
          }
          else {
            uVar22 = uVar22 & 0xfffffffffffffff8;
            lVar19 = 0;
            do {
              puVar13 = (uint *)(lVar21 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x10 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x20 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x30 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x40 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x50 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x60 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x70 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x80 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0x90 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xa0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xb0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xc0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xd0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xe0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar21 + 0xf0 + lVar19 * 4);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              lVar19 = lVar19 + 0x40;
              uVar22 = uVar22 - 8;
            } while (uVar22 != 0);
          }
          if (uVar16 != 0) {
            lVar19 = lVar21 + lVar19 * 4;
            lVar24 = 0;
            do {
              puVar13 = (uint *)(lVar19 + lVar24);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              puVar13 = (uint *)(lVar19 + 0x10 + lVar24);
              *puVar13 = uVar26;
              puVar13[1] = uVar26;
              puVar13[2] = uVar26;
              puVar13[3] = uVar26;
              lVar24 = lVar24 + 0x20;
            } while (uVar16 * 0x20 != lVar24);
          }
          if (uVar17 == uVar25) {
            return;
          }
          iVar12 = iVar12 - (int)uVar25;
          lVar21 = lVar21 + uVar25 * 4;
        }
        lVar19 = 0;
        do {
          *(uint *)(lVar21 + lVar19 * 4) = uVar26;
          lVar19 = lVar19 + 1;
        } while (iVar12 != (int)lVar19);
        return;
      }
      param_12[2] = 2;
      param_12[3] = 0;
      fVar27 = (float)*(long *)param_11;
      goto LAB_005d53a1;
    }
    if (lVar21 != 1) goto LAB_005d4c0c;
    if (*(long *)(param_12 + 2) == 0xf) {
      iVar12 = *(int *)(param_9 + 0x28f8);
      if (iVar12 == 0) {
        return;
      }
      uVar26 = (uint)(float)*(long *)param_11 & _DAT_005d91c0 |
               (uint)(float)*(long *)(param_11 + 8) & _DAT_006524b0;
      lVar21 = *(long *)param_12;
      if (6 < iVar12 - 1U) {
        uVar17 = (ulong)(iVar12 - 1U) + 1;
        uVar25 = uVar17 & 0xfffffffffffffff8;
        uVar22 = (uVar25 - 8 >> 3) + 1;
        uVar16 = (ulong)((uint)uVar22 & 7);
        if (uVar25 - 8 < 0x38) {
          lVar19 = 0;
        }
        else {
          uVar22 = uVar22 & 0xfffffffffffffff8;
          lVar19 = 0;
          do {
            puVar13 = (uint *)(lVar21 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x10 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x20 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x30 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x40 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x50 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x60 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x70 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x80 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0x90 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xa0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xb0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xc0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xd0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xe0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar21 + 0xf0 + lVar19 * 4);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            lVar19 = lVar19 + 0x40;
            uVar22 = uVar22 - 8;
          } while (uVar22 != 0);
        }
        if (uVar16 != 0) {
          lVar19 = lVar21 + lVar19 * 4;
          lVar24 = 0;
          do {
            puVar13 = (uint *)(lVar19 + lVar24);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            puVar13 = (uint *)(lVar19 + 0x10 + lVar24);
            *puVar13 = uVar26;
            puVar13[1] = uVar26;
            puVar13[2] = uVar26;
            puVar13[3] = uVar26;
            lVar24 = lVar24 + 0x20;
          } while (uVar16 * 0x20 != lVar24);
        }
        if (uVar17 == uVar25) {
          return;
        }
        iVar12 = iVar12 - (int)uVar25;
        lVar21 = lVar21 + uVar25 * 4;
      }
      lVar19 = 0;
      do {
        *(uint *)(lVar21 + lVar19 * 4) = uVar26;
        lVar19 = lVar19 + 1;
      } while (iVar12 != (int)lVar19);
      return;
    }
    param_12[2] = 2;
    param_12[3] = 0;
    fVar27 = (float)*(long *)param_11;
    fVar28 = (float)*(long *)(param_11 + 8);
  }
  uVar29 = (uint)fVar28 & _DAT_006524b0;
  uVar26 = (uint)fVar27 & _DAT_005d91c0;
LAB_005d53b4:
  *param_12 = uVar26 | uVar29;
  return;
}


