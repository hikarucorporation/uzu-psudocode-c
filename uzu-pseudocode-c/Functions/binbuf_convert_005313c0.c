// Function : binbuf_convert
// Namespace: 
// Entry    : 005313c0
// Prototype: int * binbuf_convert(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, uint * param_9, int param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 005313c0 - 00533bed


/* WARNING: Removing unreachable block (ram,0x005315b9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * binbuf_convert(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7,undefined8 param_8,uint *param_9,int param_10,
                    undefined8 param_11,undefined8 param_12,char *param_13,undefined8 *param_14)

{
  float *pfVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  uint uVar22;
  int *piVar23;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar24;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  char *pcVar29;
  char *pcVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  bool bVar34;
  bool bVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar36;
  float fVar37;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  float fVar43;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 in_stack_ffffffffffffa0f8;
  int in_stack_ffffffffffffa0fc;
  ulong local_5ef8;
  char *local_5ef0;
  char *local_5ee8;
  long local_5ee0;
  char local_5e68 [80];
  undefined4 auStack_5e18 [8];
  undefined8 *local_5df8 [2];
  undefined4 local_5de8;
  undefined8 *puStack_5de0;
  undefined8 local_5dd8;
  undefined8 uStack_5dd0;
  undefined8 local_5dc8;
  undefined8 uStack_5dc0;
  float local_5db8 [2];
  undefined8 *local_5db0;
  undefined8 local_5da8;
  float local_5da0 [2];
  undefined8 local_5d98;
  undefined8 uStack_5d90;
  float local_5d88 [2];
  undefined8 uStack_5d80;
  undefined4 auStack_5d78 [3968];
  ulong local_1f78 [1001];
  
  piVar10 = getbytes(0x10);
  *piVar10 = 0;
  pvVar11 = getbytes(0);
  *(void **)(piVar10 + 2) = pvVar11;
  lVar6 = *(long *)(param_9 + 2);
  uVar5 = *param_9;
  memset(local_1f78,0,8000);
  if (param_10 == 0) {
    puVar15 = gensym("max");
    puVar16 = gensym("v2");
    binbuf_addv(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,piVar10,0x655ff8,puVar15,puVar16,param_13,param_14,
                (double)CONCAT44(in_stack_ffffffffffffa0fc,in_stack_ffffffffffffa0f8));
    local_5ee8 = param_13;
    if ((int)uVar5 < 1) goto LAB_00533b90;
    lVar33 = lVar6 + 0x50;
    uVar26 = 0;
    local_5ef0 = (char *)0x0;
    local_5ef8 = 0;
    bVar34 = false;
    fVar36 = DAT_0065260c;
    do {
      param_14 = (undefined8 *)&DAT_00654cfa;
      pcVar13 = (char *)0x3de;
      uVar22 = (uint)uVar26;
      uVar18 = uVar26;
      uVar32 = uVar22;
      local_5ee8 = pcVar13;
      if ((int)uVar22 < (int)uVar5) {
        piVar23 = (int *)(uVar26 * 0x10 + lVar6);
        while (*piVar23 != 4) {
          uVar18 = uVar18 + 1;
          piVar23 = piVar23 + 4;
          if (uVar5 == uVar18) goto LAB_00533b8b;
        }
        uVar32 = (uint)uVar18;
      }
      if (uVar32 == uVar5) break;
      if (uVar26 != uVar18) {
        if (uVar26 + 1 != uVar18) {
          lVar31 = uVar26 * 0x10;
          if ((*(int *)(lVar6 + lVar31) == 2) && (*(int *)(lVar6 + (uVar26 + 1) * 0x10) == 2)) {
            puVar15 = (undefined8 *)(lVar6 + lVar31);
            pcVar12 = (char *)(ulong)(uVar32 - uVar22);
            if (0x3dd < (int)(uVar32 - uVar22)) {
              pcVar12 = (char *)0x3de;
            }
            pcVar30 = (char *)**(undefined8 **)(lVar6 + 8 + lVar31);
            pcVar29 = *(char **)puVar15[3];
            pcVar19 = pcVar12;
            iVar9 = strcmp(pcVar30,"#N");
            uVar22 = (uint)pcVar12;
            if ((iVar9 == 0) && (iVar9 = strcmp(pcVar29,"canvas"), iVar9 == 0)) {
              uVar24 = extraout_RDX_02;
              uVar45 = extraout_XMM0_Da_03;
              uVar46 = extraout_XMM0_Db_03;
              if (999 < (long)local_5ef0) goto LAB_00533bd7;
              local_1f78[(long)local_5ef0] = local_5ef8;
              if (!bVar34) {
                fVar36 = (float)atom_getfloatarg(6,uVar22,(long)puVar15);
              }
              local_5ef0 = (char *)((long)local_5ef0 + 1);
              fVar37 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
              fVar44 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
              puVar16 = gensym("#N");
              puVar14 = gensym("vpatcher");
              param_2 = (double)fVar44;
              fVar38 = (float)atom_getfloatarg(4,uVar22,(long)puVar15);
              param_3 = (double)(fVar38 + fVar37);
              fVar38 = (float)atom_getfloatarg(5,uVar22,(long)puVar15);
              param_4 = (double)(fVar38 + fVar44);
              binbuf_addv((double)fVar37,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar10,0x65604f,puVar16,puVar14,pcVar13,param_14,
                          (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
              bVar34 = true;
              local_5ef8 = 0;
              iVar9 = strcmp(pcVar30,"#X");
              if (iVar9 == 0) goto LAB_00532b52;
LAB_005329e7:
              in_stack_ffffffffffffa0fc = param_10;
            }
            else {
              iVar9 = strcmp(pcVar30,"#X");
              if (iVar9 != 0) goto LAB_005329e7;
LAB_00532b52:
              if (((((int)uVar22 < 5) || (iVar9 = strcmp(pcVar29,"restore"), iVar9 != 0)) ||
                  (*(int *)(puVar15 + 8) != 2)) ||
                 (iVar9 = strcmp(*(char **)puVar15[9],"pd"), iVar9 != 0)) {
                iVar9 = strcmp(pcVar29,"obj");
                if (iVar9 == 0) {
                  puVar16 = (undefined8 *)atom_getsymbolarg(4,uVar22,(long)puVar15);
                  puVar14 = gensym("inlet");
                  if (puVar16 == puVar14) {
                    puVar16 = gensym("#P");
                    puVar14 = gensym("inlet");
                    fVar44 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                    fVar38 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                    param_3 = (double)fVar36 + _DAT_00655e08;
                    goto LAB_0053332e;
                  }
                  puVar14 = gensym("inlet~");
                  if (puVar16 != puVar14) {
                    puVar14 = gensym("outlet");
                    if (puVar16 == puVar14) {
                      puVar16 = gensym("#P");
                      puVar14 = gensym("outlet");
                      fVar44 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                      fVar38 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                      param_3 = (double)fVar36 + _DAT_00655e08;
                      goto LAB_0053332e;
                    }
                    puVar14 = gensym("outlet~");
                    if (puVar16 == puVar14) {
                      puVar16 = gensym("#P");
                      pcVar12 = "outlet";
                      goto LAB_0053354c;
                    }
                    puVar14 = gensym("bng");
                    if (puVar16 == puVar14) {
                      puVar16 = gensym("#P");
                      pcVar12 = "button";
LAB_0053362b:
                      puVar14 = gensym(pcVar12);
                      fVar37 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                      fVar44 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                      param_2 = (double)fVar44;
                      fVar44 = (float)atom_getfloatarg(5,uVar22,(long)puVar15);
                      param_3 = (double)fVar44;
                      param_4 = 0.0;
                      binbuf_addv((double)fVar37,param_2,param_3,0,param_5,param_6,param_7,param_8,
                                  piVar10,0x65604f,puVar16,puVar14,pcVar13,param_14,
                                  (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                    }
                    else {
                      puVar14 = gensym("tgl");
                      if (puVar16 == puVar14) {
                        puVar16 = gensym("#P");
                        pcVar12 = "toggle";
                        goto LAB_0053362b;
                      }
                      puVar14 = gensym("vsl");
                      if (puVar16 == puVar14) {
                        puVar16 = gensym("#P");
                        puVar14 = gensym("slider");
                        fVar44 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                        fVar38 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                        fVar42 = (float)atom_getfloatarg(5,uVar22,(long)puVar15);
                        fVar41 = (float)atom_getfloatarg(6,uVar22,(long)puVar15);
                        fVar40 = (float)atom_getfloatarg(8,uVar22,(long)puVar15);
                        fVar39 = (float)atom_getfloatarg(7,uVar22,(long)puVar15);
                        fVar43 = (float)atom_getfloatarg(6,uVar22,(long)puVar15);
                        fVar37 = DAT_005d9038;
                        if (fVar43 != DAT_005d9038) {
                          fVar37 = (float)atom_getfloatarg(6,uVar22,(long)puVar15);
                          fVar37 = fVar37 + DAT_005d9054;
                        }
                        param_2 = (double)fVar38;
                        param_3 = (double)fVar42;
                        param_4 = (double)fVar41;
                        param_5 = (double)((fVar40 - fVar39) / fVar37);
                        fVar37 = (float)atom_getfloatarg(7,uVar22,(long)puVar15);
                        param_6 = (double)fVar37;
                        binbuf_addv((double)fVar44,param_2,param_3,param_4,param_5,param_6,param_7,
                                    param_8,piVar10,0x65605e,puVar16,puVar14,pcVar13,param_14,
                                    (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                      }
                      else {
                        puVar14 = gensym("hsl");
                        if (puVar16 == puVar14) {
                          fVar37 = (float)atom_getfloatarg(7,uVar22,(long)puVar15);
                          fVar44 = (float)atom_getfloatarg(8,uVar22,(long)puVar15);
                          puVar16 = gensym("#P");
                          puVar14 = gensym("user");
                          pcVar13 = (char *)gensym("hslider");
                          fVar38 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                          fVar42 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                          param_2 = (double)fVar42;
                          fVar42 = (float)atom_getfloatarg(6,uVar22,(long)puVar15);
                          param_3 = (double)fVar42;
                          fVar42 = (float)atom_getfloatarg(5,uVar22,(long)puVar15);
                          param_4 = (double)fVar42;
                          param_5 = (double)((DAT_005d9038 - fVar37) + fVar44);
                          param_7 = (double)fVar37;
                          uVar45 = 0;
                          uVar46 = 0;
                          param_6 = _DAT_005d9000;
                          binbuf_addv((double)fVar38,param_2,param_3,param_4,param_5,_DAT_005d9000,
                                      param_7,0,piVar10,0x656068,puVar16,puVar14,pcVar13,param_14,
                                      (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                          param_8 = CONCAT44(uVar46,uVar45);
                        }
                        else {
                          puVar14 = gensym("trigger");
                          if ((puVar16 == puVar14) || (puVar14 = gensym("t"), puVar16 == puVar14)) {
                            local_5df8[0]._0_4_ = 2;
                            local_5df8[1] = gensym("#P");
                            local_5de8 = 2;
                            puStack_5de0 = gensym("newex");
                            local_5dd8 = puVar15[4];
                            uStack_5dd0 = puVar15[5];
                            puVar14 = &local_5dd8;
                            local_5dc8 = puVar15[6];
                            uStack_5dc0 = puVar15[7];
                            local_5db8[0] = 1.4013e-45;
                            local_5db0 = (undefined8 *)
                                         CONCAT44(local_5db0._4_4_,
                                                  (float)((double)(int)(uVar22 - 4) * DAT_005d90c0))
                            ;
                            local_5da8._0_4_ = 1;
                            uVar45 = *(undefined4 *)(puVar15 + 8);
                            uVar46 = *(undefined4 *)((long)puVar15 + 0x44);
                            uStack_5d90 = (undefined8 *)puVar15[9];
                            local_5da0[0] = fVar36;
                            local_5d98._0_4_ = uVar45;
                            local_5d98._4_4_ = uVar46;
                            if (5 < (int)uVar22) {
                              pcVar30 = (char *)0x5;
                              lVar28 = 0;
                              do {
                                puVar16 = (undefined8 *)
                                          atom_getsymbolarg((int)pcVar30,uVar22,(long)puVar15);
                                puVar21 = gensym("a");
                                if ((puVar16 == puVar21) ||
                                   (puVar21 = gensym("anything"), puVar16 == puVar21)) {
LAB_005339ab:
                                  *(undefined4 *)((long)local_5d88 + lVar28) = 2;
                                  pcVar29 = "l";
LAB_005339bd:
                                  puVar16 = gensym(pcVar29);
                                  *(undefined8 **)((long)local_5d88 + lVar28 + 8) = puVar16;
                                  uVar45 = extraout_XMM0_Da_09;
                                  uVar46 = extraout_XMM0_Db_09;
                                }
                                else {
                                  puVar21 = gensym("bang");
                                  if (puVar16 == puVar21) {
                                    *(undefined4 *)((long)local_5d88 + lVar28) = 2;
                                    pcVar29 = "b";
                                    goto LAB_005339bd;
                                  }
                                  puVar21 = gensym("float");
                                  if (puVar16 == puVar21) {
                                    *(undefined4 *)((long)local_5d88 + lVar28) = 2;
                                    pcVar29 = "f";
                                    goto LAB_005339bd;
                                  }
                                  puVar21 = gensym("list");
                                  if (puVar16 == puVar21) goto LAB_005339ab;
                                  puVar21 = gensym("symbol");
                                  if (puVar16 == puVar21) {
                                    *(undefined4 *)((long)local_5d88 + lVar28) = 2;
                                    pcVar29 = "s";
                                    goto LAB_005339bd;
                                  }
                                  puVar4 = (undefined4 *)(lVar31 + lVar33 + lVar28);
                                  uVar45 = *puVar4;
                                  uVar46 = puVar4[1];
                                  uVar7 = puVar4[2];
                                  uVar8 = puVar4[3];
                                  *(undefined4 *)((long)local_5d88 + lVar28) = uVar45;
                                  *(undefined4 *)((long)local_5d88 + lVar28 + 4) = uVar46;
                                  *(undefined4 *)((long)local_5d88 + lVar28 + 8) = uVar7;
                                  *(undefined4 *)((long)auStack_5d78 + lVar28 + -4) = uVar8;
                                }
                                pcVar30 = pcVar30 + 1;
                                lVar28 = lVar28 + 0x10;
                              } while (pcVar12 != pcVar30);
                            }
                          }
                          else {
                            local_5df8[0]._0_4_ = 2;
                            local_5df8[1] = gensym("#P");
                            local_5de8 = 2;
                            puStack_5de0 = gensym("newex");
                            local_5dd8 = puVar15[4];
                            uStack_5dd0 = puVar15[5];
                            local_5dc8 = puVar15[6];
                            uStack_5dc0 = puVar15[7];
                            local_5db8[0] = 1.4013e-45;
                            local_5db0 = (undefined8 *)
                                         CONCAT44(local_5db0._4_4_,
                                                  (float)((double)(int)(uVar22 - 4) * DAT_005d90c0))
                            ;
                            local_5da8._0_4_ = 1;
                            puVar14 = (undefined8 *)(ulong)(uVar22 - 4);
                            local_5da0[0] = fVar36;
                            if (4 < (int)uVar22) {
                              puVar21 = (undefined8 *)0x4;
                              if (uVar22 != 5) {
                                puVar21 = (undefined8 *)0x4;
                                lVar28 = 0;
                                do {
                                  puVar14 = (undefined8 *)(lVar31 + lVar33 + -0x10 + lVar28);
                                  uVar24 = puVar14[1];
                                  *(undefined8 *)((long)local_5da0 + lVar28 + 8) = *puVar14;
                                  *(undefined8 *)((long)local_5d88 + lVar28 + -8) = uVar24;
                                  puVar14 = (undefined8 *)(lVar31 + lVar33 + lVar28);
                                  uVar24 = puVar14[1];
                                  *(undefined8 *)((long)local_5d88 + lVar28) = *puVar14;
                                  *(undefined8 *)((long)local_5d88 + lVar28 + 8) = uVar24;
                                  lVar28 = lVar28 + 0x20;
                                  lVar2 = (long)puVar21 -
                                          ((ulong)(pcVar12 + -4) & 0xfffffffffffffffe);
                                  puVar21 = (undefined8 *)((long)puVar21 + 2);
                                } while (lVar2 != 2);
                              }
                              puVar14 = puVar21;
                              pcVar13 = pcVar12;
                              param_14 = puVar15;
                              if (((ulong)pcVar12 & 1) != 0) {
                                puVar14 = (undefined8 *)((long)puVar21 * 0x10);
                                uVar24 = (puVar15 + (long)puVar21 * 2)[1];
                                *(undefined8 *)((long)puVar14 + (long)&local_5dd8) =
                                     puVar15[(long)puVar21 * 2];
                                (&uStack_5dd0)[(long)puVar21 * 2] = uVar24;
                              }
                            }
                            puVar15 = gensym("osc~");
                            uVar45 = extraout_XMM0_Da_05;
                            uVar46 = extraout_XMM0_Db_05;
                            if (puVar16 == puVar15) {
                              local_5d98._0_4_ = 2;
                              uStack_5d90 = gensym("cycle~");
                              uVar45 = extraout_XMM0_Da_06;
                              uVar46 = extraout_XMM0_Db_06;
                            }
                          }
                          local_5db8[(long)(int)uVar22 * 4 + -8] = 5.60519e-45;
                          local_5db8[(long)(int)uVar22 * 4 + -6] = 0.0;
                          binbuf_add(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,param_6
                                     ,param_7,param_8,piVar10,uVar22 + 3,local_5df8,puVar14,pcVar13,
                                     param_14);
                        }
                      }
                    }
                    local_5ef8 = local_5ef8 + 1;
                    goto LAB_005329e7;
                  }
                  puVar16 = gensym("#P");
                  pcVar12 = "inlet";
LAB_0053354c:
                  puVar14 = gensym(pcVar12);
                  fVar37 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                  fVar44 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                  param_2 = (double)fVar44;
                  param_3 = (double)fVar36 + _DAT_00655e08;
                  param_4 = _DAT_005d9000;
                  binbuf_addv((double)fVar37,param_2,param_3,_DAT_005d9000,param_5,param_6,param_7,
                              param_8,piVar10,0x65604f,puVar16,puVar14,pcVar13,param_14,
                              (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                }
                else {
                  iVar9 = strcmp(pcVar29,"msg");
                  if ((iVar9 == 0) || (iVar9 = strcmp(pcVar29,"text"), iVar9 == 0)) {
                    local_5df8[0]._0_4_ = 2;
                    local_5df8[1] = gensym("#P");
                    local_5de8 = 2;
                    iVar9 = strcmp(pcVar29,"msg");
                    pcVar30 = "comment";
                    if (iVar9 == 0) {
                      pcVar30 = "message";
                    }
                    puStack_5de0 = gensym(pcVar30);
                    local_5dd8 = puVar15[4];
                    uStack_5dd0 = puVar15[5];
                    local_5dc8 = puVar15[6];
                    uStack_5dc0 = puVar15[7];
                    local_5db8[0] = 1.4013e-45;
                    local_5db0 = (undefined8 *)
                                 CONCAT44(local_5db0._4_4_,
                                          (float)((double)(int)(uVar22 - 4) * DAT_005d90c0));
                    local_5da8._0_4_ = 1;
                    fVar44 = 0.0;
                    uVar26 = (ulong)(uVar22 - 4);
                    fVar37 = fVar36;
                    local_5da0[0] = fVar36;
                    if (4 < (int)uVar22) {
                      uVar18 = 4;
                      if (uVar22 != 5) {
                        uVar18 = 4;
                        lVar28 = 0;
                        do {
                          puVar16 = (undefined8 *)(lVar31 + lVar33 + -0x10 + lVar28);
                          uVar24 = puVar16[1];
                          *(undefined8 *)((long)local_5da0 + lVar28 + 8) = *puVar16;
                          *(undefined8 *)((long)local_5d88 + lVar28 + -8) = uVar24;
                          pfVar1 = (float *)(lVar31 + lVar33 + lVar28);
                          fVar37 = *pfVar1;
                          fVar44 = pfVar1[1];
                          fVar38 = pfVar1[2];
                          fVar42 = pfVar1[3];
                          *(float *)((long)local_5d88 + lVar28) = fVar37;
                          *(float *)((long)local_5d88 + lVar28 + 4) = fVar44;
                          *(float *)((long)local_5d88 + lVar28 + 8) = fVar38;
                          *(float *)((long)auStack_5d78 + lVar28 + -4) = fVar42;
                          lVar28 = lVar28 + 0x20;
                          lVar2 = uVar18 - ((ulong)(pcVar12 + -4) & 0xfffffffffffffffe);
                          uVar18 = uVar18 + 2;
                        } while (lVar2 != 2);
                      }
                      uVar26 = uVar18;
                      pcVar13 = pcVar12;
                      param_14 = puVar15;
                      if (((ulong)pcVar12 & 1) != 0) {
                        uVar26 = uVar18 * 0x10;
                        pfVar1 = (float *)(puVar15 + uVar18 * 2);
                        fVar37 = *pfVar1;
                        fVar44 = pfVar1[1];
                        fVar38 = pfVar1[2];
                        fVar42 = pfVar1[3];
                        local_5db8[uVar18 * 4 + -8] = fVar37;
                        local_5db8[uVar18 * 4 + -7] = fVar44;
                        local_5db8[uVar18 * 4 + -6] = fVar38;
                        local_5db8[uVar18 * 4 + -5] = fVar42;
                      }
                    }
                    lVar31 = (long)(int)uVar22;
                    local_5db8[lVar31 * 4 + -8] = 5.60519e-45;
                    local_5db8[lVar31 * 4 + -6] = 0.0;
                    lVar28 = *piVar10 + lVar31 + 3;
                    uVar18 = (long)*piVar10 * 0x10;
                    pvVar11 = resizebytes(CONCAT44(fVar44,fVar37),param_2,param_3,param_4,param_5,
                                          param_6,param_7,param_8,*(void **)(piVar10 + 2),uVar18,
                                          lVar28 * 0x10);
                    if (pvVar11 == (void *)0x0) {
                      pd_error(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,0,
                               "binbuf_addmessage: out of space",extraout_RDX_03,uVar26,pcVar13,
                               param_14);
                    }
                    else {
                      uVar26 = lVar31 + 3;
                      *(void **)(piVar10 + 2) = pvVar11;
                      *piVar10 = (int)lVar28;
                      uVar17 = (uint)uVar26;
                      ppuVar20 = local_5df8;
                      if (uVar17 != 0) {
                        puVar15 = (undefined8 *)((long)pvVar11 + uVar18);
                        if ((uVar26 & 3) != 0) {
                          uVar27 = 0;
                          do {
                            puVar16 = *ppuVar20;
                            puVar14 = ppuVar20[1];
                            ppuVar20 = ppuVar20 + 2;
                            *puVar15 = puVar16;
                            puVar15[1] = puVar14;
                            puVar15 = puVar15 + 2;
                            uVar27 = uVar27 + 1;
                          } while ((uVar17 & 3) != uVar27);
                          uVar26 = (ulong)(uVar17 - uVar27);
                        }
                        if (2 < uVar22 + 2) {
                          lVar31 = 0;
                          do {
                            uVar24 = ((undefined8 *)((long)ppuVar20 + lVar31))[1];
                            *(undefined8 *)((long)puVar15 + lVar31) =
                                 *(undefined8 *)((long)ppuVar20 + lVar31);
                            ((undefined8 *)((long)puVar15 + lVar31))[1] = uVar24;
                            puVar16 = (undefined8 *)((long)ppuVar20 + lVar31 + 0x10);
                            uVar24 = puVar16[1];
                            puVar14 = (undefined8 *)((long)puVar15 + lVar31 + 0x10);
                            *puVar14 = *puVar16;
                            puVar14[1] = uVar24;
                            puVar16 = (undefined8 *)((long)ppuVar20 + lVar31 + 0x20);
                            uVar24 = puVar16[1];
                            puVar14 = (undefined8 *)((long)puVar15 + lVar31 + 0x20);
                            *puVar14 = *puVar16;
                            puVar14[1] = uVar24;
                            puVar16 = (undefined8 *)((long)ppuVar20 + lVar31 + 0x30);
                            uVar24 = puVar16[1];
                            puVar14 = (undefined8 *)((long)puVar15 + lVar31 + 0x30);
                            *puVar14 = *puVar16;
                            puVar14[1] = uVar24;
                            lVar31 = lVar31 + 0x40;
                            uVar22 = (int)uVar26 - 4;
                            uVar26 = (ulong)uVar22;
                          } while (uVar22 != 0);
                        }
                      }
                    }
                    local_5ef8 = local_5ef8 + 1;
                    in_stack_ffffffffffffa0fc = param_10;
                    goto LAB_005328b0;
                  }
                  iVar9 = strcmp(pcVar29,"floatatom");
                  if (iVar9 != 0) {
                    iVar9 = strcmp(pcVar29,"connect");
                    if (iVar9 == 0) {
                      puVar16 = gensym("#P");
                      puVar14 = gensym("connect");
                      fVar37 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                      fVar38 = (float)(long)local_5ef8 + DAT_005d9054;
                      fVar44 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                      param_2 = (double)fVar44;
                      fVar44 = (float)atom_getfloatarg(4,uVar22,(long)puVar15);
                      param_3 = (double)(fVar38 - fVar44);
                      fVar44 = (float)atom_getfloatarg(5,uVar22,(long)puVar15);
                      param_4 = (double)fVar44;
                      binbuf_addv((double)(fVar38 - fVar37),param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,piVar10,0x65604f,puVar16,puVar14,pcVar13,param_14,
                                  (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                    }
                    goto LAB_005329e7;
                  }
                  fVar37 = (float)atom_getfloatarg(4,uVar22,(long)puVar15);
                  uVar17 = -(uint)(fVar37 * fVar36 < DAT_00651f38);
                  uVar27 = uVar17 & DAT_00655e00;
                  puVar16 = gensym("#P");
                  puVar14 = gensym("flonum");
                  fVar44 = (float)atom_getfloatarg(2,uVar22,(long)puVar15);
                  fVar38 = (float)atom_getfloatarg(3,uVar22,(long)puVar15);
                  param_3 = (double)(float)(uVar27 | ~uVar17 & (uint)(fVar37 * fVar36));
LAB_0053332e:
                  param_2 = (double)fVar38;
                  binbuf_addv((double)fVar44,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                              ,piVar10,0x656057,puVar16,puVar14,pcVar13,param_14,
                              (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                }
                local_5ef8 = local_5ef8 + 1;
                goto LAB_005329e7;
              }
              puVar14 = gensym("#P");
              puVar16 = gensym("pop");
              binbuf_addv(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar10,0x655ff8,puVar14,puVar16,pcVar13,
                          param_14,(double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
              local_5df8[0]._0_4_ = 2;
              local_5df8[1] = gensym("#P");
              local_5de8 = 2;
              puStack_5de0 = gensym("newobj");
              local_5dd8 = puVar15[4];
              uStack_5dd0 = puVar15[5];
              local_5dc8 = puVar15[6];
              uStack_5dc0 = puVar15[7];
              local_5db8[0] = 1.4013e-45;
              local_5db0 = (undefined8 *)
                           CONCAT44(local_5db0._4_4_,
                                    (float)((double)(int)(uVar22 - 5) * DAT_005d90c0));
              local_5da8._0_4_ = 1;
              local_5d98._0_4_ = 2;
              local_5da0[0] = fVar36;
              uStack_5d90 = gensym("p");
              uVar45 = extraout_XMM0_Da_08;
              uVar46 = extraout_XMM0_Db_08;
              if (5 < uVar22) {
                pcVar13 = pcVar12 + -5;
                puVar14 = (undefined8 *)0x5;
                if (uVar22 != 6) {
                  lVar31 = lVar31 + lVar6 + 0x60;
                  param_14 = (undefined8 *)-((ulong)pcVar13 & 0xfffffffffffffffe);
                  puVar14 = (undefined8 *)0x5;
                  lVar28 = 0;
                  do {
                    puVar16 = (undefined8 *)(lVar31 + -0x10 + lVar28);
                    uVar24 = puVar16[1];
                    *(undefined8 *)((long)local_5d88 + lVar28) = *puVar16;
                    *(undefined8 *)((long)local_5d88 + lVar28 + 8) = uVar24;
                    puVar4 = (undefined4 *)(lVar31 + lVar28);
                    uVar45 = *puVar4;
                    uVar46 = puVar4[1];
                    uVar7 = puVar4[2];
                    uVar8 = puVar4[3];
                    *(undefined4 *)((long)auStack_5d78 + lVar28) = uVar45;
                    *(undefined4 *)((long)auStack_5d78 + lVar28 + 4) = uVar46;
                    *(undefined4 *)((long)auStack_5d78 + lVar28 + 8) = uVar7;
                    *(undefined4 *)((long)auStack_5d78 + lVar28 + 0xc) = uVar8;
                    lVar28 = lVar28 + 0x20;
                    puVar3 = (undefined *)((long)param_14 + (long)puVar14);
                    puVar14 = (undefined8 *)((long)puVar14 + 2);
                  } while (puVar3 != (undefined *)0x3);
                }
                puVar16 = puVar14;
                if (((ulong)pcVar13 & 1) != 0) {
                  puVar16 = (undefined8 *)((long)puVar14 * 0x10);
                  puVar15 = puVar15 + (long)puVar14 * 2;
                  uVar45 = *(undefined4 *)puVar15;
                  uVar46 = *(undefined4 *)((long)puVar15 + 4);
                  uVar7 = *(undefined4 *)(puVar15 + 1);
                  uVar8 = *(undefined4 *)((long)puVar15 + 0xc);
                  puVar15 = puVar16 + 4;
                  *(undefined4 *)((long)puVar15 + (long)local_5df8) = uVar45;
                  *(undefined4 *)((long)local_5df8 + 4 + (long)puVar15) = uVar46;
                  *(undefined4 *)((long)(local_5df8 + 1) + (long)puVar15) = uVar7;
                  *(undefined4 *)((long)local_5df8 + 0xc + (long)puVar15) = uVar8;
                }
              }
              local_5db8[(long)(int)uVar22 * 4 + -8] = 5.60519e-45;
              local_5db8[(long)(int)uVar22 * 4 + -6] = 0.0;
              in_stack_ffffffffffffa0fc = param_10;
              binbuf_add(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,piVar10,uVar22 + 3,local_5df8,puVar16,pcVar13,param_14);
              bVar35 = local_5ef0 == (char *)0x0;
              local_5ef0 = (char *)((long)local_5ef0 + -1);
              if (bVar35) {
                local_5ef0 = (char *)0x0;
              }
              local_5ef8 = local_1f78[(long)local_5ef0] + 1;
            }
          }
        }
      }
LAB_005328b0:
      param_14 = (undefined8 *)&DAT_00654cfa;
      uVar26 = (ulong)(int)(uVar32 + 1);
      local_5ee8 = (char *)0x3de;
    } while ((int)(uVar32 + 1) < (int)uVar5);
  }
  else {
    if ((int)uVar5 < 1) {
      return piVar10;
    }
    uVar26 = 0;
    local_5ee0 = 0;
    local_5ee8 = (char *)0x0;
    do {
      uVar22 = (uint)uVar26;
      uVar18 = uVar26;
      uVar32 = uVar22;
      if ((int)uVar22 < (int)uVar5) {
        piVar23 = (int *)(uVar26 * 0x10 + lVar6);
        while (*piVar23 != 4) {
          uVar18 = uVar18 + 1;
          piVar23 = piVar23 + 4;
          if (uVar5 == uVar18) goto LAB_00533b8b;
        }
        uVar32 = (uint)uVar18;
      }
      if (uVar32 == uVar5) break;
      if (uVar26 != uVar18) {
        if (uVar26 + 1 != uVar18) {
          pcVar19 = (char *)(uVar26 * 0x10);
          if ((*(int *)(pcVar19 + lVar6) == 2) && (*(int *)(lVar6 + (uVar26 + 1) * 0x10) == 2)) {
            pcVar12 = pcVar19 + lVar6;
            uVar22 = uVar32 - uVar22;
            uVar17 = 0x3de;
            if ((int)uVar22 < 0x3de) {
              uVar17 = uVar22;
            }
            pcVar30 = (char *)**(undefined8 **)(pcVar19 + lVar6 + 8);
            local_5ef0 = (char *)**(undefined8 **)(pcVar12 + 0x18);
            pcVar13 = local_5ee8;
            if (0 < (int)uVar22) {
              uVar26 = 1;
              if (1 < (int)uVar17) {
                uVar26 = (ulong)uVar17;
              }
              iVar9 = 2;
              lVar33 = 0x10;
              do {
                lVar31 = lVar33;
                if (iVar9 != 8) goto LAB_0053162e;
                sprintf(local_5e68,"$%d",(ulong)*(uint *)(pcVar12 + lVar33 + -8));
                while( true ) {
                  pcVar29 = pcVar12 + lVar33 + -0x10;
                  pcVar29[0] = '\x02';
                  pcVar29[1] = '\0';
                  pcVar29[2] = '\0';
                  pcVar29[3] = '\0';
                  puVar15 = gensym(local_5e68);
                  *(undefined8 **)(pcVar12 + lVar33 + -8) = puVar15;
                  lVar31 = lVar33;
LAB_0053162e:
                  if (uVar26 * 0x10 == lVar31) goto LAB_00531633;
                  iVar9 = *(int *)(pcVar12 + lVar31);
                  lVar33 = lVar31 + 0x10;
                  if (iVar9 != 9) break;
                  strcpy(local_5e68,(char *)**(undefined8 **)(pcVar12 + lVar31 + 8));
                }
              } while( true );
            }
LAB_00531633:
            iVar9 = strcmp(pcVar30,"#N");
            if ((iVar9 == 0) && (iVar9 = strcmp(local_5ef0,"vpatcher"), iVar9 == 0)) {
              uVar24 = extraout_RDX;
              uVar45 = extraout_XMM0_Da_00;
              uVar46 = extraout_XMM0_Db_00;
              if (999 < local_5ee0) {
LAB_00533bd7:
                pd_error(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,0,"stack depth exceeded: too many embedded patches",uVar24,pcVar19,
                         pcVar13,param_14);
                return piVar10;
              }
              local_1f78[local_5ee0] = (ulong)local_5ee8;
              local_5ee0 = local_5ee0 + 1;
              puVar15 = gensym("#N");
              puVar16 = gensym("canvas");
              fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar12);
              fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar12);
              param_2 = (double)fVar37;
              fVar37 = (float)atom_getfloatarg(4,uVar17,(long)pcVar12);
              fVar44 = (float)atom_getfloatarg(2,uVar17,(long)pcVar12);
              param_3 = (double)(fVar37 - fVar44);
              fVar37 = (float)atom_getfloatarg(5,uVar17,(long)pcVar12);
              fVar44 = (float)atom_getfloatarg(3,uVar17,(long)pcVar12);
              param_4 = (double)(fVar37 - fVar44);
              param_5 = (double)*(int *)PTR_sys_defaultfont_00715900;
              binbuf_addv((double)fVar36,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar10,0x655fda,puVar15,puVar16,pcVar13,param_14,
                          (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
              local_5ee8 = (char *)0x0;
            }
            iVar9 = strcmp(pcVar30,"#P");
            if (iVar9 == 0) {
              iVar9 = strcmp(local_5ef0,"hidden");
              if (iVar9 == 0) {
                pcVar30 = pcVar12 + 0x10;
                uVar17 = uVar17 - 1;
                local_5ef0 = (char *)**(undefined8 **)(pcVar12 + 0x28);
              }
              else {
                pcVar30 = pcVar12;
              }
              uVar26 = (ulong)uVar17;
              if (((6 < (int)uVar17) && (iVar9 = strcmp(local_5ef0,"newobj"), iVar9 == 0)) &&
                 (*(int *)(pcVar30 + 0x60) == 2)) {
                pcVar12 = (char *)**(undefined8 **)(pcVar30 + 0x68);
                iVar9 = strcmp(pcVar12,"patcher");
                if ((iVar9 == 0) || (iVar9 = strcmp(pcVar12,"p"), iVar9 == 0)) {
                  puVar15 = gensym("#X");
                  puVar16 = gensym("restore");
                  fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                  fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                  param_2 = (double)fVar37;
                  pcVar13 = (char *)gensym("pd");
                  param_14 = (undefined8 *)atom_getsymbolarg(7,uVar17,(long)pcVar30);
                  binbuf_addv((double)fVar36,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                              ,piVar10,0x655ff4,puVar15,puVar16,pcVar13,param_14,
                              (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                  bVar34 = local_5ee0 == 0;
                  local_5ee0 = local_5ee0 + -1;
                  if (bVar34) {
                    local_5ee0 = 0;
                  }
                  local_5ee8 = (char *)(local_1f78[local_5ee0] + 1);
                  in_stack_ffffffffffffa0fc = param_10;
                  goto LAB_005314c0;
                }
              }
              iVar9 = strcmp(local_5ef0,"newex");
              if ((iVar9 == 0) || (iVar9 = strcmp(local_5ef0,"newobj"), iVar9 == 0)) {
                puVar15 = (undefined8 *)atom_getsymbolarg(6,uVar17,(long)pcVar30);
                puVar16 = gensym("trigger");
                if (((puVar15 == puVar16) || (puVar16 = gensym("t"), puVar15 == puVar16)) &&
                   (7 < (int)uVar17)) {
                  plVar25 = (long *)(pcVar30 + 0x78);
                  lVar33 = (ulong)uVar17 - 7;
                  do {
                    if (((int)plVar25[-1] == 2) &&
                       (puVar16 = (undefined8 *)*plVar25, puVar14 = gensym("i"), puVar16 == puVar14)
                       ) {
                      puVar16 = gensym("f");
                      *plVar25 = (long)puVar16;
                    }
                    plVar25 = plVar25 + 2;
                    lVar33 = lVar33 + -1;
                  } while (lVar33 != 0);
                }
                puVar16 = gensym("table");
                if (puVar15 == puVar16) {
                  puVar15 = gensym("TABLE");
                }
                local_5df8[0]._0_4_ = 2;
                local_5df8[1] = gensym("#X");
                local_5de8 = 2;
                puStack_5de0 = gensym("obj");
                local_5dd8 = *(undefined8 *)(pcVar30 + 0x20);
                uStack_5dd0 = *(undefined8 *)(pcVar30 + 0x28);
                uVar45 = *(undefined4 *)(pcVar30 + 0x30);
                uVar46 = *(undefined4 *)(pcVar30 + 0x34);
                local_5dc8 = *(undefined8 *)(pcVar30 + 0x30);
                uStack_5dc0 = *(undefined8 *)(pcVar30 + 0x38);
                local_5db8[0] = 2.8026e-45;
                local_5db0 = puVar15;
                if (7 < (int)uVar17) {
                  uVar18 = 7;
                  if (uVar17 != 8) {
                    uVar18 = 7;
                    lVar33 = 0;
                    do {
                      uVar24 = *(undefined8 *)(pcVar30 + lVar33 + 0x70 + 8);
                      *(undefined8 *)((long)local_5da0 + lVar33 + -8) =
                           *(undefined8 *)(pcVar30 + lVar33 + 0x70);
                      *(undefined8 *)((long)local_5da0 + lVar33) = uVar24;
                      pcVar12 = pcVar30 + lVar33 + 0x80;
                      uVar45 = *(undefined4 *)pcVar12;
                      uVar46 = *(undefined4 *)(pcVar12 + 4);
                      uVar7 = *(undefined4 *)(pcVar12 + 8);
                      uVar8 = *(undefined4 *)(pcVar12 + 0xc);
                      *(undefined4 *)((long)local_5da0 + lVar33 + 8) = uVar45;
                      *(undefined4 *)((long)local_5da0 + lVar33 + 0xc) = uVar46;
                      *(undefined4 *)((long)local_5d88 + lVar33 + -8) = uVar7;
                      *(undefined4 *)((long)local_5d88 + lVar33 + -4) = uVar8;
                      lVar33 = lVar33 + 0x20;
                      lVar31 = uVar18 - ((ulong)uVar17 - 7 & 0xfffffffffffffffe);
                      uVar18 = uVar18 + 2;
                    } while (lVar31 != 5);
                  }
                  uVar26 = uVar18;
                  if (((ulong)uVar17 - 7 & 1) != 0) {
                    uVar26 = uVar18 * 0x10;
                    pcVar30 = pcVar30 + uVar26;
                    uVar45 = *(undefined4 *)pcVar30;
                    uVar46 = *(undefined4 *)(pcVar30 + 4);
                    uVar7 = *(undefined4 *)(pcVar30 + 8);
                    uVar8 = *(undefined4 *)(pcVar30 + 0xc);
                    auStack_5e18[uVar18 * 4] = uVar45;
                    auStack_5e18[uVar18 * 4 + 1] = uVar46;
                    auStack_5e18[uVar18 * 4 + 2] = uVar7;
                    auStack_5e18[uVar18 * 4 + 3] = uVar8;
                  }
                }
                lVar33 = (long)(int)uVar17;
                auStack_5e18[lVar33 * 4] = 4;
                auStack_5e18[lVar33 * 4 + 2] = 0;
                lVar31 = *piVar10 + lVar33 + -1;
                uVar18 = (long)*piVar10 * 0x10;
                pvVar11 = resizebytes(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,
                                      param_6,param_7,param_8,*(void **)(piVar10 + 2),uVar18,
                                      lVar31 * 0x10);
                uVar24 = extraout_RDX_01;
                uVar45 = extraout_XMM0_Da_02;
                uVar46 = extraout_XMM0_Db_02;
                if (pvVar11 == (void *)0x0) {
LAB_00531e8e:
                  pd_error(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,0,"binbuf_addmessage: out of space",uVar24,uVar26,pcVar13,
                           param_14);
                }
                else {
                  uVar26 = lVar33 - 1;
                  *(void **)(piVar10 + 2) = pvVar11;
                  *piVar10 = (int)lVar31;
                  uVar22 = (uint)uVar26;
                  if (uVar22 != 0) {
                    puVar15 = (undefined8 *)((long)pvVar11 + uVar18);
                    if ((uVar26 & 3) == 0) {
                      ppuVar20 = local_5df8;
                    }
                    else {
                      uVar27 = 0;
                      ppuVar20 = local_5df8;
                      do {
                        puVar16 = *ppuVar20;
                        puVar14 = ppuVar20[1];
                        ppuVar20 = ppuVar20 + 2;
                        *puVar15 = puVar16;
                        puVar15[1] = puVar14;
                        puVar15 = puVar15 + 2;
                        uVar27 = uVar27 + 1;
                      } while ((uVar22 & 3) != uVar27);
                      uVar26 = (ulong)(uVar22 - uVar27);
                    }
                    if (2 < uVar17 - 2) {
                      lVar33 = 0;
                      do {
                        uVar24 = ((undefined8 *)((long)ppuVar20 + lVar33))[1];
                        *(undefined8 *)((long)puVar15 + lVar33) =
                             *(undefined8 *)((long)ppuVar20 + lVar33);
                        ((undefined8 *)((long)puVar15 + lVar33))[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x10);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x10);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x20);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x20);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x30);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x30);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        lVar33 = lVar33 + 0x40;
                        uVar22 = (int)uVar26 - 4;
                        uVar26 = (ulong)uVar22;
                      } while (uVar22 != 0);
                    }
                  }
                }
LAB_00532113:
                local_5ee8 = local_5ee8 + 1;
              }
              else {
                iVar9 = strcmp(local_5ef0,"message");
                if ((iVar9 == 0) || (iVar9 = strcmp(local_5ef0,"comment"), iVar9 == 0)) {
                  local_5df8[0]._0_4_ = 2;
                  local_5df8[1] = gensym("#X");
                  local_5de8 = 2;
                  iVar9 = strcmp(local_5ef0,"message");
                  pcVar12 = "text";
                  if (iVar9 == 0) {
                    pcVar12 = "msg";
                  }
                  puStack_5de0 = gensym(pcVar12);
                  local_5dd8 = *(undefined8 *)(pcVar30 + 0x20);
                  uStack_5dd0 = *(undefined8 *)(pcVar30 + 0x28);
                  uVar45 = *(undefined4 *)(pcVar30 + 0x30);
                  uVar46 = *(undefined4 *)(pcVar30 + 0x34);
                  local_5dc8 = *(undefined8 *)(pcVar30 + 0x30);
                  uStack_5dc0 = *(undefined8 *)(pcVar30 + 0x38);
                  if (6 < (int)uVar17) {
                    uVar18 = 6;
                    if (uVar17 != 7) {
                      uVar18 = 6;
                      lVar33 = 0;
                      do {
                        uVar24 = *(undefined8 *)(pcVar30 + lVar33 + 0x60 + 8);
                        *(undefined8 *)((long)local_5db8 + lVar33) =
                             *(undefined8 *)(pcVar30 + lVar33 + 0x60);
                        *(undefined8 *)((long)local_5db8 + lVar33 + 8) = uVar24;
                        pcVar12 = pcVar30 + lVar33 + 0x70;
                        uVar45 = *(undefined4 *)pcVar12;
                        uVar46 = *(undefined4 *)(pcVar12 + 4);
                        uVar7 = *(undefined4 *)(pcVar12 + 8);
                        uVar8 = *(undefined4 *)(pcVar12 + 0xc);
                        *(undefined4 *)((long)local_5da0 + lVar33 + -8) = uVar45;
                        *(undefined4 *)((long)local_5da0 + lVar33 + -4) = uVar46;
                        *(undefined4 *)((long)local_5da0 + lVar33) = uVar7;
                        *(undefined4 *)((long)local_5da0 + lVar33 + 4) = uVar8;
                        lVar33 = lVar33 + 0x20;
                        lVar31 = uVar18 - ((ulong)uVar17 - 6 & 0xfffffffffffffffe);
                        uVar18 = uVar18 + 2;
                      } while (lVar31 != 4);
                    }
                    uVar26 = uVar18;
                    if ((uVar17 & 1) != 0) {
                      uVar26 = uVar18 * 0x10;
                      pcVar30 = pcVar30 + uVar26;
                      uVar45 = *(undefined4 *)pcVar30;
                      uVar46 = *(undefined4 *)(pcVar30 + 4);
                      uVar7 = *(undefined4 *)(pcVar30 + 8);
                      uVar8 = *(undefined4 *)(pcVar30 + 0xc);
                      auStack_5e18[uVar18 * 4] = uVar45;
                      auStack_5e18[uVar18 * 4 + 1] = uVar46;
                      auStack_5e18[uVar18 * 4 + 2] = uVar7;
                      auStack_5e18[uVar18 * 4 + 3] = uVar8;
                    }
                  }
                  lVar33 = (long)(int)uVar17;
                  auStack_5e18[lVar33 * 4] = 4;
                  auStack_5e18[lVar33 * 4 + 2] = 0;
                  lVar31 = *piVar10 + lVar33 + -1;
                  uVar18 = (long)*piVar10 * 0x10;
                  pvVar11 = resizebytes(CONCAT44(uVar46,uVar45),param_2,param_3,param_4,param_5,
                                        param_6,param_7,param_8,*(void **)(piVar10 + 2),uVar18,
                                        lVar31 * 0x10);
                  uVar24 = extraout_RDX_00;
                  uVar45 = extraout_XMM0_Da_01;
                  uVar46 = extraout_XMM0_Db_01;
                  if (pvVar11 == (void *)0x0) goto LAB_00531e8e;
                  uVar26 = lVar33 - 1;
                  *(void **)(piVar10 + 2) = pvVar11;
                  *piVar10 = (int)lVar31;
                  uVar22 = (uint)uVar26;
                  if (uVar22 != 0) {
                    puVar15 = (undefined8 *)((long)pvVar11 + uVar18);
                    if ((uVar26 & 3) == 0) {
                      ppuVar20 = local_5df8;
                    }
                    else {
                      uVar27 = 0;
                      ppuVar20 = local_5df8;
                      do {
                        puVar16 = *ppuVar20;
                        puVar14 = ppuVar20[1];
                        ppuVar20 = ppuVar20 + 2;
                        *puVar15 = puVar16;
                        puVar15[1] = puVar14;
                        puVar15 = puVar15 + 2;
                        uVar27 = uVar27 + 1;
                      } while ((uVar22 & 3) != uVar27);
                      uVar26 = (ulong)(uVar22 - uVar27);
                    }
                    if (2 < uVar17 - 2) {
                      lVar33 = 0;
                      do {
                        uVar24 = ((undefined8 *)((long)ppuVar20 + lVar33))[1];
                        *(undefined8 *)((long)puVar15 + lVar33) =
                             *(undefined8 *)((long)ppuVar20 + lVar33);
                        ((undefined8 *)((long)puVar15 + lVar33))[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x10);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x10);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x20);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x20);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        puVar16 = (undefined8 *)((long)ppuVar20 + lVar33 + 0x30);
                        uVar24 = puVar16[1];
                        puVar14 = (undefined8 *)((long)puVar15 + lVar33 + 0x30);
                        *puVar14 = *puVar16;
                        puVar14[1] = uVar24;
                        lVar33 = lVar33 + 0x40;
                        uVar22 = (int)uVar26 - 4;
                        uVar26 = (ulong)uVar22;
                      } while (uVar22 != 0);
                    }
                  }
                  goto LAB_00532113;
                }
                iVar9 = strcmp(local_5ef0,"button");
                if (iVar9 == 0) {
                  puVar15 = gensym("#X");
                  puVar16 = gensym("obj");
                  fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                  fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                  pcVar13 = (char *)gensym("bng");
LAB_005320b9:
                  param_2 = (double)fVar37;
                  binbuf_addv((double)fVar36,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                              ,piVar10,0x656008,puVar15,puVar16,pcVar13,param_14,
                              (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
LAB_005320c3:
                  local_5ee8 = local_5ee8 + 1;
                }
                else {
                  iVar9 = strcmp(local_5ef0,"number");
                  if ((iVar9 == 0) || (iVar9 = strcmp(local_5ef0,"flonum"), iVar9 == 0)) {
                    puVar15 = gensym("#X");
                    puVar16 = gensym("floatatom");
                    fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                    fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                    param_2 = (double)fVar37;
                    binbuf_addv((double)fVar36,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,piVar10,0x656016,puVar15,puVar16,pcVar13,param_14,
                                (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                    goto LAB_005320c3;
                  }
                  iVar9 = strcmp(local_5ef0,"slider");
                  if (iVar9 == 0) {
                    fVar36 = (float)atom_getfloatarg(7,uVar17,(long)pcVar30);
                    uVar22 = ~-(uint)(0.0 < fVar36) & (uint)DAT_005d9038;
                    puVar15 = gensym("#X");
                    puVar16 = gensym("obj");
                    fVar39 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                    fVar40 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                    pcVar13 = (char *)gensym("vsl");
                    fVar41 = (float)atom_getfloatarg(4,uVar17,(long)pcVar30);
                    fVar42 = (float)atom_getfloatarg(5,uVar17,(long)pcVar30);
                    fVar38 = (float)atom_getfloatarg(6,uVar17,(long)pcVar30);
                    fVar44 = (float)atom_getfloatarg(6,uVar17,(long)pcVar30);
                    fVar37 = (float)atom_getfloatarg(5,uVar17,(long)pcVar30);
                    fVar44 = (fVar37 + DAT_005d9054) *
                             (float)(uVar22 | (uint)fVar36 & -(uint)(0.0 < fVar36)) + fVar44;
                    param_14 = gensym("empty");
                    puVar14 = gensym("empty");
                    gensym("empty");
LAB_00532302:
                    param_2 = (double)fVar40;
                    param_3 = (double)fVar41;
                    param_6 = (double)fVar44;
                    param_5 = (double)fVar38;
                    param_4 = (double)fVar42;
                    param_7 = 0.0;
                    uVar46 = 0;
                    uVar45 = 0;
                    binbuf_addv((double)fVar39,param_2,param_3,param_4,param_5,param_6,0,0,piVar10,
                                0x65601c,puVar15,puVar16,pcVar13,param_14,(double)puVar14);
                    param_8 = CONCAT44(uVar46,uVar45);
                    goto LAB_005320c3;
                  }
                  iVar9 = strcmp(local_5ef0,"toggle");
                  if (iVar9 == 0) {
                    puVar15 = gensym("#X");
                    puVar16 = gensym("obj");
                    fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                    fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                    pcVar13 = (char *)gensym("tgl");
                    goto LAB_005320b9;
                  }
                  iVar9 = strcmp(local_5ef0,"inlet");
                  if (iVar9 == 0) {
                    puVar15 = gensym("#X");
                    puVar16 = gensym("obj");
                    fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                    fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                    pcVar13 = "inlet";
                    pcVar12 = "inlet~";
LAB_00532450:
                    if (5 < (int)uVar17) {
                      pcVar13 = pcVar12;
                    }
                    pcVar13 = (char *)gensym(pcVar13);
                    goto LAB_005320b9;
                  }
                  iVar9 = strcmp(local_5ef0,"outlet");
                  if (iVar9 == 0) {
                    puVar15 = gensym("#X");
                    puVar16 = gensym("obj");
                    fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                    fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                    pcVar13 = "outlet";
                    pcVar12 = "outlet~";
                    goto LAB_00532450;
                  }
                  iVar9 = strcmp(local_5ef0,"user");
                  if (iVar9 == 0) {
                    pcVar13 = (char *)**(undefined8 **)(pcVar30 + 0x28);
                    iVar9 = strcmp(pcVar13,"hslider");
                    if (iVar9 == 0) {
                      fVar44 = (float)atom_getfloatarg(7,uVar17,(long)pcVar30);
                      atom_getfloatarg(8,uVar17,(long)pcVar30);
                      fVar38 = (float)atom_getfloatarg(9,uVar17,(long)pcVar30);
                      puVar15 = gensym("#X");
                      puVar16 = gensym("obj");
                      fVar39 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                      fVar40 = (float)atom_getfloatarg(4,uVar17,(long)pcVar30);
                      pcVar13 = (char *)gensym("hsl");
                      fVar41 = (float)atom_getfloatarg(6,uVar17,(long)pcVar30);
                      fVar42 = (float)atom_getfloatarg(5,uVar17,(long)pcVar30);
                      fVar44 = fVar44 + fVar38;
                      param_14 = gensym("empty");
                      puVar14 = gensym("empty");
                      gensym("empty");
                    }
                    else {
                      iVar9 = strcmp(pcVar13,"uslider");
                      if (iVar9 != 0) {
                        puVar15 = gensym("#X");
                        puVar16 = gensym("obj");
                        fVar36 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                        fVar37 = (float)atom_getfloatarg(4,uVar17,(long)pcVar30);
                        pcVar13 = (char *)atom_getsymbolarg(2,uVar17,(long)pcVar30);
                        goto LAB_005320b9;
                      }
                      fVar44 = (float)atom_getfloatarg(7,uVar17,(long)pcVar30);
                      atom_getfloatarg(8,uVar17,(long)pcVar30);
                      fVar38 = (float)atom_getfloatarg(9,uVar17,(long)pcVar30);
                      puVar15 = gensym("#X");
                      puVar16 = gensym("obj");
                      fVar39 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                      fVar40 = (float)atom_getfloatarg(4,uVar17,(long)pcVar30);
                      pcVar13 = (char *)gensym("vsl");
                      fVar41 = (float)atom_getfloatarg(5,uVar17,(long)pcVar30);
                      fVar42 = (float)atom_getfloatarg(6,uVar17,(long)pcVar30);
                      fVar44 = fVar44 + fVar38;
                      param_14 = gensym("empty");
                      puVar14 = gensym("empty");
                      gensym("empty");
                    }
                    goto LAB_00532302;
                  }
                  iVar9 = strcmp(local_5ef0,"connect");
                  if ((iVar9 != 0) && (iVar9 = strcmp(local_5ef0,"fasten"), iVar9 != 0))
                  goto LAB_005314a5;
                  puVar15 = gensym("#X");
                  puVar16 = gensym("connect");
                  fVar36 = (float)atom_getfloatarg(2,uVar17,(long)pcVar30);
                  fVar44 = (float)(long)local_5ee8 + DAT_005d9054;
                  fVar37 = (float)atom_getfloatarg(3,uVar17,(long)pcVar30);
                  param_2 = (double)fVar37;
                  fVar37 = (float)atom_getfloatarg(4,uVar17,(long)pcVar30);
                  param_3 = (double)(fVar44 - fVar37);
                  fVar37 = (float)atom_getfloatarg(5,uVar17,(long)pcVar30);
                  param_4 = (double)fVar37;
                  binbuf_addv((double)(fVar44 - fVar36),param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8,piVar10,0x65604f,puVar15,puVar16,pcVar13,param_14,
                              (double)CONCAT44(param_10,in_stack_ffffffffffffa0f8));
                }
              }
              in_stack_ffffffffffffa0fc = param_10;
            }
            else {
LAB_005314a5:
              in_stack_ffffffffffffa0fc = param_10;
            }
          }
        }
      }
LAB_005314c0:
      uVar26 = (ulong)(int)(uVar32 + 1);
    } while ((int)(uVar32 + 1) < (int)uVar5);
  }
LAB_00533b8b:
  if (param_10 != 0) {
    return piVar10;
  }
LAB_00533b90:
  puVar15 = gensym("#P");
  puVar16 = gensym("pop");
  binbuf_addv(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,piVar10,0x655ff8,puVar15,puVar16,local_5ee8,param_14,
              (double)CONCAT44(in_stack_ffffffffffffa0fc,in_stack_ffffffffffffa0f8));
  return piVar10;
}


