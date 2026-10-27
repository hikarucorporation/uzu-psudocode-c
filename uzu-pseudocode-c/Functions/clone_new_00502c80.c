// Function : clone_new
// Namespace: 
// Entry    : 00502c80
// Prototype: long * clone_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00502c80 - 0050328f


long * clone_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,undefined8 param_9,
                ulong param_10,int *param_11,int *param_12,uint *param_13,uint *param_14)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  uint *puVar12;
  long extraout_RAX;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  undefined7 extraout_var;
  char *pcVar16;
  undefined7 extraout_var_00;
  undefined8 *puVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar21;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar23;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined8 uVar24;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Db_13;
  undefined1 in_stack_ffffffffffffffb8;
  
  uVar18 = param_10 & 0xffffffff;
  plVar11 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long *)PTR_clone_class_00715970,param_10,param_11,param_12,(char *)param_13,
                   param_14);
  puVar12 = (uint *)__tls_get_addr();
  uVar2 = *puVar12;
  uVar23 = canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8);
  plVar11[6] = extraout_RAX;
  plVar11[10] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  *(undefined4 *)((long)plVar11 + 0x84) = 0;
  *(byte *)(plVar11 + 0x11) = *(byte *)(plVar11 + 0x11) & 0xf8;
  *puVar12 = 0xffffffff;
  if ((int)param_10 == 0) {
    plVar11[8] = 0;
    *(undefined4 *)(plVar11 + 7) = 0;
  }
  else {
    uVar7 = canvas_suspend_dsp(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar23 = extraout_RDX;
    fVar21 = extraout_XMM0_Da_00;
    uVar22 = extraout_XMM0_Db_00;
    if (0 < (int)param_10) {
      do {
        while( true ) {
          uVar9 = (uint)uVar18;
          if ((*param_11 != 2) ||
             (pcVar16 = (char *)**(undefined8 **)(param_11 + 2), *pcVar16 != '-')) {
            if (uVar9 < 2) goto LAB_00502fa0;
            fVar21 = (float)atom_getfloatarg(0,uVar9,(long)param_11);
            iVar8 = (int)fVar21;
            if ((iVar8 < 0) || (param_11[4] != 2)) {
              fVar21 = (float)atom_getfloatarg(1,uVar9,(long)param_11);
              iVar8 = (int)fVar21;
              uVar23 = extraout_RDX_05;
              uVar22 = extraout_XMM0_Db_06;
              if ((iVar8 < 0) || (*param_11 != 2)) goto LAB_00502fa0;
              lVar19 = *(long *)(param_11 + 2);
            }
            else {
              lVar19 = *(long *)(param_11 + 6);
            }
            plVar11[0xd] = lVar19;
            *(uint *)(plVar11 + 0xe) = uVar9 - 1;
            pvVar13 = getbytes((ulong)(uVar9 - 1) << 4);
            plVar11[0xf] = (long)pvVar13;
            memcpy(pvVar13,param_11 + 4,(long)(int)plVar11[0xe] << 4);
            puVar3 = (undefined4 *)plVar11[0xf];
            *puVar3 = 1;
            puVar3[2] = (float)*(int *)((long)plVar11 + 0x84);
            pcVar4 = (char *)plVar11[0xd];
            lVar19 = plVar11[0xe];
            bVar1 = *(byte *)(plVar11 + 0x11);
            param_12 = (int *)((ulong)(bVar1 & 1) * 0x10 + plVar11[0xf]);
            plVar14 = (long *)__tls_get_addr(&PTR_007159b0);
            *(undefined8 *)(*plVar14 + 0x58) = 0;
            pcVar16 = pcVar4;
            uVar23 = pd_typedmess(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_06),param_2,param_3,
                                  param_4,param_5,param_6,param_7,param_8,
                                  (long *)PTR_pd_objectmaker_00715510,(undefined8 *)pcVar4,
                                  (int)lVar19 - (bVar1 & 1),param_12,param_13,param_14);
            plVar15 = *(long **)(*plVar14 + 0x58);
            if (plVar15 == (long *)0x0) {
              pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                       "clone: can\'t create subpatch \'%s\'",*(undefined8 *)pcVar4,param_12,
                       (char *)param_13,param_14);
              pvVar13 = (void *)plVar11[0xf];
            }
            else {
              param_12 = (int *)*plVar15;
              if (param_12 == *(int **)PTR_canvas_class_00715918) {
                *(undefined8 *)(*plVar14 + 0x58) = 0;
                *(byte *)((long)plVar15 + 0xe9) = *(byte *)((long)plVar15 + 0xe9) | 8;
                uVar9 = obj_ninlets(plVar15);
                *(uint *)(plVar11 + 9) = uVar9;
                if ((int)uVar9 < 1) {
                  pcVar16 = getbytes(0x18);
                  plVar11[10] = (long)pcVar16;
                  *(undefined8 *)pcVar16 = clone_in_class;
                  *(long **)(pcVar16 + 8) = plVar11;
                  pcVar16[0x10] = '\0';
                  pcVar16[0x11] = '\0';
                  pcVar16[0x12] = '\0';
                  pcVar16[0x13] = '\0';
                  pcVar16[0x14] = '\0';
                  pcVar16[0x15] = '\0';
                  pcVar16[0x16] = '\0';
                  pcVar16[0x17] = '\0';
                  param_12 = (int *)0x0;
                  inlet_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_09),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar11,(long)pcVar16,0,0,
                            (char *)param_13,param_14);
                }
                else {
                  pvVar13 = getbytes((ulong)uVar9 * 0x18);
                  plVar11[10] = (long)pvVar13;
                  if (0 < (int)plVar11[9]) {
                    lVar19 = 0;
                    lVar20 = 0;
                    while( true ) {
                      *(undefined8 *)((long)pvVar13 + lVar19) = clone_in_class;
                      *(long **)((long)pvVar13 + lVar19 + 8) = plVar11;
                      bVar6 = obj_issignalinlet(plVar15,(int)lVar20);
                      lVar5 = plVar11[10];
                      pcVar16 = (char *)(lVar5 + lVar19);
                      iVar10 = (int)CONCAT71(extraout_var,bVar6);
                      *(int *)(lVar5 + 0x10 + lVar19) = iVar10;
                      *(int *)(lVar5 + 0x14 + lVar19) = (int)lVar20;
                      if (iVar10 == 0) {
                        param_12 = (int *)0x0;
                        uVar22 = extraout_XMM0_Da_07;
                        uVar25 = extraout_XMM0_Db_08;
                      }
                      else {
                        plVar14 = (long *)__tls_get_addr(&PTR_007159b0);
                        param_12 = (int *)(*plVar14 + 0xf0);
                        uVar22 = extraout_XMM0_Da_08;
                        uVar25 = extraout_XMM0_Db_09;
                      }
                      inlet_new(CONCAT44(uVar25,uVar22),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,(long)plVar11,(long)pcVar16,(long)param_12,
                                (long)param_12,(char *)param_13,param_14);
                      lVar20 = lVar20 + 1;
                      if ((int)plVar11[9] <= lVar20) break;
                      pvVar13 = (void *)plVar11[10];
                      lVar19 = lVar19 + 0x18;
                    }
                  }
                }
                iVar10 = obj_noutlets((long)plVar15);
                *(int *)(plVar11 + 0xb) = iVar10;
                pvVar13 = getbytes((long)iVar10 << 4);
                plVar11[0xc] = (long)pvVar13;
                if (0 < (int)plVar11[0xb]) {
                  lVar19 = 0;
                  lVar20 = 0;
                  do {
                    bVar6 = obj_issignaloutlet((long)plVar15,(int)lVar20);
                    iVar10 = (int)CONCAT71(extraout_var_00,bVar6);
                    *(int *)(plVar11[0xc] + 8 + lVar19) = iVar10;
                    plVar14 = (long *)__tls_get_addr(&PTR_007159b0);
                    pcVar16 = (char *)0x0;
                    if (iVar10 != 0) {
                      pcVar16 = (char *)(*plVar14 + 0xf0);
                    }
                    plVar14 = outlet_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_10),param_2,
                                         param_3,param_4,param_5,param_6,param_7,param_8,
                                         (long)plVar11,(long)pcVar16,extraout_RDX_07,param_12,
                                         (char *)param_13,param_14);
                    param_12 = (int *)plVar11[0xc];
                    *(long **)((long)param_12 + lVar19) = plVar14;
                    lVar20 = lVar20 + 1;
                    lVar19 = lVar19 + 0x10;
                  } while (lVar20 < (int)plVar11[0xb]);
                }
                puVar17 = getbytes(0x10);
                plVar11[8] = (long)puVar17;
                *(undefined4 *)(plVar11 + 7) = 1;
                *puVar17 = plVar15;
                plVar14 = getbytes((long)(int)plVar11[0xb] * 0x18);
                plVar15 = (long *)plVar11[8];
                plVar15[1] = (long)plVar14;
                uVar23 = extraout_RDX_08;
                if (0 < (int)plVar11[0xb]) {
                  lVar19 = 1;
                  lVar20 = 0;
                  uVar22 = extraout_XMM0_Da_11;
                  uVar25 = extraout_XMM0_Db_12;
                  while( true ) {
                    *plVar14 = clone_out_class;
                    *(undefined4 *)(plVar14 + 2) = *(undefined4 *)((long)plVar11 + 0x84);
                    plVar14[1] = *(long *)(plVar11[0xc] + lVar20);
                    uVar9 = (int)lVar19 - 1;
                    pcVar16 = (char *)(ulong)uVar9;
                    param_12 = (int *)0x0;
                    obj_connect(CONCAT44(uVar25,uVar22),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,*plVar15,uVar9,plVar14,0);
                    uVar23 = extraout_RDX_09;
                    if ((int)plVar11[0xb] <= lVar19) break;
                    plVar15 = (long *)plVar11[8];
                    lVar19 = lVar19 + 1;
                    plVar14 = plVar14 + 3;
                    lVar20 = lVar20 + 0x10;
                    uVar22 = extraout_XMM0_Da_12;
                    uVar25 = extraout_XMM0_Db_13;
                  }
                }
                uVar23 = clone_setn((ulong)(uint)(float)iVar8,param_2,param_3,param_4,param_5,
                                    param_6,param_7,param_8,(long)plVar11,pcVar16,uVar23,param_12,
                                    param_13,param_14);
                *(int *)(plVar11 + 0x10) = iVar8 + -1;
                canvas_resume_dsp(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  (ulong)uVar7,pcVar16,extraout_RDX_10,param_12,(char *)param_13,
                                  param_14);
                if ((int)uVar2 < 0) {
                  return plVar11;
                }
                if ((int)uVar2 < (int)plVar11[7]) {
                  canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,*(long **)(plVar11[8] + (ulong)uVar2 * 0x10),pcVar16,
                             extraout_RDX_11,(undefined *)param_12,(char *)param_13,
                             (undefined *)param_14,in_stack_ffffffffffffffb8);
                  return plVar11;
                }
                return plVar11;
              }
              pd_error(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                       "clone: can\'t clone \'%s\' because it\'s not an abstraction",
                       *(undefined8 *)pcVar4,param_12,(char *)param_13,param_14);
              plVar15 = (long *)__tls_get_addr(&PTR_007159b0);
              pd_free(*(long **)(*plVar15 + 0x58));
              *(undefined8 *)(*plVar15 + 0x58) = 0;
              pvVar13 = (void *)plVar11[0xf];
            }
            goto joined_r0x0050300f;
          }
          iVar8 = strcmp(pcVar16,"-s");
          if (((iVar8 != 0) || ((int)uVar9 < 2)) || (param_11[4] != 1)) break;
          *(int *)((long)plVar11 + 0x84) = (int)(float)param_11[6];
          param_12 = (int *)0xfffffffe;
          param_11 = param_11 + 8;
          uVar18 = (ulong)(uVar9 - 2);
          uVar23 = extraout_RDX_00;
          fVar21 = extraout_XMM0_Da_01;
          uVar22 = extraout_XMM0_Db_01;
          if (uVar9 - 2 == 0 || (int)uVar9 < 2) goto LAB_00502fa0;
        }
        iVar8 = strcmp(pcVar16,"-x");
        if (iVar8 == 0) {
          *(byte *)(plVar11 + 0x11) = *(byte *)(plVar11 + 0x11) | 1;
          uVar23 = extraout_RDX_01;
          fVar21 = extraout_XMM0_Da_02;
          uVar22 = extraout_XMM0_Db_02;
        }
        else {
          iVar8 = strcmp(pcVar16,"-d");
          if (iVar8 == 0) {
            *(byte *)(plVar11 + 0x11) = *(byte *)(plVar11 + 0x11) | 6;
            uVar23 = extraout_RDX_02;
            fVar21 = extraout_XMM0_Da_03;
            uVar22 = extraout_XMM0_Db_03;
          }
          else {
            iVar8 = strcmp(pcVar16,"-di");
            if (iVar8 == 0) {
              *(byte *)(plVar11 + 0x11) = *(byte *)(plVar11 + 0x11) | 2;
              uVar23 = extraout_RDX_03;
              fVar21 = extraout_XMM0_Da_04;
              uVar22 = extraout_XMM0_Db_04;
            }
            else {
              iVar8 = strcmp(pcVar16,"-do");
              uVar23 = extraout_RDX_04;
              fVar21 = extraout_XMM0_Da_05;
              uVar22 = extraout_XMM0_Db_05;
              if (iVar8 != 0) break;
              *(byte *)(plVar11 + 0x11) = *(byte *)(plVar11 + 0x11) | 4;
            }
          }
        }
        param_12 = (int *)0xffffffff;
        param_11 = param_11 + 4;
        uVar18 = (ulong)(uVar9 - 1);
      } while (uVar9 - 1 != 0 && 0 < (int)uVar9);
    }
LAB_00502fa0:
    pd_error(CONCAT44(uVar22,fVar21),param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "usage: clone [-s starting-number] <number> <name> [arguments]",uVar23,param_12,
             (char *)param_13,param_14);
    pvVar13 = (void *)plVar11[0xf];
joined_r0x0050300f:
    if (pvVar13 != (void *)0x0) {
      freebytes(pvVar13);
    }
    uVar23 = 0x90;
    uVar24 = freebytes(plVar11);
    canvas_resume_dsp(uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar7,
                      uVar23,extraout_RDX_06,param_12,(char *)param_13,param_14);
    plVar11 = (long *)0x0;
  }
  return plVar11;
}


