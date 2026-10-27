// Function : bonk_new
// Namespace: 
// Entry    : 004d8e10
// Prototype: long * bonk_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 004d8e10 - 004d9f97


/* WARNING: Removing unreachable block (ram,0x004d9bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * bonk_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,ulong param_10,int *param_11,long *param_12,char *param_13,
               undefined8 param_14)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  float fVar7;
  float fVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  float *pfVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ulong uVar19;
  undefined8 extraout_RDX_02;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  float *pfVar29;
  int iVar30;
  ulong uVar31;
  float fVar32;
  undefined4 extraout_XMM0_Da;
  float fVar33;
  float fVar34;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  long extraout_XMM0_Qa_04;
  double dVar35;
  undefined4 uVar44;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar42 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar43 [16];
  undefined1 extraout_var [12];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  uint local_1e8;
  double dStack_1e0;
  float local_1d8;
  undefined4 uStack_174;
  undefined4 uStack_164;
  double local_138;
  double local_130;
  double local_128;
  undefined8 uStack_120;
  ulong local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulong local_e8;
  ulong local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar17 = param_10 & 0xffffffff;
  plVar9 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bonk_class,
                  param_10,param_11,param_12,param_13,param_14);
  lVar10 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8);
  plVar9[8] = lVar10;
  uVar31 = 0xb;
  local_1d8 = DAT_005d98e4;
  local_21c = DAT_00651f30;
  iVar30 = (int)param_10;
  if (iVar30 < 1) {
    uVar18 = 1;
    local_1e8 = 0x80;
LAB_004d8eb8:
    uVar55 = 0;
    uVar25 = 0x100;
    fVar54 = DAT_005d9038;
    fVar32 = DAT_005d9038;
  }
  else {
    if (*param_11 == 1) {
      fVar32 = (float)atom_getfloatarg(0,iVar30,(long)param_11);
      local_1e8 = (uint)fVar32;
      fVar32 = (float)atom_getfloatarg(1,iVar30,(long)param_11);
      uVar18 = (uint)fVar32;
      goto LAB_004d8eb8;
    }
    uVar18 = 1;
    local_1e8 = 0x80;
    uVar25 = 0x100;
    uVar31 = 0xb;
    uVar55 = 0;
    fVar54 = DAT_005d9038;
    fVar32 = DAT_005d9038;
    do {
      iVar21 = (int)uVar17;
      fVar34 = fVar54;
      uVar48 = uVar55;
      puVar12 = (undefined8 *)atom_getsymbolarg(0,iVar21,(long)param_11);
      pcVar24 = (char *)*puVar12;
      iVar30 = strcmp(pcVar24,"-npts");
      if ((iVar30 == 0) && (iVar21 != 1)) {
        fVar34 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
        uVar25 = (uint)fVar34;
      }
      else {
        iVar30 = strcmp(pcVar24,"-hop");
        if ((iVar30 == 0) && (iVar21 != 1)) {
          fVar34 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
          local_1e8 = (uint)fVar34;
        }
        else {
          iVar30 = strcmp(pcVar24,"-nsigs");
          if ((iVar30 == 0) && (iVar21 != 1)) {
            fVar34 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
            uVar18 = (uint)fVar34;
          }
          else {
            iVar30 = strcmp(pcVar24,"-nfilters");
            if ((iVar30 == 0) && (iVar21 != 1)) {
              fVar34 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
              uVar31 = (ulong)(uint)(int)fVar34;
            }
            else {
              iVar30 = strcmp(pcVar24,"-halftones");
              if ((iVar30 == 0) && (iVar21 != 1)) {
                local_1d8 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
              }
              else {
                iVar30 = strcmp(pcVar24,"-overlap");
                if ((iVar30 == 0) && (iVar21 != 1)) {
                  fVar32 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
                }
                else {
                  iVar30 = strcmp(pcVar24,"-firstbin");
                  if ((iVar30 == 0) && (iVar21 != 1)) {
                    fVar54 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
                    uVar55 = extraout_var._0_4_;
                  }
                  else {
                    iVar30 = strcmp(pcVar24,"-minbandwidth");
                    if ((iVar30 == 0) && (iVar21 != 1)) {
                      local_21c = (float)atom_getfloatarg(1,iVar21,(long)param_11);
                    }
                    else {
                      iVar30 = strcmp(pcVar24,"-spew");
                      if ((iVar30 != 0) || (iVar21 == 1)) {
                        pd_error(extraout_XMM0_Qa_05,CONCAT44(uVar48,fVar34),param_3,param_4,param_5
                                 ,param_6,param_7,param_8,(long)plVar9,
                                 "usage is: bonk [-npts #] [-hop #] [-nsigs #] [-nfilters #] [-halftones #]"
                                 ,extraout_RDX_02,param_12,param_13,param_14);
                        post(extraout_XMM0_Qa_06,CONCAT44(uVar48,fVar34),param_3,param_4,param_5,
                             param_6,param_7,param_8,"... [-overlap #] [-firstbin #] [-spew #]");
                        break;
                      }
                      fVar34 = (float)atom_getfloatarg(1,iVar21,(long)param_11);
                      *(uint *)((long)plVar9 + 0x2654) = (uint)(fVar34 != DAT_005d9058);
                      param_12 = plVar9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar17 = (ulong)(iVar21 - 2U);
      param_11 = param_11 + 8;
    } while (iVar21 - 2U != 0);
    uVar27 = 0x100;
    if ((int)uVar25 < 0x40) goto LAB_004d8ec4;
  }
  uVar27 = uVar25;
LAB_004d8ec4:
  *(uint *)(plVar9 + 9) = uVar27;
  uVar22 = (int)uVar25 / 2;
  uVar17 = (ulong)local_1e8;
  uVar27 = uVar22;
  if (0 < (int)local_1e8) {
    uVar27 = local_1e8;
  }
  *(uint *)((long)plVar9 + 0x4c) = uVar27;
  iVar21 = (int)uVar31;
  iVar30 = 0xb;
  if (0 < iVar21) {
    iVar30 = iVar21;
  }
  *(int *)(plVar9 + 10) = iVar30;
  auVar53 = ZEXT416((uint)local_1d8);
  dVar35 = (double)local_1d8;
  if (DAT_00651f48 <= dVar35) {
    if (DAT_005d9074 < local_1d8) {
      local_1d8 = DAT_005d9074;
    }
  }
  else {
    local_1d8 = DAT_005d98e4;
  }
  uVar27 = 8;
  if ((int)uVar18 < 8) {
    uVar27 = uVar18;
  }
  uVar26 = 1;
  if (0 < (int)uVar27) {
    uVar26 = (ulong)uVar27;
  }
  fVar34 = fVar54;
  uVar48 = uVar55;
  lVar10 = clock_new(plVar9,bonk_tick);
  plVar9[7] = lVar10;
  pvVar11 = getbytes(uVar26 * 0x2598);
  plVar9[0x4c5] = (long)pvVar11;
  puVar12 = gensym("list");
  plVar13 = outlet_new(extraout_XMM0_Qa_00,CONCAT44(uVar48,fVar34),dVar35,auVar53._0_8_,param_5,
                       param_6,param_7,param_8,(long)plVar9,(long)puVar12,extraout_RDX,uVar17,
                       param_13,param_14);
  *(long **)((long)pvVar11 + 0x2580) = plVar13;
  iVar30 = (int)uVar26;
  if (1 < (int)uVar27) {
    puVar12 = (undefined8 *)((long)pvVar11 + 0x4b18);
    iVar20 = iVar30 + -1;
    do {
      puVar14 = gensym("list");
      plVar13 = outlet_new(extraout_XMM0_Qa_01,CONCAT44(uVar48,fVar34),dVar35,auVar53._0_8_,param_5,
                           param_6,param_7,param_8,(long)plVar9,(long)puVar14,extraout_RDX_00,uVar17
                           ,param_13,param_14);
      *puVar12 = plVar13;
      plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar17 = *plVar13 + 0xf0;
      inlet_new(extraout_XMM0_Qa_02,CONCAT44(uVar48,fVar34),dVar35,auVar53._0_8_,param_5,param_6,
                param_7,param_8,(long)plVar9,(long)plVar9,uVar17,uVar17,param_13,param_14);
      puVar12 = puVar12 + 0x4b3;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  puVar12 = gensym("list");
  uVar44 = (undefined4)((ulong)param_7 >> 0x20);
  plVar13 = outlet_new(extraout_XMM0_Qa_03,CONCAT44(uVar48,fVar34),dVar35,auVar53._0_8_,param_5,
                       param_6,param_7,param_8,(long)plVar9,(long)puVar12,extraout_RDX_01,uVar17,
                       param_13,param_14);
  plVar9[6] = (long)plVar13;
  sys_getsr();
  lVar10 = plVar9[0x4c5];
  if (uVar25 == 0) {
    lVar28 = 0;
    do {
      pvVar11 = getbytes(0);
      *(void **)(lVar10 + 0x2588 + lVar28) = pvVar11;
      lVar28 = lVar28 + 0x2598;
    } while (iVar30 * 0x2598 != (int)lVar28);
  }
  else {
    lVar28 = 0;
    do {
      pvVar11 = getbytes((long)(int)uVar25 << 2);
      *(void **)(lVar10 + 0x2588 + lVar28) = pvVar11;
      memset(pvVar11,0,(ulong)uVar25 << 2);
      lVar28 = lVar28 + 0x2598;
    } while (iVar30 * 0x2598 != (int)lVar28);
  }
  if (fVar54 <= DAT_005d9044) {
    fVar54 = DAT_005d9044;
  }
  if (fVar32 <= DAT_005d9038) {
    fVar32 = DAT_005d9038;
  }
  if (local_1e8 == 0) {
    local_1e8 = uVar22;
  }
  *(uint *)(plVar9 + 9) = uVar25;
  *(uint *)((long)plVar9 + 0x4c) = local_1e8;
  *(int *)(plVar9 + 0x4c6) = iVar30;
  iVar30 = 200;
  if (iVar21 < 200) {
    iVar30 = iVar21;
  }
  *(int *)(plVar9 + 10) = iVar30;
  *(float *)((long)plVar9 + 0x54) = local_1d8;
  pvVar11 = getbytes(0);
  plVar9[0x4c4] = (long)pvVar11;
  *(undefined4 *)(plVar9 + 0x4cb) = 0;
  *(undefined8 *)((long)plVar9 + 0x2634) = 0;
  *(undefined8 *)((long)plVar9 + 0x263c) = 0;
  *(undefined8 *)((long)plVar9 + 0x2644) = 0;
  *(undefined8 *)((long)plVar9 + 100) = 0x4020000040a00000;
  plVar9[0xe] = 0x43f333333;
  *(undefined4 *)((long)plVar9 + 0x264c) = 0;
  clock_getlogicaltime();
  plVar9[0x11] = extraout_XMM0_Qa_04;
  *(undefined4 *)(plVar9 + 0x4ca) = 0;
  *(undefined4 *)((long)plVar9 + 0x6c) = 0x40e00000;
  plVar9[0xf] = 0;
  *(undefined4 *)(plVar9 + 0x10) = 0;
  *(undefined4 *)(plVar9 + 0x12) = 1;
  *(undefined4 *)((long)plVar9 + 0x265c) = extraout_XMM0_Da;
  plVar9[0x13] = 0;
  *(undefined4 *)(plVar9 + 0x4cc) = 0;
  if (bonk_filterbanklist != (int *)0x0) {
    piVar15 = bonk_filterbanklist;
    do {
      if ((((*piVar15 == (int)plVar9[10]) && ((float)piVar15[2] == *(float *)((long)plVar9 + 0x54)))
          && (fVar54 == (float)piVar15[4])) &&
         (((fVar32 == (float)piVar15[3] && (piVar15[1] == (int)plVar9[9])) &&
          (local_21c == (float)piVar15[5])))) {
        piVar15[8] = piVar15[8] + 1;
        plVar9[0x13] = (long)piVar15;
        return plVar9;
      }
      piVar15 = *(int **)(piVar15 + 10);
    } while (piVar15 != (int *)0x0);
  }
  piVar15 = getbytes(0x30);
  piVar15[1] = uVar25;
  *piVar15 = iVar21;
  piVar15[2] = (int)local_1d8;
  piVar15[3] = (int)fVar32;
  piVar15[4] = (int)fVar54;
  piVar15[5] = (int)local_21c;
  piVar15[8] = 0;
  *(int **)(piVar15 + 10) = bonk_filterbanklist;
  bonk_filterbanklist = piVar15;
  pvVar11 = getbytes((long)iVar21 << 5);
  dVar35 = exp((double)local_1d8 * _DAT_00651f50);
  if (local_21c <= DAT_00651f30) {
    local_21c = DAT_00651f30;
  }
  dVar38 = DAT_00651f58 * (double)local_21c;
  if ((double)fVar54 < dVar38) {
    uVar55 = 0;
    fVar54 = (float)dVar38;
  }
  auVar53 = ZEXT416((uint)fVar32);
  *(void **)(piVar15 + 6) = pvVar11;
  if (iVar21 < 1) {
    uVar17 = 0;
    if (0 < iVar21) {
LAB_004d9ea5:
      lVar10 = *(long *)(piVar15 + 6);
      uVar26 = uVar17 & 0xffffffff;
      uVar19 = ~uVar26;
      if ((iVar21 - (int)uVar17 & 1U) != 0) {
        *(undefined8 *)(lVar10 + 0x18 + uVar26 * 0x20) = 0;
        *(undefined4 *)(lVar10 + uVar26 * 0x20) = 0;
        uVar26 = uVar26 + 1;
      }
      if (uVar19 + uVar31 != 0) {
        lVar28 = uVar31 - uVar26;
        puVar12 = (undefined8 *)(lVar10 + uVar26 * 0x20 + 0x38);
        do {
          puVar12[-4] = 0;
          *(undefined4 *)(puVar12 + -7) = 0;
          *puVar12 = 0;
          *(undefined4 *)(puVar12 + -3) = 0;
          puVar12 = puVar12 + 8;
          lVar28 = lVar28 + -2;
        } while (lVar28 != 0);
      }
    }
  }
  else {
    fVar33 = (DAT_005d9054 + (float)dVar35) / ((float)dVar35 + DAT_005d9038);
    fVar45 = fVar33 * fVar32;
    local_f8 = (double)local_21c * DAT_005db338;
    fVar58 = (float)local_f8;
    fVar46 = fVar45 * fVar54;
    fVar34 = fVar58;
    if (local_f8 <= (double)fVar46) {
      fVar34 = fVar46;
      uVar44 = 0;
    }
    dVar35 = (double)(int)uVar25;
    local_f0 = DAT_00651f60 * dVar35;
    local_100 = DAT_00651f68 * dVar35;
    fVar32 = DAT_005d9038 / fVar32;
    local_21c = local_21c * fVar32;
    dVar38 = _DAT_005d9000 / dVar35;
    fVar57 = DAT_005d9038 / (DAT_005d9038 - fVar33);
    uVar17 = 0;
    uVar48 = SUB84(DAT_005db338,0);
    uVar50 = (undefined4)((ulong)DAT_005db338 >> 0x20);
    uStack_120 = 0;
    fVar46 = fVar57;
    fVar33 = local_21c;
    local_98 = dVar38;
    dStack_90 = dVar38;
    local_128 = dVar38;
    do {
      dVar36 = (double)(ulong)(uint)fVar33;
      pcVar24 = "bonk~: only using %d filters (ran past Nyquist)";
      if ((float)(int)uVar22 < fVar54) {
LAB_004d9e8e:
        post(dVar36,dVar35,CONCAT44(uVar50,uVar48),auVar53._0_8_,CONCAT44(uVar55,fVar54),
             (ulong)(uint)fVar46,CONCAT44(uVar44,fVar34),dVar38,pcVar24);
        if ((int)uVar17 < iVar21) goto LAB_004d9ea5;
        break;
      }
      dVar36 = (double)fVar34;
      dVar35 = local_f0 / dVar36;
      uVar18 = (uint)dVar35;
      if ((int)uVar18 < 4) {
        pcVar24 = "bonk~: only using %d filters (kernels got too short)";
        goto LAB_004d9e8e;
      }
      if ((int)uVar25 < (int)uVar18) {
        uVar18 = uVar25;
      }
      iVar30 = (int)(local_100 / dVar36);
      uVar27 = (uint)((double)((float)(int)(uVar25 - uVar18) / (float)(int)(local_100 / dVar36)) +
                     _DAT_005d9000);
      uVar26 = (ulong)uVar27;
      pfVar16 = getbytes((long)(int)uVar18 * 8);
      lVar10 = *(long *)(piVar15 + 6);
      lVar28 = uVar17 * 0x20;
      *(float **)(lVar10 + 0x18 + lVar28) = pfVar16;
      *(uint *)(lVar10 + lVar28) = uVar18;
      *(uint *)(lVar10 + 0xc + lVar28) = uVar27;
      *(int *)(lVar10 + 4 + lVar28) = iVar30;
      *(int *)(lVar10 + 8 + lVar28) =
           (int)((double)(int)((uVar25 - uVar18) - (uVar27 - 1) * iVar30) *
                (double)CONCAT44(uVar50,uVar48));
      *(float *)(lVar10 + 0x10 + lVar28) = fVar54;
      *(float *)(lVar10 + 0x14 + lVar28) = fVar34;
      local_e8 = uVar26;
      local_e0 = uVar17;
      if ((int)uVar18 < 1) {
        auVar53 = ZEXT816(0);
      }
      else {
        dVar35 = (double)(int)uVar18;
        if (uVar18 - 1 < 3) {
          auVar53 = ZEXT816(0);
          uVar26 = 0;
          uVar48 = SUB84(DAT_005db338,0);
          uVar44 = (undefined4)((ulong)DAT_005db338 >> 0x20);
          pfVar29 = pfVar16;
        }
        else {
          local_110 = (ulong)(uVar18 - 1) + 1;
          uVar26 = local_110 & 0x1fffffffc;
          pfVar29 = pfVar16 + uVar26 * 2;
          local_88 = _DAT_005d9000 / dVar35;
          fVar33 = 0.0;
          fVar46 = 0.0;
          uVar17 = 0;
          fVar49 = 0.0;
          fVar51 = 0.0;
          iVar30 = _DAT_00651f90;
          iVar20 = _UNK_00651f94;
          local_108 = dVar35;
          dStack_80 = local_88;
          local_78 = fVar54;
          fStack_74 = fVar54;
          fStack_70 = fVar54;
          fStack_6c = fVar54;
          do {
            dVar35 = (double)((float)iVar30 * local_78) * _DAT_00651fb0 * local_98;
            dVar36 = (double)((float)iVar20 * fStack_74) * _UNK_00651fb8 * dStack_90;
            local_48 = CONCAT44((float)((double)((float)(iVar20 + _UNK_00651fa4) * fStack_74) *
                                        _UNK_00651fb8 * dStack_90),
                                (float)((double)((float)(iVar30 + _DAT_00651fa0) * local_78) *
                                        _DAT_00651fb0 * local_98));
            uStack_40 = 0;
            dVar40 = (double)(float)((double)iVar30 * _DAT_00651fb0 * local_88) * _DAT_00651fc0;
            dVar37 = (double)(float)((double)iVar20 * _UNK_00651fb8 * dStack_80) * _UNK_00651fc8;
            dVar38 = (double)(float)((double)(iVar30 + _DAT_00651fa0) * _DAT_00651fb0 * local_88) *
                     _DAT_00651fc0;
            dVar39 = (double)(float)((double)(iVar20 + _UNK_00651fa4) * _UNK_00651fb8 * dStack_80) *
                     _UNK_00651fc8;
            auVar3._8_4_ = SUB84(dVar39,0);
            auVar3._0_8_ = dVar38;
            auVar3._12_4_ = (int)((ulong)dVar39 >> 0x20);
            dVar39 = sin(dVar40);
            uStack_164 = (undefined4)((ulong)dVar40 >> 0x20);
            auVar4._4_8_ = extraout_XMM0_Qb;
            auVar4._0_4_ = uStack_164;
            auVar41._0_8_ = auVar4._0_8_ << 0x20;
            auVar41._8_4_ = SUB84(dVar37,0);
            auVar41._12_4_ = (int)((ulong)dVar37 >> 0x20);
            dVar40 = sin(auVar41._8_8_);
            uStack_210._0_4_ = SUB84(dVar40,0);
            local_218 = dVar39;
            uStack_210._4_4_ = (int)((ulong)dVar40 >> 0x20);
            dVar40 = sin(dVar38);
            dStack_1e0 = auVar3._8_8_;
            dVar37 = sin(dStack_1e0);
            fVar47 = (float)uStack_210;
            dVar38 = (double)fVar47;
            local_68._8_4_ = SUB84(dVar38,0);
            local_68._0_8_ = (double)(float)dVar39;
            local_68._12_4_ = (int)((ulong)dVar38 >> 0x20);
            local_58 = (double)(float)dVar40;
            dStack_50 = (double)(float)dVar37;
            dVar35 = (double)(float)dVar35;
            dVar38 = (double)(float)dVar36;
            fVar2 = (float)local_48;
            dVar36 = (double)(float)((ulong)local_48 >> 0x20);
            sincos(dVar35,&local_b0,&local_b8);
            uStack_174 = (undefined4)((ulong)dVar35 >> 0x20);
            auVar5._4_8_ = extraout_XMM0_Qb_00;
            auVar5._0_4_ = uStack_174;
            auVar42._0_8_ = auVar5._0_8_ << 0x20;
            auVar42._8_4_ = SUB84(dVar38,0);
            auVar42._12_4_ = (int)((ulong)dVar38 >> 0x20);
            sincos(auVar42._8_8_,&local_a0,&local_a8);
            dVar38 = local_a8;
            dVar35 = local_b8;
            sincos((double)fVar2,&local_d0,&local_d8);
            local_218._4_4_ = (undefined4)((ulong)(double)fVar2 >> 0x20);
            uStack_210._0_4_ = SUB84(dVar36,0);
            uStack_210._4_4_ = (undefined4)((ulong)dVar36 >> 0x20);
            auVar6._4_8_ = extraout_XMM0_Qb_01;
            auVar6._0_4_ = local_218._4_4_;
            auVar43._0_8_ = auVar6._0_8_ << 0x20;
            auVar43._8_4_ = (undefined4)uStack_210;
            auVar43._12_4_ = uStack_210._4_4_;
            sincos(auVar43._8_8_,&local_c0,&local_c8);
            pfVar1 = pfVar16 + uVar17 * 2;
            *pfVar1 = (float)(dVar35 * (double)local_68._0_8_);
            pfVar1[1] = (float)(local_b0 * (double)local_68._0_8_);
            pfVar1[2] = (float)(dVar38 * (double)local_68._8_8_);
            pfVar1[3] = (float)(local_a0 * (double)local_68._8_8_);
            pfVar1 = pfVar16 + uVar17 * 2 + 4;
            *(ulong *)pfVar1 = CONCAT44((float)(local_d0 * local_58),(float)(local_d8 * local_58));
            pfVar1[2] = (float)(local_c8 * dStack_50);
            pfVar1[3] = (float)(local_c0 * dStack_50);
            fVar33 = fVar33 + (float)dVar39;
            fVar46 = fVar46 + fVar47;
            fVar49 = fVar49 + (float)dVar40;
            fVar51 = fVar51 + (float)dVar37;
            uVar17 = uVar17 + 4;
            iVar30 = iVar30 + _DAT_00651fd0;
            iVar20 = iVar20 + _UNK_00651fd4;
          } while (uVar26 != uVar17);
          fVar51 = fVar51 + fVar46;
          auVar52._4_4_ = fVar51;
          auVar52._0_4_ = fVar51;
          auVar52._8_4_ = fVar51;
          auVar52._12_4_ = fVar51;
          auVar53._4_12_ = auVar52._4_12_;
          auVar53._0_4_ = fVar51 + fVar49 + fVar33;
          uVar48 = SUB84(DAT_005db338,0);
          uVar44 = (undefined4)((ulong)DAT_005db338 >> 0x20);
          dVar38 = local_128;
          dVar35 = local_108;
          if (local_110 == uVar26) goto LAB_004d9a75;
        }
        dVar35 = _DAT_005d9000 / dVar35;
        dVar36 = DAT_00651f70;
        do {
          iVar30 = (int)uVar26;
          dVar38 = (double)((float)iVar30 * fVar54) * dVar36 * local_128;
          dVar39 = sin((double)(float)((double)iVar30 * dVar36 * dVar35) *
                       (double)CONCAT44(uVar44,uVar48));
          dVar40 = (double)(float)dVar39;
          sincos((double)(float)dVar38,&local_130,&local_138);
          dVar36 = DAT_00651f70;
          uVar48 = SUB84(DAT_005db338,0);
          uVar44 = (undefined4)((ulong)DAT_005db338 >> 0x20);
          *pfVar29 = (float)(local_138 * dVar40);
          pfVar29[1] = (float)(dVar40 * local_130);
          auVar53._0_4_ = auVar53._0_4_ + (float)dVar39;
          uVar26 = (ulong)(iVar30 + 1U);
          pfVar29 = pfVar29 + 2;
          dVar38 = local_128;
        } while (uVar18 != iVar30 + 1U);
      }
LAB_004d9a75:
      if (0 < (int)uVar18) {
        fVar33 = (float)(_DAT_005d9000 / (SQRT((double)(int)local_e8) * (double)auVar53._0_4_));
        if (uVar18 - 1 == 0) {
          uVar17 = 0;
        }
        else {
          uVar26 = (ulong)(uVar18 - 1) + 1;
          uVar17 = uVar26 & 0x1fffffffe;
          uVar19 = (uVar17 - 2 >> 1) + 1;
          if (uVar17 - 2 == 0) {
            lVar10 = 0;
LAB_004d9b2d:
            pfVar29 = pfVar16 + lVar10 * 2;
            fVar46 = pfVar29[1];
            fVar49 = pfVar29[2];
            fVar51 = pfVar29[3];
            pfVar1 = pfVar16 + lVar10 * 2;
            *pfVar1 = *pfVar29 * fVar33;
            pfVar1[1] = fVar46 * fVar33;
            pfVar1[2] = fVar49 * fVar33;
            pfVar1[3] = fVar51 * fVar33;
          }
          else {
            uVar23 = uVar19 & 0xfffffffffffffffe;
            lVar10 = 0;
            do {
              pfVar1 = pfVar16 + lVar10 * 2;
              fVar46 = pfVar1[1];
              fVar49 = pfVar1[2];
              fVar51 = pfVar1[3];
              pfVar29 = pfVar16 + lVar10 * 2 + 4;
              fVar2 = *pfVar29;
              fVar47 = pfVar29[1];
              fVar7 = pfVar29[2];
              fVar8 = pfVar29[3];
              pfVar29 = pfVar16 + lVar10 * 2;
              *pfVar29 = *pfVar1 * fVar33;
              pfVar29[1] = fVar46 * fVar33;
              pfVar29[2] = fVar49 * fVar33;
              pfVar29[3] = fVar51 * fVar33;
              auVar53._0_4_ = fVar2 * fVar33;
              auVar53._4_4_ = fVar47 * fVar33;
              auVar53._8_4_ = fVar7 * fVar33;
              auVar53._12_4_ = fVar8 * fVar33;
              *(undefined1 (*) [16])(pfVar16 + lVar10 * 2 + 4) = auVar53;
              lVar10 = lVar10 + 4;
              uVar23 = uVar23 - 2;
            } while (uVar23 != 0);
            if ((uVar19 & 1) != 0) goto LAB_004d9b2d;
          }
          if (uVar26 == uVar17) goto LAB_004d9b8d;
          pfVar16 = pfVar16 + uVar17 * 2;
        }
        lVar10 = 0;
        do {
          pfVar16[lVar10 * 2] = pfVar16[lVar10 * 2] * fVar33;
          pfVar16[lVar10 * 2 + 1] = pfVar16[lVar10 * 2 + 1] * fVar33;
          lVar10 = lVar10 + 1;
        } while (uVar18 - (int)uVar17 != (int)lVar10);
      }
LAB_004d9b8d:
      fVar46 = (fVar34 * fVar32 + fVar54) * fVar57;
      uVar56 = 0;
      fVar34 = fVar46 * fVar45;
      dVar35 = (double)fVar34;
      if (local_f8 <= dVar35) {
        fVar54 = fVar46;
      }
      else {
        fVar54 = fVar54 + local_21c;
        uVar56 = uVar55;
        fVar34 = fVar58;
      }
      uVar48 = SUB84(DAT_005db338,0);
      uVar50 = (undefined4)((ulong)DAT_005db338 >> 0x20);
      uVar17 = local_e0 + 1;
      uVar44 = 0;
      uVar55 = uVar56;
      fVar33 = fVar34;
    } while (uVar17 != uVar31);
  }
  plVar9[0x13] = (long)piVar15;
  piVar15[8] = piVar15[8] + 1;
  return plVar9;
}


