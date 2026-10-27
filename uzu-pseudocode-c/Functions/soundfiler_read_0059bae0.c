// Function : soundfiler_read
// Namespace: 
// Entry    : 0059bae0
// Prototype: undefined soundfiler_read(undefined8 param_1, ulong param_2, long param_3, long param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, double * param_11, int * param_12, double * param_13, double * param_14)
// Body     : 0059bae0 - 0059cdd6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void soundfiler_read(undefined8 param_1,ulong param_2,long param_3,long param_4,double param_5,
                    double param_6,double param_7,undefined8 param_8,long param_9,
                    undefined8 param_10,double *param_11,int *param_12,double *param_13,
                    double *param_14)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  double *pdVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  long *plVar13;
  long *plVar14;
  uint *puVar15;
  undefined7 extraout_var;
  int *piVar16;
  double *pdVar17;
  double *pdVar18;
  int *piVar19;
  double *extraout_RDX;
  double *extraout_RDX_00;
  double *extraout_RDX_01;
  double *extraout_RDX_02;
  double *extraout_RDX_03;
  double *extraout_RDX_04;
  double *extraout_RDX_05;
  double *extraout_RDX_06;
  double *extraout_RDX_07;
  double *extraout_RDX_08;
  double *extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  ulong extraout_RDX_12;
  ulong extraout_RDX_13;
  double *extraout_RDX_14;
  double *extraout_RDX_15;
  double *extraout_RDX_16;
  double *extraout_RDX_17;
  undefined8 extraout_RDX_18;
  undefined8 extraout_RDX_19;
  double *pdVar23;
  int *piVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  double dVar29;
  undefined4 *puVar30;
  double *pdVar31;
  uint uVar32;
  long lVar33;
  int *piVar34;
  char *pcVar35;
  int *piVar36;
  long lVar37;
  undefined8 *puVar38;
  float extraout_XMM0_Da;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qa_01;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar40 [16];
  undefined8 uVar39;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_02 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_XMM0_06 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined1 auVar41 [16];
  undefined1 extraout_XMM0_09 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar42 [16];
  undefined1 extraout_XMM0_10 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 extraout_XMM0_11 [16];
  undefined1 extraout_XMM0_12 [16];
  undefined8 extraout_XMM0_Qb_06;
  undefined1 extraout_var_00 [12];
  undefined1 auVar43 [16];
  undefined1 extraout_XMM0_13 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar44 [16];
  undefined4 in_stack_fffffffffffff6d8;
  undefined4 uVar45;
  long local_918;
  ulong local_900;
  long local_8f0;
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  ulong local_8b8;
  double *local_8a8;
  int local_89c;
  int *local_898;
  int local_88c;
  undefined8 local_888;
  float local_880;
  undefined4 local_878;
  float local_870;
  undefined4 local_868;
  float local_860;
  undefined4 local_858;
  float local_850;
  undefined4 local_848;
  undefined8 *local_840;
  long local_838 [64];
  long alStack_638 [64];
  double local_438 [129];
  
  pdVar20 = (double *)((ulong)param_11 & 0xffffffff);
  auVar40 = ZEXT816(0);
  local_8e8._4_12_ = auVar40._4_12_;
  local_8e8._0_4_ = 0xffffffff;
  local_8b8 = 0x7fffffffffffffff;
  local_8c8 = ZEXT816(0xffffffffffffffff);
  local_8d8 = auVar40;
  if ((int)param_11 < 1) {
    local_898 = (int *)0xffffffffffffffff;
    bVar5 = false;
    local_89c = 0;
    local_900 = 0;
    local_8f0 = -1;
    piVar19 = param_12;
LAB_0059bf6f:
    puVar38 = (undefined8 *)0x0;
    bVar8 = false;
  }
  else {
    local_8f0 = -1;
    puVar38 = (undefined8 *)0x0;
    local_918 = -1;
    bVar5 = false;
    bVar8 = false;
    local_89c = 0;
    local_898 = (int *)0xffffffffffffffff;
    local_900 = 0;
    do {
      if ((*param_12 != 2) || (*(char *)**(undefined8 **)(param_12 + 2) != '-')) break;
      pcVar35 = (char *)**(undefined8 **)(param_12 + 2) + 1;
      piVar19 = param_12;
      iVar9 = strcmp(pcVar35,"skip");
      uVar25 = (uint)pdVar20;
      if (iVar9 == 0) {
        piVar19 = param_12;
        param_11 = extraout_RDX;
        auVar40._0_8_ = extraout_XMM0_Qa;
        if ((uVar25 < 2) || (param_12[4] != 1)) goto LAB_0059c027;
        fVar1 = (float)param_12[6];
        auVar40._0_8_ = (ulong)(uint)fVar1;
        param_2 = 0;
        if (fVar1 < 0.0) goto LAB_0059c027;
        auVar40 = ZEXT416((uint)(fVar1 - _DAT_0065daf0));
        local_900 = (long)(fVar1 - _DAT_0065daf0) & (long)fVar1 >> 0x3f | (long)fVar1;
        lVar33 = 2;
        param_11 = (double *)0xfffffffe;
      }
      else {
        iVar9 = strcmp(pcVar35,"ascii");
        if (iVar9 == 0) {
          bVar8 = true;
          if (local_8f0 < 0) {
            local_918 = local_8f0;
            auVar40 = extraout_XMM0;
          }
          else {
            auVar40._0_8_ =
                 post(extraout_XMM0._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "\'-ascii\' overridden by \'-raw\'");
            auVar40._8_8_ = extraout_XMM0_Qb;
            local_918 = local_8f0;
          }
LAB_0059bbad:
          lVar33 = 1;
          param_11 = (double *)0xffffffff;
        }
        else {
          iVar9 = strcmp(pcVar35,"raw");
          if (iVar9 == 0) {
            if (bVar8) {
              auVar40._0_8_ =
                   post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "\'-ascii\' overridden by \'-raw\'");
              param_11 = extraout_RDX_03;
            }
            else {
              param_11 = extraout_RDX_00;
              auVar40._0_8_ = extraout_XMM0_Qa_00;
              if (puVar38 != (undefined8 *)0x0) {
                auVar40._0_8_ =
                     post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,"\'-%s\' overridden by \'-raw\'");
                param_11 = extraout_RDX_04;
              }
            }
            auVar43 = local_8c8;
            auVar41 = local_8d8;
            piVar19 = param_12;
            if ((uVar25 < 5) || (param_12[4] != 1)) goto LAB_0059c027;
            local_918 = (long)(float)param_12[6];
            local_8c8._0_8_ = local_918;
            if ((local_918 < 0) || (param_12[8] != 1)) goto LAB_0059c027;
            iVar9 = (int)(float)param_12[10];
            local_8d8._4_4_ = iVar9;
            if ((iVar9 - 0x41U < 0xffffffc0) || (param_12[0xc] != 1)) goto LAB_0059c027;
            iVar10 = (int)(float)param_12[0xe];
            local_8d8._12_4_ = auVar41._12_4_;
            local_8d8._8_4_ = iVar10;
            if ((iVar10 < 2) || (((2 < iVar10 - 2U && (iVar10 != 8)) || (param_12[0x10] != 2))))
            goto LAB_0059c027;
            cVar2 = *(char *)**(undefined8 **)(param_12 + 0x12);
            local_89c = 1;
            piVar19 = (int *)0x1;
            if (cVar2 != 'b') {
              if ((cVar2 != 'n') && (cVar2 != 'l')) goto LAB_0059c027;
              piVar19 = (int *)0x0;
            }
            local_8c8._12_4_ = auVar43._12_4_;
            local_8c8._8_4_ = (int)piVar19;
            sys_getsr();
            local_8d8._0_4_ = (int)extraout_XMM0_02._0_4_;
            local_8c8._12_4_ = iVar10 * iVar9;
            lVar33 = 5;
            param_11 = (double *)0xfffffffb;
            auVar40 = extraout_XMM0_02;
            local_8f0 = local_918;
          }
          else {
            iVar9 = strcmp(pcVar35,"resize");
            lVar33 = 1;
            if (iVar9 == 0) {
              bVar5 = true;
              auVar40 = extraout_XMM0_00;
              goto LAB_0059bbad;
            }
            iVar9 = strcmp(pcVar35,"maxsize");
            if (iVar9 == 0) {
              piVar19 = param_12;
              param_11 = extraout_RDX_01;
              auVar40._0_8_ = extraout_XMM0_Qa_01;
              if ((uVar25 < 2) || (param_12[4] != 1)) goto LAB_0059c027;
              fVar1 = (float)param_12[6];
              auVar40._0_8_ = CONCAT44(0,fVar1);
              auVar40._8_8_ = 0;
              param_2 = 0;
              if (fVar1 < 0.0) goto LAB_0059c027;
              param_2 = (ulong)(uint)(fVar1 - _DAT_0065daf0);
              local_898 = (int *)((long)(fVar1 - _DAT_0065daf0) & (long)fVar1 >> 0x3f | (long)fVar1)
              ;
              if (_DAT_0065daf4 < fVar1) {
                local_898 = (int *)0xffffffffffffffff;
              }
              lVar33 = 2;
              param_11 = (double *)0xfffffffe;
              bVar5 = true;
            }
            else {
              lVar26 = sf_numtypes * 8;
              lVar37 = 0;
              local_8a8 = pdVar20;
              while( true ) {
                puVar38 = *(undefined8 **)((long)&sf_types + lVar37);
                iVar9 = strcmp(pcVar35,(char *)*puVar38);
                if (iVar9 == 0) break;
                lVar37 = lVar37 + 8;
                if (lVar26 == lVar37) {
                  local_8e8._8_8_ = 0;
                  param_11 = extraout_RDX_02;
                  auVar40._0_8_ = extraout_XMM0_01._0_8_;
                  goto LAB_0059c022;
                }
              }
              local_8e8._8_8_ = puVar38;
              auVar40 = extraout_XMM0_01;
              if (-1 < local_918) {
                auVar40._0_8_ =
                     post(extraout_XMM0_01._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,"\'-%s\' overridden by \'-raw\'");
                auVar40._8_8_ = extraout_XMM0_Qb_00;
              }
              bVar8 = false;
              param_11 = (double *)0xffffffff;
              pdVar20 = local_8a8;
            }
          }
        }
      }
      param_12 = param_12 + lVar33 * 4;
      iVar9 = (int)pdVar20;
      uVar25 = iVar9 + (int)param_11;
      pdVar20 = (double *)(ulong)uVar25;
    } while (uVar25 != 0 && SCARRY4(iVar9,(int)param_11) == (int)uVar25 < 0);
    piVar19 = param_12;
    if (-1 < local_8f0) {
      local_8e8._8_8_ = 0;
      goto LAB_0059bf6f;
    }
  }
  uVar25 = (uint)pdVar20;
  if ((uVar25 - 0x42 < 0xffffffbf) || (*piVar19 != 2)) goto LAB_0059c027;
  pdVar17 = (double *)**(undefined8 **)(piVar19 + 2);
  uVar32 = uVar25 - 1;
  param_11 = pdVar20;
  if ((bVar8) || ((puVar38 != (undefined8 *)0x0 || (-1 < local_8f0)))) {
LAB_0059c19b:
    uVar39 = auVar40._0_8_;
    if (1 < uVar25) goto LAB_0059c1a4;
    if (bVar8) goto LAB_0059c291;
    bVar8 = false;
    piVar34 = (int *)0x0;
LAB_0059c33f:
    uVar45 = 1;
    param_13 = (double *)&local_888;
    param_14 = (double *)0x3e8;
    iVar9 = canvas_open(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)(param_9 + 0x38),(char *)pdVar17,"",(char *)local_438,param_13,1000
                        ,1);
    if (-1 < iVar9) {
      pcVar35 = local_8e8;
      iVar9 = open_soundfile_via_fd(iVar9,(int *)pcVar35,local_900);
      piVar19 = local_898;
      if (-1 < iVar9) {
        piVar24 = (int *)(long)(int)local_8c8._12_4_;
        if ((local_8b8 | (ulong)piVar24) >> 0x20 == 0) {
          piVar16 = (int *)((local_8b8 & 0xffffffff) / (ulong)(uint)local_8c8._12_4_);
          auVar40._0_8_ = (local_8b8 & 0xffffffff) % (ulong)(uint)local_8c8._12_4_;
        }
        else {
          piVar16 = (int *)((long)local_8b8 / (long)piVar24);
          auVar40._0_8_ = (long)local_8b8 % (long)piVar24;
        }
        auVar41 = extraout_XMM0_06;
        local_8a8 = pdVar17;
        if (bVar5) {
          piVar34 = piVar16;
          if (local_898 < piVar16) {
            pcVar35 = "[soundfiler] read: truncated to %ld elements";
            auVar41._0_8_ =
                 pd_error(extraout_XMM0_06._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,"[soundfiler] read: truncated to %ld elements",local_898,
                          piVar24,(char *)param_13,param_14);
            auVar41._8_8_ = extraout_XMM0_Qb_03;
            auVar40._0_8_ = extraout_RDX_10;
            piVar34 = piVar19;
          }
          piVar16 = piVar34;
          if (bVar8) {
            plVar14 = local_838;
            uVar27 = 0;
            do {
              lVar33 = alStack_638[uVar27];
              uVar39 = garray_resize_long(auVar41._0_8_,param_2,param_3,param_4,param_5,param_6,
                                          param_7,param_8,lVar33,(ulong)piVar34,auVar40._0_8_,
                                          piVar24,(char *)param_13,(ulong)param_14);
              uVar39 = garray_setsaveit(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,lVar33,0);
              pcVar35 = (char *)local_438;
              uVar39 = garray_getfloatwords
                                 (uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  lVar33,(undefined4 *)local_438,plVar14,piVar24,(char *)param_13,
                                  param_14);
              if (((int)uVar39 == 0) || (piVar34 != (int *)(long)local_438[0]._0_4_)) {
                piVar36 = (int *)0x0;
                pd_error(extraout_XMM0_07._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,param_9,"[soundfiler] read: resize failed",extraout_RDX_11,piVar24,
                         (char *)param_13,param_14);
                goto LAB_0059cc1c;
              }
              uVar27 = uVar27 + 1;
              plVar14 = plVar14 + 1;
              auVar40._0_8_ = extraout_RDX_11;
              auVar41 = extraout_XMM0_07;
            } while (uVar32 != uVar27);
          }
          else {
            bVar8 = false;
          }
        }
        piVar34 = (int *)(-(ulong)(piVar34 == (int *)0x0) | (ulong)piVar34);
        piVar36 = piVar34;
        if (piVar16 < piVar34) {
          piVar36 = piVar16;
        }
        if ((long)piVar16 < 0) {
          piVar36 = piVar34;
        }
        if (((uVar32 != 0) || (local_89c != 0)) || (piVar36 == (int *)0xffffffffffffffff)) {
          piVar19 = (int *)(ulong)(uint)local_8c8._12_4_;
          pdVar20 = (double *)(0x400 % (long)(int)local_8c8._12_4_ & 0xffffffff);
          piVar34 = (int *)0x0;
          if (piVar36 != (int *)0x0) {
            auVar40._0_8_ = (ulong)(int)(0x400 / (long)(int)local_8c8._12_4_);
            piVar34 = (int *)0x0;
            while( true ) {
              uVar27 = (long)piVar36 - (long)piVar34;
              if (auVar40._0_8_ < (ulong)((long)piVar36 - (long)piVar34)) {
                uVar27 = auVar40._0_8_;
              }
              pcVar35 = (char *)local_438;
              uVar27 = read(local_8e8._0_4_,pcVar35,(long)(int)piVar19 * uVar27);
              param_2 = (ulong)DAT_0065db08;
              piVar19 = (int *)(long)(int)local_8c8._12_4_;
              if ((uVar27 | (ulong)piVar19) >> 0x20 == 0) {
                pdVar17 = (double *)((uVar27 & 0xffffffff) / (ulong)(uint)local_8c8._12_4_);
                pdVar20 = (double *)((uVar27 & 0xffffffff) % (ulong)(uint)local_8c8._12_4_);
              }
              else {
                pdVar17 = (double *)((long)uVar27 / (long)piVar19);
                pdVar20 = (double *)((long)uVar27 % (long)piVar19);
              }
              auVar41 = extraout_XMM0_08;
              if ((long)pdVar17 < 1) break;
              uVar25 = uVar32;
              if ((int)local_8d8._4_4_ < (int)uVar32) {
                uVar25 = local_8d8._4_4_;
              }
              pdVar21 = (double *)(ulong)uVar25;
              pdVar20 = pdVar21;
              if (0 < (int)uVar25) {
                uVar27 = (ulong)(uint)local_8d8._8_4_;
                param_13 = (double *)((long)pdVar17 - 1);
                pdVar23 = (double *)((ulong)pdVar17 & 0xfffffffffffffffe);
                param_14 = (double *)0x0;
                pdVar31 = local_438;
                do {
                  switch((int)uVar27) {
                  case 2:
                    pcVar35 = (char *)((long)piVar34 * 8 + local_838[(long)param_14]);
                    pdVar18 = pdVar23;
                    pdVar20 = pdVar31;
                    pdVar6 = param_13;
                    if (local_8c8._8_4_ == 0) {
                      while (pdVar6 != (double *)0x0) {
                        *(float *)pcVar35 =
                             (float)((double)(int)((uint)*(byte *)pdVar20 << 0x10 |
                                                  (uint)*(byte *)((long)pdVar20 + 1) << 0x18) *
                                    (double)param_2);
                        lVar33 = (long)(int)local_8c8._12_4_;
                        dVar29 = (double)(int)((uint)*(byte *)((long)pdVar20 + lVar33) << 0x10 |
                                              (uint)*(byte *)((long)pdVar20 + lVar33 + 1) << 0x18) *
                                 (double)param_2;
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_8_ = (ulong)dVar29 >> 0x20;
                        auVar41._12_4_ = 0;
                        *(float *)((long)pcVar35 + 8) = auVar41._0_4_;
                        pcVar35 = (char *)((long)pcVar35 + 0x10);
                        pdVar18 = (double *)((long)pdVar18 - 2);
                        pdVar20 = (double *)((long)pdVar20 + (int)local_8c8._12_4_ + lVar33);
                        pdVar6 = pdVar18;
                      }
                      if (((ulong)pdVar17 & 1) != 0) {
                        bVar3 = *(byte *)((long)pdVar20 + 1);
                        bVar4 = *(byte *)pdVar20;
                        goto LAB_0059c839;
                      }
                    }
                    else {
                      while (pdVar6 != (double *)0x0) {
                        *(float *)pcVar35 =
                             (float)((double)(int)((uint)*(byte *)((long)pdVar20 + 1) << 0x10 |
                                                  (uint)*(byte *)pdVar20 << 0x18) * (double)param_2)
                        ;
                        lVar33 = (long)(int)local_8c8._12_4_;
                        dVar29 = (double)(int)((uint)*(byte *)((long)pdVar20 + lVar33 + 1) << 0x10 |
                                              (uint)*(byte *)((long)pdVar20 + lVar33) << 0x18) *
                                 (double)param_2;
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_8_ = (ulong)dVar29 >> 0x20;
                        auVar41._12_4_ = 0;
                        *(float *)((long)pcVar35 + 8) = auVar41._0_4_;
                        pcVar35 = (char *)((long)pcVar35 + 0x10);
                        pdVar18 = (double *)((long)pdVar18 - 2);
                        pdVar20 = (double *)((long)pdVar20 + (int)local_8c8._12_4_ + lVar33);
                        pdVar6 = pdVar18;
                      }
                      if (((ulong)pdVar17 & 1) != 0) {
                        bVar3 = *(byte *)pdVar20;
                        bVar4 = *(byte *)((long)pdVar20 + 1);
LAB_0059c839:
                        uVar25 = (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18;
                        pdVar20 = (double *)(ulong)uVar25;
                        dVar29 = (double)(int)uVar25 * (double)param_2;
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_8_ = (ulong)dVar29 >> 0x20;
                        auVar41._12_4_ = 0;
                        *(float *)pcVar35 = auVar41._0_4_;
                      }
                    }
                    break;
                  case 3:
                    pcVar35 = (char *)((long)piVar34 * 8 + local_838[(long)param_14]);
                    if (local_8c8._8_4_ == 0) {
                      pdVar18 = (double *)0x0;
                      pdVar20 = pdVar31;
                      do {
                        dVar29 = (double)(int)((uint)*(byte *)pdVar20 << 8 |
                                              (uint)*(byte *)((long)pdVar20 + 1) << 0x10 |
                                              (uint)*(byte *)((long)pdVar20 + 2) << 0x18) *
                                 (double)param_2;
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_8_ = (ulong)dVar29 >> 0x20;
                        auVar41._12_4_ = 0;
                        *(float *)((long)pcVar35 + pdVar18 * 8) = auVar41._0_4_;
                        pdVar18 = (double *)((long)pdVar18 + 1);
                        pdVar20 = (double *)((long)pdVar20 + (long)(int)local_8c8._12_4_);
                      } while (pdVar17 != pdVar18);
                    }
                    else {
                      pdVar18 = (double *)0x0;
                      pdVar20 = pdVar31;
                      do {
                        dVar29 = (double)(int)((uint)*(byte *)((long)pdVar20 + 2) << 8 |
                                              (uint)*(byte *)((long)pdVar20 + 1) << 0x10 |
                                              (uint)*(byte *)pdVar20 << 0x18) * (double)param_2;
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_8_ = (ulong)dVar29 >> 0x20;
                        auVar41._12_4_ = 0;
                        *(float *)((long)pcVar35 + pdVar18 * 8) = auVar41._0_4_;
                        pdVar18 = (double *)((long)pdVar18 + 1);
                        pdVar20 = (double *)((long)pdVar20 + (long)(int)local_8c8._12_4_);
                      } while (pdVar17 != pdVar18);
                    }
                    break;
                  case 4:
                    pcVar35 = (char *)((long)piVar34 * 8 + local_838[(long)param_14]);
                    pdVar20 = pdVar23;
                    pdVar18 = pdVar31;
                    pdVar6 = param_13;
                    pdVar22 = pdVar23;
                    if (local_8c8._8_4_ == 0) {
                      while (pdVar6 != (double *)0x0) {
                        *(int *)pcVar35 = *(int *)pdVar18;
                        *(int *)((long)pcVar35 + 8) =
                             *(int *)((long)pdVar18 + (long)(int)local_8c8._12_4_);
                        pcVar35 = (char *)((long)pcVar35 + 0x10);
                        pdVar20 = (double *)((long)pdVar20 - 2);
                        pdVar18 = (double *)
                                  ((long)pdVar18 +
                                  (long)(int)local_8c8._12_4_ + (long)(int)local_8c8._12_4_);
                        pdVar6 = pdVar20;
                      }
                      if (((ulong)pdVar17 & 1) != 0) {
                        uVar25 = *(uint *)pdVar18;
                        goto LAB_0059c59a;
                      }
                    }
                    else {
                      while (pdVar6 != (double *)0x0) {
                        uVar25 = *(uint *)pdVar18;
                        *(uint *)pcVar35 =
                             uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                             uVar25 << 0x18;
                        uVar25 = *(uint *)((long)pdVar18 + (long)(int)local_8c8._12_4_);
                        *(uint *)((long)pcVar35 + 8) =
                             uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
                             uVar25 << 0x18;
                        pcVar35 = (char *)((long)pcVar35 + 0x10);
                        pdVar22 = (double *)((long)pdVar22 - 2);
                        pdVar20 = (double *)0x0;
                        pdVar18 = (double *)
                                  ((long)pdVar18 +
                                  (long)(int)local_8c8._12_4_ + (long)(int)local_8c8._12_4_);
                        pdVar6 = pdVar22;
                      }
                      if (((ulong)pdVar17 & 1) != 0) {
                        uVar25 = *(uint *)pdVar18;
                        uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8
                                 | uVar25 << 0x18;
LAB_0059c59a:
                        *(uint *)pcVar35 = uVar25;
                      }
                    }
                    break;
                  case 8:
                    pdVar20 = (double *)((long)piVar34 * 8 + local_838[(long)param_14]);
                    pcVar35 = (char *)pdVar31;
                    if (local_8c8._8_4_ == 0) {
                      pdVar18 = (double *)0x0;
                      do {
                        auVar41._0_4_ = (float)*(double *)pcVar35;
                        auVar41._4_4_ = (int)((ulong)*(double *)pcVar35 >> 0x20);
                        auVar41._8_8_ = 0;
                        *(float *)(pdVar20 + (long)pdVar18) = auVar41._0_4_;
                        pdVar18 = (double *)((long)pdVar18 + 1);
                        pcVar35 = (char *)((long)pcVar35 + (long)(int)local_8c8._12_4_);
                      } while (pdVar17 != pdVar18);
                    }
                    else {
                      pdVar18 = (double *)0x0;
                      do {
                        dVar29 = *(double *)pcVar35;
                        dVar29 = (double)((ulong)dVar29 >> 0x38 |
                                          ((ulong)dVar29 & 0xff000000000000) >> 0x28 |
                                          ((ulong)dVar29 & 0xff0000000000) >> 0x18 |
                                          ((ulong)dVar29 & 0xff00000000) >> 8 |
                                          ((ulong)dVar29 & 0xff000000) << 8 |
                                          ((ulong)dVar29 & 0xff0000) << 0x18 |
                                          ((ulong)dVar29 & 0xff00) << 0x28 | (long)dVar29 << 0x38);
                        auVar41._0_4_ = (float)dVar29;
                        auVar41._4_4_ = (int)((ulong)dVar29 >> 0x20);
                        auVar41._8_8_ = 0;
                        *(float *)(pdVar20 + (long)pdVar18) = auVar41._0_4_;
                        pdVar18 = (double *)((long)pdVar18 + 1);
                        pcVar35 = (char *)((long)pcVar35 + (long)(int)local_8c8._12_4_);
                      } while (pdVar17 != pdVar18);
                    }
                  }
                  param_14 = (double *)((long)param_14 + 1);
                  uVar27 = (ulong)(int)local_8d8._8_4_;
                  pdVar31 = (double *)((long)pdVar31 + uVar27);
                } while (param_14 != pdVar21);
              }
              piVar19 = (int *)(ulong)(uint)local_8d8._4_4_;
              if ((int)local_8d8._4_4_ < (int)uVar32) {
                piVar19 = (int *)(long)(int)local_8d8._4_4_;
                pdVar20 = (double *)((long)pdVar17 - 1);
                uVar27 = (ulong)((uint)pdVar17 & 7);
                do {
                  puVar30 = (undefined4 *)local_838[(long)piVar19];
                  pdVar21 = pdVar17;
                  if (uVar27 != 0) {
                    uVar28 = uVar27;
                    do {
                      pdVar21 = (double *)((long)pdVar21 - 1);
                      *puVar30 = 0;
                      puVar30 = puVar30 + 2;
                      uVar28 = uVar28 - 1;
                    } while (uVar28 != 0);
                    pcVar35 = (char *)0x0;
                  }
                  if ((double *)0x6 < pdVar20) {
                    pcVar35 = (char *)0x0;
                    do {
                      puVar30[(long)pcVar35 * 2] = 0;
                      puVar30[(long)pcVar35 * 2 + 2] = 0;
                      puVar30[(long)pcVar35 * 2 + 4] = 0;
                      puVar30[(long)pcVar35 * 2 + 6] = 0;
                      puVar30[(long)pcVar35 * 2 + 8] = 0;
                      puVar30[(long)pcVar35 * 2 + 10] = 0;
                      puVar30[(long)pcVar35 * 2 + 0xc] = 0;
                      puVar30[(long)pcVar35 * 2 + 0xe] = 0;
                      pcVar35 = (char *)((long)pcVar35 + 8);
                    } while (pdVar21 != (double *)pcVar35);
                  }
                  piVar19 = (int *)((long)piVar19 + 1);
                } while (piVar19 != (int *)(long)(int)uVar32);
              }
              piVar34 = (int *)((long)piVar34 + (long)pdVar17);
              if (piVar36 <= piVar34) break;
              piVar19 = (int *)(ulong)(uint)local_8c8._12_4_;
            }
            if ((bVar5) && (piVar34 < piVar36)) {
              piVar19 = piVar34;
              pcVar35 = (char *)local_8a8;
              auVar41._0_8_ =
                   post(auVar41._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "warning: soundfile %s header promised %ld points but file was truncated to %ld"
                       );
              auVar41._8_8_ = extraout_XMM0_Qb_05;
              pdVar20 = extraout_RDX_14;
            }
          }
          piVar36 = piVar34;
          if (bVar8) {
            auVar40._0_8_ = 0;
            do {
              pcVar35 = (char *)&local_888;
              uVar39 = garray_getfloatwords
                                 (auVar41._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8,alStack_638[auVar40._0_8_],(undefined4 *)&local_888,
                                  local_838 + auVar40._0_8_,piVar19,(char *)param_13,param_14);
              if (((int)uVar39 != 0) && (piVar36 < (int *)(long)(int)local_888)) {
                piVar34 = piVar36;
                do {
                  *(undefined4 *)(local_838[auVar40._0_8_] + (long)piVar34 * 8) = 0;
                  piVar34 = (int *)((long)piVar34 + 1);
                  piVar19 = (int *)(long)(int)local_888;
                } while (piVar34 < piVar19);
              }
              auVar40._0_8_ = auVar40._0_8_ + 1;
              pdVar20 = extraout_RDX_15;
              auVar41 = extraout_XMM0_11;
            } while (auVar40._0_8_ != uVar32);
          }
          lVar33 = (long)(int)local_8d8._4_4_;
          if ((int)local_8d8._4_4_ < (int)uVar32) {
            do {
              pcVar35 = (char *)&local_88c;
              uVar39 = garray_getfloatwords
                                 (auVar41._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8,alStack_638[lVar33],&local_88c,&local_888,piVar19,
                                  (char *)param_13,param_14);
              if (((int)uVar39 != 0) && (local_88c != 0)) {
                piVar34 = (int *)0x0;
                do {
                  *(undefined4 *)(CONCAT44(local_888._4_4_,(int)local_888) + (long)piVar34 * 8) = 0;
                  piVar34 = (int *)((long)piVar34 + 1);
                  piVar19 = (int *)(long)local_88c;
                } while (piVar34 < piVar19);
              }
              lVar33 = lVar33 + 1;
              pdVar20 = extraout_RDX_16;
              auVar41 = extraout_XMM0_12;
            } while (uVar32 != (uint)lVar33);
          }
          if (bVar8) {
            auVar40._0_8_ = 0;
            do {
              auVar41._0_8_ =
                   garray_redraw(auVar41._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,alStack_638[auVar40._0_8_],pcVar35,pdVar20,piVar19,param_13
                                 ,param_14,(char)uVar45);
              auVar41._8_8_ = extraout_XMM0_Qb_06;
              auVar40._0_8_ = auVar40._0_8_ + 1;
              pdVar20 = extraout_RDX_17;
            } while (uVar32 != auVar40._0_8_);
          }
        }
LAB_0059cc1c:
        local_8e8._0_4_ = 0xffffffff;
        if (-1 < iVar9) {
          sys_close(iVar9);
        }
        goto LAB_0059c074;
      }
    }
    piVar19 = __errno_location();
    param_13 = (double *)local_8e8;
    object_sferror(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,"[soundfiler] read",(char *)pdVar17,*piVar19,(long)param_13,param_14);
    piVar36 = (int *)0x0;
  }
  else {
    sVar12 = strnlen((char *)pdVar17,1000);
    bVar8 = false;
    if ((int)sVar12 < 5) {
      param_11 = extraout_RDX_05;
      auVar40 = extraout_XMM0_03;
      goto LAB_0059c19b;
    }
    iVar9 = strncmp((char *)((ulong)((int)sVar12 - 4) + (long)pdVar17),".txt",4);
    uVar39 = extraout_XMM0_04._0_8_;
    param_11 = extraout_RDX_06;
    auVar40 = extraout_XMM0_04;
    if (iVar9 != 0) goto LAB_0059c19b;
    bVar8 = true;
    if (uVar25 < 2) goto LAB_0059c291;
LAB_0059c1a4:
    puVar7 = PTR_garray_class_00715780;
    uVar27 = (ulong)uVar32;
    lVar33 = 0;
    piVar34 = (int *)0x0;
    local_8a8 = pdVar17;
    do {
      if (*(int *)((long)piVar19 + lVar33 * 2 + 0x10) != 2) goto LAB_0059c022;
      piVar24 = piVar19;
      plVar14 = pd_findbyclass(auVar40._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                               ,*(long *)((long)piVar19 + lVar33 * 2 + 0x18),*(long *)puVar7);
      *(long **)((long)alStack_638 + lVar33) = plVar14;
      if (plVar14 == (long *)0x0) {
        piVar36 = (int *)0x0;
        pd_error(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,"[soundfiler] read: %s: no such table",
                 **(undefined8 **)((long)piVar19 + lVar33 * 2 + 0x18),piVar24,(char *)param_13,
                 param_14);
        goto LAB_0059c06c;
      }
      uVar39 = garray_getfloatwords
                         (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)plVar14,(undefined4 *)local_438,
                          (undefined8 *)((long)local_838 + lVar33),piVar24,(char *)param_13,param_14
                         );
      param_11 = extraout_RDX_07;
      auVar40 = extraout_XMM0_05;
      if ((int)uVar39 == 0) {
        auVar40._0_8_ =
             pd_error(extraout_XMM0_05._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                      ,param_9,"[soundfiler] read: %s: bad template for tabwrite",
                      **(undefined8 **)((long)piVar19 + lVar33 * 2 + 0x18),piVar24,(char *)param_13,
                      param_14);
        auVar40._8_8_ = extraout_XMM0_Qb_01;
        param_11 = extraout_RDX_08;
      }
      if (((piVar34 != (int *)0x0) && (piVar34 != (int *)(long)local_438[0]._0_4_)) && (!bVar5)) {
        auVar40._0_8_ =
             post(auVar40._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "arrays have different lengths, resizing...");
        auVar40._8_8_ = extraout_XMM0_Qb_02;
        bVar5 = true;
        param_11 = extraout_RDX_09;
      }
      iVar9 = local_438[0]._0_4_;
      pdVar20 = local_8a8;
      uVar39 = auVar40._0_8_;
      piVar34 = (int *)(long)local_438[0]._0_4_;
      lVar33 = lVar33 + 8;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    if (!bVar8) {
      bVar8 = true;
      pdVar17 = local_8a8;
      goto LAB_0059c33f;
    }
    if (uVar32 == 0) {
LAB_0059c291:
      piVar36 = (int *)0x0;
      pd_error(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "[soundfiler] read: \'-ascii\' requires at least one table",param_11,piVar19,
               (char *)param_13,param_14);
    }
    else {
      puVar15 = binbuf_new();
      piVar19 = (int *)0x0;
      bVar8 = binbuf_read_via_canvas
                        (extraout_XMM0_Qa_04,param_2,param_3,param_4,(long)param_5,param_6,param_7,
                         param_8,puVar15,(char *)pdVar20,*(long *)(param_9 + 0x38),0);
      if ((int)CONCAT71(extraout_var,bVar8) == 0) {
        lVar33 = binbuf_getvec((long)puVar15);
        iVar10 = binbuf_getnatom(puVar15);
        piVar24 = local_898;
        iVar11 = iVar10 / (int)uVar32;
        auVar40._0_8_ = (long)iVar10 % (long)(int)uVar32 & 0xffffffff;
        if (0 < iVar11) {
          piVar36 = (int *)(long)iVar11;
          if (bVar5) {
            auVar42 = extraout_XMM0_09;
            if (local_898 < piVar36) {
              auVar42._0_8_ =
                   pd_error(extraout_XMM0_09._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,"[soundfiler] read: truncated to %ld elements",local_898
                            ,piVar19,(char *)param_13,param_14);
              auVar42._8_8_ = extraout_XMM0_Qb_04;
              auVar40._0_8_ = extraout_RDX_12;
              piVar36 = piVar24;
            }
            piVar36 = (int *)((long)piVar36 - local_900);
            uVar27 = 1;
            if (1 < (int)uVar32) {
              uVar27 = (ulong)uVar32;
            }
            lVar26 = 0;
            do {
              lVar37 = *(long *)((long)alStack_638 + lVar26);
              uVar39 = garray_resize_long(auVar42._0_8_,param_2,param_3,param_4,param_5,param_6,
                                          param_7,param_8,lVar37,(ulong)piVar36,auVar40._0_8_,
                                          piVar19,(char *)param_13,(ulong)param_14);
              uVar39 = garray_setsaveit(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,lVar37,0);
              uVar39 = garray_getfloatwords
                                 (uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  lVar37,(undefined4 *)local_438,
                                  (undefined8 *)((long)local_838 + lVar26),piVar19,(char *)param_13,
                                  param_14);
              if (((int)uVar39 == 0) || (piVar36 != (int *)(long)local_438[0]._0_4_)) {
                pd_error(extraout_XMM0_10._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8,param_9,"[soundfiler] read: resize failed",extraout_RDX_13,piVar19,
                         (char *)param_13,param_14);
                goto LAB_0059c31a;
              }
              lVar26 = lVar26 + 8;
              auVar40._0_8_ = extraout_RDX_13;
              auVar43 = extraout_XMM0_10;
              auVar42 = extraout_XMM0_10;
            } while (uVar27 * 8 != lVar26);
          }
          else {
            piVar36 = (int *)((long)piVar36 - local_900);
            auVar43 = extraout_XMM0_09;
            if (iVar9 <= iVar11) {
              piVar36 = piVar34;
            }
          }
          if (0 < (long)piVar36) {
            lVar26 = (long)(int)uVar32;
            lVar37 = local_900 * lVar26;
            piVar34 = (int *)0x0;
            if ((long)local_900 < 1) {
              lVar37 = 0;
            }
            piVar19 = (int *)(lVar37 * 0x10);
            piVar24 = (int *)(lVar33 + (long)piVar19);
            lVar33 = 1;
            if (1 < lVar26) {
              lVar33 = lVar26;
            }
            do {
              lVar26 = 0;
              piVar16 = piVar24;
              do {
                piVar24 = piVar16 + 4;
                auVar43._0_4_ = atom_getfloat(piVar16);
                auVar43._4_12_ = extraout_var_00;
                *(int *)(local_838[lVar26] + (long)piVar34 * 8) = auVar43._0_4_;
                lVar26 = lVar26 + 1;
                piVar16 = piVar24;
              } while (lVar33 != lVar26);
              piVar34 = (int *)((long)piVar34 + 1);
            } while (piVar34 != piVar36);
          }
          iVar9 = (int)piVar36;
          auVar40._0_8_ = 1;
          if (1 < (int)uVar32) {
            auVar40._0_8_ = (ulong)uVar32;
          }
          uVar27 = 0;
          do {
            piVar34 = (int *)local_438;
            uVar39 = garray_getfloatwords
                               (auVar43._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,alStack_638[uVar27],(undefined4 *)local_438,
                                local_838 + uVar27,piVar19,(char *)param_13,param_14);
            if (((int)uVar39 != 0) && (iVar9 < local_438[0]._0_4_)) {
              lVar33 = (long)iVar9;
              do {
                *(undefined4 *)(local_838[uVar27] + lVar33 * 8) = 0;
                lVar33 = lVar33 + 1;
                piVar19 = (int *)(long)local_438[0]._0_4_;
              } while (lVar33 < (long)piVar19);
            }
            uVar27 = uVar27 + 1;
            auVar43 = extraout_XMM0_13;
          } while (uVar27 != auVar40._0_8_);
          uVar27 = 0;
          uVar39 = extraout_RDX_18;
          auVar44 = extraout_XMM0_13;
          do {
            auVar44._0_8_ =
                 garray_redraw(auVar44._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                               ,alStack_638[uVar27],piVar34,uVar39,piVar19,param_13,param_14,
                               (char)in_stack_fffffffffffff6d8);
            auVar44._8_8_ = extraout_XMM0_Qb_07;
            uVar27 = uVar27 + 1;
            uVar39 = extraout_RDX_19;
          } while (auVar40._0_8_ != uVar27);
          binbuf_free(puVar15);
          if (iVar9 == 0) {
            piVar36 = (int *)0x0;
          }
          else {
            piVar36 = (int *)(long)iVar9;
            sys_getsr();
            auVar40 = local_8d8;
            local_8d8._4_4_ = uVar32;
            local_8d8._0_4_ = (int)extraout_XMM0_Da;
            local_8d8._12_4_ = auVar40._12_4_;
            local_8d8._8_4_ = 4;
            local_8c8._0_12_ = ZEXT812(0);
          }
          goto LAB_0059c06c;
        }
        pd_error(extraout_XMM0_09._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 param_9,"[soundfiler] read: %s: empty or very short ascii file",pdVar20,piVar19,
                 (char *)param_13,param_14);
      }
LAB_0059c31a:
      binbuf_free(puVar15);
      piVar36 = (int *)0x0;
    }
  }
  goto LAB_0059c06c;
LAB_0059c022:
LAB_0059c027:
  piVar36 = (int *)0x0;
  uVar39 = pd_error(auVar40._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    "[soundfiler]: usage; read [flags] filename [tablename]...",param_11,piVar19,
                    (char *)param_13,param_14);
  uVar39 = post(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "flags: -skip <n> -resize -maxsize <n> %s -ascii ...");
  uVar39 = post(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "-raw <headerbytes> <channels> <bytespersample> <endian (b, l, or n)>");
  post(uVar39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "(-ascii flag can only be combined with -resize)");
LAB_0059c06c:
  local_8e8._0_4_ = 0xffffffff;
LAB_0059c074:
  plVar14 = *(long **)(param_9 + 0x30);
  local_880 = (float)(int)local_8d8._0_4_;
  lVar33 = 0;
  if (-1 < (long)local_8c8._0_8_) {
    lVar33 = local_8c8._0_8_;
  }
  local_888._0_4_ = 1;
  local_870 = (float)lVar33;
  auVar40._0_8_ = (ulong)(uint)local_870;
  local_878 = 1;
  local_868 = 1;
  local_860 = (float)(int)local_8d8._4_4_;
  local_858 = 1;
  local_850 = (float)(int)local_8d8._8_4_;
  local_848 = 2;
  pcVar35 = "b";
  if (local_8c8._8_4_ == 0) {
    pcVar35 = "l";
  }
  local_840 = gensym(pcVar35);
  plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(extraout_XMM0_Qa_02,auVar40._0_8_,param_3,param_4,param_5,param_6,param_7,param_8,
              plVar14,*plVar13 + 0xc0,5,&local_888,(char *)param_13,param_14);
  outlet_float((ulong)(uint)(float)piVar36,auVar40._0_8_,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


