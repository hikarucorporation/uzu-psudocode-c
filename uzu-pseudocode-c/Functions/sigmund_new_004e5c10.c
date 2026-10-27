// Function : sigmund_new
// Namespace: 
// Entry    : 004e5c10
// Prototype: long * sigmund_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 004e5c10 - 004e66a0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * sigmund_new(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,int *param_11,ulong param_12,char *param_13,
                  undefined8 param_14)

{
  byte bVar1;
  char *__s1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long lVar14;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  uint uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined8 uVar19;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  undefined4 extraout_XMM0_Db_19;
  undefined4 extraout_XMM0_Db_20;
  undefined4 extraout_XMM0_Db_21;
  undefined4 extraout_XMM0_Db_22;
  undefined4 extraout_XMM0_Db_23;
  undefined4 extraout_XMM0_Db_24;
  undefined4 extraout_XMM0_Db_25;
  undefined4 extraout_XMM0_Db_26;
  undefined4 extraout_XMM0_Db_27;
  undefined4 extraout_XMM0_Db_28;
  undefined4 extraout_XMM0_Db_29;
  undefined4 extraout_XMM0_Db_30;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Db_31;
  undefined4 extraout_XMM0_Db_32;
  undefined4 extraout_XMM0_Db_33;
  undefined4 extraout_XMM0_Db_34;
  undefined4 extraout_XMM0_Db_35;
  undefined4 extraout_XMM0_Db_36;
  undefined4 extraout_XMM0_Db_37;
  undefined4 extraout_XMM0_Db_38;
  undefined4 extraout_XMM0_Db_39;
  undefined4 extraout_XMM0_Db_40;
  
  uVar13 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigmund_class,
                  param_10,param_11,param_12,param_13,param_14);
  lVar6 = _UNK_00652c78;
  plVar4[0x12] = _DAT_00652c70;
  plVar4[0x13] = lVar6;
  lVar6 = _UNK_00652c88;
  plVar4[0x14] = _DAT_00652c80;
  plVar4[0x15] = lVar6;
  lVar6 = _UNK_00652c98;
  plVar4[0x16] = _DAT_00652c90;
  plVar4[0x17] = lVar6;
  lVar6 = _UNK_00652ca8;
  plVar4[0x18] = _DAT_00652ca0;
  plVar4[0x19] = lVar6;
  lVar6 = _UNK_00652cb8;
  plVar4[0x1a] = _DAT_00652cb0;
  plVar4[0x1b] = lVar6;
  plVar4[0x1c] = 0;
  *(undefined4 *)(plVar4 + 0x1d) = 0;
  *(undefined4 *)(plVar4 + 0xf) = 0x200;
  *(undefined4 *)((long)plVar4 + 0x8c) = 0x42480000;
  uVar19 = _UNK_00652cc8;
  *(undefined8 *)((long)plVar4 + 0x7c) = _DAT_00652cc0;
  *(undefined8 *)((long)plVar4 + 0x84) = uVar19;
  lVar6 = _UNK_00652cd8;
  plVar4[10] = _DAT_00652cd0;
  plVar4[0xb] = lVar6;
  plVar4[9] = 0x3f80000000000000;
  pvVar5 = getbytes(0);
  plVar4[8] = (long)pvVar5;
  plVar4[0x84] = 0;
  *(undefined4 *)(plVar4 + 0x85) = 0;
  *(byte *)((long)plVar4 + 0x42c) = *(byte *)((long)plVar4 + 0x42c) & 0xf8;
  plVar4[0xc] = 0;
  if (*(uint *)((long)plVar4 + 0x54) == 0) {
    pvVar5 = getbytes(0xffffffd0);
    uVar19 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    plVar4[0xd] = (long)pvVar5;
  }
  else {
    param_12 = 0xffffffd0;
    uVar15 = *(uint *)((long)plVar4 + 0x54);
    do {
      uVar10 = (int)param_12 + 0x30;
      param_12 = (ulong)uVar10;
      bVar2 = 1 < uVar15;
      uVar15 = (int)uVar15 >> 1;
    } while (bVar2);
    pvVar5 = getbytes((ulong)uVar10);
    uVar19 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    plVar4[0xd] = (long)pvVar5;
  }
  if (0 < (int)param_10) {
    do {
      uVar15 = (uint)uVar13;
      puVar7 = (undefined8 *)atom_getsymbolarg(0,uVar15,(long)param_11);
      __s1 = (char *)*puVar7;
      iVar3 = strcmp(__s1,"-t");
      uVar19 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      if (iVar3 == 0) {
        *(undefined4 *)(plVar4 + 10) = 3;
LAB_004e5df8:
        lVar6 = 1;
        iVar3 = -1;
      }
      else {
        iVar3 = strcmp(__s1,"-s");
        uVar19 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        if (iVar3 == 0) {
          *(undefined4 *)(plVar4 + 10) = 1;
          goto LAB_004e5df8;
        }
        iVar3 = strcmp(__s1,"-npts");
        if ((iVar3 == 0) && (1 < uVar15)) {
          fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
          uVar19 = CONCAT44(extraout_XMM0_Db_03,fVar16);
          *(int *)((long)plVar4 + 0x54) = (int)fVar16;
LAB_004e61e0:
          lVar6 = 2;
          iVar3 = -2;
        }
        else {
          iVar3 = strcmp(__s1,"-hop");
          if ((iVar3 != 0) || (uVar15 < 2)) {
            iVar3 = strcmp(__s1,"-npeak");
            if ((iVar3 == 0) && (1 < uVar15)) {
              fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
              if (fVar16 <= DAT_005d9038) {
                fVar16 = DAT_005d9038;
              }
              uVar19 = CONCAT44(extraout_XMM0_Db_05,fVar16);
              *(int *)(plVar4 + 0xb) = (int)fVar16;
            }
            else {
              iVar3 = strcmp(__s1,"-maxfreq");
              if ((iVar3 == 0) && (1 < uVar15)) {
                uVar17 = atom_getfloatarg(1,uVar15,(long)param_11);
                uVar19 = CONCAT44(extraout_XMM0_Db_06,uVar17);
                *(undefined4 *)((long)plVar4 + 0x7c) = uVar17;
              }
              else {
                iVar3 = strcmp(__s1,"-vibrato");
                if ((iVar3 == 0) && (1 < uVar15)) {
                  fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                  if (fVar16 <= DAT_005d9058) {
                    fVar16 = DAT_005d9058;
                  }
                  uVar19 = CONCAT44(extraout_XMM0_Db_07,fVar16);
                  *(float *)(plVar4 + 0x10) = fVar16;
                }
                else {
                  iVar3 = strcmp(__s1,"-stabletime");
                  if ((iVar3 == 0) && (1 < uVar15)) {
                    fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                    if (fVar16 <= DAT_005d9058) {
                      fVar16 = DAT_005d9058;
                    }
                    uVar19 = CONCAT44(extraout_XMM0_Db_08,fVar16);
                    *(float *)((long)plVar4 + 0x84) = fVar16;
                  }
                  else {
                    iVar3 = strcmp(__s1,"-growth");
                    if ((iVar3 == 0) && (1 < uVar15)) {
                      fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                      if (fVar16 <= DAT_005d9058) {
                        fVar16 = DAT_005d9058;
                      }
                      uVar19 = CONCAT44(extraout_XMM0_Db_09,fVar16);
                      *(float *)(plVar4 + 0x11) = fVar16;
                    }
                    else {
                      iVar3 = strcmp(__s1,"-minpower");
                      if ((iVar3 == 0) && (1 < uVar15)) {
                        fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                        if (fVar16 <= DAT_005d9058) {
                          fVar16 = DAT_005d9058;
                        }
                        uVar19 = CONCAT44(extraout_XMM0_Db_10,fVar16);
                        *(float *)((long)plVar4 + 0x8c) = fVar16;
                      }
                      else {
                        iVar3 = strcmp(__s1,"-nharmonics");
                        if ((iVar3 == 0) && (2 < uVar15)) {
                          fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                          fVar18 = (float)atom_getfloatarg(2,uVar15,(long)param_11);
                          param_2 = CONCAT44(extraout_XMM0_Db_11,fVar18);
                          uVar19 = sigmund_nharmonics(fVar16,fVar18,(long)plVar4);
                          lVar6 = 3;
                          iVar3 = -3;
                          goto LAB_004e5e02;
                        }
                        iVar3 = strcmp(__s1,"-amppowerlaw");
                        if ((iVar3 == 0) && (1 < uVar15)) {
                          fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                          uVar19 = CONCAT44(extraout_XMM0_Db_12,fVar16);
                          param_2 = (ulong)DAT_00652618;
                          if ((DAT_00651f48 < (double)fVar16) &&
                             (param_2 = CONCAT44(extraout_XMM0_Db_12,fVar16), DAT_0065260c < fVar16)
                             ) {
                            param_2 = (ulong)(uint)DAT_0065260c;
                          }
                          *(int *)(plVar4 + 0x1b) = (int)param_2;
                        }
                        else {
                          iVar3 = strcmp(__s1,"-quality");
                          if ((iVar3 != 0) || (uVar15 < 2)) {
                            iVar3 = strcmp(__s1,"pitch");
                            if (iVar3 == 0) {
                              lVar6 = (long)(int)plVar4[9] + 1;
                              pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_03)
                                                   ,param_2,param_3,param_4,param_5,param_6,param_7,
                                                   param_8,(void *)plVar4[8],
                                                   (long)(int)plVar4[9] << 4,lVar6 * 0x10);
                              plVar4[8] = (long)pvVar5;
                              plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                              plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_23,extraout_XMM0_Da_12),
                                                  param_2,param_3,param_4,param_5,param_6,param_7,
                                                  param_8,(long)plVar4,*plVar8 + 0x78,
                                                  extraout_RDX_00,param_12,param_13,param_14);
                              param_12 = plVar4[8];
                              lVar14 = (long)(int)plVar4[9] * 0x10;
                              *(long **)(param_12 + lVar14) = plVar8;
                              *(undefined4 *)(param_12 + 8 + lVar14) = 0;
                              uVar17 = extraout_XMM0_Da_13;
                              uVar20 = extraout_XMM0_Db_24;
                            }
                            else {
                              iVar3 = strcmp(__s1,"quality");
                              if (iVar3 == 0) {
                                lVar6 = (long)(int)plVar4[9] + 1;
                                pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_15,
                                                              extraout_XMM0_Da_04),param_2,param_3,
                                                     param_4,param_5,param_6,param_7,param_8,
                                                     (void *)plVar4[8],(long)(int)plVar4[9] << 4,
                                                     lVar6 * 0x10);
                                plVar4[8] = (long)pvVar5;
                                plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_25,extraout_XMM0_Da_14
                                                            ),param_2,param_3,param_4,param_5,
                                                    param_6,param_7,param_8,(long)plVar4,
                                                    *plVar8 + 0x78,extraout_RDX_01,param_12,param_13
                                                    ,param_14);
                                param_12 = plVar4[8];
                                lVar14 = (long)(int)plVar4[9] * 0x10;
                                *(long **)(param_12 + lVar14) = plVar8;
                                *(undefined4 *)(param_12 + 8 + lVar14) = 6;
                                uVar17 = extraout_XMM0_Da_15;
                                uVar20 = extraout_XMM0_Db_26;
                              }
                              else {
                                iVar3 = strcmp(__s1,"evenness");
                                if (iVar3 == 0) {
                                  lVar6 = (long)(int)plVar4[9] + 1;
                                  pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_16,
                                                                extraout_XMM0_Da_05),param_2,param_3
                                                       ,param_4,param_5,param_6,param_7,param_8,
                                                       (void *)plVar4[8],(long)(int)plVar4[9] << 4,
                                                       lVar6 * 0x10);
                                  plVar4[8] = (long)pvVar5;
                                  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                  plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_27,
                                                               extraout_XMM0_Da_16),param_2,param_3,
                                                      param_4,param_5,param_6,param_7,param_8,
                                                      (long)plVar4,*plVar8 + 0x78,extraout_RDX_02,
                                                      param_12,param_13,param_14);
                                  param_12 = plVar4[8];
                                  lVar14 = (long)(int)plVar4[9] * 0x10;
                                  *(long **)(param_12 + lVar14) = plVar8;
                                  *(undefined4 *)(param_12 + 8 + lVar14) = 7;
                                  uVar17 = extraout_XMM0_Da_17;
                                  uVar20 = extraout_XMM0_Db_28;
                                }
                                else {
                                  iVar3 = strcmp(__s1,"spectrum");
                                  if (iVar3 != 0) {
                                    iVar3 = strcmp(__s1,"env");
                                    if (iVar3 == 0) {
                                      lVar6 = (long)(int)plVar4[9] + 1;
                                      pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_18,
                                                                    extraout_XMM0_Da_07),param_2,
                                                           param_3,param_4,param_5,param_6,param_7,
                                                           param_8,(void *)plVar4[8],
                                                           (long)(int)plVar4[9] << 4,lVar6 * 0x10);
                                      plVar4[8] = (long)pvVar5;
                                      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                      plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_33,
                                                                   extraout_XMM0_Da_22),param_2,
                                                          param_3,param_4,param_5,param_6,param_7,
                                                          param_8,(long)plVar4,*plVar8 + 0x78,
                                                          extraout_RDX_05,param_12,param_13,param_14
                                                         );
                                      uVar19 = CONCAT44(extraout_XMM0_Db_34,extraout_XMM0_Da_23);
                                      param_12 = plVar4[8];
                                      lVar14 = (long)(int)plVar4[9] * 0x10;
                                      *(long **)(param_12 + lVar14) = plVar8;
                                      *(undefined4 *)(param_12 + 8 + lVar14) = 1;
                                      *(int *)(plVar4 + 9) = (int)lVar6;
                                    }
                                    else {
                                      iVar3 = strcmp(__s1,"note");
                                      uVar17 = extraout_XMM0_Da_08;
                                      uVar20 = extraout_XMM0_Db_19;
                                      if ((iVar3 == 0) ||
                                         (iVar3 = strcmp(__s1,"notes"), uVar17 = extraout_XMM0_Da_09
                                         , uVar20 = extraout_XMM0_Db_20, iVar3 == 0)) {
                                        lVar6 = (long)(int)plVar4[9] + 1;
                                        pvVar5 = resizebytes(CONCAT44(uVar20,uVar17),param_2,param_3
                                                             ,param_4,param_5,param_6,param_7,
                                                             param_8,(void *)plVar4[8],
                                                             (long)(int)plVar4[9] << 4,lVar6 * 0x10)
                                        ;
                                        plVar4[8] = (long)pvVar5;
                                        plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                        plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_31,
                                                                     extraout_XMM0_Da_20),param_2,
                                                            param_3,param_4,param_5,param_6,param_7,
                                                            param_8,(long)plVar4,*plVar8 + 0x78,
                                                            extraout_RDX_04,param_12,param_13,
                                                            param_14);
                                        uVar19 = CONCAT44(extraout_XMM0_Db_32,extraout_XMM0_Da_21);
                                        param_12 = plVar4[8];
                                        lVar14 = (long)(int)plVar4[9] * 0x10;
                                        *(long **)(param_12 + lVar14) = plVar8;
                                        *(undefined4 *)(param_12 + 8 + lVar14) = 2;
                                        *(int *)(plVar4 + 9) = (int)lVar6;
                                        *(byte *)((long)plVar4 + 0x42c) =
                                             *(byte *)((long)plVar4 + 0x42c) | 3;
                                      }
                                      else {
                                        iVar3 = strcmp(__s1,"peaks");
                                        if (iVar3 == 0) {
                                          lVar6 = (long)(int)plVar4[9] + 1;
                                          pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_21,
                                                                        extraout_XMM0_Da_10),param_2
                                                               ,param_3,param_4,param_5,param_6,
                                                               param_7,param_8,(void *)plVar4[8],
                                                               (long)(int)plVar4[9] << 4,
                                                               lVar6 * 0x10);
                                          plVar4[8] = (long)pvVar5;
                                          plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                          plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_35,
                                                                       extraout_XMM0_Da_24),param_2,
                                                              param_3,param_4,param_5,param_6,
                                                              param_7,param_8,(long)plVar4,
                                                              *plVar8 + 0xc0,extraout_RDX_06,
                                                              param_12,param_13,param_14);
                                          uVar19 = CONCAT44(extraout_XMM0_Db_36,extraout_XMM0_Da_25)
                                          ;
                                          param_12 = plVar4[8];
                                          lVar14 = (long)(int)plVar4[9] * 0x10;
                                          *(long **)(param_12 + lVar14) = plVar8;
                                          *(undefined4 *)(param_12 + 8 + lVar14) = 3;
                                          *(int *)(plVar4 + 9) = (int)lVar6;
                                        }
                                        else {
                                          iVar3 = strcmp(__s1,"tracks");
                                          if (iVar3 == 0) {
                                            lVar6 = (long)(int)plVar4[9] + 1;
                                            pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_22,
                                                                          extraout_XMM0_Da_11),
                                                                 param_2,param_3,param_4,param_5,
                                                                 param_6,param_7,param_8,
                                                                 (void *)plVar4[8],
                                                                 (long)(int)plVar4[9] << 4,
                                                                 lVar6 * 0x10);
                                            plVar4[8] = (long)pvVar5;
                                            plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                            plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_37,
                                                                         extraout_XMM0_Da_26),
                                                                param_2,param_3,param_4,param_5,
                                                                param_6,param_7,param_8,(long)plVar4
                                                                ,*plVar8 + 0xc0,extraout_RDX_07,
                                                                param_12,param_13,param_14);
                                            uVar19 = CONCAT44(extraout_XMM0_Db_38,
                                                              extraout_XMM0_Da_27);
                                            param_12 = plVar4[8];
                                            lVar14 = (long)(int)plVar4[9] * 0x10;
                                            *(long **)(param_12 + lVar14) = plVar8;
                                            *(undefined4 *)(param_12 + 8 + lVar14) = 4;
                                            *(int *)(plVar4 + 9) = (int)lVar6;
                                            *(byte *)((long)plVar4 + 0x42c) =
                                                 *(byte *)((long)plVar4 + 0x42c) | 4;
                                          }
                                          else if (*param_11 == 1) {
                                            fVar16 = (float)atom_getfloatarg(0,uVar15,(long)param_11
                                                                            );
                                            uVar19 = pd_error((double)fVar16,param_2,param_3,param_4
                                                              ,param_5,param_6,param_7,param_8,
                                                              (long)plVar4,
                                                              "sigmund~: argument \'%g\' ignored",
                                                              extraout_RDX,param_12,param_13,
                                                              param_14);
                                          }
                                          else {
                                            uVar19 = pd_error(CONCAT44(extraout_XMM0_Db_22,
                                                                       extraout_XMM0_Da_11),param_2,
                                                              param_3,param_4,param_5,param_6,
                                                              param_7,param_8,(long)plVar4,
                                                                                                                            
                                                  "sigmund~: %s: unknown flag or argument missing",
                                                  __s1,param_12,param_13,param_14);
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_004e5df8;
                                  }
                                  lVar6 = (long)(int)plVar4[9] + 1;
                                  pvVar5 = resizebytes(CONCAT44(extraout_XMM0_Db_17,
                                                                extraout_XMM0_Da_06),param_2,param_3
                                                       ,param_4,param_5,param_6,param_7,param_8,
                                                       (void *)plVar4[8],(long)(int)plVar4[9] << 4,
                                                       lVar6 * 0x10);
                                  plVar4[8] = (long)pvVar5;
                                  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
                                  plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_29,
                                                               extraout_XMM0_Da_18),param_2,param_3,
                                                      param_4,param_5,param_6,param_7,param_8,
                                                      (long)plVar4,*plVar8 + 0x78,extraout_RDX_03,
                                                      param_12,param_13,param_14);
                                  param_12 = plVar4[8];
                                  lVar14 = (long)(int)plVar4[9] * 0x10;
                                  *(long **)(param_12 + lVar14) = plVar8;
                                  *(undefined4 *)(param_12 + 8 + lVar14) = 5;
                                  uVar17 = extraout_XMM0_Da_19;
                                  uVar20 = extraout_XMM0_Db_30;
                                }
                              }
                            }
                            uVar19 = CONCAT44(uVar20,uVar17);
                            *(int *)(plVar4 + 9) = (int)lVar6;
                            *(byte *)((long)plVar4 + 0x42c) = *(byte *)((long)plVar4 + 0x42c) | 1;
                            goto LAB_004e5df8;
                          }
                          fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
                          uVar19 = CONCAT44(extraout_XMM0_Db_13,fVar16);
                          param_2 = 0;
                          if ((0.0 < fVar16) &&
                             (param_2 = CONCAT44(extraout_XMM0_Db_13,fVar16), DAT_005d9038 < fVar16)
                             ) {
                            param_2 = (ulong)(uint)DAT_005d9038;
                          }
                          *(int *)((long)plVar4 + 0xdc) = (int)param_2;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_004e61e0;
          }
          fVar16 = (float)atom_getfloatarg(1,uVar15,(long)param_11);
          uVar10 = (uint)fVar16;
          uVar13 = (ulong)uVar10;
          if ((int)uVar10 < 0) {
            uVar19 = pd_error(CONCAT44(extraout_XMM0_Db_04,fVar16),param_2,param_3,param_4,param_5,
                              param_6,param_7,param_8,0,"sigmund~: ignoring negative hopsize %d",
                              uVar13,param_12,param_13,param_14);
            goto LAB_004e61e0;
          }
          *(uint *)(plVar4 + 0xf) = uVar10;
          lVar6 = 2;
          iVar3 = -2;
          uVar19 = CONCAT44(extraout_XMM0_Db_04,fVar16);
          if (uVar10 != 0) {
            param_12 = 0xffffffff;
            uVar12 = uVar10;
            do {
              uVar11 = (int)param_12 + 1;
              param_12 = (ulong)uVar11;
              bVar2 = 1 < uVar12;
              uVar12 = (int)uVar12 >> 1;
            } while (bVar2);
            uVar19 = CONCAT44(extraout_XMM0_Db_04,fVar16);
            if (1 << ((byte)uVar11 & 0x1f) != uVar10) {
              param_12 = 0xffffffff;
              do {
                uVar10 = (uint)uVar13;
                uVar12 = (int)param_12 + 1;
                param_12 = (ulong)uVar12;
                uVar13 = (ulong)(uint)((int)uVar10 >> 1);
              } while (1 < uVar10);
              *(int *)(plVar4 + 0xf) = 1 << ((byte)uVar12 & 0x1f);
              uVar19 = post(CONCAT44(extraout_XMM0_Db_04,fVar16),param_2,param_3,param_4,param_5,
                            param_6,param_7,param_8,"sigmund~: adjusting analysis size to %d points"
                           );
            }
          }
        }
      }
LAB_004e5e02:
      param_11 = param_11 + lVar6 * 4;
      uVar10 = uVar15 + iVar3;
      uVar13 = (ulong)uVar10;
    } while (uVar10 != 0 && SCARRY4(uVar15,iVar3) == (int)uVar10 < 0);
  }
  if ((int)plVar4[9] == 0) {
    pvVar5 = resizebytes(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (void *)plVar4[8],0,0x20);
    plVar4[8] = (long)pvVar5;
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar9 = outlet_new(CONCAT44(extraout_XMM0_Db_39,extraout_XMM0_Da_28),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar8 + 0x78,extraout_RDX_08,
                        param_12,param_13,param_14);
    puVar7 = (undefined8 *)plVar4[8];
    *puVar7 = plVar9;
    *(undefined4 *)(puVar7 + 1) = 0;
    plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_40,extraout_XMM0_Da_29),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar8 + 0x78,extraout_RDX_09,
                        puVar7,param_13,param_14);
    lVar6 = plVar4[8];
    *(long **)(lVar6 + 0x10) = plVar8;
    *(undefined4 *)(lVar6 + 0x18) = 1;
    *(undefined4 *)(plVar4 + 9) = 2;
    bVar1 = *(byte *)((long)plVar4 + 0x42c);
    *(byte *)((long)plVar4 + 0x42c) = bVar1 | 1;
  }
  else {
    bVar1 = *(byte *)((long)plVar4 + 0x42c);
  }
  if ((bVar1 & 4) != 0) {
    *(int *)(plVar4 + 0x85) = (int)plVar4[0xb];
    pvVar5 = getbytes((long)(int)plVar4[0xb] << 5);
    plVar4[0x84] = (long)pvVar5;
  }
  lVar6 = clock_new(plVar4,sigmund_tick);
  plVar4[6] = lVar6;
  plVar4[0xe] = 0;
  sigmund_npts((ulong)(uint)(float)*(int *)((long)plVar4 + 0x54),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar4);
  memset((void *)((long)plVar4 + 0xec),0,0x334);
  if ((void *)plVar4[0x84] != (void *)0x0) {
    memset((void *)plVar4[0x84],0,(long)(int)plVar4[0x85] << 5);
  }
  plVar4[0xe] = 0;
  return plVar4;
}


