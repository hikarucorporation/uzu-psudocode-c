// Function : sigmund_tweak
// Namespace: 
// Entry    : 004ea390
// Prototype: undefined sigmund_tweak(float param_1, uint param_2, long param_3, long param_4, uint param_5, long param_6)
// Body     : 004ea390 - 004eac95


/* WARNING: Removing unreachable block (ram,0x004eac91) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigmund_tweak(float param_1,uint param_2,long param_3,long param_4,uint param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  long lVar4;
  bool bVar5;
  undefined8 __x;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar20;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar25;
  undefined4 uVar26;
  long lVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  undefined8 uStack_1c0;
  uint local_1b8 [2];
  float local_1b0;
  uint local_1ac;
  long alStack_1a8 [2];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  float local_168;
  float fStack_164;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  float *local_118;
  long *local_110;
  long local_108;
  long local_100;
  ulong local_f8;
  ulong local_f0;
  float local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  long *local_b0;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  int local_70;
  float local_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  float local_3c;
  float local_38;
  float local_34;
  
  lVar4 = -((long)(int)(param_5 + 1) * 8 + 0xfU & 0xfffffffffffffff0);
  plVar8 = (long *)((long)local_1b8 + lVar4);
  if ((int)param_5 < 1) {
    return;
  }
  dVar35 = _DAT_005d9000 / (double)(int)param_2;
  uVar11 = (ulong)param_5;
  local_108 = param_4;
  local_100 = param_3;
  local_38 = param_1;
  if (param_5 < 4) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)(param_5 & 0xfffffffc);
    uVar9 = (uVar7 - 4 >> 2) + 1;
    lVar13 = _DAT_005d99f0;
    lVar27 = _UNK_005d99f8;
    if (uVar7 - 4 == 0) {
      lVar10 = 1;
LAB_004ea4bb:
      auVar15._8_4_ = (int)param_6;
      auVar15._0_8_ = param_6;
      auVar15._12_4_ = (int)((ulong)param_6 >> 0x20);
      lVar13 = param_6 + lVar13 * 0x20;
      lVar27 = auVar15._8_8_ + lVar27 * 0x20;
      plVar8[lVar10] = lVar13;
      (plVar8 + lVar10)[1] = lVar27;
      plVar2 = (long *)((long)alStack_1a8 + lVar10 * 8 + lVar4);
      *plVar2 = _DAT_00652d90 + lVar13;
      plVar2[1] = _UNK_00652d98 + lVar27;
    }
    else {
      uVar12 = uVar9 & 0xfffffffffffffffe;
      lVar10 = 1;
      do {
        lVar29 = lVar13 * 0x20 + param_6;
        lVar30 = lVar27 * 0x20 + param_6;
        plVar8[lVar10] = lVar29;
        (plVar8 + lVar10)[1] = lVar30;
        plVar2 = (long *)((long)alStack_1a8 + lVar10 * 8 + lVar4);
        *plVar2 = lVar29 + _DAT_00652d90;
        plVar2[1] = lVar30 + _UNK_00652d98;
        auVar24._0_8_ = lVar29 + (long)DAT_00652db0;
        auVar24._8_8_ = lVar30 + DAT_00652db0._8_8_;
        plVar2 = (long *)((long)alStack_1a8 + lVar10 * 8 + lVar4 + 0x10);
        *plVar2 = lVar29 + (long)DAT_00652da0;
        plVar2[1] = lVar30 + DAT_00652da0._8_8_;
        *(undefined1 (*) [16])((long)&local_188 + lVar10 * 8 + lVar4) = auVar24;
        lVar13 = lVar13 + (long)DAT_00652dc0;
        lVar27 = lVar27 + DAT_00652dc0._8_8_;
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
      if ((uVar9 & 1) != 0) goto LAB_004ea4bb;
    }
    if (uVar7 == uVar11) goto LAB_004ea502;
  }
  lVar13 = param_6 + uVar7 * 0x20;
  do {
    *(long *)((long)alStack_1a8 + uVar7 * 8 + lVar4 + -8) = lVar13;
    uVar7 = uVar7 + 1;
    lVar13 = lVar13 + 0x20;
  } while (uVar11 != uVar7);
LAB_004ea502:
  local_3c = DAT_005d9038 / local_38;
  local_34 = (float)((DAT_00652be8 + (double)(int)param_2) * dVar35);
  local_6c = (float)dVar35;
  local_f8 = uVar11;
  local_b0 = plVar8;
  *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea554;
  qsort((void *)((long)local_1b8 + lVar4 + 8),(long)(int)param_5,8,sigmund_cmp_freq);
  plVar8 = local_b0;
  *local_b0 = (long)local_1b8;
  local_118 = (float *)plVar8[1];
  local_1b0 = local_118[2];
  local_1ac = (uint)local_118[3] ^ _DAT_006524b0;
  local_1b8[0] = (uint)*local_118 ^ _DAT_006524b0;
  local_70 = param_2 * 2 + -3;
  local_74 = (float)(int)param_2;
  uVar11 = (ulong)(param_5 + 1);
  uVar7 = 1;
  local_110 = plVar8;
  dVar35 = DAT_005db338;
  local_f0 = uVar11;
  while( true ) {
    uVar6 = (uint)((double)(*local_118 * local_3c) + dVar35);
    if ((-1 < (int)uVar6) && ((int)uVar6 <= local_70)) {
      iVar1 = uVar6 + 2;
      lVar13 = 2 - (ulong)(uVar7 == local_f8);
      local_168 = (float)(int)uVar6;
      fStack_164 = (float)(int)(uVar6 - 2);
      uStack_160 = 0;
      local_78 = (float)iVar1;
      fStack_e4 = *(float *)(local_100 + (ulong)uVar6 * 4);
      local_e8 = *(float *)(local_108 + (ulong)uVar6 * 4);
      uStack_e0 = 0;
      fVar22 = *(float *)(local_100 + (long)iVar1 * 4);
      fVar31 = *(float *)(local_108 + (long)iVar1 * 4);
      fVar33 = 0.0;
      fVar34 = 0.0;
      local_88._4_4_ = *(float *)(local_100 + -8 + (long)(int)uVar6 * 4);
      local_88._0_4_ = *(float *)(local_108 + -8 + (long)(int)uVar6 * 4);
      uStack_80 = 0;
      plVar8 = local_110;
      do {
        pfVar3 = (float *)*plVar8;
        _local_a8 = ZEXT416((uint)(pfVar3[2] * local_74));
        fVar14 = *pfVar3 * local_3c;
        local_c8 = ZEXT416((uint)fVar14);
        local_58._0_4_ = (float)((double)(local_168 - fVar14) * _DAT_00652dd0);
        local_58._4_4_ = (float)((double)(fStack_164 - fVar14) * _UNK_00652dd8);
        uStack_50 = 0;
        _local_98 = ZEXT416((uint)(pfVar3[3] * local_74));
        local_68._0_8_ = (BADTYPE)(float)local_58;
        dVar35 = (double)local_58._4_4_;
        local_d8._8_8_ = dVar35;
        local_d8._0_8_ = dVar35;
        local_198 = fVar31;
        fStack_194 = fVar22;
        fStack_190 = fVar33;
        fStack_18c = fVar34;
        local_68._8_8_ = dVar35;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea84e;
        auVar16._0_8_ = sin(dVar35);
        auVar16._8_8_ = extraout_XMM0_Qb;
        auVar17._4_12_ = auVar16._4_12_;
        auVar23._8_8_ = -(ulong)((double)local_68._8_8_ < _UNK_00652de8);
        auVar23._0_8_ = -(ulong)((double)local_68._0_8_ < _DAT_00652de0);
        param_2 = movmskpd(param_2,auVar23);
        auVar17._0_4_ = (float)auVar16._0_8_ / local_58._4_4_;
        auVar24 = ZEXT416((uint)DAT_005d9038);
        if ((param_2 & 2) == 0) {
          auVar24 = auVar17;
        }
        bVar5 = (double)local_d8._0_8_ <= DAT_00652e88;
        local_d8 = auVar24;
        if (bVar5) {
          local_d8 = auVar17;
        }
        fVar22 = local_58._4_4_ * local_34;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea8bd;
        sincos((double)fVar22,&local_138,&local_130);
        __x = local_68._0_8_;
        local_188 = local_138;
        dStack_180 = local_130;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea8dc;
        auVar18._0_8_ = sin((double)__x);
        auVar18._8_8_ = extraout_XMM0_Qb_00;
        auVar19._4_12_ = auVar18._4_12_;
        auVar19._0_4_ = (float)auVar18._0_8_ / (float)local_58;
        auVar24 = ZEXT416((uint)DAT_005d9038);
        if ((param_2 & 1) == 0) {
          auVar24 = auVar19;
        }
        bVar5 = (double)local_68._0_8_ <= DAT_00652e88;
        local_68 = auVar24;
        if (bVar5) {
          local_68 = auVar19;
        }
        fVar22 = (float)local_58 * local_34;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea92e;
        sincos((double)fVar22,&local_148,&local_140);
        local_178 = local_148;
        dStack_170 = local_140;
        fVar22 = (float)((double)(local_78 - (float)local_c8._0_4_) * _DAT_00652e78);
        local_c8._0_4_ = fVar22;
        dVar35 = (double)fVar22;
        local_58 = dVar35;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea977;
        dVar35 = sin(dVar35);
        uVar20 = (undefined4)((ulong)dVar35 >> 0x20);
        uVar21 = (undefined4)((ulong)extraout_XMM0_Qb_01 >> 0x20);
        fVar22 = DAT_005d9038;
        uVar25 = 0;
        uVar26 = 0;
        uVar28 = 0;
        if (DAT_00652e80 <= local_58) {
          fVar22 = (float)dVar35 / (float)local_c8._0_4_;
          uVar25 = uVar20;
          uVar26 = (int)extraout_XMM0_Qb_01;
          uVar28 = uVar21;
        }
        bVar5 = local_58 <= DAT_00652e88;
        local_58._0_4_ = fVar22;
        local_58._4_4_ = (float)uVar25;
        if (bVar5) {
          local_58._0_4_ = (float)dVar35 / (float)local_c8._0_4_;
          local_58._4_4_ = (float)uVar20;
          uVar26 = (int)extraout_XMM0_Qb_01;
          uVar28 = uVar21;
        }
        uStack_50 = CONCAT44(uVar28,uVar26);
        local_a8._4_4_ = local_a8._0_4_;
        fStack_a0 = (float)local_a8._0_4_;
        fStack_9c = (float)local_a8._0_4_;
        local_98._4_4_ = local_98._0_4_;
        fStack_90 = (float)local_98._0_4_;
        fStack_8c = (float)local_98._0_4_;
        local_88._0_4_ =
             (float)local_88 -
             (float)local_d8._0_4_ *
             ((float)local_a8._0_4_ * (float)local_188 + (float)dStack_180 * (float)local_98._0_4_);
        local_88._4_4_ =
             local_88._4_4_ -
             (float)local_d8._0_4_ *
             ((float)local_a8._0_4_ * (float)dStack_180 - (float)local_188 * (float)local_98._0_4_);
        uStack_80 = CONCAT44(uStack_80._4_4_ -
                             (float)local_d8._0_4_ *
                             ((float)local_a8._0_4_ * 0.0 + (float)local_98._0_4_ * 0.0),
                             (float)uStack_80 -
                             (float)local_d8._0_4_ *
                             ((float)local_a8._0_4_ * 0.0 + (float)local_98._0_4_ * 0.0));
        local_e8 = local_e8 -
                   (float)local_68._0_4_ *
                   ((float)local_a8._0_4_ * (float)local_178 +
                   (float)dStack_170 * (float)local_98._0_4_);
        fStack_e4 = fStack_e4 -
                    (float)local_68._0_4_ *
                    ((float)local_a8._0_4_ * (float)dStack_170 -
                    (float)local_178 * (float)local_98._0_4_);
        uStack_e0 = CONCAT44(uStack_e0._4_4_ -
                             (float)local_68._0_4_ *
                             ((float)local_a8._0_4_ * 0.0 + (float)local_98._0_4_ * 0.0),
                             (float)uStack_e0 -
                             (float)local_68._0_4_ *
                             ((float)local_a8._0_4_ * 0.0 + (float)local_98._0_4_ * 0.0));
        fVar22 = (float)local_c8._0_4_ * local_34;
        *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4ea77a;
        sincos((double)fVar22,&local_158,&local_150);
        fVar31 = local_198 -
                 (float)local_58 *
                 ((float)local_a8._0_4_ * (float)local_158 +
                 (float)local_150 * (float)local_98._0_4_);
        fVar22 = fStack_194 -
                 (float)local_58 *
                 ((float)local_a8._4_4_ * (float)local_150 -
                 (float)local_158 * (float)local_98._4_4_);
        fVar33 = fStack_190 - (float)local_58 * (fStack_a0 * 0.0 + fStack_90 * 0.0);
        fVar34 = fStack_18c - (float)local_58 * (fStack_9c * 0.0 + fStack_8c * 0.0);
        plVar8 = plVar8 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      local_a8._0_4_ =
           (BADTYPE)((double)(fVar31 + (float)local_88) * _DAT_00652df0 +
                    (double)local_e8 * _DAT_00651fc0);
      local_a8._4_4_ =
           (BADTYPE)((double)(fVar22 + local_88._4_4_) * _UNK_00652df8 +
                    (double)fStack_e4 * _UNK_00651fc8);
      _fStack_a0 = 0;
      dVar35 = (double)((float)local_a8._4_4_ * (float)local_a8._4_4_ +
                       (float)local_a8._0_4_ * (float)local_a8._0_4_);
      local_68._0_8_ = dVar35;
      fVar31 = (float)(((((double)fStack_e4 - (double)(fVar22 + local_88._4_4_) * _UNK_00651fc8) *
                         (double)(local_88._4_4_ - fVar22) +
                        ((double)local_e8 - (double)(fVar31 + (float)local_88) * _DAT_00651fc0) *
                        (double)((float)local_88 - fVar31)) * DAT_005db338) /
                      (dVar35 * DAT_00652488));
      fVar22 = DAT_005d9044;
      if ((fVar31 <= DAT_005d9044) && (fVar22 = fVar31, fVar31 < DAT_005d98c8)) {
        fVar22 = DAT_005d98c8;
      }
      local_98._0_4_ = fVar22;
      local_58 = (double)CONCAT44(local_58._4_4_,(float)((double)fVar22 * DAT_00652e70));
      dVar35 = (double)(float)((double)fVar22 * DAT_00652e70);
      uStack_80 = 0;
      local_88 = dVar35;
      *(undefined8 *)((long)local_1b8 + lVar4 + -8) = 0x4eaab7;
      sincos(dVar35,&local_128,&local_120);
      dVar35 = DAT_005db338;
      fVar31 = (float)local_128;
      dVar32 = (double)(float)(local_88 + DAT_00652e70);
      fVar33 = fVar31 / (float)(local_88 + DAT_00652e70);
      fVar22 = DAT_005d9038;
      if (DAT_00652e80 <= dVar32) {
        fVar22 = fVar33;
      }
      if (dVar32 <= DAT_00652e88) {
        fVar22 = fVar33;
      }
      dVar32 = (double)(float)(local_88 + _DAT_00652e98);
      fVar34 = fVar31 / (float)(local_88 + _DAT_00652e98);
      fVar33 = DAT_005d9038;
      if (DAT_00652e80 <= dVar32) {
        fVar33 = fVar34;
      }
      if (dVar32 <= DAT_00652e88) {
        fVar33 = fVar34;
      }
      dVar32 = (double)(fVar31 / (float)local_58) * DAT_005db338;
      fVar22 = local_6c /
               (float)((double)(fVar22 + fVar33) * _DAT_00652ea0 +
                      (double)((-(ulong)(local_88 < DAT_00652e80) & (ulong)DAT_005db338 |
                               ~-(ulong)(local_88 < DAT_00652e80) & (ulong)dVar32) &
                               -(ulong)(DAT_00652e88 < local_88) |
                              ~-(ulong)(DAT_00652e88 < local_88) & (ulong)dVar32));
      *local_118 = ((float)local_98._0_4_ + (float)local_98._0_4_ + local_168) * local_38;
      local_118[1] = (float)(SQRT((double)local_68._0_8_) * (double)fVar22);
      local_118[2] = (local_a8._4_4_ * (float)local_120 - local_a8._0_4_ * fVar31) * fVar22;
      local_118[3] = (local_a8._0_4_ * (float)local_120 + local_a8._4_4_ * fVar31) * fVar22;
      plVar8 = local_b0;
      uVar11 = local_f0;
    }
    uVar7 = uVar7 + 1;
    if (uVar7 == uVar11) break;
    local_118 = (float *)plVar8[uVar7];
    local_110 = local_110 + 1;
  }
  return;
}


