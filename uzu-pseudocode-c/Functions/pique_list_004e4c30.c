// Function : pique_list
// Namespace: 
// Entry    : 004e4c30
// Prototype: undefined pique_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004e4c30 - 004e565f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pique_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  int *piVar16;
  undefined8 extraout_RDX;
  ulong uVar17;
  float *pfVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  uint uVar26;
  char *pcVar27;
  undefined4 *puVar28;
  uint uVar29;
  float fVar30;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar31;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Db_04;
  float fVar33;
  float fVar34;
  float fVar36;
  double dVar35;
  float fVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  float fVar56;
  undefined4 uVar57;
  uint local_1d8;
  int local_1d4;
  char *local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 *local_1b0;
  double local_1a8;
  float *local_1a0;
  float local_198;
  float local_194;
  char *local_190;
  float *local_188;
  undefined4 *local_180;
  float *local_178;
  float *local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  float local_128;
  undefined4 uStack_124;
  double dStack_120;
  undefined1 local_118 [16];
  double local_100;
  long local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  float *local_d8;
  float *local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  ulong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined4 local_88 [2];
  float local_80;
  undefined4 local_78;
  float local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  float local_50;
  undefined4 local_48;
  undefined4 local_40;
  
  piVar16 = param_12;
  fVar30 = (float)atom_getfloatarg(0,param_11,(long)param_12);
  uVar29 = (uint)fVar30;
  puVar11 = (undefined8 *)atom_getsymbolarg(1,param_11,(long)param_12);
  puVar12 = (undefined8 *)atom_getsymbolarg(2,param_11,(long)param_12);
  fVar30 = (float)atom_getfloatarg(3,param_11,(long)param_12);
  uVar31 = CONCAT44(extraout_XMM0_Db,fVar30);
  uVar19 = (uint)fVar30;
  if (((int)uVar29 < 8) || ((int)uVar19 < 1)) {
    uVar31 = pd_error(CONCAT44(extraout_XMM0_Db,fVar30),param_2,param_3,param_4,param_5,param_6,
                      param_7,param_8,0,"pique: bad npoints or npeak",extraout_RDX,piVar16,param_13,
                      param_14);
  }
  puVar10 = PTR_garray_class_00715780;
  if ((int)*(uint *)(param_9 + 0x30) < (int)uVar19) {
    uVar19 = *(uint *)(param_9 + 0x30);
  }
  plVar13 = pd_findbyclass(uVar31,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)puVar11,*(long *)PTR_garray_class_00715780);
  uVar57 = extraout_XMM0_Da;
  uVar32 = extraout_XMM0_Db_00;
  if (((plVar13 != (long *)0x0) &&
      (uVar31 = garray_getfloatwords
                          (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)plVar13,&local_1d4,&local_d0,
                           piVar16,param_13,param_14), uVar57 = extraout_XMM0_Da_00,
      uVar32 = extraout_XMM0_Db_01, (int)uVar31 != 0)) && ((int)uVar29 <= local_1d4)) {
    plVar13 = pd_findbyclass(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,(long)puVar12,*(long *)puVar10)
    ;
    puVar11 = puVar12;
    if (plVar13 == (long *)0x0) {
      uVar57 = extraout_XMM0_Da_01;
      uVar32 = extraout_XMM0_Db_02;
    }
    else {
      uVar31 = garray_getfloatwords
                         (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar13,&local_1d4,&local_d8,piVar16
                          ,param_13,param_14);
      uVar57 = extraout_XMM0_Da_02;
      uVar32 = extraout_XMM0_Db_03;
      if (((int)uVar31 != 0) && ((int)uVar29 <= local_1d4)) {
        pfVar1 = *(float **)(param_9 + 0x38);
        local_1b0 = *(undefined4 **)(param_9 + 0x40);
        local_170 = *(float **)(param_9 + 0x48);
        local_1d0 = *(char **)(param_9 + 0x50);
        local_1b4 = *(float *)(param_9 + 0x34);
        sys_getsr();
        if (uVar29 < 2) {
          return;
        }
        fVar30 = *local_d0;
        uVar26 = (int)uVar29 >> 1;
        fVar33 = *local_d8 * *local_d8 + fVar30 * fVar30;
        iVar15 = uVar26 - 1;
        if (iVar15 != 0) {
          if (uVar26 - 2 < 8) {
            pfVar18 = local_d0;
            pfVar22 = local_d8;
          }
          else {
            lVar23 = (ulong)(uVar26 - 2) + 1;
            uVar17 = (ulong)((uint)lVar23 & 7);
            uVar21 = 8;
            if (uVar17 != 0) {
              uVar21 = uVar17;
            }
            lVar23 = lVar23 - uVar21;
            pfVar18 = local_d0 + lVar23 * 2;
            iVar15 = iVar15 - (int)lVar23;
            pfVar22 = local_d8 + lVar23 * 2;
            fVar44 = 0.0;
            fVar37 = 0.0;
            fVar39 = 0.0;
            fVar40 = 0.0;
            fVar41 = 0.0;
            fVar46 = 0.0;
            fVar43 = 0.0;
            lVar20 = 0;
            do {
              fVar56 = local_d0[lVar20 * 2 + 2];
              fVar34 = (local_d0 + lVar20 * 2 + 2)[2];
              fVar53 = local_d0[lVar20 * 2 + 6];
              fVar47 = (local_d0 + lVar20 * 2 + 6)[2];
              fVar50 = local_d0[lVar20 * 2 + 10];
              fVar51 = (local_d0 + lVar20 * 2 + 10)[2];
              fVar52 = local_d0[lVar20 * 2 + 0xe];
              fVar45 = (local_d0 + lVar20 * 2 + 0xe)[2];
              fVar36 = local_d8[lVar20 * 2 + 2];
              fVar3 = (local_d8 + lVar20 * 2 + 2)[2];
              fVar4 = local_d8[lVar20 * 2 + 6];
              fVar5 = (local_d8 + lVar20 * 2 + 6)[2];
              fVar6 = local_d8[lVar20 * 2 + 10];
              fVar7 = (local_d8 + lVar20 * 2 + 10)[2];
              fVar8 = local_d8[lVar20 * 2 + 0xe];
              fVar9 = (local_d8 + lVar20 * 2 + 0xe)[2];
              fVar33 = fVar36 * fVar36 + fVar56 * fVar56 + fVar33;
              fVar41 = fVar3 * fVar3 + fVar34 * fVar34 + fVar41;
              fVar46 = fVar4 * fVar4 + fVar53 * fVar53 + fVar46;
              fVar43 = fVar5 * fVar5 + fVar47 * fVar47 + fVar43;
              fVar44 = fVar6 * fVar6 + fVar50 * fVar50 + fVar44;
              fVar37 = fVar7 * fVar7 + fVar51 * fVar51 + fVar37;
              fVar39 = fVar8 * fVar8 + fVar52 * fVar52 + fVar39;
              fVar40 = fVar9 * fVar9 + fVar45 * fVar45 + fVar40;
              lVar20 = lVar20 + 8;
            } while (lVar23 != lVar20);
            fVar33 = fVar40 + fVar43 + fVar37 + fVar41 + fVar39 + fVar46 + fVar44 + fVar33;
          }
          lVar23 = 0;
          do {
            fVar33 = pfVar22[lVar23 * 2 + 2] * pfVar22[lVar23 * 2 + 2] +
                     pfVar18[lVar23 * 2 + 2] * pfVar18[lVar23 * 2 + 2] + fVar33;
            lVar23 = lVar23 + 1;
          } while (iVar15 != (int)lVar23);
        }
        if ((int)uVar29 < 4) {
          return;
        }
        dVar38 = (double)(ulong)(uint)(float)(int)uVar29;
        fVar41 = DAT_005d9038 / (float)(int)uVar29;
        auVar42 = ZEXT416((uint)fVar41);
        local_198 = extraout_XMM0_Da_03 * fVar41;
        fVar33 = (float)((double)fVar33 * DAT_00652ba8);
        local_100 = (double)fVar41 + (double)fVar41;
        local_1c4 = (float)local_100;
        uVar29 = 2;
        if (2 < (int)uVar26) {
          uVar29 = uVar26;
        }
        auVar48 = ZEXT416((uint)fVar30) << 0x20;
        lVar23 = 0;
        uVar26 = 1;
        local_180 = local_1b0;
        local_188 = local_170;
        local_1d8 = 0;
        fVar43 = 0.0;
        fVar41 = 0.0;
        uVar21 = 0;
        pcVar24 = local_1d0;
        pcVar27 = local_1d0;
        puVar28 = local_1b0;
        fVar30 = 0.0;
        dVar54 = _DAT_00652540;
        dVar55 = _UNK_00652548;
        fVar46 = 0.0;
        fVar44 = 0.0;
        fVar37 = 0.0;
        fVar39 = 0.0;
        fVar40 = 0.0;
        local_1c8 = fVar33;
        local_1a0 = pfVar1;
        local_178 = pfVar1;
        local_f8 = param_9;
        do {
          dVar35 = (double)CONCAT44(fVar37,fVar44);
          fVar47 = auVar48._0_4_;
          fVar50 = auVar48._4_4_;
          fVar51 = auVar48._8_4_;
          fVar52 = auVar48._12_4_;
          fVar56 = *(float *)((long)local_d0 + lVar23 + 8);
          uVar57 = 0;
          fVar34 = *(float *)((long)local_d8 + lVar23 + 8);
          uVar17 = (ulong)(uint)fVar34;
          fVar53 = (float)uVar21;
          fVar45 = (float)(uVar21 >> 0x20);
          if (uVar26 < 2) {
            fVar34 = fVar53;
            fVar36 = fVar45;
            fVar53 = fVar30;
            fVar44 = fVar46;
          }
          else {
            dVar38 = (double)fVar47;
            auVar42._0_4_ = fVar34 + fVar44;
            auVar42._4_4_ = fVar56 + fVar37;
            auVar42._8_4_ = fVar39 + 0.0;
            auVar42._12_4_ = fVar40 + 0.0;
            fVar34 = (float)((double)auVar42._0_4_ * dVar54 + dVar38);
            fVar36 = (float)((double)auVar42._4_4_ * dVar55 + (double)fVar50);
            fVar34 = fVar34 * fVar34;
            fVar36 = fVar36 * fVar36;
            dVar35 = (double)CONCAT44(fVar36,fVar34);
            fVar34 = fVar36 + fVar34;
            fVar44 = fVar30;
            if (((uVar26 < 5) || (fVar30 <= fVar46)) ||
               ((fVar30 <= fVar53 ||
                (((fVar30 <= fVar43 || (fVar30 <= fVar34)) || (fVar30 < fVar33)))))) {
              fVar41 = fVar45;
              fVar43 = fVar46;
            }
            else {
              fVar37 = *(float *)((long)local_d0 + lVar23 + -8);
              fVar39 = *(float *)((long)local_d0 + lVar23 + -0x18);
              fVar40 = *(float *)((long)local_d8 + lVar23 + -8);
              fVar43 = *(float *)((long)local_d8 + lVar23 + -0x18);
              dVar38 = (double)*(float *)((long)local_d8 + lVar23 + -0x10);
              dVar54 = (double)*(float *)((long)local_d0 + lVar23 + -0x10);
              local_118 = ZEXT416((uint)fVar39);
              local_168 = ZEXT416((uint)fVar37);
              auVar42._0_4_ = fVar43 - fVar40;
              auVar42._4_4_ = fVar39 - fVar37;
              auVar42._8_8_ = 0;
              local_158._8_4_ = SUB84(dVar54,0);
              local_158._0_8_ = dVar38;
              local_158._12_4_ = (int)((ulong)dVar54 >> 0x20);
              dVar54 = ((dVar54 + dVar54) - ((double)fVar37 + (double)fVar39)) *
                       (double)auVar42._4_4_;
              dVar38 = (dVar54 + ((dVar38 + dVar38) - ((double)fVar40 + (double)fVar43)) *
                                 (double)auVar42._0_4_) / ((double)fVar30 * DAT_00652488);
              uVar32 = (undefined4)((ulong)dVar38 >> 0x20);
              fVar37 = (float)dVar38;
              dVar38 = (double)CONCAT44(uVar32,fVar37);
              dVar35 = (double)fVar37;
              if ((_DAT_00652bb0 < dVar35) || (dVar35 < _DAT_00652bb8)) {
                fVar41 = fVar45;
                dVar54 = _DAT_00652540;
                dVar55 = _UNK_00652548;
                fVar43 = fVar46;
              }
              else {
                local_148 = ZEXT416((uint)fVar43);
                local_138 = ZEXT416((uint)fVar40);
                local_b8 = ZEXT416((uint)fVar56);
                uStack_a0 = 0;
                local_128 = fVar37 * DAT_00652ba0;
                local_f0 = (double)local_128;
                local_1c0 = fVar53;
                local_1bc = fVar30;
                local_1b8 = fVar46;
                local_1a8 = (double)fVar30;
                local_194 = fVar37;
                local_190 = pcVar27;
                uStack_124 = uVar32;
                dStack_120 = dVar54;
                local_c8 = fVar34;
                fStack_c4 = fVar36;
                fStack_c0 = fVar36;
                fStack_bc = fVar36;
                local_a8 = uVar17;
                _local_98 = auVar48;
                sincos(local_f0,&local_e0,&local_e8);
                fVar30 = (float)local_e0;
                if ((((DAT_00651f48 <= local_f0) ||
                     (fVar33 = DAT_005d9038, local_f0 <= _DAT_00652bc0)) &&
                    ((fVar33 = DAT_005d9044, local_f0 <= _DAT_00652bc8 ||
                     (_DAT_00652bd0 <= local_f0)))) &&
                   ((_DAT_00652bd8 <= local_f0 || (local_f0 <= _DAT_00652be0)))) {
                  auVar2._4_4_ = local_128 + _UNK_00652bf4;
                  auVar2._0_4_ = local_128 + _DAT_00652bf0;
                  auVar2._8_4_ = local_128 + _UNK_00652bf8;
                  auVar2._12_4_ = local_128 + _UNK_00652bfc;
                  auVar42 = rcpps(auVar42,auVar2);
                  fVar33 = fVar30 * auVar42._0_4_;
                  fVar46 = fVar30 * auVar42._4_4_;
                  fVar33 = (float)((double)((fVar30 - (local_128 + _UNK_00652bf4) * fVar46) *
                                            auVar42._4_4_ + fVar46 +
                                           (fVar30 - (local_128 + _DAT_00652bf0) * fVar33) *
                                           auVar42._0_4_ + fVar33) * DAT_00652be8 +
                                  (double)(fVar30 / local_128));
                }
                fVar53 = (float)((double)local_158._8_8_ -
                                (double)((float)local_118._0_4_ + (float)local_168._0_4_) *
                                DAT_005db338);
                fVar37 = (float)((double)local_158._0_8_ -
                                (double)(local_148._0_4_ + (float)local_138._0_4_) * DAT_005db338);
                fVar46 = (float)((double)(DAT_005d9038 / fVar33) * local_100);
                fVar44 = (float)(SQRT(local_1a8) * (double)fVar46);
                uVar21 = CONCAT44((int)((ulong)(SQRT(local_1a8) * (double)fVar46) >> 0x20),fVar44);
                fVar33 = ((float)local_e8 * fVar53 - fVar30 * fVar37) * fVar46;
                fVar46 = ((float)local_e8 * fVar37 + fVar30 * fVar53) * fVar46;
                auVar42 = ZEXT416((uint)fVar46);
                auVar48._8_8_ = uStack_a0;
                auVar48._0_8_ = local_a8;
                if (DAT_005d9058 < local_1b4) {
                  local_138._0_8_ = (long)local_d0 + lVar23 + -8;
                  local_148._0_8_ = (long)local_d8 + lVar23 + -8;
                  local_158._0_4_ = fVar46;
                  local_118._0_4_ = fVar44;
                  local_168._0_4_ = fVar33;
                  uVar31 = peakerror(local_128 + DAT_00652ba0,fVar33,fVar46,
                                     (float *)((long)local_d0 + lVar23 + -0x18),
                                     (float *)((long)local_d8 + lVar23 + -0x18));
                  local_1a8 = (double)CONCAT44(local_1a8._4_4_,(int)uVar31);
                  uVar31 = peakerror(local_128 + DAT_00652ba4,(float)local_168._0_4_,
                                     (float)local_158._0_4_,(float *)local_138._0_8_,
                                     (float *)local_148._0_8_);
                  dVar38 = (double)(ulong)(uint)local_168._0_4_;
                  uVar21 = (ulong)(uint)local_118._0_4_;
                  auVar42 = ZEXT416((uint)local_158._0_4_);
                  auVar48._8_8_ = uStack_a0;
                  auVar48._0_8_ = local_a8;
                  dVar35 = (double)(ulong)(uint)((float)local_118._0_4_ * (float)local_118._0_4_);
                  fVar33 = (float)local_168._0_4_;
                  if (local_1b4 <
                      ((float)uVar31 + local_1a8._0_4_) /
                      ((float)local_118._0_4_ * (float)local_118._0_4_)) {
                    pcVar24 = local_1d0;
                    pcVar27 = local_190;
                    puVar28 = local_1b0;
                    fVar34 = local_c8;
                    fVar36 = fStack_c4;
                    fVar53 = local_1c0;
                    fVar41 = 0.0;
                    fVar33 = local_1c8;
                    dVar54 = _DAT_00652540;
                    dVar55 = _UNK_00652548;
                    fVar44 = local_1bc;
                    fVar47 = (float)local_98._0_4_;
                    fVar50 = (float)local_98._4_4_;
                    fVar51 = fStack_90;
                    fVar52 = fStack_8c;
                    fVar56 = (float)local_b8._0_4_;
                    uVar57 = local_b8._4_4_;
                    fVar43 = local_1b8;
                    uVar17 = local_a8;
                    goto LAB_004e4fb3;
                  }
                }
                dVar55 = _UNK_00652548;
                dVar54 = _DAT_00652540;
                uVar17 = auVar48._0_8_;
                dVar38 = (double)(ulong)(uint)fVar33;
                fVar30 = (local_194 + (float)(int)(uVar26 - 3)) * local_198;
                dVar35 = (double)(ulong)(uint)fVar30;
                *local_178 = fVar30;
                *local_180 = (int)uVar21;
                *local_188 = fVar33;
                *(int *)local_190 = auVar42._0_4_;
                local_1d8 = local_1d8 + 1;
                pcVar24 = local_1d0;
                puVar28 = local_1b0;
                fVar34 = local_c8;
                fVar36 = fStack_c4;
                if (local_1d8 == uVar19) {
                  pcVar27 = local_190;
                  local_1d8 = uVar19;
                  goto LAB_004e555a;
                }
                local_178 = local_178 + 1;
                local_180 = local_180 + 1;
                local_188 = local_188 + 1;
                pcVar27 = local_190 + 4;
                fVar53 = local_1c0;
                fVar41 = 0.0;
                fVar33 = local_1c8;
                fVar44 = local_1bc;
                fVar47 = (float)local_98._0_4_;
                fVar50 = (float)local_98._4_4_;
                fVar51 = fStack_90;
                fVar52 = fStack_8c;
                fVar56 = (float)local_b8._0_4_;
                uVar57 = local_b8._4_4_;
                fVar43 = local_1b8;
              }
            }
          }
LAB_004e4fb3:
          uVar26 = uVar26 + 1;
          auVar49._8_4_ = (int)(uVar17 >> 0x20);
          auVar49._0_8_ = uVar17;
          auVar49._12_4_ = uVar57;
          auVar48._8_8_ = auVar49._8_8_;
          auVar48._0_4_ = (undefined4)uVar17;
          auVar48._4_4_ = fVar56;
          lVar23 = lVar23 + 8;
          uVar21 = CONCAT44(fVar36,fVar34);
          fVar30 = fVar53;
          fVar46 = fVar44;
          fVar44 = fVar47;
          fVar37 = fVar50;
          fVar39 = fVar51;
          fVar40 = fVar52;
          if (uVar29 == uVar26) {
LAB_004e555a:
            lVar23 = local_f8;
            pfVar1 = local_170;
            if ((int)local_1d8 < 1) {
              return;
            }
            local_1d0 = (char *)(ulong)local_1d8;
            lVar20 = 0;
            pfVar18 = local_1a0;
            pcVar25 = pcVar24;
            do {
              local_80 = (float)(int)lVar20;
              local_88[0] = 1;
              local_78 = 1;
              local_70 = pfVar18[lVar20];
              local_68 = 1;
              local_60 = puVar28[lVar20];
              local_58 = 1;
              local_50 = pfVar1[lVar20];
              local_48 = 1;
              local_40 = *(undefined4 *)(pcVar24 + lVar20 * 4);
              plVar13 = *(long **)(lVar23 + 0x18);
              plVar14 = (long *)__tls_get_addr(&PTR_007159b0);
              pfVar18 = local_1a0;
              outlet_list(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),dVar35,dVar38,
                          auVar42._0_8_,CONCAT44(fVar36,fVar34),uVar21,auVar48._0_8_,
                          CONCAT44(fVar41,fVar53),plVar13,*plVar14 + 0xc0,5,local_88,pcVar25,pcVar27
                         );
              lVar20 = lVar20 + 1;
            } while ((int)local_1d0 != (int)lVar20);
            return;
          }
        } while( true );
      }
    }
  }
  pd_error(CONCAT44(uVar32,uVar57),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "%s: missing or bad array",*puVar11,piVar16,param_13,param_14);
  return;
}


