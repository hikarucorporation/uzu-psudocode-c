// Function : ugen_doit
// Namespace: 
// Entry    : 004f7d80
// Prototype: undefined ugen_doit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 004f7d80 - 004f8b27


void ugen_doit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 *param_9,long *param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,char *param_14)

{
  float fVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined4 *puVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  code *pcVar18;
  uint *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined7 uVar25;
  uint *puVar23;
  uint *puVar24;
  uint uVar26;
  long *plVar27;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  ulong extraout_RDX_12;
  ulong extraout_RDX_13;
  ulong extraout_RDX_14;
  ulong extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  ulong extraout_RDX_18;
  ulong extraout_RDX_19;
  ulong uVar28;
  ulong extraout_RDX_20;
  ulong extraout_RDX_21;
  long *plVar29;
  uint uVar30;
  undefined8 *puVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  int iVar36;
  undefined *puVar37;
  undefined8 *puVar38;
  long lVar39;
  bool bVar40;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar41;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  ulong extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  ulong extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined1 auVar42 [16];
  float fVar43;
  undefined4 uVar44;
  uint in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  
  puVar31 = *(undefined8 **)param_10[5];
  plVar13 = param_10;
  bVar7 = class_getdspflags((long)puVar31);
  uVar25 = (undefined7)((ulong)param_12 >> 8);
  if (puVar31 == *(undefined8 **)PTR_vinlet_class_00715ab8) {
    bVar40 = (*(byte *)(param_9 + 0xd) & 2) == 0;
    plVar35 = (long *)CONCAT71(uVar25,1);
    if (puVar31 != *(undefined8 **)PTR_canvas_class_00715918) goto LAB_004f7ddb;
LAB_004f7df5:
    iVar9 = (int)param_10[1];
  }
  else {
    bVar40 = false;
    plVar35 = (long *)CONCAT71(uVar25,1);
    if (puVar31 == *(undefined8 **)PTR_canvas_class_00715918) goto LAB_004f7df5;
LAB_004f7ddb:
    plVar35 = (long *)CONCAT71(uVar25,1);
    if (puVar31 == *(undefined8 **)PTR_clone_class_00715970) goto LAB_004f7df5;
    if (puVar31 != *(undefined8 **)PTR_voutlet_class_00715fc0) {
      plVar35 = (long *)0x0;
      goto LAB_004f7df5;
    }
    plVar35 = (long *)CONCAT71((int7)((ulong)PTR_voutlet_class_00715fc0 >> 8),
                               (*(byte *)(param_9 + 0xd) & 6) == 0);
    iVar9 = (int)param_10[1];
  }
  if (0 < iVar9) {
    plVar27 = (long *)(*param_10 + 8);
    plVar13 = (long *)(ulong)(bVar7 & 0x10);
    iVar36 = iVar9;
    do {
      if ((((int)plVar27[-1] != 0) && (*(int *)(*plVar27 + 0x14) != 1)) && ((bVar7 & 0x10) == 0)) {
        puVar31 = (undefined8 *)param_10[5];
        uVar11 = class_getname((undefined8 *)*puVar31);
        pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)puVar31,"object %s can\'t take multichannel inputs",uVar11,plVar35,param_13,
                 param_14);
        *(byte *)(param_9 + 0xd) = *(byte *)(param_9 + 0xd) | 8;
        return;
      }
      plVar27 = plVar27 + 2;
      iVar36 = iVar36 + -1;
    } while (iVar36 != 0);
  }
  plVar16 = (long *)(ulong)bVar40;
  plVar27 = plVar35;
  plVar12 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(int *)(*(long *)(*plVar12 + 0x40) + 0x134) != 0) {
    plVar13 = (long *)class_getname(puVar31);
    post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"doit %s %d %d"
        );
    iVar9 = (int)param_10[1];
    plVar27 = plVar16;
  }
  if (0 < iVar9) {
    puVar31 = (undefined8 *)(*param_10 + 8);
    iVar36 = 0;
    do {
      if (*(int *)(puVar31 + -1) == 0) {
        puVar14 = obj_findsignalscalar((long *)param_10[5],iVar36);
        if (((iVar36 == 0) || ((bVar7 & 0x20) == 0)) && ((iVar36 != 0 || ((bVar7 & 0x40) == 0)))) {
          piVar15 = signal_new((ulong)*(uint *)(param_9 + 6),param_2,param_3,param_4,param_5,param_6
                               ,param_7,param_8,*(int *)(param_9 + 4),1,0,plVar27,param_13,param_14)
          ;
          *puVar31 = piVar15;
          param_13 = (char *)(long)*piVar15;
          puVar37 = PTR_scalarcopy_perform_00715470;
          if (((ulong)param_13 & 7) == 0) {
            puVar37 = PTR_scalarcopy_perf8_007155f0;
          }
          plVar13 = (long *)0x3;
          dsp_add(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  puVar37,3,puVar14,*(undefined8 *)(piVar15 + 2),param_13,param_14,
                  CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68));
          piVar15 = (int *)*puVar31;
        }
        else {
          plVar13 = (long *)0x1;
          piVar15 = signal_new((ulong)*(uint *)(param_9 + 6),param_2,param_3,param_4,param_5,param_6
                               ,param_7,param_8,1,1,(long)puVar14,plVar27,param_13,param_14);
          *puVar31 = piVar15;
        }
        plVar27 = (long *)(ulong)*(uint *)(param_9 + 7);
        piVar15[6] = *(uint *)(param_9 + 7);
        piVar15[7] = 1;
        iVar9 = (int)param_10[1];
      }
      iVar36 = iVar36 + 1;
      puVar31 = puVar31 + 2;
    } while (iVar36 < iVar9);
  }
  plVar12 = getbytes(((long)iVar9 + (long)(int)param_10[3]) * 8);
  lVar33 = param_10[1];
  plVar16 = (long *)(long)(int)lVar33;
  if (plVar16 == (long *)0x0) {
    plVar29 = (long *)0x0;
  }
  else {
    plVar32 = (long *)(*param_10 + 8);
    lVar39 = 0;
    plVar29 = (long *)0x0;
    do {
      plVar27 = (long *)*plVar32;
      plVar12[lVar39] = (long)plVar27;
      if (((((ulong)plVar35 & 0xff) == 0) && (*(int *)((long)plVar27 + 0x24) == 0)) &&
         ((int)plVar27[4] == 0)) {
        plVar17 = (long *)__tls_get_addr();
        uVar11 = extraout_RDX;
        uVar41 = extraout_XMM0_Qa_02;
        if (*(int *)(*(long *)(*plVar17 + 0x40) + 0x134) != 0) {
          plVar13 = plVar27;
          uVar41 = post(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        "dereference %lx: %d");
          uVar11 = extraout_RDX_00;
        }
        if (*(int *)((long)plVar27 + 0x1c) < 1) {
          uVar41 = bug(uVar41,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       "signal_dereference",plVar13,uVar11,(ulong)plVar35 & 0xff,param_13,param_14,
                       (char)in_stack_ffffffffffffff68);
          iVar9 = *(int *)((long)plVar27 + 0x1c) + -1;
          *(int *)((long)plVar27 + 0x1c) = iVar9;
          uVar11 = extraout_RDX_01;
        }
        else {
          iVar9 = *(int *)((long)plVar27 + 0x1c) + -1;
          *(int *)((long)plVar27 + 0x1c) = iVar9;
        }
        if (iVar9 == 0) {
          signal_makereusable(uVar41,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)plVar27,(long)plVar13,uVar11,(ulong)plVar35 & 0xff,param_13,
                              param_14);
        }
      }
      else if (*(int *)((long)plVar27 + 0x1c) < 2) {
        plVar27[6] = (long)plVar29;
        plVar29 = (long *)plVar12[lVar39];
      }
      else {
        *(int *)((long)plVar27 + 0x1c) = *(int *)((long)plVar27 + 0x1c) + -1;
      }
      plVar27 = (long *)((ulong)plVar35 & 0xff);
      lVar39 = lVar39 + 1;
      plVar32 = plVar32 + 2;
    } while ((int)lVar33 != (int)lVar39);
  }
  iVar9 = (int)param_10[3];
  uVar8 = iVar9 - 1;
  if (iVar9 != 0) {
    if (bVar40 == false) {
      if ((bVar7 & 0x10) == 0) {
        lVar33 = 0;
        plVar27 = plVar16;
        do {
          piVar15 = signal_new((ulong)*(uint *)(param_9 + 6),param_2,param_3,param_4,param_5,param_6
                               ,param_7,param_8,*(int *)(param_9 + 4),1,0,plVar27,param_13,param_14)
          ;
          plVar12[(long)plVar16 + lVar33] = (long)piVar15;
          plVar27 = (long *)(ulong)*(uint *)(param_9 + 7);
          piVar15[6] = *(uint *)(param_9 + 7);
          lVar33 = lVar33 + 1;
        } while (iVar9 != (int)lVar33);
      }
      else {
        plVar27 = plVar12 + (long)plVar16;
        puVar31 = param_9 + 4;
        if (2 < uVar8) {
          param_13 = (char *)((ulong)uVar8 + 1);
          param_14 = (char *)((ulong)param_13 & 0xfffffffffffffffc);
          auVar42._8_4_ = (int)puVar31;
          auVar42._0_8_ = puVar31;
          auVar42._12_4_ = (int)((ulong)puVar31 >> 0x20);
          uVar34 = ((ulong)(param_14 + -4) >> 2) + 1;
          uVar28 = (ulong)((uint)uVar34 & 7);
          if (param_14 + -4 < (char *)0x1c) {
            lVar33 = 0;
          }
          else {
            uVar34 = uVar34 & 0xfffffffffffffff8;
            lVar33 = 0;
            do {
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 2) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 4) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 6) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 8) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 10) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0xc) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0xe) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x10) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x12) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x14) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x16) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x18) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x1a) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x1c) = auVar42;
              *(undefined1 (*) [16])(plVar12 + (long)plVar16 + lVar33 + 0x1e) = auVar42;
              lVar33 = lVar33 + 0x20;
              uVar34 = uVar34 - 8;
            } while (uVar34 != 0);
          }
          if (uVar28 != 0) {
            lVar33 = (long)plVar16 * 8 + lVar33 * 8;
            lVar39 = 0;
            do {
              *(undefined1 (*) [16])((long)plVar12 + lVar39 + lVar33) = auVar42;
              *(undefined1 (*) [16])((long)plVar12 + lVar39 + lVar33 + 0x10) = auVar42;
              lVar39 = lVar39 + 0x20;
            } while (uVar28 * 0x20 != lVar39);
          }
          if (param_13 == param_14) goto LAB_004f82fc;
          uVar8 = uVar8 - (int)param_14;
          plVar27 = plVar27 + (long)param_14;
        }
        lVar33 = 0;
        do {
          plVar27[lVar33] = (long)puVar31;
          lVar33 = lVar33 + 1;
        } while (uVar8 + 1 != (int)lVar33);
      }
    }
    else {
      lVar33 = 0;
      plVar27 = plVar16;
      do {
        piVar15 = signal_new((ulong)*(uint *)(param_9 + 6),param_2,param_3,param_4,param_5,param_6,
                             param_7,param_8,0,1,0,plVar27,param_13,param_14);
        plVar12[(long)plVar16 + lVar33] = (long)piVar15;
        plVar27 = (long *)(ulong)*(uint *)(param_9 + 7);
        piVar15[6] = *(uint *)(param_9 + 7);
        lVar33 = lVar33 + 1;
      } while (iVar9 != (int)lVar33);
    }
  }
LAB_004f82fc:
  plVar13 = (long *)param_10[5];
  puVar31 = gensym("dsp");
  pcVar18 = (code *)getfn(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar13,puVar31,extraout_RDX_02,plVar27,param_13,param_14);
  plVar13 = plVar12;
  uVar11 = (*pcVar18)(param_10[5]);
  lVar33 = param_10[3];
  if ((int)lVar33 != 0) {
    plVar35 = (long *)(param_10[2] + 8);
    lVar39 = 0;
    plVar27 = plVar16;
    uVar41 = extraout_RDX_03;
    do {
      *plVar35 = plVar12[(long)plVar16 + lVar39];
      lVar6 = plVar35[-1];
      lVar2 = plVar12[(long)plVar16 + lVar39];
      *(int *)(lVar2 + 0x1c) = (int)lVar6;
      if ((int)lVar6 == 0) {
        uVar11 = signal_makereusable(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     lVar2,(long)plVar13,uVar41,(ulong)plVar27,param_13,param_14);
        uVar41 = extraout_RDX_04;
      }
      lVar39 = lVar39 + 1;
      plVar35 = plVar35 + 3;
    } while ((int)lVar33 != (int)lVar39);
  }
  plVar35 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar28 = extraout_RDX_05;
  uVar11 = extraout_XMM0_Qa_04;
  if (*(int *)(*(long *)(*plVar35 + 0x40) + 0x134) != 0) {
    iVar9 = (int)param_10[3] + (int)param_10[1];
    if (iVar9 == 2) {
      plVar13 = (long *)class_getname(*(undefined8 **)param_10[5]);
      for (plVar35 = (long *)*param_9; (plVar35 != (long *)0x0 && (plVar35 != param_10));
          plVar35 = (long *)plVar35[4]) {
      }
      plVar27 = (long *)*plVar12;
      param_13 = (char *)plVar12[1];
      uVar11 = post(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "put %s %d (%lx %lx)");
      uVar28 = extraout_RDX_08;
    }
    else if (iVar9 == 1) {
      plVar13 = (long *)class_getname(*(undefined8 **)param_10[5]);
      for (plVar35 = (long *)*param_9; (plVar35 != (long *)0x0 && (plVar35 != param_10));
          plVar35 = (long *)plVar35[4]) {
      }
      plVar27 = (long *)*plVar12;
      uVar11 = post(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "put %s %d (%lx)");
      uVar28 = extraout_RDX_07;
    }
    else if (iVar9 == 0) {
      plVar13 = (long *)class_getname(*(undefined8 **)param_10[5]);
      for (plVar27 = (long *)*param_9; (plVar27 != (long *)0x0 && (plVar27 != param_10));
          plVar27 = (long *)plVar27[4]) {
      }
      uVar11 = post(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "put %s %d");
      uVar28 = extraout_RDX_06;
    }
    else {
      plVar13 = (long *)class_getname(*(undefined8 **)param_10[5]);
      for (plVar35 = (long *)*param_9; (plVar35 != (long *)0x0 && (plVar35 != param_10));
          plVar35 = (long *)plVar35[4]) {
      }
      plVar27 = (long *)*plVar12;
      param_13 = (char *)plVar12[1];
      param_14 = (char *)plVar12[2];
      uVar11 = post(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    "put %s %d (%lx %lx %lx ...)");
      uVar28 = extraout_RDX_14;
    }
  }
  do {
    plVar35 = plVar29;
    if (plVar35 == (long *)0x0) {
      iVar9 = (int)param_10[3];
      if (iVar9 != 0) {
        puVar23 = (uint *)param_10[2];
        do {
          iVar9 = iVar9 + -1;
          puVar31 = *(undefined8 **)(puVar23 + 4);
          if (puVar31 != (undefined8 *)0x0) {
            puVar3 = *(uint **)(puVar23 + 2);
            puVar24 = puVar23;
            do {
              puVar4 = (uint *)*puVar31;
              lVar33 = *(long *)puVar4;
              lVar39 = (long)*(int *)(puVar31 + 1) * 0x10;
              puVar38 = (undefined8 *)(lVar39 + lVar33 + 8);
              puVar5 = *(uint **)(lVar33 + 8 + lVar39);
              if (puVar5 == (uint *)0x0) {
                *puVar38 = puVar3;
              }
              else {
                puVar3[7] = puVar3[7] - 1;
                puVar5[7] = puVar5[7] - 1;
                uVar8 = *puVar3;
                uVar22 = puVar3[5];
                fVar1 = (float)puVar3[4];
                uVar44 = 0;
                uVar34 = (ulong)(uint)DAT_005d9038;
                fVar43 = fVar1;
                if (fVar1 < DAT_005d9038) {
                  bug(uVar34,(ulong)(uint)fVar1,param_3,param_4,param_5,param_6,param_7,param_8,
                      "signal_new",puVar4,uVar28,(ulong)uVar8,param_13,param_14,
                      (char)in_stack_ffffffffffffff68);
                  uVar34 = extraout_XMM0_Qa_11;
                }
                puVar24 = puVar4;
                if (uVar8 == 0) {
                  plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
                  puVar21 = (undefined8 *)(*(long *)(*plVar13 + 0x40) + 0x128);
                  uVar10 = 0;
                  puVar19 = (uint *)*puVar21;
                  if (puVar19 != (uint *)0x0) goto LAB_004f88ac;
LAB_004f87fd:
                  puVar19 = getbytes(0x48);
                  if (uVar10 != 0) {
                    pvVar20 = getbytes((long)(int)uVar10 << 2);
                    *(void **)(puVar19 + 2) = pvVar20;
                  }
                  plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
                  lVar2 = *(long *)(*plVar13 + 0x40);
                  *(undefined8 *)(puVar19 + 0xe) = *(undefined8 *)(lVar2 + 0x10);
                  *(uint **)(lVar2 + 0x10) = puVar19;
                }
                else {
                  uVar10 = uVar22 * uVar8;
                  if ((int)uVar10 < 1) {
                    iVar36 = 0;
                  }
                  else {
                    iVar36 = -1;
                    puVar24 = (uint *)(ulong)uVar10;
                    uVar26 = uVar10;
                    do {
                      iVar36 = iVar36 + 1;
                      uVar26 = (int)uVar26 >> 1;
                      uVar30 = (uint)puVar24;
                      puVar24 = (uint *)(ulong)uVar26;
                    } while (1 < uVar30);
                  }
                  uVar26 = 1 << ((byte)iVar36 & 0x1f);
                  uVar30 = (uint)((int)uVar26 < (int)uVar10) + iVar36;
                  uVar10 = 1 << ((byte)uVar30 & 0x1f);
                  if (0x20 < (int)uVar30) {
                    bug(uVar34,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6,param_7,
                        param_8,"signal buffer too large",puVar24,(ulong)uVar26,(ulong)uVar30,
                        param_13,param_14,(char)in_stack_ffffffffffffff68);
                  }
                  plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
                  puVar21 = (undefined8 *)
                            (*(long *)(*plVar13 + 0x40) + (long)(int)uVar30 * 8 + 0x20);
                  puVar19 = (uint *)*puVar21;
                  if (puVar19 == (uint *)0x0) goto LAB_004f87fd;
LAB_004f88ac:
                  *puVar21 = *(undefined8 *)(puVar19 + 0xc);
                }
                if (uVar8 == 0) {
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                }
                puVar19[8] = (uint)(uVar8 == 0);
                puVar19[9] = 0;
                *puVar19 = uVar8;
                puVar19[5] = uVar22;
                puVar19[0x10] = uVar10;
                puVar19[4] = (uint)fVar1;
                puVar19[6] = 0;
                puVar19[7] = 0;
                puVar19[10] = 0;
                puVar19[0xb] = 0;
                plVar13 = (long *)__tls_get_addr(&PTR_007159b0);
                uVar11 = extraout_RDX_16;
                if (*(int *)(*(long *)(*plVar13 + 0x40) + 0x134) != 0) {
                  puVar24 = puVar19;
                  post(extraout_XMM0_Qa_12,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6,
                       param_7,param_8,"new %lx: %lx");
                  uVar11 = extraout_RDX_17;
                }
                puVar19[6] = puVar3[6];
                uVar8 = puVar3[5];
                if (uVar8 == puVar5[5]) {
                  uVar22 = *puVar3;
                  if (uVar22 != *puVar5) goto LAB_004f89d0;
                  uVar28 = (ulong)puVar3[4];
                  if ((float)puVar3[4] != (float)puVar5[4]) {
                    bug(uVar28,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6,param_7,
                        param_8,"signals sample rate mismatch",puVar24,uVar11,(ulong)uVar22,param_13
                        ,param_14,(char)in_stack_ffffffffffffff68);
                    uVar22 = *puVar3;
                    uVar8 = puVar3[5];
                    uVar28 = extraout_XMM0_Qa_13;
                  }
                  puVar24 = *(uint **)(puVar5 + 2);
                  param_13 = *(char **)(puVar19 + 2);
                  puVar37 = PTR_plus_perform_007158e0;
                  if ((uVar8 * uVar22 & 7) == 0) {
                    puVar37 = PTR_plus_perf8_00715b28;
                  }
                  param_14 = (char *)(long)(int)(uVar8 * uVar22);
                  dsp_add(uVar28,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6,param_7,
                          param_8,puVar37,4,*(undefined8 *)(puVar3 + 2),puVar24,param_13,param_14,
                          CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68));
                  uVar28 = extraout_RDX_18;
                  uVar11 = extraout_XMM0_Qa_14;
                }
                else {
LAB_004f89d0:
                  puVar21 = (undefined8 *)param_10[5];
                  uVar11 = class_getname((undefined8 *)*puVar21);
                  in_stack_ffffffffffffff68 = *puVar5;
                  param_14 = (char *)(ulong)puVar5[5];
                  pd_error(extraout_XMM0_Qa_15,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,
                           param_6,param_7,param_8,(long)puVar21,
                           "%s: incompatible signal inputs (%dx%d vs. %dx%d)",uVar11,
                           (ulong)puVar3[5],(char *)(ulong)*puVar3,param_14);
                  param_13 = (char *)((long)(int)puVar3[5] * (long)(int)*puVar3);
                  puVar37 = PTR_copy_perform_007158d8;
                  if (((ulong)param_13 & 7) == 0) {
                    puVar37 = PTR_copy_perf8_00715d60;
                  }
                  puVar24 = *(uint **)(puVar19 + 2);
                  dsp_add(extraout_XMM0_Qa_16,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,
                          param_6,param_7,param_8,puVar37,3,*(undefined8 *)(puVar3 + 2),puVar24,
                          param_13,param_14,
                          CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68));
                  uVar28 = extraout_RDX_19;
                  uVar11 = extraout_XMM0_Qa_17;
                }
                param_2 = CONCAT44(uVar44,fVar43);
                *puVar38 = puVar19;
                puVar19[7] = 1;
                if (puVar3[7] == 0) {
                  signal_makereusable(uVar11,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6
                                      ,param_7,param_8,(long)puVar3,(long)puVar4,uVar28,
                                      (ulong)puVar24,param_13,param_14);
                  param_2 = CONCAT44(uVar44,fVar43);
                  uVar8 = puVar5[7];
                  uVar28 = extraout_RDX_20;
                  uVar11 = extraout_XMM0_Qa_18;
                }
                else {
                  uVar8 = puVar5[7];
                }
                if (uVar8 == 0) {
                  signal_makereusable(uVar11,CONCAT44(uVar44,fVar43),param_3,param_4,param_5,param_6
                                      ,param_7,param_8,(long)puVar5,(long)puVar4,uVar28,
                                      (ulong)puVar24,param_13,param_14);
                  param_2 = CONCAT44(uVar44,fVar43);
                  uVar28 = extraout_RDX_21;
                  uVar11 = extraout_XMM0_Qa_19;
                }
              }
              iVar36 = *(int *)(lVar33 + 4 + lVar39) + 1;
              *(int *)(lVar33 + 4 + lVar39) = iVar36;
              if (*(int *)(lVar33 + lVar39) <= iVar36) {
                uVar8 = puVar4[2];
                if (1 < (int)uVar8) {
                  puVar24 = (uint *)(*(long *)puVar4 + 4);
                  do {
                    uVar28 = (ulong)*puVar24;
                    if ((int)*puVar24 < (int)puVar24[-1]) goto LAB_004f86da;
                    uVar8 = uVar8 - 1;
                    puVar24 = puVar24 + 4;
                  } while (uVar8 != 0);
                }
                uVar11 = ugen_doit(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,(long *)puVar4,uVar28,puVar24,param_13,param_14);
                uVar28 = extraout_RDX_15;
              }
LAB_004f86da:
              puVar31 = (undefined8 *)puVar31[2];
            } while (puVar31 != (undefined8 *)0x0);
          }
          puVar23 = puVar23 + 6;
        } while (iVar9 != 0);
      }
      freebytes(plVar12);
      *(undefined4 *)(param_10 + 6) = 1;
      return;
    }
    plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
    if (*(int *)(*(long *)(*plVar16 + 0x40) + 0x134) == 0) {
      plVar29 = (long *)plVar35[6];
      iVar9 = *(int *)((long)plVar35 + 0x1c);
      uVar28 = extraout_RDX_09;
      uVar11 = extraout_XMM0_Qa_09;
      if (0 < iVar9) goto LAB_004f85f6;
LAB_004f861c:
      uVar11 = bug(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "signal_dereference",plVar13,uVar28,plVar27,param_13,param_14,
                   (char)in_stack_ffffffffffffff68);
      iVar9 = *(int *)((long)plVar35 + 0x1c) + -1;
      *(int *)((long)plVar35 + 0x1c) = iVar9;
      uVar28 = extraout_RDX_12;
    }
    else {
      plVar13 = plVar35;
      post(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "delayed deref %lx");
      plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar29 = (long *)plVar35[6];
      uVar28 = extraout_RDX_10;
      uVar11 = extraout_XMM0_Qa_10;
      if (*(int *)(*(long *)(*plVar16 + 0x40) + 0x134) != 0) {
        plVar13 = plVar35;
        uVar11 = post(extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "dereference %lx: %d");
        uVar28 = extraout_RDX_11;
      }
      iVar9 = *(int *)((long)plVar35 + 0x1c);
      if (iVar9 < 1) goto LAB_004f861c;
LAB_004f85f6:
      iVar9 = iVar9 + -1;
      *(int *)((long)plVar35 + 0x1c) = iVar9;
    }
    if (iVar9 == 0) {
      uVar11 = signal_makereusable(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   (long)plVar35,(long)plVar13,uVar28,(ulong)plVar27,param_13,
                                   param_14);
      uVar28 = extraout_RDX_13;
    }
  } while( true );
}


