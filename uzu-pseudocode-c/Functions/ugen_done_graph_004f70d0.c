// Function : ugen_done_graph
// Namespace: 
// Entry    : 004f70d0
// Prototype: undefined ugen_done_graph(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 004f70d0 - 004f7d28


void ugen_done_graph(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 *extraout_RDX_06;
  undefined8 *extraout_RDX_07;
  undefined8 *puVar18;
  undefined8 *extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  undefined8 uVar26;
  undefined *puVar27;
  char *in_R8;
  char *in_R9;
  uint uVar28;
  long lVar29;
  long lVar30;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar31;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar33;
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
  undefined4 uVar34;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined1 uVar35;
  undefined4 in_stack_ffffffffffffff78;
  uint local_6c;
  ulong local_50;
  char *local_48;
  
  lVar24 = param_9[1];
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar33 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar26 = extraout_RDX;
  if (*(int *)(*(long *)(*plVar7 + 0x40) + 0x134) != 0) {
    uVar33 = post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,"ugen_done_graph...");
    uVar26 = extraout_RDX_00;
    for (lVar30 = *param_9; lVar30 != 0; lVar30 = *(long *)(lVar30 + 0x20)) {
      class_getname((undefined8 *)**(undefined8 **)(lVar30 + 0x28));
      uVar33 = post(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,"ugen: %s");
      iVar21 = *(int *)(lVar30 + 0x18);
      uVar26 = extraout_RDX_01;
      if (0 < iVar21) {
        lVar29 = *(long *)(lVar30 + 0x10);
        iVar20 = 0;
        do {
          plVar7 = *(long **)(lVar29 + 0x10);
          if (plVar7 != (long *)0x0) {
            do {
              class_getname((undefined8 *)**(undefined8 **)(*plVar7 + 0x28));
              lVar12 = *param_9;
              if (lVar12 != 0) {
                do {
                  if (lVar12 == *plVar7) break;
                  lVar12 = *(long *)(lVar12 + 0x20);
                } while (lVar12 != 0);
              }
              in_R8 = (char *)(ulong)*(uint *)(plVar7 + 1);
              uVar33 = post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,
                            "... out %d to %s, index %d, inlet %d");
              plVar7 = (long *)plVar7[2];
            } while (plVar7 != (long *)0x0);
            iVar21 = *(int *)(lVar30 + 0x18);
            uVar26 = extraout_RDX_02;
          }
          lVar29 = lVar29 + 0x18;
          iVar20 = iVar20 + 1;
        } while (iVar20 < iVar21);
      }
    }
  }
  puVar27 = PTR_block_class_00715ae0;
  lVar30 = *param_9;
  if (lVar30 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    lVar29 = *(long *)PTR_block_class_00715ae0;
    plVar7 = (long *)0x0;
    do {
      plVar8 = *(long **)(lVar30 + 0x28);
      if (*plVar8 == lVar29) {
        if (plVar7 == (long *)0x0) {
          plVar7 = plVar8;
        }
        else {
          uVar33 = pd_error(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)plVar7,"conflicting block~ and/or switch~ objects in same window",
                            uVar26,plVar8,in_R8,in_R9);
          lVar29 = *(long *)puVar27;
          uVar26 = extraout_RDX_03;
        }
      }
      lVar30 = *(long *)(lVar30 + 0x20);
    } while (lVar30 != 0);
  }
  if (lVar24 == 0) {
    sys_getsr();
    iVar21 = 1;
    uVar33 = sys_getblksize();
    uVar6 = (uint)uVar33;
    fVar1 = extraout_XMM0_Da_02;
  }
  else {
    fVar1 = *(float *)(lVar24 + 0x30);
    uVar6 = *(uint *)(lVar24 + 0x20);
    iVar21 = *(int *)(lVar24 + 0x38);
  }
  if (plVar7 == (long *)0x0) {
    plVar8 = (long *)(ulong)(lVar24 == 0);
    uVar17 = 0;
    local_48 = (char *)0x1;
    local_6c = 1;
    local_50 = 1;
    uVar2 = 1;
    fVar31 = fVar1;
    uVar28 = uVar6;
  }
  else {
    uVar28 = *(uint *)(plVar7 + 6);
    if (*(uint *)(plVar7 + 6) == 0) {
      uVar28 = uVar6;
    }
    uVar14 = *(uint *)((long)plVar7 + 0x34);
    if ((int)uVar28 < (int)*(uint *)((long)plVar7 + 0x34)) {
      uVar14 = uVar28;
    }
    uVar2 = *(uint *)(plVar7 + 0xb);
    uVar15 = *(uint *)((long)plVar7 + 0x5c);
    if ((int)uVar6 < (int)*(uint *)((long)plVar7 + 0x5c)) {
      uVar15 = uVar6;
    }
    local_50 = (ulong)uVar15;
    iVar20 = uVar15 * uVar28;
    iVar25 = uVar2 * uVar6 * uVar14;
    local_48 = (char *)((long)iVar20 / (long)iVar25 & 0xffffffff);
    local_6c = iVar25 / iVar20;
    if ((int)((long)iVar20 / (long)iVar25) < 1) {
      local_48 = (char *)0x1;
    }
    if ((int)local_6c < 1) {
      local_6c = 1;
    }
    *(uint *)(plVar7 + 8) = local_6c;
    *(int *)((long)plVar7 + 0x3c) = (int)local_48;
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0,iVar25,(long)iVar25 % (long)iVar20 & 0xffffffff);
    param_2 = (ulong)(uint)(float)(int)uVar15;
    *(uint *)(plVar7 + 7) = (int)local_48 - 1U & *(uint *)(*(long *)(*plVar8 + 0x40) + 0x130);
    if ((((lVar24 == 0) || (uVar14 != 1)) || (uVar28 != uVar6)) ||
       ((uVar15 != 1 || (plVar8 = (long *)0x0, uVar2 != 1)))) {
      plVar8 = (long *)0x1;
    }
    uVar17 = (uint)*(char *)((long)plVar7 + 0x54);
    iVar21 = iVar21 * uVar14;
    fVar31 = ((float)(int)uVar2 * fVar1 * (float)(int)uVar14) / (float)(int)uVar15;
  }
  uVar14 = (uint)plVar8;
  plVar16 = (long *)(ulong)(uVar14 * 2);
  *(byte *)(param_9 + 0xd) =
       (char)uVar17 * '\x04' & 4U | (byte)(uVar14 * 2) | *(byte *)(param_9 + 0xd) & 0xf9;
  *(float *)(param_9 + 6) = fVar31;
  *(uint *)(param_9 + 4) = uVar28;
  *(int *)(param_9 + 7) = iVar21;
  *(undefined4 *)((long)param_9 + 0x34) = 0xffffffff;
  if (((param_9[3] != 0) && (plVar16 = (long *)(ulong)(uVar17 | uVar14), (uVar17 | uVar14) != 0)) &&
     (0 < *(int *)((long)param_9 + 0x14))) {
    plVar16 = (long *)(long)(int)param_9[2];
    lVar24 = param_9[3] + (long)plVar16 * 8;
    lVar30 = 0;
    do {
      lVar29 = *(long *)(lVar24 + lVar30 * 8);
      if ((*(int *)(lVar29 + 0x20) != 0) && (*(long *)(lVar29 + 0x28) == 0)) {
        uVar26 = 1;
        piVar9 = signal_new((ulong)(uint)fVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,uVar6,1,0,plVar16,in_R8,in_R9);
        uVar33 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_03);
        piVar9[6] = iVar21;
        piVar3 = *(int **)(lVar24 + lVar30 * 8);
        if ((piVar3[8] == 0) || (uVar19 = extraout_RDX_04, *(long *)(piVar3 + 10) != 0)) {
          uVar33 = bug(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_03),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,"signal_setborrowed",uVar26,extraout_RDX_04,
                       plVar16,in_R8,in_R9,(char)in_stack_ffffffffffffff78);
          uVar19 = extraout_RDX_05;
        }
        if (piVar3 == piVar9) {
          bug(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"signal_setborrowed 2",
              uVar26,uVar19,plVar16,in_R8,in_R9,(char)in_stack_ffffffffffffff78);
        }
        *(int **)(piVar3 + 10) = piVar9;
        plVar11 = *(long **)(piVar9 + 2);
        *(long **)(piVar3 + 2) = plVar11;
        *piVar3 = *piVar9;
        piVar3[5] = piVar9[5];
        piVar3[4] = piVar9[4];
        piVar3[6] = piVar9[6];
        piVar3[0x10] = piVar9[0x10];
        piVar9[7] = piVar9[7] + 1;
        plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
        if (*(int *)(*(long *)(*plVar10 + 0x40) + 0x134) != 0) {
          post(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,"set borrowed %lx: from %lx vec %lx");
          plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
          plVar16 = plVar11;
          if (*(int *)(*(long *)(*plVar10 + 0x40) + 0x134) != 0) {
            post(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,"set %lx->%lx");
            plVar16 = plVar11;
          }
        }
      }
      lVar30 = lVar30 + 1;
    } while ((int)lVar30 < *(int *)((long)param_9 + 0x14));
  }
  plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar11 + 0x40) + 0x134) != 0) {
    post(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,param_6,
         param_7,param_8,"reblock %d, switched %d");
  }
  puVar27 = PTR_vinlet_class_00715ab8;
  plVar11 = (long *)PTR_voutlet_class_00715fc0;
  for (lVar24 = *param_9; PTR_voutlet_class_00715fc0 = (undefined *)plVar11, lVar24 != 0;
      lVar24 = *(long *)(lVar24 + 0x20)) {
    lVar30 = param_9[3];
    if (lVar30 == 0) {
      lVar29 = 0;
      plVar16 = *(long **)(lVar24 + 0x28);
      lVar12 = *plVar16;
      if (lVar12 == *(long *)puVar27) goto LAB_004f75c0;
LAB_004f7655:
      if (lVar12 == *plVar11) {
        plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar11 = (long *)(ulong)*(uint *)(*(long *)(*plVar11 + 0x40) + 0x130);
        in_R9 = (char *)(ulong)local_6c;
        in_R8 = local_48;
        voutlet_dspprolog(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_08),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar16,lVar29,uVar28,plVar11,
                          local_48,in_R9,(int)local_50,uVar2,uVar14,uVar17);
        goto LAB_004f7606;
      }
    }
    else {
      lVar29 = lVar30 + (long)(int)param_9[2] * 8;
      plVar16 = *(long **)(lVar24 + 0x28);
      lVar12 = *plVar16;
      if (lVar12 != *(long *)puVar27) goto LAB_004f7655;
LAB_004f75c0:
      plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar11 = (long *)(ulong)*(uint *)(*(long *)(*plVar11 + 0x40) + 0x130);
      in_R9 = (char *)(ulong)local_6c;
      in_R8 = local_48;
      vinlet_dspprolog(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_07),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(long)plVar16,lVar30,(ulong)uVar28,plVar11,
                       local_48,(ulong)in_R9,(int)local_50,uVar2,uVar14);
LAB_004f7606:
    }
    plVar16 = plVar11;
    plVar11 = (long *)PTR_voutlet_class_00715fc0;
  }
  plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar20 = *(int *)(*(long *)(*plVar11 + 0x40) + 8);
  puVar18 = extraout_RDX_06;
  uVar32 = extraout_XMM0_Da_09;
  uVar34 = extraout_XMM0_Db_08;
  if ((plVar7 != (long *)0x0) && (uVar17 != 0 || uVar14 != 0)) {
    dsp_add(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,block_prolog,1,plVar7,plVar16,in_R8,in_R9,
            CONCAT44(uVar6,in_stack_ffffffffffffff78));
    plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
    *(int *)(plVar7 + 9) = *(int *)(*(long *)(*plVar11 + 0x40) + 8) + -1;
    puVar18 = extraout_RDX_07;
    uVar32 = extraout_XMM0_Da_10;
    uVar34 = extraout_XMM0_Db_09;
  }
  uVar33 = CONCAT44(uVar34,uVar32);
  puVar13 = (undefined8 *)*param_9;
  if (puVar13 != (undefined8 *)0x0) {
    do {
      *(undefined4 *)(puVar13 + 6) = 0;
      uVar15 = *(uint *)(puVar13 + 3);
      if (uVar15 != 0) {
        puVar18 = (undefined8 *)puVar13[2];
        uVar23 = uVar15 - 1;
        if ((uVar15 & 7) != 0) {
          uVar22 = 0;
          do {
            *(undefined4 *)((long)puVar18 + 4) = 0;
            puVar18 = puVar18 + 3;
            uVar22 = uVar22 + 1;
          } while ((uVar15 & 7) != uVar22);
          uVar15 = uVar15 - uVar22;
        }
        if (6 < uVar23) {
          puVar18 = (undefined8 *)((long)puVar18 + 0xac);
          do {
            *(undefined4 *)(puVar18 + -0x15) = 0;
            *(undefined4 *)(puVar18 + -0x12) = 0;
            *(undefined4 *)(puVar18 + -0xf) = 0;
            *(undefined4 *)(puVar18 + -0xc) = 0;
            *(undefined4 *)(puVar18 + -9) = 0;
            *(undefined4 *)(puVar18 + -6) = 0;
            *(undefined4 *)(puVar18 + -3) = 0;
            *(undefined4 *)puVar18 = 0;
            puVar18 = puVar18 + 0x18;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
        }
      }
      uVar15 = *(uint *)(puVar13 + 1);
      plVar16 = (long *)(ulong)uVar15;
      if (uVar15 != 0) {
        puVar18 = (undefined8 *)*puVar13;
        if ((uVar15 & 7) != 0) {
          uVar23 = 0;
          do {
            *(undefined4 *)((long)puVar18 + 4) = 0;
            puVar18[1] = 0;
            puVar18 = puVar18 + 2;
            uVar23 = uVar23 + 1;
          } while ((uVar15 & 7) != uVar23);
          plVar16 = (long *)(ulong)(uVar15 - uVar23);
        }
        if (6 < uVar15 - 1) {
          puVar18 = puVar18 + 0xf;
          do {
            *(undefined4 *)((long)puVar18 + -0x74) = 0;
            puVar18[-0xe] = 0;
            *(undefined4 *)((long)puVar18 + -100) = 0;
            puVar18[-0xc] = 0;
            *(undefined4 *)((long)puVar18 + -0x54) = 0;
            puVar18[-10] = 0;
            *(undefined4 *)((long)puVar18 + -0x44) = 0;
            puVar18[-8] = 0;
            *(undefined4 *)((long)puVar18 + -0x34) = 0;
            puVar18[-6] = 0;
            *(undefined4 *)((long)puVar18 + -0x24) = 0;
            puVar18[-4] = 0;
            *(undefined4 *)((long)puVar18 + -0x14) = 0;
            puVar18[-2] = 0;
            *(undefined4 *)((long)puVar18 + -4) = 0;
            *puVar18 = 0;
            puVar18 = puVar18 + 0x10;
            uVar15 = (int)plVar16 - 8;
            plVar16 = (long *)(ulong)uVar15;
          } while (uVar15 != 0);
          plVar16 = (long *)0x0;
        }
      }
      puVar13 = (undefined8 *)puVar13[4];
    } while (puVar13 != (undefined8 *)0x0);
    plVar11 = (long *)*param_9;
    if (plVar11 != (long *)0x0) {
      do {
        if ((int)plVar11[6] == 0) {
          iVar25 = (int)plVar11[1];
          if (iVar25 != 0) {
            plVar16 = (long *)*plVar11;
            do {
              if ((int)*plVar16 != 0) goto LAB_004f79ab;
              iVar25 = iVar25 + -1;
              plVar16 = plVar16 + 2;
            } while (iVar25 != 0);
          }
          uVar33 = ugen_doit(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             plVar11,puVar18,plVar16,in_R8,in_R9);
          puVar18 = extraout_RDX_08;
        }
LAB_004f79ab:
        plVar11 = (long *)plVar11[4];
      } while (plVar11 != (long *)0x0);
      for (lVar24 = *param_9; lVar24 != 0; lVar24 = *(long *)(lVar24 + 0x20)) {
        if (*(int *)(lVar24 + 0x30) == 0) {
          if ((*(byte *)(param_9 + 0xd) & 8) == 0) {
            uVar33 = pd_error(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(lVar24 + 0x28),
                              "DSP loop detected (some tilde objects weren\'t scheduled)",puVar18,
                              plVar16,in_R8,in_R9);
          }
          if (0 < *(int *)((long)param_9 + 0x14)) {
            lVar30 = (long)(int)param_9[2] * 8 + param_9[3];
            lVar24 = 0;
            do {
              lVar29 = *(long *)(lVar30 + lVar24 * 8);
              if ((*(int *)(lVar29 + 0x20) != 0) && (*(long *)(lVar29 + 0x28) == 0)) {
                uVar26 = 1;
                piVar9 = signal_new((ulong)(uint)fVar1,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,uVar6,1,0,plVar16,in_R8,in_R9);
                uVar33 = CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_14);
                piVar9[6] = iVar21;
                piVar3 = *(int **)(lVar30 + lVar24 * 8);
                if ((piVar3[8] == 0) || (uVar19 = extraout_RDX_10, *(long *)(piVar3 + 10) != 0)) {
                  uVar33 = bug(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_14),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,"signal_setborrowed",uVar26,
                               extraout_RDX_10,plVar16,in_R8,in_R9,(char)in_stack_ffffffffffffff78);
                  uVar19 = extraout_RDX_11;
                }
                if (piVar3 == piVar9) {
                  bug(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "signal_setborrowed 2",uVar26,uVar19,plVar16,in_R8,in_R9,
                      (char)in_stack_ffffffffffffff78);
                }
                *(int **)(piVar3 + 10) = piVar9;
                *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar9 + 2);
                *piVar3 = *piVar9;
                piVar3[5] = piVar9[5];
                piVar3[4] = piVar9[4];
                piVar3[6] = piVar9[6];
                piVar3[0x10] = piVar9[0x10];
                piVar9[7] = piVar9[7] + 1;
                plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
                uVar33 = CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_15);
                if (*(int *)(*(long *)(*plVar16 + 0x40) + 0x134) != 0) {
                  uVar33 = post(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_15),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,
                                "set borrowed %lx: from %lx vec %lx");
                }
                plVar16 = (long *)(long)*piVar9;
                puVar27 = PTR_zero_perform_00715e70;
                if (((ulong)plVar16 & 7) == 0) {
                  puVar27 = PTR_zero_perf8_00715d48;
                }
                dsp_add(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar27,2,
                        *(undefined8 *)(piVar9 + 2),plVar16,in_R8,in_R9,
                        CONCAT44(uVar6,in_stack_ffffffffffffff78));
                plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
                uVar33 = CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_16);
                if (*(int *)(*(long *)(*plVar11 + 0x40) + 0x134) != 0) {
                  uVar33 = post(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_16),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,
                                "oops, belatedly set %lx->%lx");
                }
              }
              lVar24 = lVar24 + 1;
            } while ((int)lVar24 < *(int *)((long)param_9 + 0x14));
          }
          break;
        }
      }
    }
  }
  if ((plVar7 != (long *)0x0) && (uVar17 != 0 || uVar14 != 0)) {
    dsp_add(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,block_epilog,1,plVar7,
            plVar16,in_R8,in_R9,CONCAT44(uVar6,in_stack_ffffffffffffff78));
  }
  plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar27 = PTR_voutlet_class_00715fc0;
  iVar21 = *(int *)(*(long *)(*plVar11 + 0x40) + 8);
  lVar24 = *param_9;
  if (lVar24 != 0) {
    lVar30 = *(long *)PTR_voutlet_class_00715fc0;
    do {
      plVar11 = *(long **)(lVar24 + 0x28);
      if (*plVar11 == lVar30) {
        if (param_9[3] == 0) {
          lVar30 = 0;
        }
        else {
          lVar30 = param_9[3] + (long)(int)param_9[2] * 8;
        }
        plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar16 = (long *)(ulong)*(uint *)(*(long *)(*plVar16 + 0x40) + 0x130);
        in_R9 = (char *)(ulong)local_6c;
        in_R8 = local_48;
        voutlet_dspepilog(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_11),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar11,lVar30,(ulong)uVar28,plVar16
                          ,local_48,(ulong)in_R9,local_50,uVar2,uVar14,uVar17);
        lVar30 = *(long *)puVar27;
      }
      lVar24 = *(long *)(lVar24 + 0x20);
    } while (lVar24 != 0);
  }
  plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar11 = *(long **)(*plVar11 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar24 = plVar11[1];
    *(int *)((long)plVar7 + 0x4c) = iVar21 - iVar20;
    *(int *)(plVar7 + 10) = (int)lVar24 - iVar21;
    *(char *)((long)plVar7 + 0x56) = (char)plVar8;
    plVar16 = plVar8;
  }
  if (*(int *)((long)plVar11 + 0x134) != 0) {
    uVar33 = CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_12);
    if ((param_9[1] == 0) &&
       (lVar24 = plVar11[1], uVar33 = CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_12),
       (int)lVar24 != 0)) {
      lVar30 = *plVar11;
      lVar29 = 0;
      do {
        plVar7 = *(long **)(lVar30 + lVar29 * 8);
        uVar33 = post(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"chain %lx");
        lVar29 = lVar29 + 1;
      } while ((int)lVar24 != (int)lVar29);
    }
    post(uVar33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"... ugen_done_graph done.")
    ;
  }
  while( true ) {
    uVar35 = (undefined1)in_stack_ffffffffffffff78;
    lVar24 = *param_9;
    if (lVar24 == 0) break;
    iVar21 = *(int *)(lVar24 + 0x18);
    if (iVar21 == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x10);
      do {
        iVar21 = iVar21 + -1;
        pvVar4 = *(void **)(lVar24 + 0x10);
        while (pvVar4 != (void *)0x0) {
          pvVar5 = *(void **)((long)pvVar4 + 0x10);
          freebytes(pvVar4);
          pvVar4 = pvVar5;
        }
        lVar24 = lVar24 + 0x18;
      } while (iVar21 != 0);
      lVar24 = *param_9;
      plVar16 = (long *)(ulong)*(uint *)(lVar24 + 0x18);
    }
    freebytes(*(void **)(lVar24 + 0x10));
    freebytes(*(void **)*param_9);
    pvVar4 = (void *)*param_9;
    *param_9 = *(long *)((long)pvVar4 + 0x20);
    plVar7 = (long *)0x38;
    freebytes(pvVar4);
  }
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long **)(*(long *)(*plVar8 + 0x40) + 0x138) == param_9) {
    *(long *)(*(long *)(*plVar8 + 0x40) + 0x138) = param_9[1];
  }
  else {
    bug(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,param_6,
        param_7,param_8,"THIS->u_context",plVar7,extraout_RDX_09,plVar16,in_R8,in_R9,uVar35);
  }
  freebytes(param_9);
  return;
}


