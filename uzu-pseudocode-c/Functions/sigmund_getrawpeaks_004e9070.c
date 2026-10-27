// Function : sigmund_getrawpeaks
// Namespace: 
// Entry    : 004e9070
// Prototype: undefined sigmund_getrawpeaks(float param_1, uint param_2, float * param_3, uint param_4, long param_5, uint * param_6, undefined8 param_7)
// Body     : 004e9070 - 004ea2b2


/* WARNING: Removing unreachable block (ram,0x004ea217) */
/* WARNING: Removing unreachable block (ram,0x004e9c48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigmund_getrawpeaks(float param_1,uint param_2,float *param_3,uint param_4,long param_5,
                        uint *param_6,undefined8 param_7)

{
  double *pdVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  float *pfVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qa_01;
  float fVar34;
  double dVar35;
  double dVar36;
  undefined1 in_XMM1 [16];
  undefined1 auVar37 [16];
  int iVar38;
  float fVar39;
  undefined8 uVar40;
  int iVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar45;
  int iVar47;
  undefined1 auVar44 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined8 in_XMM4_Qa;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined8 in_XMM5_Qa;
  uint uVar54;
  undefined8 uVar55;
  uint uVar61;
  undefined1 in_XMM6 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  uint uVar63;
  undefined1 auVar59 [16];
  float fVar62;
  float fVar64;
  undefined1 auVar60 [16];
  undefined8 uVar65;
  undefined1 in_XMM7 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  uint *local_108;
  ulong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  long local_b8;
  uint local_ac;
  double local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_84;
  double local_80;
  undefined1 local_78 [16];
  ulong local_60;
  float *local_58;
  float *local_50;
  float *local_48;
  ulong local_40;
  uint local_34;
  
  local_128 = ZEXT416((uint)(DAT_005d9038 / (float)(int)param_2));
  auVar43._0_8_ = (double)(DAT_005d9038 / (float)(int)param_2);
  auVar43._8_8_ = 0;
  dVar35 = DAT_005db338 * auVar43._0_8_ * (double)param_1;
  local_c8 = ZEXT416((uint)(float)dVar35);
  uVar17 = (ulong)(uint)(float)dVar35;
  local_ac = param_2 * 0x18 + 0x20;
  local_100 = (ulong)local_ac;
  local_48 = (float *)CONCAT44(local_48._4_4_,param_2 * 2);
  local_f8._0_8_ = param_7;
  local_108 = param_6;
  local_b8 = param_5;
  local_98 = auVar43._0_8_;
  local_84 = param_4;
  if ((int)local_ac < 400000) {
    pfVar20 = (float *)(local_128 + -((long)(int)local_ac + 0xfU & 0xfffffffffffffff0));
    pfVar10 = pfVar20;
    uVar28 = param_2 * 2;
  }
  else {
    local_40 = CONCAT44(local_40._4_4_,in_XMM1._0_4_);
    pfVar10 = getbytes(local_100);
    pfVar20 = (float *)local_128;
    in_XMM1 = ZEXT416((uint)local_40);
    uVar28 = (uint)local_48;
    uVar17 = extraout_XMM0_Qa;
  }
  auVar58._4_12_ = in_XMM1._4_12_;
  auVar58._0_4_ = in_XMM1._0_4_ / (float)local_c8._0_4_;
  local_34 = (int)auVar58._0_4_;
  if ((int)(param_2 - 4) < (int)auVar58._0_4_) {
    local_34 = param_2 - 4;
  }
  local_78._0_8_ = (long)(int)uVar28;
  pfVar6 = pfVar10 + (int)uVar28;
  uVar26 = (ulong)(int)param_2;
  pfVar15 = pfVar6 + uVar26;
  uVar30 = (ulong)param_2;
  local_60 = (ulong)param_2;
  local_50 = pfVar15;
  local_40 = uVar26;
  if (0 < (int)param_2) {
    pfVar20[-2] = 7.215402e-39;
    pfVar20[-1] = 0.0;
    memset(pfVar6,0,uVar30 * 4);
    uVar26 = local_40;
    pfVar15 = local_50;
    uVar17 = extraout_XMM0_Qa_00;
    if (((uint)local_60 < 8) || ((pfVar10 < param_3 + uVar30 && (param_3 < pfVar10 + uVar30)))) {
      uVar29 = 0;
      uVar28 = (uint)local_48;
    }
    else {
      uVar29 = (ulong)(param_2 & 0xfffffff8);
      uVar14 = (uVar29 - 8 >> 3) + 1;
      uVar11 = (ulong)((uint)uVar14 & 3);
      if (uVar29 - 8 < 0x18) {
        lVar21 = 0;
      }
      else {
        uVar14 = uVar14 & 0xfffffffffffffffc;
        lVar21 = 0;
        do {
          uVar40 = *(undefined8 *)(param_3 + lVar21 + 2);
          uVar48 = *(undefined8 *)(param_3 + lVar21 + 4);
          uVar55 = *(undefined8 *)(param_3 + lVar21 + 4 + 2);
          *(undefined8 *)(pfVar10 + lVar21) = *(undefined8 *)(param_3 + lVar21);
          *(undefined8 *)(pfVar10 + lVar21 + 2) = uVar40;
          *(undefined8 *)(pfVar10 + lVar21 + 4) = uVar48;
          *(undefined8 *)(pfVar10 + lVar21 + 4 + 2) = uVar55;
          uVar40 = *(undefined8 *)(param_3 + lVar21 + 8 + 2);
          uVar48 = *(undefined8 *)(param_3 + lVar21 + 0xc);
          uVar55 = *(undefined8 *)(param_3 + lVar21 + 0xc + 2);
          *(undefined8 *)(pfVar10 + lVar21 + 8) = *(undefined8 *)(param_3 + lVar21 + 8);
          *(undefined8 *)(pfVar10 + lVar21 + 8 + 2) = uVar40;
          *(undefined8 *)(pfVar10 + lVar21 + 0xc) = uVar48;
          *(undefined8 *)(pfVar10 + lVar21 + 0xc + 2) = uVar55;
          uVar40 = *(undefined8 *)(param_3 + lVar21 + 0x10 + 2);
          uVar48 = *(undefined8 *)(param_3 + lVar21 + 0x14);
          uVar55 = *(undefined8 *)(param_3 + lVar21 + 0x14 + 2);
          *(undefined8 *)(pfVar10 + lVar21 + 0x10) = *(undefined8 *)(param_3 + lVar21 + 0x10);
          *(undefined8 *)(pfVar10 + lVar21 + 0x10 + 2) = uVar40;
          *(undefined8 *)(pfVar10 + lVar21 + 0x14) = uVar48;
          *(undefined8 *)(pfVar10 + lVar21 + 0x14 + 2) = uVar55;
          uVar17 = *(ulong *)(param_3 + lVar21 + 0x18);
          uVar40 = *(undefined8 *)(param_3 + lVar21 + 0x18 + 2);
          dVar35 = *(double *)(param_3 + lVar21 + 0x1c);
          dVar36 = *(double *)((long)(param_3 + lVar21 + 0x1c) + 8);
          *(ulong *)(pfVar10 + lVar21 + 0x18) = uVar17;
          *(undefined8 *)(pfVar10 + lVar21 + 0x18 + 2) = uVar40;
          *(double *)(pfVar10 + lVar21 + 0x1c) = dVar35;
          *(double *)((long)(pfVar10 + lVar21 + 0x1c) + 8) = dVar36;
          lVar21 = lVar21 + 0x20;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
      }
      if (uVar11 != 0) {
        lVar19 = 0;
        do {
          puVar3 = (ulong *)((long)param_3 + lVar19 + lVar21 * 4);
          uVar17 = *puVar3;
          uVar14 = puVar3[1];
          pdVar1 = (double *)((long)param_3 + lVar19 + lVar21 * 4 + 0x10);
          dVar35 = *pdVar1;
          dVar36 = pdVar1[1];
          puVar3 = (ulong *)((long)pfVar10 + lVar19 + lVar21 * 4);
          *puVar3 = uVar17;
          puVar3[1] = uVar14;
          pdVar1 = (double *)((long)pfVar10 + lVar19 + lVar21 * 4 + 0x10);
          *pdVar1 = dVar35;
          pdVar1[1] = dVar36;
          lVar19 = lVar19 + 0x20;
        } while (uVar11 * 0x20 != lVar19);
      }
      uVar28 = (uint)local_48;
      if (uVar29 == uVar30) goto LAB_004e9347;
    }
    uVar11 = ~uVar29;
    uVar14 = uVar30 & 3;
    if ((param_2 & 3) != 0) {
      do {
        uVar17 = (ulong)(uint)param_3[uVar29];
        pfVar10[uVar29] = param_3[uVar29];
        uVar29 = uVar29 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (2 < uVar11 + uVar30) {
      do {
        pfVar10[uVar29] = param_3[uVar29];
        pfVar10[uVar29 + 1] = param_3[uVar29 + 1];
        pfVar10[uVar29 + 2] = param_3[uVar29 + 2];
        uVar17 = (ulong)(uint)param_3[uVar29 + 3];
        pfVar10[uVar29 + 3] = param_3[uVar29 + 3];
        uVar29 = uVar29 + 4;
      } while (uVar30 != uVar29);
    }
  }
LAB_004e9347:
  uVar29 = local_60;
  uVar65 = in_XMM7._0_8_;
  uVar55 = in_XMM6._0_8_;
  uVar48 = auVar58._0_8_;
  uVar40 = auVar43._0_8_;
  uVar31 = (uint)local_60;
  local_58 = pfVar15;
  uVar11 = uVar26;
  if ((int)uVar31 < (int)uVar28) {
    pfVar20[-2] = 7.216064e-39;
    pfVar20[-1] = 0.0;
    memset(pfVar10 + uVar26,0,(ulong)(uVar31 - 1) * 4 + 4);
    uVar65 = in_XMM7._0_8_;
    uVar55 = in_XMM6._0_8_;
    uVar48 = auVar58._0_8_;
    uVar40 = auVar43._0_8_;
    local_58 = local_50;
    uVar11 = local_40;
    uVar28 = (uint)local_48;
    uVar17 = extraout_XMM0_Qa_01;
  }
  local_58 = local_58 + uVar11 + 4;
  local_48 = pfVar15 + uVar26 + uVar11 + 8;
  pfVar20[-2] = 7.216124e-39;
  pfVar20[-1] = 0.0;
  mayer_realfft(uVar17,dVar35,uVar40,uVar48,in_XMM4_Qa,in_XMM5_Qa,uVar55,uVar65,uVar28,pfVar10);
  uVar28 = local_34;
  uVar17 = local_40;
  dVar35 = local_98;
  if ((int)uVar31 < 1) {
    pfVar15 = local_58;
  }
  else {
    if (uVar31 < 8) {
      uVar26 = 0;
LAB_004e9554:
      uVar11 = ~uVar26;
      uVar14 = uVar30 & 3;
      if ((param_2 & 3) != 0) {
        uVar40 = local_78._0_8_;
        do {
          pfVar10[uVar17 * 2 + uVar40 + uVar26 + 4] = pfVar10[uVar26];
          uVar26 = uVar26 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (2 < uVar11 + uVar30) {
        uVar40 = local_78._0_8_;
        do {
          pfVar10[uVar17 * 2 + uVar40 + uVar26 + 4] = pfVar10[uVar26];
          pfVar10[uVar17 * 2 + uVar40 + uVar26 + 5] = pfVar10[uVar26 + 1];
          pfVar10[uVar17 * 2 + uVar40 + uVar26 + 6] = pfVar10[uVar26 + 2];
          pfVar10[uVar17 * 2 + uVar40 + uVar26 + 7] = pfVar10[uVar26 + 3];
          uVar26 = uVar26 + 4;
        } while (uVar30 != uVar26);
      }
    }
    else {
      uVar40 = local_78._0_8_;
      if ((pfVar10 + local_40 * 2 + local_78._0_8_ + 4 < pfVar10 + uVar30) &&
         (pfVar10 < pfVar10 + uVar30 + local_40 * 2 + local_78._0_8_ + 4)) {
        uVar26 = 0;
        goto LAB_004e9554;
      }
      uVar26 = (ulong)(param_2 & 0xfffffff8);
      uVar14 = (uVar26 - 8 >> 3) + 1;
      uVar11 = (ulong)((uint)uVar14 & 3);
      if (uVar26 - 8 < 0x18) {
        lVar21 = 0;
      }
      else {
        uVar14 = uVar14 & 0xfffffffffffffffc;
        lVar21 = 0;
        do {
          uVar48 = *(undefined8 *)(pfVar10 + lVar21 + 2);
          uVar55 = *(undefined8 *)(pfVar10 + lVar21 + 4);
          uVar65 = *(undefined8 *)(pfVar10 + lVar21 + 4 + 2);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 4) =
               *(undefined8 *)(pfVar10 + lVar21);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 4 + 2) = uVar48;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 8) = uVar55;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 8 + 2) = uVar65;
          uVar48 = *(undefined8 *)(pfVar10 + lVar21 + 8 + 2);
          uVar55 = *(undefined8 *)(pfVar10 + lVar21 + 0xc);
          uVar65 = *(undefined8 *)(pfVar10 + lVar21 + 0xc + 2);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0xc) =
               *(undefined8 *)(pfVar10 + lVar21 + 8);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0xc + 2) = uVar48;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x10) = uVar55;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x10 + 2) = uVar65;
          uVar48 = *(undefined8 *)(pfVar10 + lVar21 + 0x10 + 2);
          uVar55 = *(undefined8 *)(pfVar10 + lVar21 + 0x14);
          uVar65 = *(undefined8 *)(pfVar10 + lVar21 + 0x14 + 2);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x14) =
               *(undefined8 *)(pfVar10 + lVar21 + 0x10);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x14 + 2) = uVar48;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x18) = uVar55;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x18 + 2) = uVar65;
          uVar48 = *(undefined8 *)(pfVar10 + lVar21 + 0x18 + 2);
          uVar55 = *(undefined8 *)(pfVar10 + lVar21 + 0x1c);
          uVar65 = *(undefined8 *)(pfVar10 + lVar21 + 0x1c + 2);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x1c) =
               *(undefined8 *)(pfVar10 + lVar21 + 0x18);
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x1c + 2) = uVar48;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x20) = uVar55;
          *(undefined8 *)(pfVar10 + uVar17 * 2 + uVar40 + lVar21 + 0x20 + 2) = uVar65;
          lVar21 = lVar21 + 0x20;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
      }
      if (uVar11 != 0) {
        lVar19 = lVar21 * 4 + uVar17 * 8 + local_78._0_8_ * 4;
        lVar25 = 0;
        do {
          puVar4 = (undefined8 *)((long)pfVar10 + lVar25 + lVar21 * 4);
          uVar40 = puVar4[1];
          puVar2 = (undefined8 *)((long)pfVar10 + lVar25 + lVar21 * 4 + 0x10);
          uVar48 = *puVar2;
          uVar55 = puVar2[1];
          puVar2 = (undefined8 *)((long)pfVar10 + lVar25 + lVar19 + 0x10);
          *puVar2 = *puVar4;
          puVar2[1] = uVar40;
          puVar2 = (undefined8 *)((long)pfVar10 + lVar25 + lVar19 + 0x20);
          *puVar2 = uVar48;
          puVar2[1] = uVar55;
          lVar25 = lVar25 + 0x20;
        } while (uVar11 * 0x20 != lVar25);
      }
      if (uVar26 != uVar30) goto LAB_004e9554;
    }
    pfVar15 = local_58;
    if ((int)uVar31 < 3) {
    }
    else {
      uVar30 = (ulong)(uVar31 - 1);
      uVar26 = uVar30 - 1;
      uVar11 = 1;
      if (7 < uVar26) {
        uVar40 = local_78._0_8_;
        if ((pfVar6 <= pfVar10 + uVar17 * 3 + local_78._0_8_ + 9) ||
           (pfVar10 + uVar30 + uVar17 * 3 + local_78._0_8_ + 8 <=
            (float *)((local_78._0_8_ * 4 | 4U) + uVar30 * -4 + (long)pfVar10))) {
          uVar11 = uVar26 & 0xfffffffffffffff8;
          uVar14 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            uVar17 = 0;
LAB_004e9709:
            uVar17 = uVar17 | 1;
            pfVar12 = pfVar10 + (local_78._0_8_ - uVar17) + -7;
            fVar39 = *pfVar12;
            fVar33 = pfVar12[1];
            fVar32 = pfVar12[2];
            fVar34 = pfVar12[3];
            pfVar13 = pfVar10 + (local_78._0_8_ - uVar17) + -3;
            fVar50 = *pfVar13;
            fVar53 = pfVar13[1];
            fVar62 = pfVar13[2];
            pfVar12 = local_48 + uVar17;
            *pfVar12 = pfVar13[3];
            pfVar12[1] = fVar62;
            pfVar12[2] = fVar53;
            pfVar12[3] = fVar50;
            pfVar12 = local_48 + uVar17 + 4;
            *pfVar12 = fVar34;
            pfVar12[1] = fVar32;
            pfVar12[2] = fVar33;
            pfVar12[3] = fVar39;
          }
          else {
            uVar22 = uVar14 & 0x3ffffffffffffffe;
            pfVar12 = pfVar10 + uVar17 * 3 + local_78._0_8_ + 0x15;
            lVar21 = 0;
            do {
              pfVar13 = pfVar10 + uVar40 + lVar21 + -8;
              fVar39 = *pfVar13;
              fVar33 = pfVar13[1];
              fVar32 = pfVar13[2];
              fVar34 = pfVar13[3];
              pfVar13 = pfVar10 + uVar40 + lVar21 + -4;
              fVar50 = *pfVar13;
              fVar53 = pfVar13[1];
              fVar62 = pfVar13[2];
              pfVar12[-0xc] = pfVar13[3];
              pfVar12[-0xb] = fVar62;
              pfVar12[-10] = fVar53;
              pfVar12[-9] = fVar50;
              pfVar12[-8] = fVar34;
              pfVar12[-7] = fVar32;
              pfVar12[-6] = fVar33;
              pfVar12[-5] = fVar39;
              pfVar13 = pfVar10 + uVar40 + lVar21 + -0x10;
              fVar39 = *pfVar13;
              fVar33 = pfVar13[1];
              fVar32 = pfVar13[2];
              fVar34 = pfVar13[3];
              pfVar13 = pfVar10 + uVar40 + lVar21 + -0xc;
              fVar50 = *pfVar13;
              fVar53 = pfVar13[1];
              fVar62 = pfVar13[2];
              pfVar12[-4] = pfVar13[3];
              pfVar12[-3] = fVar62;
              pfVar12[-2] = fVar53;
              pfVar12[-1] = fVar50;
              *pfVar12 = fVar34;
              pfVar12[1] = fVar32;
              pfVar12[2] = fVar33;
              pfVar12[3] = fVar39;
              pfVar12 = pfVar12 + 0x10;
              lVar21 = lVar21 + -0x10;
              uVar22 = uVar22 - 2;
            } while (uVar22 != 0);
            uVar17 = -lVar21;
            if ((uVar14 & 1) != 0) goto LAB_004e9709;
          }
          uVar17 = local_40;
          if (uVar26 == uVar11) goto LAB_004e9817;
          uVar11 = uVar11 | 1;
        }
      }
      uVar24 = (uVar31 - 1) - (int)uVar11;
      uVar26 = ~uVar11;
      if ((uVar24 & 3) != 0) {
        uVar40 = local_78._0_8_;
        pfVar12 = pfVar10 + local_78._0_8_ + uVar17 * 3 + uVar11 + 8;
        lVar21 = 0;
        do {
          *pfVar12 = pfVar10[(uVar40 + lVar21) - uVar11];
          lVar21 = lVar21 + -1;
          pfVar12 = pfVar12 + 1;
        } while (-lVar21 != ((ulong)uVar24 & 3));
        uVar11 = uVar11 - lVar21;
        uVar17 = local_40;
      }
      if (2 < uVar26 + uVar30) {
        uVar40 = local_78._0_8_;
        pfVar12 = pfVar10 + (local_78._0_8_ - uVar11);
        do {
          pfVar10[uVar17 * 3 + uVar40 + uVar11 + 8] = *pfVar12;
          pfVar10[uVar17 * 3 + uVar40 + uVar11 + 9] = pfVar12[-1];
          pfVar10[uVar17 * 3 + uVar40 + uVar11 + 10] = pfVar12[-2];
          pfVar10[uVar17 * 3 + uVar40 + uVar11 + 0xb] = pfVar12[-3];
          uVar11 = uVar11 + 4;
          pfVar12 = pfVar12 + -4;
        } while (uVar30 != uVar11);
      }
    }
  }
LAB_004e9817:
  pfVar12 = local_48;
  pfVar15[-4] = pfVar15[4];
  pfVar15[-3] = pfVar15[3];
  pfVar15[-2] = pfVar15[2];
  pfVar15[-1] = pfVar15[1];
  local_48[(int)(uVar31 - 1)] = 0.0;
  *local_48 = 0.0;
  fVar39 = pfVar12[1];
  pfVar12[-4] = (float)(_UNK_006524bc ^ (uint)pfVar12[4]);
  pfVar12[-3] = (float)(_UNK_006524b8 ^ (uint)pfVar12[3]);
  pfVar12[-2] = (float)(_UNK_006524b4 ^ (uint)pfVar12[2]);
  pfVar12[-1] = (float)(_DAT_006524b0 ^ (uint)fVar39);
  pfVar12 = local_50;
  fVar33 = 0.0;
  if (0 < (int)uVar28) {
    *local_50 = (fVar39 + fVar39) * (fVar39 + fVar39) +
                (pfVar15[1] - pfVar15[-1]) * (pfVar15[1] - pfVar15[-1]);
    uVar30 = local_40;
    uVar26 = local_60;
    if (uVar28 != 1) {
      uVar11 = (ulong)uVar28;
      pfVar15 = local_58 + 1;
      local_80 = (double)(uVar11 - 1);
      fVar33 = 0.0;
      lVar21 = 1;
      pfVar13 = local_48;
      if ((ulong)local_80 < 4) {
        uVar26 = uVar29;
      }
      else {
        uVar40 = local_78._0_8_;
        pfVar23 = pfVar10 + uVar17 + local_78._0_8_ + 1;
        pfVar18 = pfVar10 + uVar17 + local_78._0_8_ + uVar11;
        pfVar27 = pfVar10 + uVar17 * 3 + local_78._0_8_ + 10;
        local_d8 = local_78._0_8_ * 4;
        lVar19 = local_78._0_8_ + 6;
        local_e8[0] = pfVar23 < pfVar10 + uVar11 + uVar17 * 3 + local_78._0_8_ + 9;
        local_a8 = (double)CONCAT71(local_a8._1_7_,pfVar27 < pfVar18);
        local_a0 = CONCAT71(local_a0._1_7_,pfVar10 + uVar17 * 3 + local_78._0_8_ + 8 < pfVar18);
        pfVar12 = local_50;
        uVar28 = local_34;
        if ((pfVar23 < pfVar10 + uVar11 + uVar17 * 3 + local_78._0_8_ + 9 && pfVar27 < pfVar18) ||
           (pfVar23 < pfVar10 + uVar11 + uVar17 * 3 + local_78._0_8_ + 7 &&
            pfVar10 + uVar17 * 3 + local_78._0_8_ + 8 < pfVar18)) {
          uVar17 = local_40;
        }
        else if ((pfVar23 < pfVar10 + uVar11 + uVar17 * 2 + local_78._0_8_ + 5 &&
                  pfVar10 + uVar17 * 2 + lVar19 < pfVar18) ||
                (pfVar23 < pfVar10 + uVar11 + uVar17 * 2 + local_78._0_8_ + 3 &&
                 pfVar10 + uVar17 * 2 + local_78._0_8_ + 4 < pfVar18)) {
          uVar17 = local_40;
        }
        else {
          uVar14 = (ulong)local_80 & 0xfffffffffffffffc;
          lVar21 = uVar14 + 1;
          pfVar15 = pfVar15 + uVar14;
          pfVar13 = local_48 + uVar14;
          fVar39 = 0.0;
          fVar33 = 0.0;
          fVar32 = 0.0;
          fVar34 = 0.0;
          uVar29 = 0;
          auVar7._4_4_ = _UNK_006524b4;
          auVar7._0_4_ = _DAT_006524b0;
          auVar7._8_4_ = _UNK_006524b8;
          auVar7._12_4_ = _UNK_006524bc;
          auVar44 = _DAT_00652d30;
          auVar49 = _DAT_00652d20;
          do {
            pfVar23 = pfVar10 + uVar17 * 3 + uVar40 + uVar29 + 8;
            pfVar12 = pfVar27 + uVar29;
            pfVar5 = pfVar10 + uVar17 * 2 + uVar40 + uVar29 + 4;
            pfVar18 = pfVar10 + uVar17 * 2 + lVar19 + uVar29;
            fVar50 = (*pfVar12 - *pfVar23) * (*pfVar12 - *pfVar23) +
                     (*pfVar18 - *pfVar5) * (*pfVar18 - *pfVar5);
            fVar53 = (pfVar12[1] - pfVar23[1]) * (pfVar12[1] - pfVar23[1]) +
                     (pfVar18[1] - pfVar5[1]) * (pfVar18[1] - pfVar5[1]);
            fVar62 = (pfVar12[2] - pfVar23[2]) * (pfVar12[2] - pfVar23[2]) +
                     (pfVar18[2] - pfVar5[2]) * (pfVar18[2] - pfVar5[2]);
            fVar64 = (pfVar12[3] - pfVar23[3]) * (pfVar12[3] - pfVar23[3]) +
                     (pfVar18[3] - pfVar5[3]) * (pfVar18[3] - pfVar5[3]);
            pfVar12 = pfVar10 + uVar30 + uVar40 + uVar29 + 1;
            *pfVar12 = fVar50;
            pfVar12[1] = fVar53;
            pfVar12[2] = fVar62;
            pfVar12[3] = fVar64;
            auVar58 = auVar44 ^ auVar7;
            auVar43 = auVar49 ^ auVar7;
            uVar28 = -(uint)(_UNK_00652d44 < auVar58._4_4_ ||
                            _DAT_00652d40 < auVar58._0_4_ && auVar58._4_4_ == _UNK_00652d44);
            uVar31 = -(uint)(_UNK_00652d4c < auVar58._12_4_ ||
                            _UNK_00652d48 < auVar58._8_4_ && auVar58._12_4_ == _UNK_00652d4c);
            uVar24 = -(uint)(_UNK_00652d44 < auVar43._4_4_ ||
                            _DAT_00652d40 < auVar43._0_4_ && auVar43._4_4_ == _UNK_00652d44);
            uVar69 = -(uint)(_UNK_00652d4c < auVar43._12_4_ ||
                            _UNK_00652d48 < auVar43._8_4_ && auVar43._12_4_ == _UNK_00652d4c);
            auVar60._0_4_ = (uint)fVar50 & uVar28;
            auVar60._4_4_ = (uint)fVar53 & uVar31;
            auVar60._8_4_ = (uint)fVar62 & uVar24;
            auVar60._12_4_ = (uint)fVar64 & uVar69;
            auVar66._0_4_ = ~uVar28 & _DAT_006524b0;
            auVar66._4_4_ = ~uVar31 & _UNK_006524b4;
            auVar66._8_4_ = ~uVar24 & _UNK_006524b8;
            auVar66._12_4_ = ~uVar69 & _UNK_006524bc;
            auVar66 = auVar66 | auVar60;
            fVar39 = fVar39 + auVar66._0_4_;
            fVar33 = fVar33 + auVar66._4_4_;
            fVar32 = fVar32 + auVar66._8_4_;
            fVar34 = fVar34 + auVar66._12_4_;
            uVar29 = uVar29 + 4;
            lVar25 = auVar44._8_8_;
            auVar44._0_8_ = auVar44._0_8_ + _DAT_00652d50;
            auVar44._8_8_ = lVar25 + _UNK_00652d58;
            lVar25 = auVar49._8_8_;
            auVar49._0_8_ = auVar49._0_8_ + _DAT_00652d50;
            auVar49._8_8_ = lVar25 + _UNK_00652d58;
          } while (uVar14 != uVar29);
          fVar33 = fVar34 + fVar33 + fVar32 + fVar39;
          pfVar12 = local_50;
          uVar17 = local_40;
          uVar29 = uVar26;
          uVar28 = local_34;
          if (local_80 == (double)uVar14) goto LAB_004e98b7;
        }
      }
      uVar40 = local_78._0_8_;
      lVar19 = 0;
      do {
        fVar39 = (pfVar15[lVar19 + 1] - pfVar15[lVar19 + -1]) *
                 (pfVar15[lVar19 + 1] - pfVar15[lVar19 + -1]) +
                 (pfVar13[lVar19 + 2] - pfVar13[lVar19]) * (pfVar13[lVar19 + 2] - pfVar13[lVar19]);
        pfVar10[uVar40 + lVar21 + uVar17 + lVar19] = fVar39;
        if ((ulong)(lVar21 + lVar19) < 2) {
          fVar39 = DAT_00652e14;
        }
        fVar33 = fVar33 + fVar39;
        lVar19 = lVar19 + 1;
        uVar29 = uVar26;
      } while (uVar11 - lVar21 != lVar19);
    }
  }
LAB_004e98b7:
  uVar31 = (uint)uVar29;
  dVar36 = (double)fVar33;
  (pfVar12 + (int)uVar28)[0] = 0.0;
  (pfVar12 + (int)uVar28)[1] = 0.0;
  *(float *)local_f8._0_8_ = (float)(dVar35 * dVar35 * DAT_005db338 * dVar36);
  local_40 = 0;
  local_80 = dVar36;
  if ((0 < (int)local_84) && (0.0 < fVar33)) {
    local_80 = dVar36 * _DAT_00652e60;
    local_a0 = (ulong)local_84;
    local_d8 = CONCAT44(local_128._0_4_,local_128._0_4_);
    uStack_d0 = local_128._0_4_;
    uStack_cc = local_128._0_4_;
    uVar40 = local_78._0_8_;
    local_40 = 0;
    dVar36 = _DAT_00651e80;
    dVar68 = _UNK_00651e88;
    uVar54 = uVar28;
    dVar35 = _DAT_005d9000;
    uVar24 = _DAT_006524b0;
    uVar69 = _UNK_006524b4;
    uVar70 = _UNK_006524b8;
    uVar71 = _UNK_006524bc;
    iVar72 = _DAT_00652d70;
    iVar73 = _UNK_00652d74;
    iVar74 = _UNK_00652d78;
    iVar75 = _UNK_00652d7c;
    iVar76 = _DAT_00652d80;
    iVar77 = _UNK_00652d84;
    iVar78 = _UNK_00652d88;
    iVar79 = _UNK_00652d8c;
    do {
      uVar31 = (uint)uVar29;
      if ((int)uVar54 < 3) goto LAB_004ea0e1;
      auVar43 = ZEXT816(0);
      uVar30 = 0xffffffff;
      uVar26 = 2;
      do {
        fVar39 = pfVar10[uVar17 + uVar40 + uVar26];
        if (((auVar43._0_4_ < fVar39) && (pfVar6[uVar26] <= fVar39 && fVar39 != pfVar6[uVar26])) &&
           (fVar33 = (float)((double)(pfVar12[(int)uVar26 + 2] +
                                     pfVar10[uVar17 + uVar40 + (uVar26 - 2)]) * DAT_00652e68),
           uVar31 = -(uint)(fVar33 < fVar39), auVar42._0_4_ = ~uVar31 & (uint)auVar43._0_4_,
           auVar42._4_4_ = 0, auVar42._8_4_ = auVar43._8_4_, auVar42._12_4_ = auVar43._12_4_,
           auVar43 = auVar42 | ZEXT416((uint)fVar39 & uVar31), fVar33 < fVar39)) {
          uVar30 = uVar26 & 0xffffffff;
        }
        uVar26 = uVar26 + 1;
      } while (uVar28 != uVar26);
      fVar39 = auVar43._0_4_;
      dVar67 = (double)fVar39;
      if ((dVar67 < local_80) || (uVar31 = (uint)uVar30, (int)uVar31 < 0)) {
        uVar31 = (uint)local_60;
        goto LAB_004ea0e1;
      }
      uVar16 = uVar31 - 0x32;
      if (uVar31 < 0x35) {
        uVar16 = 2;
      }
      uVar9 = uVar31 + 0x32;
      if ((int)(uVar31 + 0x32) <= (int)uVar54) {
        uVar9 = uVar54;
      }
      if (uVar16 < uVar9) {
        fVar39 = fVar39 + fVar39;
        uVar26 = (ulong)uVar16;
        uVar29 = uVar9 - uVar26;
        if (uVar29 < 4) {
          uVar11 = uVar26;
        }
        else {
          uVar22 = uVar29 & 0xfffffffffffffffc;
          uVar11 = uVar22 + uVar26;
          iVar38 = uVar16 + juce::jpeglibNamespace::jpeg_zigzag_order2._0_4_;
          iVar45 = uVar16 + juce::jpeglibNamespace::jpeg_zigzag_order2._4_4_;
          iVar46 = uVar16 + juce::jpeglibNamespace::jpeg_zigzag_order2._8_4_;
          iVar47 = uVar16 + juce::jpeglibNamespace::jpeg_zigzag_order2._12_4_;
          uVar14 = 0;
          do {
            fVar33 = (float)(int)(iVar38 - uVar31);
            fVar32 = (float)(int)(iVar45 - uVar31);
            fVar34 = (float)(int)(iVar46 - uVar31);
            fVar50 = (float)(int)(iVar47 - uVar31);
            fVar33 = fVar33 * fVar33;
            fVar32 = fVar32 * fVar32;
            fVar34 = fVar34 * fVar34;
            fVar50 = fVar50 * fVar50;
            auVar37._0_8_ = (double)(fVar33 * fVar33) + dVar36;
            auVar37._8_8_ = (double)(fVar32 * fVar32) + dVar68;
            auVar56._0_8_ = (double)(fVar34 * fVar34) + dVar36;
            auVar56._8_8_ = (double)(fVar50 * fVar50) + dVar68;
            auVar51._8_8_ = dVar67;
            auVar51._0_8_ = dVar67;
            auVar43 = divpd(auVar51,auVar56);
            auVar57._8_8_ = dVar67;
            auVar57._0_8_ = dVar67;
            auVar58 = divpd(auVar57,auVar37);
            uVar54 = -(uint)((int)((iVar38 - uVar31) + 1 ^ uVar24) < iVar72);
            uVar16 = -(uint)((int)((iVar45 - uVar31) + 1 ^ uVar69) < iVar73);
            uVar61 = -(uint)((int)((iVar46 - uVar31) + 1 ^ uVar70) < iVar74);
            uVar63 = -(uint)((int)((iVar47 - uVar31) + 1 ^ uVar71) < iVar75);
            auVar52._0_4_ = (uint)fVar39 & uVar54;
            auVar52._4_4_ = (uint)fVar39 & uVar16;
            auVar52._8_4_ = (uint)fVar39 & uVar61;
            auVar52._12_4_ = (uint)fVar39 & uVar63;
            auVar59._0_4_ = ~uVar54 & (uint)(float)auVar58._0_8_;
            auVar59._4_4_ = ~uVar16 & (uint)(float)auVar58._8_8_;
            auVar59._8_4_ = ~uVar61 & (uint)(float)auVar43._0_8_;
            auVar59._12_4_ = ~uVar63 & (uint)(float)auVar43._8_8_;
            auVar59 = auVar59 | auVar52;
            fVar33 = (pfVar6 + uVar26 + uVar14)[1];
            if (pfVar6[uVar26 + uVar14] < auVar59._0_4_) {
              pfVar6[uVar26 + uVar14] = auVar59._0_4_;
            }
            if (fVar33 < auVar59._4_4_) {
              pfVar6[uVar26 + uVar14 + 1] = auVar59._4_4_;
              pfVar6[uVar26 + uVar14 + 3] = auVar59._12_4_;
            }
            uVar14 = uVar14 + 4;
            iVar38 = iVar38 + iVar76;
            iVar45 = iVar45 + iVar77;
            iVar46 = iVar46 + iVar78;
            iVar47 = iVar47 + iVar79;
          } while (uVar22 != uVar14);
          if (uVar29 == uVar22) goto LAB_004e9c90;
        }
        do {
          fVar33 = (float)(int)((int)uVar11 - uVar31);
          fVar33 = fVar33 * fVar33;
          if ((1 - uVar31) + (int)uVar11 < 3) {
            fVar33 = fVar39;
            if (pfVar6[uVar11] <= fVar39 && fVar39 != pfVar6[uVar11]) goto LAB_004e9eb7;
          }
          else {
            fVar33 = (float)(dVar67 / ((double)(fVar33 * fVar33) + dVar35));
            if (pfVar6[uVar11] <= fVar33 && fVar33 != pfVar6[uVar11]) {
LAB_004e9eb7:
              pfVar6[uVar11] = fVar33;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
LAB_004e9c90:
      fVar39 = local_58[uVar30 - 1];
      fVar33 = local_58[uVar30 + 1];
      fVar50 = fVar33 - fVar39;
      local_78 = ZEXT416((uint)fVar50);
      fVar32 = local_48[uVar30 - 1];
      fVar34 = local_48[uVar30 + 1];
      fVar53 = fVar34 - fVar32;
      local_f8 = ZEXT416((uint)fVar53);
      fVar53 = fVar53 * fVar53 + fVar50 * fVar50;
      local_e8 = ZEXT416((uint)fVar53);
      fVar50 = fVar32 * fVar32 + fVar39 * fVar39;
      fVar32 = ((fVar34 * fVar34 + fVar33 * fVar33) - fVar50) / (fVar53 + fVar53);
      fVar39 = DAT_005d9044;
      fVar33 = 0.0;
      if (fVar32 <= DAT_005d9044) {
        fVar39 = fVar32;
        fVar33 = fVar50;
        if (fVar32 < DAT_005d98c8) {
          fVar33 = 0.0;
          fVar39 = DAT_005d98c8;
        }
      }
      local_98 = (double)CONCAT44(fVar33,fVar39);
      uStack_90 = 0;
      uStack_8c = 0;
      local_a8 = (double)(float)((double)fVar39 * DAT_00652e70);
      pfVar20[-2] = 7.219621e-39;
      pfVar20[-1] = 0.0;
      sincos((double)(float)((double)fVar39 * DAT_00652e70),&local_118,&local_110);
      iVar79 = _UNK_00652d8c;
      iVar78 = _UNK_00652d88;
      iVar77 = _UNK_00652d84;
      iVar76 = _DAT_00652d80;
      iVar75 = _UNK_00652d7c;
      iVar74 = _UNK_00652d78;
      iVar73 = _UNK_00652d74;
      iVar72 = _DAT_00652d70;
      uVar71 = _UNK_006524bc;
      uVar70 = _UNK_006524b8;
      uVar69 = _UNK_006524b4;
      uVar24 = _DAT_006524b0;
      dVar68 = _UNK_00651e88;
      dVar36 = _DAT_00651e80;
      dVar35 = _DAT_005d9000;
      fVar33 = (float)local_110;
      dVar67 = (double)(float)(local_a8 + _DAT_00652e78);
      fVar32 = fVar33 / (float)(local_a8 + _DAT_00652e78);
      fVar39 = DAT_005d9038;
      if (DAT_00652e80 <= dVar67) {
        fVar39 = fVar32;
      }
      if (dVar67 <= DAT_00652e88) {
        fVar39 = fVar32;
      }
      dVar67 = (double)(float)(local_a8 + _DAT_00652e90);
      fVar34 = (float)((uint)fVar33 ^ _DAT_006524b0) / (float)(local_a8 + _DAT_00652e90);
      fVar32 = DAT_005d9038;
      if (DAT_00652e80 <= dVar67) {
        fVar32 = fVar34;
      }
      if (dVar67 <= DAT_00652e88) {
        fVar32 = fVar34;
      }
      fVar39 = DAT_005d9038 / (fVar39 + fVar32);
      fVar32 = fVar39 * (float)local_128._0_4_;
      auVar41._0_4_ = local_c8._0_4_ * ((float)local_98 + (float)local_98 + (float)(int)uVar31);
      auVar41._4_4_ = SQRT((float)local_e8._0_4_) * fVar39 * local_d8._4_4_;
      auVar41._8_4_ =
           ((float)local_78._0_4_ * fVar33 - (float)local_118 * (float)local_f8._0_4_) * fVar32;
      auVar41._12_4_ =
           (fVar33 * (float)local_f8._0_4_ + (float)local_78._0_4_ * (float)local_118) * fVar32;
      *(undefined1 (*) [16])(local_b8 + local_40 * 0x20) = auVar41;
      local_40 = local_40 + 1;
      uVar31 = (uint)local_60;
      pfVar12 = local_50;
      uVar29 = local_60;
      uVar54 = local_34;
    } while (local_40 != local_a0);
    local_40 = (ulong)local_84;
  }
LAB_004ea0e1:
  uVar26 = local_40;
  pfVar6 = local_48;
  pfVar15 = local_58;
  lVar21 = local_b8;
  uVar28 = (uint)local_40;
  uVar8 = local_c8._0_4_;
  pfVar20[-2] = 7.220946e-39;
  pfVar20[-1] = 0.0;
  sigmund_tweak((float)uVar8,uVar31,(long)pfVar15,(long)pfVar6,uVar28,lVar21);
  uVar17 = local_60;
  uVar8 = local_c8._0_4_;
  pfVar20[-2] = 7.220985e-39;
  pfVar20[-1] = 0.0;
  sigmund_tweak((float)uVar8,(uint)uVar17,(long)pfVar15,(long)pfVar6,uVar28,lVar21);
  if (uVar28 != 0) {
    lVar19 = 0;
    do {
      fVar39 = *(float *)(lVar21 + lVar19);
      fVar33 = DAT_00652e10;
      if (0.0 < fVar39) {
        pfVar20[-2] = 7.221096e-39;
        pfVar20[-1] = 0.0;
        dVar35 = log((double)fVar39 * _DAT_00652450);
        fVar33 = (float)(dVar35 * _DAT_00652458);
      }
      *(float *)(lVar21 + 0x10 + lVar19) = fVar33;
      fVar39 = *(float *)(lVar21 + 4 + lVar19);
      fVar33 = 0.0;
      if (0.0 < fVar39) {
        pfVar20[-2] = 7.22116e-39;
        pfVar20[-1] = 0.0;
        dVar35 = log((double)fVar39);
        fVar33 = (float)(dVar35 * _DAT_00652e58 + DAT_005d90a0);
        if (fVar33 <= DAT_005d9058) {
          fVar33 = DAT_005d9058;
        }
      }
      *(float *)(lVar21 + 0x14 + lVar19) = fVar33;
      lVar19 = lVar19 + 0x20;
    } while ((uVar26 & 0xffffffff) * 0x20 != lVar19);
  }
  *local_108 = uVar28;
  if (399999 < (int)local_ac) {
    pfVar20[-2] = 7.221258e-39;
    pfVar20[-1] = 0.0;
    freebytes(pfVar10);
  }
  return;
}


