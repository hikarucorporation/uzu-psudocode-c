// Function : plot_click
// Namespace: 
// Entry    : 005246d0
// Prototype: ulong plot_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, long param_4, uint * param_5, long param_6, long param_7, ulong param_8, undefined8 param_9, uint param_10, int param_11, int param_12, int param_13, undefined4 param_14, int param_15)
// Body     : 005246d0 - 0052572c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong plot_click(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,uint *param_5,
                long param_6,long param_7,ulong param_8,undefined8 param_9,uint param_10,
                int param_11,int param_12,int param_13,undefined4 param_14,int param_15)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
  ulong uVar15;
  undefined8 extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qa_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 extraout_var [12];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  double extraout_XMM1_Qa_05;
  double dVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar31 [12];
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined1 in_XMM4 [16];
  undefined8 uVar34;
  undefined1 in_XMM5 [16];
  float in_XMM6_Da;
  uint in_XMM6_Db;
  undefined8 uVar35;
  undefined1 in_XMM7 [16];
  float local_16c;
  char *local_168;
  uint *local_160;
  float local_154;
  double local_150;
  undefined1 local_148 [16];
  double local_130;
  ulong local_128;
  char *local_120;
  float local_118;
  undefined4 uStack_114;
  float local_110 [3];
  uint local_104;
  double local_100;
  char *local_f8;
  float local_ec;
  undefined1 local_e8 [16];
  undefined8 *local_d8;
  long local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  undefined1 local_98 [16];
  char *local_88;
  char *local_80;
  char *local_78;
  uint *local_70;
  undefined8 *local_68;
  long local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_38;
  
  local_148._0_8_ = param_9;
  local_160 = param_5;
  local_150 = (double)param_8;
  local_e8._0_4_ = (float)param_1;
  uVar3 = plot_readownertemplate
                    (param_1,param_2,param_3,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                     CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,param_4,param_6,param_7,&local_68
                     ,(char *)&local_70,&local_50,&local_b4,&local_b8,&local_bc,&local_54,&local_c0,
                     &local_c4,&local_c8,(long *)&local_78,(long *)&local_80,(long *)&local_88);
  if ((int)uVar3 != 0) {
    return 0;
  }
  if (local_c0 == 0.0) {
    return 0;
  }
  local_e8._0_4_ = (float)local_e8._0_4_ + local_b4;
  local_128 = CONCAT44(local_128._4_4_,local_b8);
  fVar13 = (float)param_2 + local_bc;
  local_154 = local_c4;
  local_ec = local_c8;
  plVar5 = &local_38;
  local_f8 = local_78;
  local_168 = local_80;
  local_120 = local_88;
  uVar3 = array_getfields((ulong)(uint)local_c8,0,param_3,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                          CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,local_68,plVar5,&local_60,
                          &local_a4,local_78,(long)local_80,(long)local_88,&local_b0,&local_a8,
                          &local_ac);
  if ((int)uVar3 == 0) {
    iVar2 = 1;
    if (2000 < (int)*local_70) {
      iVar2 = (int)*local_70 / 1000;
    }
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar1 = local_160;
    lVar12 = *(long *)(*(long *)(*plVar4 + 0x48) + 8);
    *(int *)(lVar12 + 0xa4) = local_a4;
    *(uint **)(lVar12 + 0x78) = local_160;
    *(double *)(lVar12 + 0x80) = local_150;
    *(undefined8 *)(lVar12 + 0x88) = local_148._0_8_;
    *(long *)(lVar12 + 0x98) = local_60;
    uVar3 = local_148._0_8_;
    uVar30 = extraout_XMM1_Qa;
    fVar14 = glist_dpixtodx(DAT_005d9038,extraout_XMM1_Qa,param_3,in_XMM3._0_8_,in_XMM4._0_8_,
                            in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,
                            (long)local_160,plVar5,extraout_RDX,local_148._0_8_,local_78,local_80);
    *(float *)(*(long *)(*(long *)(*plVar4 + 0x48) + 8) + 0xb0) = fVar14;
    fVar14 = glist_dpixtody(DAT_005d9038,uVar30,param_3,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                            CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,(long)puVar1,plVar5,
                            extraout_RDX_00,uVar3,local_78,local_80);
    *(float *)(*(long *)(*(long *)(*plVar4 + 0x48) + 8) + 0xb4) = fVar14;
    plVar4 = *(long **)(puVar1 + 0xc);
    if ((((plVar4 == (long *)0x0) || (*plVar4 != *(long *)PTR_garray_class_00715780)) ||
        (plVar4[1] != 0)) || (local_a4 != 8)) {
      local_d8 = local_68;
      if (0 < (int)*local_70) {
        local_d0 = (long)local_a4;
        local_100 = (double)CONCAT44(local_100._4_4_,local_b0);
        local_150 = (double)CONCAT44(local_150._4_4_,local_a8);
        local_130 = (double)CONCAT44(local_130._4_4_,(float)(int)param_10);
        local_98 = ZEXT416((uint)(float)param_11);
        local_48 = (float)((uint)_DAT_006524b0 ^ (uint)(float)param_11);
        uStack_44 = _UNK_006524b4;
        uStack_40 = _UNK_006524b8;
        uStack_3c = _UNK_006524bc;
        lVar12 = (long)iVar2;
        if ((int)local_ac < 0) {
          lVar11 = lVar12 * local_d0;
          local_148 = ZEXT416((uint)DAT_005d94c4);
          lVar8 = 0;
          uVar9 = 0;
          do {
            array_getcoordinate((float)local_e8._0_4_,(ulong)(uint)fVar13,local_128 & 0xffffffff,
                                in_XMM4._0_8_,in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                                in_XMM7._0_8_,(long)local_160,*(long *)(local_70 + 2) + lVar8,
                                local_100._0_4_,(ulong)local_150 & 0xffffffff,(ulong)local_ac,
                                uVar9 & 0xffffffff,(long)local_f8,(long)local_168,(long)local_120,
                                local_110,&local_118,&local_16c);
            fVar14 = local_110[0] - local_130._0_4_;
            in_XMM3._4_4_ = _UNK_006524b4;
            in_XMM3._0_4_ = _DAT_006524b0;
            in_XMM3._8_4_ = _UNK_006524b8;
            in_XMM3._12_4_ = _UNK_006524bc;
            in_XMM4 = ZEXT816(0);
            fVar24 = (float)(((uint)fVar14 ^ (uint)_DAT_006524b0) & -(uint)(fVar14 < 0.0));
            fVar14 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)fVar24);
            if (fVar14 <= DAT_00651f38) {
              fVar19 = local_118 - (float)local_98._0_4_;
              fVar24 = (float)(((uint)fVar19 ^ (uint)_DAT_006524b0) & -(uint)(fVar19 < 0.0));
              fVar14 = (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar19 | (uint)fVar24) + fVar14;
              in_XMM3 = ZEXT416((uint)fVar14);
              if (fVar14 <= (float)local_148._0_4_) {
                local_148._0_4_ = fVar14;
              }
            }
            uVar27 = 0;
            uVar9 = uVar9 + lVar12;
            uVar29 = *local_70;
            lVar8 = lVar8 + lVar11;
          } while ((long)uVar9 < (long)(int)uVar29);
        }
        else {
          lVar11 = lVar12 * local_d0;
          local_148 = ZEXT416((uint)DAT_005d94c4);
          lVar8 = 0;
          uVar9 = 0;
          do {
            array_getcoordinate((float)local_e8._0_4_,(ulong)(uint)fVar13,local_128 & 0xffffffff,
                                in_XMM4._0_8_,in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                                in_XMM7._0_8_,(long)local_160,*(long *)(local_70 + 2) + lVar8,
                                local_100._0_4_,(ulong)local_150 & 0xffffffff,(ulong)local_ac,
                                uVar9 & 0xffffffff,(long)local_f8,(long)local_168,(long)local_120,
                                local_110,&local_118,&local_16c);
            fVar14 = local_16c;
            if (local_16c <= DAT_005d94d4) {
              fVar14 = DAT_005d94d4;
            }
            uVar27 = 0;
            fVar24 = local_110[0] - local_130._0_4_;
            in_XMM7 = ZEXT816(0);
            uVar29 = ((uint)fVar24 ^ (uint)_DAT_006524b0) & -(uint)(fVar24 < 0.0);
            in_XMM3 = ZEXT416(uVar29);
            fVar19 = (float)(~-(uint)(fVar24 < 0.0) & (uint)fVar24 | uVar29);
            if (fVar19 <= DAT_00651f38) {
              auVar32._4_4_ = uStack_44;
              auVar32._0_4_ = local_48;
              auVar32._8_4_ = uStack_40;
              auVar32._12_4_ = uStack_3c;
              in_XMM3._4_12_ = auVar32._4_12_;
              in_XMM3._0_4_ = (local_48 - fVar14) + local_118;
              fVar25 = local_118 - (float)local_98._0_4_;
              fVar24 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                              ((uint)fVar25 ^ (uint)_DAT_006524b0) & -(uint)(fVar25 < 0.0)) + fVar19
              ;
              if ((float)local_148._0_4_ <= fVar24) {
                fVar24 = (float)local_148._0_4_;
              }
              in_XMM5 = ZEXT416((uint)fVar24);
              fVar25 = fVar25 + fVar14;
              fVar14 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                              ((uint)fVar25 ^ (uint)_DAT_006524b0) & -(uint)(fVar25 < 0.0)) + fVar19
              ;
              if (fVar24 <= fVar14) {
                fVar14 = fVar24;
              }
              in_XMM4 = ZEXT416((uint)fVar14);
              fVar24 = (float)(((uint)in_XMM3._0_4_ ^ (uint)_DAT_006524b0) &
                              -(uint)(in_XMM3._0_4_ < 0.0));
              uVar27 = (uStack_44 ^ _UNK_006524b4) & uStack_44;
              fVar19 = (float)(~-(uint)(in_XMM3._0_4_ < 0.0) & (uint)in_XMM3._0_4_ | (uint)fVar24) +
                       fVar19;
              local_148 = in_XMM4;
              if (fVar19 < fVar14) {
                local_148._4_4_ = uVar27;
                local_148._0_4_ = fVar19;
                local_148._8_4_ = (uStack_40 ^ _UNK_006524b8) & uStack_40;
                local_148._12_4_ = (uStack_3c ^ _UNK_006524bc) & uStack_3c;
              }
            }
            uVar9 = uVar9 + lVar12;
            uVar29 = *local_70;
            lVar8 = lVar8 + lVar11;
            in_XMM6_Da = _DAT_006524b0;
            in_XMM6_Db = _UNK_006524b4;
          } while ((long)uVar9 < (long)(int)uVar29);
        }
        param_3 = CONCAT44(uVar27,fVar24);
        if ((float)local_148._0_4_ <= DAT_00651f38) {
          if (local_ec == 0.0) {
            return 0;
          }
          if (0 < (int)uVar29) {
            auVar18 = ZEXT416((uint)(float)((double)(float)local_148._0_4_ + DAT_00651e50));
            local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,iVar2 * local_a4);
            local_d0 = local_d0 * lVar12;
            uVar29 = 1;
            lVar11 = 0;
            local_154 = (float)local_a4;
            lVar8 = 0;
            local_148._0_4_ = (float)((double)(float)local_148._0_4_ + DAT_00651e50);
            do {
              local_104 = uVar29 - 1;
              uVar9 = (ulong)local_104;
              pcVar10 = (char *)(ulong)local_ac;
              array_getcoordinate((float)local_e8._0_4_,(ulong)(uint)fVar13,local_128 & 0xffffffff,
                                  in_XMM4._0_8_,auVar18._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                                  in_XMM7._0_8_,(long)local_160,*(long *)(local_70 + 2) + lVar11,
                                  local_100._0_4_,(ulong)local_150 & 0xffffffff,(ulong)pcVar10,uVar9
                                  ,(long)local_f8,(long)local_168,(long)local_120,local_110,
                                  &local_118,&local_16c);
              fVar24 = local_110[0];
              fVar14 = local_16c;
              if (local_16c < DAT_005d94d4) {
                local_16c = 4.0;
                fVar14 = DAT_005d94d4;
              }
              fVar25 = local_118 - (float)local_98._0_4_;
              fVar19 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                              ((uint)fVar25 ^ (uint)_DAT_006524b0) & -(uint)(fVar25 < 0.0));
              if ((int)local_ac < 0) {
                in_XMM4 = ZEXT416((uint)DAT_005d94c4);
                fVar14 = DAT_005d94c4;
              }
              else {
                fVar26 = DAT_005d94c4;
                if (-1 < local_150._0_4_) {
                  fVar26 = fVar19;
                }
                fVar25 = fVar25 + fVar14;
                fVar14 = (local_48 - fVar14) + local_118;
                auVar23._0_4_ = ((uint)fVar14 ^ (uint)_DAT_006524b0) & -(uint)(fVar14 < 0.0);
                auVar23._4_4_ = (uStack_44 ^ _UNK_006524b4) & uStack_44;
                auVar23._8_4_ = (uStack_40 ^ _UNK_006524b8) & uStack_40;
                auVar23._12_4_ = (uStack_3c ^ _UNK_006524bc) & uStack_3c;
                in_XMM4 = ZEXT416(~-(uint)(fVar14 < 0.0) & (uint)fVar14) | auVar23;
                fVar14 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 |
                                ((uint)fVar25 ^ (uint)_DAT_006524b0) & -(uint)(fVar25 < 0.0));
                fVar19 = fVar26;
              }
              in_XMM7 = ZEXT416((uint)fVar14);
              auVar18 = ZEXT416((uint)local_148._0_4_);
              fVar25 = local_110[0] - local_130._0_4_;
              uVar27 = ((uint)fVar25 ^ (uint)_DAT_006524b0) & -(uint)(fVar25 < 0.0);
              auVar32 = ZEXT416(uVar27);
              fVar25 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar25 | uVar27);
              fVar26 = fVar19 + fVar25;
              if (((fVar26 <= (float)local_148._0_4_) ||
                  (fVar26 = fVar14 + fVar25, fVar26 <= (float)local_148._0_4_)) ||
                 (fVar25 + in_XMM4._0_4_ <= (float)local_148._0_4_)) {
                uVar28 = 0;
                fVar13 = _DAT_006524b0;
                uVar27 = _UNK_006524b4;
                if ((fVar14 <= fVar19) || (in_XMM4._0_4_ <= fVar19)) {
                  local_148 = in_XMM4;
                  local_e8 = in_XMM7;
                  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                  lVar8 = *plVar5;
                  lVar12 = *(long *)(*(long *)(lVar8 + 0x48) + 8);
                  uVar3 = extraout_XMM1_Qa_03;
                  if ((float)local_148._0_4_ <= (float)local_e8._0_4_) {
                    *(undefined4 *)(lVar12 + 0xbc) = 1;
                  }
                  else {
                    *(undefined4 *)(lVar12 + 0xbc) = 0xffffffff;
                  }
                }
                else {
                  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                  lVar8 = *plVar5;
                  *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0x48) + 8) + 0xbc) = 0;
                  uVar3 = extraout_XMM1_Qa_01;
                }
                uVar15 = (ulong)(uint)fVar24;
                if (param_15 != 0) {
                  lVar12 = *(long *)(local_70 + 2);
                  if ((param_13 != 0) && (local_130._0_4_ < fVar24)) {
                    if ((int)*local_70 < 2) {
                      return 0;
                    }
                    memmove((void *)(lVar11 + lVar12),(void *)((int)local_154 + lVar12),
                            (long)(int)((*local_70 - uVar29) * local_a4));
                    array_resize_and_redraw
                              (extraout_XMM0_Qa_00,uVar3,CONCAT44(uVar28,fVar26),auVar32._0_8_,
                               in_XMM4._0_8_,auVar18._0_8_,CONCAT44(uVar27,fVar13),in_XMM7._0_8_,
                               (int *)local_70,(long *)local_160,*local_70 - 1);
                    return 0;
                  }
                  if (param_13 != 0) {
                    array_resize_and_redraw
                              (uVar15,uVar3,CONCAT44(uVar28,fVar26),auVar32._0_8_,in_XMM4._0_8_,
                               auVar18._0_8_,CONCAT44(uVar27,fVar13),in_XMM7._0_8_,(int *)local_70,
                               (long *)local_160,*local_70 + 1);
                    lVar12 = *(long *)(local_70 + 2);
                    memmove((void *)((int)local_154 + lVar12),(void *)(lVar11 + lVar12),
                            (long)(int)((*local_70 - uVar29) * local_a4));
                    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                    lVar8 = *plVar5;
                    uVar3 = extraout_XMM1_Qa_04;
                    uVar15 = extraout_XMM0_Qa_01;
                    local_104 = uVar29;
                  }
                  uVar29 = local_104;
                  uVar35 = in_XMM7._0_8_;
                  uVar34 = auVar18._0_8_;
                  uVar33 = in_XMM4._0_8_;
                  uVar30 = auVar32._0_8_;
                  lVar8 = *(long *)(*(long *)(lVar8 + 0x48) + 8);
                  if ((int)local_100._0_4_ < 0) {
                    *(undefined8 *)(lVar8 + 0x68) = 0;
                    *(undefined4 *)(lVar8 + 0x60) = 0;
                    *(long *)(lVar8 + 0x90) = lVar12;
                    *(uint *)(lVar8 + 0xa0) = *local_70;
                    *(float *)(lVar8 + 0xac) = (float)(int)local_104;
                    *(uint *)(lVar8 + 0xb8) = local_104;
                    if ((float)local_128 == 0.0) {
                      dVar20 = _DAT_005d9000;
                    }
                    else {
                      dVar20 = _DAT_005d9000 / (double)(float)local_128;
                    }
                    dVar20 = (double)*(float *)(lVar8 + 0xb0) * dVar20;
                    uVar15 = (ulong)(uint)(float)dVar20;
                    *(float *)(lVar8 + 0xb0) = (float)dVar20;
                  }
                  else {
                    *(char **)(lVar8 + 0x68) = local_f8;
                    lVar11 = (int)(local_104 * local_a4) + lVar12;
                    fVar14 = fielddesc_getcoord(uVar15,uVar3,CONCAT44(uVar28,fVar26),uVar30,uVar33,
                                                uVar34,CONCAT44(uVar27,fVar13),uVar35,local_f8,
                                                *(long *)(lVar8 + 0x98),lVar11,1,pcVar10,uVar9);
                    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                    uVar35 = in_XMM7._0_8_;
                    uVar34 = auVar18._0_8_;
                    uVar33 = in_XMM4._0_8_;
                    uVar30 = auVar32._0_8_;
                    lVar8 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
                    uVar15 = (ulong)(uint)fVar14;
                    *(float *)(lVar8 + 0x60) = fVar14;
                    *(long *)(lVar8 + 0x90) = lVar11;
                    dVar20 = extraout_XMM1_Qa_05;
                    if (param_12 == 0) {
                      *(undefined4 *)(lVar8 + 0xa0) = 1;
                    }
                    else {
                      *(uint *)(lVar8 + 0xa0) = *local_70 - uVar29;
                    }
                  }
                  if (*(int *)(lVar8 + 0xbc) == 0) {
                    if (local_150._0_4_ < 0) {
                      *(undefined8 *)(lVar8 + 0x70) = 0;
                      *(undefined4 *)(lVar8 + 100) = 0;
                    }
                    else {
                      *(char **)(lVar8 + 0x70) = local_168;
                      fVar13 = fielddesc_getcoord(uVar15,dVar20,CONCAT44(uVar28,fVar26),uVar30,
                                                  uVar33,uVar34,CONCAT44(uVar27,fVar13),uVar35,
                                                  local_168,*(long *)(lVar8 + 0x98),
                                                  lVar12 + (int)(uVar29 * local_a4),1,pcVar10,uVar9)
                      ;
                      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                      *(float *)(*(long *)(*(long *)(*plVar5 + 0x48) + 8) + 100) = fVar13;
                    }
                  }
                  else {
                    *(char **)(lVar8 + 0x70) = local_120;
                    fVar13 = fielddesc_getcoord(uVar15,dVar20,CONCAT44(uVar28,fVar26),uVar30,uVar33,
                                                uVar34,CONCAT44(uVar27,fVar13),uVar35,local_120,
                                                *(long *)(lVar8 + 0x98),
                                                lVar12 + (int)(uVar29 * local_a4),1,pcVar10,uVar9);
                    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                    lVar12 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
                    *(float *)(lVar12 + 100) = fVar13;
                    fVar13 = *(float *)(lVar12 + 0xb4);
                    if (fVar13 < 0.0) {
                      fVar13 = (float)((uint)fVar13 ^ (uint)_DAT_006524b0);
                      *(float *)(lVar12 + 0xb4) = fVar13;
                    }
                    *(float *)(lVar12 + 0xb4) = (float)-*(int *)(lVar12 + 0xbc) * fVar13;
                  }
                  glist_grab((long)local_160,0,0x526ed0,0,param_10,param_11);
                }
                if (param_13 == 0) {
                  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
                  return (ulong)(2 - (*(int *)(*(long *)(*(long *)(*plVar5 + 0x48) + 8) + 0xbc) == 0
                                     ));
                }
                return (ulong)((uint)(local_130._0_4_ < local_110[0]) * 3 + 3);
              }
              lVar8 = lVar8 + lVar12;
              uVar29 = uVar29 + iVar2;
              local_154 = (float)((int)local_154 + (int)local_d8);
              lVar11 = lVar11 + local_d0;
              in_XMM6_Da = _DAT_006524b0;
              in_XMM6_Db = _UNK_006524b4;
            } while (lVar8 < (int)*local_70);
          }
          goto LAB_00524887;
        }
      }
      if (local_154 != 0.0) {
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        if ((undefined8 *)(*plVar5 + 0x78) == local_d8) {
          return 0;
        }
        uVar3 = array_getfields(extraout_XMM0_Qa,extraout_XMM1_Qa_00,param_3,in_XMM3._0_8_,
                                in_XMM4._0_8_,in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                                in_XMM7._0_8_,local_d8,(long *)local_110,(undefined8 *)&local_118,
                                (int *)&local_16c,local_f8,(long)local_168,(long)local_120,&local_a0
                                ,&local_9c,&local_4c);
        if ((int)uVar3 != 0) {
          return 0;
        }
        uVar29 = *local_70;
        if ((int)uVar29 < 1) {
          return 0;
        }
        uVar27 = 1;
        if (1999 < uVar29) {
          uVar27 = uVar29 / 300;
        }
        local_130 = (double)(float)local_e8._0_4_;
        local_100 = (double)(float)local_128;
        local_120 = (char *)CONCAT44(uStack_114,local_118);
        local_128 = (ulong)uVar27;
        local_98._0_8_ = (long)(int)local_16c;
        local_148._0_8_ = (long)(int)local_16c * local_128;
        local_150 = 0.0;
        lVar8 = 0;
        lVar12 = 0;
        do {
          if ((int)local_a0 < 0) {
            uVar3 = CONCAT44((int)((ulong)(local_150 + local_130) >> 0x20),
                             (float)(local_150 + local_130));
            local_150 = local_150 + local_100;
            lVar11 = *(long *)(local_70 + 2);
            lVar6 = lVar12 * local_98._0_8_;
            if ((int)local_9c < 0) goto LAB_00524f0f;
LAB_00524e7b:
            fVar14 = *(float *)(lVar6 + lVar11 + (ulong)local_9c);
            auVar18 = ZEXT416((uint)fVar14);
            fVar24 = *(float *)(local_168 + 0x10);
            in_XMM3 = ZEXT416((uint)fVar24);
            fVar19 = *(float *)(local_168 + 0x14);
            param_3 = (ulong)(uint)fVar19;
            if (fVar19 != fVar24) {
              fVar26 = *(float *)(local_168 + 0x18);
              fVar25 = *(float *)(local_168 + 0x1c);
              in_XMM5 = ZEXT416((uint)fVar25);
              in_XMM6_Db = 0;
              in_XMM6_Da = fVar25 - fVar26;
              fVar24 = ((fVar14 - fVar24) * in_XMM6_Da) / (fVar19 - fVar24) + fVar26;
              fVar14 = fVar26;
              if (fVar25 <= fVar26) {
                fVar14 = fVar25;
              }
              if (fVar14 <= fVar24) {
                fVar14 = fVar24;
              }
              param_3 = (ulong)(uint)fVar14;
              if (fVar26 <= fVar25) {
                fVar26 = fVar25;
              }
              if (fVar14 <= fVar26) {
                fVar26 = fVar14;
              }
              auVar18 = ZEXT416((uint)fVar26);
              in_XMM4 = auVar18;
            }
          }
          else {
            lVar11 = *(long *)(local_70 + 2);
            fVar14 = *(float *)(lVar8 + lVar11 + (ulong)local_a0);
            auVar16 = ZEXT416((uint)fVar14);
            fVar24 = *(float *)(local_f8 + 0x10);
            param_3 = (ulong)(uint)fVar24;
            if (*(float *)(local_f8 + 0x14) != fVar24) {
              fVar19 = *(float *)(local_f8 + 0x18);
              auVar31._0_8_ = CONCAT44(0,fVar19);
              auVar31._8_4_ = 0;
              fVar25 = *(float *)(local_f8 + 0x1c);
              in_XMM4 = ZEXT416((uint)fVar25);
              in_XMM5 = ZEXT416((uint)(fVar25 - fVar19));
              fVar14 = ((fVar14 - fVar24) * (fVar25 - fVar19)) /
                       (*(float *)(local_f8 + 0x14) - fVar24) + fVar19;
              auVar21._8_4_ = 0;
              auVar21._0_8_ = auVar31._0_8_;
              if (fVar25 <= fVar19) {
                auVar21._4_8_ = 0;
                auVar21._0_4_ = fVar25;
              }
              if (auVar21._0_4_ <= fVar14) {
                auVar21._4_8_ = auVar21._4_8_;
                auVar21._0_4_ = fVar14;
              }
              if (fVar19 <= fVar25) {
                auVar31._4_8_ = 0;
                auVar31._0_4_ = fVar25;
              }
              if (auVar21._0_4_ <= auVar31._0_4_) {
                auVar31._4_8_ = auVar31._4_8_;
                auVar31._0_4_ = auVar21._0_4_;
              }
              auVar16._12_4_ = 0;
              auVar16._0_12_ = auVar31;
              in_XMM3 = auVar16;
            }
            auVar17._4_12_ = auVar16._4_12_;
            auVar17._0_4_ = auVar16._0_4_ + (float)local_e8._0_4_;
            uVar3 = auVar17._0_8_;
            lVar6 = lVar8;
            if (-1 < (int)local_9c) goto LAB_00524e7b;
LAB_00524f0f:
            auVar18 = ZEXT816(0);
          }
          auVar22._4_12_ = auVar18._4_12_;
          auVar22._0_4_ = auVar18._0_4_ + fVar13;
          uVar9 = scalar_doclick(uVar3,auVar22._0_8_,param_3,in_XMM3._0_8_,in_XMM4._0_8_,
                                 in_XMM5._0_8_,(double)CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_
                                 ,lVar11 + lVar6,(long)local_120,0,local_70,local_160,
                                 (ulong)param_10,param_11,param_12,param_13,param_14,param_15);
          if ((int)uVar9 != 0) {
            return uVar9 & 0xffffffff;
          }
          lVar12 = lVar12 + local_128;
          lVar8 = lVar8 + local_148._0_8_;
        } while (lVar12 < (int)*local_70);
      }
      return 0;
    }
    fVar13 = glist_pixelstox((ulong)(uint)(float)(int)param_10,uVar30,param_3,in_XMM3._0_8_,
                             in_XMM4._0_8_,in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                             in_XMM7._0_8_,(long)local_160,plVar5,PTR_garray_class_00715780,*plVar4,
                             local_78,local_80);
    iVar2 = (int)fVar13;
    if (iVar2 < 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *local_70 - 1;
      if (iVar2 < (int)*local_70) {
        iVar7 = iVar2;
      }
    }
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    *(char **)(*(long *)(*(long *)(*plVar4 + 0x48) + 8) + 0x70) = local_168;
    uVar3 = extraout_XMM1_Qa_02;
    fVar13 = glist_pixelstoy((ulong)(uint)(float)param_11,extraout_XMM1_Qa_02,param_3,in_XMM3._0_8_,
                             in_XMM4._0_8_,in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),
                             in_XMM7._0_8_,(long)local_160,plVar5,extraout_RDX_01,local_168,local_78
                             ,local_80);
    puVar1 = local_160;
    lVar12 = *(long *)(*(long *)(*plVar4 + 0x48) + 8);
    *(float *)(lVar12 + 100) = fVar13;
    *(undefined4 *)(lVar12 + 0xbc) = 0;
    *(undefined8 *)(lVar12 + 0x68) = 0;
    *(undefined4 *)(lVar12 + 0x60) = 0;
    *(float *)(lVar12 + 0xac) = (float)iVar7;
    *(int *)(lVar12 + 0xb8) = (int)(float)iVar7;
    *(uint *)(lVar12 + 0xa0) = *local_70;
    lVar8 = *(long *)(local_70 + 2);
    *(long *)(lVar12 + 0x90) = lVar8;
    if (param_15 != 0) {
      auVar18._0_4_ =
           glist_pixelstoy((ulong)(uint)(float)param_11,uVar3,param_3,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,
                           (long)local_160,plVar5,extraout_RDX_02,(long)iVar7,local_78,local_80);
      auVar18._4_12_ = extraout_var;
      fielddesc_setcoord(auVar18._0_8_,uVar3,param_3,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                         CONCAT44(in_XMM6_Db,in_XMM6_Da),in_XMM7._0_8_,local_168,local_60,
                         lVar8 + (long)iVar7 * 8,1,local_78,local_80);
      glist_grab((long)puVar1,0,0x526ed0,0,param_10,param_11);
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar12 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
      if (*(long *)(lVar12 + 0x80) != 0) {
        scalar_redraw(*(long *)(lVar12 + 0x80),*(long *)(lVar12 + 0x78));
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar12 = *(long *)(*(long *)(*plVar5 + 0x48) + 8);
      }
      if (*(long *)(lVar12 + 0x88) != 0) {
        array_redraw(*(long *)(lVar12 + 0x88),*(long *)(lVar12 + 0x78));
      }
    }
  }
LAB_00524887:
  return (ulong)(local_ec != 0.0);
}


